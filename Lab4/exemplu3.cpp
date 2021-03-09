void rotireDr(int A[], int dimA)
{
    int i, ultimul;
    ultimul = A[dimA-1];
    for(i=dimA-1;i>0;i--) {
        A[i] = A[i-1];
    }
    A[0] = ultimul;
}

void rotireSt(int B[], int dimB)
{
    int i, primul;
    primul = B[0];
    for(i=0;i<dimB-1;i++) {
        B[i] = B[i+1];
    }
    B[dimB-1] = primul;
}
