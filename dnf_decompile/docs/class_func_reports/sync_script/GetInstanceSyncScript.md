# GetInstanceSyncScript

`_ZN11sync_script21GetInstanceSyncScriptEv`

`sync_script::GetInstanceSyncScript()`

| 类 | 地址 |
|---|---|
| `sync_script` | `0x0861cbb4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861cbb4  _ZN11sync_script21GetInstanceSyncScriptEv
#           sync_script::GetInstanceSyncScript()
# range [0x0861cbb4, 0x0861cc46]
0861cbb4 +0x00:  push   %ebp
0861cbb5 +0x01:  mov    %esp,%ebp
0861cbb7 +0x03:  push   %edi
0861cbb8 +0x04:  push   %esi
0861cbb9 +0x05:  push   %ebx
0861cbba +0x06:  sub    $0x1c,%esp
0861cbbd +0x09:  mov    $&_ZGVZN11sync_script21GetInstanceSyncScriptEvE8instance,%eax
0861cbc2 +0x0e:  movzbl (%eax),%eax
0861cbc5 +0x11:  test   %al,%al
0861cbc7 +0x13:  jne    0861cc3a <+0x86>
0861cbc9 +0x15:  movl   $&_ZGVZN11sync_script21GetInstanceSyncScriptEvE8instance,(%esp)
0861cbd0 +0x1c:  call   08725330 <__cxa_guard_acquire>
0861cbd5 +0x21:  test   %eax,%eax
0861cbd7 +0x23:  setne  %al
0861cbda +0x26:  test   %al,%al
0861cbdc +0x28:  je     0861cc3a <+0x86>
0861cbde +0x2a:  mov    $0x0,%ebx
0861cbe3 +0x2f:  movl   $&_ZZN11sync_script21GetInstanceSyncScriptEvE8instance,(%esp)
0861cbea +0x36:  call   0861cc6c <_ZN11sync_script11CSyncScriptC1Ev>  ; sync_script::CSyncScript::CSyncScript()
0861cbef +0x3b:  movl   $&_ZGVZN11sync_script21GetInstanceSyncScriptEvE8instance,(%esp)
0861cbf6 +0x42:  call   08725250 <__cxa_guard_release>
0861cbfb +0x47:  mov    $&_ZN11sync_script11CSyncScriptD1Ev,%eax
0861cc00 +0x4c:  movl   $&__dso_handle,0x8(%esp)
0861cc08 +0x54:  movl   $&_ZZN11sync_script21GetInstanceSyncScriptEvE8instance,0x4(%esp)
0861cc10 +0x5c:  mov    %eax,(%esp)
0861cc13 +0x5f:  call   0807ddd0 <_init+0x6c8>
0861cc18 +0x64:  jmp    0861cc3a <+0x86>
0861cc1a +0x66:  mov    %edx,%esi
0861cc1c +0x68:  mov    %eax,%edi
0861cc1e +0x6a:  test   %bl,%bl
0861cc20 +0x6c:  jne    0861cc2e <+0x7a>
0861cc22 +0x6e:  movl   $&_ZGVZN11sync_script21GetInstanceSyncScriptEvE8instance,(%esp)
0861cc29 +0x75:  call   087252c0 <__cxa_guard_abort>
0861cc2e +0x7a:  mov    %edi,%eax
0861cc30 +0x7c:  mov    %esi,%edx
0861cc32 +0x7e:  mov    %eax,(%esp)
0861cc35 +0x81:  call   08ae3750 <_Unwind_Resume>
0861cc3a +0x86:  mov    $&_ZZN11sync_script21GetInstanceSyncScriptEvE8instance,%eax
0861cc3f +0x8b:  add    $0x1c,%esp
0861cc42 +0x8e:  pop    %ebx
0861cc43 +0x8f:  pop    %esi
0861cc44 +0x90:  pop    %edi
0861cc45 +0x91:  pop    %ebp
0861cc46 +0x92:  ret
```

## 反编译 C

```c
// sync_script::GetInstanceSyncScript @ 0x861cbb4

/* sync_script::GetInstanceSyncScript() */

undefined1 * sync_script::GetInstanceSyncScript(void)

{
  int iVar1;
  
  if (GetInstanceSyncScript()::instance == '\0') {
    iVar1 = __cxa_guard_acquire(&GetInstanceSyncScript()::instance);
    if (iVar1 != 0) {
                    /* try { // try from 0861cbea to 0861cbee has its CatchHandler @ 0861cc1a */
      CSyncScript::CSyncScript((CSyncScript *)GetInstanceSyncScript()::instance);
      __cxa_guard_release(&GetInstanceSyncScript()::instance);
      __cxa_atexit(CSyncScript::~CSyncScript,GetInstanceSyncScript()::instance,&__dso_handle);
    }
  }
  return GetInstanceSyncScript()::instance;
}
```
