# getFloat01

`_ZN7RandGen10getFloat01EP8XorRand4`

`RandGen::getFloat01(XorRand4*)`

| 类 | 地址 |
|---|---|
| `RandGen` | `0x08ae0244` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ae0244  _ZN7RandGen10getFloat01EP8XorRand4
#           RandGen::getFloat01(XorRand4*)
# range [0x08ae0244, 0x08ae0287]
08ae0244 +0x00:  push   %ebp
08ae0245 +0x01:  mov    %esp,%ebp
08ae0247 +0x03:  sub    $0xc,%esp
08ae024a +0x06:  mov    0x8(%ebp),%eax
08ae024d +0x09:  mov    %eax,(%esp)
08ae0250 +0x0c:  call   08adface <_ZN8XorRand49getUInt32Ev>  ; XorRand4::getUInt32()
08ae0255 +0x11:  mov    %eax,%ecx
08ae0257 +0x13:  mov    $0x80008001,%edx
08ae025c +0x18:  mov    %ecx,%eax
08ae025e +0x1a:  mul    %edx
08ae0260 +0x1c:  shr    $0xf,%edx
08ae0263 +0x1f:  mov    %edx,%eax
08ae0265 +0x21:  shl    $0x10,%eax
08ae0268 +0x24:  sub    %edx,%eax
08ae026a +0x26:  mov    %ecx,%edx
08ae026c +0x28:  sub    %eax,%edx
08ae026e +0x2a:  mov    %edx,%eax
08ae0270 +0x2c:  mov    $0x0,%edx
08ae0275 +0x31:  mov    %eax,-0x8(%ebp)
08ae0278 +0x34:  mov    %edx,-0x4(%ebp)
08ae027b +0x37:  fildll -0x8(%ebp)
08ae027e +0x3a:  flds   &data#5a7aa859(.rodata)
08ae0284 +0x40:  fmulp  %st,%st(1)
08ae0286 +0x42:  leave
08ae0287 +0x43:  ret
```

## 反编译 C

```c
// RandGen::getFloat01 @ 0x8ae0244

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float32 RandGen::getFloat01(XorRand4 *rand)

{
  uint32 uVar1;
  
  uVar1 = XorRand4::getUInt32(rand);
  return (float32)(_DAT_08e37cc0 * (float)(uVar1 % 0xffff));
}
```
