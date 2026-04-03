#include <iostream>
#include <string>
#include <getopt.h>

void printHelp() {
    std::cout << "Usage: cross_platform_tool [OPTION]... [ARG]..." << std::endl;
    std::cout << "Options:" << std::endl;
    std::cout << "  -h, --help     Display this help and exit." << std::endl;
    std::cout << "  -n, --name     Specify the name to greet." << std::endl;
}

static struct option long_options[] = {
    {"help", no_argument, 0, 'h'},
    {"name", required_argument, 0, 'n'},
    {0, 0, 0, 0}
};

int main(int argc, char* argv[]) {
    int opt;
    std::string name = "World";

    while ((opt = getopt_long(argc, argv, "hn:", long_options, nullptr)) != -1) {
        switch (opt) {
            case 'h':
                printHelp();
                return 0;
            case 'n':
                name = optarg;
                break;
            default:
                return 1;
        }
    }

    std::cout << "Hello, " << name << "!" << std::endl;
    return 0;
}
