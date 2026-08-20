# CMemberExpRewardEvent

`_ZN21CMemberExpRewardEventC1Ev`

`CMemberExpRewardEvent::CMemberExpRewardEvent()`

| 类 | 地址 |
|---|---|
| `CMemberExpRewardEvent` | `0x081b291c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b291c  _ZN21CMemberExpRewardEventC1Ev
#           CMemberExpRewardEvent::CMemberExpRewardEvent()
# range [0x081b291c, 0x081b2941]
081b291c +0x00:  push   %ebp
081b291d +0x01:  mov    %esp,%ebp
081b291f +0x03:  sub    $0x18,%esp
081b2922 +0x06:  mov    0x8(%ebp),%eax
081b2925 +0x09:  mov    %eax,(%esp)
081b2928 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
081b292d +0x11:  mov    0x8(%ebp),%eax
081b2930 +0x14:  movl   $&_ZTV21CMemberExpRewardEvent+0x8,(%eax)
081b2936 +0x1a:  mov    0x8(%ebp),%eax
081b2939 +0x1d:  movl   $0xa,0xc(%eax)
081b2940 +0x24:  leave
081b2941 +0x25:  ret
```

## 反编译 C

```c
// CMemberExpRewardEvent::CMemberExpRewardEvent @ 0x81b291c

/* CMemberExpRewardEvent::CMemberExpRewardEvent() */

void __thiscall CMemberExpRewardEvent::CMemberExpRewardEvent(CMemberExpRewardEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CMemberExpRewardEvent_08bb7b88;
  *(undefined4 *)(this + 0xc) = 10;
  return;
}
```
