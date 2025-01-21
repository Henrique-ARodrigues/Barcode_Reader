#include <stdio.h>
#include "central.h"


int main() {
    start_clean(image);

    const char* ean8 = "40170725";

    do_ean8(image, ean8);
    print_image();

    return 0;
}