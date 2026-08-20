# getTitleSlot

`_ZN10CTitleBook12getTitleSlotE24ENUM_TITLE_BOOK_CATEGORYi`

`CTitleBook::getTitleSlot(ENUM_TITLE_BOOK_CATEGORY, int)`

| 类 | 地址 |
|---|---|
| `CTitleBook` | `0x086416d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086416d8  _ZN10CTitleBook12getTitleSlotE24ENUM_TITLE_BOOK_CATEGORYi
#           CTitleBook::getTitleSlot(ENUM_TITLE_BOOK_CATEGORY, int)
# range [0x086416d8, 0x08641703]
086416d8 +0x00:  push   %ebp
086416d9 +0x01:  mov    %esp,%ebp
086416db +0x03:  sub    $0x18,%esp
086416de +0x06:  mov    0x8(%ebp),%eax
086416e1 +0x09:  mov    %eax,(%esp)
086416e4 +0x0c:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
086416e9 +0x11:  mov    0xc(%ebp),%edx
086416ec +0x14:  mov    0x8(%ebp),%eax
086416ef +0x17:  add    $0x1ad0,%edx
086416f5 +0x1d:  mov    0x8(%eax,%edx,4),%edx
086416f9 +0x21:  mov    0x10(%ebp),%eax
086416fc +0x24:  imul   $0x3d,%eax,%eax
086416ff +0x27:  lea    (%edx,%eax,1),%eax
08641702 +0x2a:  leave
08641703 +0x2b:  ret
```

## 反编译 C

```c
// CTitleBook::getTitleSlot @ 0x86416d8

/* CTitleBook::getTitleSlot(ENUM_TITLE_BOOK_CATEGORY, int) */

int __thiscall CTitleBook::getTitleSlot(CTitleBook *this,int param_2,int param_3)

{
  charac_expand::CData::alter((CData *)this);
  return *(int *)(this + (param_2 + 0x1ad0) * 4 + 8) + param_3 * 0x3d;
}
```
