Given an array find the minimum number of elements of the array.
So that they are subsequence of the array.
And their contrast value should be equal to the main arrays constrast value.
Contrast value: |a[i]-a[i+1]|     (i=1->n)

Solve: Taking the 1st and last element of every block of
        increasing and decreasing array works. 
Proof:
    We can assume the array elements on a co ordinate line.
    then removing any element from an increasing/decreasing sequence would
    not change the difference.
    suppose {1,3,7,9}
    The contrast value is |1-3|+|3-7|+|7-9|=2+4+2=8
    if we remove 7 from the array 
    then |1-3|+|3-9|=2+6=8
    This is because only the first and the last elements difference of an
    increasing/decreasing sequence matters.

problems:
    https://codeforces.com/problemset/problem/1364/B
    https://codeforces.com/contest/1832/problem/C
