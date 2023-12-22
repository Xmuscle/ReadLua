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
	system("pause");
	return 0;
}