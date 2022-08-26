#include<bits/stdc++.h>
using namespace std;
int left(int i)
{
    return i*2;
}
int right(int i)
{
    return 2*i +1;
}
int parent(int i)
{
    return i/2;
}

int max_heap(int h[], int heap_size)
{
    int i,p;
    for(i = heap_size; i>1; i--)
    {
        p = parent(i);
        if(h[p]<h[i])
        {
            return 0;
        }
    }

    return 1;
}

void max_heapify(int heap[], int heap_size, int i)
{
    int l,r,largest,t;
    l = left(i);
    r = right(i);
    if(l<=heap_size && heap[l]>heap[i])
    {
        largest = l;
    }
    else
    {
        largest = i;
    }

    if(r<=heap_size && heap[r]>heap[largest])
    {
        largest = r;
    }
    if(largest !=i)
    {
        t = heap[i];
        heap[i] = heap[largest];
        heap[largest] = t;
        max_heapify(heap,heap_size,largest);
    }
}
void print_heap(int heap[], int heap_size)
{
    int i;
    for(i = 1; i<=heap_size;i++)
    {
        printf("%d ",heap[i]);
    }

    printf("\n\n");
}
void build_max_heap(int heap[],int heap_size)
{
    int i;
    for(i = heap_size/2; i>=1; i--)
    {
        max_heapify(heap,heap_size,i);
    }
}

void heap_sort(int heap[], int heap_size)
{
    int i,t;
    for(i = heap_size; i>1; i--)
    {
        t = heap[1];
        heap[1] = heap[i];
        heap[i] = t;
        heap_size -= 1;

        max_heapify(heap,heap_size,1);
    }
}

int main()
{
    int heap_size = 9;
    int heap[] = {0,19,7,12,3,5,17,10,1,2};
    printf("Before Max Heapify.\n");
    print_heap(heap,heap_size);
    printf("Build max heap.\n");
    build_max_heap(heap, heap_size);
    print_heap(heap,heap_size);
    max_heapify(heap,heap_size,3);
    printf("After Max Heapify.\n");
    print_heap(heap,heap_size);
    printf("After Heapsort.\n");
    heap_sort(heap,heap_size);
    print_heap(heap,heap_size);

    return 0;
}
