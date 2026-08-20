# ~CClearRewardCardEvent

`_ZN21CClearRewardCardEventD0Ev`

`CClearRewardCardEvent::~CClearRewardCardEvent()`

| 类 | 地址 |
|---|---|
| `CClearRewardCardEvent` | `0x0810a76c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810a76c  _ZN21CClearRewardCardEventD0Ev
#           CClearRewardCardEvent::~CClearRewardCardEvent()
# range [0x0810a76c, 0x0810a789]
0810a76c +0x00:  push   %ebp
0810a76d +0x01:  mov    %esp,%ebp
0810a76f +0x03:  sub    $0x18,%esp
0810a772 +0x06:  mov    0x8(%ebp),%eax
0810a775 +0x09:  mov    %eax,(%esp)
0810a778 +0x0c:  call   0810a73c <_ZN21CClearRewardCardEventD1Ev>  ; CClearRewardCardEvent::~CClearRewardCardEvent()
0810a77d +0x11:  mov    0x8(%ebp),%eax
0810a780 +0x14:  mov    %eax,(%esp)
0810a783 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810a788 +0x1c:  leave
0810a789 +0x1d:  ret
```

## 反编译 C

```c
// CClearRewardCardEvent::~CClearRewardCardEvent @ 0x810a76c

/* CClearRewardCardEvent::~CClearRewardCardEvent() */

void __thiscall CClearRewardCardEvent::~CClearRewardCardEvent(CClearRewardCardEvent *this)

{
  ~CClearRewardCardEvent(this);
  operator_delete(this);
  return;
}
```
