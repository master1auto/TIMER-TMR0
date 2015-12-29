unsigned cnt;                
void interrupt() {
    cnt++;                   
    TMR0 = 177;                
    INTCON = 0x20;            
void main() {
    OPTION_REG = 0x84;        
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
