/**
  * readData.h
  * Header file for parsing helper funcitons
  * 
  */

#ifndef READDATA_H
#define READDATA_H

#include "structures.h"

#define FILE_OPEN_ERROR -1
#define MALFORMED_DATA_ERROR -2
int readConfig(ConfigFile*, char*);
int readMetaData(MetaDataNode*, char*);

#endif  // READDATA_H
