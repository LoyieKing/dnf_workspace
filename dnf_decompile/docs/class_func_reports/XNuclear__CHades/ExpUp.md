# ExpUp

`_ZN8XNuclear6CHades5ExpUpEj`

`XNuclear::CHades::ExpUp(unsigned int)`

| 类 | 地址 |
|---|---|
| `XNuclear::CHades` | `0x084b953e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b953e  _ZN8XNuclear6CHades5ExpUpEj
#           XNuclear::CHades::ExpUp(unsigned int)
# range [0x084b953e, 0x084b9551]
084b953e +0x00:  push   %ebp
084b953f +0x01:  mov    %esp,%ebp
084b9541 +0x03:  sub    $0x18,%esp
084b9544 +0x06:  mov    0x8(%ebp),%eax
084b9547 +0x09:  mov    %eax,(%esp)
084b954a +0x0c:  call   084b9718 <_ZN8XNuclear6CHades9needLoginEv>  ; XNuclear::CHades::needLogin()
084b954f +0x11:  leave
084b9550 +0x12:  ret
084b9551 +0x13:  nop
```

## 反编译 C

```c
// XNuclear::CHades::ExpUp @ 0x84b953e

/* XNuclear::CHades::ExpUp(unsigned int) */

void XNuclear::CHades::ExpUp(uint param_1)

{
  needLogin((CHades *)param_1);
  return;
}
```
