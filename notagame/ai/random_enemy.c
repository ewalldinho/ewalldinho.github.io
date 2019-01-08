#include<villain.c>
#include<friend.c>

void drop_enemy(Player * p, int probability) {
  int r = rand() * 1000;
  if (r > probability)
    create_enemy(p);
  else 
    create_friendly(p);
    
}
