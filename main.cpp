#include <iostream>
#include <fstream>
#include <cstdlib>
 
/*
This program was written as a way to brute force the 3n+1 problem.

Background:
Take any number. If it's even, divide by 2. If it's odd, multiply by 3 and add 1.
The thing about this is that every number that we have tested so far has ended up in the loop of 4 -> 2 -> 1.
There is no proof that there exists a number that doesn't go into this loop, but instead another loop.

A good video explaining it: https://youtu.be/094y1Z2wpJg
*/

using namespace std;

bool isEven(int i) {
    if (i%2 == 0) {
        return true;
    }
    return false;
}

long impossibleFunction(long start, long end, long numCap){
    long initialNum = start;
    long step = 0;
    while(start > 1) {
        if(step > numCap  ) {
            return numCap;
        }
        if(start < initialNum) {
            return -1;
        }
        if(start == 1) {

            break;
        }
        if(isEven(start)) {
            start /= 2;
        } else {
            start *= 3;
            start += 1;
        }
        step ++;
    }
    return step;
}

int main(int argc, char *argv[])
{
    //Ternary operator in the begining of the for loop :b
    //It skips every even number because when it's even, you divide by 2, which goes back to an already calculated number
    for(long i = isEven(i) ? (strtol(argv[1], NULL, 10)+1) : (strtol(argv[1], NULL, 10)); i < strtol(argv[2], NULL, 10); i += 2) {
        
        long step = impossibleFunction(i, strtol(argv[2], NULL, 10), 500);
        if (step > 200) {//Set the number in the if statement to the required number of steps you want to be printed out (because printing takes forever)
            cout << "(" << i << ") " << step << endl;
        }
    }
    cout << "Done" << endl;
}