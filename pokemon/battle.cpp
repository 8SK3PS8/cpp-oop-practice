#include "battle.h"


Battle::Battle()
{
}

//destructor
Battle::~Battle()
{
    // we didnt allocate any mem so not needed
}

void Battle::addBattler(Trainer opp)
{
    this->battlers.push_back(opp);
}

void Battle::startBattle()
{
    int turn = 0;
    
    while(battlers[0].hasAvailablePokemon() && battlers[1].hasAvailablePokemon())
    {
        int attackerIndex = turn % 2;
        int defenderIndex = (turn + 1) % 2;
        
        Trainer& attacker = battlers[attackerIndex];
        Trainer& defender = battlers[defenderIndex];
        
        Pokemon& attackingPokemon = attacker.getActivePokemon();
        Pokemon& defendingPokemon = defender.getActivePokemon();
        
        vector<Attack> attacks = attackingPokemon.getAttacks();
        int damage = attackingPokemon.attack(attacks[0].attackName);
        
        defendingPokemon.takeDamage(damage);
        
        cout << attackingPokemon.getName() << " used " << attacks[0].attackName 
             << " for " << damage << " damage!" << endl;
        cout << defendingPokemon.getName() << " has " << defendingPokemon.getHealth() 
             << " HP left." << endl;
        
        if(defendingPokemon.isFainted())
        {
            cout << defendingPokemon.getName() << " fainted!" << endl;
            // Could add logic here to switch to next pokemon
        }
        
        turn++;
    }
    
    // Determine winner
    if(battlers[0].hasAvailablePokemon())
    {
        cout << battlers[0].getName() << " wins!" << endl;
    }
    else
    {
        cout << battlers[1].getName() << " wins!" << endl;
    }
}

int main()
{
    //some attacks
    vector<Attack> pikachuAttacks;
    pikachuAttacks.push_back(Attack("Thunderbolt", 40));
    pikachuAttacks.push_back(Attack("Quick Attack", 20));
    
    vector<Attack> charmanderAttacks;
    charmanderAttacks.push_back(Attack("Flamethrower", 35));
    charmanderAttacks.push_back(Attack("Scratch", 15));
    
    //pokemon
    Pokemon pikachu("Pikachu", "Electric", pikachuAttacks);
    pikachu.setHealth(100);
    
    Pokemon charmander("Charmander", "Fire", charmanderAttacks);
    charmander.setHealth(100);
    
    //trainers
    Trainer ash("Ash", "Kanto");
    ash.addPokemon(pikachu);
    
    Trainer gary("Gary", "Kanto");
    gary.addPokemon(charmander);
    
    //battle
    Battle battle;
    battle.addBattler(ash);
    battle.addBattler(gary);
    battle.startBattle();
    
    return 0;
}