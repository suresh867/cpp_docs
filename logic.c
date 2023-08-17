#include <stdio.h>
#include <stdbool.h>

bool conjuction(bool a, bool b){
    return a && b;
}

bool disjunction(bool a, bool b){
    return a || b;
}

bool negation(bool a){
    return !a;
}

bool implication(bool a, bool b){
    return !a||b;
}


bool bicondition(bool a, bool b){
    return (!a||b)&&(!b||a);
}

void display(bool a){
    if(a == true){
        printf("T\t");
    }
    else{
        printf("F\t");
    }
}

int main(){
    bool res; int i;
    bool a[] = {true, true, false, false};
    bool b[] = {true, false, true, false};
    printf("p\tq\t~p\t~q\tp^q\tpvq\tp=>q\tp<=>q\n");
    printf("---------------------------------------------------------------\n");
    for(i = 0; i<4; i++){
        display(a[i]);
        display(b[i]);
        res = negation(a[i]);
        display(res);
        res = negation(b[i]);
        display(res);
        res = conjuction(a[i], b[i]);
        display(res);
         res = disjunction(a[i], b[i]);
        display(res);
         res = implication(a[i], b[i]);
        display(res);
         res = bicondition(a[i], b[i]);
        display(res);
        printf("\n");
    }
}
