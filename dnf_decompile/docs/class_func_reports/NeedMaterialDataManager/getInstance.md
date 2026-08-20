# getInstance

`_ZN23NeedMaterialDataManager11getInstanceEv`

`NeedMaterialDataManager::getInstance()`

| 类 | 地址 |
|---|---|
| `NeedMaterialDataManager` | `0x081b5ab2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b5ab2  _ZN23NeedMaterialDataManager11getInstanceEv
#           NeedMaterialDataManager::getInstance()
# range [0x081b5ab2, 0x081b5b45]
081b5ab2 +0x00:  push   %ebp
081b5ab3 +0x01:  mov    %esp,%ebp
081b5ab5 +0x03:  push   %edi
081b5ab6 +0x04:  push   %esi
081b5ab7 +0x05:  push   %ebx
081b5ab8 +0x06:  sub    $0x1c,%esp
081b5abb +0x09:  mov    $&_ZGVZN23NeedMaterialDataManager11getInstanceEvE4inst,%eax
081b5ac0 +0x0e:  movzbl (%eax),%eax
081b5ac3 +0x11:  test   %al,%al
081b5ac5 +0x13:  jne    081b5b38 <+0x86>
081b5ac7 +0x15:  movl   $&_ZGVZN23NeedMaterialDataManager11getInstanceEvE4inst,(%esp)
081b5ace +0x1c:  call   08725330 <__cxa_guard_acquire>
081b5ad3 +0x21:  test   %eax,%eax
081b5ad5 +0x23:  setne  %al
081b5ad8 +0x26:  test   %al,%al
081b5ada +0x28:  je     081b5b38 <+0x86>
081b5adc +0x2a:  mov    $0x0,%ebx
081b5ae1 +0x2f:  movl   $&_ZZN23NeedMaterialDataManager11getInstanceEvE4inst,(%esp)
081b5ae8 +0x36:  call   081b5a3c <_ZN23NeedMaterialDataManagerC1Ev>  ; NeedMaterialDataManager::NeedMaterialDataManager()
081b5aed +0x3b:  movl   $&_ZGVZN23NeedMaterialDataManager11getInstanceEvE4inst,(%esp)
081b5af4 +0x42:  call   08725250 <__cxa_guard_release>
081b5af9 +0x47:  mov    $&_ZN23NeedMaterialDataManagerD1Ev,%eax
081b5afe +0x4c:  movl   $&__dso_handle,0x8(%esp)
081b5b06 +0x54:  movl   $&_ZZN23NeedMaterialDataManager11getInstanceEvE4inst,0x4(%esp)
081b5b0e +0x5c:  mov    %eax,(%esp)
081b5b11 +0x5f:  call   0807ddd0 <_init+0x6c8>
081b5b16 +0x64:  jmp    081b5b38 <+0x86>
081b5b18 +0x66:  mov    %edx,%esi
081b5b1a +0x68:  mov    %eax,%edi
081b5b1c +0x6a:  test   %bl,%bl
081b5b1e +0x6c:  jne    081b5b2c <+0x7a>
081b5b20 +0x6e:  movl   $&_ZGVZN23NeedMaterialDataManager11getInstanceEvE4inst,(%esp)
081b5b27 +0x75:  call   087252c0 <__cxa_guard_abort>
081b5b2c +0x7a:  mov    %edi,%eax
081b5b2e +0x7c:  mov    %esi,%edx
081b5b30 +0x7e:  mov    %eax,(%esp)
081b5b33 +0x81:  call   08ae3750 <_Unwind_Resume>
081b5b38 +0x86:  mov    $&_ZZN23NeedMaterialDataManager11getInstanceEvE4inst,%eax
081b5b3d +0x8b:  add    $0x1c,%esp
081b5b40 +0x8e:  pop    %ebx
081b5b41 +0x8f:  pop    %esi
081b5b42 +0x90:  pop    %edi
081b5b43 +0x91:  pop    %ebp
081b5b44 +0x92:  ret
081b5b45 +0x93:  nop
```

## 反编译 C

```c
// NeedMaterialDataManager::getInstance @ 0x81b5ab2

/* NeedMaterialDataManager::getInstance() */

undefined1 * NeedMaterialDataManager::getInstance(void)

{
  int iVar1;
  
  if (getInstance()::inst == '\0') {
    iVar1 = __cxa_guard_acquire(&getInstance()::inst);
    if (iVar1 != 0) {
                    /* try { // try from 081b5ae8 to 081b5aec has its CatchHandler @ 081b5b18 */
      NeedMaterialDataManager((NeedMaterialDataManager *)getInstance()::inst);
      __cxa_guard_release(&getInstance()::inst);
      __cxa_atexit(~NeedMaterialDataManager,getInstance()::inst,&__dso_handle);
    }
  }
  return getInstance()::inst;
}
```
