# putTitleOnly

`_ZN10CTitleBook12putTitleOnlyEP5CUseri`

`CTitleBook::putTitleOnly(CUser*, int)`

| 类 | 地址 |
|---|---|
| `CTitleBook` | `0x08641e60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08641e60  _ZN10CTitleBook12putTitleOnlyEP5CUseri
#           CTitleBook::putTitleOnly(CUser*, int)
# range [0x08641e60, 0x08641e87]
08641e60 +0x00:  push   %ebp
08641e61 +0x01:  mov    %esp,%ebp
08641e63 +0x03:  sub    $0x28,%esp
08641e66 +0x06:  lea    -0x10(%ebp),%eax
08641e69 +0x09:  mov    %eax,0xc(%esp)
08641e6d +0x0d:  lea    -0xc(%ebp),%eax
08641e70 +0x10:  mov    %eax,0x8(%esp)
08641e74 +0x14:  mov    0xc(%ebp),%eax
08641e77 +0x17:  mov    %eax,0x4(%esp)
08641e7b +0x1b:  mov    0x8(%ebp),%eax
08641e7e +0x1e:  mov    %eax,(%esp)
08641e81 +0x21:  call   08641e88 <_ZN10CTitleBook12putTitleOnlyEP5CUseriR24ENUM_TITLE_BOOK_CATEGORYRi>  ; CTitleBook::putTitleOnly(CUser*, int, ENUM_TITLE_BOOK_CATEGORY&, int&)
08641e86 +0x26:  leave
08641e87 +0x27:  ret
```

## 反编译 C

```c
// CTitleBook::putTitleOnly @ 0x8641e60

/* CTitleBook::putTitleOnly(CUser*, int) */

void CTitleBook::putTitleOnly(CUser *param_1,int param_2)

{
  int local_14;
  ENUM_TITLE_BOOK_CATEGORY local_10 [12];
  
  putTitleOnly(param_1,param_2,local_10,&local_14);
  return;
}
```
