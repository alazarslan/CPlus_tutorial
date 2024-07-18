//
// Created by alaz on 18.07.2024.
//

#ifndef MYMACROS_H
#define MYMACROS_H

#define ABS(x) \
    ((x >= 0) ? x : 0 - x)

#define MAX(a,b) \
    ((a > b) ? a : b)

#define isControl(c) (c >= 0 && c <= 31 && c != '\n' && c != '\t')
#endif //MYMACROS_H
