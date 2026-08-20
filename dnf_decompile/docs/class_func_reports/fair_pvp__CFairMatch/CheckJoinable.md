# CheckJoinable

`_ZN8fair_pvp10CFairMatch13CheckJoinableEP8PvP_RoomP5CUser`

`fair_pvp::CFairMatch::CheckJoinable(PvP_Room*, CUser*)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08562a6e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08562a6e  _ZN8fair_pvp10CFairMatch13CheckJoinableEP8PvP_RoomP5CUser
#           fair_pvp::CFairMatch::CheckJoinable(PvP_Room*, CUser*)
# range [0x08562a6e, 0x08562b77]
08562a6e +0x000:  push   %ebp
08562a6f +0x001:  mov    %esp,%ebp
08562a71 +0x003:  push   %ebx
08562a72 +0x004:  sub    $0x14,%esp
08562a75 +0x007:  mov    0x10(%ebp),%eax
08562a78 +0x00a:  mov    %eax,(%esp)
08562a7b +0x00d:  call   08562cfe <_ZN8fair_pvp10CFairMatch28CheckUnusableEquipmentInUserEP5CUser>  ; fair_pvp::CFairMatch::CheckUnusableEquipmentInUser(CUser*)
08562a80 +0x012:  xor    $0x1,%eax
08562a83 +0x015:  test   %al,%al
08562a85 +0x017:  je     08562a91 <+0x23>
08562a87 +0x019:  mov    $0x1,%eax
08562a8c +0x01e:  jmp    08562b71 <+0x103>
08562a91 +0x023:  mov    0xc(%ebp),%eax
08562a94 +0x026:  mov    %eax,(%esp)
08562a97 +0x029:  call   085d68a0 <_ZN8PvP_Room16get_player_countEv>  ; PvP_Room::get_player_count()
08562a9c +0x02e:  mov    %eax,%ebx
08562a9e +0x030:  call   08562834 <_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv>  ; fair_pvp::CFairMatch::GetPlayCountPerOneTeam()
08562aa3 +0x035:  movzbl %al,%eax
08562aa6 +0x038:  add    %eax,%eax
08562aa8 +0x03a:  cmp    %eax,%ebx
08562aaa +0x03c:  setge  %al
08562aad +0x03f:  test   %al,%al
08562aaf +0x041:  je     08562abb <+0x4d>
08562ab1 +0x043:  mov    $0x4,%eax
08562ab6 +0x048:  jmp    08562b71 <+0x103>
08562abb +0x04d:  mov    0x8(%ebp),%eax
08562abe +0x050:  add    $0x1c,%eax
08562ac1 +0x053:  mov    %eax,(%esp)
08562ac4 +0x056:  call   0856270c <_ZNK8fair_pvp13TeamInfoThird4sizeEv>  ; fair_pvp::TeamInfoThird::size() const
08562ac9 +0x05b:  mov    %eax,%ebx
08562acb +0x05d:  mov    0x8(%ebp),%eax
08562ace +0x060:  add    $0x64,%eax
08562ad1 +0x063:  mov    %eax,(%esp)
08562ad4 +0x066:  call   0856270c <_ZNK8fair_pvp13TeamInfoThird4sizeEv>  ; fair_pvp::TeamInfoThird::size() const
08562ad9 +0x06b:  add    %eax,%ebx
08562adb +0x06d:  call   08562834 <_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv>  ; fair_pvp::CFairMatch::GetPlayCountPerOneTeam()
08562ae0 +0x072:  movzbl %al,%eax
08562ae3 +0x075:  add    %eax,%eax
08562ae5 +0x077:  cmp    %eax,%ebx
08562ae7 +0x079:  setg   %al
08562aea +0x07c:  test   %al,%al
08562aec +0x07e:  je     08562af5 <+0x87>
08562aee +0x080:  mov    $0x4,%eax
08562af3 +0x085:  jmp    08562b71 <+0x103>
08562af5 +0x087:  mov    0x8(%ebp),%eax
08562af8 +0x08a:  mov    0x4(%eax),%eax
08562afb +0x08d:  cmp    $0x5,%eax
08562afe +0x090:  ja     08562b6c <+0xfe>
08562b00 +0x092:  mov    &data#0e3739e4(.rodata)(,%eax,4),%eax
08562b07 +0x099:  jmp    *%eax
08562b09 +0x09b:  mov    0x10(%ebp),%eax
08562b0c +0x09e:  mov    %eax,0x8(%esp)
08562b10 +0x0a2:  mov    0xc(%ebp),%eax
08562b13 +0x0a5:  mov    %eax,0x4(%esp)
08562b17 +0x0a9:  mov    0x8(%ebp),%eax
08562b1a +0x0ac:  mov    %eax,(%esp)
08562b1d +0x0af:  call   085629e8 <_ZN8fair_pvp10CFairMatch14_CheckSameTeamEP8PvP_RoomP5CUser>  ; fair_pvp::CFairMatch::_CheckSameTeam(PvP_Room*, CUser*)
08562b22 +0x0b4:  xor    $0x1,%eax
08562b25 +0x0b7:  test   %al,%al
08562b27 +0x0b9:  je     08562b30 <+0xc2>
08562b29 +0x0bb:  mov    $0x4,%eax
08562b2e +0x0c0:  jmp    08562b71 <+0x103>
08562b30 +0x0c2:  mov    0x10(%ebp),%eax
08562b33 +0x0c5:  mov    %eax,0x8(%esp)
08562b37 +0x0c9:  mov    0xc(%ebp),%eax
08562b3a +0x0cc:  mov    %eax,0x4(%esp)
08562b3e +0x0d0:  mov    0x8(%ebp),%eax
08562b41 +0x0d3:  mov    %eax,(%esp)
08562b44 +0x0d6:  call   085629f2 <_ZN8fair_pvp10CFairMatch14_CheckObserverEP8PvP_RoomP5CUser>  ; fair_pvp::CFairMatch::_CheckObserver(PvP_Room*, CUser*)
08562b49 +0x0db:  xor    $0x1,%eax
08562b4c +0x0de:  test   %al,%al
08562b4e +0x0e0:  je     08562b57 <+0xe9>
08562b50 +0x0e2:  mov    $0x4,%eax
08562b55 +0x0e7:  jmp    08562b71 <+0x103>
08562b57 +0x0e9:  mov    $0x0,%eax
08562b5c +0x0ee:  jmp    08562b71 <+0x103>
08562b5e +0x0f0:  mov    $0x0,%eax
08562b63 +0x0f5:  jmp    08562b71 <+0x103>
08562b65 +0x0f7:  mov    $0x4,%eax
08562b6a +0x0fc:  jmp    08562b71 <+0x103>
08562b6c +0x0fe:  mov    $0x4,%eax
08562b71 +0x103:  add    $0x14,%esp
08562b74 +0x106:  pop    %ebx
08562b75 +0x107:  pop    %ebp
08562b76 +0x108:  ret
08562b77 +0x109:  nop
```

