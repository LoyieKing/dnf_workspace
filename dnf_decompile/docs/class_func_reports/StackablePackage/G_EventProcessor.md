# G_EventProcessor

`_ZN16StackablePackageL16G_EventProcessorEv`

`StackablePackage::G_EventProcessor()`

| 类 | 地址 |
|---|---|
| `StackablePackage` | `0x08281730` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08281730  _ZN16StackablePackageL16G_EventProcessorEv
#           StackablePackage::G_EventProcessor()
# range [0x08281730, 0x082817c3]
08281730 +0x00:  push   %ebp
08281731 +0x01:  mov    %esp,%ebp
08281733 +0x03:  push   %edi
08281734 +0x04:  push   %esi
08281735 +0x05:  push   %ebx
08281736 +0x06:  sub    $0x1c,%esp
08281739 +0x09:  mov    $&_ZGVZN16StackablePackageL16G_EventProcessorEvE8instance,%eax
0828173e +0x0e:  movzbl (%eax),%eax
08281741 +0x11:  test   %al,%al
08281743 +0x13:  jne    082817b6 <+0x86>
08281745 +0x15:  movl   $&_ZGVZN16StackablePackageL16G_EventProcessorEvE8instance,(%esp)
0828174c +0x1c:  call   08725330 <__cxa_guard_acquire>
08281751 +0x21:  test   %eax,%eax
08281753 +0x23:  setne  %al
08281756 +0x26:  test   %al,%al
08281758 +0x28:  je     082817b6 <+0x86>
0828175a +0x2a:  mov    $0x0,%ebx
0828175f +0x2f:  movl   $&_ZZN16StackablePackageL16G_EventProcessorEvE8instance,(%esp)
08281766 +0x36:  call   082817ca <_ZN16StackablePackage19EventProcessManagerC1Ev>  ; StackablePackage::EventProcessManager::EventProcessManager()
0828176b +0x3b:  movl   $&_ZGVZN16StackablePackageL16G_EventProcessorEvE8instance,(%esp)
08281772 +0x42:  call   08725250 <__cxa_guard_release>
08281777 +0x47:  mov    $&_ZN16StackablePackage19EventProcessManagerD1Ev,%eax
0828177c +0x4c:  movl   $&__dso_handle,0x8(%esp)
08281784 +0x54:  movl   $&_ZZN16StackablePackageL16G_EventProcessorEvE8instance,0x4(%esp)
0828178c +0x5c:  mov    %eax,(%esp)
0828178f +0x5f:  call   0807ddd0 <_init+0x6c8>
08281794 +0x64:  jmp    082817b6 <+0x86>
08281796 +0x66:  mov    %edx,%esi
08281798 +0x68:  mov    %eax,%edi
0828179a +0x6a:  test   %bl,%bl
0828179c +0x6c:  jne    082817aa <+0x7a>
0828179e +0x6e:  movl   $&_ZGVZN16StackablePackageL16G_EventProcessorEvE8instance,(%esp)
082817a5 +0x75:  call   087252c0 <__cxa_guard_abort>
082817aa +0x7a:  mov    %edi,%eax
082817ac +0x7c:  mov    %esi,%edx
082817ae +0x7e:  mov    %eax,(%esp)
082817b1 +0x81:  call   08ae3750 <_Unwind_Resume>
082817b6 +0x86:  mov    $&_ZZN16StackablePackageL16G_EventProcessorEvE8instance,%eax
082817bb +0x8b:  add    $0x1c,%esp
082817be +0x8e:  pop    %ebx
082817bf +0x8f:  pop    %esi
082817c0 +0x90:  pop    %edi
082817c1 +0x91:  pop    %ebp
082817c2 +0x92:  ret
082817c3 +0x93:  nop
```

## 反编译 C

```c
// StackablePackage::G_EventProcessor @ 0x8281730

/* StackablePackage::G_EventProcessor() */

undefined4 * StackablePackage::G_EventProcessor(void)

{
  int iVar1;
  
  if (G_EventProcessor()::instance == '\0') {
    iVar1 = __cxa_guard_acquire(&G_EventProcessor()::instance);
    if (iVar1 != 0) {
                    /* try { // try from 08281766 to 0828176a has its CatchHandler @ 08281796 */
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
