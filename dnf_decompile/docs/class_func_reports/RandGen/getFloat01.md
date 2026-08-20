# getFloat01

`_ZN7RandGen10getFloat01Ev`

`RandGen::getFloat01()`

| 类 | 地址 |
|---|---|
| `RandGen` | `0x08ae0206` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ae0206  _ZN7RandGen10getFloat01Ev
#           RandGen::getFloat01()
# range [0x08ae0206, 0x08ae0243]
08ae0206 +0x00:  push   %ebp
08ae0207 +0x01:  mov    %esp,%ebp
08ae0209 +0x03:  sub    $0x18,%esp
08ae020c +0x06:  call   08adfbe4 <_ZN8XorRand415getStaticUInt32Ev>  ; XorRand4::getStaticUInt32()
08ae0211 +0x0b:  mov    %eax,%ecx
08ae0213 +0x0d:  mov    $0x80008001,%edx
08ae0218 +0x12:  mov    %ecx,%eax
08ae021a +0x14:  mul    %edx
08ae021c +0x16:  shr    $0xf,%edx
08ae021f +0x19:  mov    %edx,%eax
08ae0221 +0x1b:  shl    $0x10,%eax
08ae0224 +0x1e:  sub    %edx,%eax
08ae0226 +0x20:  mov    %ecx,%edx
08ae0228 +0x22:  sub    %eax,%edx
08ae022a +0x24:  mov    %edx,%eax
08ae022c +0x26:  mov    $0x0,%edx
08ae0231 +0x2b:  mov    %eax,-0x10(%ebp)
08ae0234 +0x2e:  mov    %edx,-0xc(%ebp)
08ae0237 +0x31:  fildll -0x10(%ebp)
08ae023a +0x34:  flds   &data#5a7aa859(.rodata)
08ae0240 +0x3a:  fmulp  %st,%st(1)
08ae0242 +0x3c:  leave
08ae0243 +0x3d:  ret
```

## 反编译 C

```c
// RandGen::getFloat01 @ 0x8ae0206

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float32 RandGen::getFloat01(void)

{
  uint32 uVar1;
  
  uVar1 = XorRand4::getStaticUInt32();
  return (float32)(_DAT_08e37cc0 * (float)(uVar1 % 0xffff));
}
```
