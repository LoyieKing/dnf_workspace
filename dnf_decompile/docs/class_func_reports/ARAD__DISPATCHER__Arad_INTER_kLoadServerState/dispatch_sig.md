# dispatch_sig

`_ZN4ARAD10DISPATCHER27Arad_INTER_kLoadServerState12dispatch_sigEP5CUserPci`

`ARAD::DISPATCHER::Arad_INTER_kLoadServerState::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Arad_INTER_kLoadServerState` | `0x081992fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081992fe  _ZN4ARAD10DISPATCHER27Arad_INTER_kLoadServerState12dispatch_sigEP5CUserPci
#           ARAD::DISPATCHER::Arad_INTER_kLoadServerState::dispatch_sig(CUser*, char*, int)
# range [0x081992fe, 0x0819935d]
081992fe +0x00:  push   %ebp
081992ff +0x01:  mov    %esp,%ebp
08199301 +0x03:  sub    $0x38,%esp
08199304 +0x06:  mov    0x10(%ebp),%eax
08199307 +0x09:  mov    %eax,-0xc(%ebp)
0819930a +0x0c:  cmpl   $0x0,-0xc(%ebp)
0819930e +0x10:  jne    08199343 <+0x45>
08199310 +0x12:  movl   $"SigServerState is null.",0x10(%esp)
08199318 +0x1a:  movl   $0x533,0xc(%esp)
08199320 +0x22:  movl   $&_ZZN4ARAD10DISPATCHER27Arad_INTER_kLoadServerState12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
08199328 +0x2a:  movl   $"localjapan/Arad_InterDispatcher.cpp",0x4(%esp)
08199330 +0x32:  movl   $0x1,(%esp)
08199337 +0x39:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0819933c +0x3e:  mov    $0x534,%eax
08199341 +0x43:  jmp    0819935c <+0x5e>
08199343 +0x45:  mov    &_ZN10GlobalData21s_serverStateManager_E,%eax
08199348 +0x4a:  mov    -0xc(%ebp),%edx
0819934b +0x4d:  mov    %edx,0x4(%esp)
0819934f +0x51:  mov    %eax,(%esp)
08199352 +0x54:  call   081a92ca <_ZN4ARAD23Arad_ServerStateManager11insertStateEPN4arad14SigServerStateE>  ; ARAD::Arad_ServerStateManager::insertState(arad::SigServerState*)
08199357 +0x59:  mov    $0x0,%eax
0819935c +0x5e:  leave
0819935d +0x5f:  ret
```

## 反编译 C

```c
// ARAD::DISPATCHER::Arad_INTER_kLoadServerState::dispatch_sig @ 0x81992fe

/* ARAD::DISPATCHER::Arad_INTER_kLoadServerState::dispatch_sig(CUser*, char*, int) */

undefined4
ARAD::DISPATCHER::Arad_INTER_kLoadServerState::dispatch_sig
          (CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    LogManager::logFormat
              (1,"localjapan/Arad_InterDispatcher.cpp",
               "virtual int ARAD::DISPATCHER::Arad_INTER_kLoadServerState::dispatch_sig(CUser*, char*, int)"
               ,0x533,"SigServerState is null.");
    uVar1 = 0x534;
  }
  else {
    Arad_ServerStateManager::insertState
              (GlobalData::s_serverStateManager_,(SigServerState *)param_3);
    uVar1 = 0;
  }
  return uVar1;
}
```
