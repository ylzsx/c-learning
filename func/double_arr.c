#include <stdio.h>
#include <stdlib.h>

#define M   3
#define N   4

// static void print_arr(int p[], int n)
static void print_arr(int *p, int n) {

    int i;
    for (i = 0; i < n; i++)
        printf("%d ", *(p+i));
    puts("");

}

// static void print_arr1(int p[][N], int m, int)
static void print_arr1(int (*p)[N], int m, int n) {
    
    int i,j;

    printf("sizeof(p) = %ld\n", sizeof(p));
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%4d ", *(*(p+i)+j));
        printf("\n");
    }
}

static float average_score(int *p, int n) {
    
    int i;
    float sum = 0.0;

    for (i = 0; i < n; i++)
        sum += p[i];
    
    return sum / n;
}

#if 0
static void find_num(int (*p)[N], int num) {
    
    int i;
    for (i = 0; i < N; i++)
        printf("%d ", *(*(p + num) + i));
    printf("\n");
}
#endif

static int *find_num(int (*p)[N], int num) {

    if (num > M -1) 
        return NULL;
    return *(p + num);
}

int main() {

    int a[M][N] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int num = 1, i;
    int *res;
//    print_arr(*a, M * N);
//    print_arr1(a, M, N);

    printf("average score = %f\n", average_score(a[0], M*N));

    res = find_num(a, num);
    if (res != NULL) {
        for (i = 0; i < N; i++)
            printf("%d ", *(res + i));
        printf("\n");
    } else {
        printf("Can not find!\n");
    }


    exit(0);
}
