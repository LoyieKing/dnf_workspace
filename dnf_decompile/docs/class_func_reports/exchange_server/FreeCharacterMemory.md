# FreeCharacterMemory

`_ZN15exchange_server19FreeCharacterMemoryEP20CACHE_CHARACTER_TYPE`

`exchange_server::FreeCharacterMemory(CACHE_CHARACTER_TYPE*)`

| 类 | 地址 |
|---|---|
| `exchange_server` | `0x0848f23c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848f23c  _ZN15exchange_server19FreeCharacterMemoryEP20CACHE_CHARACTER_TYPE
#           exchange_server::FreeCharacterMemory(CACHE_CHARACTER_TYPE*)
# range [0x0848f23c, 0x0848f257]
0848f23c +0x00:  push   %ebp
0848f23d +0x01:  mov    %esp,%ebp
0848f23f +0x03:  sub    $0x18,%esp
0848f242 +0x06:  call   08490f71 <_GLOBAL__I__ZN15exchange_server22AcquireCharacterMemoryEi+0x1c4f>  ; global constructors keyed to exchange_server::AcquireCharacterMemory(int)+0x1c4f
0848f247 +0x0b:  mov    0x8(%ebp),%edx
0848f24a +0x0e:  mov    %edx,0x4(%esp)
0848f24e +0x12:  mov    %eax,(%esp)
0848f251 +0x15:  call   08490bf4 <_GLOBAL__I__ZN15exchange_server22AcquireCharacterMemoryEi+0x18d2>  ; global constructors keyed to exchange_server::AcquireCharacterMemory(int)+0x18d2
0848f256 +0x1a:  leave
0848f257 +0x1b:  ret
```

## 反编译 C

```c
// exchange_server::FreeCharacterMemory @ 0x848f23c

/* exchange_server::FreeCharacterMemory(CACHE_CHARACTER_TYPE*) */

void exchange_server::FreeCharacterMemory(CACHE_CHARACTER_TYPE *param_1)

{
  CCacheCharacterMgr *this;
  
  this = (CCacheCharacterMgr *)GetInstanceCacheCharacterMgr();
  CCacheCharacterMgr::FreeCharacter(this,param_1);
  return;
}
```
