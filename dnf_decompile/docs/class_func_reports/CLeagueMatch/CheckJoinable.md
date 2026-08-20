# CheckJoinable

`_ZN12CLeagueMatch13CheckJoinableEP8PvP_RoomP5CUser`

`CLeagueMatch::CheckJoinable(PvP_Room*, CUser*)`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855cf8c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855cf8c  _ZN12CLeagueMatch13CheckJoinableEP8PvP_RoomP5CUser
#           CLeagueMatch::CheckJoinable(PvP_Room*, CUser*)
# range [0x0855cf8c, 0x0855d057]
0855cf8c +0x00:  push   %ebp
0855cf8d +0x01:  mov    %esp,%ebp
0855cf8f +0x03:  push   %ebx
0855cf90 +0x04:  sub    $0x14,%esp
0855cf93 +0x07:  mov    0xc(%ebp),%eax
0855cf96 +0x0a:  mov    %eax,(%esp)
0855cf99 +0x0d:  call   085d68a0 <_ZN8PvP_Room16get_player_countEv>  ; PvP_Room::get_player_count()
0855cf9e +0x12:  movzbl &_ZN12CLeagueMatch23nPlayerCountPerOneTeam_E,%edx
0855cfa5 +0x19:  movzbl %dl,%edx
0855cfa8 +0x1c:  add    %edx,%edx
0855cfaa +0x1e:  cmp    %edx,%eax
0855cfac +0x20:  setge  %al
0855cfaf +0x23:  test   %al,%al
0855cfb1 +0x25:  je     0855cfbd <+0x31>
0855cfb3 +0x27:  mov    $0x4,%eax
0855cfb8 +0x2c:  jmp    0855d051 <+0xc5>
0855cfbd +0x31:  mov    0x8(%ebp),%eax
0855cfc0 +0x34:  add    $0x1c,%eax
0855cfc3 +0x37:  mov    %eax,(%esp)
0855cfc6 +0x3a:  call   0855cd26 <_ZNK8TeamInfo4sizeEv>  ; TeamInfo::size() const
0855cfcb +0x3f:  mov    %eax,%ebx
0855cfcd +0x41:  mov    0x8(%ebp),%eax
0855cfd0 +0x44:  add    $0x8c,%eax
0855cfd5 +0x49:  mov    %eax,(%esp)
0855cfd8 +0x4c:  call   0855cd26 <_ZNK8TeamInfo4sizeEv>  ; TeamInfo::size() const
0855cfdd +0x51:  lea    (%ebx,%eax,1),%edx
0855cfe0 +0x54:  movzbl &_ZN12CLeagueMatch23nPlayerCountPerOneTeam_E,%eax
0855cfe7 +0x5b:  movzbl %al,%eax
0855cfea +0x5e:  add    %eax,%eax
0855cfec +0x60:  cmp    %eax,%edx
0855cfee +0x62:  setg   %al
0855cff1 +0x65:  test   %al,%al
0855cff3 +0x67:  je     0855cffc <+0x70>
0855cff5 +0x69:  mov    $0x4,%eax
0855cffa +0x6e:  jmp    0855d051 <+0xc5>
0855cffc +0x70:  mov    0x8(%ebp),%eax
0855cfff +0x73:  mov    0x4(%eax),%eax
0855d002 +0x76:  cmp    $0x5,%eax
0855d005 +0x79:  ja     0855d04c <+0xc0>
0855d007 +0x7b:  mov    &data#1de81739(.rodata)(,%eax,4),%eax
0855d00e +0x82:  jmp    *%eax
0855d010 +0x84:  mov    0x10(%ebp),%eax
0855d013 +0x87:  mov    %eax,0x8(%esp)
0855d017 +0x8b:  mov    0xc(%ebp),%eax
0855d01a +0x8e:  mov    %eax,0x4(%esp)
0855d01e +0x92:  mov    0x8(%ebp),%eax
0855d021 +0x95:  mov    %eax,(%esp)
0855d024 +0x98:  call   0855cef8 <_ZN12CLeagueMatch12_CheckSchoolEP8PvP_RoomP5CUser>  ; CLeagueMatch::_CheckSchool(PvP_Room*, CUser*)
0855d029 +0x9d:  xor    $0x1,%eax
0855d02c +0xa0:  test   %al,%al
0855d02e +0xa2:  je     0855d037 <+0xab>
0855d030 +0xa4:  mov    $0x4,%eax
0855d035 +0xa9:  jmp    0855d051 <+0xc5>
0855d037 +0xab:  mov    $0x0,%eax
0855d03c +0xb0:  jmp    0855d051 <+0xc5>
0855d03e +0xb2:  mov    $0x0,%eax
0855d043 +0xb7:  jmp    0855d051 <+0xc5>
0855d045 +0xb9:  mov    $0x4,%eax
0855d04a +0xbe:  jmp    0855d051 <+0xc5>
0855d04c +0xc0:  mov    $0x4,%eax
0855d051 +0xc5:  add    $0x14,%esp
0855d054 +0xc8:  pop    %ebx
0855d055 +0xc9:  pop    %ebp
0855d056 +0xca:  ret
0855d057 +0xcb:  nop
```

## 反编译 C

```c
// CLeagueMatch::CheckJoinable @ 0x855cf8c

/* CLeagueMatch::CheckJoinable(PvP_Room*, CUser*) */

undefined4 __thiscall
CLeagueMatch::CheckJoinable(CLeagueMatch *this,PvP_Room *param_1,CUser *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = PvP_Room::get_player_count(param_1);
  if (iVar2 < (int)((uint)nPlayerCountPerOneTeam_ * 2)) {
    iVar2 = TeamInfo::size((TeamInfo *)(this + 0x1c));
    iVar4 = TeamInfo::size((TeamInfo *)(this + 0x8c));
    if ((int)((uint)nPlayerCountPerOneTeam_ * 2) < iVar2 + iVar4) {
      uVar3 = 4;
    }
    else {
      switch(*(undefined4 *)(this + 4)) {
      case 0:
        cVar1 = _CheckSchool(this,param_1,param_2);
        if (cVar1 == '\x01') {
          uVar3 = 0;
        }
        else {
          uVar3 = 4;
        }
        break;
      case 1:
      case 4:
      case 5:
        uVar3 = 4;
        break;
      default:
        uVar3 = 4;
        break;
      case 3:
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 4;
  }
  return uVar3;
}
```
