# get_pvp_WinningRate_relateMission

`_ZNK5CUser33get_pvp_WinningRate_relateMissionEv`

`CUser::get_pvp_WinningRate_relateMission() const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086626e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086626e0  _ZNK5CUser33get_pvp_WinningRate_relateMissionEv
#           CUser::get_pvp_WinningRate_relateMission() const
# range [0x086626e0, 0x08662709]
086626e0 +0x00:  push   %ebp
086626e1 +0x01:  mov    %esp,%ebp
086626e3 +0x03:  sub    $0x28,%esp
086626e6 +0x06:  movl   $0x8,0x4(%esp)
086626ee +0x0e:  mov    0x8(%ebp),%eax
086626f1 +0x11:  mov    %eax,(%esp)
086626f4 +0x14:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
086626f9 +0x19:  mov    %eax,-0xc(%ebp)
086626fc +0x1c:  mov    -0xc(%ebp),%eax
086626ff +0x1f:  mov    %eax,(%esp)
08662702 +0x22:  call   085e513a <_ZNK19CMissionList_Charac14getWinningRateEv>  ; CMissionList_Charac::getWinningRate() const
08662707 +0x27:  leave
08662708 +0x28:  ret
08662709 +0x29:  nop
```

## 反编译 C

```c
// CUser::get_pvp_WinningRate_relateMission @ 0x86626e0

/* CUser::get_pvp_WinningRate_relateMission() const */

void __thiscall CUser::get_pvp_WinningRate_relateMission(CUser *this)

{
  CMissionList_Charac *this_00;
  
  this_00 = (CMissionList_Charac *)GetCharacExpandData(this,8);
  CMissionList_Charac::getWinningRate(this_00);
  return;
}
```
