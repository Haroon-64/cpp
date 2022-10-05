1: double squareRoot(double a)
2: {
3:     /*
4:           find more detail of this method on wiki methods_of_computing_square_roots
5: 
6:           *** Babylonian method cannot get exact zero but approximately value of the square_root
7:      */
8:      double z = a; 
9:      double rst = 0.0;
10:     int max = 8;     // to define maximum digit 
11:     int i;
12:     double j = 1.0;
13:     for(i = max ; i > 0 ; i--){
14:         // value must be bigger then 0
15:         if(z - (( 2 * rst ) + ( j * powerOfTen(i)))*( j * powerOfTen(i)) >= 0)
16:         {
17:             while( z - (( 2 * rst ) + ( j * powerOfTen(i)))*( j * powerOfTen(i)) >= 0)
18:             {
19:                 j++;
20:                 if(j >= 10) break;
21:
22:             }
23:             j--; //correct the extra value by minus one to j
24:             z -= (( 2 * rst ) + ( j * powerOfTen(i)))*( j * powerOfTen(i)); //find value of z
25: 
26:             rst += j * powerOfTen(i);     // find sum of a
27:
28:             j = 1.0;
29: 
30: 
31:           }
32: 
33:      }
34: 
35:      for(i = 0 ; i >= 0 - max ; i--){
36:          if(z - (( 2 * rst ) + ( j * powerOfTen(i)))*( j * powerOfTen(i)) >= 0)
37:          {
38:              while( z - (( 2 * rst ) + ( j * powerOfTen(i)))*( j * powerOfTen(i)) >= 0)
39:              {
40:                  j++;
41:
42:              }
43:              j--;
44:              z -= (( 2 * rst ) + ( j * powerOfTen(i)))*( j * powerOfTen(i)); //find value of z
45: 
46:              rst += j * powerOfTen(i);     // find sum of a
47:              j = 1.0;
48:           }
49:      }
50:      // find the number on each digit
51:      return rst;
52: }