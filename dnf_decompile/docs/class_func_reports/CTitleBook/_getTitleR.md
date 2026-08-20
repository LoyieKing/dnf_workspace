# _getTitleR

`_ZN10CTitleBook10_getTitleRE24ENUM_TITLE_BOOK_CATEGORYi`

`CTitleBook::_getTitleR(ENUM_TITLE_BOOK_CATEGORY, int)`

| 类 | 地址 |
|---|---|
| `CTitleBook` | `0x08641db0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08641db0  _ZN10CTitleBook10_getTitleRE24ENUM_TITLE_BOOK_CATEGORYi
#           CTitleBook::_getTitleR(ENUM_TITLE_BOOK_CATEGORY, int)
# range [0x08641db0, 0x08641df1]
08641db0 +0x00:  push   %ebp
08641db1 +0x01:  mov    %esp,%ebp
08641db3 +0x03:  push   %ebx
08641db4 +0x04:  sub    $0x14,%esp
08641db7 +0x07:  mov    0x8(%ebp),%ebx
08641dba +0x0a:  mov    0x10(%ebp),%edx
08641dbd +0x0d:  mov    0xc(%ebp),%eax
08641dc0 +0x10:  add    $0x1ad0,%edx
08641dc6 +0x16:  mov    0x8(%eax,%edx,4),%edx
08641dca +0x1a:  mov    0x14(%ebp),%eax
08641dcd +0x1d:  imul   $0x3d,%eax,%eax
08641dd0 +0x20:  lea    (%edx,%eax,1),%eax
08641dd3 +0x23:  movl   $0x3d,0x8(%esp)
08641ddb +0x2b:  mov    %eax,0x4(%esp)
08641ddf +0x2f:  mov    %ebx,(%esp)
08641de2 +0x32:  call   0807d880 <_init+0x178>
08641de7 +0x37:  mov    %ebx,%eax
08641de9 +0x39:  add    $0x14,%esp
08641dec +0x3c:  pop    %ebx
08641ded +0x3d:  pop    %ebp
08641dee +0x3e:  ret    $0x4
08641df1 +0x41:  nop
```

## 反编译 C

```c
// CTitleBook::_getTitleR @ 0x8641db0

/* CTitleBook::_getTitleR(ENUM_TITLE_BOOK_CATEGORY, int) */

void * CTitleBook::_getTitleR(void *param_1,int param_2,int param_3,int param_4)

{
  memmove(param_1,(void *)(*(int *)(param_2 + 8 + (param_3 + 0x1ad0) * 4) + param_4 * 0x3d),0x3d);
  return param_1;
}
```
