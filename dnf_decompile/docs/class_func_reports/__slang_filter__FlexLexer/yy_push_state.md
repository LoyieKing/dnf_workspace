# yy_push_state

`_ZN25__slang_filter__FlexLexer13yy_push_stateEi`

`__slang_filter__FlexLexer::yy_push_state(int)`

| 类 | 地址 |
|---|---|
| `__slang_filter__FlexLexer` | `0x08094bee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08094bee  _ZN25__slang_filter__FlexLexer13yy_push_stateEi
#           __slang_filter__FlexLexer::yy_push_state(int)
# range [0x08094bee, 0x08094cc5]
08094bee +0x00:  push   %ebp
08094bef +0x01:  mov    %esp,%ebp
08094bf1 +0x03:  push   %ebx
08094bf2 +0x04:  sub    $0x24,%esp
08094bf5 +0x07:  mov    0x8(%ebp),%eax
08094bf8 +0x0a:  mov    0x14(%eax),%edx
08094bfb +0x0d:  mov    0x8(%ebp),%eax
08094bfe +0x10:  mov    0x18(%eax),%eax
08094c01 +0x13:  cmp    %eax,%edx
08094c03 +0x15:  jl     08094c80 <+0x92>
08094c05 +0x17:  mov    0x8(%ebp),%eax
08094c08 +0x1a:  mov    0x18(%eax),%eax
08094c0b +0x1d:  lea    0x19(%eax),%edx
08094c0e +0x20:  mov    0x8(%ebp),%eax
08094c11 +0x23:  mov    %edx,0x18(%eax)
08094c14 +0x26:  mov    0x8(%ebp),%eax
08094c17 +0x29:  mov    0x18(%eax),%eax
08094c1a +0x2c:  shl    $0x2,%eax
08094c1d +0x2f:  mov    %eax,-0xc(%ebp)
08094c20 +0x32:  mov    0x8(%ebp),%eax
08094c23 +0x35:  mov    0x1c(%eax),%eax
08094c26 +0x38:  test   %eax,%eax
08094c28 +0x3a:  jne    08094c3f <+0x51>
08094c2a +0x3c:  mov    -0xc(%ebp),%eax
08094c2d +0x3f:  mov    %eax,(%esp)
08094c30 +0x42:  call   08094d75 <_Z21__slang_filter__allocj>  ; __slang_filter__alloc(unsigned int)
08094c35 +0x47:  mov    %eax,%edx
08094c37 +0x49:  mov    0x8(%ebp),%eax
08094c3a +0x4c:  mov    %edx,0x1c(%eax)
08094c3d +0x4f:  jmp    08094c5c <+0x6e>
08094c3f +0x51:  mov    0x8(%ebp),%eax
08094c42 +0x54:  mov    0x1c(%eax),%eax
08094c45 +0x57:  mov    -0xc(%ebp),%edx
08094c48 +0x5a:  mov    %edx,0x4(%esp)
08094c4c +0x5e:  mov    %eax,(%esp)
08094c4f +0x61:  call   08094d88 <_Z23__slang_filter__reallocPvj>  ; __slang_filter__realloc(void*, unsigned int)
08094c54 +0x66:  mov    %eax,%edx
08094c56 +0x68:  mov    0x8(%ebp),%eax
08094c59 +0x6b:  mov    %edx,0x1c(%eax)
08094c5c +0x6e:  mov    0x8(%ebp),%eax
08094c5f +0x71:  mov    0x1c(%eax),%eax
08094c62 +0x74:  test   %eax,%eax
08094c64 +0x76:  jne    08094c80 <+0x92>
08094c66 +0x78:  mov    0x8(%ebp),%eax
08094c69 +0x7b:  mov    (%eax),%eax
08094c6b +0x7d:  add    $0x2c,%eax
08094c6e +0x80:  mov    (%eax),%edx
08094c70 +0x82:  movl   $"out of memory expanding start-condition stack",0x4(%esp)
08094c78 +0x8a:  mov    0x8(%ebp),%eax
08094c7b +0x8d:  mov    %eax,(%esp)
08094c7e +0x90:  call   *%edx
08094c80 +0x92:  mov    0x8(%ebp),%eax
08094c83 +0x95:  mov    0x1c(%eax),%edx
08094c86 +0x98:  mov    0x8(%ebp),%eax
08094c89 +0x9b:  mov    0x14(%eax),%eax
08094c8c +0x9e:  mov    %eax,%ecx
08094c8e +0xa0:  shl    $0x2,%ecx
08094c91 +0xa3:  lea    (%edx,%ecx,1),%ecx
08094c94 +0xa6:  mov    0x8(%ebp),%edx
08094c97 +0xa9:  mov    0x38(%edx),%edx
08094c9a +0xac:  sub    $0x1,%edx
08094c9d +0xaf:  mov    %edx,%ebx
08094c9f +0xb1:  shr    $0x1f,%ebx
08094ca2 +0xb4:  lea    (%ebx,%edx,1),%edx
08094ca5 +0xb7:  sar    %edx
08094ca7 +0xb9:  mov    %edx,(%ecx)
08094ca9 +0xbb:  lea    0x1(%eax),%edx
08094cac +0xbe:  mov    0x8(%ebp),%eax
08094caf +0xc1:  mov    %edx,0x14(%eax)
08094cb2 +0xc4:  mov    0xc(%ebp),%eax
08094cb5 +0xc7:  add    %eax,%eax
08094cb7 +0xc9:  lea    0x1(%eax),%edx
08094cba +0xcc:  mov    0x8(%ebp),%eax
08094cbd +0xcf:  mov    %edx,0x38(%eax)
08094cc0 +0xd2:  add    $0x24,%esp
08094cc3 +0xd5:  pop    %ebx
08094cc4 +0xd6:  pop    %ebp
08094cc5 +0xd7:  ret
```

## 反编译 C

```c
// __slang_filter__FlexLexer::yy_push_state @ 0x8094bee

/* __slang_filter__FlexLexer::yy_push_state(int) */

void __thiscall
__slang_filter__FlexLexer::yy_push_state(__slang_filter__FlexLexer *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(this + 0x18) <= *(int *)(this + 0x14)) {
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + 0x19;
    if (*(int *)(this + 0x1c) == 0) {
      uVar2 = __slang_filter__alloc(*(int *)(this + 0x18) << 2);
      *(undefined4 *)(this + 0x1c) = uVar2;
    }
    else {
      uVar2 = __slang_filter__realloc(*(void **)(this + 0x1c),*(int *)(this + 0x18) << 2);
      *(undefined4 *)(this + 0x1c) = uVar2;
    }
    if (*(int *)(this + 0x1c) == 0) {
      (**(code **)(*(int *)this + 0x2c))(this,"out of memory expanding start-condition stack");
    }
  }
  iVar1 = *(int *)(this + 0x14);
  *(int *)(*(int *)(this + 0x1c) + iVar1 * 4) = (*(int *)(this + 0x38) + -1) / 2;
  *(int *)(this + 0x14) = iVar1 + 1;
  *(int *)(this + 0x38) = param_1 * 2 + 1;
  return;
}
```
