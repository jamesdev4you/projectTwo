// include guards to prevent redefining of SONG_CPP
#ifndef SONG_CPP
#define SONG_CPP

// Gives string data type
#include <string>
// Allows for printing
#include <iostream>

class Song{
    public: 
        // Three data points in every song and podcast
        std::string title;
        std::string artist;
        double time;

        // Constructor. Deconstructor not needed due to dequeue.
        Song(std::string title, std::string artist, double time) :
            title(title), artist(artist), time(time)
            {};

        // Prints out song details using iostream cout
        void SongDetails(){
            std::cout << "Title: " << title << "\nArtist: " << artist << "\nTime: " << time;
        }

};



#endif 