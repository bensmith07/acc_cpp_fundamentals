// NAME: Ben Smith
// PROGRAM STATUS: Complete

// This program prompts the user to enter the title and artist
// for 10 songs and stores that information in an array of 
// 10 objects of the Song type. It sorts that array into
// alphabetical order by artist using a selection sort,
// then displays the information to the terminal in order. 

#include <iostream>
#include <iomanip>
#include <string>
#include "Song.h"       // defines the Song class
#include "Song.cpp"     // defines members of the Song class
using namespace std;

int main()
{
    string some_title;                      // stores user input for title
    string some_artist;                     // stores user input for artist
    int i;                                  // for count controlled for-loops
    int N_SONGS = 10;                       // number of songs to store in the array
    Song playlist[N_SONGS];                 // array of songs
    void playlist_sort(Song arr[], int);    // a selection sort algorithm

    // get song info for every element in the array
    for (i = 0; i < N_SONGS; i++)
    {   
        // prompt user for input
        cout << "Enter title for song #" << i+1 << ": " << endl;
        getline(cin, some_title);
        cout << "Enter artist for song #" << i+1 << ": " << endl;
        getline(cin, some_artist);
        // store input in corresponding array element
        playlist[i].set_title(some_title);
        playlist[i].set_artist(some_artist);
    }

    // sort playlist
    playlist_sort(playlist, N_SONGS);
    
    // output song info
    cout << "        Artist			Title          " << endl;
    cout << "======================================" << endl;

    // loop through all elements in the array
    for (i = 0; i < N_SONGS; i++)
    {   
        // display the corresponding song info
        cout << playlist[i].get_artist() << "\t\t";
        cout << playlist[i].get_title() << endl;
    }

    return 0;
}

// selection sort algorithm for sorting an array of Song objects
void playlist_sort(Song arr[], int size)
{
    int minIndex;       // stores the index of the current minimum value
    string minValue;    // current minimum value (artist name)

    // loop through elements in the array
    for (int start=0; start < (size - 1); start++)
    {   
        // get the name of the artist at the current index
        minIndex = start;
        minValue = arr[start].get_artist();
        // compare to the artist for the remaining array elements
        for (int index = start +1; index < size; index++)
        {   
            // if an element in the array is less than the current minValue
            if (arr[index].get_artist() < minValue)
            {   
                // set minValue & minIndex to that element
                minValue = arr[index].get_artist();
                minIndex = index;
            }
        }
        // swap the elements
        swap(arr[minIndex], arr[start]);
    }
}

// switches the positions of two songs within an array
void swap(Song &a, Song &b)
{
    Song temp = a;
    a = b;
    b = temp;
}