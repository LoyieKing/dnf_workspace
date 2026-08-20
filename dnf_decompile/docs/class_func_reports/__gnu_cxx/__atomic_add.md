# __atomic_add

`_ZN9__gnu_cxxL12__atomic_addEPVii`

`__gnu_cxx::__atomic_add(int volatile*, int)`

| 类 | 地址 |
|---|---|
| `__gnu_cxx` | `0x0854e157` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854e157  _ZN9__gnu_cxxL12__atomic_addEPVii
#           __gnu_cxx::__atomic_add(int volatile*, int)
# range [0x0854e157, 0x0854e164]
0854e157 +0x00:  push   %ebp
0854e158 +0x01:  mov    %esp,%ebp
0854e15a +0x03:  mov    0xc(%ebp),%edx
0854e15d +0x06:  mov    0x8(%ebp),%eax
0854e160 +0x09:  lock add %edx,(%eax)
0854e163 +0x0c:  pop    %ebp
0854e164 +0x0d:  ret
```

## 反编译 C

```c
// __gnu_cxx::__atomic_add @ 0x854e157

/* __gnu_cxx::__atomic_add(int volatile*, int) */

void __gnu_cxx::__atomic_add(int *param_1,int param_2)

{
  LOCK();
  *param_1 = *param_1 + param_2;
  UNLOCK();
  return;
}
```
