# OnWalkOut

`_ZN12CLeagueMatch9OnWalkOutEP8PvP_Roomi`

`CLeagueMatch::OnWalkOut(PvP_Room*, int)`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855e4c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855e4c4  _ZN12CLeagueMatch9OnWalkOutEP8PvP_Roomi
#           CLeagueMatch::OnWalkOut(PvP_Room*, int)
# range [0x0855e4c4, 0x0855e529]
0855e4c4 +0x00:  push   %ebp
0855e4c5 +0x01:  mov    %esp,%ebp
0855e4c7 +0x03:  sub    $0x38,%esp
0855e4ca +0x06:  mov    0x10(%ebp),%eax
0855e4cd +0x09:  mov    %eax,0x4(%esp)
0855e4d1 +0x0d:  mov    0xc(%ebp),%eax
0855e4d4 +0x10:  mov    %eax,(%esp)
0855e4d7 +0x13:  call   085d9272 <_ZN8PvP_Room8get_teamEi>  ; PvP_Room::get_team(int)
0855e4dc +0x18:  mov    %eax,-0x10(%ebp)
0855e4df +0x1b:  mov    0x10(%ebp),%eax
0855e4e2 +0x1e:  mov    %eax,0x4(%esp)
0855e4e6 +0x22:  mov    0xc(%ebp),%eax
0855e4e9 +0x25:  mov    %eax,(%esp)
0855e4ec +0x28:  call   085d921e <_ZN8PvP_Room13get_user_seatEi>  ; PvP_Room::get_user_seat(int)
0855e4f1 +0x2d:  mov    %eax,-0xc(%ebp)
0855e4f4 +0x30:  mov    0x8(%ebp),%eax
0855e4f7 +0x33:  mov    (%eax),%eax
0855e4f9 +0x35:  add    $0x2c,%eax
0855e4fc +0x38:  mov    (%eax),%ecx
0855e4fe +0x3a:  mov    -0x10(%ebp),%eax
0855e501 +0x3d:  mov    0x10(%ebp),%edx
0855e504 +0x40:  mov    %edx,0x10(%esp)
0855e508 +0x44:  mov    %eax,0xc(%esp)
0855e50c +0x48:  mov    0xc(%ebp),%eax
0855e50f +0x4b:  mov    %eax,0x8(%esp)
0855e513 +0x4f:  mov    -0xc(%ebp),%eax
0855e516 +0x52:  mov    %eax,0x4(%esp)
0855e51a +0x56:  mov    0x8(%ebp),%eax
0855e51d +0x59:  mov    %eax,(%esp)
0855e520 +0x5c:  call   *%ecx
0855e522 +0x5e:  mov    $0x1,%eax
0855e527 +0x63:  leave
0855e528 +0x64:  ret
0855e529 +0x65:  nop
```

## 反编译 C

```c
// CLeagueMatch::OnWalkOut @ 0x855e4c4

/* CLeagueMatch::OnWalkOut(PvP_Room*, int) */

undefined4 __thiscall CLeagueMatch::OnWalkOut(CLeagueMatch *this,PvP_Room *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = PvP_Room::get_team(param_1,param_2);
  uVar2 = PvP_Room::get_user_seat(param_1,param_2);
  (**(code **)(*(int *)this + 0x2c))(this,uVar2,param_1,uVar1,param_2);
  return 1;
}
```
