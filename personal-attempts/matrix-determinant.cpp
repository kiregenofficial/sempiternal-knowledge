#include "atpt-head.h"

int matrix_determinant(int mat[3][3]) {

    // M[y][x] :
    // | a b c |
    // | d e f |
    // | g h i |

    int aei = mat[0][0] * mat[1][1] * mat[2][2]; // Main diagonal
    int bfg = mat[0][1] * mat[1][2] * mat[2][0];
    int cdh = mat[0][2] * mat[1][0] * mat[2][1];

    int ceg = mat[0][2] * mat[1][1] * mat[2][0]; // Side diagonal
    int afh = mat[0][0] * mat[1][2] * mat[2][1];
    int bdi = mat[0][1] * mat[1][0] * mat[2][2];

    return (aei + bfg + cdh - ceg - afh - bdi);
}

int matrix_determinant(int mat[2][2]) {

    // M[y][x] :
    // | a b |
    // | c d |

    int md = mat[0][0] * mat[1][1]; // Main diagonal
    int sd = mat[0][1] * mat[1][0]; // Side diagonal

    return (md - sd);
}