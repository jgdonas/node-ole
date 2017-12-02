#pragma once
#include "stdafx.h"
#define assert_napi(status) if (status != napi_ok) {\
			napi_throw_error(env, "NAPI_ERROR", "An NAPI Error occurred.");\
			return NULL;\
	}
namespace node_ole {
	DWORD WINAPI workerHandler(LPVOID lpParam);

	void nodeHandler(uv_async_t * handle);

	napi_value nodeInitHandler(napi_env env, napi_callback_info info);
}