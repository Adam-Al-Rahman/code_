#include "ETL.h"

#include <stdlib.h>

#include <boost/algorithm/string.hpp>
#include <cmath>
#include <vector>

std::vector<std::vector<std::string>> ETL::readCSV() {
  std::ifstream file(dataset);
  std::vector<std::vector<std::vector>> dataString;

  std::string line = "";
  while (getline(file, line)) {
    std::vector<std::string> vec;
    boost::algorithm::split(vec, line, boost::is_any_of(delimiter));
    dataString.push_back(vec);
  }

  file.close();

  return dataString;
}
