# check_error

`_ZNK12advancealtar18Dispatcher_SetSlot11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE`

`advancealtar::Dispatcher_SetSlot::check_error(CUser*, CMDPacketStruct::STBaseRequest&) const`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_SetSlot` | `0x0814004e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0814004e  _ZNK12advancealtar18Dispatcher_SetSlot11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE
#           advancealtar::Dispatcher_SetSlot::check_error(CUser*, CMDPacketStruct::STBaseRequest&) const
# range [0x0814004e, 0x0814006d]
0814004e +0x00:  push   %ebp
0814004f +0x01:  mov    %esp,%ebp
08140051 +0x03:  sub    $0x8,%esp
08140054 +0x06:  call   0812cfea <_ZN12advancealtar18isOpenAdvanceAltarEv>  ; advancealtar::isOpenAdvanceAltar()
08140059 +0x0b:  xor    $0x1,%eax
0814005c +0x0e:  test   %al,%al
0814005e +0x10:  je     08140067 <+0x19>
08140060 +0x12:  mov    $0x1,%eax
08140065 +0x17:  jmp    0814006c <+0x1e>
08140067 +0x19:  mov    $0x0,%eax
0814006c +0x1e:  leave
0814006d +0x1f:  ret
```

## 反编译 C

```c
// advancealtar::Dispatcher_SetSlot::check_error @ 0x814004e

/* advancealtar::Dispatcher_SetSlot::check_error(CUser*, CMDPacketStruct::STBaseRequest&) const */

bool advancealtar::Dispatcher_SetSlot::check_error(CUser *param_1,STBaseRequest *param_2)

{
  char cVar1;
  
  cVar1 = isOpenAdvanceAltar();
  return cVar1 != '\x01';
}
```
