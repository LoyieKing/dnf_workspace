# ~CPvPLiveEventData

`_ZN17CPvPLiveEventDataD0Ev`

`CPvPLiveEventData::~CPvPLiveEventData()`

| 类 | 地址 |
|---|---|
| `CPvPLiveEventData` | `0x082690a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082690a0  _ZN17CPvPLiveEventDataD0Ev
#           CPvPLiveEventData::~CPvPLiveEventData()
# range [0x082690a0, 0x082690bd]
082690a0 +0x00:  push   %ebp
082690a1 +0x01:  mov    %esp,%ebp
082690a3 +0x03:  sub    $0x18,%esp
082690a6 +0x06:  mov    0x8(%ebp),%eax
082690a9 +0x09:  mov    %eax,(%esp)
082690ac +0x0c:  call   08269070 <_ZN17CPvPLiveEventDataD1Ev>  ; CPvPLiveEventData::~CPvPLiveEventData()
082690b1 +0x11:  mov    0x8(%ebp),%eax
082690b4 +0x14:  mov    %eax,(%esp)
082690b7 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082690bc +0x1c:  leave
082690bd +0x1d:  ret
```

## 反编译 C

```c
// CPvPLiveEventData::~CPvPLiveEventData @ 0x82690a0

/* CPvPLiveEventData::~CPvPLiveEventData() */

void __thiscall CPvPLiveEventData::~CPvPLiveEventData(CPvPLiveEventData *this)

{
  ~CPvPLiveEventData(this);
  operator_delete(this);
  return;
}
```
