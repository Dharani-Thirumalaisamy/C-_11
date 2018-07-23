/*
 * Remotecontrol.h
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#ifndef REMOTECONTROL_H_
#define REMOTECONTROL_H_
#include<vector>

namespace edu {
namespace neu {
namespace csye6205 {

class Remotecontrol {
public:
	Remotecontrol();
	virtual ~Remotecontrol();
	virtual void  command();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* REMOTECONTROL_H_ */

/* public:
	RemoteControl() : mOnCommand(MaxCommand), mOffCommand(MaxCommand) {
		Command *nullCmd = new NullCommand;
		for(int i = 0; i < MaxCommand; i++) {
			mOffCommand[i] = nullCmd;
			mOnCommand[i] = nullCmd;
		}
	}
	void setCommand(Receiver id, Command *onCmd, Command *offCmd) {
		mOnCommand[id] = onCmd;
		mOffCommand[id] = offCmd;
	}

	void onButtonPressed(Receiver id) {
		mOnCommand[id]->execute();
	}

	void offButtonPressed(Receiver id) {
		mOffCommand[id]->execute();
	}

private:
	vector<Command*> mOnCommand, mOffCommand;
}; */
