#ifndef BATTLE
#define BATTLE

//#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <iostream>
#include "trainer.h"
using namespace std;

class Battle{

    public:
        Battle();
        ~Battle();

        void addBattler(Trainer opp);
        void startBattle();


    private:
        vector<Trainer> battlers;


};
#endif