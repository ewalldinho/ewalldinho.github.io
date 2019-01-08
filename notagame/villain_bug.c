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
