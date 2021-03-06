/* Copyright (C) 2014 BMW Group
 * Author: Juergen Gehring (juergen.gehring@bmw.de)
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include <iostream>
#include "THMainLoopIntegrationStub.h"

namespace v1 {
namespace commonapi {
namespace threading {

THMainLoopIntegrationStub::THMainLoopIntegrationStub() {
    x_ = 0;
}

THMainLoopIntegrationStub::~THMainLoopIntegrationStub() {
}

void THMainLoopIntegrationStub::testMethod(const std::shared_ptr<CommonAPI::ClientId> _client, uint8_t _x, testMethodReply_t _reply) {
    (void)_client;
    uint8_t y = _x;
    x_ = _x;

    uint8_t broadcastNumber = 0;
    broadcastNumber++;
    fireTestBroadcastEvent(broadcastNumber);
    broadcastNumber++;
    fireTestBroadcastEvent(broadcastNumber);
    broadcastNumber++;
    fireTestBroadcastEvent(broadcastNumber);
    broadcastNumber++;
    fireTestBroadcastEvent(broadcastNumber);
    broadcastNumber++;
    fireTestBroadcastEvent(broadcastNumber);

    _reply(y);
}

} /* namespace threading */
} /* namespace commonapi */
} /* namespace v1 */
