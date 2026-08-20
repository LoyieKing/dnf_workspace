# _insertTitle

`_ZN10CTitleBook12_insertTitleE24ENUM_TITLE_BOOK_CATEGORYiP10Inven_Item`

`CTitleBook::_insertTitle(ENUM_TITLE_BOOK_CATEGORY, int, Inven_Item*)`

| 类 | 地址 |
|---|---|
| `CTitleBook` | `0x08641d16` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08641d16  _ZN10CTitleBook12_insertTitleE24ENUM_TITLE_BOOK_CATEGORYiP10Inven_Item
#           CTitleBook::_insertTitle(ENUM_TITLE_BOOK_CATEGORY, int, Inven_Item*)
# range [0x08641d16, 0x08641d4f]
08641d16 +0x00:  push   %ebp
08641d17 +0x01:  mov    %esp,%ebp
08641d19 +0x03:  sub    $0x18,%esp
08641d1c +0x06:  mov    0x8(%ebp),%eax
08641d1f +0x09:  mov    %eax,(%esp)
08641d22 +0x0c:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
08641d27 +0x11:  mov    0xc(%ebp),%edx
08641d2a +0x14:  mov    0x8(%ebp),%eax
08641d2d +0x17:  add    $0x1ad0,%edx
08641d33 +0x1d:  mov    0x8(%eax,%edx,4),%edx
08641d37 +0x21:  mov    0x10(%ebp),%eax
08641d3a +0x24:  imul   $0x3d,%eax,%eax
08641d3d +0x27:  add    %eax,%edx
08641d3f +0x29:  mov    0x14(%ebp),%eax
08641d42 +0x2c:  mov    %eax,0x4(%esp)
08641d46 +0x30:  mov    %edx,(%esp)
08641d49 +0x33:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
08641d4e +0x38:  leave
08641d4f +0x39:  ret
```

## 反编译 C

```c
// CTitleBook::_insertTitle @ 0x8641d16

/* CTitleBook::_insertTitle(ENUM_TITLE_BOOK_CATEGORY, int, Inven_Item*) */

void __thiscall
CTitleBook::_insertTitle(CTitleBook *this,int param_2,int param_3,Inven_Item *param_4)

{
  charac_expand::CData::alter((CData *)this);
  Inven_Item::setCopy((Inven_Item *)(*(int *)(this + (param_2 + 0x1ad0) * 4 + 8) + param_3 * 0x3d),
                      param_4);
  return;
}
```
