# __atomic_add

`_ZN9__gnu_cxxL12__atomic_addEPVii`

`__gnu_cxx::__atomic_add(int volatile*, int)`

| 类 | 地址 |
|---|---|
| `__gnu_cxx` | `0x08ad38d3` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad38d3  _ZN9__gnu_cxxL12__atomic_addEPVii
#           __gnu_cxx::__atomic_add(int volatile*, int)
# range [0x08ad38d3, 0x08ad38e0]
08ad38d3 +0x00:  push   %ebp
08ad38d4 +0x01:  mov    %esp,%ebp
08ad38d6 +0x03:  mov    0xc(%ebp),%edx
08ad38d9 +0x06:  mov    0x8(%ebp),%eax
08ad38dc +0x09:  lock add %edx,(%eax)
08ad38df +0x0c:  pop    %ebp
08ad38e0 +0x0d:  ret
```

## 反编译 C

```c
// __gnu_cxx::__atomic_add @ 0x8ad38d3

/* __gnu_cxx::__atomic_add(int volatile*, int) */

void __gnu_cxx::__atomic_add(int *param_1,int param_2)

{
  LOCK();
  *param_1 = *param_1 + param_2;
  UNLOCK();
  return;
}
```
