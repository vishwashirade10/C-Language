
#include<stdio.h>

int add(int a,int b){
    printf("in add()=%d\n",(a+b));
    return a+b;
}

int main(){
    int a=10;
    printf("addr of a=%x\n",&a); //get address
    //syntax
    //data-type *ptr_name=&var_name;
    int *aptr=&a;
    printf("aptr=%x\n",aptr);
    printf("*aptr=%d\n",*aptr); //pointer de_referencing

    //null ptr;
    int *null_ptr=NULL;


    //simple ptr
    int *aptr1=&a;
    printf("aptr1=%x\n",aptr1);
    printf("*aptr1=%d\n",*aptr1); //pointer de_referencing

    //arr_ptr
    int arr[6]={1,2,3,4,5,0};
    int *ptr_arr=&arr;
    printf("(X)arr=%x\n",arr);
    printf("arr=%d\n",arr);
    printf("ptr_arr=%x\n",ptr_arr);
    printf("*ptr_arr=%d\n",*ptr_arr); 
    // ptr_arr++;
    // printf("*ptr_arr++=%d\n",*ptr_arr);
    // ptr_arr++;
    // printf("*ptr_arr++=%d\n",*ptr_arr);
    // ptr_arr--;
    // printf("*ptr_arr--=%d\n",*ptr_arr);
    while(ptr_arr!=NULL && *ptr_arr!=0){
        printf("while->*ptr_arr=%d\n",*ptr_arr); 
        ptr_arr++;
    }


    //function ptr(ptr to function)
    int (*fptr)(int,int)=&add;
    int result=fptr(3,3);
    printf("result=%d\n",result);
    return 0;
}
