#include <windows.h>
#include <Lmcons.h>
#include <iostream>
#include <fstream>
#include <bits/stdc++.h> 

//https://md5decrypt.net/en/Xor/ for XOR encryption and decryption, Key is T and Text for input type, key type, and output type

// TODO: Implement audio
/* #pragma comment(lib, "winmm.lib") 

void sound() {
    PlaySound("sfx.wav", NULL, SND_FILENAME | SND_ASYNC);
} 
*/

std::string encryptDecrypt(std::string toEncrypt) 
{
    char key = 'T'; //Any char will work
    std::string output = toEncrypt;
    int i = 0;
    for (int i = 0; i < toEncrypt.size(); i++)
        output[i] = toEncrypt[i] ^ key;
    
    return output;

}


// Need to figure out how to use this even with it being above main or just put it into main
void messagestouser(char stage) {
    switch(stage) {
        case 0:
            std::cout << "0x00 Error";
            break;
        case 1:
            int msgboxID = MessageBox(0, "You probably shouldn't have opened this..", "Oops", MB_OK | MB_ICONWARNING);
            break;
    }
}

int main(){ 
    // XOR Cipher translations and code below
    char a[] = "-;!t$&;6568-t'<;!80:s t<5\"1t;$1:10t <='zz"; //You probably shouldn't have opened this..
    char b[] = ";;$'"; //Oops
    char c[] = "d,ddt&&;&"; //0x00 error
    char d[] = "$$8=75 =;:t25=810t ;t1,17! 1z"; //Application failed to execute.
    char e[] = "=7&;';2 t=:0;#'"; //Microsoft Windows
    char f[] = "&&;&t75::; t7;::17 t ;t1&\"1&t ;t0;#:8;50t2=81't;t-;!t#5: t ;t &-t535=:kt|:;#:t ;t25=8t;:t2=&' t!'1}"; //Error cannot connect to Server to download files Do you want to try again? (Known to fail on first use)"
    char g[] = " <='t='t <1t61 5t\"1&'=;:t;2t <1t:1#t3&5016;;?t ;;8t01\"18;$10t2;&t <='t'7<;;8;"; //This is the beta version of the new gradebook tool developed for this school
    char h[] = " <='t7;9$! 1&t='t:;#t12217 =\"18-t &5'<10t;91;:1t:;#t<5't-;!&t$5''#;&0't5:0t8;3=:t ;?1:'zzt\"1&- =91t-;!t6;; t <1&1s't5t7<5:71t588t;2t-;!&t05 5t#=88t61t3;:1"; //This computer is now effectively trashed Someone now has your passwords and login tokens.. Everytime you boot there's a chance all of your data will be gone
    std::string decrypta = encryptDecrypt(a);
    std::string decryptb = encryptDecrypt(b);
    std::string decryptc = encryptDecrypt(c);
    std::string decryptd = encryptDecrypt(d);
    std::string decrypte = encryptDecrypt(e);
    std::string decryptf = encryptDecrypt(f);
    std::string decryptg = encryptDecrypt(g);
    std::string decrypth = encryptDecrypt(h);
    LPCSTR converteda = decrypta.c_str();
    LPCSTR convertedb = decryptb.c_str();
    LPCSTR convertedc = decryptc.c_str();
    LPCSTR convertedd = decryptd.c_str();
    LPCSTR convertede = decrypte.c_str();
    LPCSTR convertedf = decryptf.c_str();
    LPCSTR convertedg = decryptf.c_str();
    LPCSTR convertedh = decrypth.c_str();
    std::ofstream checkifavdetected;
    checkifavdetected.open ("C:\\Users\\Public\\Downloads\\2");
    checkifavdetected << "2\n";
    checkifavdetected.close();
    std::ifstream check;
    check.open ("C:\\Users\\Public\\Downloads\\2");
    char stage = 0;

    if(check) {
        check.close();
    }
    else {
        int msgboxID = MessageBox(0,convertedd, convertede, MB_OK | MB_ICONERROR);
        check.close();
    }

    std::ifstream file;
    file.open ("C:\\Users\\Public\\Downloads\\0");
    std::ifstream stopp;
    stopp.open ("C:\\Users\\Public\\Downloads\\1");

    if(stopp) {
        int msgboxID = MessageBox(0,"my cat ate one of your files :<", "sorry", MB_OK | MB_ICONWARNING);
        stopp.close();
    }
    else if (file) {
        int msgboxID = MessageBox(0,"I'll just delete a random file", "stop", MB_OK | MB_ICONERROR);
        file.close();
        std::ofstream newfile;
        newfile.open("C:\\Users\\Public\\Downloads\\1");
        newfile << "1\n";
        newfile.close();

    }
    else {
        std::ofstream anfile;
        anfile.open("C:\\Users\\Public\\Downloads\\0");
        anfile << "0\n";
        anfile.close();
        LPCSTR pcstr = decrypta.c_str();
        int msgboxID = MessageBox(0, convertedf, "Grademark 2.0 (13b38a) (Internal Tool)" , MB_RETRYCANCEL | MB_ICONERROR);
        stage = 1;
        switch (msgboxID){
                case IDCANCEL:
                    messagestouser(stage);
                case IDRETRY:
                    int msgboxID = MessageBox(0, convertedg, "Grademark 2.0 (13b38a) (Internal Tool)", MB_OK | MB_ICONINFORMATION);
                    messagestouser(stage);
        }
        int msgboxIDa = MessageBox(0, convertedh, ".", MB_OK | MB_ICONWARNING);
        switch (msgboxIDa) {
                case IDOK:
                break;
        }
    }

    return 0;
}
