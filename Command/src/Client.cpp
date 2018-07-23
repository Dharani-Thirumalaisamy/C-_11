/*
 * Client.cpp
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#include "Client.h"

namespace edu {
namespace neu {
namespace csye6205 {

Client::Client() {
	// TODO Auto-generated constructor stub

}

Client::~Client() {
	// TODO Auto-generated destructor stub
}

void Client::demo(){
	/*Light *light = new Light;
	Fan *fan = new Fan;

	// concrete Command objects
	LightOnCommand *lightOn = new LightOnCommand(light);
	LightOffCommand *lightOff = new LightOffCommand(light);
	FanOnCommand *fanOn = new FanOnCommand(fan);
	FanOffCommand *fanOff = new FanOffCommand(fan);
	NullCommand *nullOn = new NullCommand();
	NullCommand *nullOff = new NullCommand();

	// invoker objects
	RemoteControl *control = new RemoteControl;

	// execute
	control->setCommand(LIGHT, lightOn, lightOff);
	control->onButtonPressed(LIGHT);
	control->offButtonPressed(LIGHT);

	control->setCommand(FAN, fanOn, fanOff);
	control->onButtonPressed(FAN);
	control->offButtonPressed(FAN);

	control->setCommand(NONE, nullOn, nullOff);
	control->onButtonPressed(NONE);

	delete light, lightOn, lightOff;
	delete fan, fanOn, fanOff;
	delete control; */
}
} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
