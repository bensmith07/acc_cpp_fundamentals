// defining members of the Song class

#include "Song.h"
#include <string>
using namespace std;

string artist;
string title;

Song::Song()
{
    title = "";
    artist = "";
}

void Song::set_title(string some_title)
    {title = some_title;}

void Song::set_artist(string some_artist)
    {artist = some_artist;}

string Song::get_title()
    {return title;}

string Song::get_artist()
    {return artist;}