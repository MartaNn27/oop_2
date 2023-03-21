// У матриці обчислити суму елементів масиву, що розташовані між першим і другим додатними елементами.

#include <algorithm>
#include <iostream>
#include <numeric>
using namespace std;

const int row = 3;
const int col = 3;

void sum(int matrix[][col], int const rows, int const cols)
{
    
    auto isPositive = [](const int x) { return x > 0; };
    
    const auto it = std::find_if(std::begin(matrix[0]), &matrix[rows - 1][cols], isPositive);

        if(it != &matrix[rows - 1][cols]) {
            std::cout <<" sum = " << std::accumulate(it + 1, std::find_if(it + 1, &matrix[rows - 1][cols], isPositive), 0);
         }
    
}

int main()
{
    int myMatrix[row][col]{
        {-1, -2, -3},
        { 4, -5, -6},
        { -7, 8,  9} 
    };

    
    sum(myMatrix, row, col);
    cout << endl;

}
