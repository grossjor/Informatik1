#include<iostream>
 using namespace std;

 int main()
 {
 int i, j;

 i = 0; j = -5;
 if (i++ || j++) ++i; // i=0=false, i++=1, j!=0=true, j++=-4, ->Aussage true ++i -> i=2
 cout << i << ',' << j << endl;
 i = 1; j = -5;
 if (i++ || j++) ++i; // i=1=true, i=2, j bleibt -5, da i schon true ist, Aussage true -> ++i: i=3
 cout << i << ',' << j << endl;
 i = 0; j = -5;
 if (i++ && j++) ++i; // i=0=false, i++=1, j bleibt -5, da i schon false war, Aussage false
 cout << i << ',' << j << endl;
 i = 1; j = -5;
 if (i++ && j++) ++i; // i=1=true, 1++=2, j!=0=true, j++=-4, Aussage true -> ++1: i=3
 cout << i << ',' << j << endl;
 }