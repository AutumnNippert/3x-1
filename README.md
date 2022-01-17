#This program was written as a way to brute force the 3n+1 problem.

#Background:
Take any number. If it's even, divide by 2. If it's odd, multiply by 3 and add 1.
The thing about this is that every number that we have tested so far has ended up in the loop of 4 -> 2 -> 1.
There is no proof that there exists a number that doesn't go into this loop, but instead another loop.

#A good video explaining it: 
https://youtu.be/094y1Z2wpJg

#How to run

First, check the code to determine which numbers you would like to see the turn number for. Default is set to > 200.
```cpp        
if (step > 200) {//Set the number in the if statement to the required number of steps you want to be printed out (because printing takes forever)
    cout << "(" << i << ") " << step << endl;
}```

In the command prompt inside the directory, type
```
.\main [number to start on] [number to end on]
```
