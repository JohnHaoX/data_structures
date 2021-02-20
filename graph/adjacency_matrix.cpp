

#include "iostream"
#include "algorithm"
#include "vector"
#include "numeric"
#include "array"

using namespace std;

//void PrintEdge(array<array<int,5>,5> &matrix){
//
//}

// graph representation
//https://www.geeksforgeeks.org/graph-and-its-representations/


// pass 2d array to function in c++
// https://stackoverflow.com/questions/8767166/passing-a-2d-array-to-a-c-function
void PrintEdge(int matrix[][5]){
  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 5; ++j) {
      cout<<matrix[i][j]<<' ';
    }
    cout<<'\n';
  }
}


int main() {

//  array<array<int,5>,5> matrix{};
  int matrix[5][5]={};

//  slot matrix[i][j] indicates there is an edge from vertex i to vertex j
//  for vertex1
  matrix[0][4]=1;
  matrix[0][1]=1;

  matrix[1][4]=1;
  matrix[1][0]=1;
  matrix[1][3]=1;
  matrix[1][2]=1;

  matrix[2][1]=1;
  matrix[2][3]=1;

  matrix[3][1]=1;
  matrix[3][2]=1;
  matrix[3][4]=1;

  matrix[4][0]=1;
  matrix[4][3]=1;


  PrintEdge(matrix);



  return 0;
}