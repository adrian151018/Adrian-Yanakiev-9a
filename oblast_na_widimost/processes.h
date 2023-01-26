#ifndef PROCESSES_H
#define PROCESSES_H

struct Process{
    unsigned int id;
    char processname[30];
};

static unsigned int nextprocessid();
unsigned int createnewprocess(char * name);
int stopprocess(unsigned int nomer);

#endif