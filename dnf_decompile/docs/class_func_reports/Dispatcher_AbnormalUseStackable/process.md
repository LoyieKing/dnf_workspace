# process

`_ZN31Dispatcher_AbnormalUseStackable7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_AbnormalUseStackable::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_AbnormalUseStackable` | `0x082649ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082649ae  _ZN31Dispatcher_AbnormalUseStackable7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_AbnormalUseStackable::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x082649ae, 0x08264a2f]
082649ae +0x00:  push   %ebp
082649af +0x01:  mov    %esp,%ebp
082649b1 +0x03:  push   %esi
082649b2 +0x04:  push   %ebx
082649b3 +0x05:  sub    $0x30,%esp
082649b6 +0x08:  mov    0x10(%ebp),%eax
082649b9 +0x0b:  mov    %eax,0x8(%esp)
082649bd +0x0f:  mov    0xc(%ebp),%eax
082649c0 +0x12:  mov    %eax,0x4(%esp)
082649c4 +0x16:  mov    0x8(%ebp),%eax
082649c7 +0x19:  mov    %eax,(%esp)
082649ca +0x1c:  call   08264a30 <_ZN31Dispatcher_AbnormalUseStackable11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_AbnormalUseStackable::check_error(CUser*, MSG_BASE&)
082649cf +0x21:  mov    %eax,-0x10(%ebp)
082649d2 +0x24:  cmpl   $0x0,-0x10(%ebp)
082649d6 +0x28:  je     082649df <+0x31>
082649d8 +0x2a:  mov    $0x0,%eax
082649dd +0x2f:  jmp    08264a28 <+0x7a>
082649df +0x31:  mov    0x10(%ebp),%eax
082649e2 +0x34:  mov    %eax,-0xc(%ebp)
082649e5 +0x37:  mov    -0xc(%ebp),%eax
082649e8 +0x3a:  mov    0x14(%eax),%esi
082649eb +0x3d:  mov    -0xc(%ebp),%eax
082649ee +0x40:  mov    0x10(%eax),%ebx
082649f1 +0x43:  mov    0xc(%ebp),%eax
082649f4 +0x46:  mov    %eax,(%esp)
082649f7 +0x49:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
082649fc +0x4e:  mov    %esi,0x14(%esp)
08264a00 +0x52:  mov    %ebx,0x10(%esp)
08264a04 +0x56:  movl   $0x1,0xc(%esp)
08264a0c +0x5e:  movl   $0xfa0,0x8(%esp)
08264a14 +0x66:  mov    0xc(%ebp),%edx
08264a17 +0x69:  mov    %edx,0x4(%esp)
08264a1b +0x6d:  mov    %eax,(%esp)
08264a1e +0x70:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
08264a23 +0x75:  mov    $0x0,%eax
08264a28 +0x7a:  add    $0x30,%esp
08264a2b +0x7d:  pop    %ebx
08264a2c +0x7e:  pop    %esi
08264a2d +0x7f:  pop    %ebp
08264a2e +0x80:  ret
08264a2f +0x81:  nop
```

## 反编译 C

```c
// Dispatcher_AbnormalUseStackable::process @ 0x82649ae

/* Dispatcher_AbnormalUseStackable::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_AbnormalUseStackable::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  CHackAnalyzer *pCVar4;
  
  iVar3 = check_error(param_1,param_2);
  if (iVar3 == 0) {
    uVar1 = *(undefined4 *)(param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 0x10);
    pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,param_2,4000,1,uVar2,uVar1);
  }
  return 0;
}
```
