#ifndef MUSICPLAYER_H
#define MUSICPLAYER_H

#include "queue.h"
#include "Podcast.h"

class MusicPlayer{
    public:
        //two playlists - one for songs one for podcasts
        Queue<Song> SongPlaylist;
        Queue<Podcast> PodcastPlaylist;

        //Adds a song or podcast to their queue
        void addSong(Song song){
            SongPlaylist.enqueue(song);
        }
        void addPodcast(Podcast podcast){
            PodcastPlaylist.enqueue(podcast);
        }

        //Removes a song or podcast from their queue
        void skipSong(){
            SongPlaylist.dequeue();
        }
        void skipPodcast(){
            PodcastPlaylist.dequeue();
        }

        //Plays/peeks the top song/podcast of their respective queue
        void playSong(){
            if (!SongPlaylist.is_empty()) {
                Song current = SongPlaylist.peek();
                current.SongDetails();
            }
        }
        void playPodcast(){
            if (!PodcastPlaylist.is_empty()) {
                Podcast current = PodcastPlaylist.peek();
                current.PodcastDetails();
            }
        }

};

#endif