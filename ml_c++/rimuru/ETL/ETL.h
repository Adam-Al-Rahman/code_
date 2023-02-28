#ifndef RIMURU_ETL_H_
#define RIMURU_ETL_H_

#include <eigen3/Eigen/Dense>
#include <fstream>
#include <iostream>

#include "third_party/eigen3/unsupported/Eigen/CXX11/Tensor"

class ETL {
  std::string dataset;
  std::string delimiter;
  bool header;

 public:
  ETL(std::string data, std::string separator, bool head)
      : dataset(data), delimiter(separator), header(head){};

  std::vector<std::vector<std::string>> readCSV();
}

#endif  // RIMURU_ETL_H_
