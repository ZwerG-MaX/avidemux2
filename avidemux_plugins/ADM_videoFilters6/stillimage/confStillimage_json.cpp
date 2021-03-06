// automatically generated by admSerialization.py, do not edit!
#include "ADM_default.h"
#include "ADM_paramList.h"
#include "ADM_coreJson.h"
#include "confStillimage.h"
bool  configuration_jserialize(const char *file, const configuration *key){
admJson json;
json.addUint32("start",key->start);
json.addUint32("duration",key->duration);
return json.dumpToFile(file);
};
bool  configuration_jdeserialize(const char *file, const ADM_paramList *tmpl,configuration *key){
admJsonToCouple json;
CONFcouple *c=json.readFromFile(file);
if(!c) {ADM_error("Cannot read json file");return false;}
bool r= ADM_paramLoadPartial(c,tmpl,key);
delete c;
return r;
};
