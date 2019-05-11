// Hackerrank.com
// PracticeInterview > Preparation Kit > Warm-up Challenges > Counting Valleys

#include <iostream>
#include <string>

using namespace std;

int countingValleys(string s, int n);

int main() {
  string s;
  int n;

  cin >> n;  // Length of string.
  cin >> s;  // Get String.

  int result;
  result = countingValleys(s, n);

  cout << result << endl;
}

int countingValleys(string s, int n) {
  int res = 0;  // variable for counting number of valleys.
  int c = 0;  // check level variable.
  int down = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'U')
      c += 1;
    if (s[i] == 'D')
     {
      if (c == 0) 
      {
        down = 1; // "1" indicates, entered into a valley.
      }

      c -= 1;
    }

    if (down == 1 && c == 0) {
      res += 1;
      down = 0; // "0" indicates, coming out of the valley.
                
    }
  }

  return res;
}
