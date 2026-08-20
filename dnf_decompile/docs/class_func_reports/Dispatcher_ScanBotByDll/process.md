# process

`_ZN23Dispatcher_ScanBotByDll7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_ScanBotByDll::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ScanBotByDll` | `0x08264488` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08264488  _ZN23Dispatcher_ScanBotByDll7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_ScanBotByDll::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x08264488, 0x08264537]
08264488 +0x00:  push   %ebp
08264489 +0x01:  mov    %esp,%ebp
0826448b +0x03:  push   %esi
0826448c +0x04:  push   %ebx
0826448d +0x05:  sub    $0x30,%esp
08264490 +0x08:  mov    0x10(%ebp),%eax
08264493 +0x0b:  mov    %eax,0x8(%esp)
08264497 +0x0f:  mov    0xc(%ebp),%eax
0826449a +0x12:  mov    %eax,0x4(%esp)
0826449e +0x16:  mov    0x8(%ebp),%eax
082644a1 +0x19:  mov    %eax,(%esp)
082644a4 +0x1c:  call   08264538 <_ZN23Dispatcher_ScanBotByDll11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_ScanBotByDll::check_error(CUser*, MSG_BASE&)
082644a9 +0x21:  mov    %eax,-0x14(%ebp)
082644ac +0x24:  cmpl   $0x0,-0x14(%ebp)
082644b0 +0x28:  je     082644b9 <+0x31>
082644b2 +0x2a:  mov    $0x0,%eax
082644b7 +0x2f:  jmp    08264530 <+0xa8>
082644b9 +0x31:  mov    0x10(%ebp),%eax
082644bc +0x34:  mov    %eax,-0x10(%ebp)
082644bf +0x37:  mov    -0x10(%ebp),%eax
082644c2 +0x3a:  mov    0xd(%eax),%eax
082644c5 +0x3d:  add    $0x352,%eax
082644ca +0x42:  mov    %eax,-0xc(%ebp)
082644cd +0x45:  mov    -0x10(%ebp),%eax
082644d0 +0x48:  movzwl 0x12(%eax),%eax
082644d4 +0x4c:  movzwl %ax,%esi
082644d7 +0x4f:  mov    -0x10(%ebp),%eax
082644da +0x52:  movzbl 0x11(%eax),%eax
082644de +0x56:  movsbl %al,%edx
082644e1 +0x59:  mov    -0xc(%ebp),%eax
082644e4 +0x5c:  cwtl
082644e5 +0x5d:  mov    %edx,0x8(%esp)
082644e9 +0x61:  mov    %eax,0x4(%esp)
082644ed +0x65:  mov    0xc(%ebp),%eax
082644f0 +0x68:  mov    %eax,(%esp)
082644f3 +0x6b:  call   080f9968 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x174>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x174
082644f8 +0x70:  mov    %eax,%ebx
082644fa +0x72:  mov    0xc(%ebp),%eax
082644fd +0x75:  mov    %eax,(%esp)
08264500 +0x78:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08264505 +0x7d:  mov    %esi,0x14(%esp)
08264509 +0x81:  mov    %ebx,0x10(%esp)
0826450d +0x85:  movl   $0x1,0xc(%esp)
08264515 +0x8d:  mov    -0xc(%ebp),%edx
08264518 +0x90:  mov    %edx,0x8(%esp)
0826451c +0x94:  mov    0xc(%ebp),%edx
0826451f +0x97:  mov    %edx,0x4(%esp)
08264523 +0x9b:  mov    %eax,(%esp)
08264526 +0x9e:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
0826452b +0xa3:  mov    $0x0,%eax
08264530 +0xa8:  add    $0x30,%esp
08264533 +0xab:  pop    %ebx
08264534 +0xac:  pop    %esi
08264535 +0xad:  pop    %ebp
08264536 +0xae:  ret
08264537 +0xaf:  nop
```

## 反编译 C

```c
// Dispatcher_ScanBotByDll::process @ 0x8264488

/* Dispatcher_ScanBotByDll::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_ScanBotByDll::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  CHackAnalyzer *pCVar4;
  
  iVar2 = check_error((Dispatcher_ScanBotByDll *)param_1,(CUser *)param_2,(MSG_BASE *)param_3);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_3 + 0xd);
    uVar1 = *(undefined2 *)(param_3 + 0x12);
    uVar3 = CUser::SetETC((CUser *)param_2,(short)(iVar2 + 0x352),(int)(char)param_3[0x11]);
    pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,param_2,iVar2 + 0x352,1,uVar3,uVar1);
  }
  return 0;
}
```
