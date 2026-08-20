# ~CPcRoomCardBlankItemEvent

`_ZN25CPcRoomCardBlankItemEventD0Ev`

`CPcRoomCardBlankItemEvent::~CPcRoomCardBlankItemEvent()`

| 类 | 地址 |
|---|---|
| `CPcRoomCardBlankItemEvent` | `0x08267488` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08267488  _ZN25CPcRoomCardBlankItemEventD0Ev
#           CPcRoomCardBlankItemEvent::~CPcRoomCardBlankItemEvent()
# range [0x08267488, 0x082674a5]
08267488 +0x00:  push   %ebp
08267489 +0x01:  mov    %esp,%ebp
0826748b +0x03:  sub    $0x18,%esp
0826748e +0x06:  mov    0x8(%ebp),%eax
08267491 +0x09:  mov    %eax,(%esp)
08267494 +0x0c:  call   08267458 <_ZN25CPcRoomCardBlankItemEventD1Ev>  ; CPcRoomCardBlankItemEvent::~CPcRoomCardBlankItemEvent()
08267499 +0x11:  mov    0x8(%ebp),%eax
0826749c +0x14:  mov    %eax,(%esp)
0826749f +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082674a4 +0x1c:  leave
082674a5 +0x1d:  ret
```

## 反编译 C

```c
// CPcRoomCardBlankItemEvent::~CPcRoomCardBlankItemEvent @ 0x8267488

/* CPcRoomCardBlankItemEvent::~CPcRoomCardBlankItemEvent() */

void __thiscall
CPcRoomCardBlankItemEvent::~CPcRoomCardBlankItemEvent(CPcRoomCardBlankItemEvent *this)

{
  ~CPcRoomCardBlankItemEvent(this);
  operator_delete(this);
  return;
}
```
