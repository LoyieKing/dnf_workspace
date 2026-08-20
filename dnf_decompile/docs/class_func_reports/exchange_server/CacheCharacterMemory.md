# CacheCharacterMemory

`_ZN15exchange_server20CacheCharacterMemoryEiP20CACHE_CHARACTER_TYPE`

`exchange_server::CacheCharacterMemory(int, CACHE_CHARACTER_TYPE*)`

| 类 | 地址 |
|---|---|
| `exchange_server` | `0x0848f258` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848f258  _ZN15exchange_server20CacheCharacterMemoryEiP20CACHE_CHARACTER_TYPE
#           exchange_server::CacheCharacterMemory(int, CACHE_CHARACTER_TYPE*)
# range [0x0848f258, 0x0848f27a]
0848f258 +0x00:  push   %ebp
0848f259 +0x01:  mov    %esp,%ebp
0848f25b +0x03:  sub    $0x18,%esp
0848f25e +0x06:  call   08490f71 <_GLOBAL__I__ZN15exchange_server22AcquireCharacterMemoryEi+0x1c4f>  ; global constructors keyed to exchange_server::AcquireCharacterMemory(int)+0x1c4f
0848f263 +0x0b:  mov    0xc(%ebp),%edx
0848f266 +0x0e:  mov    %edx,0x8(%esp)
0848f26a +0x12:  mov    0x8(%ebp),%edx
0848f26d +0x15:  mov    %edx,0x4(%esp)
0848f271 +0x19:  mov    %eax,(%esp)
0848f274 +0x1c:  call   08490dca <_GLOBAL__I__ZN15exchange_server22AcquireCharacterMemoryEi+0x1aa8>  ; global constructors keyed to exchange_server::AcquireCharacterMemory(int)+0x1aa8
0848f279 +0x21:  leave
0848f27a +0x22:  ret
```

## 反编译 C

```c
// exchange_server::CacheCharacterMemory @ 0x848f258

/* exchange_server::CacheCharacterMemory(int, CACHE_CHARACTER_TYPE*) */

void exchange_server::CacheCharacterMemory(int param_1,CACHE_CHARACTER_TYPE *param_2)

{
  CCacheCharacterMgr *this;
  
  this = (CCacheCharacterMgr *)GetInstanceCacheCharacterMgr();
  CCacheCharacterMgr::CacheCharacter(this,param_1,param_2);
  return;
}
```
