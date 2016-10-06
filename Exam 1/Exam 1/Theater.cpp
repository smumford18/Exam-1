//
//  Theater.cpp
//  Exam 1
//
//  Created by Steven Mumford on 10/6/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#include "Theater.hpp"
#include "Movie.hpp"

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

//Checks to see what movie will play at that hour or the upcoming movie;
string Theater::GetMovieForHour(int Hour)
{
    return "";
}

//Checks the showtime for the specified genre
int Theater::GetShowTimeForGenre(string Genre)
{
    return 1;
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


