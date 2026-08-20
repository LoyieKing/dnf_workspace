# GetInstancePrivateStoreMgr

`_ZN13private_store26GetInstancePrivateStoreMgrEv`

`private_store::GetInstancePrivateStoreMgr()`

| 类 | 地址 |
|---|---|
| `private_store` | `0x085c4be8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c4be8  _ZN13private_store26GetInstancePrivateStoreMgrEv
#           private_store::GetInstancePrivateStoreMgr()
# range [0x085c4be8, 0x085c4c7b]
085c4be8 +0x00:  push   %ebp
085c4be9 +0x01:  mov    %esp,%ebp
085c4beb +0x03:  push   %edi
085c4bec +0x04:  push   %esi
085c4bed +0x05:  push   %ebx
085c4bee +0x06:  sub    $0x1c,%esp
085c4bf1 +0x09:  mov    $&_ZGVZN13private_store26GetInstancePrivateStoreMgrEvE8instance,%eax
085c4bf6 +0x0e:  movzbl (%eax),%eax
085c4bf9 +0x11:  test   %al,%al
085c4bfb +0x13:  jne    085c4c6e <+0x86>
085c4bfd +0x15:  movl   $&_ZGVZN13private_store26GetInstancePrivateStoreMgrEvE8instance,(%esp)
085c4c04 +0x1c:  call   08725330 <__cxa_guard_acquire>
085c4c09 +0x21:  test   %eax,%eax
085c4c0b +0x23:  setne  %al
085c4c0e +0x26:  test   %al,%al
085c4c10 +0x28:  je     085c4c6e <+0x86>
085c4c12 +0x2a:  mov    $0x0,%ebx
085c4c17 +0x2f:  movl   $&_ZZN13private_store26GetInstancePrivateStoreMgrEvE8instance,(%esp)
085c4c1e +0x36:  call   085ca3d6 <_ZN13private_store16CPrivateStoreMgrC1Ev>  ; private_store::CPrivateStoreMgr::CPrivateStoreMgr()
085c4c23 +0x3b:  movl   $&_ZGVZN13private_store26GetInstancePrivateStoreMgrEvE8instance,(%esp)
085c4c2a +0x42:  call   08725250 <__cxa_guard_release>
085c4c2f +0x47:  mov    $&_ZN13private_store16CPrivateStoreMgrD1Ev,%eax
085c4c34 +0x4c:  movl   $&__dso_handle,0x8(%esp)
085c4c3c +0x54:  movl   $&_ZZN13private_store26GetInstancePrivateStoreMgrEvE8instance,0x4(%esp)
085c4c44 +0x5c:  mov    %eax,(%esp)
085c4c47 +0x5f:  call   0807ddd0 <_init+0x6c8>
085c4c4c +0x64:  jmp    085c4c6e <+0x86>
085c4c4e +0x66:  mov    %edx,%esi
085c4c50 +0x68:  mov    %eax,%edi
085c4c52 +0x6a:  test   %bl,%bl
085c4c54 +0x6c:  jne    085c4c62 <+0x7a>
085c4c56 +0x6e:  movl   $&_ZGVZN13private_store26GetInstancePrivateStoreMgrEvE8instance,(%esp)
085c4c5d +0x75:  call   087252c0 <__cxa_guard_abort>
085c4c62 +0x7a:  mov    %edi,%eax
085c4c64 +0x7c:  mov    %esi,%edx
085c4c66 +0x7e:  mov    %eax,(%esp)
085c4c69 +0x81:  call   08ae3750 <_Unwind_Resume>
085c4c6e +0x86:  mov    $&_ZZN13private_store26GetInstancePrivateStoreMgrEvE8instance,%eax
085c4c73 +0x8b:  add    $0x1c,%esp
085c4c76 +0x8e:  pop    %ebx
085c4c77 +0x8f:  pop    %esi
085c4c78 +0x90:  pop    %edi
085c4c79 +0x91:  pop    %ebp
085c4c7a +0x92:  ret
085c4c7b +0x93:  nop
```

## 反编译 C

```c
// private_store::GetInstancePrivateStoreMgr @ 0x85c4be8

/* private_store::GetInstancePrivateStoreMgr() */

undefined1 * private_store::GetInstancePrivateStoreMgr(void)

{
  int iVar1;
  
  if (GetInstancePrivateStoreMgr()::instance == '\0') {
    iVar1 = __cxa_guard_acquire(&GetInstancePrivateStoreMgr()::instance);
    if (iVar1 != 0) {
                    /* try { // try from 085c4c1e to 085c4c22 has its CatchHandler @ 085c4c4e */
      CPrivateStoreMgr::CPrivateStoreMgr((CPrivateStoreMgr *)GetInstancePrivateStoreMgr()::instance)
      ;
      __cxa_guard_release(&GetInstancePrivateStoreMgr()::instance);
      __cxa_atexit(CPrivateStoreMgr::~CPrivateStoreMgr,GetInstancePrivateStoreMgr()::instance,
                   &__dso_handle);
    }
  }
  return GetInstancePrivateStoreMgr()::instance;
}
```
