# makeKey

`_ZN16CAdvanceAltarLog7makeKeyEtjt`

`CAdvanceAltarLog::makeKey(unsigned short, unsigned int, unsigned short)`

| 类 | 地址 |
|---|---|
| `CAdvanceAltarLog` | `0x08157298` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08157298  _ZN16CAdvanceAltarLog7makeKeyEtjt
#           CAdvanceAltarLog::makeKey(unsigned short, unsigned int, unsigned short)
# range [0x08157298, 0x081572e9]
08157298 +0x00:  push   %ebp
08157299 +0x01:  mov    %esp,%ebp
0815729b +0x03:  push   %edi
0815729c +0x04:  push   %esi
0815729d +0x05:  push   %ebx
0815729e +0x06:  sub    $0x8,%esp
081572a1 +0x09:  mov    0x8(%ebp),%edx
081572a4 +0x0c:  mov    0x10(%ebp),%eax
081572a7 +0x0f:  mov    %dx,-0x10(%ebp)
081572ab +0x13:  mov    %ax,-0x14(%ebp)
081572af +0x17:  movzwl -0x10(%ebp),%eax
081572b3 +0x1b:  mov    %eax,%edx
081572b5 +0x1d:  shl    $0x10,%edx
081572b8 +0x20:  movzwl -0x14(%ebp),%eax
081572bc +0x24:  or     %edx,%eax
081572be +0x26:  mov    %eax,%edx
081572c0 +0x28:  sar    $0x1f,%edx
081572c3 +0x2b:  mov    %eax,%ecx
081572c5 +0x2d:  mov    %edx,%ebx
081572c7 +0x2f:  mov    %ecx,%ebx
081572c9 +0x31:  mov    $0x0,%ecx
081572ce +0x36:  mov    0xc(%ebp),%eax
081572d1 +0x39:  mov    $0x0,%edx
081572d6 +0x3e:  mov    %ecx,%esi
081572d8 +0x40:  or     %eax,%esi
081572da +0x42:  mov    %ebx,%edi
081572dc +0x44:  or     %edx,%edi
081572de +0x46:  mov    %esi,%eax
081572e0 +0x48:  mov    %edi,%edx
081572e2 +0x4a:  add    $0x8,%esp
081572e5 +0x4d:  pop    %ebx
081572e6 +0x4e:  pop    %esi
081572e7 +0x4f:  pop    %edi
081572e8 +0x50:  pop    %ebp
081572e9 +0x51:  ret
```

## 反编译 C

```c
// CAdvanceAltarLog::makeKey @ 0x8157298

/* CAdvanceAltarLog::makeKey(unsigned short, unsigned int, unsigned short) */

undefined8 CAdvanceAltarLog::makeKey(ushort param_1,uint param_2,ushort param_3)

{
  return CONCAT44(CONCAT22(param_1,param_3),param_2);
}
```
