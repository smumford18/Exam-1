//
//  Movie.hpp
//  Exam 1
//
//  Created by Steven Mumford on 10/6/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//
// I affirm that all code given below was written soley by me, Steven Mumford, and that any help
// I received adhered to the rules stated for this exam.


#ifndef Movie_hpp
#define Movie_hpp

#include <stdio.h>
#include <string>
//#include "Theater.hpp"

using namespace std;

//Class blueprint for movie
class Movie {
    
private:
    
    string MovieTitle;
    string MovieGenre;
    int MovieShowTime;
    
public:
    
    //Constructors
    Movie();
    Movie(string Title, string Genre, int ShowTime);
    
    //Member functions
    string GetTitle() const;
    string GetGenre() const;
    int GetShowtime() const;
    
};

#endif
