#include <stdio.h>
int main()
{
    /* Cruz Contreras Jose Aldair 
     Calcula el precio  */
    
    float fresa, kg, precio;
    printf ("\n\n comprando fruta");
    printf ("\n\n Precio de cualquier fruta $13");
    printf ("\n\n ingrese la fruta que selecciono");
    scanf ("%f",&fresa);
    printf ( "\n\n ingrese el peso de la fruta seleccionada");
    scanf ("%f",&kg);
    precio= &fresa * &kg;
    printf ("\n\n el precio total es %f",&precio);
    return 0 ;
}
