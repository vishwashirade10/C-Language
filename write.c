
#include<stdio.h>
#include<string.h>
int main(){
    FILE *fptr = fopen("file.txt","w");

    if(fptr!=NULL){
        printf("File exists.");
    }else {
        printf("file doesnt exists");
    }

    
    int vcnt=0;
    char istr[20]="helloworld\n";
    for(int i=0;i<20;i++){
        if(istr[i]!=0){
            fputc(istr[i],fptr);
        }
        vcnt++;
    }
    if(vcnt==20){
        printf("write successful.");
    }else {
        printf("write Fail.");
    }


    char istr1[20]="fputsoperation\n";
    fputs(istr1,fptr);
    
    
    int roll_no=10;
    char name[20]="vishwas";
    char branch[21]="Computer Engnierring";
    fprintf(fptr,"%d %s %s",roll_no,name,branch);
    fclose(fptr);
    return 0;
}
