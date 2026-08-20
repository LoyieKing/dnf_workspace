# Ready

`_ZN22RentalMachineDimension5ReadyEv`

`RentalMachineDimension::Ready()`

| 类 | 地址 |
|---|---|
| `RentalMachineDimension` | `0x0826ee94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826ee94  _ZN22RentalMachineDimension5ReadyEv
#           RentalMachineDimension::Ready()
# range [0x0826ee94, 0x0826eea7]
0826ee94 +0x00:  push   %ebp
0826ee95 +0x01:  mov    %esp,%ebp
0826ee97 +0x03:  sub    $0x18,%esp
0826ee9a +0x06:  mov    0x8(%ebp),%eax
0826ee9d +0x09:  mov    %eax,(%esp)
0826eea0 +0x0c:  call   0826f022 <_ZN22RentalMachineDimension24checkAllRentalItemScriptEv>  ; RentalMachineDimension::checkAllRentalItemScript()
0826eea5 +0x11:  leave
0826eea6 +0x12:  ret
0826eea7 +0x13:  nop
```

## 反编译 C

```c
// RentalMachineDimension::Ready @ 0x826ee94

/* RentalMachineDimension::Ready() */

void __thiscall RentalMachineDimension::Ready(RentalMachineDimension *this)

{
  checkAllRentalItemScript(this);
  return;
}
```
