#include<iosfwd>

void sort(int arr[], int n)
{
    int temp = 0;
    for(int i = 0;i < n; i++)
    {
	for(int j = 0;j < n -i -1; ++j)
	{ if(arr[i] > arr[j+1])
	  {
	    temp = arr[j];
	    arr[j] = arr[j+1];
	    arr[j+1] = temp;
	  }
	}
    }
}


int main()
{
    int arr[] = {1, 22, 31, 14, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, size);
    for(int i = 0;i < size; i++)
    {
	std::cout<<arr[i]<<std::endl;
    }
    return 0;

}
