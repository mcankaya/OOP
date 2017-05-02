#include <iostream>
#include "math.h"
using namespace std;

// RMSE function
float stat_rmse(float *x, float *y, int N) {
  float total = 0.0;
  for (int i = 0; i < N; i++) {
    total = total+pow(x[i]-y[i], 2);
  }
  return sqrt(total/(float)N);
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
  float rmse = stat_rmse(x, y, N);
  cout << "Calculated RMSE value = " << rmse << endl;
  cout<<"ho ho"<<;
  return 0;
}
