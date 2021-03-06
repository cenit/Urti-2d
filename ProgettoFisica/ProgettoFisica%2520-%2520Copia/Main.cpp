#include "MyLibrary.hpp"
#include "Spazio.hpp"
#include "Particella.hpp"


int main(){
  Spazio* s=new Spazio;
  cout<<fixed;
  srand(time(NULL));
  //cout<<PI<<endl;
  Particella* p1=new Particella((char*)"A",2,15,5,10,-90,10);
  Particella* p2=new Particella((char*)"B",0,-15,5,1,90,20);
  Particella* p3=new Particella((char*)"C",10,3,3,1,-170,5);
  Particella* p4=new Particella((char*)"D",-9,9,4,0,0,9);
  Particella* p5=new Particella((char*)"E",-3,-7,2,3,15,6);
  Particella* p6=new Particella((char*)"F",-25,8,7,6,-15,4);
 s->add_particella(p6);
 s->add_particella(p5);
 s->add_particella(p4);
 s->add_particella(p3);
  s->add_particella(p2);
  s->add_particella(p1);
  char c;
  s->print_statistics();
  s->check_position();
  do{
  /*while (!kbhit()){
   clear_screen(); usleep(5000); s->avanza_tempo(); s->print_grafic(); }*/
  c=getch();
  clear_screen();
  switch (c){
   case 'a':{s->inc_pace(); break;}
   case 'd':{s->dec_pace(); break;}
   case 'g':{clear_screen(); s->print_grafic(); break;}
   case 's':{s->avanza_tempo(); /*s->print_position();*/ s->print_grafic(); break;}
   case 'b':{s->arretra_tempo(); s->print_position(); /*getch(); clear_screen();*/ break;}
   case 'p':{s->print_statistics(); /*getch(); clear_screen();*/ break;}
   default:{s->avanza_tempo(); break;}}}
  while (c!='f');
  return 0;
}
