#include <filesystem>
#include <fstream>
#include <iostream>

using namespace std;


void mkrepo(const string& folder_name)
{
    filesystem::create_directory(folder_name);
}

void mkfile(const string& file_name)
{
    ofstream file(file_name, ios::out);
}

void wrking_dir()
{
    cout << filesystem::current_path();
}

int main(int argc, char* argv[])
{   
    wrking_dir();
}
