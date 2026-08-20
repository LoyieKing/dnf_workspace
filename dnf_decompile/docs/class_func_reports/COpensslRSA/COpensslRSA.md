# COpensslRSA

`_ZN11COpensslRSAC1Ev`

`COpensslRSA::COpensslRSA()`

| 类 | 地址 |
|---|---|
| `COpensslRSA` | `0x0816c238` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816c238  _ZN11COpensslRSAC1Ev
#           COpensslRSA::COpensslRSA()
# range [0x0816c238, 0x0816c245]
0816c238 +0x00:  push   %ebp
0816c239 +0x01:  mov    %esp,%ebp
0816c23b +0x03:  mov    0x8(%ebp),%eax
0816c23e +0x06:  movl   $0x0,(%eax)
0816c244 +0x0c:  pop    %ebp
0816c245 +0x0d:  ret
```

## 反编译 C

```c
// COpensslRSA::COpensslRSA @ 0x816c238

/* COpensslRSA::COpensslRSA() */

void __thiscall COpensslRSA::COpensslRSA(COpensslRSA *this)

{
  *(undefined4 *)this = 0;
  return;
}
```
