#ifndef PODCAST_H
#define PODCAST_H

#include <string>
#include <iostream>
// Imports song cpp for inheritance (this is a child class)
#include "Song.h"

class Podcast : public Song{
    public:
        std::string sponsor;
        int episode;

    Podcast(std::string title, std::string artist, int time, std::string sponsor, int episode):
    Song(title, artist, time), sponsor(sponsor), episode(episode) {}

    void PodcastDetails(){
        std::cout << "Title: " << title << "\nArtist: " << artist << "\nTime: " << time
        << "\nEpisode: " << episode << "\nSponsor: " << sponsor << "\n";
    }
};

#endif