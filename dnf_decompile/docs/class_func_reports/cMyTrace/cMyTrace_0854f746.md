# cMyTrace

`_ZN8cMyTraceC1EPKciibb`

`cMyTrace::cMyTrace(char const*, int, int, bool, bool)`

| 类 | 地址 |
|---|---|
| `cMyTrace` | `0x0854f746` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854f746  _ZN8cMyTraceC1EPKciibb
#           cMyTrace::cMyTrace(char const*, int, int, bool, bool)
# range [0x0854f746, 0x0854f787]
0854f746 +0x00:  push   %ebp
0854f747 +0x01:  mov    %esp,%ebp
0854f749 +0x03:  sub    $0x8,%esp
0854f74c +0x06:  mov    0x18(%ebp),%edx
0854f74f +0x09:  mov    0x1c(%ebp),%eax
0854f752 +0x0c:  mov    %dl,-0x4(%ebp)
0854f755 +0x0f:  mov    %al,-0x8(%ebp)
0854f758 +0x12:  mov    0x8(%ebp),%eax
0854f75b +0x15:  mov    0xc(%ebp),%edx
0854f75e +0x18:  mov    %edx,(%eax)
0854f760 +0x1a:  mov    0x8(%ebp),%eax
0854f763 +0x1d:  mov    0x10(%ebp),%edx
0854f766 +0x20:  mov    %edx,0x4(%eax)
0854f769 +0x23:  mov    0x8(%ebp),%eax
0854f76c +0x26:  mov    0x14(%ebp),%edx
0854f76f +0x29:  mov    %edx,0x8(%eax)
0854f772 +0x2c:  mov    0x8(%ebp),%eax
0854f775 +0x2f:  movzbl -0x8(%ebp),%edx
0854f779 +0x33:  mov    %dl,0xc(%eax)
0854f77c +0x36:  mov    0x8(%ebp),%eax
0854f77f +0x39:  movzbl -0x4(%ebp),%edx
0854f783 +0x3d:  mov    %dl,0xd(%eax)
0854f786 +0x40:  leave
0854f787 +0x41:  ret
```

## 反编译 C

```c
// cMyTrace::cMyTrace @ 0x854f746

/* cMyTrace::cMyTrace(char const*, int, int, bool, bool) */

void __thiscall
cMyTrace::cMyTrace(cMyTrace *this,char *param_1,int param_2,int param_3,bool param_4,bool param_5)

{
  *(char **)this = param_1;
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  this[0xc] = (cMyTrace)param_5;
  this[0xd] = (cMyTrace)param_4;
  return;
}
```
