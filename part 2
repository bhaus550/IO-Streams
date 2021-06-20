//============================================================================
// Name        : Lab.cpp
// Author      : me
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>

using namespace std;

void fill_array(int a[], int& number_used);
void sort(int a[], int number_used);
void swap(int& int1, int& int2);
int largest(const int a[], int start_index, int number_used);

int main() {
	int inputArray[50], countArray[50], uniqueArray[50], number_used;
	char file_name[20];
	int size, option;
	ofstream ofs;
	cout << "1. Input from keyboard." << endl
			<< "2. Input from file." << endl
			<< "3. Quit." << endl
			<< "Enter the number of which you'd like to do: ";
	cin >> option;
	ifstream ifs;
	if(option == 1){
		fill_array(inputArray, number_used);
		sort(inputArray, number_used);
		ofs.open("LabOutput3-2.txt", ios::app);
		if(ofs.fail())
		{
			cout << endl << "Output file failed to open.";
			exit(1);
		}
		else
		{
			cout << endl << "Output file was opened." << endl;
		}
		int check = 0;
		int unique = 0;


		for(int k=0; k<number_used; k++)
		{
			for(int a=0; a<unique; a++)
			{
				if(inputArray[k] == uniqueArray[a])
				{
					countArray[a] += 1;
					check = 1;
					break;
				}
			}
			if(check == 0)
			{
				uniqueArray[unique] = inputArray[k];
				countArray[unique] = 1;
				unique++;
			}
			check = 0;
		}
		cout << "N";
		cout.width(12);
		cout << "Count" << endl;

		ofs << "N";
		ofs.width(12);
		ofs << "Count" << endl;
		for(int m=0; m<unique; m++)
		{
			cout << uniqueArray[m];
			cout.width(9);
			cout << countArray[m] << endl;

			ofs << uniqueArray[m];
			ofs.width(9);
			ofs << countArray[m] << endl;
		}
		ofs.close();
	}
	else if(option == 2)
	{
		cout << "You chose to read from a file." << endl
				<< "Please input a file name: ";
		cin >> 	file_name;
		ifs.open(file_name, ios::app);
		if(ifs.fail())
		{
			cout << "Input file failed to open.";
			exit(1);
		}
		else
		{
			cout << "Input file was opened.";
		}
		size = 0;
		while(ifs >> inputArray[size++])
		{
		}
		ofs.open("LabOutput3-2.txt", ios::app);
		if(ofs.fail())
		{
			cout << endl << "Output file failed to open.";
			exit(1);
		}
		else
		{
			cout << endl << "Output file was opened." << endl;
		}
		sort(inputArray, size);

		for(int i=1; i<size; i++)
		{
			cout << inputArray[i];
		}
		int check = 0;
				int unique = 0;


				for(int k=0; k<number_used; k++)
				{
					for(int a=0; a<unique; a++)
					{
						if(inputArray[k] == uniqueArray[a])
						{
							countArray[a] += 1;
							check = 1;
							break;
						}
					}
					if(check == 0)
					{
						uniqueArray[unique] = inputArray[k];
						countArray[unique] = 1;
						unique++;
					}
					check = 0;
				}
				cout << "N";
				cout.width(12);
				cout << "Count" << endl;

				ofs << "N";
				ofs.width(12);
				ofs << "Count" << endl;
				for(int m=0; m<unique; m++)
				{
					cout << uniqueArray[m];
					cout.width(9);
					cout << countArray[m] << endl;

					ofs << uniqueArray[m];
					ofs.width(9);
					ofs << countArray[m] << endl;
				}
				ifs.close();
				ofs.close();
	}
	else if(option == 3)
	{
		cout << "Thank you!";
		return 0;
	}
	return 0;
}
void fill_array(int a[], int& number_used)
{
	int next, index = 0;
	cout << "You may enter up to 50 integers." << endl <<
			"Please enter a NEGATIVE integer in order to stop: " << endl;
	cin >> next;
	while((index < 50))
	{
		a[index] = next;
		index++;
		cin >> next;
		if(next < 0)
		{
			break;
		}
	}
	number_used = index;
}
void sort(int a[], int number_used)
{
	int second_largest;
	for(int index=0; index<number_used-1; index++)
	{
		second_largest = largest(a, index, number_used);
		swap(a[index], a[second_largest]);
	}
}

void swap(int& int1, int& int2) {
	int temp;
	temp = int1;
	int1 = int2;
	int2 = temp;
}
int largest(const int a[], int start_index, int number_used){
	int max = a[start_index];
	int index_of_max = start_index;

	for(int i=start_index + 1; i < number_used; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
			index_of_max = i;
		}
	}
	return index_of_max;
}
/*
 Output for manual input
N       Count
89        1
55        1
32        1
9        1
6        1
5        1
4        1
output for file input
*/
