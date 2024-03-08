#include <stdio.h>
int main()
{
    float wkg, wg, wmg, lmm, lcm, lm, lkm, lft, lin, tc, tf;
    int c;
    printf("Welcome to Conversion Authority. What do we have to convert today?\n1. Weight\n2. Length\n3. Temperatures\nEnter any number of your choice from above given options:-");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        printf("\n Ok, so what do we have here?\n1. KGs to Gms and Mgs\n2. Gms to KGs and Mgs\n3. Mgs to KGs and Gms\n5. Exit");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("Enter Values in KiloGrams:-");
            scanf("%f", &wkg);
            wg = (wkg * 1000);
            wmg = (wg * 1000);
            printf("So %.2f KiloGrams is equal to %.2f Grams and %.2f MilliGrams.", wkg, wg, wmg);
            break;
        case 2:
            printf("Enter Values in Grams:-");
            scanf("%f", &wg);
            wkg = (wg / 1000);
            wmg = (wg * 1000);
            printf("So %.2f Grams is equal to %.2f KiloGrams and %.2f MilliGrams.", wg, wkg, wmg);
            break;
        case 3:
            printf("Enter Values in MilliGrams:-");
            scanf("%f", &wmg);
            wg = (wmg / 1000);
            wkg = (wg / 1000);
            printf("So %.2f MilliGrams is equal to %.2f Grams and %.2f KiloGrams.", wmg, wg, wkg);
            break;
        case 4:
            printf("Come Again and Happy To Help :)");
            break;

        default:
            break;
        }
        break;
    case 2:
        printf("\n Ok, so what do we have here?\n1. mm to cm, km, feets, metres and inches\n2. cm to mm, inches, feets, metres and km\n3. inches to mm, cm, feets, metres and km\n4. feets to mm, cm, inches, metres and km\n5. metres to mm, cm, inches, feets and km\n6. km to mm, cm, inches, metres and feets\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("Enter Values in MilliMetres:-");
            scanf("%f", &lmm);
            lcm = (lmm / 10);
            lm = (lcm / 100);
            lin = (lcm / 2.54);
            lft = (lin / 12);
            lkm = (lm / 1000);
            printf("So %.2f MilliMetres is equal to %.2f CentiMetres, %.2f Inches, %.2f feets, %.2f Metres and %.2f Kilometers.", lmm, lcm, lin, lft, lm, lkm);
            break;
        case 2:
            printf("Enter Values in CentiMetres:-");
            scanf("%f", &lcm);
            lmm = (lcm * 10);
            lm = (lcm / 100);
            lin = (lcm / 2.54);
            lft = (lin / 12);
            lkm = (lm / 1000);
            printf("So %.2f CentiMetres is equal to %.2f MilliMetres, %.2f Inches, %.2f feets, %.2f Metres and %.2f Kilometers.", lcm, lmm, lin, lft, lm, lkm);
            break;
        case 3:
            printf("Enter Values in Inches:-");
            scanf("%f", &lin);
            lcm = (lin * 2.54);
            lm = (lcm / 100);
            lmm = (lcm * 10);
            lft = (lin / 12);
            lkm = (lm / 1000);
            printf("So %.2f Inches is equal to %.2f CentiMetres, %.2f MilliMetres, %.2f feets, %.2f Metres and %.2f Kilometers.", lin, lcm, lmm, lft, lm, lkm);
            break;
        case 4:
            printf("Enter Values in Feets:-");
            scanf("%f", &lft);
            lin = (lft * 12);
            lcm = (lin * 2.54);
            lm = (lcm / 100);
            lmm = (lcm * 10);
            lkm = (lm / 1000);
            printf("So %.2f Feets is equal to %.2f CentiMetres, %.2f MilliMetres, %.2f Inches, %.2f Metres and %.2f Kilometers.", lft, lcm, lmm, lin, lm, lkm);
            break;
        case 5:
            printf("Enter Values in Metres:-");
            scanf("%f", &lm);
            lcm = (lm * 100);
            lin = (lcm / 2.54);
            lft = (lin / 12);
            lmm = (lcm * 10);
            lkm = (lm / 1000);
            printf("So %.2f Metres is equal to %.2f CentiMetres, %.2f MilliMetres, %.2f Inches, %.2f feets and %.2f Kilometers.", lm, lcm, lmm, lin, lft, lkm);
            break;
        case 6:
            printf("Enter Values in KiloMetres:-");
            scanf("%f", &lkm);
            lm = (lkm * 1000);
            lcm = (lm * 100);
            lin = (lcm / 2.54);
            lft = (lin / 12);
            lmm = (lcm * 10);
            printf("So %.2f KiloMetres is equal to %.2f CentiMetres, %.2f MilliMetres, %.2f Inches, %.2f feets and %.2f Metres.", lkm, lcm, lmm, lin, lft, lm);
            break;
        case 7:
            printf("Come Again and Happy To Help :)");
            break;

        default:
            break;
        }
        break;
    case 3:
        printf("\n Ok, so what do we have here?\n1. Celsius to Farenheit\n2. Farenheit to Celsius\n3. Exit");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("Enter Values in Celsius:-");
            scanf("%f", &tc);
            tf = (tc * 9 / 5) + 32;
            printf("So %.2f Celsius is equal to %.2f Farenheit.", tc, tf);
            break;
        case 2:
            printf("Enter Values in Farenheit:-");
            scanf("%f", &tf);
            tc = (tf - 32) * 9 / 5;
            printf("So %.2f CentiMetres is equal to %.2f MilliMetres, %.2f Inches, %.2f feets, %.2f Metres and %.2f Kilometers.", lcm, lmm, lin, lft, lm, lkm);
            break;
        case 3:
            printf("Come Again and Happy To Help :)");
            break;

        default:
            break;
        }
    case 4:
        printf("Sorry to see you go so soon :(");
            break;
    default:
        break;
    }
}