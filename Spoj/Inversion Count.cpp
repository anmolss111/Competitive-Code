#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
typedef long long LL;

LL interpolate(int x[], int start, int middle, int end) {
    int i, j, k, b[end+1];
    LL c;

    for(i = start; i <= middle; i++) b[i] = x[i];
    for(j = end; i <= end; i++, j--) b[i] = x[j];

    for(c = 0, j = end, i = k = start; k <= end; k++)
        if(b[i] <= b[j])
            x[k] = b[i++];
        else {
          x[k] = b[j--];
          c = c + (middle - i + 1);
        }

    return c;
}

LL merge_sort(int x[], int start, int end) {
    int middle;

    if(start >= end) return 0;
    middle = (start + end) / 2;

    return  merge_sort(x, start, middle) +
            merge_sort(x, middle+1, end) +
            interpolate(x, start, middle, end);
}

int main() {

    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        printf("%lld\n", merge_sort(a, 0, n-1));
    }
    return 0;
}
