//Author: Alex Thoi, Jethro Chan
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>
#include "LinkedList.h"
#include "CursorList2.h"
#include "CursorList.h"
#include "StackAr.h"
#include "StackLi.h"
#include "QueueAr.h"
#include "SkipList.h"
#include "CPUTimer.h"

vector<CurosrNode <int>> curosrSpace(250000);
using namespace std;

int getChoice();


int main()
{
  int input;
  string infile;

  cout << "Filename >> ";
  cin >> infile;

  ifstream inf(infile.c_str());
    

  do
  {
    input = getChoice();
    
    switch(choice)
    {
      case 1:
	RunList(infile
  }while(input != 0);

  return 0;
}

int getChoice()
{
  int input;

  cout << "0. Quit\n"
       << "1. LinkedList\n"
       << "2. CursorList\n"
       << "3. StackAr\n"
       << "4. StackLi\n"
       << "5. QueueAr\n"
       << "6. SkipList\n"
       << "Your Choice >> ";
  cin >> input;

  return input;
}
