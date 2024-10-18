class Solution
{
    public:
    int select(int arr[], int i,int n)
    {
        // code here such that selectionSort() sorts 
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        return minIndex;
    }
     
    void selectionSort(int arr[], int n)
    {
       //code here
       for (int i = 0; i < n - 1; i++) {
            int minIndex = select(arr, i, n);

            if (minIndex != i) {
                swap(arr[i], arr[minIndex]);
            }
        }
    }
}