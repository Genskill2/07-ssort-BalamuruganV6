void swap_max(int a[], int n, int p)
{
    int p1, big = a[p];
    for( int i=n-1; i>=p; i--)
    {
        if( big > a[i])
        {
            
        }
        else
        {
            p1 = i;
            big = a[i];
        }
    }
     int t = a[p];
     a[p] = big;
     a[p1] = t;
}

void ssort(int ar[], int ln)
{
    for( int j=0; j<ln; j++)
    {
       swap_max(ar, ln, j);
    }
}

