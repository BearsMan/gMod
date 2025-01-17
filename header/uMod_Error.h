#pragma once

// define return values, a value less than zero indicates an error
#define RETURN_OK 0
#define RETURN_EXISTS -70

#define RETURN_FATAL_ERROR -1
#define RETURN_NO_MEMORY -2
#define RETURN_BAD_ARGUMENT -3

#define RETURN_NO_IDirect3DDevice9 -10

#define RETURN_TEXTURE_NOT_LOADED -20
#define RETURN_TEXTURE_NOT_SAVED -21
#define RETURN_TEXTURE_NOT_FOUND -22
#define RETURN_TEXTURE_ALLREADY_ADDED -23
#define RETURN_TEXTURE_NOT_SWITCHED -24

#define RETURN_LockRect_FAILED -30
#define RETURN_UnlockRect_FAILED -31
#define RETURN_GetLevelDesc_FAILED -32


#define RETURN_NO_MUTEX -40
#define RETURN_MUTEX_LOCK -41
#define RETURN_MUTEX_UNLOCK -42

#define RETURN_UPDATE_ALLREADY_ADDED -50
#define RETURN_FILE_NOT_LOADED -51

#define RETURN_PIPE_NOT_OPENED 60


// define error states
#define uMod_ERROR_FATAL 1u
#define uMod_ERROR_MUTEX 1u<<1
#define uMod_ERROR_PIPE 1u<<2
#define uMod_ERROR_MEMORY 1u<<3
#define uMod_ERROR_TEXTURE 1u<<4
#define uMod_ERROR_MULTIPLE_IDirect3D9 1u<<5
#define uMod_ERROR_MULTIPLE_IDirect3DDevice9 1u<<6
#define uMod_ERROR_UPDATE 1u<<7
#define uMod_ERROR_SERVER 1u<<8

