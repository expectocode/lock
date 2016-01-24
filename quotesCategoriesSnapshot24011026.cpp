#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
int main()
{
    srand (time(NULL));
    //char quoteMark = char(34);
    //codes: h hacker i itcrowd s starwars p potter l sherlock m memes/misc
    vector <string> quotes = {"hYou can't synthesize the application without hacking the haptic database!",
                              "hWe need to reboot the auxiliary HDD sensor!",
                              "hYou can't back up the program without overriding the mobile AI!",
                              "hUse the open-source SAS sensor, then you can navigate the digital driver!",
                              "hUse the virtual IB hard drive, then you can hack the transmitting bus!",
                              "hI'll reboot the solid state bluetooth system, that should connect the GB sensor",
                              "If we generate the panel, we can get to the firewall transmitter \n through the wireless XSS interface!",
                              "iI'll just put it here with the rest of the fire.",
                              "i0118 999 881 999 119 725... 3",
                              "iHello, IT. Have you tried turning it off and on again? ",
                              "FIRE! FIRE! HELP ME!\n 123 Cavendon Road. Looking forward to hearing from you.\n Yours truly, Maurice Moss",
                              "sThat's not how the Force works!",
                              "sNo. I am your Father.",
                              "sI find your lack of faith disturbing.",
                              "sYou underestimate my power...",
                              "sThese aren’t the droids you’re looking for...",
                              "sWhen 900 years old, you reach… Look as good, you will not.",
                              "sIT'S A TRAP!",
                              "sDo or no not, there is no try.",
                              "sOnly a Sith deals in absolutes.",
                              "mDank dank dank, Garlic Bread is dank.",
                              "pDraco Malfoy, the amazing bouncing ferret.",
                              "pSaintlike... You see...I'm HOLEY, Fred, geddit?”",
                              "pListening to the news! Again?     Well, it changes every day, you see.",
                              "pI did my waiting... 12 years of it! In Azkaban!",
                              "pThe ministry has fallen. Scrimgeour is dead. They are coming.",
                              "pAlas, earwax.",
                              "pThere's no wood!   HAVE YOU GONE MAD! ARE YOU A WITCH OR NOT!",
                              "pThere's no need to call me 'sir', Professor.",
                              "pMy eyes aren’t glistening with the ghosts of my past!",
                              "lAnderson, don’t talk out loud. You lower the IQ of the whole street.",
                              "lEvery fairy tale needs a good old-fashioned villain...",
                              "lI’m in shock. Look - I’ve got a blanket.",
                              "lNo, it’s the burglar, he’s got himself rather badly injured.\n He fell out of a window.",
                              "lHoney, you should see me in a crown.",

                             };
    //string quoteChoice = quotes[rand() % quotes.size()];
    int randomNumber = static_cast<double>(std::rand()) / RAND_MAX * quotes.size();
    //cout<<"Random Number: "<<randomNumber<<endl;
    string quoteChoice = quotes[randomNumber];
    cout<<quoteChoice<<endl;
}
