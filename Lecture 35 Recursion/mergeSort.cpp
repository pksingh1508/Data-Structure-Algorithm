    #include<iostream>
    using namespace std; 
    
    void merge(int *arr,int s, int e) {
        int mid = s + (e-s)/2;
        
        int len1 = mid - s + 1;
        int len2 = e - mid;

        int *first = new int[len1];
        int *second = new int[len2];

        // copy the element of the array
        int mainArrayIndex = s;
        for(int i=0; i<len1; i++) {
            first[i] = arr[mainArrayIndex++];
        }

        mainArrayIndex = mid + 1;
        for(int i=0; i<len2; i++) {
            second[i] = arr[mainArrayIndex++];
        }

        // merge 2 sorted  array
        int index1 = 0;
        int index2 = 0;
        mainArrayIndex = s;
        while(index1 < len1 && index2 < len2) {
            if(first[index1] < second[index2]) {
                arr[mainArrayIndex++] = first[index1++];
            }
            else {
                arr[mainArrayIndex++] = second[index2++];
            }
        }

        while(index1 < len1) {
            arr[mainArrayIndex++] = first[index1++];
        }

        while(index2 < len2) {
            arr[mainArrayIndex++] = second[index2++];
        }

        // deleting the dynamic memory allocation
        delete []first;
        delete []second;
    }

    void mergeSort(int *arr,int s,int e) {
        // Base Case
        if(s >= e)
            return;
        
        int mid = s + (e-s)/2;
        // left part ko sort kar lo
        mergeSort(arr,s,mid);
        // right part ko sort kar lo
        mergeSort(arr,mid+1,e);

        // merge kar do left and right part ko
        merge(arr,s,e);
    }

    int main(){

        int arr[7] = {38,27,43,3,9,82,10};
        int n = 7;

        mergeSort(arr,0,n-1);

        for(int i=0; i<n; i++) {
            cout << arr[i] << " ";
        } cout << endl;


    return 0;
    }