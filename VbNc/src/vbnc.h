#ifndef VBNC_VBNC_H
#define VBNC_VBNC_H
#include <windows.h>


#ifndef CALLCONVENTION
//	#define CALLCONVENTION
#define CALLCONVENTION WINAPI
#endif

#ifndef EXPORTCALL
//#define EXPORTCALL
#define EXPORTCALL __declspec(dllexport)
#endif

#include "netcdf.h"

extern "C" {
	EXPORTCALL int CALLCONVENTION vbnc_nc_create(const char* path, int cmode, int* ncidp);
	EXPORTCALL int CALLCONVENTION vbnc_nc_open(const char* path, int mode, int* ncidp);
	EXPORTCALL int CALLCONVENTION vbnc_nc_enddef(int ncid);
	EXPORTCALL int CALLCONVENTION vbnc_nc_redef(int ncid);
	EXPORTCALL int CALLCONVENTION vbnc_nc_close(int ncid);
	EXPORTCALL int CALLCONVENTION vbnc_nc_inq_nvars(int ncid, int* nvarsp);
	EXPORTCALL int CALLCONVENTION vbnc_nc_inq_varid(int ncid, const char* name, int* varidp);
	EXPORTCALL int CALLCONVENTION vbnc_nc_inq_varname(int ncid, int varid, char* name);
	EXPORTCALL int CALLCONVENTION vbnc_nc_inq_vartype(int ncid, int varid, nc_type* xtypep);
	EXPORTCALL int CALLCONVENTION vbnc_nc_inq_varids(int ncid, int* nvars, int* varids);
	EXPORTCALL int CALLCONVENTION vbnc_nc_get_var_int(int ncid, int varid, int* ip);
	EXPORTCALL int CALLCONVENTION vbnc_nc_get_var_schar(int ncid, int varid, signed char* ip);
	EXPORTCALL int CALLCONVENTION vbnc_nc_get_var_short(int ncid, int varid, short* ip);
	EXPORTCALL int CALLCONVENTION vbnc_nc_get_var_float(int ncid, int varid, float* ip);
	EXPORTCALL int CALLCONVENTION vbnc_nc_get_var_double(int ncid, int varid, double* ip);
	EXPORTCALL int CALLCONVENTION vbnc_nc_get_var_text(int ncid, int varid, char* ip);
	EXPORTCALL int CALLCONVENTION vbnc_nc_inq_varnatts(int ncid, int varid, int* nattsp);
	EXPORTCALL int CALLCONVENTION vbnc_nc_inq_varndims(int ncid, int varid, int* ndimsp);
	EXPORTCALL int CALLCONVENTION vbnc_nc_inq_vardimid(int ncid, int varid, int* dimidsp);
	EXPORTCALL int CALLCONVENTION vbnc_nc_def_var(int ncid, const char* name, nc_type xtype, int ndims, const int* dimidsp, int* varidp);
	EXPORTCALL int CALLCONVENTION vbnc_nc_put_var_int(int ncid, int varid, const int* op);
	EXPORTCALL int CALLCONVENTION vbnc_nc_put_var_schar(int ncid, int varid, const signed char* op);
	EXPORTCALL int CALLCONVENTION vbnc_nc_put_var_short(int ncid, int varid, const short* op);
	EXPORTCALL int CALLCONVENTION vbnc_nc_put_var_float(int ncid, int varid, const float* op);
	EXPORTCALL int CALLCONVENTION vbnc_nc_put_var_double(int ncid, int varid, const double* op);
	EXPORTCALL int CALLCONVENTION vbnc_nc_put_var_text(int ncid, int varid, const char* op);
	EXPORTCALL int CALLCONVENTION vbnc_nc_get_vara_int(int ncid, int varid, const size_t* startp, const size_t* countp, int* ip);
	EXPORTCALL int CALLCONVENTION vbnc_nc_get_vara_schar(int ncid, int varid, const size_t* startp, const size_t* countp, signed char* ip);
	EXPORTCALL int CALLCONVENTION vbnc_nc_get_vara_short(int ncid, int varid, const size_t* startp, const size_t* countp, short* ip);
	EXPORTCALL int CALLCONVENTION vbnc_nc_get_vara_float(int ncid, int varid, const size_t* startp, const size_t* countp, float* ip);
	EXPORTCALL int CALLCONVENTION vbnc_nc_get_vara_double(int ncid, int varid, const size_t* startp, const size_t* countp, double* ip);
	EXPORTCALL int CALLCONVENTION vbnc_nc_get_vara_text(int ncid, int varid, const size_t* startp, const size_t* countp, char* ip);
	EXPORTCALL int CALLCONVENTION vbnc_nc_put_vara_int(int ncid, int varid, const size_t* startp, const size_t* countp, const int* op);
	EXPORTCALL int CALLCONVENTION vbnc_nc_put_vara_schar(int ncid, int varid, const size_t* startp, const size_t* countp, const signed char* op);
	EXPORTCALL int CALLCONVENTION vbnc_nc_put_vara_short(int ncid, int varid, const size_t* startp, const size_t* countp, const short* op);
	EXPORTCALL int CALLCONVENTION vbnc_nc_put_vara_float(int ncid, int varid, const size_t* startp, const size_t* countp, const float* op);
	EXPORTCALL int CALLCONVENTION vbnc_nc_put_vara_double(int ncid, int varid, const size_t* startp, const size_t* countp, const double* op);
	EXPORTCALL int CALLCONVENTION vbnc_nc_put_vara_text(int ncid, int varid, const size_t* startp, const size_t* countp, const char* op);
	EXPORTCALL int CALLCONVENTION vbnc_nc_inq_ndims(int ncid, int* ndimsp);
	EXPORTCALL int CALLCONVENTION vbnc_nc_inq_dimid(int ncid, const char* name, int* idp);
	EXPORTCALL int CALLCONVENTION vbnc_nc_inq_dimlen(int ncid, int dimid, size_t* lenp);
	EXPORTCALL int CALLCONVENTION vbnc_nc_inq_dimname(int ncid, int dimid, char* name);
	EXPORTCALL int CALLCONVENTION vbnc_nc_def_dim(int ncid, const char* name, size_t len, int* idp);
	EXPORTCALL int CALLCONVENTION vbnc_nc_inq_natts(int ncid, int* nattsp);
	EXPORTCALL int CALLCONVENTION vbnc_nc_inq_attlen(int ncid, int varid, const char* name, size_t* lenp);
	EXPORTCALL int CALLCONVENTION vbnc_nc_inq_attname(int ncid, int varid, int attnum, char* name);
	EXPORTCALL int CALLCONVENTION vbnc_nc_inq_atttype(int ncid, int varid, const char* name, nc_type* xtypep);
	EXPORTCALL int CALLCONVENTION vbnc_nc_get_att_text(int ncid, int varid, const char* name, char* ip);
	EXPORTCALL int CALLCONVENTION vbnc_nc_get_att_float(int ncid, int varid, const char* name, float* ip);
	EXPORTCALL int CALLCONVENTION vbnc_nc_get_att_schar(int ncid, int varid, const char* name, signed char* ip);
	EXPORTCALL int CALLCONVENTION vbnc_nc_get_att_short(int ncid, int varid, const char* name, short* ip);
	EXPORTCALL int CALLCONVENTION vbnc_nc_get_att_int(int ncid, int varid, const char* name, int* ip);
	EXPORTCALL int CALLCONVENTION vbnc_nc_get_att_long(int ncid, int varid, const char* name, long* ip);
	EXPORTCALL int CALLCONVENTION vbnc_nc_get_att_double(int ncid, int varid, const char* name, double* ip);
	EXPORTCALL int CALLCONVENTION vbnc_nc_put_att_text(int ncid, int varid, const char* name, size_t len, const char* op);
	EXPORTCALL int CALLCONVENTION vbnc_nc_put_att_float(int ncid, int varid, const char* name, nc_type xtype, size_t len, const float* op);
	EXPORTCALL int CALLCONVENTION vbnc_nc_put_att_schar(int ncid, int varid, const char* name, nc_type xtype, size_t len, const signed char* op);
	EXPORTCALL int CALLCONVENTION vbnc_nc_put_att_short(int ncid, int varid, const char* name, nc_type xtype, size_t len, const short* op);
	EXPORTCALL int CALLCONVENTION vbnc_nc_put_att_int(int ncid, int varid, const char* name, nc_type xtype, size_t len, const int* op);
	EXPORTCALL int CALLCONVENTION vbnc_nc_put_att_long(int ncid, int varid, const char* name, nc_type xtype, size_t len, const long* op);
	EXPORTCALL int CALLCONVENTION vbnc_nc_put_att_double(int ncid, int varid, const char* name, nc_type xtype, size_t len, const double* op);
}


#endif //VBNC_VBNC_H
