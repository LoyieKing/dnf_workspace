# getTitleSlotR

`_ZN10CTitleBook13getTitleSlotRE24ENUM_TITLE_BOOK_CATEGORYi`

`CTitleBook::getTitleSlotR(ENUM_TITLE_BOOK_CATEGORY, int)`

| 类 | 地址 |
|---|---|
| `CTitleBook` | `0x086416a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086416a4  _ZN10CTitleBook13getTitleSlotRE24ENUM_TITLE_BOOK_CATEGORYi
#           CTitleBook::getTitleSlotR(ENUM_TITLE_BOOK_CATEGORY, int)
# range [0x086416a4, 0x086416d7]
086416a4 +0x00:  push   %ebp
086416a5 +0x01:  mov    %esp,%ebp
086416a7 +0x03:  push   %ebx
086416a8 +0x04:  sub    $0x14,%esp
086416ab +0x07:  mov    0x8(%ebp),%ebx
086416ae +0x0a:  mov    0x14(%ebp),%eax
086416b1 +0x0d:  mov    %eax,0xc(%esp)
086416b5 +0x11:  mov    0x10(%ebp),%eax
086416b8 +0x14:  mov    %eax,0x8(%esp)
086416bc +0x18:  mov    0xc(%ebp),%eax
086416bf +0x1b:  mov    %eax,0x4(%esp)
086416c3 +0x1f:  mov    %ebx,(%esp)
086416c6 +0x22:  call   08641db0 <_ZN10CTitleBook10_getTitleRE24ENUM_TITLE_BOOK_CATEGORYi>  ; CTitleBook::_getTitleR(ENUM_TITLE_BOOK_CATEGORY, int)
086416cb +0x27:  sub    $0x4,%esp
086416ce +0x2a:  mov    %ebx,%eax
086416d0 +0x2c:  mov    -0x4(%ebp),%ebx
086416d3 +0x2f:  leave
086416d4 +0x30:  ret    $0x4
086416d7 +0x33:  nop
```

## 反编译 C

```c
// CTitleBook::getTitleSlotR @ 0x86416a4

/* CTitleBook::getTitleSlotR(ENUM_TITLE_BOOK_CATEGORY, int) */

undefined4
CTitleBook::getTitleSlotR
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  _getTitleR(param_1,param_2,param_3,param_4);
  return param_1;
}
```
