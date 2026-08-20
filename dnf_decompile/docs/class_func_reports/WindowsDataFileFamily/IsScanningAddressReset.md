# IsScanningAddressReset

`_ZN21WindowsDataFileFamily22IsScanningAddressResetEv`

`WindowsDataFileFamily::IsScanningAddressReset()`

| 类 | 地址 |
|---|---|
| `WindowsDataFileFamily` | `0x08575444` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08575444  _ZN21WindowsDataFileFamily22IsScanningAddressResetEv
#           WindowsDataFileFamily::IsScanningAddressReset()
# range [0x08575444, 0x08575461]
08575444 +0x00:  push   %ebp
08575445 +0x01:  mov    %esp,%ebp
08575447 +0x03:  mov    0x8(%ebp),%eax
0857544a +0x06:  mov    0x110(%eax),%eax
08575450 +0x0c:  test   %eax,%eax
08575452 +0x0e:  jne    0857545b <+0x17>
08575454 +0x10:  mov    $0x1,%eax
08575459 +0x15:  jmp    08575460 <+0x1c>
0857545b +0x17:  mov    $0x0,%eax
08575460 +0x1c:  pop    %ebp
08575461 +0x1d:  ret
```

## 反编译 C

```c
// WindowsDataFileFamily::IsScanningAddressReset @ 0x8575444

/* WindowsDataFileFamily::IsScanningAddressReset() */

bool __thiscall WindowsDataFileFamily::IsScanningAddressReset(WindowsDataFileFamily *this)

{
  return *(int *)(this + 0x110) == 0;
}
```
