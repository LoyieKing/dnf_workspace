# getStaticInt32

`_ZN8XorRand414getStaticInt32Ev`

`XorRand4::getStaticInt32()`

| 类 | 地址 |
|---|---|
| `XorRand4` | `0x08adfbd6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adfbd6  _ZN8XorRand414getStaticInt32Ev
#           XorRand4::getStaticInt32()
# range [0x08adfbd6, 0x08adfbe3]
08adfbd6 +0x00:  push   %ebp
08adfbd7 +0x01:  mov    %esp,%ebp
08adfbd9 +0x03:  sub    $0x8,%esp
08adfbdc +0x06:  call   08adfbe4 <_ZN8XorRand415getStaticUInt32Ev>  ; XorRand4::getStaticUInt32()
08adfbe1 +0x0b:  leave
08adfbe2 +0x0c:  ret
08adfbe3 +0x0d:  nop
```

## 反编译 C

```c
// XorRand4::getStaticInt32 @ 0x8adfbd6

int32 XorRand4::getStaticInt32(void)

{
  uint32 uVar1;
  
  uVar1 = getStaticUInt32();
  return uVar1;
}
```
