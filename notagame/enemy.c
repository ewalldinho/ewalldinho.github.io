class Enemy : IArtificialInteligence
{
	bool alive = true;
	int power = 5;
	int hp = 100;
	void attack(ICharacter hero)
	{
		hero.hit(power);
	}
	void defend(ICharacter hero)
	{
		hp = hp - hero.atkPower;
		if (hp <= 0)
			alive = false;
	}
}