# getStaticInt64

`_ZN8XorRand814getStaticInt64Ey`

`XorRand8::getStaticInt64(unsigned long long)`

| 类 | 地址 |
|---|---|
| `XorRand8` | `0x08adfea0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adfea0  _ZN8XorRand814getStaticInt64Ey
#           XorRand8::getStaticInt64(unsigned long long)
# range [0x08adfea0, 0x08adfec5]
08adfea0 +0x00:  push   %ebp
08adfea1 +0x01:  mov    %esp,%ebp
08adfea3 +0x03:  sub    $0x28,%esp
08adfea6 +0x06:  mov    0x8(%ebp),%eax
08adfea9 +0x09:  mov    %eax,-0x10(%ebp)
08adfeac +0x0c:  mov    0xc(%ebp),%eax
08adfeaf +0x0f:  mov    %eax,-0xc(%ebp)
08adfeb2 +0x12:  mov    -0x10(%ebp),%eax
08adfeb5 +0x15:  mov    -0xc(%ebp),%edx
08adfeb8 +0x18:  mov    %eax,(%esp)
08adfebb +0x1b:  mov    %edx,0x4(%esp)
08adfebf +0x1f:  call   08adfec6 <_ZN8XorRand815getStaticUInt64Ey>  ; XorRand8::getStaticUInt64(unsigned long long)
08adfec4 +0x24:  leave
08adfec5 +0x25:  ret
```

## 反编译 C

```c
// XorRand8::getStaticInt64 @ 0x8adfea0

int64 __thiscall XorRand8::getStaticInt64(XorRand8 *this,uint64 seed)

{
  uint64 uVar1;
  undefined4 in_stack_ffffffdc;
  
  uVar1 = getStaticUInt64(this,CONCAT44(in_stack_ffffffdc,(undefined4)seed));
  return uVar1;
}
```
