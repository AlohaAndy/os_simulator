#ifndef SIM04_H
#define SIM04_H

#include <stdlib.h>
#include <stdio.h>
#include "structures.h"
#include "readData.h"
#include "process.h"
#include "SimpleTimer.h"

/**
  * A funtion that handles the log situations
  * Puts all the prints in a log and sends it to monitor and/or file
  */

int PrintWrapper(char*, char*, char*);

#endif
