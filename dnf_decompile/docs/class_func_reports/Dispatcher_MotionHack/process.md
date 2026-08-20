# process

`_ZN21Dispatcher_MotionHack7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_MotionHack::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MotionHack` | `0x0826464a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826464a  _ZN21Dispatcher_MotionHack7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_MotionHack::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x0826464a, 0x082646ad]
0826464a +0x00:  push   %ebp
0826464b +0x01:  mov    %esp,%ebp
0826464d +0x03:  push   %esi
0826464e +0x04:  push   %ebx
0826464f +0x05:  sub    $0x30,%esp
08264652 +0x08:  mov    0x10(%ebp),%eax
08264655 +0x0b:  mov    %eax,-0xc(%ebp)
08264658 +0x0e:  mov    -0xc(%ebp),%eax
0826465b +0x11:  movzbl 0xd(%eax),%eax
0826465f +0x15:  test   %al,%al
08264661 +0x17:  je     082646a1 <+0x57>
08264663 +0x19:  mov    -0xc(%ebp),%eax
08264666 +0x1c:  mov    0x12(%eax),%esi
08264669 +0x1f:  mov    -0xc(%ebp),%eax
0826466c +0x22:  mov    0xe(%eax),%ebx
0826466f +0x25:  mov    0xc(%ebp),%eax
08264672 +0x28:  mov    %eax,(%esp)
08264675 +0x2b:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0826467a +0x30:  mov    %esi,0x14(%esp)
0826467e +0x34:  mov    %ebx,0x10(%esp)
08264682 +0x38:  movl   $0x1,0xc(%esp)
0826468a +0x40:  movl   $0x83,0x8(%esp)
08264692 +0x48:  mov    0xc(%ebp),%edx
08264695 +0x4b:  mov    %edx,0x4(%esp)
08264699 +0x4f:  mov    %eax,(%esp)
0826469c +0x52:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
082646a1 +0x57:  mov    $0x0,%eax
082646a6 +0x5c:  add    $0x30,%esp
082646a9 +0x5f:  pop    %ebx
082646aa +0x60:  pop    %esi
082646ab +0x61:  pop    %ebp
082646ac +0x62:  ret
082646ad +0x63:  nop
```

## 反编译 C

```c
// Dispatcher_MotionHack::process @ 0x826464a

/* Dispatcher_MotionHack::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_MotionHack::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CHackAnalyzer *pCVar3;
  
  if (param_3[0xd] != (ParamBase)0x0) {
    uVar1 = *(undefined4 *)(param_3 + 0x12);
    uVar2 = *(undefined4 *)(param_3 + 0xe);
    pCVar3 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar3,param_2,0x83,1,uVar2,uVar1);
  }
  return 0;
}
```
