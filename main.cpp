#include <windows.h>
#include <Lmcons.h>
#include <iostream>
#include <fstream>
#include "Xorstring.h"

// TODO: Implement audio
/* #pragma comment(lib, "winmm.lib") 

void sound() {
    PlaySound("sfx.wav", NULL, SND_FILENAME | SND_ASYNC);
} 
*/

void creatingmessagebox(char messageboxcreation) {
    std::string c = (XorStr( "Application failed to execute." ));
    std::string d = (XorStr( "Microsoft Windows" ));
    LPCSTR convertedc = c.c_str();
    LPCSTR convertedd = d.c_str();
    std::string h = (XorStr( "You probably shouldn't have opened this.." )); // You probably shouldn't have opened this..
    std::string i = (XorStr( "Oops" )); // Ooops
    LPCSTR convertedh = h.c_str();
    LPCSTR convertedi = i.c_str();
    std::string e = (XorStr( "Error cannot connect to Server to download files\nDo you want to try again?\n(Known to fail on first use)" ));
    LPCSTR convertede = e.c_str();
    std::string f = (XorStr( "This is the beta version of the new gradebook tool developed for this school" ));
    LPCSTR convertedf = f.c_str();
    std::string g = (XorStr( "This computer is now effectively trashed!\nSomeone now has your passwords and login tokens..\nEverytime you boot there's a chance all of your data will be gone" ));
    LPCSTR convertedg = g.c_str();
    switch (messageboxcreation) {
        case 0:
        {
            int msgboxID = MessageBox(0,convertedc, convertedd, MB_OK | MB_ICONERROR);
            break;
        }
        case 1:
        {
            int msgboxID = MessageBox(0, convertedh, convertedi, MB_OK | MB_ICONWARNING);
            break;
        }
        case 2:
        {
            int msgboxID = MessageBox(0,"my cat ate one of your files :<", "sorry", MB_OK | MB_ICONWARNING);
            break;
        }
        case 3:
        {
            int msgboxID = MessageBox(0,"I'll just delete a random file", "stop", MB_OK | MB_ICONERROR);
            break;
        }
        case 4:
        {
            int msgboxID = MessageBox(0, convertede, "Grademark 2.0 (13b38a) (Internal Tool)" , MB_RETRYCANCEL | MB_ICONERROR);
                switch (msgboxID){
                    case IDCANCEL:
                        messageboxcreation = 1;
                        creatingmessagebox(messageboxcreation);
                    case IDRETRY:
                        messageboxcreation = 5;
                        creatingmessagebox (messageboxcreation);
                        messageboxcreation = 1;
                        creatingmessagebox (messageboxcreation);
                }
            break;
        }
        case 5:
        {
            int msgboxID = MessageBox(0, convertedf, "Grademark 2.0 (13b38a) (Internal Tool)", MB_OK | MB_ICONINFORMATION);
            break;
        }
        case 6:
        {
            int msgboxIDa = MessageBox(0, convertedg, ".", MB_OK | MB_ICONWARNING);
            break;
        }
    }
}

void fileloadingandcreating(char writingfile) {
    std::ofstream checkifavdetected;
    std::ofstream newfile;
    std::ofstream anfile;
    switch (writingfile) {
    case 0: 
        checkifavdetected.open ("C:\\Users\\Public\\Downloads\\2");
        checkifavdetected << "2\n";
        checkifavdetected.close();
        break;
    case 1:
        newfile.open("C:\\Users\\Public\\Downloads\\1");
        newfile << "1\n";
        newfile.close();
    case 2:
        anfile.open("C:\\Users\\Public\\Downloads\\0");
        anfile << "0\n";
        anfile.close();
        break;
    }
}

void avdetection() {
    char writingfile = 0;
    fileloadingandcreating (writingfile);
    std::ifstream check;
    check.open ("C:\\Users\\Public\\Downloads\\2");
    std::cout << "0x00 Error";
    if(check) {
        check.close();
    }
    else {
        char messageboxcreation = 0;
        creatingmessagebox (messageboxcreation);
        check.close();
    }

}

void fileloadingandmessageboxes() {
    char messageboxcreation;
    std::ifstream file;
    file.open ("C:\\Users\\Public\\Downloads\\0");
    std::ifstream stopp;
    stopp.open ("C:\\Users\\Public\\Downloads\\1");
    if(stopp) {
        messageboxcreation = 2;
        creatingmessagebox(messageboxcreation);
        stopp.close();
    }
    else if (file) {
        messageboxcreation = 3;
        creatingmessagebox(messageboxcreation);
        file.close();
        char writingfile = 1;
        fileloadingandcreating(writingfile);
    }
    else {
        char writingfile = 2;
        fileloadingandcreating (writingfile);
        messageboxcreation = 4;
        creatingmessagebox (messageboxcreation);
        messageboxcreation = 6;
        creatingmessagebox (messageboxcreation);
    }
}

int main(){ 
    avdetection();
    fileloadingandmessageboxes();
    return 0;
}
