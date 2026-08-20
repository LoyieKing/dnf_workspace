# _empty

`_ZN10CTitleBook6_emptyEv`

`CTitleBook::_empty()`

| 类 | 地址 |
|---|---|
| `CTitleBook` | `0x08641df2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08641df2  _ZN10CTitleBook6_emptyEv
#           CTitleBook::_empty()
# range [0x08641df2, 0x08641e5f]
08641df2 +0x00:  push   %ebp
08641df3 +0x01:  mov    %esp,%ebp
08641df5 +0x03:  sub    $0x10,%esp
08641df8 +0x06:  movl   $0x0,-0x8(%ebp)
08641dff +0x0d:  jmp    08641e4d <+0x5b>
08641e01 +0x0f:  movl   $0x0,-0x4(%ebp)
08641e08 +0x16:  jmp    08641e35 <+0x43>
08641e0a +0x18:  mov    -0x8(%ebp),%edx
08641e0d +0x1b:  mov    0x8(%ebp),%eax
08641e10 +0x1e:  add    $0x1ad0,%edx
08641e16 +0x24:  mov    0x8(%eax,%edx,4),%edx
08641e1a +0x28:  mov    -0x4(%ebp),%eax
08641e1d +0x2b:  imul   $0x3d,%eax,%eax
08641e20 +0x2e:  lea    (%edx,%eax,1),%eax
08641e23 +0x31:  mov    0x2(%eax),%eax
08641e26 +0x34:  test   %eax,%eax
08641e28 +0x36:  je     08641e31 <+0x3f>
08641e2a +0x38:  mov    $0x0,%eax
08641e2f +0x3d:  jmp    08641e5d <+0x6b>
08641e31 +0x3f:  addl   $0x1,-0x4(%ebp)
08641e35 +0x43:  mov    -0x8(%ebp),%eax
08641e38 +0x46:  mov    &_ZL14TITLE_BOOK_MAX(,%eax,4),%eax
08641e3f +0x4d:  cmp    -0x4(%ebp),%eax
08641e42 +0x50:  setg   %al
08641e45 +0x53:  test   %al,%al
08641e47 +0x55:  jne    08641e0a <+0x18>
08641e49 +0x57:  addl   $0x1,-0x8(%ebp)
08641e4d +0x5b:  cmpl   $0x3,-0x8(%ebp)
08641e51 +0x5f:  setle  %al
08641e54 +0x62:  test   %al,%al
08641e56 +0x64:  jne    08641e01 <+0xf>
08641e58 +0x66:  mov    $0x1,%eax
08641e5d +0x6b:  leave
08641e5e +0x6c:  ret
08641e5f +0x6d:  nop
```

## 反编译 C

```c
// CTitleBook::_empty @ 0x8641df2

/* CTitleBook::_empty() */

undefined4 __thiscall CTitleBook::_empty(CTitleBook *this)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  do {
    if (3 < local_c) {
      return 1;
    }
    for (local_8 = 0; local_8 < *(int *)(::TITLE_BOOK_MAX + local_c * 4); local_8 = local_8 + 1) {
      if (*(int *)(*(int *)(this + (local_c + 0x1ad0) * 4 + 8) + local_8 * 0x3d + 2) != 0) {
        return 0;
      }
    }
    local_c = local_c + 1;
  } while( true );
}
```
