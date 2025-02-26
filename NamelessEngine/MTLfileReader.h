#pragma once
#include "NamelessCore.hpp"
#include "TextureLoader.h"
#include <vector>
namespace _NL {
	namespace Tools {
		class MTLfileReader
		{
		public:
			MTLfileReader();
			~MTLfileReader();

			int LOAD(const char* OBJpath);
			std::vector<_NL::Core::MaterialInstanceData>MTLD;
			GLint inMTLfile_counter = -1;
			_NL::Tools::TextureLoader TL;
			void RESET();
		};
	}
}

