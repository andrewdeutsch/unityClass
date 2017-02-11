#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Ball
struct Ball_t2062879;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Paddle
struct  Paddle_t2382992266  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean Paddle::autoPlay
	bool ___autoPlay_2;
	// Ball Paddle::ball
	Ball_t2062879 * ___ball_3;

public:
	inline static int32_t get_offset_of_autoPlay_2() { return static_cast<int32_t>(offsetof(Paddle_t2382992266, ___autoPlay_2)); }
	inline bool get_autoPlay_2() const { return ___autoPlay_2; }
	inline bool* get_address_of_autoPlay_2() { return &___autoPlay_2; }
	inline void set_autoPlay_2(bool value)
	{
		___autoPlay_2 = value;
	}

	inline static int32_t get_offset_of_ball_3() { return static_cast<int32_t>(offsetof(Paddle_t2382992266, ___ball_3)); }
	inline Ball_t2062879 * get_ball_3() const { return ___ball_3; }
	inline Ball_t2062879 ** get_address_of_ball_3() { return &___ball_3; }
	inline void set_ball_3(Ball_t2062879 * value)
	{
		___ball_3 = value;
		Il2CppCodeGenWriteBarrier(&___ball_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
