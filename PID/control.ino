/** User debugging parameters**/
boolean _debug = true;

float u1;  // First  user debug variable
float u2;  // Second user debug variable
float u3;  // Third  user debug variable

void control(){
  /*
   * This is the control function used to change the voltage 
   * applied to the peltier. 
   * 
   * Calculations of the control function are based on the current setpoint and  
   * most recently measured temperature.
   */
    
   float error;       // Temperature error relative to setpoint 
   error = temperature - setpoint; 
  
  if (error >= band/2) {
    set_dac(-4095);
  } 
  else if (error < -1*band/2) {
    set_dac(0);
  }
}
