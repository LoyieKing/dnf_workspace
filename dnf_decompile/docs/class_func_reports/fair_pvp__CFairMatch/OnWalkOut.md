# OnWalkOut

`_ZN8fair_pvp10CFairMatch9OnWalkOutEP8PvP_Roomi`

`fair_pvp::CFairMatch::OnWalkOut(PvP_Room*, int)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08564fb2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08564fb2  _ZN8fair_pvp10CFairMatch9OnWalkOutEP8PvP_Roomi
#           fair_pvp::CFairMatch::OnWalkOut(PvP_Room*, int)
# range [0x08564fb2, 0x08565017]
08564fb2 +0x00:  push   %ebp
08564fb3 +0x01:  mov    %esp,%ebp
08564fb5 +0x03:  sub    $0x38,%esp
08564fb8 +0x06:  mov    0x10(%ebp),%eax
08564fbb +0x09:  mov    %eax,0x4(%esp)
08564fbf +0x0d:  mov    0xc(%ebp),%eax
08564fc2 +0x10:  mov    %eax,(%esp)
08564fc5 +0x13:  call   085d9272 <_ZN8PvP_Room8get_teamEi>  ; PvP_Room::get_team(int)
08564fca +0x18:  mov    %eax,-0x10(%ebp)
08564fcd +0x1b:  mov    0x10(%ebp),%eax
08564fd0 +0x1e:  mov    %eax,0x4(%esp)
08564fd4 +0x22:  mov    0xc(%ebp),%eax
08564fd7 +0x25:  mov    %eax,(%esp)
08564fda +0x28:  call   085d921e <_ZN8PvP_Room13get_user_seatEi>  ; PvP_Room::get_user_seat(int)
08564fdf +0x2d:  mov    %eax,-0xc(%ebp)
08564fe2 +0x30:  mov    0x8(%ebp),%eax
08564fe5 +0x33:  mov    (%eax),%eax
08564fe7 +0x35:  add    $0x2c,%eax
08564fea +0x38:  mov    (%eax),%ecx
08564fec +0x3a:  mov    -0x10(%ebp),%eax
08564fef +0x3d:  mov    0x10(%ebp),%edx
08564ff2 +0x40:  mov    %edx,0x10(%esp)
08564ff6 +0x44:  mov    %eax,0xc(%esp)
08564ffa +0x48:  mov    0xc(%ebp),%eax
08564ffd +0x4b:  mov    %eax,0x8(%esp)
08565001 +0x4f:  mov    -0xc(%ebp),%eax
08565004 +0x52:  mov    %eax,0x4(%esp)
08565008 +0x56:  mov    0x8(%ebp),%eax
0856500b +0x59:  mov    %eax,(%esp)
0856500e +0x5c:  call   *%ecx
08565010 +0x5e:  mov    $0x1,%eax
08565015 +0x63:  leave
08565016 +0x64:  ret
08565017 +0x65:  nop
```

## 反编译 C

```c
// fair_pvp::CFairMatch::OnWalkOut @ 0x8564fb2

/* fair_pvp::CFairMatch::OnWalkOut(PvP_Room*, int) */

undefined4 __thiscall
fair_pvp::CFairMatch::OnWalkOut(CFairMatch *this,PvP_Room *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = PvP_Room::get_team(param_1,param_2);
  uVar2 = PvP_Room::get_user_seat(param_1,param_2);
  (**(code **)(*(int *)this + 0x2c))(this,uVar2,param_1,uVar1,param_2);
  return 1;
}
```
