#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int randomNum()
{
    srand(time(0));

    int randomNum = rand() % 11 + (-5);

    return randomNum;
}