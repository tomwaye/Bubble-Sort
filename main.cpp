//
//  main.cpp
//  BubbleSort
//
//  Created by Tom Waye on 11/06/2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
   
    int nums[10];
    int i,j;
    
    
    for(i=0;i<9; i++){
        int randInt1 = rand() % 100000;
        int randInt2 = rand() % randInt1 + 1;
        nums[i] = randInt2;
        cout << nums[i] << endl;
        
    }
    
    cout << "\nl" << endl;
    
    for(i=0;i<9;i++){
        
        for(j=i+1;j<9;j++){
            
            int temp;
            
            if(nums[i] > nums[j]){
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
            
        }
        
    
        
    }
    
    for(i=0;i<9;i++){
        cout << nums[i] << endl;
    }
    
    return 0;
}
