# check_error

`_ZNK12advancealtar21Dispatcher_SummonUnit11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE`

`advancealtar::Dispatcher_SummonUnit::check_error(CUser*, CMDPacketStruct::STBaseRequest&) const`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_SummonUnit` | `0x081405ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081405ae  _ZNK12advancealtar21Dispatcher_SummonUnit11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE
#           advancealtar::Dispatcher_SummonUnit::check_error(CUser*, CMDPacketStruct::STBaseRequest&) const
# range [0x081405ae, 0x081405b7]
081405ae +0x00:  push   %ebp
081405af +0x01:  mov    %esp,%ebp
081405b1 +0x03:  mov    $0x0,%eax
081405b6 +0x08:  pop    %ebp
081405b7 +0x09:  ret
```

## 反编译 C

```c
// advancealtar::Dispatcher_SummonUnit::check_error @ 0x81405ae

/* advancealtar::Dispatcher_SummonUnit::check_error(CUser*, CMDPacketStruct::STBaseRequest&) const
    */

undefined4 advancealtar::Dispatcher_SummonUnit::check_error(CUser *param_1,STBaseRequest *param_2)

{
  return 0;
}
```
