# OnTimeoutConnectP2P

`_ZN11pvp_assault11CAssaultMgr19OnTimeoutConnectP2PEji`

`pvp_assault::CAssaultMgr::OnTimeoutConnectP2P(unsigned int, int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultMgr` | `0x082efa52` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082efa52  _ZN11pvp_assault11CAssaultMgr19OnTimeoutConnectP2PEji
#           pvp_assault::CAssaultMgr::OnTimeoutConnectP2P(unsigned int, int)
# range [0x082efa52, 0x082efaa7]
082efa52 +0x00:  push   %ebp
082efa53 +0x01:  mov    %esp,%ebp
082efa55 +0x03:  sub    $0x28,%esp
082efa58 +0x06:  mov    0x10(%ebp),%eax
082efa5b +0x09:  mov    %eax,0x8(%esp)
082efa5f +0x0d:  mov    0xc(%ebp),%eax
082efa62 +0x10:  mov    %eax,0x4(%esp)
082efa66 +0x14:  mov    0x8(%ebp),%eax
082efa69 +0x17:  mov    %eax,(%esp)
082efa6c +0x1a:  call   082eda94 <_ZN11pvp_assault11CAssaultMgr16_GetAssaultPlaceEji>  ; pvp_assault::CAssaultMgr::_GetAssaultPlace(unsigned int, int)
082efa71 +0x1f:  mov    %eax,-0x10(%ebp)
082efa74 +0x22:  mov    -0x10(%ebp),%eax
082efa77 +0x25:  mov    %eax,(%esp)
082efa7a +0x28:  call   082ea716 <_ZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEv>  ; pvp_assault::CAssaultPlace::TimeoutConnectP2P()
082efa7f +0x2d:  jmp    082efaa0 <+0x4e>
082efa81 +0x2f:  cmp    $0x1,%edx
082efa84 +0x32:  je     082efa8e <+0x3c>
082efa86 +0x34:  mov    %eax,(%esp)
082efa89 +0x37:  call   08ae3750 <_Unwind_Resume>
082efa8e +0x3c:  mov    %eax,(%esp)
082efa91 +0x3f:  call   08725ce0 <__cxa_begin_catch>
082efa96 +0x44:  mov    (%eax),%eax
082efa98 +0x46:  mov    %eax,-0xc(%ebp)
082efa9b +0x49:  call   08725c30 <__cxa_end_catch>
082efaa0 +0x4e:  mov    $0x1,%eax
082efaa5 +0x53:  leave
082efaa6 +0x54:  ret
082efaa7 +0x55:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultMgr::OnTimeoutConnectP2P @ 0x82efa52

/* pvp_assault::CAssaultMgr::OnTimeoutConnectP2P(unsigned int, int) */

undefined4 __thiscall
pvp_assault::CAssaultMgr::OnTimeoutConnectP2P(CAssaultMgr *this,uint param_1,int param_2)

{
  CAssaultPlace *this_00;
  
                    /* try { // try from 082efa6c to 082efa7e has its CatchHandler @ 082efa81 */
  this_00 = (CAssaultPlace *)_GetAssaultPlace(this,param_1,param_2);
  CAssaultPlace::TimeoutConnectP2P(this_00);
  return 1;
}
```
