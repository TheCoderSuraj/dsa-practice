// Online C compiler to run C program online
#include <stdio.h>
#define LIMIT 25

int arr[LIMIT] = {1,2,3,4};
int len = 4;



// deletion 
void deletion(int index){
    if(len <= 0) return;
    
    for(int i = index; i < len; i++){
        arr[i] = arr[i + 1];
    }
    len--;
    
}

// insertion
void insert(int index,int element){
    if(len >= LIMIT) return;
    if(index > len) index = len;
    
    for(int i = len - 1; i > index; i--){
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    len++;
}


// display
void display(){
    printf("\nThe array elements are: ");
    for(int i= 0; i< len; i++){
        printf("%d ,",arr[i]);
    }
}



int main() {
    display();
    
    // insert(0, 32);
    // insert(2, 23);
    
    // display();
    // deletion(0);
    // display();
    // deletion(3);
    // display();
    
    insert(10, 23);
    display();
    
    
}