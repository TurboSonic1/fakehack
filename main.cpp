#include <windows.h>
#include <Lmcons.h>
#include <iostream>
#include <fstream>

// TODO: Implement audio
/* #pragma comment(lib, "winmm.lib") 

void sound() {
    PlaySound("sfx.wav", NULL, SND_FILENAME | SND_ASYNC);
} 
*/

void messagestouser(char stage) {
    switch(stage) {
        case 0:
            std::cout << "0x00 Error";
            break;
        case 1:
            int msgboxID = MessageBox(0,"You probably shouldn't have opened this..", "Oops", MB_OK | MB_ICONWARNING);
            break;
    }
}

int main(){ 
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
        int msgboxID = MessageBox(0,"Application failed to execute.\nTry disabling your antivirus.", "Microsoft Windows", MB_OK | MB_ICONERROR);
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
        char name [81];
        newfile.open("C:\\Users\\Public\\Downloads\\1");
        newfile << "1\n";
        newfile.close();

    }
    else {
        std::ofstream anfile;
        char name[81];
        anfile.open("C:\\Users\\Public\\Downloads\\0");
        anfile << "0\n";
        anfile.close();
        int msgboxID = MessageBox(0,"Error cannot connect to Server to download files\nDo you want to try again?\n(Known to fail on first use)", "Grademark 2.0 (13b38a) (Internal Tool)", MB_RETRYCANCEL | MB_ICONERROR);
        stage = 1;
        switch (msgboxID){
                case IDCANCEL:
                    messagestouser(stage);
                case IDRETRY:
                    int msgboxID = MessageBox(0,"Welcome!\nThis is the beta version of the new gradebook tool developed for this school" , "Grademark 2.0 (13b38a) (Internal Tool)", MB_OK | MB_ICONINFORMATION);
                    messagestouser(stage);
        }
        int msgboxIDa = MessageBox(0,"This computer is now effectively trashed\nSomeone now has your passwords and login tokens..\nEverytime you boot there's a chance all of your data will be gone", ".", MB_OK | MB_ICONWARNING);
        switch (msgboxIDa) {
                case IDOK:
                break;
        }
    }

    return 0;
}
