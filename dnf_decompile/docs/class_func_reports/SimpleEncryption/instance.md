# instance

`_ZN16SimpleEncryption8instanceEv`

`SimpleEncryption::instance()`

| 类 | 地址 |
|---|---|
| `SimpleEncryption` | `0x0808cea2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808cea2  _ZN16SimpleEncryption8instanceEv
#           SimpleEncryption::instance()
# range [0x0808cea2, 0x0808cf05]
0808cea2 +0x00:  push   %ebp
0808cea3 +0x01:  mov    %esp,%ebp
0808cea5 +0x03:  sub    $0x18,%esp
0808cea8 +0x06:  mov    $&_ZGVZN16SimpleEncryption8instanceEvE16simpleEncryption,%eax
0808cead +0x0b:  movzbl (%eax),%eax
0808ceb0 +0x0e:  test   %al,%al
0808ceb2 +0x10:  jne    0808cefe <+0x5c>
0808ceb4 +0x12:  movl   $&_ZGVZN16SimpleEncryption8instanceEvE16simpleEncryption,(%esp)
0808cebb +0x19:  call   08725330 <__cxa_guard_acquire>
0808cec0 +0x1e:  test   %eax,%eax
0808cec2 +0x20:  setne  %al
0808cec5 +0x23:  test   %al,%al
0808cec7 +0x25:  je     0808cefe <+0x5c>
0808cec9 +0x27:  movl   $&_ZZN16SimpleEncryption8instanceEvE16simpleEncryption,(%esp)
0808ced0 +0x2e:  call   0808ce68 <_ZN16SimpleEncryptionC1Ev>  ; SimpleEncryption::SimpleEncryption()
0808ced5 +0x33:  movl   $&_ZGVZN16SimpleEncryption8instanceEvE16simpleEncryption,(%esp)
0808cedc +0x3a:  call   08725250 <__cxa_guard_release>
0808cee1 +0x3f:  mov    $&_ZN16SimpleEncryptionD1Ev,%eax
0808cee6 +0x44:  movl   $&__dso_handle,0x8(%esp)
0808ceee +0x4c:  movl   $&_ZZN16SimpleEncryption8instanceEvE16simpleEncryption,0x4(%esp)
0808cef6 +0x54:  mov    %eax,(%esp)
0808cef9 +0x57:  call   0807ddd0 <_init+0x6c8>
0808cefe +0x5c:  mov    $&_ZZN16SimpleEncryption8instanceEvE16simpleEncryption,%eax
0808cf03 +0x61:  leave
0808cf04 +0x62:  ret
0808cf05 +0x63:  nop
```

## 反编译 C

```c
// SimpleEncryption::instance @ 0x808cea2

/* SimpleEncryption::instance() */

undefined8 * SimpleEncryption::instance(void)

{
  int iVar1;
  
  if (instance()::simpleEncryption == '\0') {
    iVar1 = __cxa_guard_acquire(&instance()::simpleEncryption);
    if (iVar1 != 0) {
      SimpleEncryption((SimpleEncryption *)&instance()::simpleEncryption);
      __cxa_guard_release(&instance()::simpleEncryption);
      __cxa_atexit(~SimpleEncryption,&instance()::simpleEncryption,&__dso_handle);
    }
  }
  return &instance()::simpleEncryption;
}
```
