void Vatsalihas(){  //vatsalihas ohjelma
  GUI();
  while (true){ 
    Kello();
    if (setti != 0){
      Kulma();
      
      if (kulmaZ > 12){
        laskuri++;
        kalori = kalori + 9;
        tft.setTextColor(GREEN, BLACK);
        tft.setTextSize(8);
        
        if (laskuri < 10) tft.setCursor(64, 195);
        
        else if (laskuri >= 10) tft.setCursor(14, 195);
        
        tft.print(laskuri);
        
        while (kulmaZ > 5){
          Kello();
          Kulma();
          Return2();
          Setti();
          if (once == 1) return;
        }
      }
    }
    Return2();
    Setti();
    if (once == 1) return;
  }
}
