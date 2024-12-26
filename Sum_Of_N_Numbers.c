#include <stdio.h>
#include <math.h>
// #include <stdbool.h> | No Use For It
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define Fout fflush(stdout)
#define NLN printf("\n")
// #define Fin fflush(stdin) | No Use For It Here

void main() {
// const bool T=true; | No Use For It Here
char Bound_Change_Request[1] = "N";
int i = 0;
while (i==0){
    int Bound=2;
    printf("Do You Want To Change Number Of Inputs?\nType 'Y' for Yes | 'N' for No | Anything Else to Exit\n-> ");
    scanf("%s",&Bound_Change_Request);NLN;
    // A NAND gate or an XOR gate will both work here as the first case where both statements are false will never occur
    // and both gates have same Truth Table for all other combination of outputs
    assert(!(fabs(strcmp(Bound_Change_Request,"Y")) && fabs(strcmp(Bound_Change_Request,"N"))));

    if (!fabs(strcmp(Bound_Change_Request,"Y"))){
        printf("Enter Required Number Of Inputs\n-> ");Fout;
        scanf("%d",&Bound);NLN;}

    double Numlist[Bound] , Sum=0;

    printf("Enter %d Numbers with a gap in between: \n",Bound);Fout;

    for(int x=0;x<Bound;x++){
        scanf("%lf",&Numlist[x]);NLN;
    }

    for(int x=0;x<Bound;x++){
        Sum+=Numlist[x];
    }

    printf("Sum Is: %lf\n",Sum);Fout;
}}
