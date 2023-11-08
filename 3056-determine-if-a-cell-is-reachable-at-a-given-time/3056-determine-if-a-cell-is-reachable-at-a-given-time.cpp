class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
      int c1= abs(fx-sx);
      int c2=abs(fy-sy);
      if(c1==0&&c2==0&&t<=1&&t>0)
      {
          return false;
      }
      int max1=(max(c1,c2));
      if(max1<=t)
      {
          return true;
      } 
      else
      {
          return false;
      }
    }
};