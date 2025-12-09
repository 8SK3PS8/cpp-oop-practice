#ifndef POKEMON
#define POKEMON

//includes
//#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

struct Attack {
    string attackName;
    int damage;

    Attack(string n, int d) : attackName(n), damage(d) {}
};

class Pokemon{

public:
    Pokemon(string name, string type, vector<Attack> attacks);
    ~Pokemon();

    vector<Attack> getAttacks();
    string getName();
    string getType();
    int getHealth();
    void setHealth(int newHealth);
    bool isFainted();
    int attack(string attackName); //returns the damage done
    void takeDamage(int amount);

private:
    string name;
    string type;
    int health;
    vector<Attack> attacks;

};

#endif