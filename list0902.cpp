#include <algorithm>
#include <cassert>
#include <vector>

int main()
{
  std::vector<int> input(3);
  std::vector<int> output(3);

  input.at(0) = 10;
  input.at(1) = 20;
  input.at(2) = 30;

  std::copy(input.begin(), input.end(), output.begin());

  // Now output has a complete copy of input
  assert(input == output);
}
