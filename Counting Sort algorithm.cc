#include "iostream"

using namespace std;

void print_array(int A[],int n);

int main(int argc, char const *argv[])
{
    int n = 18; 
    int IA[n] = {11,4,7,3,1,2,3,10,9,9,4,1,2,1,7,10,1,11,9};
    cout<<"The Input array data";
    print_array(IA,n);

    int max = 0;
    for(int i = 0;i<n;i++){
        if(IA[i] > max)
            max = IA[i];
    }
    cout<<"The Highest value of the data is "<<max<<endl;
    int AuxSize = max + 1;
    int Aux[AuxSize] = {};
    cout<<"The Auxiliary Array ";
    print_array(Aux,AuxSize);
    
   
    for (int i = 0; i < n;i++){
        
        Aux[IA[i]] = Aux[IA[i]] + 1;
    }  
    cout<<"Aux Array after counting occurrences ";
    print_array(Aux,AuxSize);
 
    cout<<"Sum of Aux Array ";
    print_array(Aux,AuxSize);
    
    int OA[n] = {}; 
    for (int i = n-1;i >= 0;i--){
        OA[Aux[IA[i]]-1] = IA[i];
        Aux[IA[i]] = Aux[IA[i]] - 1;
    }
    cout<<"The New Sorted Output Array ";
    print_array(OA,n);
    return 0;
}

void print_array(int A[],int n){
    for(int i=0;i < n;i++){
        cout<<A[i]<<" ";
        if(i+1 == n){
            cout<<endl;
        }
    }
}