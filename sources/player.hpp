#pragma once
#include <string>
#include "card.hpp"
#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>


using namespace std;


namespace ariel{
    class Player
    {
        public:
            static unsigned long const DECK_OF_CARDS_PLAYER_SIZE = 26;
            string name;
            int num_of_cards_won;
            int num_of_cards_left;
            vector<Card> cards_left;
            bool playing_game;
            Player(string name);
            int stacksize();
            int cardesTaken();
            void printCards();
    };
}
