#include <stdio.h>
#include "SpiceUsr.h"

int main()
{
     SpiceDouble rmat[6][6];
     furnsh_c("/home/brandon/skyfield/moon_080317.tf");
     furnsh_c("/home/brandon/skyfield/moon_pa_de421_1900-2050.bpc");
     sxform_c("J2000", "MOON_PA", -11150.0 * 3600.0 * 24.0, rmat);
     printf(
          "%.17g %.17g %.17g\n%.17g %.17g %.17g\n%.17g %.17g %.17g\n",
          rmat[3][0], rmat[3][1], rmat[3][2],
          rmat[4][0], rmat[4][1], rmat[4][2],
          rmat[5][0], rmat[5][1], rmat[5][2]
          );
     return 0;
}
