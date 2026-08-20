# resetHumanCertifyData

`_ZN5CUser21resetHumanCertifyDataEv`

`CUser::resetHumanCertifyData()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867f720` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867f720  _ZN5CUser21resetHumanCertifyDataEv
#           CUser::resetHumanCertifyData()
# range [0x0867f720, 0x0867f747]
0867f720 +0x00:  push   %ebp
0867f721 +0x01:  mov    %esp,%ebp
0867f723 +0x03:  sub    $0x18,%esp
0867f726 +0x06:  mov    0x8(%ebp),%eax
0867f729 +0x09:  add    $0x8e0ec,%eax
0867f72e +0x0e:  movl   $0x5,0x8(%esp)
0867f736 +0x16:  movl   $0x0,0x4(%esp)
0867f73e +0x1e:  mov    %eax,(%esp)
0867f741 +0x21:  call   0807dcc0 <_init+0x5b8>
0867f746 +0x26:  leave
0867f747 +0x27:  ret
```

## 反编译 C

```c
// CUser::resetHumanCertifyData @ 0x867f720

/* CUser::resetHumanCertifyData() */

void __thiscall CUser::resetHumanCertifyData(CUser *this)

{
  memset(this + 0x8e0ec,0,5);
  return;
}
```
