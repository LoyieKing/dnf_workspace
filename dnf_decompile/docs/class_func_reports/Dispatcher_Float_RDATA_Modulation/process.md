# process

`_ZN33Dispatcher_Float_RDATA_Modulation7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_Float_RDATA_Modulation::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Float_RDATA_Modulation` | `0x08264acc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08264acc  _ZN33Dispatcher_Float_RDATA_Modulation7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_Float_RDATA_Modulation::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x08264acc, 0x08264b5b]
08264acc +0x00:  push   %ebp
08264acd +0x01:  mov    %esp,%ebp
08264acf +0x03:  sub    $0x38,%esp
08264ad2 +0x06:  mov    0x10(%ebp),%eax
08264ad5 +0x09:  mov    %eax,0x8(%esp)
08264ad9 +0x0d:  mov    0xc(%ebp),%eax
08264adc +0x10:  mov    %eax,0x4(%esp)
08264ae0 +0x14:  mov    0x8(%ebp),%eax
08264ae3 +0x17:  mov    %eax,(%esp)
08264ae6 +0x1a:  call   08264b5c <_ZN33Dispatcher_Float_RDATA_Modulation11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_Float_RDATA_Modulation::check_error(CUser*, MSG_BASE&)
08264aeb +0x1f:  mov    %eax,-0x18(%ebp)
08264aee +0x22:  cmpl   $0x0,-0x18(%ebp)
08264af2 +0x26:  je     08264afb <+0x2f>
08264af4 +0x28:  mov    $0x0,%eax
08264af9 +0x2d:  jmp    08264b5a <+0x8e>
08264afb +0x2f:  mov    0x10(%ebp),%eax
08264afe +0x32:  mov    %eax,-0x14(%ebp)
08264b01 +0x35:  mov    -0x14(%ebp),%eax
08264b04 +0x38:  mov    0x10(%eax),%eax
08264b07 +0x3b:  xor    $0x59ab991f,%eax
08264b0c +0x40:  mov    %eax,-0x10(%ebp)
08264b0f +0x43:  mov    -0x14(%ebp),%eax
08264b12 +0x46:  mov    0x14(%eax),%eax
08264b15 +0x49:  xor    $0x1f93712b,%eax
08264b1a +0x4e:  mov    %eax,-0xc(%ebp)
08264b1d +0x51:  mov    0xc(%ebp),%eax
08264b20 +0x54:  mov    %eax,(%esp)
08264b23 +0x57:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08264b28 +0x5c:  mov    -0xc(%ebp),%edx
08264b2b +0x5f:  mov    %edx,0x14(%esp)
08264b2f +0x63:  mov    -0x10(%ebp),%edx
08264b32 +0x66:  mov    %edx,0x10(%esp)
08264b36 +0x6a:  movl   $0x1,0xc(%esp)
08264b3e +0x72:  movl   $0x349,0x8(%esp)
08264b46 +0x7a:  mov    0xc(%ebp),%edx
08264b49 +0x7d:  mov    %edx,0x4(%esp)
08264b4d +0x81:  mov    %eax,(%esp)
08264b50 +0x84:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
08264b55 +0x89:  mov    $0x0,%eax
08264b5a +0x8e:  leave
08264b5b +0x8f:  ret
```

## 反编译 C

```c
// Dispatcher_Float_RDATA_Modulation::process @ 0x8264acc

/* Dispatcher_Float_RDATA_Modulation::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_Float_RDATA_Modulation::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  CHackAnalyzer *pCVar4;
  
  iVar3 = check_error(param_1,param_2);
  if (iVar3 == 0) {
    uVar1 = *(uint *)(param_3 + 0x10);
    uVar2 = *(uint *)(param_3 + 0x14);
    pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
    WongWork::CHackAnalyzer::addServerHackCnt
              (pCVar4,param_2,0x349,1,uVar1 ^ 0x59ab991f,uVar2 ^ 0x1f93712b);
  }
  return 0;
}
```
