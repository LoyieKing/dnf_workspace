# __exchange_and_add

`_ZN9__gnu_cxxL18__exchange_and_addEPVii`

`__gnu_cxx::__exchange_and_add(int volatile*, int)`

| 类 | 地址 |
|---|---|
| `__gnu_cxx` | `0x08ad38c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad38c2  _ZN9__gnu_cxxL18__exchange_and_addEPVii
#           __gnu_cxx::__exchange_and_add(int volatile*, int)
# range [0x08ad38c2, 0x08ad38d2]
08ad38c2 +0x00:  push   %ebp
08ad38c3 +0x01:  mov    %esp,%ebp
08ad38c5 +0x03:  mov    0xc(%ebp),%edx
08ad38c8 +0x06:  mov    0x8(%ebp),%eax
08ad38cb +0x09:  lock xadd %edx,(%eax)
08ad38cf +0x0d:  mov    %edx,%eax
08ad38d1 +0x0f:  pop    %ebp
08ad38d2 +0x10:  ret
```

## 反编译 C

```c
// __gnu_cxx::__exchange_and_add @ 0x8ad38c2

/* __gnu_cxx::__exchange_and_add(int volatile*, int) */

int __gnu_cxx::__exchange_and_add(int *param_1,int param_2)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  return iVar1;
}
```
