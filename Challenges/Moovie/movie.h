#ifndef _MOOVIE_H_
#define _MOOVIE_H_
#include <string>
#include <iostream>
class Moovie
{
    private:
        std::string rating; // G, PG, PG-13, R, NR
        std::string genre; // Action, Comedy, Horror, etc.
        static int watched; // Number of times watched
    public:
        std::string title; // Movie title
        Moovie(std::string title, std::string rating, std::string genre)
        {
            this->title = title;
            this->rating = rating;
            this->genre = genre;
            watched ++;
        }// Movie constructor
        
        void showMovie(){
            std::cout << title << " | " << rating << " | " << genre << std::endl;

        }
        static int getWatched(){
            return watched;
        }
        ~Moovie(){
            watched --;
        }

};
#endif

