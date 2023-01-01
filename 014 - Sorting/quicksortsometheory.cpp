// Some Important Notes
1. Quick Sort Time Complexity 
a> Best Case :- theta(nlogn)
b> Wrost Case :- theta(n2)
c> Average Case:- O(nlogn)


2. Quick Sort Space Complexity
a> Wrost Case :- theta(n)
b> Best Case :- theta(logn) or O(logn)

3. Choose of Pivot Element For Good Quick Sort 
a> Use Random Function in That Case
b> p = Random(low,high)
c> swap(arr[low]],arr[p]); (Hoare)
d> swap(aee[high],arr[p]); (Lomuto)

4> Tail Call Elimination
a> Used to Reduce Extra Space
// Code
void qSort(int arr[], int low, int high)
{
    begin:
    if(low < high)
    {
        int p = partition(arr,low,high);
        qSort(arr,low,high);
        l = p + 1;
        goto beginl
        
    }
}