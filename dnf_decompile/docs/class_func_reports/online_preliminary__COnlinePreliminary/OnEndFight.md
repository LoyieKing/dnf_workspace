# OnEndFight

`_ZN18online_preliminary18COnlinePreliminary10OnEndFightEP8PvP_Room`

`online_preliminary::COnlinePreliminary::OnEndFight(PvP_Room*)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x08562022` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08562022  _ZN18online_preliminary18COnlinePreliminary10OnEndFightEP8PvP_Room
#           online_preliminary::COnlinePreliminary::OnEndFight(PvP_Room*)
# range [0x08562022, 0x085620c7]
08562022 +0x00:  push   %ebp
08562023 +0x01:  mov    %esp,%ebp
08562025 +0x03:  sub    $0x28,%esp
08562028 +0x06:  mov    0xc(%ebp),%eax
0856202b +0x09:  mov    %eax,(%esp)
0856202e +0x0c:  call   085d9242 <_ZN8PvP_Room16get_manager_teamEv>  ; PvP_Room::get_manager_team()
08562033 +0x11:  mov    %eax,-0xc(%ebp)
08562036 +0x14:  mov    0x8(%ebp),%eax
08562039 +0x17:  movl   $0x0,0x4(%eax)
08562040 +0x1e:  mov    -0xc(%ebp),%eax
08562043 +0x21:  movl   $0x0,0xc(%esp)
0856204b +0x29:  mov    %eax,0x8(%esp)
0856204f +0x2d:  mov    0xc(%ebp),%eax
08562052 +0x30:  mov    %eax,0x4(%esp)
08562056 +0x34:  mov    0x8(%ebp),%eax
08562059 +0x37:  mov    %eax,(%esp)
0856205c +0x3a:  call   08561e40 <_ZN18online_preliminary18COnlinePreliminary11_ReturnTeamEP8PvP_RoomiP5CUser>  ; online_preliminary::COnlinePreliminary::_ReturnTeam(PvP_Room*, int, CUser*)
08562061 +0x3f:  cmpl   $0x1,-0xc(%ebp)
08562065 +0x43:  je     085620a9 <+0x87>
08562067 +0x45:  mov    0x8(%ebp),%eax
0856206a +0x48:  mov    0x8(%ebp),%edx
0856206d +0x4b:  mov    0x44(%edx),%ecx
08562070 +0x4e:  mov    %ecx,0x1c(%eax)
08562073 +0x51:  mov    0x48(%edx),%ecx
08562076 +0x54:  mov    %ecx,0x20(%eax)
08562079 +0x57:  mov    0x4c(%edx),%ecx
0856207c +0x5a:  mov    %ecx,0x24(%eax)
0856207f +0x5d:  mov    0x50(%edx),%ecx
08562082 +0x60:  mov    %ecx,0x28(%eax)
08562085 +0x63:  mov    0x54(%edx),%ecx
08562088 +0x66:  mov    %ecx,0x2c(%eax)
0856208b +0x69:  mov    0x58(%edx),%ecx
0856208e +0x6c:  mov    %ecx,0x30(%eax)
08562091 +0x6f:  mov    0x5c(%edx),%ecx
08562094 +0x72:  mov    %ecx,0x34(%eax)
08562097 +0x75:  mov    0x60(%edx),%ecx
0856209a +0x78:  mov    %ecx,0x38(%eax)
0856209d +0x7b:  mov    0x64(%edx),%ecx
085620a0 +0x7e:  mov    %ecx,0x3c(%eax)
085620a3 +0x81:  mov    0x68(%edx),%edx
085620a6 +0x84:  mov    %edx,0x40(%eax)
085620a9 +0x87:  mov    0x8(%ebp),%eax
085620ac +0x8a:  add    $0x1c,%eax
085620af +0x8d:  mov    %eax,(%esp)
085620b2 +0x90:  call   0855fcf6 <_ZN14TeamInfoSecond7refreshEv>  ; TeamInfoSecond::refresh()
085620b7 +0x95:  mov    0x8(%ebp),%eax
085620ba +0x98:  add    $0x44,%eax
085620bd +0x9b:  mov    %eax,(%esp)
085620c0 +0x9e:  call   0855fdc0 <_ZN14TeamInfoSecond5resetEv>  ; TeamInfoSecond::reset()
085620c5 +0xa3:  leave
085620c6 +0xa4:  ret
085620c7 +0xa5:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::OnEndFight @ 0x8562022

/* online_preliminary::COnlinePreliminary::OnEndFight(PvP_Room*) */

void __thiscall
online_preliminary::COnlinePreliminary::OnEndFight(COnlinePreliminary *this,PvP_Room *param_1)

{
  int iVar1;
  
  iVar1 = PvP_Room::get_manager_team(param_1);
  *(undefined4 *)(this + 4) = 0;
  _ReturnTeam(this,param_1,iVar1,(CUser *)0x0);
  if (iVar1 != 1) {
    *(undefined4 *)(this + 0x1c) = *(undefined4 *)(this + 0x44);
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(this + 0x48);
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(this + 0x4c);
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + 0x50);
    *(undefined4 *)(this + 0x2c) = *(undefined4 *)(this + 0x54);
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(this + 0x58);
    *(undefined4 *)(this + 0x34) = *(undefined4 *)(this + 0x5c);
    *(undefined4 *)(this + 0x38) = *(undefined4 *)(this + 0x60);
    *(undefined4 *)(this + 0x3c) = *(undefined4 *)(this + 100);
    *(undefined4 *)(this + 0x40) = *(undefined4 *)(this + 0x68);
  }
  TeamInfoSecond::refresh((TeamInfoSecond *)(this + 0x1c));
  TeamInfoSecond::reset((TeamInfoSecond *)(this + 0x44));
  return;
}
```
