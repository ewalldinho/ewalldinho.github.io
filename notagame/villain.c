#include<stdio.c>

struct villain {
  char * name;
  int level;
  int atk;
  int def;
  int hp;
}

villain * create_villain() {
  villain * v;
  malloc(sizeof(villain), &v);
  return &v;
}
