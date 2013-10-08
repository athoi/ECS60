//Authors: Alex Thoi, Jethro Chan
#include <iostream>
#include <cmath>
#include <vector>
#include <cstdlib>

using namespace std;

bool checkPosition(int row, int column, vector<int>& solution);
void findSolution(vector<int>& solution);

int main()
{
  vector<int> solution;
  
  findSolution(solution);

  return 0;
}

bool checkPosition(int row, int column, vector<int>& solution)
{
  if(solution[column] == row)
  {
    row++;
    return false;
  }//row check

  for(int i = 1; i < column; i++)
  {
    if(solution[column-i] == (row - i))
    {
      row++;
      return false;
    }
  }//diagonal check

  return true;//true if position is valid
}

void findSolution(vector<int>& solution)
{
  bool backtrack = false;
  int row = 0, column = 0;

  if(backtrack)
  {
    
  }
  //1. check if position is valid
  //2. if valid, column++, start from 1.
  //3. if not valid, if row++ < 8, go back to 1, if row++ == 8 go to 4.
  //4. if row == 8, backtrack, start from 1.
}
   
