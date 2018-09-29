/*
W15664768
Fibonacci Question Midterm Response:
By starting with 1 and 2, the first 10 fibonacci numbers will be:
1, 2, 3, 5, 8, 13, 21, 34, 55, 89,... By considering the terms in the 
Fibonacci sequence whose values do not exceed 1000, 
find the sum of the even-valued terms. *
**NOTE** first part of code copied from late homework submission
*/
# include <iostream>
using namespace std;

int fibo( int n)
{
  //base case 
  if (n == 0)
    return n;
  else if (n == 1)
    return n;
  else
  {
    int f = (fibo(n-1) + fibo(n-2));
    return f;
  }
}

int main()
{
  int max, answer;
  cout << "Input whole number less than 15: ";
  cin >> max;
  for (int x = max, y = max - 1; y < x; ++y, ++x)
  {
    int i = fibo(10) % 2;
    if (i != 0)
      cout << "No calculation\n";
      return 1;
    else if (i == 0)
      answer = fibo(x) + fibo(y);

  }
  cout << answer;
    return 0;
}