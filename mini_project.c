unsigned cnt;                
void interrupt() {
    cnt++;                   
    TMR0 = 177;                
    INTCON = 0xA5;            
void main() {
    OPTION_REG =00000111;        
    TRISB = 0;                
    PORTB = 0x0;              
    TMR0 = 177;                
    INTCON = 0xA0;            
    cnt = 0;                
    do {                      
        if (cnt == 100) {     
            PORTB = PORTB++;  
            cnt = 0;          
        }
    } while(1);
}
}
