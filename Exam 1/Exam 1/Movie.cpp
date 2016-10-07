//
//  Movie.cpp
//  Exam 1
//
//  Created by Steven Mumford on 10/6/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//
// I affirm that all code given below was written soley by me, Steven Mumford, and that any help
// I received adhered to the rules stated for this exam.


#include "Movie.hpp"

//No-arg constructor function
Movie::Movie()
{
    MovieTitle = "Jurassic Park";
    MovieGenre = "Action";
    MovieShowTime = 0;
}

//Constructor function
Movie::Movie(string Title, string Genre, int ShowTime)
{
    MovieTitle = Title;
    MovieGenre = Genre;
    MovieShowTime = ShowTime;
}

//Getter for the title of a movie
string Movie::GetTitle() const
{
    return MovieTitle;
}

//Getter for the genre of a movie
string Movie::GetGenre() const
{
    return MovieGenre;
}

//Getter for the showtime of a movie
int Movie::GetShowtime() const
{
    return MovieShowTime;
}
