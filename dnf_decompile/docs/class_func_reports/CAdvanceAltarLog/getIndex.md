# getIndex

`_ZN16CAdvanceAltarLog8getIndexEx`

`CAdvanceAltarLog::getIndex(long long)`

| 类 | 地址 |
|---|---|
| `CAdvanceAltarLog` | `0x0815730e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815730e  _ZN16CAdvanceAltarLog8getIndexEx
#           CAdvanceAltarLog::getIndex(long long)
# range [0x0815730e, 0x08157335]
0815730e +0x00:  push   %ebp
0815730f +0x01:  mov    %esp,%ebp
08157311 +0x03:  sub    $0x8,%esp
08157314 +0x06:  mov    0x8(%ebp),%eax
08157317 +0x09:  mov    %eax,-0x8(%ebp)
0815731a +0x0c:  mov    0xc(%ebp),%eax
0815731d +0x0f:  mov    %eax,-0x4(%ebp)
08157320 +0x12:  mov    -0x8(%ebp),%eax
08157323 +0x15:  mov    -0x4(%ebp),%edx
08157326 +0x18:  mov    %eax,%edx
08157328 +0x1a:  mov    $0x0,%eax
0815732d +0x1f:  mov    %edx,%eax
0815732f +0x21:  mov    %eax,%edx
08157331 +0x23:  sar    $0x1f,%edx
08157334 +0x26:  leave
08157335 +0x27:  ret
```

## 反编译 C

```c
// CAdvanceAltarLog::getIndex @ 0x815730e

/* CAdvanceAltarLog::getIndex(long long) */

void CAdvanceAltarLog::getIndex(longlong param_1)

{
  return;
}
```
