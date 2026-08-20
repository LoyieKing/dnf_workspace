# ~CMemberExpRewardEvent

`_ZN21CMemberExpRewardEventD0Ev`

`CMemberExpRewardEvent::~CMemberExpRewardEvent()`

| 类 | 地址 |
|---|---|
| `CMemberExpRewardEvent` | `0x081b2972` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b2972  _ZN21CMemberExpRewardEventD0Ev
#           CMemberExpRewardEvent::~CMemberExpRewardEvent()
# range [0x081b2972, 0x081b298f]
081b2972 +0x00:  push   %ebp
081b2973 +0x01:  mov    %esp,%ebp
081b2975 +0x03:  sub    $0x18,%esp
081b2978 +0x06:  mov    0x8(%ebp),%eax
081b297b +0x09:  mov    %eax,(%esp)
081b297e +0x0c:  call   081b2942 <_ZN21CMemberExpRewardEventD1Ev>  ; CMemberExpRewardEvent::~CMemberExpRewardEvent()
081b2983 +0x11:  mov    0x8(%ebp),%eax
081b2986 +0x14:  mov    %eax,(%esp)
081b2989 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081b298e +0x1c:  leave
081b298f +0x1d:  ret
```

## 反编译 C

```c
// CMemberExpRewardEvent::~CMemberExpRewardEvent @ 0x81b2972

/* CMemberExpRewardEvent::~CMemberExpRewardEvent() */

void __thiscall CMemberExpRewardEvent::~CMemberExpRewardEvent(CMemberExpRewardEvent *this)

{
  ~CMemberExpRewardEvent(this);
  operator_delete(this);
  return;
}
```
