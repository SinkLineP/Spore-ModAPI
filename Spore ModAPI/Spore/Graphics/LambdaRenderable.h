/****************************************************************************
* Copyright (C) 2019 Eric Mor
*
* This file is part of Spore ModAPI.
*
* Spore ModAPI is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
****************************************************************************/

#pragma once

#include <Spore\Graphics\IRenderable.h>
#include <EASTL\functional.h>

namespace Graphics
{
	class LambdaRenderable
		: public IRenderable
	{
	public:
		typedef eastl::function<void(int, int, App::cViewer**, void*)> Render_t;

		LambdaRenderable(Render_t);

		virtual int AddRef() override;
		virtual int Release() override;
		virtual void Render(int, int, App::cViewer**, void*) override;

	protected:
		int mnRefCount;
		Render_t mFunction;
	};
}
