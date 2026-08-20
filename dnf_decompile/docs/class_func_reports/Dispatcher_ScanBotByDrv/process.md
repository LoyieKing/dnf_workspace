# process

`_ZN23Dispatcher_ScanBotByDrv7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_ScanBotByDrv::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ScanBotByDrv` | `0x08264740` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08264740  _ZN23Dispatcher_ScanBotByDrv7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_ScanBotByDrv::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x08264740, 0x08264805]
08264740 +0x00:  push   %ebp
08264741 +0x01:  mov    %esp,%ebp
08264743 +0x03:  push   %ebx
08264744 +0x04:  sub    $0x34,%esp
08264747 +0x07:  mov    0x10(%ebp),%eax
0826474a +0x0a:  mov    %eax,0x8(%esp)
0826474e +0x0e:  mov    0xc(%ebp),%eax
08264751 +0x11:  mov    %eax,0x4(%esp)
08264755 +0x15:  mov    0x8(%ebp),%eax
08264758 +0x18:  mov    %eax,(%esp)
0826475b +0x1b:  call   08264806 <_ZN23Dispatcher_ScanBotByDrv11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_ScanBotByDrv::check_error(CUser*, MSG_BASE&)
08264760 +0x20:  mov    %eax,-0x14(%ebp)
08264763 +0x23:  cmpl   $0x0,-0x14(%ebp)
08264767 +0x27:  je     08264773 <+0x33>
08264769 +0x29:  mov    $0x0,%eax
0826476e +0x2e:  jmp    082647ff <+0xbf>
08264773 +0x33:  mov    0x10(%ebp),%eax
08264776 +0x36:  mov    %eax,-0x10(%ebp)
08264779 +0x39:  mov    -0x10(%ebp),%eax
0826477c +0x3c:  mov    0xd(%eax),%eax
0826477f +0x3f:  add    $0x708,%eax
08264784 +0x44:  mov    %eax,-0xc(%ebp)
08264787 +0x47:  mov    0xc(%ebp),%eax
0826478a +0x4a:  mov    %eax,(%esp)
0826478d +0x4d:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08264792 +0x52:  movl   $0x708,0x4(%esp)
0826479a +0x5a:  mov    %eax,(%esp)
0826479d +0x5d:  call   080f9856 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x62>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x62
082647a2 +0x62:  mov    -0x10(%ebp),%eax
082647a5 +0x65:  movzbl 0x11(%eax),%eax
082647a9 +0x69:  movsbl %al,%edx
082647ac +0x6c:  mov    -0xc(%ebp),%eax
082647af +0x6f:  cwtl
082647b0 +0x70:  mov    %edx,0x8(%esp)
082647b4 +0x74:  mov    %eax,0x4(%esp)
082647b8 +0x78:  mov    0xc(%ebp),%eax
082647bb +0x7b:  mov    %eax,(%esp)
082647be +0x7e:  call   080f9968 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x174>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x174
082647c3 +0x83:  mov    %eax,%ebx
082647c5 +0x85:  mov    0xc(%ebp),%eax
082647c8 +0x88:  mov    %eax,(%esp)
082647cb +0x8b:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
082647d0 +0x90:  movl   $0x0,0x14(%esp)
082647d8 +0x98:  mov    %ebx,0x10(%esp)
082647dc +0x9c:  movl   $0x1,0xc(%esp)
082647e4 +0xa4:  mov    -0xc(%ebp),%edx
082647e7 +0xa7:  mov    %edx,0x8(%esp)
082647eb +0xab:  mov    0xc(%ebp),%edx
082647ee +0xae:  mov    %edx,0x4(%esp)
082647f2 +0xb2:  mov    %eax,(%esp)
082647f5 +0xb5:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
082647fa +0xba:  mov    $0x0,%eax
082647ff +0xbf:  add    $0x34,%esp
08264802 +0xc2:  pop    %ebx
08264803 +0xc3:  pop    %ebp
08264804 +0xc4:  ret
08264805 +0xc5:  nop
```

## 反编译 C

```c
// Dispatcher_ScanBotByDrv::process @ 0x8264740

/* Dispatcher_ScanBotByDrv::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_ScanBotByDrv::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  CHackAnalyzer *pCVar2;
  undefined4 uVar3;
  ParamBase *pPVar4;
  
  pPVar4 = param_3;
  iVar1 = check_error(param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_3 + 0xd);
    pCVar2 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
    WongWork::CHackAnalyzer::setBaseHackType(pCVar2,0x708,pPVar4);
    uVar3 = CUser::SetETC((CUser *)param_2,(short)(iVar1 + 0x708),(int)(char)param_3[0x11]);
    pCVar2 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar2,param_2,iVar1 + 0x708,1,uVar3,0);
  }
  return 0;
}
```
