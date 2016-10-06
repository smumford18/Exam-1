//
//  Movie.hpp
//  Exam 1
//
//  Created by Steven Mumford on 10/6/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#ifndef Movie_hpp
#define Movie_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Movie {
    
private:
    string MovieTitle;
    string MovieGenre;
    int MovieShowTime;
    
public:
    
    Movie();
    Movie(string Title, string Genre, int ShowTime);
    
    string GetTitle();
    string GetGenre();
    int GetShowtime();
    
};

#endif
