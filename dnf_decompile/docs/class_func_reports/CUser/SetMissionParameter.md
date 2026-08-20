# SetMissionParameter

`_ZN5CUser19SetMissionParameterEii`

`CUser::SetMissionParameter(int, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08662558` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08662558  _ZN5CUser19SetMissionParameterEii
#           CUser::SetMissionParameter(int, int)
# range [0x08662558, 0x0866259d]
08662558 +0x00:  push   %ebp
08662559 +0x01:  mov    %esp,%ebp
0866255b +0x03:  sub    $0x28,%esp
0866255e +0x06:  mov    0x8(%ebp),%eax
08662561 +0x09:  mov    %eax,(%esp)
08662564 +0x0c:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
08662569 +0x11:  test   %al,%al
0866256b +0x13:  je     0866259c <+0x44>
0866256d +0x15:  movl   $0x8,0x4(%esp)
08662575 +0x1d:  mov    0x8(%ebp),%eax
08662578 +0x20:  mov    %eax,(%esp)
0866257b +0x23:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08662580 +0x28:  mov    %eax,-0xc(%ebp)
08662583 +0x2b:  mov    0x10(%ebp),%eax
08662586 +0x2e:  mov    %eax,0x8(%esp)
0866258a +0x32:  mov    0xc(%ebp),%eax
0866258d +0x35:  mov    %eax,0x4(%esp)
08662591 +0x39:  mov    -0xc(%ebp),%eax
08662594 +0x3c:  mov    %eax,(%esp)
08662597 +0x3f:  call   085e56ee <_ZN19CMissionList_Charac18GM_SetMissionValueEii>  ; CMissionList_Charac::GM_SetMissionValue(int, int)
0866259c +0x44:  leave
0866259d +0x45:  ret
```

## 反编译 C

```c
// CUser::SetMissionParameter @ 0x8662558

/* CUser::SetMissionParameter(int, int) */

void __thiscall CUser::SetMissionParameter(CUser *this,int param_1,int param_2)

{
  char cVar1;
  CMissionList_Charac *this_00;
  
  cVar1 = isGMUser(this);
  if (cVar1 != '\0') {
    this_00 = (CMissionList_Charac *)GetCharacExpandData(this,8);
    CMissionList_Charac::GM_SetMissionValue(this_00,param_1,param_2);
  }
  return;
}
```
