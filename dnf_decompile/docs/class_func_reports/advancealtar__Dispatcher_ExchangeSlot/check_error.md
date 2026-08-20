# check_error

`_ZNK12advancealtar23Dispatcher_ExchangeSlot11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE`

`advancealtar::Dispatcher_ExchangeSlot::check_error(CUser*, CMDPacketStruct::STBaseRequest&) const`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_ExchangeSlot` | `0x08140884` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08140884  _ZNK12advancealtar23Dispatcher_ExchangeSlot11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE
#           advancealtar::Dispatcher_ExchangeSlot::check_error(CUser*, CMDPacketStruct::STBaseRequest&) const
# range [0x08140884, 0x081408a3]
08140884 +0x00:  push   %ebp
08140885 +0x01:  mov    %esp,%ebp
08140887 +0x03:  sub    $0x8,%esp
0814088a +0x06:  call   0812cfea <_ZN12advancealtar18isOpenAdvanceAltarEv>  ; advancealtar::isOpenAdvanceAltar()
0814088f +0x0b:  xor    $0x1,%eax
08140892 +0x0e:  test   %al,%al
08140894 +0x10:  je     0814089d <+0x19>
08140896 +0x12:  mov    $0x1,%eax
0814089b +0x17:  jmp    081408a2 <+0x1e>
0814089d +0x19:  mov    $0x0,%eax
081408a2 +0x1e:  leave
081408a3 +0x1f:  ret
```

## 反编译 C

```c
// advancealtar::Dispatcher_ExchangeSlot::check_error @ 0x8140884

/* advancealtar::Dispatcher_ExchangeSlot::check_error(CUser*, CMDPacketStruct::STBaseRequest&) const
    */

bool advancealtar::Dispatcher_ExchangeSlot::check_error(CUser *param_1,STBaseRequest *param_2)

{
  char cVar1;
  
  cVar1 = isOpenAdvanceAltar();
  return cVar1 != '\x01';
}
```
