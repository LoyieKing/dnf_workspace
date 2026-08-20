# check_team_pvp

`_ZN8PvP_Room14check_team_pvpEv`

`PvP_Room::check_team_pvp()`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d6680` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d6680  _ZN8PvP_Room14check_team_pvpEv
#           PvP_Room::check_team_pvp()
# range [0x085d6680, 0x085d6773]
085d6680 +0x00:  push   %ebp
085d6681 +0x01:  mov    %esp,%ebp
085d6683 +0x03:  sub    $0x28,%esp
085d6686 +0x06:  mov    0x8(%ebp),%eax
085d6689 +0x09:  mov    0x4(%eax),%eax
085d668c +0x0c:  cmp    $0x2,%eax
085d668f +0x0f:  je     085d66b1 <+0x31>
085d6691 +0x11:  mov    0x8(%ebp),%eax
085d6694 +0x14:  mov    0x4(%eax),%eax
085d6697 +0x17:  cmp    $0x3,%eax
085d669a +0x1a:  je     085d66b1 <+0x31>
085d669c +0x1c:  mov    0x8(%ebp),%eax
085d669f +0x1f:  mov    0x4(%eax),%eax
085d66a2 +0x22:  cmp    $0x5,%eax
085d66a5 +0x25:  je     085d66b1 <+0x31>
085d66a7 +0x27:  mov    $0x1,%eax
085d66ac +0x2c:  jmp    085d6771 <+0xf1>
085d66b1 +0x31:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085d66b6 +0x36:  mov    %eax,(%esp)
085d66b9 +0x39:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
085d66be +0x3e:  cmp    $0x7,%eax
085d66c1 +0x41:  sete   %al
085d66c4 +0x44:  test   %al,%al
085d66c6 +0x46:  je     085d66d2 <+0x52>
085d66c8 +0x48:  mov    $0x1,%eax
085d66cd +0x4d:  jmp    085d6771 <+0xf1>
085d66d2 +0x52:  movl   $0x0,-0x14(%ebp)
085d66d9 +0x59:  movl   $0x0,-0x10(%ebp)
085d66e0 +0x60:  movl   $0x0,-0xc(%ebp)
085d66e7 +0x67:  jmp    085d6752 <+0xd2>
085d66e9 +0x69:  mov    -0xc(%ebp),%edx
085d66ec +0x6c:  mov    0x8(%ebp),%eax
085d66ef +0x6f:  add    $0xc,%edx
085d66f2 +0x72:  mov    (%eax,%edx,4),%eax
085d66f5 +0x75:  test   %eax,%eax
085d66f7 +0x77:  je     085d6719 <+0x99>
085d66f9 +0x79:  mov    -0xc(%ebp),%eax
085d66fc +0x7c:  mov    %eax,0x4(%esp)
085d6700 +0x80:  mov    0x8(%ebp),%eax
085d6703 +0x83:  mov    %eax,(%esp)
085d6706 +0x86:  call   085da046 <_ZN8PvP_Room13IsPvpObserverEi>  ; PvP_Room::IsPvpObserver(int)
085d670b +0x8b:  xor    $0x1,%eax
085d670e +0x8e:  test   %al,%al
085d6710 +0x90:  je     085d6719 <+0x99>
085d6712 +0x92:  mov    $0x1,%eax
085d6717 +0x97:  jmp    085d671e <+0x9e>
085d6719 +0x99:  mov    $0x0,%eax
085d671e +0x9e:  test   %al,%al
085d6720 +0xa0:  je     085d674e <+0xce>
085d6722 +0xa2:  mov    -0xc(%ebp),%edx
085d6725 +0xa5:  mov    0x8(%ebp),%eax
085d6728 +0xa8:  add    $0x14,%edx
085d672b +0xab:  mov    (%eax,%edx,4),%eax
085d672e +0xae:  cmp    $0x1,%eax
085d6731 +0xb1:  jne    085d6739 <+0xb9>
085d6733 +0xb3:  addl   $0x1,-0x14(%ebp)
085d6737 +0xb7:  jmp    085d674e <+0xce>
085d6739 +0xb9:  mov    -0xc(%ebp),%edx
085d673c +0xbc:  mov    0x8(%ebp),%eax
085d673f +0xbf:  add    $0x14,%edx
085d6742 +0xc2:  mov    (%eax,%edx,4),%eax
085d6745 +0xc5:  cmp    $0x2,%eax
085d6748 +0xc8:  jne    085d674e <+0xce>
085d674a +0xca:  addl   $0x1,-0x10(%ebp)
085d674e +0xce:  addl   $0x1,-0xc(%ebp)
085d6752 +0xd2:  cmpl   $0x7,-0xc(%ebp)
085d6756 +0xd6:  setle  %al
085d6759 +0xd9:  test   %al,%al
085d675b +0xdb:  jne    085d66e9 <+0x69>
085d675d +0xdd:  mov    -0x10(%ebp),%eax
085d6760 +0xe0:  cmp    -0x14(%ebp),%eax
085d6763 +0xe3:  je     085d676c <+0xec>
085d6765 +0xe5:  mov    $0x0,%eax
085d676a +0xea:  jmp    085d6771 <+0xf1>
085d676c +0xec:  mov    $0x1,%eax
085d6771 +0xf1:  leave
085d6772 +0xf2:  ret
085d6773 +0xf3:  nop
```

## 反编译 C

```c
// PvP_Room::check_team_pvp @ 0x85d6680

/* PvP_Room::check_team_pvp() */

undefined4 __thiscall PvP_Room::check_team_pvp(PvP_Room *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  GameWorld *this_00;
  int iVar4;
  int local_18;
  int local_14;
  int local_10;
  
  if (((*(int *)(this + 4) == 2) || (*(int *)(this + 4) == 3)) || (*(int *)(this + 4) == 5)) {
    this_00 = (GameWorld *)G_GameWorld();
    iVar4 = GameWorld::GetChannelType(this_00);
    if (iVar4 == 7) {
      uVar3 = 1;
    }
    else {
      local_18 = 0;
      local_14 = 0;
      for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
        if (*(int *)(this + (local_10 + 0xc) * 4) == 0) {
LAB_085d6719:
          bVar1 = false;
        }
        else {
          cVar2 = IsPvpObserver(this,local_10);
          if (cVar2 == '\x01') goto LAB_085d6719;
          bVar1 = true;
        }
        if (bVar1) {
          if (*(int *)(this + (local_10 + 0x14) * 4) == 1) {
            local_18 = local_18 + 1;
          }
          else if (*(int *)(this + (local_10 + 0x14) * 4) == 2) {
            local_14 = local_14 + 1;
          }
        }
      }
      if (local_14 == local_18) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}
```
