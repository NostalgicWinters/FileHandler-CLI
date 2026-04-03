#include <cstdio>
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
    cout << filesystem::current_path() << "\n";
}

void rename(filesystem::path file_path, filesystem::path new_filepath)
{
    filesystem::rename(file_path, new_filepath);
}

void is_there(filesystem::path p)
{
    cout << filesystem::exists(p) << "\n";
}

void del_file(filesystem::path p)
{
    filesystem::remove(p);
}

void del_repo(filesystem::path p)
{
    filesystem::remove_all(p);
}

void weight(filesystem::path p)
{
    cout << filesystem::file_size(p) << " bytes\n";
}

int main(int argc, char* argv[])
{   
    weight("src/main.cpp");
}
