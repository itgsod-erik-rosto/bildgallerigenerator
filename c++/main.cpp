#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sys/types.h> 
#include <dirent.h> 

using namespace std;

int m_img=3;
int img_a;
string img[3];
int i=0;
int i1=0;
int main(int argc, char *argv[])
{
    
    
    while (img[i]!="exit")
    {
    ofstream html;
    html.open("test.html");
    html << "<html>"
    << "<head>" 
    << "<title>Title</title>"
    << "</head>" 
    << "<body>";
    
     while (i<m_img)
{
    //cin >> img[i];

    DIR *dir = opendir("."); 
    if(dir) 
    { 
        struct dirent *ent; 
        while((ent = readdir(dir)) != NULL) 
        { 
                if (i1>=10)
                i1=0;
                   if (ent->d_name[i1]==*"p" && ent->d_name[i1+1]==*"n" && ent->d_name[i1+2]==*"g")
                   {         
                           img_a++;
                           
                             
                             
                             img[i]=ent->d_name;
             cout << img_a << " " << i1 << " " << i << " " << img[i];
             cout << endl; 
             
                         }
            else  i1++;
            
        } 
    } 
    else if (img[i]!="")
    { 
        cout << "Error opening directory" << endl; 
    } 

    html << "<a href='"
    << img[i]
    << "'> <img src='"
    << img[i]
    << " 'alt='"
    << i
    << "' height='42' width='42'></a>";
    i++;
}
    html << "</body>" 
    << "</html>";
    html.close();
    
    system("PAUSE");

    return EXIT_SUCCESS;
}
}
