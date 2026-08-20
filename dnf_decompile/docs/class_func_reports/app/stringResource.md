# stringResource

`_ZN3app14stringResourceEv`

`app::stringResource()`

| 类 | 地址 |
|---|---|
| `app` | `0x08ad5439` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad5439  _ZN3app14stringResourceEv
#           app::stringResource()
# range [0x08ad5439, 0x08ad54cb]
08ad5439 +0x00:  push   %ebp
08ad543a +0x01:  mov    %esp,%ebp
08ad543c +0x03:  push   %edi
08ad543d +0x04:  push   %esi
08ad543e +0x05:  push   %ebx
08ad543f +0x06:  sub    $0x1c,%esp
08ad5442 +0x09:  mov    $&_ZGVZN3app14stringResourceEvE2sr,%eax
08ad5447 +0x0e:  movzbl (%eax),%eax
08ad544a +0x11:  test   %al,%al
08ad544c +0x13:  jne    08ad54bf <+0x86>
08ad544e +0x15:  movl   $&_ZGVZN3app14stringResourceEvE2sr,(%esp)
08ad5455 +0x1c:  call   08725330 <__cxa_guard_acquire>
08ad545a +0x21:  test   %eax,%eax
08ad545c +0x23:  setne  %al
08ad545f +0x26:  test   %al,%al
08ad5461 +0x28:  je     08ad54bf <+0x86>
08ad5463 +0x2a:  mov    $0x0,%ebx
08ad5468 +0x2f:  movl   $&_ZZN3app14stringResourceEvE2sr,(%esp)
08ad546f +0x36:  call   08ad47a8 <_ZN14StringResourceC1Ev>  ; StringResource::StringResource()
08ad5474 +0x3b:  movl   $&_ZGVZN3app14stringResourceEvE2sr,(%esp)
08ad547b +0x42:  call   08725250 <__cxa_guard_release>
08ad5480 +0x47:  mov    $&_ZN14StringResourceD1Ev,%eax
08ad5485 +0x4c:  movl   $&__dso_handle,0x8(%esp)
08ad548d +0x54:  movl   $&_ZZN3app14stringResourceEvE2sr,0x4(%esp)
08ad5495 +0x5c:  mov    %eax,(%esp)
08ad5498 +0x5f:  call   0807ddd0 <_init+0x6c8>
08ad549d +0x64:  jmp    08ad54bf <+0x86>
08ad549f +0x66:  mov    %edx,%esi
08ad54a1 +0x68:  mov    %eax,%edi
08ad54a3 +0x6a:  test   %bl,%bl
08ad54a5 +0x6c:  jne    08ad54b3 <+0x7a>
08ad54a7 +0x6e:  movl   $&_ZGVZN3app14stringResourceEvE2sr,(%esp)
08ad54ae +0x75:  call   087252c0 <__cxa_guard_abort>
08ad54b3 +0x7a:  mov    %edi,%eax
08ad54b5 +0x7c:  mov    %esi,%edx
08ad54b7 +0x7e:  mov    %eax,(%esp)
08ad54ba +0x81:  call   08ae3750 <_Unwind_Resume>
08ad54bf +0x86:  mov    $&_ZZN3app14stringResourceEvE2sr,%eax
08ad54c4 +0x8b:  add    $0x1c,%esp
08ad54c7 +0x8e:  pop    %ebx
08ad54c8 +0x8f:  pop    %esi
08ad54c9 +0x90:  pop    %edi
08ad54ca +0x91:  pop    %ebp
08ad54cb +0x92:  ret
```

## 反编译 C

```c
// app::stringResource @ 0x8ad5439

/* app::stringResource() */

undefined1 * app::stringResource(void)

{
  int iVar1;
  
  if (stringResource()::sr == '\0') {
    iVar1 = __cxa_guard_acquire(&stringResource()::sr);
    if (iVar1 != 0) {
                    /* try { // try from 08ad546f to 08ad5473 has its CatchHandler @ 08ad549f */
      StringResource::StringResource((StringResource *)stringResource()::sr);
      __cxa_guard_release(&stringResource()::sr);
      __cxa_atexit(StringResource::~StringResource,stringResource()::sr,&__dso_handle);
    }
  }
  return stringResource()::sr;
}
```
