# isSecurityServiceUsed

`_ZN5CUser21isSecurityServiceUsedEv`

`CUser::isSecurityServiceUsed()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868866e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868866e  _ZN5CUser21isSecurityServiceUsedEv
#           CUser::isSecurityServiceUsed()
# range [0x0868866e, 0x086886cd]
0868866e +0x00:  push   %ebp
0868866f +0x01:  mov    %esp,%ebp
08688671 +0x03:  sub    $0x18,%esp
08688674 +0x06:  mov    0x8(%ebp),%eax
08688677 +0x09:  mov    %eax,(%esp)
0868867a +0x0c:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
0868867f +0x11:  mov    %eax,(%esp)
08688682 +0x14:  call   0822efda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4684>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4684
08688687 +0x19:  test   %al,%al
08688689 +0x1b:  jne    086886b0 <+0x42>
0868868b +0x1d:  mov    0x8(%ebp),%eax
0868868e +0x20:  mov    %eax,(%esp)
08688691 +0x23:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
08688696 +0x28:  mov    %eax,(%esp)
08688699 +0x2b:  call   0822ef0e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45b8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45b8
0868869e +0x30:  test   %al,%al
086886a0 +0x32:  jne    086886b0 <+0x42>
086886a2 +0x34:  mov    0x8(%ebp),%eax
086886a5 +0x37:  movzbl 0x8e97f(%eax),%eax
086886ac +0x3e:  test   %al,%al
086886ae +0x40:  je     086886b7 <+0x49>
086886b0 +0x42:  mov    $0x1,%eax
086886b5 +0x47:  jmp    086886bc <+0x4e>
086886b7 +0x49:  mov    $0x0,%eax
086886bc +0x4e:  test   %al,%al
086886be +0x50:  je     086886c7 <+0x59>
086886c0 +0x52:  mov    $0x1,%eax
086886c5 +0x57:  jmp    086886cc <+0x5e>
086886c7 +0x59:  mov    $0x0,%eax
086886cc +0x5e:  leave
086886cd +0x5f:  ret
```

## 反编译 C

```c
// CUser::isSecurityServiceUsed @ 0x868866e

/* CUser::isSecurityServiceUsed() */

undefined1 __thiscall CUser::isSecurityServiceUsed(CUser *this)

{
  char cVar1;
  CPad *this_00;
  CSecurityCard *this_01;
  
  this_00 = (CPad *)getPad(this);
  cVar1 = Sanicova::CPad::isActivate(this_00);
  if (cVar1 == '\0') {
    this_01 = (CSecurityCard *)getSecurityCard(this);
    cVar1 = WongWork::CSecurityCard::isActivate(this_01);
    if ((cVar1 == '\0') && (this[0x8e97f] == (CUser)0x0)) {
      return 0;
    }
  }
  return 1;
}
```
