# __atomic_add_single

`_ZN9__gnu_cxxL19__atomic_add_singleEPii`

`__gnu_cxx::__atomic_add_single(int*, int)`

| 类 | 地址 |
|---|---|
| `__gnu_cxx` | `0x0854e187` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854e187  _ZN9__gnu_cxxL19__atomic_add_singleEPii
#           __gnu_cxx::__atomic_add_single(int*, int)
# range [0x0854e187, 0x0854e19a]
0854e187 +0x00:  push   %ebp
0854e188 +0x01:  mov    %esp,%ebp
0854e18a +0x03:  mov    0x8(%ebp),%eax
0854e18d +0x06:  mov    (%eax),%eax
0854e18f +0x08:  mov    %eax,%edx
0854e191 +0x0a:  add    0xc(%ebp),%edx
0854e194 +0x0d:  mov    0x8(%ebp),%eax
0854e197 +0x10:  mov    %edx,(%eax)
0854e199 +0x12:  pop    %ebp
0854e19a +0x13:  ret
```

## 反编译 C

```c
// __gnu_cxx::__atomic_add_single @ 0x854e187

/* __gnu_cxx::__atomic_add_single(int*, int) */

void __gnu_cxx::__atomic_add_single(int *param_1,int param_2)

{
  *param_1 = *param_1 + param_2;
  return;
}
```
