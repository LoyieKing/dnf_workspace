# __atomic_add_single

`_ZN9__gnu_cxxL19__atomic_add_singleEPii`

`__gnu_cxx::__atomic_add_single(int*, int)`

| 类 | 地址 |
|---|---|
| `__gnu_cxx` | `0x08ad3903` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3903  _ZN9__gnu_cxxL19__atomic_add_singleEPii
#           __gnu_cxx::__atomic_add_single(int*, int)
# range [0x08ad3903, 0x08ad3916]
08ad3903 +0x00:  push   %ebp
08ad3904 +0x01:  mov    %esp,%ebp
08ad3906 +0x03:  mov    0x8(%ebp),%eax
08ad3909 +0x06:  mov    (%eax),%eax
08ad390b +0x08:  mov    %eax,%edx
08ad390d +0x0a:  add    0xc(%ebp),%edx
08ad3910 +0x0d:  mov    0x8(%ebp),%eax
08ad3913 +0x10:  mov    %edx,(%eax)
08ad3915 +0x12:  pop    %ebp
08ad3916 +0x13:  ret
```

## 反编译 C

```c
// __gnu_cxx::__atomic_add_single @ 0x8ad3903

/* __gnu_cxx::__atomic_add_single(int*, int) */

void __gnu_cxx::__atomic_add_single(int *param_1,int param_2)

{
  *param_1 = *param_1 + param_2;
  return;
}
```
