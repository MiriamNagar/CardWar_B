// #pragma once
#include "player.hpp"
#include <string>
#include <iostream>

using namespace std;
using namespace ariel;


Player::Player(string name)
{
    this->cards_left = {};
    this->name = name;
    this->num_of_cards_won = 0;
    this->num_of_cards_left = 0;
    this->playing_game = false;
    
}

int Player::stacksize()
{
    return this->num_of_cards_left;
}

int Player::cardesTaken()
{
    return 2*(this->num_of_cards_won);
}

void Player::printCards()
{
    for(size_t i = 25; i >= 0 ; i--)
    {
        cout << (this->cards_left[i]).convertCard() << endl;
    }
}