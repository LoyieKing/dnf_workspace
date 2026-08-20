# Init

`_ZN8TaoCrypt9RIPEMD1604InitEv`

`TaoCrypt::RIPEMD160::Init()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::RIPEMD160` | `0x087a8ce0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a8ce0  _ZN8TaoCrypt9RIPEMD1604InitEv
#           TaoCrypt::RIPEMD160::Init()
# range [0x087a8ce0, 0x087a8d1f]
087a8ce0 +0x00:  push   %ebp
087a8ce1 +0x01:  mov    %esp,%ebp
087a8ce3 +0x03:  mov    0x8(%ebp),%eax
087a8ce6 +0x06:  movl   $0x67452301,0x10(%eax)
087a8ced +0x0d:  movl   $0xefcdab89,0x14(%eax)
087a8cf4 +0x14:  movl   $0x98badcfe,0x18(%eax)
087a8cfb +0x1b:  movl   $0x10325476,0x1c(%eax)
087a8d02 +0x22:  movl   $0xc3d2e1f0,0x20(%eax)
087a8d09 +0x29:  movl   $0x0,0x4(%eax)
087a8d10 +0x30:  movl   $0x0,0x8(%eax)
087a8d17 +0x37:  movl   $0x0,0xc(%eax)
087a8d1e +0x3e:  pop    %ebp
087a8d1f +0x3f:  ret
```

## 反编译 C

```c
// TaoCrypt::RIPEMD160::Init @ 0x87a8ce0

/* TaoCrypt::RIPEMD160::Init() */

void __thiscall TaoCrypt::RIPEMD160::Init(RIPEMD160 *this)

{
  *(undefined4 *)(this + 0x10) = 0x67452301;
  *(undefined4 *)(this + 0x14) = 0xefcdab89;
  *(undefined4 *)(this + 0x18) = 0x98badcfe;
  *(undefined4 *)(this + 0x1c) = 0x10325476;
  *(undefined4 *)(this + 0x20) = 0xc3d2e1f0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}
```
