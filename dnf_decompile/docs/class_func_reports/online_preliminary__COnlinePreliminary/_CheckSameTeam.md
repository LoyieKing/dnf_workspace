# _CheckSameTeam

`_ZN18online_preliminary18COnlinePreliminary14_CheckSameTeamEP8PvP_RoomP5CUser`

`online_preliminary::COnlinePreliminary::_CheckSameTeam(PvP_Room*, CUser*)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x085606e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085606e0  _ZN18online_preliminary18COnlinePreliminary14_CheckSameTeamEP8PvP_RoomP5CUser
#           online_preliminary::COnlinePreliminary::_CheckSameTeam(PvP_Room*, CUser*)
# range [0x085606e0, 0x08560735]
085606e0 +0x00:  push   %ebp
085606e1 +0x01:  mov    %esp,%ebp
085606e3 +0x03:  push   %ebx
085606e4 +0x04:  sub    $0x14,%esp
085606e7 +0x07:  mov    0x10(%ebp),%eax
085606ea +0x0a:  mov    %eax,(%esp)
085606ed +0x0d:  call   08645de2 <_ZNK15CUserCharacInfo35GetCurCharacOnlinePreliminaryTeamIdEv>  ; CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId() const
085606f2 +0x12:  cmp    $0xffffffff,%eax
085606f5 +0x15:  sete   %al
085606f8 +0x18:  test   %al,%al
085606fa +0x1a:  je     08560703 <+0x23>
085606fc +0x1c:  mov    $0x0,%eax
08560701 +0x21:  jmp    08560730 <+0x50>
08560703 +0x23:  mov    0x10(%ebp),%eax
08560706 +0x26:  mov    %eax,(%esp)
08560709 +0x29:  call   08645de2 <_ZNK15CUserCharacInfo35GetCurCharacOnlinePreliminaryTeamIdEv>  ; CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId() const
0856070e +0x2e:  mov    %eax,%ebx
08560710 +0x30:  mov    0x8(%ebp),%eax
08560713 +0x33:  mov    %eax,(%esp)
08560716 +0x36:  call   085623e0 <_ZN18online_preliminary18COnlinePreliminary9GetTeamIdEv>  ; online_preliminary::COnlinePreliminary::GetTeamId()
0856071b +0x3b:  cmp    %eax,%ebx
0856071d +0x3d:  setne  %al
08560720 +0x40:  test   %al,%al
08560722 +0x42:  je     0856072b <+0x4b>
08560724 +0x44:  mov    $0x0,%eax
08560729 +0x49:  jmp    08560730 <+0x50>
0856072b +0x4b:  mov    $0x1,%eax
08560730 +0x50:  add    $0x14,%esp
08560733 +0x53:  pop    %ebx
08560734 +0x54:  pop    %ebp
08560735 +0x55:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::_CheckSameTeam @ 0x85606e0

/* online_preliminary::COnlinePreliminary::_CheckSameTeam(PvP_Room*, CUser*) */

undefined4 __thiscall
online_preliminary::COnlinePreliminary::_CheckSameTeam
          (COnlinePreliminary *this,PvP_Room *param_1,CUser *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId((CUserCharacInfo *)param_2);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    iVar1 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId((CUserCharacInfo *)param_2);
    iVar3 = GetTeamId(this);
    if (iVar1 == iVar3) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
