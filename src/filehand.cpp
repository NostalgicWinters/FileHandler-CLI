#include <iostream>
#include <fstream>
#include <format>
#include <filesystem>

using namespace std;

void createAFolder(const string& folder_name)
{
    filesystem::create_directory(folder_name);
}

int main(int argc, char* argv[])
{
    string name_of_folder = (argc > 1) ? argv[1] : "testfolder";
    createAFolder(name_of_folder);
}
