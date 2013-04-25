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
    // Denna funktion skapar CSS-dokumentet och skriver i all CSS som ska användas där.
    CSS();
    
    //Här skapas första halvan av HTML-dokumentet.
    while (img[i]!="exit") // Skriver användaren "exit" ska programmet stängas ner närsomhelst.
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
//En loop som läser igenom mappen som användaren har valt och skriver ut alla filer som finns där i.        
        while((ent = readdir(dir)) != NULL) 
        {
                   i1++;
                   
                    
                          //Den ignorerar filen i mappen om första bokstaven är "." för att undvika att få med sånt som inte är bilder.
                   if (ent->d_name[0]!=*".")
                   {         
                             
                             cout << ent->d_name << " " << i1;
                             cout << endl;
                           img_a++;
    //Lägger till filen i en array där bildernas namn läggs.
    img[i]=ent->d_name;
    html << "<a href='"
    //HTML dokumentets bilder länkar till bilderna i mappen som användaren valde.
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
