# delivery

`_ZN10CEventBase8deliveryER11DeliveryMsg`

`CEventBase::delivery(DeliveryMsg&)`

| 类 | 地址 |
|---|---|
| `CEventBase` | `0x0810aeae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810aeae  _ZN10CEventBase8deliveryER11DeliveryMsg
#           CEventBase::delivery(DeliveryMsg&)
# range [0x0810aeae, 0x0810aeb2]
0810aeae +0x00:  push   %ebp
0810aeaf +0x01:  mov    %esp,%ebp
0810aeb1 +0x03:  pop    %ebp
0810aeb2 +0x04:  ret
```

## 反编译 C

```c
// CEventBase::delivery @ 0x810aeae

/* CEventBase::delivery(DeliveryMsg&) */

void CEventBase::delivery(DeliveryMsg *param_1)

{
  return;
}
```
