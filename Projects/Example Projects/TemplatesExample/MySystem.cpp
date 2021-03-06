#include "stdafx.h"
#include "MySystem.h"

/// AUTOGENERATED METHODS ///

int MySystem::AddRef() {
	return Simulator::cStrategy::AddRef();
}
int MySystem::Release() {
	return Simulator::cStrategy::Release();
}

const char* MySystem::GetName() const {
	return "TemplatesExample::MySystem";
}

bool MySystem::Write(Simulator::ISerializerStream* stream)
{
	return Simulator::ClassSerializer(this, ATTRIBUTES).Write(stream);
}
bool MySystem::Read(Simulator::ISerializerStream* stream)
{
	return Simulator::ClassSerializer(this, ATTRIBUTES).Read(stream);
}

bool MySystem::WriteToXML(Simulator::XmlSerializer*)
{
	return false;
}

/// END OF AUTOGENERATED METHODS ///
////////////////////////////////////

Simulator::Attribute MySystem::ATTRIBUTES[] = {
	// Add more attributes here
	// This one must always be at the end
	Simulator::Attribute()
};

void MySystem::Initialize() {
	
}

void MySystem::Dispose() {
	
}

void MySystem::Update(int deltaTime, int deltaGameTime) {
	
}