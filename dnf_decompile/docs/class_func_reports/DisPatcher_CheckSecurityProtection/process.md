# process

`_ZN34DisPatcher_CheckSecurityProtection7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_CheckSecurityProtection::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_CheckSecurityProtection` | `0x0826481a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826481a  _ZN34DisPatcher_CheckSecurityProtection7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_CheckSecurityProtection::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x0826481a, 0x08264851]
0826481a +0x00:  push   %ebp
0826481b +0x01:  mov    %esp,%ebp
0826481d +0x03:  sub    $0x28,%esp
08264820 +0x06:  mov    0x14(%ebp),%eax
08264823 +0x09:  mov    %eax,-0xc(%ebp)
08264826 +0x0c:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
0826482b +0x11:  movl   $0x38,0x8(%esp)
08264833 +0x19:  mov    0xc(%ebp),%edx
08264836 +0x1c:  mov    %edx,0x4(%esp)
0826483a +0x20:  mov    %eax,(%esp)
0826483d +0x23:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
08264842 +0x28:  mov    %eax,%edx
08264844 +0x2a:  mov    -0xc(%ebp),%eax
08264847 +0x2d:  mov    %dl,0x4(%eax)
0826484a +0x30:  mov    $0x0,%eax
0826484f +0x35:  leave
08264850 +0x36:  ret
08264851 +0x37:  nop
```

## 反编译 C

```c
// DisPatcher_CheckSecurityProtection::process @ 0x826481a

/* DisPatcher_CheckSecurityProtection::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_CheckSecurityProtection::process
          (DisPatcher_CheckSecurityProtection *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  ParamBase PVar1;
  
  PVar1 = (ParamBase)CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x38);
  param_3[4] = PVar1;
  return 0;
}
```
