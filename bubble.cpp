#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int nums[10];
    int a, b, t;
    int size;
    size = 10;//number of elements to sort
    //give the array some random intial values
    for(t=0;t<size;t++) nums[t]=rand();

    //display orignal array
    cout << "Orignal array is:\n";
    for(t=0;t<size;t++) {
        cout << nums[t] << ' ';
    }
    cout << '\n';

    //This is bubble sort
    for(a=1; a<size;a++)
        for(b=size-1;b>=a;b--)
        {
            if(nums[b-1]>nums[b])
            {
                t = nums[b-1];
                nums[b-1]=nums[b];
                nums[b]=t;
            }
        }
        cout << "\nSorted array is:\n";
        for(t=0;t<size;t++)cout << nums[t]<< ' ';
        return 0;

}