# Init

`_ZN8TaoCrypt3MD54InitEv`

`TaoCrypt::MD5::Init()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::MD5` | `0x087661d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087661d0  _ZN8TaoCrypt3MD54InitEv
#           TaoCrypt::MD5::Init()
# range [0x087661d0, 0x0876620a]
087661d0 +0x00:  push   %ebp
087661d1 +0x01:  mov    %esp,%ebp
087661d3 +0x03:  mov    0x8(%ebp),%eax
087661d6 +0x06:  movl   $0x67452301,0x10(%eax)
087661dd +0x0d:  movl   $0xefcdab89,0x14(%eax)
087661e4 +0x14:  movl   $0x98badcfe,0x18(%eax)
087661eb +0x1b:  movl   $0x10325476,0x1c(%eax)
087661f2 +0x22:  movl   $0x0,0x4(%eax)
087661f9 +0x29:  movl   $0x0,0x8(%eax)
08766200 +0x30:  movl   $0x0,0xc(%eax)
08766207 +0x37:  pop    %ebp
08766208 +0x38:  ret
08766209 +0x39:  nop
0876620a +0x3a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TaoCrypt::MD5::Init @ 0x87661d0

/* TaoCrypt::MD5::Init() */

void __thiscall TaoCrypt::MD5::Init(MD5 *this)

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
