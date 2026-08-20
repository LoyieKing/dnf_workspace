# getFloat

`_ZN7RandGen8getFloatEff`

`RandGen::getFloat(float, float)`

| 类 | 地址 |
|---|---|
| `RandGen` | `0x08ae0288` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ae0288  _ZN7RandGen8getFloatEff
#           RandGen::getFloat(float, float)
# range [0x08ae0288, 0x08ae02a3]
08ae0288 +0x00:  push   %ebp
08ae0289 +0x01:  mov    %esp,%ebp
08ae028b +0x03:  sub    $0x18,%esp
08ae028e +0x06:  flds   0xc(%ebp)
08ae0291 +0x09:  fsubs  0x8(%ebp)
08ae0294 +0x0c:  fstps  -0xc(%ebp)
08ae0297 +0x0f:  call   08ae0206 <_ZN7RandGen10getFloat01Ev>  ; RandGen::getFloat01()
08ae029c +0x14:  fmuls  -0xc(%ebp)
08ae029f +0x17:  fadds  0x8(%ebp)
08ae02a2 +0x1a:  leave
08ae02a3 +0x1b:  ret
```

## 反编译 C

```c
// RandGen::getFloat @ 0x8ae0288

float32 RandGen::getFloat(float32 min,float32 max)

{
  float32 fVar1;
  
  fVar1 = getFloat01();
  return (float32)((float)fVar1 * ((float)max - (float)min) + (float)min);
}
```
