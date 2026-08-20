# StartEvent

`_ZN21CClearRewardCardEvent10StartEventEv`

`CClearRewardCardEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CClearRewardCardEvent` | `0x0810a78a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810a78a  _ZN21CClearRewardCardEvent10StartEventEv
#           CClearRewardCardEvent::StartEvent()
# range [0x0810a78a, 0x0810a78f]
0810a78a +0x00:  push   %ebp
0810a78b +0x01:  mov    %esp,%ebp
0810a78d +0x03:  pop    %ebp
0810a78e +0x04:  ret
0810a78f +0x05:  nop
```

## 反编译 C

```c
// CClearRewardCardEvent::StartEvent @ 0x810a78a

/* CClearRewardCardEvent::StartEvent() */

void CClearRewardCardEvent::StartEvent(void)

{
  return;
}
```
