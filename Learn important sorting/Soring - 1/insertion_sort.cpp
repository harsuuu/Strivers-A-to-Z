class Solution
{
    public:
    void insert(int arr[], int i)
    {
        //code here
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        for(int i=1;i<n;i++)    //for passes
        {
            int j=i-1;
            int x=arr[i];
            while(arr[j]>x && j>-1)
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=x;
        }
        
    }
};