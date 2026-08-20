# ~CPCRoomBurningEvent

`_ZN19CPCRoomBurningEventD0Ev`

`CPCRoomBurningEvent::~CPCRoomBurningEvent()`

| 类 | 地址 |
|---|---|
| `CPCRoomBurningEvent` | `0x08267232` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08267232  _ZN19CPCRoomBurningEventD0Ev
#           CPCRoomBurningEvent::~CPCRoomBurningEvent()
# range [0x08267232, 0x0826724f]
08267232 +0x00:  push   %ebp
08267233 +0x01:  mov    %esp,%ebp
08267235 +0x03:  sub    $0x18,%esp
08267238 +0x06:  mov    0x8(%ebp),%eax
0826723b +0x09:  mov    %eax,(%esp)
0826723e +0x0c:  call   08267202 <_ZN19CPCRoomBurningEventD1Ev>  ; CPCRoomBurningEvent::~CPCRoomBurningEvent()
08267243 +0x11:  mov    0x8(%ebp),%eax
08267246 +0x14:  mov    %eax,(%esp)
08267249 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0826724e +0x1c:  leave
0826724f +0x1d:  ret
```

## 反编译 C

```c
// CPCRoomBurningEvent::~CPCRoomBurningEvent @ 0x8267232

/* CPCRoomBurningEvent::~CPCRoomBurningEvent() */

void __thiscall CPCRoomBurningEvent::~CPCRoomBurningEvent(CPCRoomBurningEvent *this)

{
  ~CPCRoomBurningEvent(this);
  operator_delete(this);
  return;
}
```
