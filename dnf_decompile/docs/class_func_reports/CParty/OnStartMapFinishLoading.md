# OnStartMapFinishLoading

`_ZN6CParty23OnStartMapFinishLoadingEP5CUser`

`CParty::OnStartMapFinishLoading(CUser*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b170a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b170a  _ZN6CParty23OnStartMapFinishLoadingEP5CUser
#           CParty::OnStartMapFinishLoading(CUser*)
# range [0x085b170a, 0x085b17a3]
085b170a +0x00:  push   %ebp
085b170b +0x01:  mov    %esp,%ebp
085b170d +0x03:  sub    $0x28,%esp
085b1710 +0x06:  mov    0x8(%ebp),%eax
085b1713 +0x09:  add    $0xb24,%eax
085b1718 +0x0e:  mov    %eax,(%esp)
085b171b +0x11:  call   080fdcfc <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x28>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x28
085b1720 +0x16:  test   %eax,%eax
085b1722 +0x18:  setne  %al
085b1725 +0x1b:  test   %al,%al
085b1727 +0x1d:  je     085b1789 <+0x7f>
085b1729 +0x1f:  mov    0x8(%ebp),%eax
085b172c +0x22:  add    $0xb24,%eax
085b1731 +0x27:  mov    %eax,(%esp)
085b1734 +0x2a:  call   080fdcfc <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x28>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x28
085b1739 +0x2f:  mov    0xc(%ebp),%edx
085b173c +0x32:  mov    %edx,0x8(%esp)
085b1740 +0x36:  mov    %eax,0x4(%esp)
085b1744 +0x3a:  mov    0x8(%ebp),%eax
085b1747 +0x3d:  mov    %eax,(%esp)
085b174a +0x40:  call   0859fcfc <_ZN6CParty22do_after_dungeon_startEPK8CDungeonP5CUser>  ; CParty::do_after_dungeon_start(CDungeon const*, CUser*)
085b174f +0x45:  test   %eax,%eax
085b1751 +0x47:  setne  %al
085b1754 +0x4a:  test   %al,%al
085b1756 +0x4c:  je     085b1789 <+0x7f>
085b1758 +0x4e:  movl   $0x0,0x10(%esp)
085b1760 +0x56:  movl   $0x0,0xc(%esp)
085b1768 +0x5e:  movl   $0x0,0x8(%esp)
085b1770 +0x66:  mov    0xc(%ebp),%eax
085b1773 +0x69:  mov    %eax,0x4(%esp)
085b1777 +0x6d:  mov    0x8(%ebp),%eax
085b177a +0x70:  mov    %eax,(%esp)
085b177d +0x73:  call   085b2baa <_ZN6CParty11giveup_gameEP5CUserbbb>  ; CParty::giveup_game(CUser*, bool, bool, bool)
085b1782 +0x78:  mov    $0x0,%eax
085b1787 +0x7d:  jmp    085b17a1 <+0x97>
085b1789 +0x7f:  movl   $0x28,0x4(%esp)
085b1791 +0x87:  mov    0xc(%ebp),%eax
085b1794 +0x8a:  mov    %eax,(%esp)
085b1797 +0x8d:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
085b179c +0x92:  mov    $0x1,%eax
085b17a1 +0x97:  leave
085b17a2 +0x98:  ret
085b17a3 +0x99:  nop
```

## 反编译 C

```c
// CParty::OnStartMapFinishLoading @ 0x85b170a

/* CParty::OnStartMapFinishLoading(CUser*) */

undefined4 __thiscall CParty::OnStartMapFinishLoading(CParty *this,CUser *param_1)

{
  int iVar1;
  CDungeon *pCVar2;
  
  iVar1 = CBattle_Field::GetDungeon((CBattle_Field *)(this + 0xb24));
  if (iVar1 != 0) {
    pCVar2 = (CDungeon *)CBattle_Field::GetDungeon((CBattle_Field *)(this + 0xb24));
    iVar1 = do_after_dungeon_start(this,pCVar2,param_1);
    if (iVar1 != 0) {
      giveup_game(this,param_1,false,false,false);
      return 0;
    }
  }
  CUser::SendCmdOkPacket(param_1,0x28);
  return 1;
}
```
