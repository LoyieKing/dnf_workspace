# _deleteTitle

`_ZN10CTitleBook12_deleteTitleE24ENUM_TITLE_BOOK_CATEGORYi`

`CTitleBook::_deleteTitle(ENUM_TITLE_BOOK_CATEGORY, int)`

| 类 | 地址 |
|---|---|
| `CTitleBook` | `0x08641d50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08641d50  _ZN10CTitleBook12_deleteTitleE24ENUM_TITLE_BOOK_CATEGORYi
#           CTitleBook::_deleteTitle(ENUM_TITLE_BOOK_CATEGORY, int)
# range [0x08641d50, 0x08641d83]
08641d50 +0x00:  push   %ebp
08641d51 +0x01:  mov    %esp,%ebp
08641d53 +0x03:  sub    $0x18,%esp
08641d56 +0x06:  mov    0x8(%ebp),%eax
08641d59 +0x09:  mov    %eax,(%esp)
08641d5c +0x0c:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
08641d61 +0x11:  mov    0xc(%ebp),%edx
08641d64 +0x14:  mov    0x8(%ebp),%eax
08641d67 +0x17:  add    $0x1ad0,%edx
08641d6d +0x1d:  mov    0x8(%eax,%edx,4),%edx
08641d71 +0x21:  mov    0x10(%ebp),%eax
08641d74 +0x24:  imul   $0x3d,%eax,%eax
08641d77 +0x27:  lea    (%edx,%eax,1),%eax
08641d7a +0x2a:  mov    %eax,(%esp)
08641d7d +0x2d:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
08641d82 +0x32:  leave
08641d83 +0x33:  ret
```

## 反编译 C

```c
// CTitleBook::_deleteTitle @ 0x8641d50

/* CTitleBook::_deleteTitle(ENUM_TITLE_BOOK_CATEGORY, int) */

void __thiscall CTitleBook::_deleteTitle(CTitleBook *this,int param_2,int param_3)

{
  charac_expand::CData::alter((CData *)this);
  Inven_Item::reset((Inven_Item *)(*(int *)(this + (param_2 + 0x1ad0) * 4 + 8) + param_3 * 0x3d));
  return;
}
```
