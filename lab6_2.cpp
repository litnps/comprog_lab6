#include <bits/stdc++.h>

using namespace std;

double deg2rad(double deg){
    return deg*M_PI/180.0;
}

double rad2deg(double rad){
    return rad*180/M_PI;
}

double findXComponent(double lA, double lB, double radA, double radB){
    return lA*cos(radA) + lB*cos(radB);
}

double findYComponent(double lA, double lB, double radA, double radB){
    return lA*sin(radA) + lB*sin(radB);
}

double pythagoras(double a, double b){
    return sqrt(a*a+b*b);
}

void showResult(double L, double Deg){
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    
    cout<<"Length of the resultant vector = " << L << "\n";
    cout<<"Direction of the resultant vector (deg) = " << Deg << "\n";

    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
