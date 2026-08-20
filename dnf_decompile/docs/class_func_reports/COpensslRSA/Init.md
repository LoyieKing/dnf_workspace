# Init

`_ZN11COpensslRSA4InitEv`

`COpensslRSA::Init()`

| 类 | 地址 |
|---|---|
| `COpensslRSA` | `0x0816c26e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816c26e  _ZN11COpensslRSA4InitEv
#           COpensslRSA::Init()
# range [0x0816c26e, 0x0816c289]
0816c26e +0x00:  push   %ebp
0816c26f +0x01:  mov    %esp,%ebp
0816c271 +0x03:  sub    $0x18,%esp
0816c274 +0x06:  movl   $"publickey.pem",0x4(%esp)
0816c27c +0x0e:  mov    0x8(%ebp),%eax
0816c27f +0x11:  mov    %eax,(%esp)
0816c282 +0x14:  call   0816c28a <_ZN11COpensslRSA4InitEPKc>  ; COpensslRSA::Init(char const*)
0816c287 +0x19:  leave
0816c288 +0x1a:  ret
0816c289 +0x1b:  nop
```

## 反编译 C

```c
// COpensslRSA::Init @ 0x816c26e

/* COpensslRSA::Init() */

void __thiscall COpensslRSA::Init(COpensslRSA *this)

{
  Init(this,"publickey.pem");
  return;
}
```
