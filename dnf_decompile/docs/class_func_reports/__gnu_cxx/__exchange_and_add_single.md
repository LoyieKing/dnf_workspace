# __exchange_and_add_single

`_ZN9__gnu_cxxL25__exchange_and_add_singleEPii`

`__gnu_cxx::__exchange_and_add_single(int*, int)`

| 类 | 地址 |
|---|---|
| `__gnu_cxx` | `0x0854e165` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854e165  _ZN9__gnu_cxxL25__exchange_and_add_singleEPii
#           __gnu_cxx::__exchange_and_add_single(int*, int)
# range [0x0854e165, 0x0854e186]
0854e165 +0x00:  push   %ebp
0854e166 +0x01:  mov    %esp,%ebp
0854e168 +0x03:  sub    $0x10,%esp
0854e16b +0x06:  mov    0x8(%ebp),%eax
0854e16e +0x09:  mov    (%eax),%eax
0854e170 +0x0b:  mov    %eax,-0x4(%ebp)
0854e173 +0x0e:  mov    0x8(%ebp),%eax
0854e176 +0x11:  mov    (%eax),%eax
0854e178 +0x13:  mov    %eax,%edx
0854e17a +0x15:  add    0xc(%ebp),%edx
0854e17d +0x18:  mov    0x8(%ebp),%eax
0854e180 +0x1b:  mov    %edx,(%eax)
0854e182 +0x1d:  mov    -0x4(%ebp),%eax
0854e185 +0x20:  leave
0854e186 +0x21:  ret
```

## 反编译 C

```c
// __gnu_cxx::__exchange_and_add_single @ 0x854e165

/* __gnu_cxx::__exchange_and_add_single(int*, int) */

int __gnu_cxx::__exchange_and_add_single(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  return iVar1;
}
```
