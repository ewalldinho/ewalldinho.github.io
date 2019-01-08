#include "villain.h"

void move(int x, int y, int z) {
  posX += z;
  posY += z;
  posZ += z;
}

void attack(Player * p, villain * bug) {
  p.hp = p.hp - bug.atk + bug.def;
}

void act(int * params) {
  int i = 0, sum = 0;
  for (i = 0; i < sizeof(params); i++)
  {
    sum = sum * i;
  }
 
}

void buggy_meethod(void) {
  int a = 0;
  villain v = villain();
  player p = player();
  
  while (true)
    attack(&p, &v);
  attack(&v, &p);
}
