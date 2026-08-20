# ~CTrcOnOffEvent

`_ZN14CTrcOnOffEventD0Ev`

`CTrcOnOffEvent::~CTrcOnOffEvent()`

| 类 | 地址 |
|---|---|
| `CTrcOnOffEvent` | `0x08285a90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08285a90  _ZN14CTrcOnOffEventD0Ev
#           CTrcOnOffEvent::~CTrcOnOffEvent()
# range [0x08285a90, 0x08285aad]
08285a90 +0x00:  push   %ebp
08285a91 +0x01:  mov    %esp,%ebp
08285a93 +0x03:  sub    $0x18,%esp
08285a96 +0x06:  mov    0x8(%ebp),%eax
08285a99 +0x09:  mov    %eax,(%esp)
08285a9c +0x0c:  call   08285a60 <_ZN14CTrcOnOffEventD1Ev>  ; CTrcOnOffEvent::~CTrcOnOffEvent()
08285aa1 +0x11:  mov    0x8(%ebp),%eax
08285aa4 +0x14:  mov    %eax,(%esp)
08285aa7 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08285aac +0x1c:  leave
08285aad +0x1d:  ret
```

## 反编译 C

```c
// CTrcOnOffEvent::~CTrcOnOffEvent @ 0x8285a90

/* CTrcOnOffEvent::~CTrcOnOffEvent() */

void __thiscall CTrcOnOffEvent::~CTrcOnOffEvent(CTrcOnOffEvent *this)

{
  ~CTrcOnOffEvent(this);
  operator_delete(this);
  return;
}
```
