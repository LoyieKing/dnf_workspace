# _CheckSchool

`_ZN12CLeagueMatch12_CheckSchoolEP8PvP_RoomP5CUser`

`CLeagueMatch::_CheckSchool(PvP_Room*, CUser*)`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855cef8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855cef8  _ZN12CLeagueMatch12_CheckSchoolEP8PvP_RoomP5CUser
#           CLeagueMatch::_CheckSchool(PvP_Room*, CUser*)
# range [0x0855cef8, 0x0855cf8b]
0855cef8 +0x00:  push   %ebp
0855cef9 +0x01:  mov    %esp,%ebp
0855cefb +0x03:  sub    $0x28,%esp
0855cefe +0x06:  mov    0x10(%ebp),%eax
0855cf01 +0x09:  mov    %eax,(%esp)
0855cf04 +0x0c:  call   0822fe02 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54ac
0855cf09 +0x11:  test   %eax,%eax
0855cf0b +0x13:  sete   %al
0855cf0e +0x16:  test   %al,%al
0855cf10 +0x18:  je     0855cf19 <+0x21>
0855cf12 +0x1a:  mov    $0x0,%eax
0855cf17 +0x1f:  jmp    0855cf8a <+0x92>
0855cf19 +0x21:  movl   $0x0,-0x10(%ebp)
0855cf20 +0x28:  movl   $0x0,-0xc(%ebp)
0855cf27 +0x2f:  jmp    0855cf4d <+0x55>
0855cf29 +0x31:  mov    -0xc(%ebp),%eax
0855cf2c +0x34:  mov    %eax,0x4(%esp)
0855cf30 +0x38:  mov    0xc(%ebp),%eax
0855cf33 +0x3b:  mov    %eax,(%esp)
0855cf36 +0x3e:  call   085d9272 <_ZN8PvP_Room8get_teamEi>  ; PvP_Room::get_team(int)
0855cf3b +0x43:  cmp    $0x3,%eax
0855cf3e +0x46:  sete   %al
0855cf41 +0x49:  test   %al,%al
0855cf43 +0x4b:  je     0855cf49 <+0x51>
0855cf45 +0x4d:  addl   $0x1,-0x10(%ebp)
0855cf49 +0x51:  addl   $0x1,-0xc(%ebp)
0855cf4d +0x55:  cmpl   $0x7,-0xc(%ebp)
0855cf51 +0x59:  setle  %al
0855cf54 +0x5c:  test   %al,%al
0855cf56 +0x5e:  jne    0855cf29 <+0x31>
0855cf58 +0x60:  mov    0x8(%ebp),%eax
0855cf5b +0x63:  add    $0x1c,%eax
0855cf5e +0x66:  mov    %eax,(%esp)
0855cf61 +0x69:  call   0855cd26 <_ZNK8TeamInfo4sizeEv>  ; TeamInfo::size() const
0855cf66 +0x6e:  mov    %eax,%edx
0855cf68 +0x70:  sub    -0x10(%ebp),%edx
0855cf6b +0x73:  movzbl &_ZN12CLeagueMatch23nPlayerCountPerOneTeam_E,%eax
0855cf72 +0x7a:  movzbl %al,%eax
0855cf75 +0x7d:  cmp    %eax,%edx
0855cf77 +0x7f:  setge  %al
0855cf7a +0x82:  test   %al,%al
0855cf7c +0x84:  je     0855cf85 <+0x8d>
0855cf7e +0x86:  mov    $0x0,%eax
0855cf83 +0x8b:  jmp    0855cf8a <+0x92>
0855cf85 +0x8d:  mov    $0x1,%eax
0855cf8a +0x92:  leave
0855cf8b +0x93:  ret
```

## 反编译 C

```c
// CLeagueMatch::_CheckSchool @ 0x855cef8

/* CLeagueMatch::_CheckSchool(PvP_Room*, CUser*) */

undefined4 __thiscall
CLeagueMatch::_CheckSchool(CLeagueMatch *this,PvP_Room *param_1,CUser *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_14;
  int local_10;
  
  iVar1 = CUser::GetSchoolNo(param_2);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_14 = 0;
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      iVar1 = PvP_Room::get_team(param_1,local_10);
      if (iVar1 == 3) {
        local_14 = local_14 + 1;
      }
    }
    iVar1 = TeamInfo::size((TeamInfo *)(this + 0x1c));
    if (iVar1 - local_14 < (int)(uint)nPlayerCountPerOneTeam_) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
