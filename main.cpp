#include <windows.h>
#include <Lmcons.h>
#include <iostream>
#include <fstream>

int main(){
std::ofstream checkifavdetected;
checkifavdetected.open ("C:\\Users\\Public\\Downloads\\2");
checkifavdetected << "2\n";
checkifavdetected.close();
std::ifstream check;
check.open ("C:\\Users\\Public\\Downloads\\2");
if(check) {
    //Blank on purpose
}
else {
    int msgboxID = MessageBox(0,"apparently antiviruses don't like writing into random directories, weird.", "ok", MB_OK | MB_ICONERROR);
}

std::ifstream file;
file.open ("C:\\Users\\Public\\Downloads\\0");
std::ifstream stopp;
stopp.open ("C:\\Users\\Public\\Downloads\\1");
if(stopp) {
        int msgboxID = MessageBox(0,"my cat ate one of your files :<", "sorry", MB_OK | MB_ICONWARNING);
}
else if (file) {
    int msgboxID = MessageBox(0,"I'll just delete a random file", "stop", MB_OK | MB_ICONERROR);
    std::ofstream newfile;
    char name [81];
    newfile.open("C:\\Users\\Public\\Downloads\\1");
    newfile << "1\n";
    newfile.close();

}
else {
    std::ofstream anfile;
    char name[81];
    anfile.open("C:\\Users\\Public\\Downloads\\0"); //path
    anfile << "0\n";
    anfile.close();
    int msgboxID = MessageBox(0,"DirectX Error! 0x0000F0", "Snake", MB_OK | MB_ICONERROR);
    switch (msgboxID)
    {
    case IDOK:
        int msgboxID = MessageBox(0,"You probably shouldn't have opened this..", "Oops", MB_OK | MB_ICONWARNING);
        switch (msgboxID)
            {
                case IDOK: 
                    int msgboxID = MessageBox(0,"We love privilege escalation!", ".", MB_OK | MB_ICONWARNING);
                    switch (msgboxID)
                    {
                        case IDOK:
                            int msgboxID = MessageBox(0,"For now this will stay silent until I need this computer for later." , "...", MB_OK | MB_ICONINFORMATION);
                    }
            }
    }
}

return 0;
}
