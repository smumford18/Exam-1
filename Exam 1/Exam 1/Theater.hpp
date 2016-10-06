//
//  Theater.hpp
//  Exam 1
//
//  Created by Steven Mumford on 10/6/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#ifndef Theater_hpp
#define Theater_hpp

#include <stdio.h>
#include "Movie.hpp"
#include <string>

using namespace std;

class Theater {
    
    string TheaterName;
    string TheaterPhone;
    int PopcornPrice;
    int CokePrice;
    
public:
    
    Theater(string Name, string Phone);
    void AddMovie(Movie& Movie);
    string GetMovieForHour(int Hour);
    
    int GetShowTimeForGenre(string Genre);
    
    int GetPopcornPrice();
    int GetCokePrice();
    
};
#endif /* Theater_hpp */
