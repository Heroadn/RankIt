#include <vector>
#include "Rank.hpp"

int main()
{
    std::vector<Card> straight = {
        {Suit::HEART, Rank::TEN},
        {Suit::CLUBS, Rank::NINE},
        {Suit::DIAMONDS, Rank::EIGHT},
        {Suit::SPADES, Rank::SEVEN},
        {Suit::HEART, Rank::SIX}
    };

    std::vector<Card> straightFlush = {
        {Suit::HEART, Rank::TEN},
        {Suit::HEART, Rank::NINE},
        {Suit::HEART, Rank::EIGHT},
        {Suit::HEART, Rank::SEVEN},
        {Suit::HEART, Rank::SIX}
    };

    std::vector<Card> fourOfAKind = {
        {Suit::HEART, Rank::QUEEN},
        {Suit::SPADES, Rank::QUEEN},
        {Suit::DIAMONDS, Rank::QUEEN},
        {Suit::CLUBS, Rank::QUEEN},
        {Suit::DIAMONDS, Rank::QUEEN}
    };

    std::vector<Card> threeOfAKind = {
        {Suit::HEART, Rank::QUEEN},
        {Suit::SPADES, Rank::QUEEN},
        {Suit::DIAMONDS, Rank::QUEEN},
        {Suit::CLUBS, Rank::SEVEN},
        {Suit::SPADES, Rank::SIX}
    };

    std::vector<Card> fullHouse = {
       {Suit::HEART, Rank::ACE},
       {Suit::CLUBS, Rank::ACE},
       {Suit::DIAMONDS, Rank::ACE},
       {Suit::SPADES, Rank::KING},
       {Suit::HEART, Rank::KING}
    };

    std::vector<Card> flush = {
       {Suit::CLUBS, Rank::KING},
       {Suit::CLUBS, Rank::TEN},
       {Suit::CLUBS, Rank::EIGHT},
       {Suit::CLUBS, Rank::SEVEN},
       {Suit::CLUBS, Rank::FIVE}
    };

    std::vector<Card> royalFlush = {
       {Suit::HEART, Rank::ACE},
       {Suit::HEART, Rank::KING},
       {Suit::HEART, Rank::QUEEN},
       {Suit::HEART, Rank::JACK},
       {Suit::HEART, Rank::TEN}
    };

    std::vector<Card> onePair = {
       {Suit::SPADES, Rank::QUEEN},
       {Suit::HEART, Rank::QUEEN},
       {Suit::HEART, Rank::SIX},
       {Suit::CLUBS, Rank::NINE},
       {Suit::DIAMONDS, Rank::TWO}
    };

    std::vector<Card> twoPair = {
       {Suit::HEART, Rank::JACK},
       {Suit::CLUBS, Rank::JACK},
       {Suit::DIAMONDS, Rank::NINE},
       {Suit::CLUBS, Rank::NINE},
       {Suit::DIAMONDS, Rank::TWO}
    };

    std::vector<Card> test1 = {
       {Suit::SPADES, Rank::ACE},
       {Suit::SPADES, Rank::KING},
       {Suit::SPADES, Rank::QUEEN},
       {Suit::SPADES, Rank::JACK},
       {Suit::SPADES, Rank::TEN}
    };

    std::vector<Card> test2 = {
      {Suit::HEART, Rank::KING},
      {Suit::CLUBS, Rank::KING},
      {Suit::DIAMONDS, Rank::KING},
      {Suit::CLUBS, Rank::SEVEN},
      {Suit::SPADES, Rank::NINE}
    };

    // Printing Straight Flush and its cards
    Ranking::print(straightFlush);

    // Printing Test1
    std::cout << Ranking::toString(Ranking::ranking(test1)) << std::endl;

	return 0;
}