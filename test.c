#include <stdio.h>
#include "SpiceUsr.h"

int main()
{
     SpiceDouble rmat[3][3];
     furnsh_c("/home/brandon/skyfield/moon_080317.tf");
     furnsh_c("/home/brandon/skyfield/moon_pa_de421_1900-2050.bpc");
     pxform_c("J2000", "MOON_PA", 0.0, rmat);
     printf(
          "%.16f %.16f %.16f\n%.16f %.16f %.16f\n%.16f %.16f %.16f\n",
          rmat[0][0], rmat[0][1], rmat[0][2],
          rmat[1][0], rmat[1][1], rmat[1][2],
          rmat[2][0], rmat[2][1], rmat[2][2]
          );
     return 0;
}
