#include <iostream>
#include "math.h"
using namespace std;

// RMSE function
float stat_rmse(float *x, float *y, int N, float missing) {
  int count = 0;
  float total = 0.0;
  for (int i = 0; i < N; i++) {
    if (x[i] != missing && y[i] != missing) {
      total = total+pow(x[i]-y[i], 2);
      count++;
    }
  }

  cout << "Number of non-missing data = " << count << " of " << N << endl;
  return sqrt(total/(float)count);
}

// main function
int main() {
  // get size
  int N = 0;
  cin >> N;
  cout << "Problem Size = " << N << endl;

  // read data
  float x[N];
  for (int i = 0; i < N; i++) {
    cin >> x[i];
    cout << "x[" << i << "] = " << x[i] << endl;
  }

  float y[N];
  for (int i = 0; i < N; i++) {
    cin >> y[i];
    cout << "y[" << i << "] = " << y[i] << endl;
  }

  // calculate RMSE
  float rmse = stat_rmse(x, y, N, -99.0);
  cout << "Calculated RMSE value = " << rmse << endl;

  return 0;
}
