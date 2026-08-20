# yy_pop_state

`_ZN25__slang_filter__FlexLexer12yy_pop_stateEv`

`__slang_filter__FlexLexer::yy_pop_state()`

| 类 | 地址 |
|---|---|
| `__slang_filter__FlexLexer` | `0x08094cc6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08094cc6  _ZN25__slang_filter__FlexLexer12yy_pop_stateEv
#           __slang_filter__FlexLexer::yy_pop_state()
# range [0x08094cc6, 0x08094d23]
08094cc6 +0x00:  push   %ebp
08094cc7 +0x01:  mov    %esp,%ebp
08094cc9 +0x03:  sub    $0x18,%esp
08094ccc +0x06:  mov    0x8(%ebp),%eax
08094ccf +0x09:  mov    0x14(%eax),%eax
08094cd2 +0x0c:  lea    -0x1(%eax),%edx
08094cd5 +0x0f:  mov    0x8(%ebp),%eax
08094cd8 +0x12:  mov    %edx,0x14(%eax)
08094cdb +0x15:  mov    0x8(%ebp),%eax
08094cde +0x18:  mov    0x14(%eax),%eax
08094ce1 +0x1b:  shr    $0x1f,%eax
08094ce4 +0x1e:  test   %al,%al
08094ce6 +0x20:  je     08094d02 <+0x3c>
08094ce8 +0x22:  mov    0x8(%ebp),%eax
08094ceb +0x25:  mov    (%eax),%eax
08094ced +0x27:  add    $0x2c,%eax
08094cf0 +0x2a:  mov    (%eax),%edx
08094cf2 +0x2c:  movl   $"start-condition stack underflow",0x4(%esp)
08094cfa +0x34:  mov    0x8(%ebp),%eax
08094cfd +0x37:  mov    %eax,(%esp)
08094d00 +0x3a:  call   *%edx
08094d02 +0x3c:  mov    0x8(%ebp),%eax
08094d05 +0x3f:  mov    0x1c(%eax),%edx
08094d08 +0x42:  mov    0x8(%ebp),%eax
08094d0b +0x45:  mov    0x14(%eax),%eax
08094d0e +0x48:  shl    $0x2,%eax
08094d11 +0x4b:  lea    (%edx,%eax,1),%eax
08094d14 +0x4e:  mov    (%eax),%eax
08094d16 +0x50:  add    %eax,%eax
08094d18 +0x52:  lea    0x1(%eax),%edx
08094d1b +0x55:  mov    0x8(%ebp),%eax
08094d1e +0x58:  mov    %edx,0x38(%eax)
08094d21 +0x5b:  leave
08094d22 +0x5c:  ret
08094d23 +0x5d:  nop
```

## 反编译 C

```c
// __slang_filter__FlexLexer::yy_pop_state @ 0x8094cc6

/* __slang_filter__FlexLexer::yy_pop_state() */

void __thiscall __slang_filter__FlexLexer::yy_pop_state(__slang_filter__FlexLexer *this)

{
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + -1;
  if (*(int *)(this + 0x14) < 0) {
    (**(code **)(*(int *)this + 0x2c))(this,"start-condition stack underflow");
  }
  *(int *)(this + 0x38) = *(int *)(*(int *)(this + 0x1c) + *(int *)(this + 0x14) * 4) * 2 + 1;
  return;
}
```
