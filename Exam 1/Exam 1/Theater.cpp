//
//  Theater.cpp
//  Exam 1
//
//  Created by Steven Mumford on 10/6/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//
// I affirm that all code given below was written soley by me, Steven Mumford, and that any help
// I received adhered to the rules stated for this exam.


#include "Theater.hpp"
#include "Movie.hpp"
#include <string>

using namespace std;

//Constructs a theater with a name and phone
Theater::Theater(string Name, string Phone)
{
    TheaterName = Name;
    TheaterPhone = Phone;
}

//Adds a movie to the list of movies the theater shows
void Theater::AddMovie(Movie& Movie)
{
    Movie::Movie(Movie.GetTitle(), Movie.GetGenre(), Movie.GetShowtime());
}

//Checks to see what movie will play at that hour or the upcoming movie
string Theater::GetMovieForHour(int Hour, Movie Movie[11]) const
{
    for(int i=0; i < 11; i++) {
        if(Hour == Movie[i].GetShowtime()){
            string s = Movie[i].GetTitle();
            return s;
            break;
        }
    }
    return "";
}

//Finds and returns the showtimes for the specified genre
int Theater::GetShowTimeForGenre(string Genre, Movie Movie[11]) const
{
    for(int i=0; i<11; i++) {
        if(Genre == Movie[i].GetGenre())
            return Movie[i].GetShowtime();
    }
    return -1;
}

//Returns the price of popcorn
int Theater::GetPopcornPrice()
{
    PopcornPrice = 5;
    return PopcornPrice;
}

//Returns the price of Coke
int Theater::GetCokePrice()
{
    CokePrice = 4;
    return CokePrice;
}