## 反编译 C

```c
// fair_pvp::CFairMatch::CheckJoinable @ 0x8562a6e

/* fair_pvp::CFairMatch::CheckJoinable(PvP_Room*, CUser*) */

undefined4 __thiscall
fair_pvp::CFairMatch::CheckJoinable(CFairMatch *this,PvP_Room *param_1,CUser *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  cVar1 = CheckUnusableEquipmentInUser(param_2);
  if (cVar1 == '\x01') {
    iVar3 = PvP_Room::get_player_count(param_1);
    uVar4 = GetPlayCountPerOneTeam();
    if (iVar3 < (int)((uVar4 & 0xff) * 2)) {
      iVar3 = TeamInfoThird::size((TeamInfoThird *)(this + 0x1c));
      iVar5 = TeamInfoThird::size((TeamInfoThird *)(this + 100));
      uVar4 = GetPlayCountPerOneTeam();
      if ((int)((uVar4 & 0xff) * 2) < iVar3 + iVar5) {
        uVar2 = 4;
      }
      else {
        switch(*(undefined4 *)(this + 4)) {
        case 0:
          cVar1 = _CheckSameTeam((PvP_Room *)this,(CUser *)param_1);
          if (cVar1 == '\x01') {
            cVar1 = _CheckObserver((PvP_Room *)this,(CUser *)param_1);
            if (cVar1 == '\x01') {
              uVar2 = 0;
            }
            else {
              uVar2 = 4;
            }
          }
          else {
            uVar2 = 4;
          }
          break;
        case 1:
        case 4:
        case 5:
          uVar2 = 4;
          break;
        default:
          uVar2 = 4;
          break;
        case 3:
          uVar2 = 0;
        }
      }
    }
    else {
      uVar2 = 4;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
```
