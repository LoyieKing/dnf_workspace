# Init

`_ZN8TaoCrypt3MD44InitEv`

`TaoCrypt::MD4::Init()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::MD4` | `0x08765990` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08765990  _ZN8TaoCrypt3MD44InitEv
#           TaoCrypt::MD4::Init()
# range [0x08765990, 0x087659ca]
08765990 +0x00:  push   %ebp
08765991 +0x01:  mov    %esp,%ebp
08765993 +0x03:  mov    0x8(%ebp),%eax
08765996 +0x06:  movl   $0x67452301,0x10(%eax)
0876599d +0x0d:  movl   $0xefcdab89,0x14(%eax)
087659a4 +0x14:  movl   $0x98badcfe,0x18(%eax)
087659ab +0x1b:  movl   $0x10325476,0x1c(%eax)
087659b2 +0x22:  movl   $0x0,0x4(%eax)
087659b9 +0x29:  movl   $0x0,0x8(%eax)
087659c0 +0x30:  movl   $0x0,0xc(%eax)
087659c7 +0x37:  pop    %ebp
087659c8 +0x38:  ret
087659c9 +0x39:  nop
087659ca +0x3a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TaoCrypt::MD4::Init @ 0x8765990

/* TaoCrypt::MD4::Init() */

void __thiscall TaoCrypt::MD4::Init(MD4 *this)

{
  *(undefined4 *)(this + 0x10) = 0x67452301;
  *(undefined4 *)(this + 0x14) = 0xefcdab89;
  *(undefined4 *)(this + 0x18) = 0x98badcfe;
  *(undefined4 *)(this + 0x1c) = 0x10325476;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}
```
