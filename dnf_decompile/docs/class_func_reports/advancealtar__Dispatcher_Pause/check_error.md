# check_error

`_ZNK12advancealtar16Dispatcher_Pause11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE`

`advancealtar::Dispatcher_Pause::check_error(CUser*, CMDPacketStruct::STBaseRequest&) const`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_Pause` | `0x08140b32` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08140b32  _ZNK12advancealtar16Dispatcher_Pause11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE
#           advancealtar::Dispatcher_Pause::check_error(CUser*, CMDPacketStruct::STBaseRequest&) const
# range [0x08140b32, 0x08140b3b]
08140b32 +0x00:  push   %ebp
08140b33 +0x01:  mov    %esp,%ebp
08140b35 +0x03:  mov    $0x0,%eax
08140b3a +0x08:  pop    %ebp
08140b3b +0x09:  ret
```

## 反编译 C

```c
// advancealtar::Dispatcher_Pause::check_error @ 0x8140b32

/* advancealtar::Dispatcher_Pause::check_error(CUser*, CMDPacketStruct::STBaseRequest&) const */

undefined4 advancealtar::Dispatcher_Pause::check_error(CUser *param_1,STBaseRequest *param_2)

{
  return 0;
}
```
