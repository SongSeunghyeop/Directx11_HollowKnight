#pragma once
#include "shResources.h"
#include "shResource.h"
#include "shShader.h"
#include "shTexture.h"

namespace sh::graphics
{
	class Material : public Resource
	{
	public:
		Material();
		~Material();

		virtual HRESULT Load(const std::wstring& path) override;

		void Binds();
		void Clear();

		void SetShader(std::shared_ptr<Shader> shader) { mShader = shader; }
		void SetTexture(std::shared_ptr<Texture> texture) { mTexture = texture; }
		void SetRenderingMode(eRenderingMode mode) { mMode = mode; }
		eRenderingMode GetRenderingMode() { return mMode; }

		static void Make_Material(std::shared_ptr<Shader> shader, std::shared_ptr<Texture> texture, std::wstring Materialname);
	private:
		std::shared_ptr<Shader> mShader;
		std::shared_ptr<Texture> mTexture;

		eRenderingMode mMode;
	};
}