# CheckAccountType

`_ZN21CSecu_ProtectionField16CheckAccountTypeEP5CUserm`

`CSecu_ProtectionField::CheckAccountType(CUser*, unsigned long)`

| 类 | 地址 |
|---|---|
| `CSecu_ProtectionField` | `0x08288ac8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08288ac8  _ZN21CSecu_ProtectionField16CheckAccountTypeEP5CUserm
#           CSecu_ProtectionField::CheckAccountType(CUser*, unsigned long)
# range [0x08288ac8, 0x08288bf1]
08288ac8 +0x000:  push   %ebp
08288ac9 +0x001:  mov    %esp,%ebp
08288acb +0x003:  sub    $0x18,%esp
08288ace +0x006:  cmpl   $0x0,0xc(%ebp)
08288ad2 +0x00a:  jne    08288ade <+0x16>
08288ad4 +0x00c:  mov    $0x1,%eax
08288ad9 +0x011:  jmp    08288bef <+0x127>
08288ade +0x016:  mov    0xc(%ebp),%eax
08288ae1 +0x019:  mov    %eax,(%esp)
08288ae4 +0x01c:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
08288ae9 +0x021:  mov    %eax,(%esp)
08288aec +0x024:  call   0822ef0e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45b8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45b8
08288af1 +0x029:  test   %al,%al
08288af3 +0x02b:  je     08288b4b <+0x83>
08288af5 +0x02d:  mov    0xc(%ebp),%eax
08288af8 +0x030:  mov    %eax,(%esp)
08288afb +0x033:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
08288b00 +0x038:  mov    %eax,(%esp)
08288b03 +0x03b:  call   0822ef26 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45d0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45d0
08288b08 +0x040:  cmp    $0x2,%eax
08288b0b +0x043:  seta   %al
08288b0e +0x046:  test   %al,%al
08288b10 +0x048:  je     08288b1c <+0x54>
08288b12 +0x04a:  mov    $0x7a,%eax
08288b17 +0x04f:  jmp    08288bef <+0x127>
08288b1c +0x054:  mov    0xc(%ebp),%eax
08288b1f +0x057:  mov    %eax,(%esp)
08288b22 +0x05a:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
08288b27 +0x05f:  mov    %eax,(%esp)
08288b2a +0x062:  call   0822ef1a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45c4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45c4
08288b2f +0x067:  xor    $0x1,%eax
08288b32 +0x06a:  test   %al,%al
08288b34 +0x06c:  je     08288bb2 <+0xea>
08288b36 +0x06e:  mov    0xc(%ebp),%eax
08288b39 +0x071:  mov    %eax,(%esp)
08288b3c +0x074:  call   08680706 <_ZN5CUser27sendBackSecurityAuthRequestEv>  ; CUser::sendBackSecurityAuthRequest()
08288b41 +0x079:  mov    $0x7b,%eax
08288b46 +0x07e:  jmp    08288bef <+0x127>
08288b4b +0x083:  mov    0xc(%ebp),%eax
08288b4e +0x086:  mov    %eax,(%esp)
08288b51 +0x089:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08288b56 +0x08e:  mov    %eax,(%esp)
08288b59 +0x091:  call   0822efda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4684>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4684
08288b5e +0x096:  test   %al,%al
08288b60 +0x098:  je     08288bb2 <+0xea>
08288b62 +0x09a:  mov    0xc(%ebp),%eax
08288b65 +0x09d:  mov    %eax,(%esp)
08288b68 +0x0a0:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08288b6d +0x0a5:  mov    %eax,(%esp)
08288b70 +0x0a8:  call   0822ef8e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4638>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4638
08288b75 +0x0ad:  cmp    $0x2,%eax
08288b78 +0x0b0:  setg   %al
08288b7b +0x0b3:  test   %al,%al
08288b7d +0x0b5:  je     08288b86 <+0xbe>
08288b7f +0x0b7:  mov    $0x88,%eax
08288b84 +0x0bc:  jmp    08288bef <+0x127>
08288b86 +0x0be:  mov    0xc(%ebp),%eax
08288b89 +0x0c1:  mov    %eax,(%esp)
08288b8c +0x0c4:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08288b91 +0x0c9:  mov    %eax,(%esp)
08288b94 +0x0cc:  call   0822efe6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4690>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4690
08288b99 +0x0d1:  xor    $0x1,%eax
08288b9c +0x0d4:  test   %al,%al
08288b9e +0x0d6:  je     08288bb2 <+0xea>
08288ba0 +0x0d8:  mov    0xc(%ebp),%eax
08288ba3 +0x0db:  mov    %eax,(%esp)
08288ba6 +0x0de:  call   08680706 <_ZN5CUser27sendBackSecurityAuthRequestEv>  ; CUser::sendBackSecurityAuthRequest()
08288bab +0x0e3:  mov    $0x89,%eax
08288bb0 +0x0e8:  jmp    08288bef <+0x127>
08288bb2 +0x0ea:  mov    0x10(%ebp),%eax
08288bb5 +0x0ed:  and    $0x10,%eax
08288bb8 +0x0f0:  test   %eax,%eax
08288bba +0x0f2:  je     08288bda <+0x112>
08288bbc +0x0f4:  movl   $0x10,0x4(%esp)
08288bc4 +0x0fc:  mov    0xc(%ebp),%eax
08288bc7 +0x0ff:  mov    %eax,(%esp)
08288bca +0x102:  call   0868991c <_ZN5CUser17isTradePunishTypeEi>  ; CUser::isTradePunishType(int)
08288bcf +0x107:  test   %al,%al
08288bd1 +0x109:  je     08288bda <+0x112>
08288bd3 +0x10b:  mov    $0x1,%eax
08288bd8 +0x110:  jmp    08288bdf <+0x117>
08288bda +0x112:  mov    $0x0,%eax
08288bdf +0x117:  test   %al,%al
08288be1 +0x119:  je     08288bea <+0x122>
08288be3 +0x11b:  mov    $0x72,%eax
08288be8 +0x120:  jmp    08288bef <+0x127>
08288bea +0x122:  mov    $0x0,%eax
08288bef +0x127:  leave
08288bf0 +0x128:  ret
08288bf1 +0x129:  nop
```

