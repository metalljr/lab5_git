#include "array_utils.h"
#include <stdlib.h>
int flip_max_abs_array(int *a, int n){
    if(!a||n<=0) return 0;
    int maxi=0, i, changes=0;
    for(i=1;i<n;i++) if(abs(a[i])>abs(a[maxi])) maxi=i;
    int target = abs(a[maxi]);
    for(i=0;i<n;i++) if(abs(a[i])==target){ a[i] = -a[i]; changes++; }
    return changes;
}
