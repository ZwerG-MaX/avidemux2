// automatically generated by admSerialization.py, do not edit!
#include "ADM_default.h"
#include "ADM_paramList.h"
#include "ADM_coreJson.h"
#include "shaderLoader.h"
bool  shaderLoaderConf_jserialize(const char *file, const shaderLoaderConf *key){
admJson json;
json.addString("shaderFile",key->shaderFile);
return json.dumpToFile(file);
};
bool  shaderLoaderConf_jdeserialize(const char *file, const ADM_paramList *tmpl,shaderLoaderConf *key){
admJsonToCouple json;
CONFcouple *c=json.readFromFile(file);
if(!c) {ADM_error("Cannot read json file");return false;}
bool r= ADM_paramLoadPartial(c,tmpl,key);
delete c;
return r;
};
