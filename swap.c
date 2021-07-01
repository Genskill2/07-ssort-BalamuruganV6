void swap_max(int a[], int n, int p)
{
    int p1,big = a[p];
    for( int i=p; i<n; i++)
    {
        if( big < a[i])
        {
            p1 = i;
            big = a[i];
        }
    }
     int t = a[p];
     a[p] = big;
     a[p1] = t;
}

void ssort(int ar[], int n)
{
    for( int i=0; i<n; i++)
    {
       swap_max(ar, n, i);
    }
}
