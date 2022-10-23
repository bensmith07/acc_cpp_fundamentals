// defining the Song class

#ifndef SONG_H
#define SONG_H

using namespace std;

class Song
{
    private:
        string title;
        string artist;
    public:
        Song();
        void set_title(string);
        void set_artist(string);
        string get_title();
        string get_artist();
};

#endif