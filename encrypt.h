#include <stdlib.h>
#include <time.h>
#include <math.h>

// init timestamp pointer
time_t time;
// init timestamp
int timeStamp = ctime(&time)
// init file for timestamp and other nessesary data
File *dataFile
// init number of times file is used
int timesOpened = 0;
// open file
fopen(dataFile);
// write timestamp in binary
fwrite(dataFile, sizeof(int), 1, &timesOpened)
fwrite(dataFile, sizeof(int), 1, timeStamp);
