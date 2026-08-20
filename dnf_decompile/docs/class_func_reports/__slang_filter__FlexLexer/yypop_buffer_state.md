# yypop_buffer_state

`_ZN25__slang_filter__FlexLexer18yypop_buffer_stateEv`

`__slang_filter__FlexLexer::yypop_buffer_state()`

| 类 | 地址 |
|---|---|
| `__slang_filter__FlexLexer` | `0x080949d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080949d4  _ZN25__slang_filter__FlexLexer18yypop_buffer_stateEv
#           __slang_filter__FlexLexer::yypop_buffer_state()
# range [0x080949d4, 0x08094aaf]
080949d4 +0x00:  push   %ebp
080949d5 +0x01:  mov    %esp,%ebp
080949d7 +0x03:  sub    $0x18,%esp
080949da +0x06:  mov    0x8(%ebp),%eax
080949dd +0x09:  mov    0x48(%eax),%eax
080949e0 +0x0c:  test   %eax,%eax
080949e2 +0x0e:  je     08094aa9 <+0xd5>
080949e8 +0x14:  mov    0x8(%ebp),%eax
080949eb +0x17:  mov    0x48(%eax),%edx
080949ee +0x1a:  mov    0x8(%ebp),%eax
080949f1 +0x1d:  mov    0x40(%eax),%eax
080949f4 +0x20:  shl    $0x2,%eax
080949f7 +0x23:  lea    (%edx,%eax,1),%eax
080949fa +0x26:  mov    (%eax),%eax
080949fc +0x28:  test   %eax,%eax
080949fe +0x2a:  je     08094aac <+0xd8>
08094a04 +0x30:  mov    0x8(%ebp),%eax
08094a07 +0x33:  mov    (%eax),%eax
08094a09 +0x35:  add    $0x10,%eax
08094a0c +0x38:  mov    (%eax),%edx
08094a0e +0x3a:  mov    0x8(%ebp),%eax
08094a11 +0x3d:  mov    0x48(%eax),%eax
08094a14 +0x40:  test   %eax,%eax
08094a16 +0x42:  je     08094a2e <+0x5a>
08094a18 +0x44:  mov    0x8(%ebp),%eax
08094a1b +0x47:  mov    0x48(%eax),%ecx
08094a1e +0x4a:  mov    0x8(%ebp),%eax
08094a21 +0x4d:  mov    0x40(%eax),%eax
08094a24 +0x50:  shl    $0x2,%eax
08094a27 +0x53:  lea    (%ecx,%eax,1),%eax
08094a2a +0x56:  mov    (%eax),%eax
08094a2c +0x58:  jmp    08094a33 <+0x5f>
08094a2e +0x5a:  mov    $0x0,%eax
08094a33 +0x5f:  mov    %eax,0x4(%esp)
08094a37 +0x63:  mov    0x8(%ebp),%eax
08094a3a +0x66:  mov    %eax,(%esp)
08094a3d +0x69:  call   *%edx
08094a3f +0x6b:  mov    0x8(%ebp),%eax
08094a42 +0x6e:  mov    0x48(%eax),%edx
08094a45 +0x71:  mov    0x8(%ebp),%eax
08094a48 +0x74:  mov    0x40(%eax),%eax
08094a4b +0x77:  shl    $0x2,%eax
08094a4e +0x7a:  lea    (%edx,%eax,1),%eax
08094a51 +0x7d:  movl   $0x0,(%eax)
08094a57 +0x83:  mov    0x8(%ebp),%eax
08094a5a +0x86:  mov    0x40(%eax),%eax
08094a5d +0x89:  test   %eax,%eax
08094a5f +0x8b:  je     08094a70 <+0x9c>
08094a61 +0x8d:  mov    0x8(%ebp),%eax
08094a64 +0x90:  mov    0x40(%eax),%eax
08094a67 +0x93:  lea    -0x1(%eax),%edx
08094a6a +0x96:  mov    0x8(%ebp),%eax
08094a6d +0x99:  mov    %edx,0x40(%eax)
08094a70 +0x9c:  mov    0x8(%ebp),%eax
08094a73 +0x9f:  mov    0x48(%eax),%eax
08094a76 +0xa2:  test   %eax,%eax
08094a78 +0xa4:  je     08094aad <+0xd9>
08094a7a +0xa6:  mov    0x8(%ebp),%eax
08094a7d +0xa9:  mov    0x48(%eax),%edx
08094a80 +0xac:  mov    0x8(%ebp),%eax
08094a83 +0xaf:  mov    0x40(%eax),%eax
08094a86 +0xb2:  shl    $0x2,%eax
08094a89 +0xb5:  lea    (%edx,%eax,1),%eax
08094a8c +0xb8:  mov    (%eax),%eax
08094a8e +0xba:  test   %eax,%eax
08094a90 +0xbc:  je     08094aad <+0xd9>
08094a92 +0xbe:  mov    0x8(%ebp),%eax
08094a95 +0xc1:  mov    %eax,(%esp)
08094a98 +0xc4:  call   0809464e <_ZN25__slang_filter__FlexLexer20yy_load_buffer_stateEv>  ; __slang_filter__FlexLexer::yy_load_buffer_state()
08094a9d +0xc9:  mov    0x8(%ebp),%eax
08094aa0 +0xcc:  movl   $0x1,0x3c(%eax)
08094aa7 +0xd3:  jmp    08094aad <+0xd9>
08094aa9 +0xd5:  nop
08094aaa +0xd6:  jmp    08094aad <+0xd9>
08094aac +0xd8:  nop
08094aad +0xd9:  leave
08094aae +0xda:  ret
08094aaf +0xdb:  nop
```

## 反编译 C

```c
// __slang_filter__FlexLexer::yypop_buffer_state @ 0x80949d4

/* __slang_filter__FlexLexer::yypop_buffer_state() */

void __thiscall __slang_filter__FlexLexer::yypop_buffer_state(__slang_filter__FlexLexer *this)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x48) != 0) &&
     (*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) != 0)) {
    if (*(int *)(this + 0x48) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4);
    }
    (**(code **)(*(int *)this + 0x10))(this,uVar1);
    *(undefined4 *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) = 0;
    if (*(int *)(this + 0x40) != 0) {
      *(int *)(this + 0x40) = *(int *)(this + 0x40) + -1;
    }
    if ((*(int *)(this + 0x48) != 0) &&
       (*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) != 0)) {
      yy_load_buffer_state(this);
      *(undefined4 *)(this + 0x3c) = 1;
    }
  }
  return;
}
```
