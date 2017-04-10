/**
  * structures.h
  *
  * Header file for structures and structure helper methods
  *
  */

#ifndef STRUCTURES_H
#define STRUCTURES_H

#define INVALID_ENTRY_ERROR -3
#define STRING_MAX_SIZE 50

typedef struct ConfigFile
{
    int version;
    char filePath[STRING_MAX_SIZE];
    char schedulingCode[STRING_MAX_SIZE];
    int quantumTime;
    int memoryAvailable;
    int pCycleTime;
    int ioCycleTime;
    char logTo[STRING_MAX_SIZE];
    char logFilePath[STRING_MAX_SIZE];
} ConfigFile;

typedef struct MetaDataNode
{
    char commandLetter;
    char operation[STRING_MAX_SIZE];
    int cycleTime;
    struct MetaDataNode *next;
} MetaDataNode;

int CheckSchedulingCode(char*);
int CheckLogTo(char*);
void PrintConfig(ConfigFile*);
void AppendNewNode(MetaDataNode*, MetaDataNode*);
int CheckCommandLetter(char);
int CheckOperation(char*);
void PrintMetaData(MetaDataNode*);

char* NodeToString(MetaDataNode*);

#endif  // STRUCTURES_H
