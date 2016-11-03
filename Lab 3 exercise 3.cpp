//============================================================================
// Name        : Lab.cpp
// Author      : me
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <cstdio>
#include <iomanip>
using namespace std;

void ReadOneInt(ifstream& ifstream1,ifstream& ifstream2, ofstream& ofstream);
int main() {
    ifstream ifstream1;
    ifstream ifstream2;
    ofstream ofstream;
    ifstream1.open("LabInput3-3.txt");
    ifstream2.open("LabInput3-4.txt");
    if(ifstream1.fail()){
                cout <<  "File cannot be found" << endl;
                exit(1);
            }
    else{
        cout << "First opened." << endl;
    }
    if(ifstream2.fail()){
        cout << "File cannot be found" << endl;
        exit(1);

    }
    else{
        cout << "Second file opened." << endl;
    }
    ReadOneInt(ifstream1, ifstream2, ofstream);
    ifstream1.close();
    ifstream2.close();
    ofstream.close();
    cout << "Program has finished." << endl;
    return 0;
}
void ReadOneInt(ifstream& ifstream1,ifstream& ifstream2, ofstream& ofstream){
    int size;
    int array[20];
    int num;

    int swapnum;
    while(!ifstream1.eof()){
        ifstream1 >> array[num];
        num++;
    }
    while(!ifstream2.eof()){
        ifstream2 >> array[num];
        num++;
    }
size=num;

      for(int counter = (size-1); counter >0; counter--){
        for(int i=0; i< (size); i++){
            if(array[i] > array[i+1])
            {
                swapnum = array[i];
               array[i] =array[i+1];
                array[i+1] = swapnum;

            }
        }
     counter--;
      }
    for(int i=0; i<size; i++){
    ofstream << array[i];
}


}
