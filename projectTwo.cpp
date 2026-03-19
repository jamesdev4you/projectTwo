#include "MusicPlayer.h"
#include <iostream>
#include <string>

int main(){
    MusicPlayer player;
    int choice;

    while(true) {
        std::cout << "1. Add Song\n2. Add Podcast\n3. Play Song\n4. Play Podcast\n5. Skip Song\n6. Skip Podcast\n7. Quit";
        std::cin >> choice;

        if(choice == 1){
            std::string title, artist;
            double time;
            
            std::cout << "What is the podcast title?\n";
            std::cin >> title;
            std::cout<< "What is the podcast host?\n";
            std::cin >> artist;
            std::cout << "What is the podcast duration?\n"; 
            std::cin >> time;
            
            player.addSong(Song(title, artist, time));
        }
        else if(choice == 2){
            std::string title, artist, sponsor;
            double time;
            int episode;
            
            std::cout << "What is the podcast title?\n";
            std::cin >> title;
            std::cout << "What is the podcast host?\n";
            std::cin >> artist;
            std::cout << "What is the podcast duration?\n"; 
            std::cin >> time;
            std::cout << "What is the episde number?\n";
            std::cin >> episode;
            std::cout << "Who is the podcast sponsor?\n";
            std::cin >> sponsor;
            
            player.addPodcast(Podcast(title, artist, time, sponsor, episode));
        }
        else if(choice == 3){
            player.playSong();
        }
        else if(choice == 4){
            player.playPodcast();
        }
        else if(choice == 5){
            player.skipSong();
        }
        else if(choice == 6){
            player.skipPodcast();
        }
        else{
            break;
        }
    }

    return 0;

    
}