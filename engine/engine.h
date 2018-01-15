#ifndef PEGAS_ENGINE_H
#define PEGAS_ENGINE_H
#pragma once

#include <stdlib.h>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <algorithm>
#include <utility>
#include <stdexcept>
#include <math.h>

namespace Pegas
{
	class IDrawable;
	class IClickable;
	class IMovable;
	class GUIManager;
	class GrafManager;
	class SoundManager;
	class OSUtils;
}

#include "types.h"
#include "singleton.h"
#include "vectors.h"
#include "resource_manager.h"
#include "utils.h"
#include "graf_manager.h"
#include "gui_manager.h"
#include "sound_manager.h"
#include "animation.h"
#include "game_objects.h"

#endif //PEGAS_ENGINE_H