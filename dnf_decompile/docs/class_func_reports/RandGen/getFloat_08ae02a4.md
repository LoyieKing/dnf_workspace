# getFloat

`_ZN7RandGen8getFloatEP8XorRand4ff`

`RandGen::getFloat(XorRand4*, float, float)`

| 类 | 地址 |
|---|---|
| `RandGen` | `0x08ae02a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ae02a4  _ZN7RandGen8getFloatEP8XorRand4ff
#           RandGen::getFloat(XorRand4*, float, float)
# range [0x08ae02a4, 0x08ae02cf]
08ae02a4 +0x00:  push   %ebp
08ae02a5 +0x01:  mov    %esp,%ebp
08ae02a7 +0x03:  sub    $0x10,%esp
08ae02aa +0x06:  flds   0x10(%ebp)
08ae02ad +0x09:  fsubs  0xc(%ebp)
08ae02b0 +0x0c:  fstps  -0x4(%ebp)
08ae02b3 +0x0f:  mov    0x8(%ebp),%eax
08ae02b6 +0x12:  mov    %eax,(%esp)
08ae02b9 +0x15:  call   08ae0244 <_ZN7RandGen10getFloat01EP8XorRand4>  ; RandGen::getFloat01(XorRand4*)
08ae02be +0x1a:  fmuls  -0x4(%ebp)
08ae02c1 +0x1d:  fadds  0xc(%ebp)
08ae02c4 +0x20:  leave
08ae02c5 +0x21:  ret
08ae02c6 +0x22:  nop
08ae02c7 +0x23:  nop
08ae02c8 +0x24:  nop
08ae02c9 +0x25:  nop
08ae02ca +0x26:  nop
08ae02cb +0x27:  nop
08ae02cc +0x28:  nop
08ae02cd +0x29:  nop
08ae02ce +0x2a:  nop
08ae02cf +0x2b:  nop
```

## 反编译 C

```c
// RandGen::getFloat @ 0x8ae02a4

float32 RandGen::getFloat(XorRand4 *rand,float32 min,float32 max)

{
  float32 fVar1;
  
  fVar1 = getFloat01(rand);
  return (float32)((float)fVar1 * ((float)max - (float)min) + (float)min);
}
```
