# ResetDailyMission

`_ZN5CUser17ResetDailyMissionEv`

`CUser::ResetDailyMission()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866259e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866259e  _ZN5CUser17ResetDailyMissionEv
#           CUser::ResetDailyMission()
# range [0x0866259e, 0x086625c7]
0866259e +0x00:  push   %ebp
0866259f +0x01:  mov    %esp,%ebp
086625a1 +0x03:  sub    $0x28,%esp
086625a4 +0x06:  movl   $0x8,0x4(%esp)
086625ac +0x0e:  mov    0x8(%ebp),%eax
086625af +0x11:  mov    %eax,(%esp)
086625b2 +0x14:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
086625b7 +0x19:  mov    %eax,-0xc(%ebp)
086625ba +0x1c:  mov    -0xc(%ebp),%eax
086625bd +0x1f:  mov    %eax,(%esp)
086625c0 +0x22:  call   085e5528 <_ZN19CMissionList_Charac18Reset_DailyMissionEv>  ; CMissionList_Charac::Reset_DailyMission()
086625c5 +0x27:  leave
086625c6 +0x28:  ret
086625c7 +0x29:  nop
```

## 反编译 C

```c
// CUser::ResetDailyMission @ 0x866259e

/* CUser::ResetDailyMission() */

void __thiscall CUser::ResetDailyMission(CUser *this)

{
  CMissionList_Charac *this_00;
  
  this_00 = (CMissionList_Charac *)GetCharacExpandData(this,8);
  CMissionList_Charac::Reset_DailyMission(this_00);
  return;
}
```
