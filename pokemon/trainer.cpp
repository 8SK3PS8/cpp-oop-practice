#include "trainer.h"

Trainer::Trainer(string Name, string Region)
{
    this->name = Name;
    this->region = Region;
    this->activePokemonIndex = 0;
}

Trainer::~Trainer()
{
    //nothing to put here as we didnt use any allocated memory
}

string Trainer::getName()
{
    return this->name;
}

string Trainer::getRegion()
{
    return this->region;
}

vector<Pokemon> Trainer::getPokemon()
{
    return this->pokemon;
}

void Trainer::addPokemon(Pokemon p)
{
    this->pokemon.push_back(p);
}

Pokemon& Trainer::choosePokemon(int index)
{
    this->activePokemonIndex = index;
    return this->pokemon[index];
}

Pokemon& Trainer::getActivePokemon()
{
    return this->pokemon[activePokemonIndex];
}

bool Trainer::hasAvailablePokemon()
{
    for(int i = 0; i < pokemon.size(); i++)
    {
        if(!pokemon[i].isFainted())
        {
            return true;
        }
    }
    return false;
}

