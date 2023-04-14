#pragma once
#include <list>
#include <string>
#include "player.hpp"
#include "card.hpp"
#include <iostream>
#include <cstdlib>
#include <array>

using namespace std;

namespace ariel
{
    class Game
    {
        private:
            static unsigned long const NUM_OF_CARDS_IN_DECK = 52;
            Player& playerA;
            Player& playerB;
            size_t current_turn;
            int amount_of_draws;
            array<int, NUM_OF_CARDS_IN_DECK> all_cards;
            int winner;
            string printL;
            string printLast;
            bool flipped;
            bool game_ended;


        public:
            Game(Player& nameA, Player& nameB);
            void dealCards();
            void playTurn();
            void printLastTurn();
            void playAll();
            void printWiner();
            void printLog();
            void printStats();

    };
}