//include the header file
#include "pokemon.h"


//lets create the constructor
Pokemon::Pokemon(string name, string type, vector<Attack> attacks)
{
    this->name = name;
    this->type = type;
    this->attacks = attacks;

}

//desrtcutor
Pokemon::~Pokemon() {
    // can leave empty because I didnt allocate memory for anything
}

string Pokemon::getName()
{
    return this->name;
}

string Pokemon::getType()
{
    return this->type;
}

int Pokemon::getHealth()
{
    return this->health;
}

void Pokemon::setHealth(int newHealth)
{
    this->health = newHealth;
}

bool Pokemon::isFainted()
{
    if(this->health <= 0)
    {
        return true;
    }
    return false;
}

int Pokemon::attack(string attackName)
{
    for(int i = 0; i < attacks.size(); i += 1)
    {
        if(attacks[i].attackName == attackName)
        {
            return attacks[i].damage;
        }
    }
    return 0;

}

vector<Attack> Pokemon::getAttacks()
{
    return this->attacks;
}

void Pokemon::takeDamage(int amount)
{
    this->health -= amount;
}

