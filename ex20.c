# include <stdio.h>

int a [ 16000 ];
 void init ()
{
    int i, count, flag, j;
    flag = 1 ;
    count = 2 ;
    a [ 1 ] = 2 ;
    a [ 2 ] = 3 ;
    j = 5 ;
     while ( 1 ) {
         for (i = 2 ; i <= count; i ++ ) {
             if (j% a [i] == 0 ) {
                flag = 0 ;
                 break ;
            }
        }
        if (flag) {
            count ++ ;
            a [count] = j;
        }
        flag = 1 ;
        j + = 2 ;
         if (count> 15000 ) break ;
    }
}

void solve ()
{
    int n, N;
    init ();
    scanf ( " % d " , & N);
     while (N-- ) {
        scanf ( " % d " , & n);
        printf ( " % d \ n " , a [n]);
    }
}

int main ()
{
    solve ();
    return  0 ;
}
