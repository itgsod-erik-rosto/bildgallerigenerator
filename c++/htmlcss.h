void CSS()
{
     img_css.open("imgviewer.css");
    img_css << "body" << endl
    << "{" << endl
    << "font-family:'Century Gothic';" << endl
    << "background-color: black; " << endl
    << "background: url('background.png');" << endl
    << "width: 100%;" << endl
    << "height: 100%;" << endl
    << "}" << endl << endl;
    
      img_css << "div#images" << endl
    << "{" << endl
    << "color: white; " << endl
    << "position: absolute;" << endl
    << "align: center;" << endl
    << "margin-top: 3%;" << endl
    << "padding-top: 3%;" << endl
    << "padding-bottom: 3%; " << endl
    << "left: 45%; " << endl
    << "width: 220px; " << endl
    << "background-color: rgb(10, 10, 10);" << endl
    << "border-style: solid; border-color: rgb(25, 25, 25); border-width: 2px; " << endl
    << "}" << endl << endl;
    
       img_css << ".imgs" << endl
    << "{" << endl
    << "height: 92;" << endl 
    << "width: 92;" << endl
    << "}" << endl << endl;
    
    
     img_css << "p#imgamount" << endl
    << "{" << endl
    << "color: white;" << endl
    << "z-index: -1;"<< endl
    << "}" << endl << endl;
    
         img_css << "div#Head" << endl
    << "{" << endl
    << "width: 93%;" << endl
    << "height: 60px;" << endl
    << "padding-bottom: 2%; " << endl
    << "padding-left: 6%; " << endl
    << "background-color: rgb(20, 20, 20);" << endl
    << "border-style: solid;" << endl
    << "font-size: 30px; " << endl
    << "border-color: rgb(120, 120, 120);" << endl
    << "border-width: 3px;" << endl
    << "}" << endl << endl;
    
     img_css << "p#cooldot" << endl
    << "{" << endl
    << "font-family:'Century Gothic';" << endl
    << "color: red;" << endl
    << "height: 30px;" << endl
    << "}" << endl << endl;
    
     img_css << "p#lrgtxt" << endl
    << "{" << endl
    << "font-family:'Century Gothic';" << endl
    << "color: white;" << endl
    << "}" << endl << endl;
    
    
    
    img_css << "img" << endl
    << "{" << endl
    << "margin-left: 7px; " << endl
    << "border-style: outset;" << endl
    << "top: 10%; " << endl
    << "border-width: 3px;" << endl
    << "border-color: rgb(150, 20, 20);" << endl
    << "}" << endl << endl;
    
    img_css << "img:hover" << endl
    << "{" << endl
    << "border-style: outset;" << endl
    << "border-width: 4mpx;" << endl
    << "postion: absolute; " << endl
    << "width: 92px;" << endl
    << "height: 92px;" << endl
    << "border-color: white;" << endl
    << "}" << endl << endl;
    
  
    
    img_css.close();
     }
     
