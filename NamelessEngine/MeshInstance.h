#pragma once
#include "NamelessCore.hpp"
#include "OBJfileReader.h"
#include "XMLfileReader.h"

namespace _NL {
	namespace Element {
		class MeshInstance : public _NL::Core::Element
		{
		public:
			MeshInstance();
			MeshInstance(const char * filePath);
			~MeshInstance();

			int LoadColladaFile(const char * filePath);
			int LoadOBJFile(const char* filePath);

			_NL::Core::MeshInstanceData MeshData;
			std::string file_Format;
			//MeshAnimator
			char* getTypeName() override;
		private:
			_NL::Tools::OBJfileReader OBJF;
			_NL::Tools::XMLfileReader ColladaF;
		};
	}
}

