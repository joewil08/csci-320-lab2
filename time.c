#include <sys/time.h>
#include <stdio.h>

double elapsed_time(struct timeval* start_time, struct timeval* end_time){
    //TODO: return the difference between end_time and start_time.
    struct timeval elapsed;
    timersub(end_time, start_time, &elapsed);
    return elapsed.tv_sec + elapsed.tv_usec / 1000000.0;
}