# _CheckObserver

`_ZN18online_preliminary18COnlinePreliminary14_CheckObserverEP8PvP_RoomP5CUser`

`online_preliminary::COnlinePreliminary::_CheckObserver(PvP_Room*, CUser*)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x08560736` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08560736  _ZN18online_preliminary18COnlinePreliminary14_CheckObserverEP8PvP_RoomP5CUser
#           online_preliminary::COnlinePreliminary::_CheckObserver(PvP_Room*, CUser*)
# range [0x08560736, 0x085607b1]
08560736 +0x00:  push   %ebp
08560737 +0x01:  mov    %esp,%ebp
08560739 +0x03:  push   %ebx
0856073a +0x04:  sub    $0x24,%esp
0856073d +0x07:  movl   $0x0,-0x10(%ebp)
08560744 +0x0e:  movl   $0x0,-0xc(%ebp)
0856074b +0x15:  jmp    08560771 <+0x3b>
0856074d +0x17:  mov    -0xc(%ebp),%eax
08560750 +0x1a:  mov    %eax,0x4(%esp)
08560754 +0x1e:  mov    0xc(%ebp),%eax
08560757 +0x21:  mov    %eax,(%esp)
0856075a +0x24:  call   085d9272 <_ZN8PvP_Room8get_teamEi>  ; PvP_Room::get_team(int)
0856075f +0x29:  cmp    $0x3,%eax
08560762 +0x2c:  sete   %al
08560765 +0x2f:  test   %al,%al
08560767 +0x31:  je     0856076d <+0x37>
08560769 +0x33:  addl   $0x1,-0x10(%ebp)
0856076d +0x37:  addl   $0x1,-0xc(%ebp)
08560771 +0x3b:  cmpl   $0x7,-0xc(%ebp)
08560775 +0x3f:  setle  %al
08560778 +0x42:  test   %al,%al
0856077a +0x44:  jne    0856074d <+0x17>
0856077c +0x46:  mov    0x8(%ebp),%eax
0856077f +0x49:  add    $0x1c,%eax
08560782 +0x4c:  mov    %eax,(%esp)
08560785 +0x4f:  call   0855feaa <_ZNK14TeamInfoSecond4sizeEv>  ; TeamInfoSecond::size() const
0856078a +0x54:  mov    %eax,%ebx
0856078c +0x56:  sub    -0x10(%ebp),%ebx
0856078f +0x59:  call   0855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>  ; online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam()
08560794 +0x5e:  movzbl %al,%eax
08560797 +0x61:  cmp    %eax,%ebx
08560799 +0x63:  setge  %al
0856079c +0x66:  test   %al,%al
0856079e +0x68:  je     085607a7 <+0x71>
085607a0 +0x6a:  mov    $0x0,%eax
085607a5 +0x6f:  jmp    085607ac <+0x76>
085607a7 +0x71:  mov    $0x1,%eax
085607ac +0x76:  add    $0x24,%esp
085607af +0x79:  pop    %ebx
085607b0 +0x7a:  pop    %ebp
085607b1 +0x7b:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::_CheckObserver @ 0x8560736

/* online_preliminary::COnlinePreliminary::_CheckObserver(PvP_Room*, CUser*) */

bool online_preliminary::COnlinePreliminary::_CheckObserver(PvP_Room *param_1,CUser *param_2)

{
  int iVar1;
  uint uVar2;
  int local_14;
  int local_10;
  
  local_14 = 0;
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    iVar1 = PvP_Room::get_team((PvP_Room *)param_2,local_10);
    if (iVar1 == 3) {
      local_14 = local_14 + 1;
    }
  }
  iVar1 = TeamInfoSecond::size((TeamInfoSecond *)(param_1 + 0x1c));
  uVar2 = GetPlayCountPerOneTeam();
  return iVar1 - local_14 < (int)(uVar2 & 0xff);
}
```
