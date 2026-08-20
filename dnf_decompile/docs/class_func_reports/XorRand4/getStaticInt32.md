# getStaticInt32

`_ZN8XorRand414getStaticInt32Ej`

`XorRand4::getStaticInt32(unsigned int)`

| 类 | 地址 |
|---|---|
| `XorRand4` | `0x08adfb64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adfb64  _ZN8XorRand414getStaticInt32Ej
#           XorRand4::getStaticInt32(unsigned int)
# range [0x08adfb64, 0x08adfb77]
08adfb64 +0x00:  push   %ebp
08adfb65 +0x01:  mov    %esp,%ebp
08adfb67 +0x03:  sub    $0x18,%esp
08adfb6a +0x06:  mov    0x8(%ebp),%eax
08adfb6d +0x09:  mov    %eax,(%esp)
08adfb70 +0x0c:  call   08adfb78 <_ZN8XorRand415getStaticUInt32Ej>  ; XorRand4::getStaticUInt32(unsigned int)
08adfb75 +0x11:  leave
08adfb76 +0x12:  ret
08adfb77 +0x13:  nop
```

## 反编译 C

```c
// XorRand4::getStaticInt32 @ 0x8adfb64

int32 XorRand4::getStaticInt32(uint32 seed)

{
  uint32 uVar1;
  
  uVar1 = getStaticUInt32(seed);
  return uVar1;
}
```
