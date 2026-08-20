# StartEvent

`_ZN33CAutoMarketConditionsControlEvent10StartEventE10Word_Param`

`CAutoMarketConditionsControlEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CAutoMarketConditionsControlEvent` | `0x08109cd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08109cd0  _ZN33CAutoMarketConditionsControlEvent10StartEventE10Word_Param
#           CAutoMarketConditionsControlEvent::StartEvent(Word_Param)
# range [0x08109cd0, 0x08109cf7]
08109cd0 +0x00:  push   %ebp
08109cd1 +0x01:  mov    %esp,%ebp
08109cd3 +0x03:  sub    $0x18,%esp
08109cd6 +0x06:  mov    0x8(%ebp),%eax
08109cd9 +0x09:  movl   $0x1,0x4(%esp)
08109ce1 +0x11:  mov    %eax,(%esp)
08109ce4 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08109ce9 +0x19:  movl   $0x1,(%esp)
08109cf0 +0x20:  call   08433ada <_ZN34DB_LoadAutoMarketConditionsControl11makeRequestEb>  ; DB_LoadAutoMarketConditionsControl::makeRequest(bool)
08109cf5 +0x25:  leave
08109cf6 +0x26:  ret
08109cf7 +0x27:  nop
```

## 反编译 C

```c
// CAutoMarketConditionsControlEvent::StartEvent @ 0x8109cd0

/* CAutoMarketConditionsControlEvent::StartEvent(Word_Param) */

void CAutoMarketConditionsControlEvent::StartEvent(CEventBase *param_1)

{
  CEventBase::SetEventFlag(param_1,true);
  DB_LoadAutoMarketConditionsControl::makeRequest(true);
  return;
}
```
