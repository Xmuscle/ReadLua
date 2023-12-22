#include <stdio.h>
#include <stdlib.h>
extern "C"
{
#include <lua.h>  
#include <lualib.h>  
#include <lauxlib.h>  
};

int main()
{
	lua_State* L = luaL_newstate();
	printf("Test %s", LUA_RELEASE);
	system("pause");
	return 0;
}