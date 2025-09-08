#include <stdio.h>

int main()
{
    int N;
    printf("ENTRE TOTAL NO OF STUDENTS (N): ");
    scanf("%d",&N);

    int A[N-1];
    printf(" Entre %d students IDs who attended the lecture : \n",N-1);
    for(int i=0;i<N-1;i++)
    {
        scanf("%d",&A[i]);

    }
    int total_stu = N*(N+1)/2;
    int given_stu=0;
    for(int i=0;i<N-1;i++)
    {
        given_stu += A[i];
    }
    int missing_id = total_stu - given_stu ;
    printf("missing student id is %d\n",missing_id);
    return 0;
}
