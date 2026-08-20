# Init

`_ZN8TaoCrypt6SHA2244InitEv`

`TaoCrypt::SHA224::Init()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::SHA224` | `0x08768450` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08768450  _ZN8TaoCrypt6SHA2244InitEv
#           TaoCrypt::SHA224::Init()
# range [0x08768450, 0x087684a9]
08768450 +0x00:  push   %ebp
08768451 +0x01:  mov    %esp,%ebp
08768453 +0x03:  mov    0x8(%ebp),%eax
08768456 +0x06:  movl   $0xc1059ed8,0x10(%eax)
0876845d +0x0d:  movl   $0x367cd507,0x14(%eax)
08768464 +0x14:  movl   $0x3070dd17,0x18(%eax)
0876846b +0x1b:  movl   $0xf70e5939,0x1c(%eax)
08768472 +0x22:  movl   $0xffc00b31,0x20(%eax)
08768479 +0x29:  movl   $0x68581511,0x24(%eax)
08768480 +0x30:  movl   $0x64f98fa7,0x28(%eax)
08768487 +0x37:  movl   $0xbefa4fa4,0x2c(%eax)
0876848e +0x3e:  movl   $0x0,0x4(%eax)
08768495 +0x45:  movl   $0x0,0x8(%eax)
0876849c +0x4c:  movl   $0x0,0xc(%eax)
087684a3 +0x53:  pop    %ebp
087684a4 +0x54:  ret
087684a5 +0x55:  nop
087684a6 +0x56:  lea    0x0(%esi),%esi
087684a9 +0x59:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::SHA224::Init @ 0x8768450

/* TaoCrypt::SHA224::Init() */

void __thiscall TaoCrypt::SHA224::Init(SHA224 *this)

{
  *(undefined4 *)(this + 0x10) = 0xc1059ed8;
  *(undefined4 *)(this + 0x14) = 0x367cd507;
  *(undefined4 *)(this + 0x18) = 0x3070dd17;
  *(undefined4 *)(this + 0x1c) = 0xf70e5939;
  *(undefined4 *)(this + 0x20) = 0xffc00b31;
  *(undefined4 *)(this + 0x24) = 0x68581511;
  *(undefined4 *)(this + 0x28) = 0x64f98fa7;
  *(undefined4 *)(this + 0x2c) = 0xbefa4fa4;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}
```
