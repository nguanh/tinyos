#include "EnergyManagement.h"

interface EnergyUpdate {
	command void update();

	event void updateDone();
}
