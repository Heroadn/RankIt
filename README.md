# RankIt
A Simple Poker hand Ranking lib

![test_)ahdjashdkjlas](https://github.com/Heroadn/RankIt/assets/36571620/0f3c0fe9-4d34-4f73-a03c-0eecc51a5f07)

 ```
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

std::vector<Card> test1 = {
    {Suit::SPADES, Rank::ACE},
    {Suit::SPADES, Rank::KING},
    {Suit::SPADES, Rank::QUEEN},
    {Suit::SPADES, Rank::JACK},
    {Suit::SPADES, Rank::TEN}
};

// Printing Straight Flush and its cards
Ranking::print(straightFlush);

// Printing Test1
std::cout << Ranking::toString(Ranking::ranking(test1)) << std::endl;
 ```
