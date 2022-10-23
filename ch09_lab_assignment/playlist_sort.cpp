#include <iostream>
#include <iomanip>
#include <string>
#include "Song.h"
#include "Song.cpp"
using namespace std;

int main()
{
    string some_title;
    string some_artist;
    int i;
    int N_SONGS = 10;
    Song playlist[N_SONGS];

    for (i = 0; i < N_SONGS; i++)
    {
        cout << "Enter title for song #" << i+1 << ": " << endl;
        getline(cin, some_title);
        cout << "Enter artist for song #" << i+1 << ": " << endl;
        getline(cin, some_artist);

        playlist[i].set_title(some_title);
        playlist[i].set_artist(some_artist);
    }

    cout << "        Artist			Title          " << endl;
    cout << "======================================" << endl;

    for (i = 0; i < N_SONGS; i++)
    {
        cout << playlist[i].get_artist() << "\t\t";
        cout << playlist[i].get_title() << endl;
    }

    return 0;
}

