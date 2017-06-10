//
// Created by 蔡少凡 on 6/10/17.
//

#include <iostream>
using namespace std;
#include <vector>

//class Solution {
//public:
//    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
//        if(flowerbed.size() == 0)
//            return false;
//        if(flowerbed[0] == 0 && flowerbed[1] == 0 && n >0) {
//            flowerbed[0] = 1;
//            n--;
//        }
//        int i;
//        for(i=1; i< flowerbed.size() - 1; i++){
//            if(flowerbed[i-1]==0 && flowerbed[i] == 0 && flowerbed[i+1] == 0&& n>0){
//                n--;
//                flowerbed[i] = 1;
//            }
//        }
//
//        if(flowerbed[i-1] == 0 && flowerbed[i] == 0 && n >0) {
//            flowerbed[i] = 1;
//            n--;
//        }
//
//        if(n == 0)
//            return true;
//        else
//            return false;
//
//    }
//};
class Solution {
public:
    bool canPlaceFlowers(vector<int>& bed, int n) {
        for (int i = 0; i < bed.size(); i++) {
            if (!bed[i] && (i == 0 || !bed[i - 1]) && (i == bed.size() - 1 || !bed[i + 1])) {
                bed[i] = 1;
                n--;
            }
        }
        return n <= 0;
    }
};
int main(){

}