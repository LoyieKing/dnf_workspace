# G_EventProcessor

`_ZN16StackablePackageL16G_EventProcessorEv`

`StackablePackage::G_EventProcessor()`

| 类 | 地址 |
|---|---|
| `StackablePackage` | `0x084bba67` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084bba67  _ZN16StackablePackageL16G_EventProcessorEv
#           StackablePackage::G_EventProcessor()
# range [0x084bba67, 0x084bbaf9]
084bba67 +0x00:  push   %ebp
084bba68 +0x01:  mov    %esp,%ebp
084bba6a +0x03:  push   %edi
084bba6b +0x04:  push   %esi
084bba6c +0x05:  push   %ebx
084bba6d +0x06:  sub    $0x1c,%esp
084bba70 +0x09:  mov    $&_ZGVZN16StackablePackageL16G_EventProcessorEvE8instance,%eax
084bba75 +0x0e:  movzbl (%eax),%eax
084bba78 +0x11:  test   %al,%al
084bba7a +0x13:  jne    084bbaed <+0x86>
084bba7c +0x15:  movl   $&_ZGVZN16StackablePackageL16G_EventProcessorEvE8instance,(%esp)
084bba83 +0x1c:  call   08725330 <__cxa_guard_acquire>
084bba88 +0x21:  test   %eax,%eax
084bba8a +0x23:  setne  %al
084bba8d +0x26:  test   %al,%al
084bba8f +0x28:  je     084bbaed <+0x86>
084bba91 +0x2a:  mov    $0x0,%ebx
084bba96 +0x2f:  movl   $&_ZZN16StackablePackageL16G_EventProcessorEvE8instance,(%esp)
084bba9d +0x36:  call   082817ca <_ZN16StackablePackage19EventProcessManagerC1Ev>  ; StackablePackage::EventProcessManager::EventProcessManager()
084bbaa2 +0x3b:  movl   $&_ZGVZN16StackablePackageL16G_EventProcessorEvE8instance,(%esp)
084bbaa9 +0x42:  call   08725250 <__cxa_guard_release>
084bbaae +0x47:  mov    $&_ZN16StackablePackage19EventProcessManagerD1Ev,%eax
084bbab3 +0x4c:  movl   $&__dso_handle,0x8(%esp)
084bbabb +0x54:  movl   $&_ZZN16StackablePackageL16G_EventProcessorEvE8instance,0x4(%esp)
084bbac3 +0x5c:  mov    %eax,(%esp)
084bbac6 +0x5f:  call   0807ddd0 <_init+0x6c8>
084bbacb +0x64:  jmp    084bbaed <+0x86>
084bbacd +0x66:  mov    %edx,%esi
084bbacf +0x68:  mov    %eax,%edi
084bbad1 +0x6a:  test   %bl,%bl
084bbad3 +0x6c:  jne    084bbae1 <+0x7a>
084bbad5 +0x6e:  movl   $&_ZGVZN16StackablePackageL16G_EventProcessorEvE8instance,(%esp)
084bbadc +0x75:  call   087252c0 <__cxa_guard_abort>
084bbae1 +0x7a:  mov    %edi,%eax
084bbae3 +0x7c:  mov    %esi,%edx
084bbae5 +0x7e:  mov    %eax,(%esp)
084bbae8 +0x81:  call   08ae3750 <_Unwind_Resume>
084bbaed +0x86:  mov    $&_ZZN16StackablePackageL16G_EventProcessorEvE8instance,%eax
084bbaf2 +0x8b:  add    $0x1c,%esp
084bbaf5 +0x8e:  pop    %ebx
084bbaf6 +0x8f:  pop    %esi
084bbaf7 +0x90:  pop    %edi
084bbaf8 +0x91:  pop    %ebp
084bbaf9 +0x92:  ret
```

## 反编译 C

```c
// StackablePackage::G_EventProcessor @ 0x84bba67

/* StackablePackage::G_EventProcessor() */

undefined4 * StackablePackage::G_EventProcessor(void)

{
  int iVar1;
  
  if (G_EventProcessor()::instance == '\0') {
    iVar1 = __cxa_guard_acquire(&G_EventProcessor()::instance);
    if (iVar1 != 0) {
                    /* try { // try from 084bba9d to 084bbaa1 has its CatchHandler @ 084bbacd */
      EventProcessManager::EventProcessManager((EventProcessManager *)&G_EventProcessor()::instance)
      ;
      __cxa_guard_release(&G_EventProcessor()::instance);
      __cxa_atexit(EventProcessManager::~EventProcessManager,&G_EventProcessor()::instance,
                   &__dso_handle);
    }
  }
  return &G_EventProcessor()::instance;
}
```
