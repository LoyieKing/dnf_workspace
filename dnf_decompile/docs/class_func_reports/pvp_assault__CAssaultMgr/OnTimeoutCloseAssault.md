# OnTimeoutCloseAssault

`_ZN11pvp_assault11CAssaultMgr21OnTimeoutCloseAssaultEji`

`pvp_assault::CAssaultMgr::OnTimeoutCloseAssault(unsigned int, int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultMgr` | `0x082efafe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082efafe  _ZN11pvp_assault11CAssaultMgr21OnTimeoutCloseAssaultEji
#           pvp_assault::CAssaultMgr::OnTimeoutCloseAssault(unsigned int, int)
# range [0x082efafe, 0x082efb53]
082efafe +0x00:  push   %ebp
082efaff +0x01:  mov    %esp,%ebp
082efb01 +0x03:  sub    $0x28,%esp
082efb04 +0x06:  mov    0x10(%ebp),%eax
082efb07 +0x09:  mov    %eax,0x8(%esp)
082efb0b +0x0d:  mov    0xc(%ebp),%eax
082efb0e +0x10:  mov    %eax,0x4(%esp)
082efb12 +0x14:  mov    0x8(%ebp),%eax
082efb15 +0x17:  mov    %eax,(%esp)
082efb18 +0x1a:  call   082eda94 <_ZN11pvp_assault11CAssaultMgr16_GetAssaultPlaceEji>  ; pvp_assault::CAssaultMgr::_GetAssaultPlace(unsigned int, int)
082efb1d +0x1f:  mov    %eax,-0x10(%ebp)
082efb20 +0x22:  mov    -0x10(%ebp),%eax
082efb23 +0x25:  mov    %eax,(%esp)
082efb26 +0x28:  call   082ea188 <_ZN11pvp_assault13CAssaultPlace19TimeoutCloseAssaultEv>  ; pvp_assault::CAssaultPlace::TimeoutCloseAssault()
082efb2b +0x2d:  jmp    082efb4c <+0x4e>
082efb2d +0x2f:  cmp    $0x1,%edx
082efb30 +0x32:  je     082efb3a <+0x3c>
082efb32 +0x34:  mov    %eax,(%esp)
082efb35 +0x37:  call   08ae3750 <_Unwind_Resume>
082efb3a +0x3c:  mov    %eax,(%esp)
082efb3d +0x3f:  call   08725ce0 <__cxa_begin_catch>
082efb42 +0x44:  mov    (%eax),%eax
082efb44 +0x46:  mov    %eax,-0xc(%ebp)
082efb47 +0x49:  call   08725c30 <__cxa_end_catch>
082efb4c +0x4e:  mov    $0x1,%eax
082efb51 +0x53:  leave
082efb52 +0x54:  ret
082efb53 +0x55:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultMgr::OnTimeoutCloseAssault @ 0x82efafe

/* pvp_assault::CAssaultMgr::OnTimeoutCloseAssault(unsigned int, int) */

undefined4 __thiscall
pvp_assault::CAssaultMgr::OnTimeoutCloseAssault(CAssaultMgr *this,uint param_1,int param_2)

{
  CAssaultPlace *this_00;
  
                    /* try { // try from 082efb18 to 082efb2a has its CatchHandler @ 082efb2d */
  this_00 = (CAssaultPlace *)_GetAssaultPlace(this,param_1,param_2);
  CAssaultPlace::TimeoutCloseAssault(this_00);
  return 1;
}
```
