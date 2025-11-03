#include "matrix_utils.h"
#include <stdlib.h>
int flip_max_abs_in_each_row(int **m,int r,int c){
    if(!m||r<=0||c<=0) return 0;
    int changes=0;
    for(int i=0;i<r;i++){
        int maxi=0;
        for(int j=1;j<c;j++) if(abs(m[i][j])>abs(m[i][maxi])) maxi=j;
        int target=abs(m[i][maxi]);
        for(int j=0;j<c;j++) if(abs(m[i][j])==target){ m[i][j] = -m[i][j]; changes++; }
    }
    return changes;
}
