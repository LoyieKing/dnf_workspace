# CItemDropRatioEvent

`_ZN19CItemDropRatioEventC1Ev`

`CItemDropRatioEvent::CItemDropRatioEvent()`

| 类 | 地址 |
|---|---|
| `CItemDropRatioEvent` | `0x085331d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085331d0  _ZN19CItemDropRatioEventC1Ev
#           CItemDropRatioEvent::CItemDropRatioEvent()
# range [0x085331d0, 0x085331f5]
085331d0 +0x00:  push   %ebp
085331d1 +0x01:  mov    %esp,%ebp
085331d3 +0x03:  sub    $0x18,%esp
085331d6 +0x06:  mov    0x8(%ebp),%eax
085331d9 +0x09:  mov    %eax,(%esp)
085331dc +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
085331e1 +0x11:  mov    0x8(%ebp),%eax
085331e4 +0x14:  movl   $&_ZTV19CItemDropRatioEvent+0x8,(%eax)
085331ea +0x1a:  mov    0x8(%ebp),%eax
085331ed +0x1d:  movl   $0x1,0xc(%eax)
085331f4 +0x24:  leave
085331f5 +0x25:  ret
```

## 反编译 C

```c
// CItemDropRatioEvent::CItemDropRatioEvent @ 0x85331d0

/* CItemDropRatioEvent::CItemDropRatioEvent() */

void __thiscall CItemDropRatioEvent::CItemDropRatioEvent(CItemDropRatioEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CItemDropRatioEvent_08c99368;
  *(undefined4 *)(this + 0xc) = 1;
  return;
}
```
