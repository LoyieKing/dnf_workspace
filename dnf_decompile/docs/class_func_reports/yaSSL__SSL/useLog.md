# useLog

`_ZN5yaSSL3SSL6useLogEv`

`yaSSL::SSL::useLog()`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874e300` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e300  _ZN5yaSSL3SSL6useLogEv
#           yaSSL::SSL::useLog()
# range [0x0874e300, 0x0874e30e]
0874e300 +0x00:  push   %ebp
0874e301 +0x01:  mov    %esp,%ebp
0874e303 +0x03:  mov    0x8(%ebp),%eax
0874e306 +0x06:  pop    %ebp
0874e307 +0x07:  add    $0x9dc,%eax
0874e30c +0x0c:  ret
0874e30d +0x0d:  nop
0874e30e +0x0e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::SSL::useLog @ 0x874e300

/* yaSSL::SSL::useLog() */

SSL * __thiscall yaSSL::SSL::useLog(SSL *this)

{
  return this + 0x9dc;
}
```
