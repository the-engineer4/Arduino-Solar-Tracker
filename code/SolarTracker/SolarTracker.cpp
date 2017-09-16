
/*
  SolarTracker.cpp
*/

/* Ensure this library's description is only included once  */
#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif


// include this library's definition file
//#include "SolarTracker.h"




/* CREATE DFR Keypad CLASS INSTANCE */
//---------------------------------------------



/* Define Locale Variables */
//---------------------------------------------


 
SensorArray::SensorArray()
{
  // CREATE LCDKeypad CLASS INSTANCES
  //screen = new LCDKeypad();
  //---------------------------------------------
    
  // Initialize SensorArray CLASS INSTANCES
  //
      
}
*/


int SensorArray::CompareAxis(int axis_id)
{
  // Initialize local variables
  //---------------------------------------------
  int sensor_index = 2*axis_id;
  
  return ( this->getSensorData(sensor_index) - this->getSensorData(sensor_index-1) );      
}
*/


int SensorArray::Refresh()
{
  // Initialize local variables
  //---------------------------------------------
  int diff_swing = 0, swing_var = 0;
  
  this->CompareAxis(SENSOR_AXIS_SWING);
  this->CompareAxis(SENSOR_AXIS_TILT);

  
  return 0;                                                                                                                                                                                                                                              
}



/*
    
    int ();    
     
  private:
    int getSensorData(int sensor_id);
*/


/*
H2OtoHHO::LoadSymbols()
{
	createChar(CURSOR_RIGHT, c_right);
	createChar(CURSOR_UP, c_up);
	createChar(CURSOR_DOWN, c_down);
	createChar(CURSOR_LEFT, c_left);
	createChar(CURSOR_SELECT, c_select);
	createChar(CUSTOM_LOCK, custom_lock);
	createChar(CUSTOM_WATER_MOLECULE, custom_watermol);
}
*/


/* Scans Resonant Frequency */
/*
int H2OtoHHO::ResonanceScan()
{
  uint32_t lockFreq = 0;
  
  screen->clear();
  screen->print("  SCANNING RANGE....  ");
   
  // Sweep frequency from 'F_Scan_min' to 'F_Scan_max' 
  for (uint32_t i = SCAN_FREQ_MIN; i < SCAN_FREQ_MAX; i++)
  {        
    screen->setCursor(3,1);
    screen->print(i);
    screen->print(" Hz  ");
    
    gate->setfreq(i);
    pulse->setfreq(i*10);
  }
  
  delay(200);
  lockFreq = 4243;
  screen->print(" ");
  screen->write(CUSTOM_LOCK);
  screen->print(" ");
  screen->print( lockFreq );
  screen->print(" Hz  ");  
  delay(2000);
  
  return lockFreq;
}
//---------------------------------------------
*/



/* Main Menu Function  */
/*
int H2OtoHHO::MainMenu()
{
  int k = 0, exitCode = -1, SelectedItem = 0, keypress= 0;
  String MainItems[4] = {
    " 1. Exit Menu!",
    " 2. Re-Scan Freq.",
    " 3. [Option #2]",
    " 4. Debug Mode" };
    
  
  do
  {
    //keypress = H2OtoHHO::button();
    
    switch ( screen->button() ) 
    {
      //case KEYPAD_RIGHT:
      //  break;
        
      case KEYPAD_UP:
          if ( SelectedItem > 0 )
          {
            SelectedItem--;
            screen->setCursor(0,1);
            screen->print( MainItems[SelectedItem] );
            delay(2000);
          }
          //else 
           // buzzer.play( NOTE_C4, BuzzerShortTone );
            
          //exitCode = 0;
        break;
        
      case KEYPAD_DOWN:
          if ( SelectedItem < 4 )
          {
            SelectedItem++;
            screen->setCursor(0,1);
            screen->print( MainItems[SelectedItem] );
            delay(2000);
          }
          //else
            //buzzer.play( NOTE_C4, BuzzerShortTone );
            
             //exitCode = 0;
        break;
        
      //case KEYPAD_LEFT:
      //  break;
        
      case KEYPAD_SELECT:
          screen->begin(16, 2);
          screen->clear();
          screen->print("     MAIN");
          screen->setCursor(0,1);
          screen->print("     MENU");
          delay(3000);
          
          for (k=0;k<16;k++)
          {
            screen->scrollDisplayLeft();
            delay(200);
          }
          
          MainMenu();
          
        break;
        
      default:
        exitCode = 0;
    }
    
  } while (exitCode!=-1);
  
  return exitCode;  
}
//---------------------------------------------
*/


/* Updates Display upon Keypress */
/*
int H2OtoHHO::UpdateKeypress(int keyPress)
{
  //if (keyPress != KEYPAD_NONE)
  //{
    screen->clear();
    screen->setCursor(0, 0);
    screen->print("Current Key:");
    screen->setCursor(0, 1);
    screen->print(keyPress);
    screen->print(" => ");
    screen->print(analogRead(0));
    screen->print(", ");
    screen->print( screen->button() );
    delay(1000);
  //}
  return 0;
}
//---------------------------------------------
*/

