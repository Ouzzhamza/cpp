#include <iostream>
#include <ctime>

int main() {
  std::clock_t start, end;
  double elapsed_time;

  start = std::clock(); // Start the clock

  // Do some work that you want to time
  for (int i = 0; i < 1; i++) {
    // Do something
  }

  end = std::clock(); // Stop the clock
  elapsed_time = (double)(end - start) / CLOCKS_PER_SEC; // Calculate elapsed time in seconds

  std::cout << "Elapsed time: " << elapsed_time * 1000000 << " microseconds" << std::endl;

  return 0;
}