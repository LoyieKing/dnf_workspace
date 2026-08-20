# LeaveAssaultPlace

`_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEP5CUserb`

`pvp_assault::CAssaultPlace::LeaveAssaultPlace(CUser*, bool)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082eb450` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082eb450  _ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEP5CUserb
#           pvp_assault::CAssaultPlace::LeaveAssaultPlace(CUser*, bool)
# range [0x082eb450, 0x082eb49b]
082eb450 +0x00:  push   %ebp
082eb451 +0x01:  mov    %esp,%ebp
082eb453 +0x03:  push   %ebx
082eb454 +0x04:  sub    $0x24,%esp
082eb457 +0x07:  mov    0x10(%ebp),%eax
082eb45a +0x0a:  mov    %al,-0xc(%ebp)
082eb45d +0x0d:  movzbl -0xc(%ebp),%ebx
082eb461 +0x11:  movl   $0x1,0x8(%esp)
082eb469 +0x19:  mov    0xc(%ebp),%eax
082eb46c +0x1c:  mov    %eax,0x4(%esp)
082eb470 +0x20:  mov    0x8(%ebp),%eax
082eb473 +0x23:  mov    %eax,(%esp)
082eb476 +0x26:  call   082e849a <_ZN11pvp_assault13CAssaultPlace13_GetUserIndexEP5CUserb>  ; pvp_assault::CAssaultPlace::_GetUserIndex(CUser*, bool)
082eb47b +0x2b:  movl   $0x0,0xc(%esp)
082eb483 +0x33:  mov    %ebx,0x8(%esp)
082eb487 +0x37:  mov    %eax,0x4(%esp)
082eb48b +0x3b:  mov    0x8(%ebp),%eax
082eb48e +0x3e:  mov    %eax,(%esp)
082eb491 +0x41:  call   082ead6a <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb>  ; pvp_assault::CAssaultPlace::LeaveAssaultPlace(int, bool, bool)
082eb496 +0x46:  add    $0x24,%esp
082eb499 +0x49:  pop    %ebx
082eb49a +0x4a:  pop    %ebp
082eb49b +0x4b:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::LeaveAssaultPlace @ 0x82eb450

/* pvp_assault::CAssaultPlace::LeaveAssaultPlace(CUser*, bool) */

void __thiscall
pvp_assault::CAssaultPlace::LeaveAssaultPlace(CAssaultPlace *this,CUser *param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = _GetUserIndex(this,param_1,true);
  LeaveAssaultPlace(this,iVar1,param_2,false);
  return;
}
```
