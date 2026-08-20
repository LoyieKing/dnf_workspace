# _CheckRematchable

`_ZNK8fair_pvp10CFairMatch17_CheckRematchableEP8PvP_Room`

`fair_pvp::CFairMatch::_CheckRematchable(PvP_Room*) const`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08563b16` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08563b16  _ZNK8fair_pvp10CFairMatch17_CheckRematchableEP8PvP_Room
#           fair_pvp::CFairMatch::_CheckRematchable(PvP_Room*) const
# range [0x08563b16, 0x08563bb9]
08563b16 +0x00:  push   %ebp
08563b17 +0x01:  mov    %esp,%ebp
08563b19 +0x03:  push   %ebx
08563b1a +0x04:  sub    $0x34,%esp
08563b1d +0x07:  movl   $0x0,-0x1c(%ebp)
08563b24 +0x0e:  movl   $0x0,-0x18(%ebp)
08563b2b +0x15:  movl   $0x0,-0x14(%ebp)
08563b32 +0x1c:  movl   $0x0,-0x10(%ebp)
08563b39 +0x23:  jmp    08563b6e <+0x58>
08563b3b +0x25:  mov    -0x10(%ebp),%eax
08563b3e +0x28:  mov    %eax,0x4(%esp)
08563b42 +0x2c:  mov    0xc(%ebp),%eax
08563b45 +0x2f:  mov    %eax,(%esp)
08563b48 +0x32:  call   085d9272 <_ZN8PvP_Room8get_teamEi>  ; PvP_Room::get_team(int)
08563b4d +0x37:  mov    %eax,-0xc(%ebp)
08563b50 +0x3a:  cmpl   $0x1,-0xc(%ebp)
08563b54 +0x3e:  je     08563b5c <+0x46>
08563b56 +0x40:  cmpl   $0x2,-0xc(%ebp)
08563b5a +0x44:  jne    08563b6a <+0x54>
08563b5c +0x46:  mov    -0xc(%ebp),%eax
08563b5f +0x49:  mov    -0x1c(%ebp,%eax,4),%edx
08563b63 +0x4d:  add    $0x1,%edx
08563b66 +0x50:  mov    %edx,-0x1c(%ebp,%eax,4)
08563b6a +0x54:  addl   $0x1,-0x10(%ebp)
08563b6e +0x58:  cmpl   $0x7,-0x10(%ebp)
08563b72 +0x5c:  setle  %al
08563b75 +0x5f:  test   %al,%al
08563b77 +0x61:  jne    08563b3b <+0x25>
08563b79 +0x63:  mov    -0x18(%ebp),%ebx
08563b7c +0x66:  call   08562834 <_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv>  ; fair_pvp::CFairMatch::GetPlayCountPerOneTeam()
08563b81 +0x6b:  movzbl %al,%eax
08563b84 +0x6e:  cmp    %eax,%ebx
08563b86 +0x70:  setne  %al
08563b89 +0x73:  test   %al,%al
08563b8b +0x75:  je     08563b94 <+0x7e>
08563b8d +0x77:  mov    $0x0,%eax
08563b92 +0x7c:  jmp    08563bb4 <+0x9e>
08563b94 +0x7e:  mov    -0x14(%ebp),%ebx
08563b97 +0x81:  call   08562834 <_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv>  ; fair_pvp::CFairMatch::GetPlayCountPerOneTeam()
08563b9c +0x86:  movzbl %al,%eax
08563b9f +0x89:  cmp    %eax,%ebx
08563ba1 +0x8b:  setne  %al
08563ba4 +0x8e:  test   %al,%al
08563ba6 +0x90:  je     08563baf <+0x99>
08563ba8 +0x92:  mov    $0x0,%eax
08563bad +0x97:  jmp    08563bb4 <+0x9e>
08563baf +0x99:  mov    $0x1,%eax
08563bb4 +0x9e:  add    $0x34,%esp
08563bb7 +0xa1:  pop    %ebx
08563bb8 +0xa2:  pop    %ebp
08563bb9 +0xa3:  ret
```

## 反编译 C

```c
// fair_pvp::CFairMatch::_CheckRematchable @ 0x8563b16

/* fair_pvp::CFairMatch::_CheckRematchable(PvP_Room*) const */

undefined4 __thiscall fair_pvp::CFairMatch::_CheckRematchable(CFairMatch *this,PvP_Room *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_20 [6];
  
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  for (local_20[3] = 0; iVar1 = local_20[1], local_20[3] < 8; local_20[3] = local_20[3] + 1) {
    local_20[4] = PvP_Room::get_team(param_1,local_20[3]);
    if ((local_20[4] == 1) || (local_20[4] == 2)) {
      local_20[local_20[4]] = local_20[local_20[4]] + 1;
    }
  }
  uVar3 = GetPlayCountPerOneTeam();
  iVar2 = local_20[2];
  if (iVar1 == (uVar3 & 0xff)) {
    uVar3 = GetPlayCountPerOneTeam();
    if (iVar2 == (uVar3 & 0xff)) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```
