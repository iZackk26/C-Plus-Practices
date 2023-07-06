#include <iostream>
#include <string>
#include "movie.h"
#include <vector>

// Inicialization of the variable watched
int Moovie::watched = 0;


Moovie addMoovie(){
    std::string name;
    std::string rating;
    std::string genre;
    std::cout << "Enter the name of the movie: \n";
    std::cin >> name;
    std::cout << "Enter the rating of the movie: \n";
    std::cin >> rating;
    std::cout << "Enter the genre of the movie: \n";
    std::cin >> genre;
    return Moovie{name, rating, genre};
}

bool checkRepeatedMoovie(Moovie x, std::vector<Moovie> movies){
    bool repeated = false;
    for (int i = 0; i < movies.size(); i++)
    {
        if(x.title == movies[i].title)
        {
            repeated = true;
            break;
        }
    }
    return repeated;
}


int main(){
    std::vector<Moovie> movies;
    bool repeat = true;
    while (repeat){
        Moovie x = addMoovie();
        if (checkRepeatedMoovie(x, movies))
        {
            std::cout << "The movie is already in the list\n";
        }
        else
        {
            movies.push_back(x);
        }
        std::cout << "Do you want to add another movie? (y/n)\n";
        char answer;
        std::cin >> answer;
        if (answer == 'n')
        {
            repeat = false;
        }
    }
    std::cout << "The movies in the list are: \n";
    for (int i = 0; i < movies.size(); i++)
    {
        std::cout << movies[i].title << "\n";
    }
    return 0;
}

