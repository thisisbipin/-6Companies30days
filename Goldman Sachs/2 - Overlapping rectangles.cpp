// Given top left and bottom right corners of two rectangles, determine if they overlap.
 
class Solution {
public:

    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
      int res=1; // Let's Assume they overlap  
      
      // Cases where our assumptions may fail
      if (L2[0] > R1[0] || L1[0] > R2[0] || L1[1] < R2[1] || L2[1] < R1[1])
            res=0;
      
      // return the result
        return res;
    }
};
