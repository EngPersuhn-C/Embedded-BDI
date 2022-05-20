#include "functions.h"
#include <iostream>

using namespace std;

// vacuum position
int pos = 1;

// dirty space
int dirty = 0;
bool pos_dirty_1 = false;
bool pos_dirty_2 = false;
bool pos_dirty_3 = false;
bool pos_dirty_4 = false;

// temperature space
int temperature = 0; //(0 to cool - 1 to hot)
bool pos_temperature_1 = false;
bool pos_temperature_2 = false;
bool pos_temperature_3 = false;
bool pos_temperature_4 = false;

// if program is running for the first time, initialize srand
bool first_run = true;
bool first_run_temperature = true;

int test = 0;

/*---------------------------------------------------------------------------*/

void randomize_temperature()
{
  if(first_run_temperature == true){
    srand(time(NULL));
    first_run_temperature = false;
  }
  temperature = 1 + rand()%4;

  switch(temperature){ 
    case 1:
        pos_temperature_1 = rand()%2;
        if(pos_temperature_1 == true)
          cout << "It's hot in position 1" << "\n";
        break;
    case 2:
        pos_temperature_2 = rand()%2;
        if(pos_temperature_2 == true)
          cout << "It's hot in position 2" << "\n";
        break;
    case 3:
       pos_temperature_3 = rand()%2;
        if(pos_temperature_3 == true)
          cout << "It's hot in position 3" << "\n";
        break;
    case 4:
        pos_temperature_4 = rand()%2;
        if(pos_temperature_4 == true)
          cout << "It's hot in position 4" << "\n";
        break;
    default:
        break;
  }
}

void randomize_dirty()
{
  if (first_run)
  {
    srand(time(NULL));
    first_run = false;
  }
  dirty = 1 + rand()%4;

  switch(dirty){ 
    case 1:
        pos_dirty_1 = rand()%2;
        if(pos_dirty_1 == true)
          cout << "dirty added in 1" << "\n";
        break;
    case 2:
        pos_dirty_2 = rand()%2;
        if(pos_dirty_2 == true)
          cout << "dirty added in 2" << "\n";
        break;
    case 3:
       pos_dirty_3 = rand()%2;
        if(pos_dirty_3 == true)
          cout << "dirty added in 3" << "\n";
        break;
    case 4:
        pos_dirty_4 = rand()%2;
        if(pos_dirty_4 == true)
          cout << "dirty added in 4" << "\n";
        break;
    default:
        break;
  }
}

void clean(){
    cout << "|    |";
    for(int j = 0; j < 10; j++){
        cout << " ";
    } 
}

/*---------------------------------------------------------------------------*/

bool action_right()
{
  std::cout << "Moving right...\t(P1->P2)" << std::endl;
  pos = 2;
  usleep(CYCLE_DELAY);
  randomize_dirty();
  randomize_temperature();

  return true;
}

bool action_down()
{
  std::cout << "Moving down...\t(P2->P4)" << std::endl;
  pos = 4;
  usleep(CYCLE_DELAY);
  randomize_dirty();
  randomize_temperature();

  return true;
}

bool action_up()
{
  std::cout << "Moving up...\t(P3->P1)" << std::endl;
  pos = 1;
  usleep(CYCLE_DELAY);
  randomize_dirty();
  randomize_temperature();

  return true;
}

bool action_left()
{
  std::cout << "Moving left...\t(P4->P3)" << std::endl;
  pos = 3;
  usleep(CYCLE_DELAY);
  randomize_dirty();
  randomize_temperature();

  return true;
}

bool action_suck()
{
  std::cout << "It's dirty!\tSucking position " << pos << "..." << std::endl;
  usleep(CYCLE_DELAY);
  switch(pos){  
    case 1:
        pos_dirty_1 = false;
        break;
    case 2:
        pos_dirty_2 = false;
        break;
    case 3:
        pos_dirty_3 =false;
        break;
    case 4:
        pos_dirty_4 =false;
        break;
    default:
        break;
  }
  return true;
}

bool action_on_climatization()
{
  cout << "It's Hot, cooling area " << pos << "...\n";
  usleep(CYCLE_DELAY);
  switch(pos){  
    case 1:
        pos_temperature_1 = false;
        break;
    case 2:
        pos_temperature_2 = false;
        break;
    case 3:
        pos_temperature_3 =false;
        break;
    case 4:
        pos_temperature_4 =false;
        break;
    default:
        break;
  }
  return true;
}

/*---------------------------------------------------------------------------*/
bool update_dirty(bool var)
{
  switch(pos){  
    case 1:
        return pos_dirty_1;
        break;
    case 2:
        return pos_dirty_2;
        break;
    case 3:
        return pos_dirty_3;
        break;
    case 4:
        return pos_dirty_4;
        break;
    default:
        return false;
        break;
  }
}

bool update_clean(bool var)
{
  switch(pos){
      case 1:
        return !pos_dirty_1;
        break;
      case 2:
        return !pos_dirty_2;
        break;
      case 3:
        return !pos_dirty_3;
        break;
      case 4:
        return !pos_dirty_4;
        break;
      default:
        return true;
        break;  
  } 
}

bool update_temperature(bool var)
{
  switch(pos){  
    case 1:
        return pos_temperature_1;
        break;
    case 2:
        return pos_temperature_2;
        break;
    case 3:
        return pos_temperature_3;
        break;
    case 4:
        return pos_temperature_4;
        break;
    default:
        return false;
        break;
  }
}



bool update_pos_1(bool var)
{  
  return pos == 1;
}

bool update_pos_2(bool var)
{  
  return pos == 2;
}

bool update_pos_3(bool var)
{  
  return pos == 3;
}

bool update_pos_4(bool var)
{  
  return pos == 4;
}