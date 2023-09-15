/*
    ผู้ใช้กรอกจำนวนอาเรย์ 2 มิติขึ้นมา 2 ชุด และกรอกค่าภายในอาเรย์จนครบ จากนั้นให้คุณสร้างอาเรย์ที่ 3 ขึ้นมาเก็บผลรวมของอาเรย์ทั้ง 2 ชุดนี้ โดยกำหนดให้ Element ของ Array1 , Array2 และ Array3 เท่ากัน
    
    Test case:
        Array1 element : 
            3 3
        Input :
            1 2 3
            4 5 6
            7 8 9
        Array2 element : 
            3 3
        Input :
            1 1 1
            1 1 1
            1 1 1
    Output:
        Array1 + Array2 = Array3
            2 3 4
            5 6 7
            8 9 10

*/

#include <stdio.h>

int main () {
    
    int  column , row ;

    // สร้าง array1 2d พร้อมเก็บค่า
    printf ( "Array1 element : \n" ) ;
    scanf ( "%d %d", &column , &row ) ;
    int array1[ row ] [ column ] ;
    for ( int i = 0 ; i < row ; i++ ) {
        for ( int k = 0 ; k < column ; k++ ) {
            printf ( "array1[%d] [%d]\n", i , k ) ;
            scanf ( "%d", &array1[ i ] [ k ] ) ;
        } // end for
    } // end for
    
    // สร้าง array2 2d พร้อมเก็บค่า
    printf ( "Array2 element : \n" ) ;
    scanf ( "%d %d", &column , &row ) ;
    int array2[ row ] [ column ] ;
    for ( int i = 0 ; i < row ; i++ ) {
        for ( int k = 0 ; k < column ; k++ ) {
            printf ( "array2[%d] [%d]\n", i , k ) ;
            scanf ( "%d", &array2[ i ] [ k ] ) ;
        } // end for
    } // end for

    // รวม array1 กับ array2 ด้วยกัน
    int array3[ row ] [ column ] ;
    for ( int i = 0 ; i < row ; i++ ) {
        for ( int k = 0 ; k < column ; k++ ) {
            array3[ i ] [ k ] = array1[ i ] [ k ] + array2[ i ] [ k ] ;
        } // end for
    } // end for
    
    // แสดงค่า
    printf ( "Array1 + Array2 = Array3\n" ) ;
    for ( int i = 0 ; i < row ; i++ ) {
        for ( int k = 0 ; k < column ; k++ ) {
            printf ( "%d", array3[ i ] [ k ] ) ;
            // ทำให้ช่องหลังไม่เว้นวรรค
            if ( column > k + 1 ) {
                printf ( " " ) ;
            }
            
        } // end for
        printf ( "\n" ) ;
    } // end for
    
    return 0 ;
} // end main