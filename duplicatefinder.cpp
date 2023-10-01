#include <iostream>
using namespace std;
int main()
{
    int dup[10] ={1,1,2,3,4,2,5,6,7,7};
    int size = 10;
    cout << "Orignal array is:\n";
    for(int i=0;i<size;i++) {
        cout << dup[i] << ' ';
    }
    cout << '\n';
    for(int i=0;i< size;i++)
    {
        for(int j=i+1;j<size;j++)//The reason we do i+1 is do to the 
        {                       //for loop will always start j form 0
            if(dup[i]==dup[j])
            {
                cout << "we have a duplicate" << dup[i]<<"\n";
            }
        }
    }
    
    return 0;
}