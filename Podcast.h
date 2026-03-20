#ifndef PODCAST_H
#define PODCAST_H

#include <string>
#include <iostream>
// Imports song cpp for inheritance (this is a child class)
#include "Song.h"

class Podcast : public Song{
    public:
        // Additional subclass variables
        std::string sponsor;
        std::string episode;

        // Constructor
        Podcast(std::string title, std::string artist, std::string time, std::string sponsor, std::string episode):
        Song(title, artist, time), sponsor(sponsor), episode(episode) {}

        // Shows Podcast Details 
        void PodcastDetails(){
            std::cout << "Title: " << title << "\nArtist: " << artist << "\nTime: " << time
            << "\nEpisode: " << episode << "\nSponsor: " << sponsor << "\n";
    }
};

#endif