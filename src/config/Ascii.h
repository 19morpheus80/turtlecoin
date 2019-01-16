// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
      "\n _______         _   _       _____      _        \n"
              "|__   __|       | | | |     / ____|    (_)      \n"
              "   | |_   _ _ __| |_| | ___| |     ___  _ _ __  \n"
              "   | | | | | '__| __| |/ _ \\ |    / _ \\| | '_ \\ \n"
              "   | | |_| | |  | |_| |  __/ |___| (_) | | | | |\n"
      "   |_|\\__ _|_|   \\__|_|\\___|\\_____\\___/|_|_| |_|\n";

const std::string nonWindowsAsciiArt = 

"\n                                                        \n"
"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM \n"
"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM \n"
"MMMMMMMMMMMMMMMMMMMMMMMMMMNhsymMMMMMMMMMMMMMMMMMMMMMMMMMM \n"
"MMMMMMMMMMMMMMMMMMMMMMNho-     .+yNMMMMMMMMMMMMMMMMMMMMMM \n"
"MMMMMMMMMMMMMMMMMMMms:             -odMMMMMMMMMMMMMMMMMMM \n"
"MMMMMMMMMMMMMMMmyNMd`                oMMydMMMMMMMMMMMMMMM \n"
"MMMMMMMMMMMNy+.  `dMd`              yMN-  `/ymMMMMMMMMMMM \n"
"MMMMMMMMh+-       `hMm.           `hMm.       ./yNMMMMMMM \n"
"MMMMMMM+            sMN-         `dMd`           `MMMMMMM \n"
"MMMMMMM+             sMMmddddddddNMd             .MMMMMMM \n"
"MMMMMMMs            `dMdssoooooosdMN.            /MMMMMMM \n"
"MMMMMMMd           `dMh`          oMN-           sMMMMMMM \n"
"MMMMMMMM`         .mMs             /MN:          dMMMMMMM \n"
"MMMMMMMM+.``````./NM+               -NM+.```````:MMMMMMMM \n"
"MMMMMMMMMMMMMMMMMMMm                 yMMMMMMMMMMMMMMMMMMM \n"
"MMMMMMMMMo-````.-+NMs               /MMo-.````-/MMMMMMMMM \n"
"MMMMMMMMMd        .mMy`            +MN:        yMMMMMMMMM \n"
"MMMMMMMMMMo        `dMd`          sMN-        :MMMMMMMMMM \n"
"MMMMMMMMMMM/        `dMmssooooooymMN.        .NMMMMMMMMMM \n"
"MMMMMMMMMMMN-        hMMddhhhhhddNMd`       `mMMMMMMMMMMM \n"
"MMMMMMMMMMMMN-      sMN-         `dMd`     .dMMMMMMMMMMMM \n"
"MMMMMMMMMMMMMM/   `hMm.           `yMm.   -mMMMMMMMMMMMMM \n"
"MMMMMMMMMMMMMMMo .dMh`              sMN: /NMMMMMMMMMMMMMM \n"
"MMMMMMMMMMMMMMMMhNMy                 +MMhMMMMMMMMMMMMMMMM \n"
"MMMMMMMMMMMMMMMMMMN`                  hMMMMMMMMMMMMMMMMMM \n"
"MMMMMMMMMMMMMMMMMMMd-               .yMMMMMMMMMMMMMMMMMMM \n"
"MMMMMMMMMMMMMMMMMMMMMh-           .sMMMMMMMMMMMMMMMMMMMMM \n"
"MMMMMMMMMMMMMMMMMMMMMMMh:       -sMMMMMMMMMMMMMMMMMMMMMMM \n"
"MMMMMMMMMMMMMMMMMMMMMMMMMm+` `/hMMMMMMMMMMMMMMMMMMMMMMMMM \n"
"MMMMMMMMMMMMMMMMMMMMMMMMMMMMNMMMMMMMMMMMMMMMMMMMMMMMMMMMM \n"
"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM \n"


/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
