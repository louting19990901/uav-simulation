//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

#include "ChargingNodeSpotElement.h"

ChargingNodeSpotElement::ChargingNodeSpotElement(MobileNode* node, double estimatedChargeDuration, double estimatedWaitingDuration,
        double targetCapacityPercentage)
{
    this->node = node;
    this->estimatedChargeDuration = estimatedChargeDuration;
    this->estimatedWaitingDuration = estimatedWaitingDuration;
    this->targetCapacityPercentage = targetCapacityPercentage;
    this->pointInTimeWhenDone = simTime() + estimatedChargeDuration + estimatedWaitingDuration;
    this->estimatedArrival = simTime();
    this->reservationTime = simTime();
}

ChargingNodeSpotElement::~ChargingNodeSpotElement()
{
    // TODO Auto-generated destructor stub
}

