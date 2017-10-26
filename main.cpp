#include <iostream>
using namespace std;

int sum(int a[], int nr) {
	int s=0;
	for(int i=0; i<nr; i++)//used to be i<=nr
		s+=a[i];
	return s;
}

int main() {
	int n;
	cin >> n;
	int v[n];
	for(int i=0; i<n; i++)
		cin >> v[i];
	int result = sum(v, n);
	cout << "Result=" << result << endl;
	return 0;
}
/*added breakpoints with the command b N at the lines 7,8,17,18
  ran the program by calling run and inputing 3,1,2,3
  got to breakpoint 17
  called p v[0]
  p v[1]
  p v[2]
  values were well assigned
  called continue
  got to breakpoint 7
  used p s to check current value of s (0), and p i to check i (0)
  call continue
  p s (1)
  p i (1)
  continue
  p s (3)
  p i (2)
  continue
  p s (6)
  p i (3)
  p nr (3)
  I notice that i=nr but cursor is still at breakpoint 17
  normally, since we started from i=0 we should have been at step 18,
  where I would have checked s, and for i I wouldn't have had an element.
  Identify problem in for loop with the second call.
  Instead of i<=nr change to i<nr
  The reason why the value was wrong was because the for loop was trying to
  access an inexistent value.
*/
