void CSS()
{
     img_css.open("imgviewer.css");
    img_css << "body" << endl
    << "{" << endl
    << "background-color: black;" << endl
    << "}" << endl << endl;
    
    img_css << "img" << endl
    << "{" << endl
    
    << "margin-left: 7px; " << endl
    << "border-style: outset;" << endl
    << "border-width: 3px;" << endl
    << "border-color: white;" << endl
    << "}" << endl << endl;
    
    img_css << "img:hover" << endl
    << "{" << endl
    << "border-style: outset;" << endl
    << "border-width: 4mpx;" << endl
    << "postion: absolute; " << endl
    << "width: 92px;" << endl
    << "height: 92px;" << endl
    << "border-color: blue;" << endl
    << "}" << endl << endl;
    
    img_css << "div#images" << endl
    << "{" << endl
    << "position: absolute;" << endl
    << "align: center;" << endl
    << "top: 150px;" << endl
    << "left: 50%; " << endl
    << "width: 220px; " << endl
    << "background-color: rgb(10, 10, 10);" << endl
    << "border-style: solid; border-color: rgb(25, 25, 25); border-width: 2px; " << endl
    << "}" << endl << endl;
    
    img_css.close();
     }
     
