# ~CPCRoomWorldDropEvent

`_ZN21CPCRoomWorldDropEventD0Ev`

`CPCRoomWorldDropEvent::~CPCRoomWorldDropEvent()`

| 类 | 地址 |
|---|---|
| `CPCRoomWorldDropEvent` | `0x08267844` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08267844  _ZN21CPCRoomWorldDropEventD0Ev
#           CPCRoomWorldDropEvent::~CPCRoomWorldDropEvent()
# range [0x08267844, 0x08267861]
08267844 +0x00:  push   %ebp
08267845 +0x01:  mov    %esp,%ebp
08267847 +0x03:  sub    $0x18,%esp
0826784a +0x06:  mov    0x8(%ebp),%eax
0826784d +0x09:  mov    %eax,(%esp)
08267850 +0x0c:  call   08267814 <_ZN21CPCRoomWorldDropEventD1Ev>  ; CPCRoomWorldDropEvent::~CPCRoomWorldDropEvent()
08267855 +0x11:  mov    0x8(%ebp),%eax
08267858 +0x14:  mov    %eax,(%esp)
0826785b +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08267860 +0x1c:  leave
08267861 +0x1d:  ret
```

## 反编译 C

```c
// CPCRoomWorldDropEvent::~CPCRoomWorldDropEvent @ 0x8267844

/* CPCRoomWorldDropEvent::~CPCRoomWorldDropEvent() */

void __thiscall CPCRoomWorldDropEvent::~CPCRoomWorldDropEvent(CPCRoomWorldDropEvent *this)

{
  ~CPCRoomWorldDropEvent(this);
  operator_delete(this);
  return;
}
```
