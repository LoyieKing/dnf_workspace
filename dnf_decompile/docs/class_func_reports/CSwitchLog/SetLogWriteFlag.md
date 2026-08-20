# SetLogWriteFlag

`_ZN10CSwitchLog15SetLogWriteFlagEi`

`CSwitchLog::SetLogWriteFlag(int)`

| 类 | 地址 |
|---|---|
| `CSwitchLog` | `0x0854fd18` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854fd18  _ZN10CSwitchLog15SetLogWriteFlagEi
#           CSwitchLog::SetLogWriteFlag(int)
# range [0x0854fd18, 0x0854fd3b]
0854fd18 +0x00:  push   %ebp
0854fd19 +0x01:  mov    %esp,%ebp
0854fd1b +0x03:  mov    0x8(%ebp),%eax
0854fd1e +0x06:  test   %eax,%eax
0854fd20 +0x08:  je     0854fd29 <+0x11>
0854fd22 +0x0a:  cmp    $0x1,%eax
0854fd25 +0x0d:  je     0854fd32 <+0x1a>
0854fd27 +0x0f:  jmp    0854fd39 <+0x21>
0854fd29 +0x11:  movb   $0x0,&_ZN10CSwitchLog10log_write_E
0854fd30 +0x18:  jmp    0854fd39 <+0x21>
0854fd32 +0x1a:  movb   $0x1,&_ZN10CSwitchLog10log_write_E
0854fd39 +0x21:  pop    %ebp
0854fd3a +0x22:  ret
0854fd3b +0x23:  nop
```

## 反编译 C

```c
// CSwitchLog::SetLogWriteFlag @ 0x854fd18

/* CSwitchLog::SetLogWriteFlag(int) */

void CSwitchLog::SetLogWriteFlag(int param_1)

{
  if (param_1 == 0) {
    log_write_ = 0;
  }
  else if (param_1 == 1) {
    log_write_ = 1;
  }
  return;
}
```
