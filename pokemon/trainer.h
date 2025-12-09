#ifndef TRAINER
#define TRAINER

//#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <iostream>
#include "pokemon.h"
using namespace std;

class Trainer{

    public:

        Trainer(string Name, string Region);
        ~Trainer();

        string getName();
        string getRegion();
        vector<Pokemon> getPokemon();

        Pokemon& choosePokemon(int index);
        Pokemon& getActivePokemon();
        void addPokemon(Pokemon p);
        bool hasAvailablePokemon();

    private:
        string name;
        string region;
        vector<Pokemon> pokemon;
        int activePokemonIndex;

};

#endif