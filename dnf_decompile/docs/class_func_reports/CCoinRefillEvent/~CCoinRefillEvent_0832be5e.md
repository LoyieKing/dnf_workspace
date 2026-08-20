# ~CCoinRefillEvent

`_ZN16CCoinRefillEventD0Ev`

`CCoinRefillEvent::~CCoinRefillEvent()`

| 类 | 地址 |
|---|---|
| `CCoinRefillEvent` | `0x0832be5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832be5e  _ZN16CCoinRefillEventD0Ev
#           CCoinRefillEvent::~CCoinRefillEvent()
# range [0x0832be5e, 0x0832be7b]
0832be5e +0x00:  push   %ebp
0832be5f +0x01:  mov    %esp,%ebp
0832be61 +0x03:  sub    $0x18,%esp
0832be64 +0x06:  mov    0x8(%ebp),%eax
0832be67 +0x09:  mov    %eax,(%esp)
0832be6a +0x0c:  call   0832be2e <_ZN16CCoinRefillEventD1Ev>  ; CCoinRefillEvent::~CCoinRefillEvent()
0832be6f +0x11:  mov    0x8(%ebp),%eax
0832be72 +0x14:  mov    %eax,(%esp)
0832be75 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0832be7a +0x1c:  leave
0832be7b +0x1d:  ret
```

## 反编译 C

```c
// CCoinRefillEvent::~CCoinRefillEvent @ 0x832be5e

/* CCoinRefillEvent::~CCoinRefillEvent() */

void __thiscall CCoinRefillEvent::~CCoinRefillEvent(CCoinRefillEvent *this)

{
  ~CCoinRefillEvent(this);
  operator_delete(this);
  return;
}
```
