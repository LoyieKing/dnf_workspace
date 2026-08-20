# GetMailString

`_ZN4ARAD14FnRewardMomoji13GetMailStringEPcS1_`

`ARAD::FnRewardMomoji::GetMailString(char*, char*)`

| 类 | 地址 |
|---|---|
| `ARAD::FnRewardMomoji` | `0x0819537c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819537c  _ZN4ARAD14FnRewardMomoji13GetMailStringEPcS1_
#           ARAD::FnRewardMomoji::GetMailString(char*, char*)
# range [0x0819537c, 0x081953f9]
0819537c +0x00:  push   %ebp
0819537d +0x01:  mov    %esp,%ebp
0819537f +0x03:  sub    $0x18,%esp
08195382 +0x06:  movl   $0x0,0xc(%esp)
0819538a +0x0e:  movl   $"momiji_event_title",0x8(%esp)
08195392 +0x16:  movl   $0x4,0x4(%esp)
0819539a +0x1e:  movl   $&g_scriptStringManager_,(%esp)
081953a1 +0x25:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
081953a6 +0x2a:  movl   $0x14,0x8(%esp)
081953ae +0x32:  mov    %eax,0x4(%esp)
081953b2 +0x36:  mov    0x10(%ebp),%eax
081953b5 +0x39:  mov    %eax,(%esp)
081953b8 +0x3c:  call   0807d8d0 <_init+0x1c8>
081953bd +0x41:  movl   $0x0,0xc(%esp)
081953c5 +0x49:  movl   $"momiji_event_mail",0x8(%esp)
081953cd +0x51:  movl   $0x4,0x4(%esp)
081953d5 +0x59:  movl   $&g_scriptStringManager_,(%esp)
081953dc +0x60:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
081953e1 +0x65:  movl   $0xff,0x8(%esp)
081953e9 +0x6d:  mov    %eax,0x4(%esp)
081953ed +0x71:  mov    0xc(%ebp),%eax
081953f0 +0x74:  mov    %eax,(%esp)
081953f3 +0x77:  call   0807d8d0 <_init+0x1c8>
081953f8 +0x7c:  leave
081953f9 +0x7d:  ret
```

## 反编译 C

```c
// ARAD::FnRewardMomoji::GetMailString @ 0x819537c

/* ARAD::FnRewardMomoji::GetMailString(char*, char*) */

void __thiscall
ARAD::FnRewardMomoji::GetMailString(FnRewardMomoji *this,char *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              "momiji_event_title",(bool *)0x0);
  strncpy(param_2,pcVar1,0x14);
  pcVar1 = (char *)RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              "momiji_event_mail",(bool *)0x0);
  strncpy(param_1,pcVar1,0xff);
  return;
}
```
