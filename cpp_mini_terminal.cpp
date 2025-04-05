#include <iostream>
#include <cstring>
#include <cstdlib>
#include <limits>
#include <ctime>

short get_hash(bool return_or_show);
void get_hash_change_conf(bool *return_oor_show_gethash);
void no_input();
void uknown_command();
void Exiting();

short get_hash(bool return_or_show) {
    std::srand(std::time(nullptr));
    short value = std::rand();

    if (return_or_show) {
        return value;
    } else {
        std::cout << value << std::endl;
        return value;
    }
}

void get_hash_change_conf(bool *return_or_showGethash) {
    int input_hash_conf;
    std::cout << "configure '1' only get hash '0' print and get hash" << std::endl;
    std::cout << "now configure - " << *return_or_showGethash << std::endl;
    std::cout << "for exit without change value type '2'";
    while (1) {

        std::cout << ":";
        
        if (!(std::cin >> input_hash_conf)) {
            no_input();
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if (input_hash_conf == 1) {
            *return_or_showGethash = 1;
            std::cout << "return_or_shoGethash value changed to - " << *return_or_showGethash << std::endl;
            break;
        } 
        else if (input_hash_conf == 0) {
            *return_or_showGethash = 0;
            std::cout << "return_or_shoGethash value changed to - " << *return_or_showGethash << std::endl;
            break;
        }
        else if (input_hash_conf == 2) {
            std::cout << "exit without change value" << std::endl;
            break;
        }
        else {
            uknown_command();
            continue;
        }
    }
}


void no_input() {
    std::cout << "Error number '1' - no input" << std::endl;
}

void uknown_command() {
    std::cout << "Error number '2' - uknown command" << std::endl;
}

void Exiting() {
    std::cout << "Exiting" << std::endl;
    exit(0);
}

void help() {
    
    std::cout << "'help' - command for show all command list" << std::endl;
    std::cout << "'exit' - command for exit program" << std::endl;
    std::cout << "'hash' - command for get random num" << std::endl;
    std::cout << "'hash conf' - command for change function configure" << std::endl;
    
}

int main() {
    
    bool return_or_showGet_hash;
    bool inf_while = 1;
    std::string input;

    while (1) {
        std::cout << ": ";
        std::getline(std::cin ,input);

        if (input == "") {
            no_input();
        }
        else if (input == "help") {
            help();                        
        }
        else if (input == "exit") {
            Exiting();
        } 
        else if (input == "hash conf") {
            get_hash_change_conf(&return_or_showGet_hash);
        }
        else if (input == "hash") {
            get_hash(return_or_showGet_hash);
        }
        else {
            uknown_command();
        }
    }
    return 0;
}