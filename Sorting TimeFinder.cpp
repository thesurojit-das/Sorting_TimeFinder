#include<bits/stdc++.h>
#include<time.h>
using namespace std;
class sorting{
    public :
    double long bubble(int array[],int n){
        clock_t start = clock();
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                if(array[j]>array[j+1]){
                    int t=array[j];
                    array[j]=array[j+1];
                    array[j+1]=t;
                }
            }
        }
        clock_t ends=clock();
        return ((double) (ends - start) / CLOCKS_PER_SEC )*1000;
    }
    double long insertion(int array[],int n){
        clock_t start=clock();
        for(int i=1;i<n;i++){
            int t;
            t=array[i];
            int j=i;
            while(array[j-1]>t &&j>0){
                array[j]=array[j-1];
                --j;
            }
            array[j]=t;
        }
        clock_t ends=clock();
        return ((double) (ends - start) / CLOCKS_PER_SEC )*1000;
	}
	double long selection (int array[],int n){
	    clock_t start=clock();
	    int min,t;
	    for(int i=0;i<n-1;i++){
	        min=i;
	        for(int j=i+1;j<n;j++){
	            if(array[j]<array[min]){
	                min=j;
	                t=array[i];
	                array[i]=array[min];
	                array[min]=t;
	            }
	        }
	    }
	    clock_t ends=clock();
        return ((double) (ends - start) / CLOCKS_PER_SEC )*1000;
	}
};
int main() {
    cout<<"Enter the size"<<endl;
    int n;
    cin>>n;
    int array[n];
    cout<<"Enter Data"<<endl;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    sort(array, array + n);
    cout<<"Sorted Array"<<endl; 
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    sorting way;
    double long outcome[3],a,c,b;
    outcome[0]=a=way.bubble(array,n);
    outcome[1]=b=way.insertion(array,n);
    outcome[2]=c=way.selection(array,n);
    cout<<endl;
    cout<<"\n**************************************************************************\n";
    cout<<" Note :  All the functions above were used to sorting numbers, \n         you can use more than that number, just change the value of \n         size of the array and it's numbers. \n";
    cout<<"**************************************************************************\n\n";
    cout << "Bubble  Sort Running Time in Seconds   : "<< a << endl;
    cout << "Insertion Sort Running Time in Seconds : " << b << endl;
    cout << "Selection Sort Running Time in Seconds : " << c << endl<<endl;
    cout << "Fastest Sort Running Time in Seconds : " <<  *min_element(outcome, outcome + 3)<< endl;
    cout << "Slowest Sort Running Time in Seconds : " <<  *max_element(outcome, outcome + 3)<< endl;
}

// 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 

