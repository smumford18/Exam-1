//
//  Theater.hpp
//  Exam 1
//
//  Created by Steven Mumford on 10/6/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//
// I affirm that all code given below was written soley by me, Steven Mumford, and that any help
// I received adhered to the rules stated for this exam.


#ifndef Theater_hpp
#define Theater_hpp

#include <stdio.h>
#include "Movie.hpp"
#include <string>

using namespace std;

//Class blueprint for theater
class Theater {
    
    string TheaterName;
    string TheaterPhone;
    int PopcornPrice;
    int CokePrice;
    
public:
    
    //Constructor function
    Theater(string Name, string Phone);
    
    //Blueprint of member functions
    void AddMovie(Movie& Movie);
    string GetMovieForHour(int Hour, Movie Movie[11]) const;
    int GetShowTimeForGenre(string Genre, Movie Movie[11]) const;
    int GetPopcornPrice();
    int GetCokePrice();
    
};
#endif /* Theater_hpp */
