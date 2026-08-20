# CPartyTelePort

`_ZN14CPartyTelePortC1Ev`

`CPartyTelePort::CPartyTelePort()`

| 类 | 地址 |
|---|---|
| `CPartyTelePort` | `0x085bb832` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bb832  _ZN14CPartyTelePortC1Ev
#           CPartyTelePort::CPartyTelePort()
# range [0x085bb832, 0x085bb847]
085bb832 +0x00:  push   %ebp
085bb833 +0x01:  mov    %esp,%ebp
085bb835 +0x03:  sub    $0x18,%esp
085bb838 +0x06:  mov    0x8(%ebp),%eax
085bb83b +0x09:  add    $0x4,%eax
085bb83e +0x0c:  mov    %eax,(%esp)
085bb841 +0x0f:  call   0822d764 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2e0e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2e0e
085bb846 +0x14:  leave
085bb847 +0x15:  ret
```

## 反编译 C

```c
// CPartyTelePort::CPartyTelePort @ 0x85bb832

/* CPartyTelePort::CPartyTelePort() */

void __thiscall CPartyTelePort::CPartyTelePort(CPartyTelePort *this)

{
  stPartyTelePort::reset((stPartyTelePort *)(this + 4));
  return;
}
```
