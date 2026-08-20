# Teleport

`_ZN8TeleportC1Ev`

`Teleport::Teleport()`

| 类 | 地址 |
|---|---|
| `Teleport` | `0x08283c30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08283c30  _ZN8TeleportC1Ev
#           Teleport::Teleport()
# range [0x08283c30, 0x08283c59]
08283c30 +0x00:  push   %ebp
08283c31 +0x01:  mov    %esp,%ebp
08283c33 +0x03:  sub    $0x18,%esp
08283c36 +0x06:  mov    0x8(%ebp),%eax
08283c39 +0x09:  movl   $&_ZTV8Teleport+0x8,(%eax)
08283c3f +0x0f:  mov    0x8(%ebp),%eax
08283c42 +0x12:  add    $0x4,%eax
08283c45 +0x15:  mov    %eax,(%esp)
08283c48 +0x18:  call   0822d764 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2e0e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2e0e
08283c4d +0x1d:  mov    0x8(%ebp),%eax
08283c50 +0x20:  movl   $0x0,0x10(%eax)
08283c57 +0x27:  leave
08283c58 +0x28:  ret
08283c59 +0x29:  nop
```

## 反编译 C

```c
// Teleport::Teleport @ 0x8283c30

/* Teleport::Teleport() */

void __thiscall Teleport::Teleport(Teleport *this)

{
  *(undefined ***)this = &PTR__Teleport_08c0b248;
  stPartyTelePort::reset((stPartyTelePort *)(this + 4));
  *(undefined4 *)(this + 0x10) = 0;
  return;
}
```
