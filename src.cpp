#include <cmath>  // For sqrt() function

double standard_deviation(double data[], int n) {
  double sum = 0.0, mean, standard_deviation = 0.0;

  for (int i = 0; i < n; i++) {
    sum += data[i];
  }
  mean = sum / n;

  for (int i = 0; i < n; i++) {
    standard_deviation += pow(data[i] - mean, 2);
  }
  return sqrt(standard_deviation / n);
}
