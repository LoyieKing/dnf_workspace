# getType

`_ZN16CAdvanceAltarLog7getTypeEx`

`CAdvanceAltarLog::getType(long long)`

| 类 | 地址 |
|---|---|
| `CAdvanceAltarLog` | `0x081572ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081572ea  _ZN16CAdvanceAltarLog7getTypeEx
#           CAdvanceAltarLog::getType(long long)
# range [0x081572ea, 0x0815730d]
081572ea +0x00:  push   %ebp
081572eb +0x01:  mov    %esp,%ebp
081572ed +0x03:  sub    $0x8,%esp
081572f0 +0x06:  mov    0x8(%ebp),%eax
081572f3 +0x09:  mov    %eax,-0x8(%ebp)
081572f6 +0x0c:  mov    0xc(%ebp),%eax
081572f9 +0x0f:  mov    %eax,-0x4(%ebp)
081572fc +0x12:  mov    -0x8(%ebp),%eax
081572ff +0x15:  mov    -0x4(%ebp),%edx
08157302 +0x18:  mov    %edx,%eax
08157304 +0x1a:  mov    %eax,%edx
08157306 +0x1c:  sar    $0x1f,%edx
08157309 +0x1f:  sar    $0x10,%eax
0815730c +0x22:  leave
0815730d +0x23:  ret
```

## 反编译 C

```c
// CAdvanceAltarLog::getType @ 0x81572ea

/* CAdvanceAltarLog::getType(long long) */

undefined8 __thiscall CAdvanceAltarLog::getType(CAdvanceAltarLog *this,longlong param_1)

{
  return CONCAT44((int)param_1 >> 0x1f,(int)param_1 >> 0x10);
}
```
