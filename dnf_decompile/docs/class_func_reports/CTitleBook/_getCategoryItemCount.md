# _getCategoryItemCount

`_ZN10CTitleBook21_getCategoryItemCountE24ENUM_TITLE_BOOK_CATEGORY`

`CTitleBook::_getCategoryItemCount(ENUM_TITLE_BOOK_CATEGORY)`

| 类 | 地址 |
|---|---|
| `CTitleBook` | `0x08641b84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08641b84  _ZN10CTitleBook21_getCategoryItemCountE24ENUM_TITLE_BOOK_CATEGORY
#           CTitleBook::_getCategoryItemCount(ENUM_TITLE_BOOK_CATEGORY)
# range [0x08641b84, 0x08641bdb]
08641b84 +0x00:  push   %ebp
08641b85 +0x01:  mov    %esp,%ebp
08641b87 +0x03:  sub    $0x10,%esp
08641b8a +0x06:  movl   $0x0,-0x8(%ebp)
08641b91 +0x0d:  movl   $0x0,-0x4(%ebp)
08641b98 +0x14:  jmp    08641bc2 <+0x3e>
08641b9a +0x16:  mov    0xc(%ebp),%edx
08641b9d +0x19:  mov    0x8(%ebp),%eax
08641ba0 +0x1c:  add    $0x1ad0,%edx
08641ba6 +0x22:  mov    0x8(%eax,%edx,4),%edx
08641baa +0x26:  mov    -0x4(%ebp),%eax
08641bad +0x29:  imul   $0x3d,%eax,%eax
08641bb0 +0x2c:  lea    (%edx,%eax,1),%eax
08641bb3 +0x2f:  mov    0x2(%eax),%eax
08641bb6 +0x32:  test   %eax,%eax
08641bb8 +0x34:  je     08641bbe <+0x3a>
08641bba +0x36:  addl   $0x1,-0x8(%ebp)
08641bbe +0x3a:  addl   $0x1,-0x4(%ebp)
08641bc2 +0x3e:  mov    0xc(%ebp),%eax
08641bc5 +0x41:  mov    &_ZL14TITLE_BOOK_MAX(,%eax,4),%eax
08641bcc +0x48:  cmp    -0x4(%ebp),%eax
08641bcf +0x4b:  setg   %al
08641bd2 +0x4e:  test   %al,%al
08641bd4 +0x50:  jne    08641b9a <+0x16>
08641bd6 +0x52:  mov    -0x8(%ebp),%eax
08641bd9 +0x55:  leave
08641bda +0x56:  ret
08641bdb +0x57:  nop
```

## 反编译 C

```c
// CTitleBook::_getCategoryItemCount @ 0x8641b84

/* CTitleBook::_getCategoryItemCount(ENUM_TITLE_BOOK_CATEGORY) */

int __thiscall CTitleBook::_getCategoryItemCount(CTitleBook *this,int param_2)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < *(int *)(::TITLE_BOOK_MAX + param_2 * 4); local_8 = local_8 + 1) {
    if (*(int *)(*(int *)(this + (param_2 + 0x1ad0) * 4 + 8) + local_8 * 0x3d + 2) != 0) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}
```
