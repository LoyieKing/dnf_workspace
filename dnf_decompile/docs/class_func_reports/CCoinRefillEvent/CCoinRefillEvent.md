# CCoinRefillEvent

`_ZN16CCoinRefillEventC1Ev`

`CCoinRefillEvent::CCoinRefillEvent()`

| 类 | 地址 |
|---|---|
| `CCoinRefillEvent` | `0x0832bdf4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832bdf4  _ZN16CCoinRefillEventC1Ev
#           CCoinRefillEvent::CCoinRefillEvent()
# range [0x0832bdf4, 0x0832be2d]
0832bdf4 +0x00:  push   %ebp
0832bdf5 +0x01:  mov    %esp,%ebp
0832bdf7 +0x03:  sub    $0x18,%esp
0832bdfa +0x06:  mov    0x8(%ebp),%eax
0832bdfd +0x09:  mov    %eax,(%esp)
0832be00 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
0832be05 +0x11:  mov    0x8(%ebp),%eax
0832be08 +0x14:  movl   $&_ZTV16CCoinRefillEvent+0x8,(%eax)
0832be0e +0x1a:  mov    0x8(%ebp),%eax
0832be11 +0x1d:  add    $0xc,%eax
0832be14 +0x20:  movl   $0x14,0x8(%esp)
0832be1c +0x28:  movl   $0xffffffff,0x4(%esp)
0832be24 +0x30:  mov    %eax,(%esp)
0832be27 +0x33:  call   0807dcc0 <_init+0x5b8>
0832be2c +0x38:  leave
0832be2d +0x39:  ret
```

## 反编译 C

```c
// CCoinRefillEvent::CCoinRefillEvent @ 0x832bdf4

/* CCoinRefillEvent::CCoinRefillEvent() */

void __thiscall CCoinRefillEvent::CCoinRefillEvent(CCoinRefillEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CCoinRefillEvent_08c2aba8;
  memset(this + 0xc,-1,0x14);
  return;
}
```
