# UseFatigue

`_ZN8XNuclear6CHades10UseFatigueEj`

`XNuclear::CHades::UseFatigue(unsigned int)`

| 类 | 地址 |
|---|---|
| `XNuclear::CHades` | `0x084b9552` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b9552  _ZN8XNuclear6CHades10UseFatigueEj
#           XNuclear::CHades::UseFatigue(unsigned int)
# range [0x084b9552, 0x084b95a7]
084b9552 +0x00:  push   %ebp
084b9553 +0x01:  mov    %esp,%ebp
084b9555 +0x03:  sub    $0x18,%esp
084b9558 +0x06:  mov    0x8(%ebp),%eax
084b955b +0x09:  mov    %eax,(%esp)
084b955e +0x0c:  call   084b9718 <_ZN8XNuclear6CHades9needLoginEv>  ; XNuclear::CHades::needLogin()
084b9563 +0x11:  mov    0x8(%ebp),%eax
084b9566 +0x14:  mov    0x1c(%eax),%eax
084b9569 +0x17:  lea    0x1(%eax),%edx
084b956c +0x1a:  mov    0x8(%ebp),%eax
084b956f +0x1d:  mov    %edx,0x1c(%eax)
084b9572 +0x20:  mov    0x8(%ebp),%eax
084b9575 +0x23:  mov    0x1c(%eax),%eax
084b9578 +0x26:  cmp    $0x1,%eax
084b957b +0x29:  jbe    084b95a4 <+0x52>
084b957d +0x2b:  movl   $0x0,0x8(%esp)
084b9585 +0x33:  movl   $0x1,0x4(%esp)
084b958d +0x3b:  mov    0x8(%ebp),%eax
084b9590 +0x3e:  mov    %eax,(%esp)
084b9593 +0x41:  call   084b938c <_ZN8XNuclear6CHades13StdCateUpdateEtt>  ; XNuclear::CHades::StdCateUpdate(unsigned short, unsigned short)
084b9598 +0x46:  mov    0x8(%ebp),%eax
084b959b +0x49:  movl   $0x0,0x1c(%eax)
084b95a2 +0x50:  jmp    084b95a5 <+0x53>
084b95a4 +0x52:  nop
084b95a5 +0x53:  leave
084b95a6 +0x54:  ret
084b95a7 +0x55:  nop
```

## 反编译 C

```c
// XNuclear::CHades::UseFatigue @ 0x84b9552

/* XNuclear::CHades::UseFatigue(unsigned int) */

void XNuclear::CHades::UseFatigue(uint param_1)

{
  needLogin((CHades *)param_1);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  if (1 < *(uint *)(param_1 + 0x1c)) {
    StdCateUpdate((CHades *)param_1,1,0);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}
```
