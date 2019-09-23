#include <stdio.h>

#define MhToKmBase 1.609
#define GallonToL 3.785

int main()
{
    float mhMiles;
    float gasGallonCount;
    
    printf("Input your miles and gas count(gallon):");

    scanf("%f %f", &mhMiles, &gasGallonCount);

    printf("\n");

    printf("km: %.1f, L: %.1f", mhMiles * MhToKmBase, gasGallonCount * GallonToL);

    return 0;
}
