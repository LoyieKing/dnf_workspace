# dispatch_sig

`_ZN21Inter_TriggerEventEnd12dispatch_sigEP5CUserPci`

`Inter_TriggerEventEnd::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_TriggerEventEnd` | `0x084ce646` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ce646  _ZN21Inter_TriggerEventEnd12dispatch_sigEP5CUserPci
#           Inter_TriggerEventEnd::dispatch_sig(CUser*, char*, int)
# range [0x084ce646, 0x084ce6d1]
084ce646 +0x00:  push   %ebp
084ce647 +0x01:  mov    %esp,%ebp
084ce649 +0x03:  push   %ebx
084ce64a +0x04:  sub    $0x34,%esp
084ce64d +0x07:  mov    0x10(%ebp),%eax
084ce650 +0x0a:  mov    %eax,-0xc(%ebp)
084ce653 +0x0d:  mov    -0xc(%ebp),%eax
084ce656 +0x10:  mov    0xa(%eax),%ebx
084ce659 +0x13:  movl   $0x0,0xc(%esp)
084ce661 +0x1b:  movl   $0x2a96,0x8(%esp)
084ce669 +0x23:  movl   $&_ZZN21Inter_TriggerEventEnd12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084ce671 +0x2b:  lea    -0x1c(%ebp),%eax
084ce674 +0x2e:  mov    %eax,(%esp)
084ce677 +0x31:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084ce67c +0x36:  mov    %ebx,0x8(%esp)
084ce680 +0x3a:  movl   $"Inter_TriggerEventEnd::dispatch_sig\tevent code(%d), parameter(%d)",0x4(%esp)
084ce688 +0x42:  lea    -0x1c(%ebp),%eax
084ce68b +0x45:  mov    %eax,(%esp)
084ce68e +0x48:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084ce693 +0x4d:  mov    &_ZN10GlobalData15s_event_managerE,%eax
084ce698 +0x52:  test   %eax,%eax
084ce69a +0x54:  je     084ce6c7 <+0x81>
084ce69c +0x56:  mov    -0xc(%ebp),%eax
084ce69f +0x59:  mov    0xa(%eax),%eax
084ce6a2 +0x5c:  mov    %eax,%edx
084ce6a4 +0x5e:  mov    &_ZN10GlobalData15s_event_managerE,%eax
084ce6a9 +0x63:  mov    %edx,0x4(%esp)
084ce6ad +0x67:  mov    %eax,(%esp)
084ce6b0 +0x6a:  call   08115d60 <_ZN13CEventManager15TriggerEventEndEi>  ; CEventManager::TriggerEventEnd(int)
084ce6b5 +0x6f:  test   %al,%al
084ce6b7 +0x71:  je     084ce6c0 <+0x7a>
084ce6b9 +0x73:  mov    $0x0,%eax
084ce6be +0x78:  jmp    084ce6c5 <+0x7f>
084ce6c0 +0x7a:  mov    $0x2a9a,%eax
084ce6c5 +0x7f:  jmp    084ce6cc <+0x86>
084ce6c7 +0x81:  mov    $0x0,%eax
084ce6cc +0x86:  add    $0x34,%esp
084ce6cf +0x89:  pop    %ebx
084ce6d0 +0x8a:  pop    %ebp
084ce6d1 +0x8b:  ret
```

## 反编译 C

```c
// Inter_TriggerEventEnd::dispatch_sig @ 0x84ce646

/* Inter_TriggerEventEnd::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_TriggerEventEnd::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  cMyTrace local_20 [16];
  int local_10;
  
  local_10 = param_3;
  uVar2 = *(undefined4 *)(param_3 + 10);
  cMyTrace::cMyTrace(local_20,"virtual int Inter_TriggerEventEnd::dispatch_sig(CUser*, char*, int)",
                     0x2a96,0);
  cMyTrace::operator()
            (local_20,"Inter_TriggerEventEnd::dispatch_sig\tevent code(%d), parameter(%d)",uVar2);
  if (GlobalData::s_event_manager == (CEventManager *)0x0) {
    uVar2 = 0;
  }
  else {
    cVar1 = CEventManager::TriggerEventEnd(GlobalData::s_event_manager,*(int *)(local_10 + 10));
    if (cVar1 == '\0') {
      uVar2 = 0x2a9a;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
