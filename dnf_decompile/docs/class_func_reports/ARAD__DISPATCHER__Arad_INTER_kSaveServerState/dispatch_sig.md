# dispatch_sig

`_ZN4ARAD10DISPATCHER27Arad_INTER_kSaveServerState12dispatch_sigEP5CUserPci`

`ARAD::DISPATCHER::Arad_INTER_kSaveServerState::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Arad_INTER_kSaveServerState` | `0x08199278` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08199278  _ZN4ARAD10DISPATCHER27Arad_INTER_kSaveServerState12dispatch_sigEP5CUserPci
#           ARAD::DISPATCHER::Arad_INTER_kSaveServerState::dispatch_sig(CUser*, char*, int)
# range [0x08199278, 0x081992fd]
08199278 +0x00:  push   %ebp
08199279 +0x01:  mov    %esp,%ebp
0819927b +0x03:  sub    $0x38,%esp
0819927e +0x06:  mov    0x10(%ebp),%eax
08199281 +0x09:  mov    %eax,-0xc(%ebp)
08199284 +0x0c:  cmpl   $0x0,-0xc(%ebp)
08199288 +0x10:  jne    081992bd <+0x45>
0819928a +0x12:  movl   $"Packet_Arad_ApplyEffect is null.",0x10(%esp)
08199292 +0x1a:  movl   $0x521,0xc(%esp)
0819929a +0x22:  movl   $&_ZZN4ARAD10DISPATCHER27Arad_INTER_kSaveServerState12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
081992a2 +0x2a:  movl   $"localjapan/Arad_InterDispatcher.cpp",0x4(%esp)
081992aa +0x32:  movl   $0x1,(%esp)
081992b1 +0x39:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081992b6 +0x3e:  mov    $0x522,%eax
081992bb +0x43:  jmp    081992fc <+0x84>
081992bd +0x45:  lea    -0x18(%ebp),%eax
081992c0 +0x48:  mov    %eax,(%esp)
081992c3 +0x4b:  call   08186652 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x1c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x1c
081992c8 +0x50:  movw   $0x1,-0x18(%ebp)
081992ce +0x56:  mov    -0xc(%ebp),%eax
081992d1 +0x59:  mov    0x12(%eax),%eax
081992d4 +0x5c:  mov    %eax,-0x16(%ebp)
081992d7 +0x5f:  mov    -0xc(%ebp),%eax
081992da +0x62:  mov    0xe(%eax),%eax
081992dd +0x65:  mov    %eax,%edx
081992df +0x67:  mov    &_ZN10GlobalData21s_serverStateManager_E,%eax
081992e4 +0x6c:  lea    -0x18(%ebp),%ecx
081992e7 +0x6f:  mov    %ecx,0x8(%esp)
081992eb +0x73:  mov    %edx,0x4(%esp)
081992ef +0x77:  mov    %eax,(%esp)
081992f2 +0x7a:  call   081a936e <_ZN4ARAD23Arad_ServerStateManager11insertStateE23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessage>  ; ARAD::Arad_ServerStateManager::insertState(ENUM_GLOBAL_EFFECT_ARAD, AradServerStateMessage const&)
081992f7 +0x7f:  mov    $0x0,%eax
081992fc +0x84:  leave
081992fd +0x85:  ret
```

## 反编译 C

```c
// ARAD::DISPATCHER::Arad_INTER_kSaveServerState::dispatch_sig @ 0x8199278

/* ARAD::DISPATCHER::Arad_INTER_kSaveServerState::dispatch_sig(CUser*, char*, int) */

undefined4
ARAD::DISPATCHER::Arad_INTER_kSaveServerState::dispatch_sig
          (CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  undefined2 local_1c;
  undefined4 local_1a;
  int local_10;
  
  local_10 = param_3;
  if (param_3 == 0) {
    LogManager::logFormat
              (1,"localjapan/Arad_InterDispatcher.cpp",
               "virtual int ARAD::DISPATCHER::Arad_INTER_kSaveServerState::dispatch_sig(CUser*, char*, int)"
               ,0x521,"Packet_Arad_ApplyEffect is null.");
    uVar1 = 0x522;
  }
  else {
    AradServerStateMessage::AradServerStateMessage((AradServerStateMessage *)&local_1c);
    local_1c = 1;
    local_1a = *(undefined4 *)(local_10 + 0x12);
    Arad_ServerStateManager::insertState
              (GlobalData::s_serverStateManager_,*(undefined4 *)(local_10 + 0xe),&local_1c);
    uVar1 = 0;
  }
  return uVar1;
}
```
