# CClearRewardCardEvent

`_ZN21CClearRewardCardEventC1Ev`

`CClearRewardCardEvent::CClearRewardCardEvent()`

| 类 | 地址 |
|---|---|
| `CClearRewardCardEvent` | `0x0810a720` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810a720  _ZN21CClearRewardCardEventC1Ev
#           CClearRewardCardEvent::CClearRewardCardEvent()
# range [0x0810a720, 0x0810a73b]
0810a720 +0x00:  push   %ebp
0810a721 +0x01:  mov    %esp,%ebp
0810a723 +0x03:  sub    $0x18,%esp
0810a726 +0x06:  mov    0x8(%ebp),%eax
0810a729 +0x09:  mov    %eax,(%esp)
0810a72c +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
0810a731 +0x11:  mov    0x8(%ebp),%eax
0810a734 +0x14:  movl   $&_ZTV21CClearRewardCardEvent+0x8,(%eax)
0810a73a +0x1a:  leave
0810a73b +0x1b:  ret
```

## 反编译 C

```c
// CClearRewardCardEvent::CClearRewardCardEvent @ 0x810a720

/* CClearRewardCardEvent::CClearRewardCardEvent() */

void __thiscall CClearRewardCardEvent::CClearRewardCardEvent(CClearRewardCardEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CClearRewardCardEvent_08b49ee8;
  return;
}
```
