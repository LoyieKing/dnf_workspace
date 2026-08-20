# Ready

`_ZN19RentalMachinePcRoom5ReadyEv`

`RentalMachinePcRoom::Ready()`

| 类 | 地址 |
|---|---|
| `RentalMachinePcRoom` | `0x0827073e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827073e  _ZN19RentalMachinePcRoom5ReadyEv
#           RentalMachinePcRoom::Ready()
# range [0x0827073e, 0x08270751]
0827073e +0x00:  push   %ebp
0827073f +0x01:  mov    %esp,%ebp
08270741 +0x03:  sub    $0x18,%esp
08270744 +0x06:  mov    0x8(%ebp),%eax
08270747 +0x09:  mov    %eax,(%esp)
0827074a +0x0c:  call   082708cc <_ZN19RentalMachinePcRoom24checkAllRentalItemScriptEv>  ; RentalMachinePcRoom::checkAllRentalItemScript()
0827074f +0x11:  leave
08270750 +0x12:  ret
08270751 +0x13:  nop
```

## 反编译 C

```c
// RentalMachinePcRoom::Ready @ 0x827073e

/* RentalMachinePcRoom::Ready() */

void __thiscall RentalMachinePcRoom::Ready(RentalMachinePcRoom *this)

{
  checkAllRentalItemScript(this);
  return;
}
```
