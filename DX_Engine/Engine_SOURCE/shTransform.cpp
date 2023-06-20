#include "shTransform.h"
#include "shRenderer.h"
#include "shConstantBuffer.h"

namespace sh
{
	using namespace sh::graphics;
	Transform::Transform()
		: Component(eComponentType::Transform)
		, mPosition(Vector3::Zero)
		, mRotation(Vector3::Zero)
		, mScale(Vector3::One)
	{
	}

	Transform::~Transform()
	{
	}

	void Transform::Initialize()
	{
	}

	void Transform::Update()
	{
	}

	void Transform::LateUpdate()
	{
		//BindConstantBuffer();
	}

	void Transform::Render()
	{

	}

	void Transform::BindConstantBuffer()
	{
		ConstantBuffer* cb = renderer::constantBuffer[(UINT)eCBType::Transform];
		Vector4 position(mPosition.x, mPosition.y, mPosition.z , 1.0f);
		cb->SetData(&position);
		cb->Bind(eShaderStage::VS);
	}
}