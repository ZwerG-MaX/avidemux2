// automatically generated by admSerialization.py, do not edit!
#include "ADM_default.h"
#include "ADM_paramList.h"
#include "ADM_coreJson.h"
#include "rplane.h"
bool  removePlane_jserialize(const char *file, const removePlane *key){
admJson json;
json.addBool("keepY",key->keepY);
json.addBool("keepU",key->keepU);
json.addBool("keepV",key->keepV);
return json.dumpToFile(file);
};
bool  removePlane_jdeserialize(const char *file, const ADM_paramList *tmpl,removePlane *key){
admJsonToCouple json;
CONFcouple *c=json.readFromFile(file);
if(!c) {ADM_error("Cannot read json file");return false;}
bool r= ADM_paramLoadPartial(c,tmpl,key);
delete c;
return r;
};
