#include "vbnc.h"


EXPORTCALL int CALLCONVENTION vbnc_nc_create(const char* path, int cmode, int* ncidp) {
    return nc_create(path, cmode, ncidp);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_open(const char* path, int mode, int* ncidp) {
    return nc_open(path, mode, ncidp);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_enddef(int ncid) {
    return nc_enddef(ncid);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_redef(int ncid) {
    return nc_redef(ncid);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_close(int ncid) {
    return nc_close(ncid);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_inq_nvars(int ncid, int* nvarsp) {
    return nc_inq_nvars(ncid, nvarsp);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_inq_varid(int ncid, const char* name, int* varidp) {
    return nc_inq_varid(ncid, name, varidp);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_inq_varname(int ncid, int varid, char* name) {
    return nc_inq_varname(ncid, varid, name);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_inq_vartype(int ncid, int varid, nc_type* xtypep) {
    return nc_inq_vartype(ncid, varid, xtypep);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_inq_varids(int ncid, int* nvars, int* varids) {
    return nc_inq_varids(ncid, nvars, varids);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_get_var_int(int ncid, int varid, int* ip) {
    return nc_get_var_int(ncid, varid, ip);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_get_var_schar(int ncid, int varid, signed char* ip) {
    return nc_get_var_schar(ncid, varid, ip);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_get_var_short(int ncid, int varid, short* ip) {
    return nc_get_var_short(ncid, varid, ip);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_get_var_float(int ncid, int varid, float* ip) {
    return nc_get_var_float(ncid, varid, ip);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_get_var_double(int ncid, int varid, double* ip) {
    return nc_get_var_double(ncid, varid, ip);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_get_var_text(int ncid, int varid, char* ip) {
    return nc_get_var_text(ncid, varid, ip);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_inq_varnatts(int ncid, int varid, int* nattsp) {
    return nc_inq_varnatts(ncid, varid, nattsp);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_inq_varndims(int ncid, int varid, int* ndimsp) {
    return nc_inq_varndims(ncid, varid, ndimsp);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_inq_vardimid(int ncid, int varid, int* dimidsp) {
    return nc_inq_vardimid(ncid, varid, dimidsp);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_def_var(int ncid, const char* name, nc_type xtype, int ndims, const int* dimidsp, int* varidp) {
    return nc_def_var(ncid, name, xtype, ndims, dimidsp, varidp);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_put_var_int(int ncid, int varid, const int* op) {
    return nc_put_var_int(ncid, varid, op);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_put_var_schar(int ncid, int varid, const signed char* op) {
    return nc_put_var_schar(ncid, varid, op);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_put_var_short(int ncid, int varid, const short* op) {
    return nc_put_var_short(ncid, varid, op);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_put_var_float(int ncid, int varid, const float* op) {
    return nc_put_var_float(ncid, varid, op);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_put_var_double(int ncid, int varid, const double* op) {
    return nc_put_var_double(ncid, varid, op);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_put_var_text(int ncid, int varid, const char* op) {
    return nc_put_var_text(ncid, varid, op);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_get_vara_int(int ncid, int varid, const size_t* startp, const size_t* countp, int* ip) {
    return nc_get_vara_int(ncid, varid, startp, countp, ip);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_get_vara_schar(int ncid, int varid, const size_t* startp, const size_t* countp, signed char* ip) {
    return nc_get_vara_schar(ncid, varid, startp, countp, ip);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_get_vara_short(int ncid, int varid, const size_t* startp, const size_t* countp, short* ip) {
    return nc_get_vara_short(ncid, varid, startp, countp, ip);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_get_vara_float(int ncid, int varid, const size_t* startp, const size_t* countp, float* ip) {
    return nc_get_vara_float(ncid, varid, startp, countp, ip);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_get_vara_double(int ncid, int varid, const size_t* startp, const size_t* countp, double* ip) {
    return nc_get_vara_double(ncid, varid, startp, countp, ip);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_get_vara_text(int ncid, int varid, const size_t* startp, const size_t* countp, char* ip) {
    return nc_get_vara_text(ncid, varid, startp, countp, ip);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_put_vara_int(int ncid, int varid, const size_t* startp, const size_t* countp, const int* op) {
    return nc_put_vara_int(ncid, varid, startp, countp, op);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_put_vara_schar(int ncid, int varid, const size_t* startp, const size_t* countp, const signed char* op) {
    return nc_put_vara_schar(ncid, varid, startp, countp, op);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_put_vara_short(int ncid, int varid, const size_t* startp, const size_t* countp, const short* op) {
    return nc_put_vara_short(ncid, varid, startp, countp, op);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_put_vara_float(int ncid, int varid, const size_t* startp, const size_t* countp, const float* op) {
    return nc_put_vara_float(ncid, varid, startp, countp, op);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_put_vara_double(int ncid, int varid, const size_t* startp, const size_t* countp, const double* op) {
    return nc_put_vara_double(ncid, varid, startp, countp, op);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_put_vara_text(int ncid, int varid, const size_t* startp, const size_t* countp, const char* op) {
    return nc_put_vara_text(ncid, varid, startp, countp, op);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_inq_ndims(int ncid, int* ndimsp) {
    return nc_inq_ndims(ncid, ndimsp);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_inq_dimid(int ncid, const char* name, int* idp) {
    return nc_inq_dimid(ncid, name, idp);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_inq_dimlen(int ncid, int dimid, size_t* lenp) {
    return nc_inq_dimlen(ncid, dimid, lenp);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_inq_dimname(int ncid, int dimid, char* name) {
    return nc_inq_dimname(ncid, dimid, name);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_def_dim(int ncid, const char* name, size_t len, int* idp) {
    return nc_def_dim(ncid, name, len, idp);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_inq_natts(int ncid, int* nattsp) {
    return nc_inq_natts(ncid, nattsp);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_inq_attlen(int ncid, int varid, const char* name, size_t* lenp) {
    return nc_inq_attlen(ncid, varid, name, lenp);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_inq_attname(int ncid, int varid, int attnum, char* name) {
    return nc_inq_attname(ncid, varid, attnum, name);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_inq_atttype(int ncid, int varid, const char* name, nc_type* xtypep) {
    return nc_inq_atttype(ncid, varid, name, xtypep);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_get_att_text(int ncid, int varid, const char* name, char* ip) {
    return nc_get_att_text(ncid, varid, name, ip);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_get_att_float(int ncid, int varid, const char* name, float* ip) {
    return nc_get_att_float(ncid, varid, name, ip);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_get_att_schar(int ncid, int varid, const char* name, signed char* ip) {
    return nc_get_att_schar(ncid, varid, name, ip);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_get_att_short(int ncid, int varid, const char* name, short* ip) {
    return nc_get_att_short(ncid, varid, name, ip);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_get_att_int(int ncid, int varid, const char* name, int* ip) {
    return nc_get_att_int(ncid, varid, name, ip);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_get_att_long(int ncid, int varid, const char* name, long* ip) {
    return nc_get_att_long(ncid, varid, name, ip);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_get_att_double(int ncid, int varid, const char* name, double* ip) {
    return nc_get_att_double(ncid, varid, name, ip);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_put_att_text(int ncid, int varid, const char* name, size_t len, const char* op) {
    return nc_put_att_text(ncid, varid, name, len, op);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_put_att_float(int ncid, int varid, const char* name, nc_type xtype, size_t len, const float* op) {
    return nc_put_att_float(ncid, varid, name, xtype, len, op);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_put_att_schar(int ncid, int varid, const char* name, nc_type xtype, size_t len, const signed char* op) {
    return nc_put_att_schar(ncid, varid, name, xtype, len, op);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_put_att_short(int ncid, int varid, const char* name, nc_type xtype, size_t len, const short* op) {
    return nc_put_att_short(ncid, varid, name, xtype, len, op);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_put_att_int(int ncid, int varid, const char* name, nc_type xtype, size_t len, const int* op) {
    return nc_put_att_int(ncid, varid, name, xtype, len, op);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_put_att_long(int ncid, int varid, const char* name, nc_type xtype, size_t len, const long* op) {
    return nc_put_att_long(ncid, varid, name, xtype, len, op);
}

EXPORTCALL int CALLCONVENTION vbnc_nc_put_att_double(int ncid, int varid, const char* name, nc_type xtype, size_t len, const double* op) {
    return nc_put_att_double(ncid, varid, name, xtype, len, op);
}
