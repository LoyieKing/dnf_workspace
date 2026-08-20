# CheckJoinable

`_ZN18online_preliminary18COnlinePreliminary13CheckJoinableEP8PvP_RoomP5CUser`

`online_preliminary::COnlinePreliminary::CheckJoinable(PvP_Room*, CUser*)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x085607b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085607b2  _ZN18online_preliminary18COnlinePreliminary13CheckJoinableEP8PvP_RoomP5CUser
#           online_preliminary::COnlinePreliminary::CheckJoinable(PvP_Room*, CUser*)
# range [0x085607b2, 0x085608bb]
085607b2 +0x000:  push   %ebp
085607b3 +0x001:  mov    %esp,%ebp
085607b5 +0x003:  push   %ebx
085607b6 +0x004:  sub    $0x14,%esp
085607b9 +0x007:  mov    0x10(%ebp),%eax
085607bc +0x00a:  mov    %eax,(%esp)
085607bf +0x00d:  call   08560a42 <_ZN18online_preliminary18COnlinePreliminary28CheckUnusableEquipmentInUserEP5CUser>  ; online_preliminary::COnlinePreliminary::CheckUnusableEquipmentInUser(CUser*)
085607c4 +0x012:  xor    $0x1,%eax
085607c7 +0x015:  test   %al,%al
085607c9 +0x017:  je     085607d5 <+0x23>
085607cb +0x019:  mov    $0x1,%eax
085607d0 +0x01e:  jmp    085608b5 <+0x103>
085607d5 +0x023:  mov    0xc(%ebp),%eax
085607d8 +0x026:  mov    %eax,(%esp)
085607db +0x029:  call   085d68a0 <_ZN8PvP_Room16get_player_countEv>  ; PvP_Room::get_player_count()
085607e0 +0x02e:  mov    %eax,%ebx
085607e2 +0x030:  call   0855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>  ; online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam()
085607e7 +0x035:  movzbl %al,%eax
085607ea +0x038:  add    %eax,%eax
085607ec +0x03a:  cmp    %eax,%ebx
085607ee +0x03c:  setge  %al
085607f1 +0x03f:  test   %al,%al
085607f3 +0x041:  je     085607ff <+0x4d>
085607f5 +0x043:  mov    $0x4,%eax
085607fa +0x048:  jmp    085608b5 <+0x103>
085607ff +0x04d:  mov    0x8(%ebp),%eax
08560802 +0x050:  add    $0x1c,%eax
08560805 +0x053:  mov    %eax,(%esp)
08560808 +0x056:  call   0855feaa <_ZNK14TeamInfoSecond4sizeEv>  ; TeamInfoSecond::size() const
0856080d +0x05b:  mov    %eax,%ebx
0856080f +0x05d:  mov    0x8(%ebp),%eax
08560812 +0x060:  add    $0x44,%eax
08560815 +0x063:  mov    %eax,(%esp)
08560818 +0x066:  call   0855feaa <_ZNK14TeamInfoSecond4sizeEv>  ; TeamInfoSecond::size() const
0856081d +0x06b:  add    %eax,%ebx
0856081f +0x06d:  call   0855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>  ; online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam()
08560824 +0x072:  movzbl %al,%eax
08560827 +0x075:  add    %eax,%eax
08560829 +0x077:  cmp    %eax,%ebx
0856082b +0x079:  setg   %al
0856082e +0x07c:  test   %al,%al
08560830 +0x07e:  je     08560839 <+0x87>
08560832 +0x080:  mov    $0x4,%eax
08560837 +0x085:  jmp    085608b5 <+0x103>
08560839 +0x087:  mov    0x8(%ebp),%eax
0856083c +0x08a:  mov    0x4(%eax),%eax
0856083f +0x08d:  cmp    $0x5,%eax
08560842 +0x090:  ja     085608b0 <+0xfe>
08560844 +0x092:  mov    &data#a092fdbd(.rodata)(,%eax,4),%eax
0856084b +0x099:  jmp    *%eax
0856084d +0x09b:  mov    0x10(%ebp),%eax
08560850 +0x09e:  mov    %eax,0x8(%esp)
08560854 +0x0a2:  mov    0xc(%ebp),%eax
08560857 +0x0a5:  mov    %eax,0x4(%esp)
0856085b +0x0a9:  mov    0x8(%ebp),%eax
0856085e +0x0ac:  mov    %eax,(%esp)
08560861 +0x0af:  call   085606e0 <_ZN18online_preliminary18COnlinePreliminary14_CheckSameTeamEP8PvP_RoomP5CUser>  ; online_preliminary::COnlinePreliminary::_CheckSameTeam(PvP_Room*, CUser*)
08560866 +0x0b4:  xor    $0x1,%eax
08560869 +0x0b7:  test   %al,%al
0856086b +0x0b9:  je     08560874 <+0xc2>
0856086d +0x0bb:  mov    $0x4,%eax
08560872 +0x0c0:  jmp    085608b5 <+0x103>
08560874 +0x0c2:  mov    0x10(%ebp),%eax
08560877 +0x0c5:  mov    %eax,0x8(%esp)
0856087b +0x0c9:  mov    0xc(%ebp),%eax
0856087e +0x0cc:  mov    %eax,0x4(%esp)
08560882 +0x0d0:  mov    0x8(%ebp),%eax
08560885 +0x0d3:  mov    %eax,(%esp)
08560888 +0x0d6:  call   08560736 <_ZN18online_preliminary18COnlinePreliminary14_CheckObserverEP8PvP_RoomP5CUser>  ; online_preliminary::COnlinePreliminary::_CheckObserver(PvP_Room*, CUser*)
0856088d +0x0db:  xor    $0x1,%eax
08560890 +0x0de:  test   %al,%al
08560892 +0x0e0:  je     0856089b <+0xe9>
08560894 +0x0e2:  mov    $0x4,%eax
08560899 +0x0e7:  jmp    085608b5 <+0x103>
0856089b +0x0e9:  mov    $0x0,%eax
085608a0 +0x0ee:  jmp    085608b5 <+0x103>
085608a2 +0x0f0:  mov    $0x0,%eax
085608a7 +0x0f5:  jmp    085608b5 <+0x103>
085608a9 +0x0f7:  mov    $0x4,%eax
085608ae +0x0fc:  jmp    085608b5 <+0x103>
085608b0 +0x0fe:  mov    $0x4,%eax
085608b5 +0x103:  add    $0x14,%esp
085608b8 +0x106:  pop    %ebx
085608b9 +0x107:  pop    %ebp
085608ba +0x108:  ret
085608bb +0x109:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::CheckJoinable @ 0x85607b2

/* online_preliminary::COnlinePreliminary::CheckJoinable(PvP_Room*, CUser*) */

undefined4 __thiscall
online_preliminary::COnlinePreliminary::CheckJoinable
          (COnlinePreliminary *this,PvP_Room *param_1,CUser *param_2)

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
      iVar3 = TeamInfoSecond::size((TeamInfoSecond *)(this + 0x1c));
      iVar5 = TeamInfoSecond::size((TeamInfoSecond *)(this + 0x44));
      uVar4 = GetPlayCountPerOneTeam();
      if ((int)((uVar4 & 0xff) * 2) < iVar3 + iVar5) {
        uVar2 = 4;
      }
      else {
        switch(*(undefined4 *)(this + 4)) {
        case 0:
          cVar1 = _CheckSameTeam(this,param_1,param_2);
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
