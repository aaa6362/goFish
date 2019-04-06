//
// Created by Allan Frederick on 2019-04-05.
//

#include "card.h"

using namespace std;

Card::Card() {
    mySuit = spades;
    myRank = 1;
}

Card::Card(int rank, Card::Suit s) {
    mySuit = s;
    myRank = rank;
}

bool Card::operator==(const Card &rhs) const {
    return (myRank == rhs.myRank);
}

int Card::getRank() const {
    return myRank;
}

bool Card::operator!=(const Card &rhs) const {
    return (myRank != rhs.myRank);
}

bool Card::sameSuitAs(const Card &c) const {
    return (mySuit == c.mySuit);

}

string Card::rankString(int r) const {
    if (r == 1)
        return "A";
    if (r == 11)
        return "J";
    if (r == 12)
        return "Q";
    if (r == 13)
        return "K";
    return to_string(r);
}


string Card::suitString(Card::Suit s) const {
    if (s == spades)
        return "s";
    if (s == clubs)
        return "c";
    if (s == diamonds)
        return "d";
    if (s == hearts)
        return "h";
}

string Card::toString() const {
    return rankString(myRank) + suitString(mySuit);
}


