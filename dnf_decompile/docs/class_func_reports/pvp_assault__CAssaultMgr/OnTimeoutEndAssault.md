# OnTimeoutEndAssault

`_ZN11pvp_assault11CAssaultMgr19OnTimeoutEndAssaultEji`

`pvp_assault::CAssaultMgr::OnTimeoutEndAssault(unsigned int, int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultMgr` | `0x082efaa8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082efaa8  _ZN11pvp_assault11CAssaultMgr19OnTimeoutEndAssaultEji
#           pvp_assault::CAssaultMgr::OnTimeoutEndAssault(unsigned int, int)
# range [0x082efaa8, 0x082efafd]
082efaa8 +0x00:  push   %ebp
082efaa9 +0x01:  mov    %esp,%ebp
082efaab +0x03:  sub    $0x28,%esp
082efaae +0x06:  mov    0x10(%ebp),%eax
082efab1 +0x09:  mov    %eax,0x8(%esp)
082efab5 +0x0d:  mov    0xc(%ebp),%eax
082efab8 +0x10:  mov    %eax,0x4(%esp)
082efabc +0x14:  mov    0x8(%ebp),%eax
082efabf +0x17:  mov    %eax,(%esp)
082efac2 +0x1a:  call   082eda94 <_ZN11pvp_assault11CAssaultMgr16_GetAssaultPlaceEji>  ; pvp_assault::CAssaultMgr::_GetAssaultPlace(unsigned int, int)
082efac7 +0x1f:  mov    %eax,-0x10(%ebp)
082efaca +0x22:  mov    -0x10(%ebp),%eax
082efacd +0x25:  mov    %eax,(%esp)
082efad0 +0x28:  call   082ea004 <_ZN11pvp_assault13CAssaultPlace17TimeoutEndAssaultEv>  ; pvp_assault::CAssaultPlace::TimeoutEndAssault()
082efad5 +0x2d:  jmp    082efaf6 <+0x4e>
082efad7 +0x2f:  cmp    $0x1,%edx
082efada +0x32:  je     082efae4 <+0x3c>
082efadc +0x34:  mov    %eax,(%esp)
082efadf +0x37:  call   08ae3750 <_Unwind_Resume>
082efae4 +0x3c:  mov    %eax,(%esp)
082efae7 +0x3f:  call   08725ce0 <__cxa_begin_catch>
082efaec +0x44:  mov    (%eax),%eax
082efaee +0x46:  mov    %eax,-0xc(%ebp)
082efaf1 +0x49:  call   08725c30 <__cxa_end_catch>
082efaf6 +0x4e:  mov    $0x1,%eax
082efafb +0x53:  leave
082efafc +0x54:  ret
082efafd +0x55:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultMgr::OnTimeoutEndAssault @ 0x82efaa8

/* pvp_assault::CAssaultMgr::OnTimeoutEndAssault(unsigned int, int) */

undefined4 __thiscall
pvp_assault::CAssaultMgr::OnTimeoutEndAssault(CAssaultMgr *this,uint param_1,int param_2)

{
  CAssaultPlace *this_00;
  
                    /* try { // try from 082efac2 to 082efad4 has its CatchHandler @ 082efad7 */
  this_00 = (CAssaultPlace *)_GetAssaultPlace(this,param_1,param_2);
  CAssaultPlace::TimeoutEndAssault(this_00);
  return 1;
}
```
