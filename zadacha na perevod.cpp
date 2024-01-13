#include <iostream>
#include <string>
using namespace std;
long long itc_len(string str){
    int length = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        length++;
    }
    return length;
}
string obratno(string st)
{
    int dlina = st.size() -1;
    for (int i = 1; i <= dlina; i++){
        if (st[i] == '1'){
            st[i] = '0';
        }
        else{
            st[i] = '1';
        }
    }
    return st;
}

string binnumber(long long number) {
    if (number == 0) {
        return 0;
    }
    string binary = "";
    while (number != 0) {
        int digit = number % 2;
        binary = to_string(digit) + binary;
        number /= 2;
    }
    return binary;
}
int dopolnitelnydes(string st){
    int a = 1;
    int b = 0;
    char znach;
    int k = st.size() -1;
    while (k >= 0) {
        znach = st[k] - '0';
        b += znach * a;
        a *= 2;
        k--;
    }
    b++;
    return b;
}
string dopolnitelny(int b, string st){
    char znach;
    int k = st.size() -1;
    while (k >= 0 && b > 0) {
        znach = b % 2 + '0';
        st[k] = znach;
        k--;
        b = b / 2;
        cout << b << endl;
    }
    cout << b;
    return st;
}
string perevod(int chislo, int bit, int sposob ){
if(sposob == 1){
        int chislo2= chislo;
        if(chislo2<0){
            chislo = -chislo;
        }
    string dvoica = binnumber(chislo);
    string dop;
    string newchislo = "";
    int null = bit - itc_len(dvoica);
        for (int i = 0; i < null; i++) {
        dop+='0' ;
    }
    newchislo  =  dop+ newchislo + dvoica ;
    if(chislo2 < 0){
        newchislo[0] = '1';
    }
 return newchislo;
}
if(sposob == 2){
        if(chislo<0){
        int chislo2= chislo;
        if(chislo2<0){
            chislo = -chislo;
        }
    string dvoica = binnumber(chislo);
    string dop;
    string newchislo = "";
    int null = bit - itc_len(dvoica);
        for (int i = 0; i < null; i++) {
        dop+='0' ;
    }
    newchislo  =  dop+ newchislo + dvoica ;
    if(chislo2 < 0){
        newchislo[0] = '1';
    }
 return obratno(newchislo);
}
else{
            int chislo2= chislo;
        if(chislo2<0){
            chislo = -chislo;
        }
    string dvoica = binnumber(chislo);
    string dop;
    string newchislo = "";
    int null = bit - itc_len(dvoica);
        for (int i = 0; i < null; i++) {
        dop+='0' ;
    }
    newchislo  =  dop+ newchislo + dvoica ;
    if(chislo2 < 0){
        newchislo[0] = '1';
    }
 return newchislo;
}
}

if (sposob == 3){
        if(chislo<0){
int chislo2= chislo;
        if(chislo2<0){
            chislo = -chislo;
        }
    string dvoica = binnumber(chislo);
    string dop;
    string newchislo = "";
    int null = bit - itc_len(dvoica);
        for (int i = 0; i < null; i++) {
        dop+='0' ;
    }
    newchislo  =  dop+ newchislo + dvoica ;
    if(chislo2 < 0){
        newchislo[0] = '1';
    }
    string perevchislo = obratno(newchislo);
    int nov = dopolnitelnydes(perevchislo);
    return binnumber(nov);
}
else {
            int chislo2= chislo;
        if(chislo2<0){
            chislo = -chislo;
        }
   string dvoica = binnumber(chislo);
    string dop;
    string newchislo = "";
    int null = bit - itc_len(dvoica);
        for (int i = 0; i < null; i++) {
        dop+='0' ;
    }
    newchislo  =  dop+ newchislo + dvoica ;
    if(chislo2 < 0){
        newchislo[0] = '1';
    }
 return newchislo;
}
}
}
int main(){
   int a,b,c;
   cin>>a>>b>>c;
   cout<< perevod(a,b,c);

}
