# dispatch_sig

`_ZN4ARAD10DISPATCHER29Arad_INTER_kDeleteServerState12dispatch_sigEP5CUserPci`

`ARAD::DISPATCHER::Arad_INTER_kDeleteServerState::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Arad_INTER_kDeleteServerState` | `0x0819935e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819935e  _ZN4ARAD10DISPATCHER29Arad_INTER_kDeleteServerState12dispatch_sigEP5CUserPci
#           ARAD::DISPATCHER::Arad_INTER_kDeleteServerState::dispatch_sig(CUser*, char*, int)
# range [0x0819935e, 0x081993c3]
0819935e +0x00:  push   %ebp
0819935f +0x01:  mov    %esp,%ebp
08199361 +0x03:  sub    $0x38,%esp
08199364 +0x06:  mov    0x10(%ebp),%eax
08199367 +0x09:  mov    %eax,-0xc(%ebp)
0819936a +0x0c:  cmpl   $0x0,-0xc(%ebp)
0819936e +0x10:  jne    081993a3 <+0x45>
08199370 +0x12:  movl   $"Packet_Arad_DeleteEffect is null.",0x10(%esp)
08199378 +0x1a:  movl   $0x540,0xc(%esp)
08199380 +0x22:  movl   $&_ZZN4ARAD10DISPATCHER29Arad_INTER_kDeleteServerState12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
08199388 +0x2a:  movl   $"localjapan/Arad_InterDispatcher.cpp",0x4(%esp)
08199390 +0x32:  movl   $0x1,(%esp)
08199397 +0x39:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0819939c +0x3e:  mov    $0x541,%eax
081993a1 +0x43:  jmp    081993c1 <+0x63>
081993a3 +0x45:  mov    -0xc(%ebp),%eax
081993a6 +0x48:  mov    0xe(%eax),%eax
081993a9 +0x4b:  mov    %eax,%edx
081993ab +0x4d:  mov    &_ZN10GlobalData21s_serverStateManager_E,%eax
081993b0 +0x52:  mov    %edx,0x4(%esp)
081993b4 +0x56:  mov    %eax,(%esp)
081993b7 +0x59:  call   081a93d4 <_ZN4ARAD23Arad_ServerStateManager11deleteStateE23ENUM_GLOBAL_EFFECT_ARAD>  ; ARAD::Arad_ServerStateManager::deleteState(ENUM_GLOBAL_EFFECT_ARAD)
081993bc +0x5e:  mov    $0x0,%eax
081993c1 +0x63:  leave
081993c2 +0x64:  ret
081993c3 +0x65:  nop
```

## 反编译 C

```c
// ARAD::DISPATCHER::Arad_INTER_kDeleteServerState::dispatch_sig @ 0x819935e

/* ARAD::DISPATCHER::Arad_INTER_kDeleteServerState::dispatch_sig(CUser*, char*, int) */

undefined4
ARAD::DISPATCHER::Arad_INTER_kDeleteServerState::dispatch_sig
          (CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    LogManager::logFormat
              (1,"localjapan/Arad_InterDispatcher.cpp",
               "virtual int ARAD::DISPATCHER::Arad_INTER_kDeleteServerState::dispatch_sig(CUser*, char*, int)"
               ,0x540,"Packet_Arad_DeleteEffect is null.");
    uVar1 = 0x541;
  }
  else {
    Arad_ServerStateManager::deleteState
              (GlobalData::s_serverStateManager_,*(undefined4 *)(param_3 + 0xe));
    uVar1 = 0;
  }
  return uVar1;
}
```
