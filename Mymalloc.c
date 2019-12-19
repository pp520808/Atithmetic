#include "Mymalloc.h"
#include <stdio.h>
#include <stdlib.h>

#define MEN_MIN_SIZE 8 /* 内存块大小 */
#define MEM_SIZE (1024*10)/* 内存管理区域10K */
#define MMTS (MEM_SIZE/MEN_MIN_SIZE)/* 内存块数 */

 unsigned char membase[MEM_SIZE];/* 内存池 */
unsigned short int mmt[MMTS];/* 内存管理表 */


void my_malloc_init()
{
    unsigned int i = 0;
    for(i;i<MMTS;i++)
    {
        mmt[i]=0; /* 标志所有内存块都未被使用 */
    }
}
void *my_malloc(unsigned int size)
{
    unsigned int need_blocks =0;
    unsigned int free_blocks =0;
    unsigned int blocks =0;
    unsigned int i;
    need_blocks = size/MEN_MIN_SIZE;
    if(size%MEN_MIN_SIZE)
    {
        need_blocks++;
    }
    for(i=0;i<MMTS;i++)
    {
        if(mmt[i]==0)
            free_blocks++;
        else
        {
            free_blocks = 0;
        }
        if(free_blocks == need_blocks)
        {
            i = (i+1)-free_blocks;
            for(blocks=i;blocks<(i+free_blocks);blocks++)
            {
                mmt[blocks]=1;
            }
            mmt[i]=need_blocks;
            return (membase+i*MEN_MIN_SIZE);
        }
    }
    return 0x00000000L;
}
unsigned char my_free(void *mem_pointer)
{
    unsigned int free;
    unsigned int num;
    unsigned int i;
    free = (unsigned char )mem_pointer - (unsigned char)&membase[0];
    free/=MEN_MIN_SIZE;
    for(i=free;i<free+num;i++)
    {
        mmt[i] =0;
    }
    mem_pointer = 0x00000000L;
    return 1;
}