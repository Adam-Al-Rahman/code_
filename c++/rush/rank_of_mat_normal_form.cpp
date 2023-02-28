#include <iostream>

namespace matrix {
const void normalForm();
// const void printMatrix(int matrix[][int cols], int rows, int cols);
// const void rankNormalFormMatrix(int matrix[][], int rows, int cols);
}  // namespace matrix

int main() {
  int rows;
  int cols;

  std::cout << "Enter the dimension [rows cols]: ";
  std::cin >> rows >> cols;

  std::cout << "\n|| Enter the matrix elements [" << rows << " x " << cols
            << "] ||\n\n";
  int matrix[rows][cols];

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      std::cin >> matrix[i][j];
    }
  }

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (i == j && matrix[i][j] != 1) {
        std::cout << "!one ";
      }
    }
  }
}

const void normalForm() {}
// const void printMatrix(int** matrix, int rows, int cols) {
//   std::cout << "[\n";
//   for (int i = 0; i < rows; i++) {
//     std::cout << "\t [ ";
//     for (int j = 0; j < cols; j++) {
//       std::cout << matrix[i][j];
//       if (j != cols - 1) {
//         std::cout << ", ";
//       }
//     }
//     std::cout << "]\n";
//   }
//   std::cout << "]";
// }

// const void rankNormalFormMatrix(int matrix[][], int rows, int cols) {}