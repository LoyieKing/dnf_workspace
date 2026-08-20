# loadData

`_ZN10CTitleBook8loadDataEP5CUserPc`

`CTitleBook::loadData(CUser*, char*)`

| 类 | 地址 |
|---|---|
| `CTitleBook` | `0x0864165e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864165e  _ZN10CTitleBook8loadDataEP5CUserPc
#           CTitleBook::loadData(CUser*, char*)
# range [0x0864165e, 0x086416a3]
0864165e +0x00:  push   %ebp
0864165f +0x01:  mov    %esp,%ebp
08641661 +0x03:  sub    $0x18,%esp
08641664 +0x06:  mov    0x8(%ebp),%eax
08641667 +0x09:  mov    (%eax),%eax
08641669 +0x0b:  add    $0x1c,%eax
0864166c +0x0e:  mov    (%eax),%edx
0864166e +0x10:  mov    0x8(%ebp),%eax
08641671 +0x13:  mov    %eax,(%esp)
08641674 +0x16:  call   *%edx
08641676 +0x18:  mov    0x8(%ebp),%eax
08641679 +0x1b:  mov    0xc(%ebp),%edx
0864167c +0x1e:  mov    %edx,0x8(%eax)
0864167f +0x21:  mov    0x8(%ebp),%eax
08641682 +0x24:  lea    0xc(%eax),%edx
08641685 +0x27:  movl   $0x6b3a,0x8(%esp)
0864168d +0x2f:  mov    0x10(%ebp),%eax
08641690 +0x32:  mov    %eax,0x4(%esp)
08641694 +0x36:  mov    %edx,(%esp)
08641697 +0x39:  call   0807d8a0 <_init+0x198>
0864169c +0x3e:  mov    $0x1,%eax
086416a1 +0x43:  leave
086416a2 +0x44:  ret
086416a3 +0x45:  nop
```

## 反编译 C

```c
// CTitleBook::loadData @ 0x864165e

/* CTitleBook::loadData(CUser*, char*) */

undefined4 __thiscall CTitleBook::loadData(CTitleBook *this,CUser *param_1,char *param_2)

{
  (**(code **)(*(int *)this + 0x1c))(this);
  *(CUser **)(this + 8) = param_1;
  memcpy(this + 0xc,param_2,0x6b3a);
  return 1;
}
```
