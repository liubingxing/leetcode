int min(int a, int b) {
    if(a <= b) return a;
    else return b;
}
double findKth(int A[], int m, int B[], int n, int k) {
    //always assume that m is equal or smaller than n
    if (m > n) 
        return findKth(B, n, A, m, k);
    if (m == 0)
        return B[k-1];
    if (k == 1)
        return min(A[0], B[0]);
    //divide k into two parts
    int pa = min(k / 2, m), pb = k - pa; //if pa = k/2 then pb = k/2
    if (A[pa - 1] < B[pb - 1])
        return findKth(A + pa, m - pa, B, n, k - pa);
    else if(A[pa - 1] > B[pb - 1])
        return findKth(A, m, B + pb, n - pb, k - pb);
    else
        return A[pa - 1]; // A[pa-1] = B[pb-1]
}
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int total = nums1Size + nums2Size;
    if(total & 0x1)
        return findKth(nums1, nums1Size, nums2, nums2Size, total / 2 + 1);
    else 
        return (findKth(nums1, nums1Size, nums2, nums2Size, total / 2) 
                + findKth(nums1, nums1Size, nums2, nums2Size, total / 2 + 1)) / 2;
}
