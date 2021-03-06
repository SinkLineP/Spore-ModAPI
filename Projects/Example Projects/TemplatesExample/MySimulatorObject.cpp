#include "stdafx.h"
#include "MySimulatorObject.h"

/// AUTOGENERATED METHODS ///

size_t MySimulatorObjectFactory::GetTypes(uint32_t* pDstTypes, size_t count) const {
	if (count >= 1) {
		pDstTypes[0] = MySimulatorObject::NOUN_ID;
		return 1;
	}
	return 0;
}
Object* MySimulatorObjectFactory::Create(uint32_t type, ICoreAllocator* pAllocator) {
	return new MySimulatorObject();
}
const char* MySimulatorObjectFactory::GetName(uint32_t type) const {
	return "MySimulatorObject";
}


int MySimulatorObject::AddRef() {
	return DefaultRefCounted::AddRef();
}
int MySimulatorObject::Release() {
	return DefaultRefCounted::Release();
}

uint32_t MySimulatorObject::GetCastID() const {
	return TYPE;
}
uint32_t MySimulatorObject::GetNounID() const {
	return NOUN_ID;
}

void* MySimulatorObject::Cast(uint32_t type) const {
	CLASS_CAST(MySimulatorObject);
	PARENT_CAST(cGameData);
	return nullptr;
}

bool MySimulatorObject::Write(Simulator::ISerializerStream* stream)
{
	return Simulator::ClassSerializer(this, ATTRIBUTES).Write(stream);
}
bool MySimulatorObject::Read(Simulator::ISerializerStream* stream)
{
	return Simulator::ClassSerializer(this, ATTRIBUTES).Read(stream);
}

/// END OF AUTOGENERATED METHODS ///
////////////////////////////////////

Simulator::Attribute MySimulatorObject::ATTRIBUTES[] = {
	// Add more attributes here
	// This one must always be at the end
	Simulator::Attribute()
};