#include <stdlib.h>
#include <dlfcn.h>

//criar um plugin
int main(){
    //le o caminho
    void *handle = dlopen("./libutil.so", RTLD_LAZY);

    //anotacao da funcao saudar que esta na util.h
    void (*saudar)(void) = dlsym(handle, "saudar");

    //chama a funcao
    saudar();

    //fecha o "arquivo"
    dlclose(handle);

    exit(0);
}