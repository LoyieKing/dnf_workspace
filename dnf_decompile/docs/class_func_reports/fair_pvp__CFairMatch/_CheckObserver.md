# _CheckObserver

`_ZN8fair_pvp10CFairMatch14_CheckObserverEP8PvP_RoomP5CUser`

`fair_pvp::CFairMatch::_CheckObserver(PvP_Room*, CUser*)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x085629f2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085629f2  _ZN8fair_pvp10CFairMatch14_CheckObserverEP8PvP_RoomP5CUser
#           fair_pvp::CFairMatch::_CheckObserver(PvP_Room*, CUser*)
# range [0x085629f2, 0x08562a6d]
085629f2 +0x00:  push   %ebp
085629f3 +0x01:  mov    %esp,%ebp
085629f5 +0x03:  push   %ebx
085629f6 +0x04:  sub    $0x24,%esp
085629f9 +0x07:  movl   $0x0,-0x10(%ebp)
08562a00 +0x0e:  movl   $0x0,-0xc(%ebp)
08562a07 +0x15:  jmp    08562a2d <+0x3b>
08562a09 +0x17:  mov    -0xc(%ebp),%eax
08562a0c +0x1a:  mov    %eax,0x4(%esp)
08562a10 +0x1e:  mov    0xc(%ebp),%eax
08562a13 +0x21:  mov    %eax,(%esp)
08562a16 +0x24:  call   085d9272 <_ZN8PvP_Room8get_teamEi>  ; PvP_Room::get_team(int)
08562a1b +0x29:  cmp    $0x3,%eax
08562a1e +0x2c:  sete   %al
08562a21 +0x2f:  test   %al,%al
08562a23 +0x31:  je     08562a29 <+0x37>
08562a25 +0x33:  addl   $0x1,-0x10(%ebp)
08562a29 +0x37:  addl   $0x1,-0xc(%ebp)
08562a2d +0x3b:  cmpl   $0x7,-0xc(%ebp)
08562a31 +0x3f:  setle  %al
08562a34 +0x42:  test   %al,%al
08562a36 +0x44:  jne    08562a09 <+0x17>
08562a38 +0x46:  mov    0x8(%ebp),%eax
08562a3b +0x49:  add    $0x1c,%eax
08562a3e +0x4c:  mov    %eax,(%esp)
08562a41 +0x4f:  call   0856270c <_ZNK8fair_pvp13TeamInfoThird4sizeEv>  ; fair_pvp::TeamInfoThird::size() const
08562a46 +0x54:  mov    %eax,%ebx
08562a48 +0x56:  sub    -0x10(%ebp),%ebx
08562a4b +0x59:  call   08562834 <_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv>  ; fair_pvp::CFairMatch::GetPlayCountPerOneTeam()
08562a50 +0x5e:  movzbl %al,%eax
08562a53 +0x61:  cmp    %eax,%ebx
08562a55 +0x63:  setge  %al
08562a58 +0x66:  test   %al,%al
08562a5a +0x68:  je     08562a63 <+0x71>
08562a5c +0x6a:  mov    $0x0,%eax
08562a61 +0x6f:  jmp    08562a68 <+0x76>
08562a63 +0x71:  mov    $0x1,%eax
08562a68 +0x76:  add    $0x24,%esp
08562a6b +0x79:  pop    %ebx
08562a6c +0x7a:  pop    %ebp
08562a6d +0x7b:  ret
```

## 反编译 C

```c
// fair_pvp::CFairMatch::_CheckObserver @ 0x85629f2

/* fair_pvp::CFairMatch::_CheckObserver(PvP_Room*, CUser*) */

bool fair_pvp::CFairMatch::_CheckObserver(PvP_Room *param_1,CUser *param_2)

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
  iVar1 = TeamInfoThird::size((TeamInfoThird *)(param_1 + 0x1c));
  uVar2 = GetPlayCountPerOneTeam();
  return iVar1 - local_14 < (int)(uVar2 & 0xff);
}
```
