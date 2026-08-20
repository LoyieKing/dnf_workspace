# ~COpensslRSA

`_ZN11COpensslRSAD1Ev`

`COpensslRSA::~COpensslRSA()`

| 类 | 地址 |
|---|---|
| `COpensslRSA` | `0x0816c246` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816c246  _ZN11COpensslRSAD1Ev
#           COpensslRSA::~COpensslRSA()
# range [0x0816c246, 0x0816c26d]
0816c246 +0x00:  push   %ebp
0816c247 +0x01:  mov    %esp,%ebp
0816c249 +0x03:  sub    $0x18,%esp
0816c24c +0x06:  mov    0x8(%ebp),%eax
0816c24f +0x09:  mov    (%eax),%eax
0816c251 +0x0b:  test   %eax,%eax
0816c253 +0x0d:  je     0816c26b <+0x25>
0816c255 +0x0f:  mov    0x8(%ebp),%eax
0816c258 +0x12:  mov    (%eax),%eax
0816c25a +0x14:  mov    %eax,(%esp)
0816c25d +0x17:  call   087eab50 <RSA_free>
0816c262 +0x1c:  mov    0x8(%ebp),%eax
0816c265 +0x1f:  movl   $0x0,(%eax)
0816c26b +0x25:  leave
0816c26c +0x26:  ret
0816c26d +0x27:  nop
```

## 反编译 C

```c
// COpensslRSA::~COpensslRSA @ 0x816c246

/* COpensslRSA::~COpensslRSA() */

void __thiscall COpensslRSA::~COpensslRSA(COpensslRSA *this)

{
  if (*(int *)this != 0) {
    RSA_free(*(RSA **)this);
    *(undefined4 *)this = 0;
  }
  return;
}
```
