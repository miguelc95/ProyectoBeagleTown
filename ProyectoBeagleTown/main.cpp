//
//  main.cpp
//  ProyectoBeagleTown
//
//  Created by Miguel Cuellar on 3/15/16.
//  Copyright © 2016 Miguel Cuellar. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    
    int n,x,y,matPuntos[100000000][10000000];
    cin>>n;
    for (int ix=0; ix<n; ix++) {
        cin>>x>>y;
        matPuntos[x][y]=1;
    }
    
    return 0;
}
