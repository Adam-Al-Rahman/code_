#pragma once // This serve as guard to ensure that you do not include this header file more than once in a single cpp file.

// Declaration of function
/**
 * If something is declare here, it must be defined somewhere in .cpp file.
 * And in the `linking process` at the time of compiling the linker will link the the declare function to the file which is importing(calling) it.
 */
//

// INVOKING
const void ben_invoking();

const void room();
const int room_area();