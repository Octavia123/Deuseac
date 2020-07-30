#include <iostream>
#include <string>
#include <stdio.h>
#include <time.h>
#include <windows.h>


const std::string currentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);

    return buf;
}

int main() 
{
    SetConsoleTitleA("OctaForcer | DeusAim On Top");

    std::cout << "[+] Current System Time -> " << currentDateTime() << std::endl;
    Sleep(2000);

    std::cout << "[+] Getting System Ready\n";
    Sleep(3000);
    std::cout << "[+] Forcing EAC Have Fun!\n";
    Sleep(2500);
    system("date 05/16/2020");
    return 0;
}