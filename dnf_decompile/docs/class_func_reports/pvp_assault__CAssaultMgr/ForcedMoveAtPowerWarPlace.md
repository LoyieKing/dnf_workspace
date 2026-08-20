# ForcedMoveAtPowerWarPlace

`_ZN11pvp_assault11CAssaultMgr25ForcedMoveAtPowerWarPlaceEP5CUser`

`pvp_assault::CAssaultMgr::ForcedMoveAtPowerWarPlace(CUser*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultMgr` | `0x082ed672` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ed672  _ZN11pvp_assault11CAssaultMgr25ForcedMoveAtPowerWarPlaceEP5CUser
#           pvp_assault::CAssaultMgr::ForcedMoveAtPowerWarPlace(CUser*)
# range [0x082ed672, 0x082ed6a5]
082ed672 +0x00:  push   %ebp
082ed673 +0x01:  mov    %esp,%ebp
082ed675 +0x03:  sub    $0x28,%esp
082ed678 +0x06:  mov    0xc(%ebp),%eax
082ed67b +0x09:  mov    %eax,(%esp)
082ed67e +0x0c:  call   082ed6a6 <_ZN11pvp_assault13CAssaultPlace25ForcedMoveAtPowerWarPlaceEP5CUser>  ; pvp_assault::CAssaultPlace::ForcedMoveAtPowerWarPlace(CUser*)
082ed683 +0x11:  jmp    082ed6a4 <+0x32>
082ed685 +0x13:  cmp    $0x1,%edx
082ed688 +0x16:  je     082ed692 <+0x20>
082ed68a +0x18:  mov    %eax,(%esp)
082ed68d +0x1b:  call   08ae3750 <_Unwind_Resume>
082ed692 +0x20:  mov    %eax,(%esp)
082ed695 +0x23:  call   08725ce0 <__cxa_begin_catch>
082ed69a +0x28:  mov    (%eax),%eax
082ed69c +0x2a:  mov    %eax,-0xc(%ebp)
082ed69f +0x2d:  call   08725c30 <__cxa_end_catch>
082ed6a4 +0x32:  leave
082ed6a5 +0x33:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultMgr::ForcedMoveAtPowerWarPlace @ 0x82ed672

/* pvp_assault::CAssaultMgr::ForcedMoveAtPowerWarPlace(CUser*) */

void __thiscall
pvp_assault::CAssaultMgr::ForcedMoveAtPowerWarPlace(CAssaultMgr *this,CUser *param_1)

{
                    /* try { // try from 082ed67e to 082ed682 has its CatchHandler @ 082ed685 */
  CAssaultPlace::ForcedMoveAtPowerWarPlace(param_1);
  return;
}
```
