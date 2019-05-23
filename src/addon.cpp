#include <nan.h>
#include "CompositorNode.h"

void InitAll(v8::Local<v8::Object> exports) {
  ImageWrapper::Init(exports);
  ImportanceMapWrapper::Init(exports);
  LayerRef::Init(exports);
  CompositorWrapper::Init(exports);
  ContextWrapper::Init(exports);
  ModelWrapper::Init(exports);
  UISliderWrapper::Init(exports);
  UIMetaSliderWrapper::Init(exports);
  UISamplerWrapper::Init(exports);
  ClickMapWrapper::Init(exports);
  Nan::Set(exports, Nan::New("log").ToLocalChecked(), Nan::New<v8::Function>(log));
  Nan::Set(exports, Nan::New("setLogLocation").ToLocalChecked(), Nan::New<v8::Function>(setLogLocation));
  Nan::Set(exports, Nan::New("setLogLevel").ToLocalChecked(), Nan::New<v8::Function>(setLogLevel));
  Nan::Set(exports, Nan::New("hardware_concurrency").ToLocalChecked(), Nan::New<v8::Function>(hardware_concurrency));
}

NODE_MODULE(Compositor, InitAll)