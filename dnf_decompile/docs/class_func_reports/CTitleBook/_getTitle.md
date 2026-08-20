# _getTitle

`_ZN10CTitleBook9_getTitleE24ENUM_TITLE_BOOK_CATEGORYi`

`CTitleBook::_getTitle(ENUM_TITLE_BOOK_CATEGORY, int)`

| 类 | 地址 |
|---|---|
| `CTitleBook` | `0x08641d84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08641d84  _ZN10CTitleBook9_getTitleE24ENUM_TITLE_BOOK_CATEGORYi
#           CTitleBook::_getTitle(ENUM_TITLE_BOOK_CATEGORY, int)
# range [0x08641d84, 0x08641daf]
08641d84 +0x00:  push   %ebp
08641d85 +0x01:  mov    %esp,%ebp
08641d87 +0x03:  sub    $0x18,%esp
08641d8a +0x06:  mov    0x8(%ebp),%eax
08641d8d +0x09:  mov    %eax,(%esp)
08641d90 +0x0c:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
08641d95 +0x11:  mov    0xc(%ebp),%edx
08641d98 +0x14:  mov    0x8(%ebp),%eax
08641d9b +0x17:  add    $0x1ad0,%edx
08641da1 +0x1d:  mov    0x8(%eax,%edx,4),%edx
08641da5 +0x21:  mov    0x10(%ebp),%eax
08641da8 +0x24:  imul   $0x3d,%eax,%eax
08641dab +0x27:  lea    (%edx,%eax,1),%eax
08641dae +0x2a:  leave
08641daf +0x2b:  ret
```

## 反编译 C

```c
// CTitleBook::_getTitle @ 0x8641d84

/* CTitleBook::_getTitle(ENUM_TITLE_BOOK_CATEGORY, int) */

int __thiscall CTitleBook::_getTitle(CTitleBook *this,int param_2,int param_3)

{
  charac_expand::CData::alter((CData *)this);
  return *(int *)(this + (param_2 + 0x1ad0) * 4 + 8) + param_3 * 0x3d;
}
```
