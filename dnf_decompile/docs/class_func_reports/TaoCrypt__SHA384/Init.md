# Init

`_ZN8TaoCrypt6SHA3844InitEv`

`TaoCrypt::SHA384::Init()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::SHA384` | `0x08768540` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08768540  _ZN8TaoCrypt6SHA3844InitEv
#           TaoCrypt::SHA384::Init()
# range [0x08768540, 0x087685ce]
08768540 +0x00:  push   %ebp
08768541 +0x01:  mov    %esp,%ebp
08768543 +0x03:  mov    0x8(%ebp),%eax
08768546 +0x06:  movl   $0xc1059ed8,0x10(%eax)
0876854d +0x0d:  movl   $0xcbbb9d5d,0x14(%eax)
08768554 +0x14:  movl   $0x367cd507,0x18(%eax)
0876855b +0x1b:  movl   $0x629a292a,0x1c(%eax)
08768562 +0x22:  movl   $0x3070dd17,0x20(%eax)
08768569 +0x29:  movl   $0x9159015a,0x24(%eax)
08768570 +0x30:  movl   $0xf70e5939,0x28(%eax)
08768577 +0x37:  movl   $0x152fecd8,0x2c(%eax)
0876857e +0x3e:  movl   $0xffc00b31,0x30(%eax)
08768585 +0x45:  movl   $0x67332667,0x34(%eax)
0876858c +0x4c:  movl   $0x68581511,0x38(%eax)
08768593 +0x53:  movl   $0x8eb44a87,0x3c(%eax)
0876859a +0x5a:  movl   $0x64f98fa7,0x40(%eax)
087685a1 +0x61:  movl   $0xdb0c2e0d,0x44(%eax)
087685a8 +0x68:  movl   $0xbefa4fa4,0x48(%eax)
087685af +0x6f:  movl   $0x47b5481d,0x4c(%eax)
087685b6 +0x76:  movl   $0x0,0x4(%eax)
087685bd +0x7d:  movl   $0x0,0x8(%eax)
087685c4 +0x84:  movl   $0x0,0xc(%eax)
087685cb +0x8b:  pop    %ebp
087685cc +0x8c:  ret
087685cd +0x8d:  nop
087685ce +0x8e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::SHA384::Init @ 0x8768540

/* TaoCrypt::SHA384::Init() */

void __thiscall TaoCrypt::SHA384::Init(SHA384 *this)

{
  *(undefined4 *)(this + 0x10) = 0xc1059ed8;
  *(undefined4 *)(this + 0x14) = 0xcbbb9d5d;
  *(undefined4 *)(this + 0x18) = 0x367cd507;
  *(undefined4 *)(this + 0x1c) = 0x629a292a;
  *(undefined4 *)(this + 0x20) = 0x3070dd17;
  *(undefined4 *)(this + 0x24) = 0x9159015a;
  *(undefined4 *)(this + 0x28) = 0xf70e5939;
  *(undefined4 *)(this + 0x2c) = 0x152fecd8;
  *(undefined4 *)(this + 0x30) = 0xffc00b31;
  *(undefined4 *)(this + 0x34) = 0x67332667;
  *(undefined4 *)(this + 0x38) = 0x68581511;
  *(undefined4 *)(this + 0x3c) = 0x8eb44a87;
  *(undefined4 *)(this + 0x40) = 0x64f98fa7;
  *(undefined4 *)(this + 0x44) = 0xdb0c2e0d;
  *(undefined4 *)(this + 0x48) = 0xbefa4fa4;
  *(undefined4 *)(this + 0x4c) = 0x47b5481d;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}
```
