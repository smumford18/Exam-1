//
//  main.cpp
//  Exam 1
//
//  Created by Steven Mumford on 10/5/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#include <iostream>
#include "Movie.hpp"
#include "Theater.hpp"

using namespace std;

int main() {
    //Creates an array of 11 movies
        const int MOVIECOUNT = 11;
        Movie movieListing[] = {
            Movie("Bull Durham", "Comedy", 0), Movie("Ocean's Eleven", "Action", 2),
            Movie("Monte Python's Meaning of Life", "Comedy", 5), Movie("Jaws", "Horror", 7),
            Movie("Fletch", "Comedy", 10), Movie("Usual Suspects", "Action", 12),
            Movie("Bull Durham", "Comedy", 14), Movie("Ocean's Eleven", "Action", 16),
            Movie("Monte Python's Meaning of Life", "Comedy", 19), Movie("Jaws", "Horror", 21),
            Movie("Usual Suspects", "Action", 23),
        };
    
    //Adds those 11 movies to the theater
        Theater garland("The Garland", "509-327-2509");
        for (int m = 0; m < MOVIECOUNT; m++) {
            garland.AddMovie(movieListing[m]);
        }
    
    //Checks to see if GetMovieForHour function in the theater class works as desired
        int errors = 0;
        if (garland.GetMovieForHour(-1, movieListing) != "") {
            errors++;
            cout << "error: not handling -1 correctly\n";
        }
        if (garland.GetMovieForHour(25, movieListing) != "") {
            errors++;
            cout << "error: not handling 25 correctly\n";
        }
        if (garland.GetMovieForHour(19, movieListing) != "Monte Python's Meaning of Life") {
            errors++;
            cout << "error: incorrect movie for 19th hour\n";
        }
    
    //Checks to see if GetShowTimeForGenre function in theater class works as desired
        if (garland.GetShowTimeForGenre("Comedy", movieListing) != 0) {
            errors++;
            cout << "error: incorrect Comedy\n";
        }
    
    //Returns the result of the tests
        if (errors == 0) cout << "Passed\n";
        else cout << "Errors: " << errors << endl;
    
    return 0;
}
