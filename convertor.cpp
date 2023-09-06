#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void toBinary(long long int data){
    if(data==0){
        cout<<"Binary: 0"<<endl;
    }else{
        vector<int> v;
        int binary;

        while(data != 0){
            binary = data % 2;
            data = data/2;
            v.push_back(binary);         
        }
        cout<<"Binary: ";
        vector<int>::reverse_iterator rev;
        for(rev = v.rbegin();rev != v.rend(); rev++){
            cout<< *rev;
        }
        cout<<endl;
    }
    cout<<endl;
}

void toOctal(long long int data){
    if(data==0){
        cout<<"Octal: 0"<<endl;
    }else{
        int octal;
        vector<int> v;
        while(data != 0){
            octal = data%8;
            data = data/8;
            v.push_back(octal);
        }
        cout<<"Octal: ";
        vector<int>::reverse_iterator rev;
        for(rev = v.rbegin(); rev != v.rend();rev++){
            cout<<*rev;
        }
        cout<<endl;
        cout<<endl;
    }
}

void toHexa(long long int data){
    if(data==0){
        cout<<"Hexa DEcimal: 0"<<endl;
    }else{
        string hexadecimal = "";
        char hexdigit[] = "0123456789ABCDEF";

        while(data !=0){
            int reminder = data % 16;
            hexadecimal= hexdigit[reminder] + hexadecimal;
            data = data/16;
        }
        cout<<"HexaDecimal: "<<hexadecimal<<endl;
    }
    cout<<endl;

}

void BintoDec(long long int data){
    if(data==0){
        cout<<"Decimal: 0"<<endl;
    }else{
        int decimal=0;
        int temp;
        int index = 0;
        while(data != 0){
            temp = data%10;
            data = data/10;
            decimal = decimal + temp * pow(2,index);
            index++;
        }
        cout<<"Decimal: "<<decimal<<endl;
    }
    cout<<endl;
}

void OcttoDec(long long int data){
    if(data==0){
        cout<<"Decimal: 0"<<endl;
    }else{
        int decimal = 0;
        int index = 0;
        int temp;
        while(data != 0){
            temp = data%10;
            data = data/10;
            decimal = decimal + temp * pow(8,index);
            index++;
        }
        cout<<"Decimal: "<<decimal<<endl;
    }
    cout<<endl;
}
void HextoDec(string data){
    if(data=="0"){
        cout<<"HexaDecimal: 0"<<endl;
    }else{
        long long int decimal = 0;
        int index = 0;
        for(int i=data.length()-1;i>=0;i--){
            char str = data[i];
            int temp;
            if(str >= '0' && str <= '9'){
                temp = str - '0';
            }else if(str >= 'A' && str <='F'){
                temp = str - 'A' + 10;
            }else if(str >= 'a' && str <='f'){
                temp = str - 'a' + 10;
            }
        decimal = decimal + temp * pow(16,index); 
        index++;
        }
        cout<<"Decimal: "<<decimal<<endl;
    }
    cout<<endl;
}

int main() {
    string Hex;
    long long int data;
    int choice;
    do{
        cout<<"*************Convertor*************"<<endl;
        cout<<endl;
        cout<<"Convert Decimal to               "<<endl;
        cout<<endl;
        cout<<"        1)To Binary"<<endl;
        cout<<"        2) To Octal"<<endl;
        cout<<"        3) To Hex"<<endl;
        cout<<endl;
        cout<<"Convert to Decimal               "<<endl;
        cout<<endl;
        cout<<"         4) From Binary"<<endl;
        cout<<"         5) From Octal"<<endl;
        cout<<"         6) From Hex"<<endl;
        cout<<"         7) Exit"<<endl;
        cout<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
            cout<<"*************Decimal to Binary*************"<<endl;
            cout<<"Enter the decimal number: ";
            cin>>data;
            toBinary(data);
            break;

            case 2:
            cout<<"*************Decimal to Octal*************"<<endl;
            cout<<"Enter the decimal number: ";
            cin>>data;
            toOctal(data);
            break;

            case 3:
            cout<<"*************Decimal to Hex*************"<<endl;
            cout<<"Enter the decimal number: ";
            cin>>data;
            toHexa(data);
            break;

            case 4:
            cout<<"*************Binary to Decimal*************"<<endl;
            cout<<"Enter the Binary number: ";
            cin>>data;
            BintoDec(data);
            break;

            case 5:
            cout<<"*************Octal to Decimal*************"<<endl;
            cout<<"Enter the Octal number: ";
            cin>>data;
            OcttoDec(data);
            break;

            case 6:
            cout<<"*************Hex to Decimal*************"<<endl;
            cout<<"Enter the Hex: ";
            cin>>Hex;
            HextoDec(Hex);
            break;

            case 7:
            cout<<"*************Exit*************"<<endl;
            exit(0);
            default:
            cout<<"Enter valid option"<<endl;
            
        }
    }while(choice != 7);
    return 0;
}