## 反编译 C

```c
// CSecu_ProtectionField::CheckAccountType @ 0x8288ac8

/* CSecu_ProtectionField::CheckAccountType(CUser*, unsigned long) */

undefined4 __thiscall
CSecu_ProtectionField::CheckAccountType(CSecu_ProtectionField *this,CUser *param_1,ulong param_2)

{
  bool bVar1;
  char cVar2;
  CSecurityCard *pCVar3;
  uint uVar4;
  CPad *pCVar5;
  int iVar6;
  undefined4 uVar7;
  
  if (param_1 == (CUser *)0x0) {
    return 1;
  }
  pCVar3 = (CSecurityCard *)CUser::getSecurityCard(param_1);
  cVar2 = WongWork::CSecurityCard::isActivate(pCVar3);
  if (cVar2 == '\0') {
    pCVar5 = (CPad *)CUser::getPad(param_1);
    cVar2 = Sanicova::CPad::isActivate(pCVar5);
    if (cVar2 != '\0') {
      pCVar5 = (CPad *)CUser::getPad(param_1);
      iVar6 = Sanicova::CPad::getFailCnt(pCVar5);
      if (2 < iVar6) {
        return 0x88;
      }
      pCVar5 = (CPad *)CUser::getPad(param_1);
      cVar2 = Sanicova::CPad::isCertified(pCVar5);
      if (cVar2 != '\x01') {
        CUser::sendBackSecurityAuthRequest(param_1);
        return 0x89;
      }
    }
  }
  else {
    pCVar3 = (CSecurityCard *)CUser::getSecurityCard(param_1);
    uVar4 = WongWork::CSecurityCard::getFailCnt(pCVar3);
    if (2 < uVar4) {
      return 0x7a;
    }
    pCVar3 = (CSecurityCard *)CUser::getSecurityCard(param_1);
    cVar2 = WongWork::CSecurityCard::isCertified(pCVar3);
    if (cVar2 != '\x01') {
      CUser::sendBackSecurityAuthRequest(param_1);
      return 0x7b;
    }
  }
  if (((param_2 & 0x10) == 0) || (cVar2 = CUser::isTradePunishType(param_1,0x10), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = 0x72;
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}
```
