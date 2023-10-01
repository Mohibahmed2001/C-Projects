//
//  Mohib Ahmed
// Lab 10A
// 11/28/22
//Using fucntion to get time
//
//
//
//
#include <iostream>

// Classes & Enums
class Time {
public: 
    int h;
    int m;
};

enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

class Movie { 
public: 
    std::string title;
    Genre genre;     // only one genre per movie
    int duration;    // in minutes
};

class TimeSlot { 
public: 
    Movie movie;     // what movie
    Time startTime;  // when it starts
};

// Function Names
int minutesSinceMidnight(Time time);
int minutesUntil(Time earlier, Time later);
Time addMinutes(Time time, int min);
void printMovie(Movie mv);
TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie);
bool timeOverlap(TimeSlot ts1, TimeSlot ts2); 

// Main
//ik
//olo
int main() {
    Movie movie1 = {"Back to the Future", COMEDY, 116};
    Movie movie2 = {"Black Panther", THRILLER, 134};
    TimeSlot daytime = {movie2, {12, 15}}; 
    TimeSlot daytime2 = {movie1, {14, 25}};
    std::cout << timeOverlap(daytime, daytime2) << std::endl;
}
int minutesSinceMidnight(Time time) {
    int mins = (time.h * 60) + time.m;

    return mins;
}
//
int minutesUntil(Time earlier, Time later) {
    int mins = (later.h - earlier.h) * 60 + (later.m - earlier.m);

    return mins;
}
//
Time addMinutes(Time time, int min) {
    Time newTime;

    newTime.h = time.h + (time.m + min) / 60;
    newTime.m = (time.m + min) % 60;

    return newTime;
}
//
void printMovie(Movie mv) {
    std::string g;

    switch (mv.genre) {
        case ACTION: 
            g = "ACTION"; 
            break;
        case COMEDY: 
            g = "COMEDY"; 
            break;
        case DRAMA: 
            g = "DRAMA";  
            break;
        case ROMANCE: 
            g = "ROMANCE"; 
            break;
        case THRILLER: 
            g = "THRILLER"; 
            break;
    }

    std::cout << mv.title << " " << g << " (" << mv.duration << " min)";
}
void printTimeSlot(TimeSlot ts) {
    Time endingTime = addMinutes(ts.startTime, ts.movie.duration);
    
    printMovie(ts.movie);

    std::cout << "[starts at " << ts.startTime.h << ":" << ts.startTime.m 
              << ", ends by " << endingTime.h << ":" << endingTime.m << "]" << "\n";
}
TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie) {
    TimeSlot nextTimeSlot;
    nextTimeSlot.movie = nextMovie;
    nextTimeSlot.startTime = addMinutes(ts.startTime, ts.movie.duration);

    return nextTimeSlot;
}
//tyty
//tyt
//ytty
//tgt
//
bool timeOverlap(TimeSlot ts1, TimeSlot ts2) {
    if(minutesSinceMidnight(ts1.startTime) < minutesSinceMidnight(ts2.startTime)) {
        return ts1.movie.duration > (minutesSinceMidnight(ts2.startTime) - minutesSinceMidnight(ts1.startTime));
    } else {
        return ts2.movie.duration > (minutesSinceMidnight(ts1.startTime) - minutesSinceMidnight(ts2.startTime));
    }
}
