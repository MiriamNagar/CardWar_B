
#include "card.hpp"
#include <iostream>
#include <string>

using namespace std;
using namespace ariel;

Card::Card(){}

Card::Card(int suit, int value)
{
    this->suit = suit;
    this->value = value;
}

string Card::convertCard()
{
    string ret;
    switch(value){
        case 1: 
            ret = "ace of ";
            break;
        case 11:
            ret = "jack of "; 
            break;
        case 12: 
            ret = "queen of ";
            break;
        case 13: 
            ret = "king of ";
            break;
        default:
            ret = to_string(value) + " of ";
    }
    switch(suit){
        case 1:
            ret += "hearts";
            break;
        case 2:
            ret += "clubs";
            break;
        case 3:
            ret += "diamonds";
            break;
        case 4:
            ret += "spades";
            break;
    }
    return ret;
}
