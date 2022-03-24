

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  int aux = 0, num = 9;
  

  for(aux; aux <= 9; aux++){
      if(aux == 0){
        digitalWrite(1, HIGH);
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(7, HIGH);
        delay(1500);
        digitalWrite(1, LOW);
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(7, LOW);
        
      } else if(aux == 1){
          digitalWrite(1, HIGH);
          digitalWrite(2, HIGH);
          delay(1500);
          digitalWrite(1, LOW);
          digitalWrite(2, LOW);
          
        } else if(aux == 2) {
            digitalWrite(7, HIGH);
            digitalWrite(1, HIGH);
            digitalWrite(6, HIGH);
            digitalWrite(4, HIGH);
            digitalWrite(3, HIGH);
            delay(1500);
            digitalWrite(7, LOW);
            digitalWrite(1, LOW);
            digitalWrite(6, LOW);
            digitalWrite(4, LOW);
            digitalWrite(3, LOW);
            
          } else if(aux == 3){
              digitalWrite(7, HIGH);
              digitalWrite(1, HIGH);
              digitalWrite(6, HIGH);
              digitalWrite(2, HIGH);
              digitalWrite(3, HIGH);
              delay(1500);
              digitalWrite(7, LOW);
              digitalWrite(1, LOW);
              digitalWrite(6, LOW);
              digitalWrite(2, LOW);
              digitalWrite(3, LOW);
              
            } else if(aux == 4){
                digitalWrite(1, HIGH);
                digitalWrite(2, HIGH);
                digitalWrite(6, HIGH);
                digitalWrite(5, HIGH);
                delay(1500);
                digitalWrite(1, LOW);
                digitalWrite(2, LOW);
                digitalWrite(6, LOW);
                digitalWrite(5, LOW);
                
              } else if(aux == 5){
                  digitalWrite(7, HIGH);
                  digitalWrite(5, HIGH);
                  digitalWrite(6, HIGH);
                  digitalWrite(2, HIGH);
                  digitalWrite(3, HIGH);
                  delay(1500);
                  digitalWrite(7, LOW);
                  digitalWrite(5, LOW);
                  digitalWrite(6, LOW);
                  digitalWrite(2, LOW);
                  digitalWrite(3, LOW);
                  
                } else if(aux == 6){
                    digitalWrite(7, HIGH);
                    digitalWrite(6, HIGH);
                    digitalWrite(5, HIGH);
                    digitalWrite(4, HIGH);
                    digitalWrite(3, HIGH);
                    digitalWrite(2, HIGH);
                    delay(1500);
                    digitalWrite(7, LOW);
                    digitalWrite(6, LOW);
                    digitalWrite(5, LOW);
                    digitalWrite(4, LOW);
                    digitalWrite(3, LOW);
                    digitalWrite(2, LOW);
                    
                  } else if(aux == 7){
                      digitalWrite(5, HIGH);
                      digitalWrite(7, HIGH);
                      digitalWrite(1, HIGH);
                      digitalWrite(2, HIGH);
                      delay(1500);
                      digitalWrite(5, LOW);
                      digitalWrite(7, LOW);
                      digitalWrite(1, LOW);
                      digitalWrite(2, LOW);
                    } else if(aux == 8){
                        digitalWrite(1, HIGH);
                        digitalWrite(2, HIGH);
                        digitalWrite(3, HIGH);
                        digitalWrite(4, HIGH);
                        digitalWrite(5, HIGH);
                        digitalWrite(6, HIGH);
                        digitalWrite(7, HIGH);
                        delay(1500);
                        digitalWrite(1, LOW);
                        digitalWrite(2, LOW);
                        digitalWrite(3, LOW);
                        digitalWrite(4, LOW);
                        digitalWrite(5, LOW);
                        digitalWrite(6, LOW);
                        digitalWrite(7, LOW);
                        
                      }else if(aux == 9){
                          digitalWrite(1, HIGH);
                          digitalWrite(2, HIGH);
                          digitalWrite(3, HIGH);
                          digitalWrite(5, HIGH);
                          digitalWrite(6, HIGH);
                          digitalWrite(7, HIGH);
                          delay(1500);
                          digitalWrite(1, LOW);
                          digitalWrite(2, LOW);
                          digitalWrite(3, LOW);
                          digitalWrite(5, LOW);
                          digitalWrite(6, LOW);
                          digitalWrite(7, LOW);
                        }
  }

  digitalWrite(8, HIGH);
  delay(1000);
  digitalWrite(8, LOW);

  for(aux; aux >= 0; aux--){
    if(aux == 9){
        digitalWrite(1, HIGH);
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(7, HIGH);
        delay(1500);
        digitalWrite(1, LOW);
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
      } else if(aux == 8){
          digitalWrite(1, HIGH);
          digitalWrite(2, HIGH);
          digitalWrite(3, HIGH);
          digitalWrite(4, HIGH);
          digitalWrite(5, HIGH);
          digitalWrite(6, HIGH);
          digitalWrite(7, HIGH);
          delay(1500);
          digitalWrite(1, LOW);
          digitalWrite(2, LOW);
          digitalWrite(3, LOW);
          digitalWrite(4, LOW);
          digitalWrite(5, LOW);
          digitalWrite(6, LOW);
          digitalWrite(7, LOW);
        } else if(aux == 7){
            digitalWrite(5, HIGH);
            digitalWrite(7, HIGH);
            digitalWrite(1, HIGH);
            digitalWrite(2, HIGH);
            delay(1500);
            digitalWrite(5, LOW);
            digitalWrite(7, LOW);
            digitalWrite(1, LOW);
            digitalWrite(2, LOW);
          } else if(aux == 6){
              digitalWrite(7, HIGH);
              digitalWrite(6, HIGH);
              digitalWrite(5, HIGH);
              digitalWrite(4, HIGH);
              digitalWrite(3, HIGH);
              digitalWrite(2, HIGH);
              delay(1500);
              digitalWrite(7, LOW);
              digitalWrite(6, LOW);
              digitalWrite(5, LOW);
              digitalWrite(4, LOW);
              digitalWrite(3, LOW);
              digitalWrite(2, LOW);
            } else if(aux == 5){
                digitalWrite(7, HIGH);
                digitalWrite(5, HIGH);
                digitalWrite(6, HIGH);
                digitalWrite(2, HIGH);
                digitalWrite(3, HIGH);
                delay(1500);
                digitalWrite(7, LOW);
                digitalWrite(5, LOW);
                digitalWrite(6, LOW);
                digitalWrite(2, LOW);
                digitalWrite(3, LOW);
             } else if(aux == 4){
                digitalWrite(1, HIGH);
                digitalWrite(2, HIGH);
                digitalWrite(6, HIGH);
                digitalWrite(5, HIGH);
                delay(1500);
                digitalWrite(1, LOW);
                digitalWrite(2, LOW);
                digitalWrite(6, LOW);
                digitalWrite(5, LOW);
              } else if(aux == 3){
                  digitalWrite(7, HIGH);
                  digitalWrite(1, HIGH);
                  digitalWrite(6, HIGH);
                  digitalWrite(2, HIGH);
                  digitalWrite(3, HIGH);
                  delay(1500);
                  digitalWrite(7, LOW);
                  digitalWrite(1, LOW);
                  digitalWrite(6, LOW);
                  digitalWrite(2, LOW);
                  digitalWrite(3, LOW);
                } else if(aux == 2) {
                    digitalWrite(7, HIGH);
                    digitalWrite(1, HIGH);
                    digitalWrite(6, HIGH);
                    digitalWrite(4, HIGH);
                    digitalWrite(3, HIGH);
                    delay(1500);
                    digitalWrite(7, LOW);
                    digitalWrite(1, LOW);
                    digitalWrite(6, LOW);
                    digitalWrite(4, LOW);
                    digitalWrite(3, LOW);
                  } else if(aux == 1){
                      digitalWrite(1, HIGH);
                      digitalWrite(2, HIGH);
                      delay(1500);
                      digitalWrite(1, LOW);
                      digitalWrite(2, LOW);
                    } if(aux == 0){
                        digitalWrite(1, HIGH);
                        digitalWrite(2, HIGH);
                        digitalWrite(3, HIGH);
                        digitalWrite(4, HIGH);
                        digitalWrite(5, HIGH);
                        digitalWrite(7, HIGH);
                        delay(1500);
                        digitalWrite(1, LOW);
                        digitalWrite(2, LOW);
                        digitalWrite(3, LOW);
                        digitalWrite(4, LOW);
                        digitalWrite(5, LOW);
                        digitalWrite(7, LOW);
                      }
    
    }

  

  
}
