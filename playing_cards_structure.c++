#include<iostream>
using namespace std;

struct Card
{
    int face;
    int shape;
    int color;
};

int main()
{
    Card deck[52];
    deck[0]={1, 1, 1}; // Example initialization for the first card (Ace of Hearts)
    cout << "Card Face: " << deck[0].face << ", Shape: " << deck[0].shape << ", Color: " << deck[0].color << endl;
    return 0;
}