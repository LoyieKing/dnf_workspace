# deliveryEnd

`_ZN10CEventBase11deliveryEndEP9CDelivery`

`CEventBase::deliveryEnd(CDelivery*)`

| 类 | 地址 |
|---|---|
| `CEventBase` | `0x0810aea8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810aea8  _ZN10CEventBase11deliveryEndEP9CDelivery
#           CEventBase::deliveryEnd(CDelivery*)
# range [0x0810aea8, 0x0810aead]
0810aea8 +0x00:  push   %ebp
0810aea9 +0x01:  mov    %esp,%ebp
0810aeab +0x03:  pop    %ebp
0810aeac +0x04:  ret
0810aead +0x05:  nop
```

## 反编译 C

```c
// CEventBase::deliveryEnd @ 0x810aea8

/* CEventBase::deliveryEnd(CDelivery*) */

void CEventBase::deliveryEnd(CDelivery *param_1)

{
  return;
}
```
