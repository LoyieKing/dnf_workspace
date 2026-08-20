# sendList

`_ZN10CTitleBook8sendListEv`

`CTitleBook::sendList()`

| 类 | 地址 |
|---|---|
| `CTitleBook` | `0x08641704` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08641704  _ZN10CTitleBook8sendListEv
#           CTitleBook::sendList()
# range [0x08641704, 0x0864174f]
08641704 +0x00:  push   %ebp
08641705 +0x01:  mov    %esp,%ebp
08641707 +0x03:  sub    $0x38,%esp
0864170a +0x06:  movl   $0x0,-0xc(%ebp)
08641711 +0x0d:  jmp    08641743 <+0x3f>
08641713 +0x0f:  mov    -0xc(%ebp),%edx
08641716 +0x12:  mov    0x8(%ebp),%eax
08641719 +0x15:  mov    0x8(%eax),%eax
0864171c +0x18:  movl   $0x0,0x10(%esp)
08641724 +0x20:  mov    %edx,0xc(%esp)
08641728 +0x24:  movl   $0x0,0x8(%esp)
08641730 +0x2c:  mov    %eax,0x4(%esp)
08641734 +0x30:  mov    0x8(%ebp),%eax
08641737 +0x33:  mov    %eax,(%esp)
0864173a +0x36:  call   086417aa <_ZN10CTitleBook17_sendCategoryDataEP5CUsert24ENUM_TITLE_BOOK_CATEGORY25ENUM_TITLE_BOOK_INFO_TYPE>  ; CTitleBook::_sendCategoryData(CUser*, unsigned short, ENUM_TITLE_BOOK_CATEGORY, ENUM_TITLE_BOOK_INFO_TYPE)
0864173f +0x3b:  addl   $0x1,-0xc(%ebp)
08641743 +0x3f:  cmpl   $0x3,-0xc(%ebp)
08641747 +0x43:  setle  %al
0864174a +0x46:  test   %al,%al
0864174c +0x48:  jne    08641713 <+0xf>
0864174e +0x4a:  leave
0864174f +0x4b:  ret
```

## 反编译 C

```c
// CTitleBook::sendList @ 0x8641704

/* CTitleBook::sendList() */

void __thiscall CTitleBook::sendList(CTitleBook *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    _sendCategoryData(this,*(undefined4 *)(this + 8),0,local_10,0);
  }
  return;
}
```
