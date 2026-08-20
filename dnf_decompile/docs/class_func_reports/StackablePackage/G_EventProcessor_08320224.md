# G_EventProcessor

`_ZN16StackablePackageL16G_EventProcessorEv`

`StackablePackage::G_EventProcessor()`

| 类 | 地址 |
|---|---|
| `StackablePackage` | `0x08320224` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08320224  _ZN16StackablePackageL16G_EventProcessorEv
#           StackablePackage::G_EventProcessor()
# range [0x08320224, 0x083202b7]
08320224 +0x00:  push   %ebp
08320225 +0x01:  mov    %esp,%ebp
08320227 +0x03:  push   %edi
08320228 +0x04:  push   %esi
08320229 +0x05:  push   %ebx
0832022a +0x06:  sub    $0x1c,%esp
0832022d +0x09:  mov    $&_ZGVZN16StackablePackageL16G_EventProcessorEvE8instance,%eax
08320232 +0x0e:  movzbl (%eax),%eax
08320235 +0x11:  test   %al,%al
08320237 +0x13:  jne    083202aa <+0x86>
08320239 +0x15:  movl   $&_ZGVZN16StackablePackageL16G_EventProcessorEvE8instance,(%esp)
08320240 +0x1c:  call   08725330 <__cxa_guard_acquire>
08320245 +0x21:  test   %eax,%eax
08320247 +0x23:  setne  %al
0832024a +0x26:  test   %al,%al
0832024c +0x28:  je     083202aa <+0x86>
0832024e +0x2a:  mov    $0x0,%ebx
08320253 +0x2f:  movl   $&_ZZN16StackablePackageL16G_EventProcessorEvE8instance,(%esp)
0832025a +0x36:  call   082817ca <_ZN16StackablePackage19EventProcessManagerC1Ev>  ; StackablePackage::EventProcessManager::EventProcessManager()
0832025f +0x3b:  movl   $&_ZGVZN16StackablePackageL16G_EventProcessorEvE8instance,(%esp)
08320266 +0x42:  call   08725250 <__cxa_guard_release>
0832026b +0x47:  mov    $&_ZN16StackablePackage19EventProcessManagerD1Ev,%eax
08320270 +0x4c:  movl   $&__dso_handle,0x8(%esp)
08320278 +0x54:  movl   $&_ZZN16StackablePackageL16G_EventProcessorEvE8instance,0x4(%esp)
08320280 +0x5c:  mov    %eax,(%esp)
08320283 +0x5f:  call   0807ddd0 <_init+0x6c8>
08320288 +0x64:  jmp    083202aa <+0x86>
0832028a +0x66:  mov    %edx,%esi
0832028c +0x68:  mov    %eax,%edi
0832028e +0x6a:  test   %bl,%bl
08320290 +0x6c:  jne    0832029e <+0x7a>
08320292 +0x6e:  movl   $&_ZGVZN16StackablePackageL16G_EventProcessorEvE8instance,(%esp)
08320299 +0x75:  call   087252c0 <__cxa_guard_abort>
0832029e +0x7a:  mov    %edi,%eax
083202a0 +0x7c:  mov    %esi,%edx
083202a2 +0x7e:  mov    %eax,(%esp)
083202a5 +0x81:  call   08ae3750 <_Unwind_Resume>
083202aa +0x86:  mov    $&_ZZN16StackablePackageL16G_EventProcessorEvE8instance,%eax
083202af +0x8b:  add    $0x1c,%esp
083202b2 +0x8e:  pop    %ebx
083202b3 +0x8f:  pop    %esi
083202b4 +0x90:  pop    %edi
083202b5 +0x91:  pop    %ebp
083202b6 +0x92:  ret
083202b7 +0x93:  nop
```

## 反编译 C

```c
// StackablePackage::G_EventProcessor @ 0x8320224

/* StackablePackage::G_EventProcessor() */

undefined4 * StackablePackage::G_EventProcessor(void)

{
  int iVar1;
  
  if (G_EventProcessor()::instance == '\0') {
    iVar1 = __cxa_guard_acquire(&G_EventProcessor()::instance);
    if (iVar1 != 0) {
                    /* try { // try from 0832025a to 0832025e has its CatchHandler @ 0832028a */
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
