void CSS()
{
     img_css.open("imgviewer.css");
    img_css << "body" << endl
    << "{" << endl
    << "font-family:'Century Gothic';" << endl
    << "background: url('background.png');" << endl
    << "}" << endl << endl;
    
      img_css << "div#images" << endl
    << "{" << endl
    << "position: absolute;" << endl
    << "align: center;" << endl
    << "top: 20%;" << endl
    << "left: 45%; " << endl
    << "width: 220px; " << endl
    << "background-color: rgb(10, 10, 10);" << endl
    << "border-style: solid; border-color: rgb(25, 25, 25); border-width: 2px; " << endl
    << "}" << endl << endl;
    
        img_css << "div#Head" << endl
    << "{" << endl
    << "width: 99%;" << endl
    << "height: 60px;" << endl
    << "background-color: rgb(20, 20, 20);" << endl
    << "border-style: solid;" << endl
    << "border-color: rgb(120, 120, 120);" << endl
    << "border-width: 3px;" << endl
    << "}" << endl << endl;
    
     img_css << "p#imgamount" << endl
    << "{" << endl
    << "position: absolute;" << endl
    << "left: 45%; " << endl
    << "bottom: 78%;" << endl
    << "color: white;" << endl
    << "}" << endl << endl;
    
     img_css << "p#cooldot" << endl
    << "{" << endl
    << "position: absolute;" << endl
    << "left: 21%; " << endl
    << "font-family:'Century Gothic';" << endl
    << "bottom: 86.5%;" << endl
    << "color: red;" << endl
    << "}" << endl << endl;
    
     img_css << "h1#lrgtxt" << endl
    << "{" << endl
    << "position: absolute;" << endl
    << "left: 5%; " << endl
    << "font-family:'Century Gothic';" << endl
    << "bottom: 88%;" << endl
    << "color: white;" << endl
    << "}" << endl << endl;
    
    
    
    img_css << "img" << endl
    << "{" << endl
    << "margin-left: 7px; " << endl
    << "border-style: outset;" << endl
    << "top: 10%; " << endl
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
    
  
    
    img_css.close();
     }
     
