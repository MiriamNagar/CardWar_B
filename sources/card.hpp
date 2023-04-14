#pragma once
#include <string>
using namespace std;

namespace ariel{

class Card
{
public:
    Card();
    Card(int suit, int value);
    int get_val() const{return value;}
    int get_suit() const{return suit;}
    string convertCard();
    
private:
    int suit;
    int value;
};
}