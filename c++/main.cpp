#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sys/types.h> 
#include <dirent.h> 


using namespace std;

ifstream pics;
ofstream o_pics;
ofstream img_css;

int linecount;
int m_img=10;
int max_i=20;
int upld;
int img_a;
int i=0;
int indx;
int i1=-4;
int i2;
char direc[10];
string img_folder;
string line;
string img[3];
string s_pic;


#include <htmlcss.h>

int main(int argc, char *argv[])


{
    CSS();
    while (img[i]!="exit")
    {
    ofstream html;
    html.open("imgviewer.html");
    html << "<html>" << endl
    << "<head>" << endl
    << "<title>Image viewer</title>" << endl
    << "<LINK href='imgviewer.css' rel='stylesheet' type='text/css'>" << endl 
    << "</head>" << endl
    << "<body>" << endl
    << "<div id='images'>" << endl;

cout << "Enter the path to the folder that contains the images: " << endl;

cin >> direc;
cout << endl;
cout << endl;

cout << "The directory '" << direc << "' contains these image files: ";
cout << endl;
cout << endl;


    DIR *dir = opendir(direc); 
    if(dir) 
    { 
        struct dirent *ent;
        
        while((ent = readdir(dir)) != NULL) 
        {
                   i1++;
                   
                    
                          
                   if (ent->d_name[0]!=*".")//(ent->d_name[i1]==*"p" && ent->d_name[i1+1]==*"n")//(ent->d_name[i1]==*"p" && ent->d_name[i1+1]==*"n" && ent->d_name[i1+2]==*"g" && ent->d_name[i1+3]==*"")
                   {         
                             
                             cout << ent->d_name << " " << i1;
                             cout << endl;
                           img_a++;
    
    img[i]=ent->d_name;

    html << "<a href='"
    << direc << "/" << img[i]
    << "'> <img src='";
    
    if (direc!=".")
    html << direc << "/";
    
    html << img[i];
    html << " 'alt='" << indx << "' height='92' width='92' title='" 
    << img[i];
    html << "'> </a>" << endl;
    
    indx++;
}             
              else 
             {
             i1++;
             }
} 
cout << endl;
      
    }     
    html << "</div>" << endl;
    html << "</body>" 
    << "</html>";
    html.close();
    
cout << "Created HTML file." << endl;
cout << "Created CSS file." << endl;

cout << endl << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
}
