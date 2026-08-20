# instance

`_ZN5nexon4cash18TransactionManager8instanceEv`

`nexon::cash::TransactionManager::instance()`

| 类 | 地址 |
|---|---|
| `nexon::cash::TransactionManager` | `0x081b0128` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b0128  _ZN5nexon4cash18TransactionManager8instanceEv
#           nexon::cash::TransactionManager::instance()
# range [0x081b0128, 0x081b01bb]
081b0128 +0x00:  push   %ebp
081b0129 +0x01:  mov    %esp,%ebp
081b012b +0x03:  push   %edi
081b012c +0x04:  push   %esi
081b012d +0x05:  push   %ebx
081b012e +0x06:  sub    $0x1c,%esp
081b0131 +0x09:  mov    $&_ZGVZN5nexon4cash18TransactionManager8instanceEvE1i,%eax
081b0136 +0x0e:  movzbl (%eax),%eax
081b0139 +0x11:  test   %al,%al
081b013b +0x13:  jne    081b01ae <+0x86>
081b013d +0x15:  movl   $&_ZGVZN5nexon4cash18TransactionManager8instanceEvE1i,(%esp)
081b0144 +0x1c:  call   08725330 <__cxa_guard_acquire>
081b0149 +0x21:  test   %eax,%eax
081b014b +0x23:  setne  %al
081b014e +0x26:  test   %al,%al
081b0150 +0x28:  je     081b01ae <+0x86>
081b0152 +0x2a:  mov    $0x0,%ebx
081b0157 +0x2f:  movl   $&_ZZN5nexon4cash18TransactionManager8instanceEvE1i,(%esp)
081b015e +0x36:  call   081b04f8 <_GLOBAL__I__ZN5nexon4cash18TransactionManager6tx_id_E+0xd0>  ; global constructors keyed to nexon::cash::TransactionManager::tx_id_+0xd0
081b0163 +0x3b:  movl   $&_ZGVZN5nexon4cash18TransactionManager8instanceEvE1i,(%esp)
081b016a +0x42:  call   08725250 <__cxa_guard_release>
081b016f +0x47:  mov    $&_ZN5nexon4cash18TransactionManagerD1Ev,%eax
081b0174 +0x4c:  movl   $&__dso_handle,0x8(%esp)
081b017c +0x54:  movl   $&_ZZN5nexon4cash18TransactionManager8instanceEvE1i,0x4(%esp)
081b0184 +0x5c:  mov    %eax,(%esp)
081b0187 +0x5f:  call   0807ddd0 <_init+0x6c8>
081b018c +0x64:  jmp    081b01ae <+0x86>
081b018e +0x66:  mov    %edx,%esi
081b0190 +0x68:  mov    %eax,%edi
081b0192 +0x6a:  test   %bl,%bl
081b0194 +0x6c:  jne    081b01a2 <+0x7a>
081b0196 +0x6e:  movl   $&_ZGVZN5nexon4cash18TransactionManager8instanceEvE1i,(%esp)
081b019d +0x75:  call   087252c0 <__cxa_guard_abort>
081b01a2 +0x7a:  mov    %edi,%eax
081b01a4 +0x7c:  mov    %esi,%edx
081b01a6 +0x7e:  mov    %eax,(%esp)
081b01a9 +0x81:  call   08ae3750 <_Unwind_Resume>
081b01ae +0x86:  mov    $&_ZZN5nexon4cash18TransactionManager8instanceEvE1i,%eax
081b01b3 +0x8b:  add    $0x1c,%esp
081b01b6 +0x8e:  pop    %ebx
081b01b7 +0x8f:  pop    %esi
081b01b8 +0x90:  pop    %edi
081b01b9 +0x91:  pop    %ebp
081b01ba +0x92:  ret
081b01bb +0x93:  nop
```

## 反编译 C

```c
// nexon::cash::TransactionManager::instance @ 0x81b0128

/* nexon::cash::TransactionManager::instance() */

undefined1 * nexon::cash::TransactionManager::instance(void)

{
  int iVar1;
  
  if (instance()::i == '\0') {
    iVar1 = __cxa_guard_acquire(&instance()::i);
    if (iVar1 != 0) {
                    /* try { // try from 081b015e to 081b0162 has its CatchHandler @ 081b018e */
      TransactionManager((TransactionManager *)instance()::i);
      __cxa_guard_release(&instance()::i);
      __cxa_atexit(~TransactionManager,instance()::i,&__dso_handle);
    }
  }
  return instance()::i;
}
```
