# getLevel

`_ZN16CAdvanceAltarLog8getLevelEx`

`CAdvanceAltarLog::getLevel(long long)`

| 类 | 地址 |
|---|---|
| `CAdvanceAltarLog` | `0x08157336` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08157336  _ZN16CAdvanceAltarLog8getLevelEx
#           CAdvanceAltarLog::getLevel(long long)
# range [0x08157336, 0x08157360]
08157336 +0x00:  push   %ebp
08157337 +0x01:  mov    %esp,%ebp
08157339 +0x03:  sub    $0x8,%esp
0815733c +0x06:  mov    0x8(%ebp),%eax
0815733f +0x09:  mov    %eax,-0x8(%ebp)
08157342 +0x0c:  mov    0xc(%ebp),%eax
08157345 +0x0f:  mov    %eax,-0x4(%ebp)
08157348 +0x12:  mov    -0x8(%ebp),%eax
0815734b +0x15:  mov    -0x4(%ebp),%edx
0815734e +0x18:  shld   $0x10,%eax,%edx
08157352 +0x1c:  shl    $0x10,%eax
08157355 +0x1f:  mov    %edx,%eax
08157357 +0x21:  mov    %eax,%edx
08157359 +0x23:  sar    $0x1f,%edx
0815735c +0x26:  sar    $0x10,%eax
0815735f +0x29:  leave
08157360 +0x2a:  ret
```

## 反编译 C

```c
// CAdvanceAltarLog::getLevel @ 0x8157336

/* CAdvanceAltarLog::getLevel(long long) */

undefined8 __thiscall CAdvanceAltarLog::getLevel(CAdvanceAltarLog *this,longlong param_1)

{
  uint uVar1;
  
  uVar1 = (int)param_1 << 0x10 | (uint)this >> 0x10;
  return CONCAT44((int)uVar1 >> 0x1f,(int)uVar1 >> 0x10);
}
```
