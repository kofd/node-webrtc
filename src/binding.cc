#include <node.h>
#include <v8.h>

#include "talk/base/ssladapter.h"

#include "peerconnection.h"
#include "datachannel.h"

using namespace v8;

void init(Handle<Object> exports) {
  talk_base::InitializeSSL();
  PeerConnection::Init(exports);
  DataChannel::Init(exports);
}

NODE_MODULE(webrtc, init)