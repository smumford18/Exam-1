//
//  Movie.cpp
//  Exam 1
//
//  Created by Steven Mumford on 10/6/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#include "Movie.hpp"

Movie::Movie()
{
    MovieTitle = "Jurassic Park";
    MovieGenre = "Action";
    MovieShowTime = 20;
}

Movie::Movie(string Title, string Genre, int ShowTime)
{
    MovieTitle = Title;
    MovieGenre = Genre;
    MovieShowTime = ShowTime;
}

string Movie::GetTitle()
{
    return MovieTitle;
}

string Movie::GetGenre()
{
    return MovieGenre;
}

int Movie::GetShowtime()
{
    return MovieShowTime;
}
