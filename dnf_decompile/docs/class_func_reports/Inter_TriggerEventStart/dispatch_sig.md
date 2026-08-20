# dispatch_sig

`_ZN23Inter_TriggerEventStart12dispatch_sigEP5CUserPci`

`Inter_TriggerEventStart::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_TriggerEventStart` | `0x084ce5f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ce5f4  _ZN23Inter_TriggerEventStart12dispatch_sigEP5CUserPci
#           Inter_TriggerEventStart::dispatch_sig(CUser*, char*, int)
# range [0x084ce5f4, 0x084ce645]
084ce5f4 +0x00:  push   %ebp
084ce5f5 +0x01:  mov    %esp,%ebp
084ce5f7 +0x03:  sub    $0x28,%esp
084ce5fa +0x06:  mov    0x10(%ebp),%eax
084ce5fd +0x09:  mov    %eax,-0xc(%ebp)
084ce600 +0x0c:  mov    &_ZN10GlobalData15s_event_managerE,%eax
084ce605 +0x11:  test   %eax,%eax
084ce607 +0x13:  je     084ce63e <+0x4a>
084ce609 +0x15:  mov    -0xc(%ebp),%eax
084ce60c +0x18:  mov    0xa(%eax),%eax
084ce60f +0x1b:  mov    %eax,%edx
084ce611 +0x1d:  mov    &_ZN10GlobalData15s_event_managerE,%eax
084ce616 +0x22:  mov    -0xc(%ebp),%ecx
084ce619 +0x25:  mov    0xe(%ecx),%ecx
084ce61c +0x28:  mov    %ecx,0x8(%esp)
084ce620 +0x2c:  mov    %edx,0x4(%esp)
084ce624 +0x30:  mov    %eax,(%esp)
084ce627 +0x33:  call   08115cc6 <_ZN13CEventManager17TriggerEventStartEi10Word_Param>  ; CEventManager::TriggerEventStart(int, Word_Param)
084ce62c +0x38:  test   %al,%al
084ce62e +0x3a:  je     084ce637 <+0x43>
084ce630 +0x3c:  mov    $0x0,%eax
084ce635 +0x41:  jmp    084ce63c <+0x48>
084ce637 +0x43:  mov    $0x2a8b,%eax
084ce63c +0x48:  jmp    084ce643 <+0x4f>
084ce63e +0x4a:  mov    $0x0,%eax
084ce643 +0x4f:  leave
084ce644 +0x50:  ret
084ce645 +0x51:  nop
```

## 反编译 C

```c
// Inter_TriggerEventStart::dispatch_sig @ 0x84ce5f4

/* Inter_TriggerEventStart::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_TriggerEventStart::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  if (GlobalData::s_event_manager == (CEventManager *)0x0) {
    uVar2 = 0;
  }
  else {
    cVar1 = CEventManager::TriggerEventStart
                      (GlobalData::s_event_manager,*(undefined4 *)(param_3 + 10),
                       *(undefined4 *)(param_3 + 0xe));
    if (cVar1 == '\0') {
      uVar2 = 0x2a8b;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
