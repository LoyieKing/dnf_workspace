# Init

`_ZN8TaoCrypt6SHA5124InitEv`

`TaoCrypt::SHA512::Init()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::SHA512` | `0x087684b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087684b0  _ZN8TaoCrypt6SHA5124InitEv
#           TaoCrypt::SHA512::Init()
# range [0x087684b0, 0x0876853e]
087684b0 +0x00:  push   %ebp
087684b1 +0x01:  mov    %esp,%ebp
087684b3 +0x03:  mov    0x8(%ebp),%eax
087684b6 +0x06:  movl   $0xf3bcc908,0x10(%eax)
087684bd +0x0d:  movl   $0x6a09e667,0x14(%eax)
087684c4 +0x14:  movl   $0x84caa73b,0x18(%eax)
087684cb +0x1b:  movl   $0xbb67ae85,0x1c(%eax)
087684d2 +0x22:  movl   $0xfe94f82b,0x20(%eax)
087684d9 +0x29:  movl   $0x3c6ef372,0x24(%eax)
087684e0 +0x30:  movl   $0x5f1d36f1,0x28(%eax)
087684e7 +0x37:  movl   $0xa54ff53a,0x2c(%eax)
087684ee +0x3e:  movl   $0xade682d1,0x30(%eax)
087684f5 +0x45:  movl   $0x510e527f,0x34(%eax)
087684fc +0x4c:  movl   $0x2b3e6c1f,0x38(%eax)
08768503 +0x53:  movl   $0x9b05688c,0x3c(%eax)
0876850a +0x5a:  movl   $0xfb41bd6b,0x40(%eax)
08768511 +0x61:  movl   $0x1f83d9ab,0x44(%eax)
08768518 +0x68:  movl   $0x137e2179,0x48(%eax)
0876851f +0x6f:  movl   $0x5be0cd19,0x4c(%eax)
08768526 +0x76:  movl   $0x0,0x4(%eax)
0876852d +0x7d:  movl   $0x0,0x8(%eax)
08768534 +0x84:  movl   $0x0,0xc(%eax)
0876853b +0x8b:  pop    %ebp
0876853c +0x8c:  ret
0876853d +0x8d:  nop
0876853e +0x8e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::SHA512::Init @ 0x87684b0

/* TaoCrypt::SHA512::Init() */

void __thiscall TaoCrypt::SHA512::Init(SHA512 *this)

{
  *(undefined4 *)(this + 0x10) = 0xf3bcc908;
  *(undefined4 *)(this + 0x14) = 0x6a09e667;
  *(undefined4 *)(this + 0x18) = 0x84caa73b;
  *(undefined4 *)(this + 0x1c) = 0xbb67ae85;
  *(undefined4 *)(this + 0x20) = 0xfe94f82b;
  *(undefined4 *)(this + 0x24) = 0x3c6ef372;
  *(undefined4 *)(this + 0x28) = 0x5f1d36f1;
  *(undefined4 *)(this + 0x2c) = 0xa54ff53a;
  *(undefined4 *)(this + 0x30) = 0xade682d1;
  *(undefined4 *)(this + 0x34) = 0x510e527f;
  *(undefined4 *)(this + 0x38) = 0x2b3e6c1f;
  *(undefined4 *)(this + 0x3c) = 0x9b05688c;
  *(undefined4 *)(this + 0x40) = 0xfb41bd6b;
  *(undefined4 *)(this + 0x44) = 0x1f83d9ab;
  *(undefined4 *)(this + 0x48) = 0x137e2179;
  *(undefined4 *)(this + 0x4c) = 0x5be0cd19;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}
```
