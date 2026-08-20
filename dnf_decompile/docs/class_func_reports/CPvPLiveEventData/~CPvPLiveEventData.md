# ~CPvPLiveEventData

`_ZN17CPvPLiveEventDataD1Ev`

`CPvPLiveEventData::~CPvPLiveEventData()`

| 类 | 地址 |
|---|---|
| `CPvPLiveEventData` | `0x08269070` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08269070  _ZN17CPvPLiveEventDataD1Ev
#           CPvPLiveEventData::~CPvPLiveEventData()
# range [0x08269070, 0x0826909f]
08269070 +0x00:  push   %ebp
08269071 +0x01:  mov    %esp,%ebp
08269073 +0x03:  sub    $0x18,%esp
08269076 +0x06:  mov    0x8(%ebp),%eax
08269079 +0x09:  movl   $&_ZTV17CPvPLiveEventData+0x8,(%eax)
0826907f +0x0f:  mov    0x8(%ebp),%eax
08269082 +0x12:  mov    %eax,(%esp)
08269085 +0x15:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
0826908a +0x1a:  mov    $0x0,%eax
0826908f +0x1f:  test   %al,%al
08269091 +0x21:  je     0826909e <+0x2e>
08269093 +0x23:  mov    0x8(%ebp),%eax
08269096 +0x26:  mov    %eax,(%esp)
08269099 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0826909e +0x2e:  leave
0826909f +0x2f:  ret
```

## 反编译 C

```c
// CPvPLiveEventData::~CPvPLiveEventData @ 0x8269070

/* WARNING: Removing unreachable block (ram,0x08269093) */
/* CPvPLiveEventData::~CPvPLiveEventData() */

void __thiscall CPvPLiveEventData::~CPvPLiveEventData(CPvPLiveEventData *this)

{
  *(undefined ***)this = &PTR_ResetDailyMidnight_08bf5328;
  charac_expand::CData::~CData((CData *)this);
  return;
}
```
