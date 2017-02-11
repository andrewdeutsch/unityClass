#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2761310900;
// LevelManager
struct LevelManager_t2278695849;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Brick
struct  Brick_t64452641  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.AudioClip Brick::crash
	AudioClip_t794140988 * ___crash_2;
	// UnityEngine.Sprite[] Brick::hitSprites
	SpriteU5BU5D_t2761310900* ___hitSprites_3;
	// System.Int32 Brick::timesHit
	int32_t ___timesHit_5;
	// System.Boolean Brick::isBreakable
	bool ___isBreakable_6;
	// LevelManager Brick::levelManager
	LevelManager_t2278695849 * ___levelManager_7;

public:
	inline static int32_t get_offset_of_crash_2() { return static_cast<int32_t>(offsetof(Brick_t64452641, ___crash_2)); }
	inline AudioClip_t794140988 * get_crash_2() const { return ___crash_2; }
	inline AudioClip_t794140988 ** get_address_of_crash_2() { return &___crash_2; }
	inline void set_crash_2(AudioClip_t794140988 * value)
	{
		___crash_2 = value;
		Il2CppCodeGenWriteBarrier(&___crash_2, value);
	}

	inline static int32_t get_offset_of_hitSprites_3() { return static_cast<int32_t>(offsetof(Brick_t64452641, ___hitSprites_3)); }
	inline SpriteU5BU5D_t2761310900* get_hitSprites_3() const { return ___hitSprites_3; }
	inline SpriteU5BU5D_t2761310900** get_address_of_hitSprites_3() { return &___hitSprites_3; }
	inline void set_hitSprites_3(SpriteU5BU5D_t2761310900* value)
	{
		___hitSprites_3 = value;
		Il2CppCodeGenWriteBarrier(&___hitSprites_3, value);
	}

	inline static int32_t get_offset_of_timesHit_5() { return static_cast<int32_t>(offsetof(Brick_t64452641, ___timesHit_5)); }
	inline int32_t get_timesHit_5() const { return ___timesHit_5; }
	inline int32_t* get_address_of_timesHit_5() { return &___timesHit_5; }
	inline void set_timesHit_5(int32_t value)
	{
		___timesHit_5 = value;
	}

	inline static int32_t get_offset_of_isBreakable_6() { return static_cast<int32_t>(offsetof(Brick_t64452641, ___isBreakable_6)); }
	inline bool get_isBreakable_6() const { return ___isBreakable_6; }
	inline bool* get_address_of_isBreakable_6() { return &___isBreakable_6; }
	inline void set_isBreakable_6(bool value)
	{
		___isBreakable_6 = value;
	}

	inline static int32_t get_offset_of_levelManager_7() { return static_cast<int32_t>(offsetof(Brick_t64452641, ___levelManager_7)); }
	inline LevelManager_t2278695849 * get_levelManager_7() const { return ___levelManager_7; }
	inline LevelManager_t2278695849 ** get_address_of_levelManager_7() { return &___levelManager_7; }
	inline void set_levelManager_7(LevelManager_t2278695849 * value)
	{
		___levelManager_7 = value;
		Il2CppCodeGenWriteBarrier(&___levelManager_7, value);
	}
};

struct Brick_t64452641_StaticFields
{
public:
	// System.Int32 Brick::breakableCount
	int32_t ___breakableCount_4;

public:
	inline static int32_t get_offset_of_breakableCount_4() { return static_cast<int32_t>(offsetof(Brick_t64452641_StaticFields, ___breakableCount_4)); }
	inline int32_t get_breakableCount_4() const { return ___breakableCount_4; }
	inline int32_t* get_address_of_breakableCount_4() { return &___breakableCount_4; }
	inline void set_breakableCount_4(int32_t value)
	{
		___breakableCount_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
