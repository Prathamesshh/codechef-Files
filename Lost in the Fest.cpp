/*
Bhoomi was excited for the annual fest at IIIT Pune. She found a spot in the queue, eagerly waiting for the performance. But there was a problem: tall students ahead blocked her view!
Frustrated, she wondered: "How much do I have to move to be able to see the performance?"

There are 
N
N students who want to watch the performance at the fest. They're standing in a straight queue, and the 
i
i-th student in the queue has a height of HiH 
i
​
 .

A student will be able to watch the performance if and only if they are strictly taller than every student ahead of them.
That is, student 
i
i will be able to watch the performance if and only if 
H
i
>
H
j
H 
i
​
 >H 
j
​
  for every 
1
≤
j
<
i
1≤j<i.

Bhoomi is the last student in the queue, with a height of 
H
N
H 
N
​
 .
Every second, she can swap places with the person just in front of her - that is, if she's currently at position 
i
i,
she can move to position 
i
−
1
i−1 (and the person previously at position 
i
−
1
i−1 will move to position 
i
i instead).
How many seconds will it take till Bhoomi is able to see the performance?

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains a single integer 
N
N — the number of students in the queue.
The second line contains 
N
N space-separated integers 
H
1
,
H
2
,
…
,
H
N
H 
1
​
 ,H 
2
​
 ,…,H 
N
​
 , denoting the heights of the students in the queue.
Output Format
For each test case, output on a new line the answer: the number of seconds till Bhoomi is able to see the performance.
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> H(n);
    
    for (int i = 0; i < n; i++) {
        cin >> H[i];
    }

    int b = H[n-1];
    int i=0;
    for(i;i<n;i++){
        if(H[i]>=b) break;
    }
    cout<<n-i-1<<endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
