# OnTimeoutCompleteLoad

`_ZN11pvp_assault11CAssaultMgr21OnTimeoutCompleteLoadEji`

`pvp_assault::CAssaultMgr::OnTimeoutCompleteLoad(unsigned int, int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultMgr` | `0x082ef818` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ef818  _ZN11pvp_assault11CAssaultMgr21OnTimeoutCompleteLoadEji
#           pvp_assault::CAssaultMgr::OnTimeoutCompleteLoad(unsigned int, int)
# range [0x082ef818, 0x082ef86d]
082ef818 +0x00:  push   %ebp
082ef819 +0x01:  mov    %esp,%ebp
082ef81b +0x03:  sub    $0x28,%esp
082ef81e +0x06:  mov    0x10(%ebp),%eax
082ef821 +0x09:  mov    %eax,0x8(%esp)
082ef825 +0x0d:  mov    0xc(%ebp),%eax
082ef828 +0x10:  mov    %eax,0x4(%esp)
082ef82c +0x14:  mov    0x8(%ebp),%eax
082ef82f +0x17:  mov    %eax,(%esp)
082ef832 +0x1a:  call   082eda94 <_ZN11pvp_assault11CAssaultMgr16_GetAssaultPlaceEji>  ; pvp_assault::CAssaultMgr::_GetAssaultPlace(unsigned int, int)
082ef837 +0x1f:  mov    %eax,-0x10(%ebp)
082ef83a +0x22:  mov    -0x10(%ebp),%eax
082ef83d +0x25:  mov    %eax,(%esp)
082ef840 +0x28:  call   082ea31a <_ZN11pvp_assault13CAssaultPlace19TimeoutCompleteLoadEv>  ; pvp_assault::CAssaultPlace::TimeoutCompleteLoad()
082ef845 +0x2d:  jmp    082ef866 <+0x4e>
082ef847 +0x2f:  cmp    $0x1,%edx
082ef84a +0x32:  je     082ef854 <+0x3c>
082ef84c +0x34:  mov    %eax,(%esp)
082ef84f +0x37:  call   08ae3750 <_Unwind_Resume>
082ef854 +0x3c:  mov    %eax,(%esp)
082ef857 +0x3f:  call   08725ce0 <__cxa_begin_catch>
082ef85c +0x44:  mov    (%eax),%eax
082ef85e +0x46:  mov    %eax,-0xc(%ebp)
082ef861 +0x49:  call   08725c30 <__cxa_end_catch>
082ef866 +0x4e:  mov    $0x1,%eax
082ef86b +0x53:  leave
082ef86c +0x54:  ret
082ef86d +0x55:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultMgr::OnTimeoutCompleteLoad @ 0x82ef818

/* pvp_assault::CAssaultMgr::OnTimeoutCompleteLoad(unsigned int, int) */

undefined4 __thiscall
pvp_assault::CAssaultMgr::OnTimeoutCompleteLoad(CAssaultMgr *this,uint param_1,int param_2)

{
  CAssaultPlace *this_00;
  
                    /* try { // try from 082ef832 to 082ef844 has its CatchHandler @ 082ef847 */
  this_00 = (CAssaultPlace *)_GetAssaultPlace(this,param_1,param_2);
  CAssaultPlace::TimeoutCompleteLoad(this_00);
  return 1;
}
```
