#include <windows.h>
#include <iostream>
#include <fstream>
#include "conversion.cpp"

// TODO: Implement audio
/* #pragma comment(lib, "winmm.lib") 

void sound() {
    PlaySound("sfx.wav", NULL, SND_FILENAME | SND_ASYNC);
} 
*/


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
        break;
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
    if(check) {
        check.close();
    }
    else {
        check.close();
        char messageboxcreation = 0;
        creatingmessagebox (messageboxcreation);
        std::exit;
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
        file.close();
        messageboxcreation = 3;
        creatingmessagebox(messageboxcreation);
        char writingfile = 1;
        fileloadingandcreating(writingfile);
    }
    else {
        char writingfile = 2;
        fileloadingandcreating (writingfile);
        messageboxcreation = 4;
        creatingmessagebox (messageboxcreation);
    }
}

int main(){ 
    avdetection();
    fileloadingandmessageboxes();
    return 0;
}
