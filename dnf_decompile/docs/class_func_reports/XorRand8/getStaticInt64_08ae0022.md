# getStaticInt64

`_ZN8XorRand814getStaticInt64Ev`

`XorRand8::getStaticInt64()`

| 类 | 地址 |
|---|---|
| `XorRand8` | `0x08ae0022` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ae0022  _ZN8XorRand814getStaticInt64Ev
#           XorRand8::getStaticInt64()
# range [0x08ae0022, 0x08ae0033]
08ae0022 +0x00:  push   %ebp
08ae0023 +0x01:  mov    %esp,%ebp
08ae0025 +0x03:  sub    $0x8,%esp
08ae0028 +0x06:  call   08ae0034 <_ZN8XorRand815getStaticUInt64Ev>  ; XorRand8::getStaticUInt64()
08ae002d +0x0b:  mov    %eax,%edx
08ae002f +0x0d:  sar    $0x1f,%edx
08ae0032 +0x10:  leave
08ae0033 +0x11:  ret
```

## 反编译 C

```c
// XorRand8::getStaticInt64 @ 0x8ae0022

int64 XorRand8::getStaticInt64(void)

{
  uint64 uVar1;
  
  uVar1 = getStaticUInt64();
  return (int64)(int)uVar1;
}
```
