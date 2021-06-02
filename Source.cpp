#include<iostream>
#include<tchar.h>
#include<urlmon.h>
#include<string>
#include<thread>
#pragma comment (lib,"urlmon.lib")
using namespace std;
class Fctor{
public:
    void operator()(string ID) {
        cout << "Downloading" << endl;
        HRESULT hr = URLDownloadToFile(NULL, L"https://www.google.com/search?q=images&tbm=isch&ved=2ahUKEwj_8ubMiffwAhUO8hoKHRDIDK8Q2-cCegQIABAA&oq=images&gs_lcp=CgNpbWcQA1CZ8aQBWIH5pAFgufqkAWgAcAB4AYABAIgBAJIBAJgBBqABAaoBC2d3cy13aXotaW1nwAEB&sclient=img&ei=1X22YL-0OY7ka5CQs_gK&bih=600&biw=1366#imgrc=2eIb5BjhQiiZzM", L"D:\Image.jpeg", 0, NULL);
        cout << "Downloaded" << ID<<"Image"<<endl;
    }

};

int main()
{
    string link1= "https://www.google.com/search?q=images&tbm=isch&ved=2ahUKEwj_8ubMiffwAhUO8hoKHRDIDK8Q2-cCegQIABAA&oq=images&gs_lcp=CgNpbWcQA1CZ8aQBWIH5pAFgufqkAWgAcAB4AYABAIgBAJIBAJgBBqABAaoBC2d3cy13aXotaW1nwAEB&sclient=img&ei=1X22YL-0OY7ka5CQs_gK&bih=600&biw=1366#imgrc=2eIb5BjhQiiZzM";
    //cout << "Image Downloaded" << endl;

    string link2 = "https://www.google.com/search?q=images&tbm=isch&ved=2ahUKEwj_8ubMiffwAhUO8hoKHRDIDK8Q2-cCegQIABAA&oq=images&gs_lcp=CgNpbWcQA1CZ8aQBWIH5pAFgufqkAWgAcAB4AYABAIgBAJIBAJgBBqABAaoBC2d3cy13aXotaW1nwAEB&sclient=img&ei=1X22YL-0OY7ka5CQs_gK&bih=600&biw=1366#imgrc=2eIb5BjhQiiZzM";

    string link3= "https://www.google.com/search?q=images&tbm=isch&ved=2ahUKEwj_8ubMiffwAhUO8hoKHRDIDK8Q2-cCegQIABAA&oq=images&gs_lcp=CgNpbWcQA1CZ8aQBWIH5pAFgufqkAWgAcAB4AYABAIgBAJIBAJgBBqABAaoBC2d3cy13aXotaW1nwAEB&sclient=img&ei=1X22YL-0OY7ka5CQs_gK&bih=600&biw=1366#imgrc=2eIb5BjhQiiZzM";

    thread t1((Fctor()),"1");
    thread t2((Fctor()), "2");
    thread t3((Fctor()), "3");
    t1.join();
    t2.join();
    t3.join();
    cout << "Images Downloaded" << endl;
    return 0;
}
