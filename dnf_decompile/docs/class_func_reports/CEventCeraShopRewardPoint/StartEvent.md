# StartEvent

`_ZN25CEventCeraShopRewardPoint10StartEventEv`

`CEventCeraShopRewardPoint::StartEvent()`

| 类 | 地址 |
|---|---|
| `CEventCeraShopRewardPoint` | `0x08164618` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08164618  _ZN25CEventCeraShopRewardPoint10StartEventEv
#           CEventCeraShopRewardPoint::StartEvent()
# range [0x08164618, 0x08164683]
08164618 +0x00:  push   %ebp
08164619 +0x01:  mov    %esp,%ebp
0816461b +0x03:  push   %esi
0816461c +0x04:  push   %ebx
0816461d +0x05:  sub    $0x20,%esp
08164620 +0x08:  mov    0x8(%ebp),%eax
08164623 +0x0b:  movl   $0x1,0x4(%esp)
0816462b +0x13:  mov    %eax,(%esp)
0816462e +0x16:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08164633 +0x1b:  mov    0x8(%ebp),%eax
08164636 +0x1e:  mov    0xc(%eax),%esi
08164639 +0x21:  mov    0x8(%ebp),%eax
0816463c +0x24:  mov    0x10(%eax),%ebx
0816463f +0x27:  movl   $0x0,0xc(%esp)
08164647 +0x2f:  movl   $0x13a,0x8(%esp)
0816464f +0x37:  movl   $&_ZZN25CEventCeraShopRewardPoint10StartEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
08164657 +0x3f:  lea    -0x18(%ebp),%eax
0816465a +0x42:  mov    %eax,(%esp)
0816465d +0x45:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08164662 +0x4a:  mov    %esi,0xc(%esp)
08164666 +0x4e:  mov    %ebx,0x8(%esp)
0816466a +0x52:  movl   $"[Taiwan, CeraShopRewardPoint] Start event. Timing:%d, CeraPoint:%d ",0x4(%esp)
08164672 +0x5a:  lea    -0x18(%ebp),%eax
08164675 +0x5d:  mov    %eax,(%esp)
08164678 +0x60:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0816467d +0x65:  add    $0x20,%esp
08164680 +0x68:  pop    %ebx
08164681 +0x69:  pop    %esi
08164682 +0x6a:  pop    %ebp
08164683 +0x6b:  ret
```

## 反编译 C

```c
// CEventCeraShopRewardPoint::StartEvent @ 0x8164618

/* CEventCeraShopRewardPoint::StartEvent() */

void __thiscall CEventCeraShopRewardPoint::StartEvent(CEventCeraShopRewardPoint *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  cMyTrace local_1c [16];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  uVar1 = *(undefined4 *)(this + 0xc);
  uVar2 = *(undefined4 *)(this + 0x10);
  cMyTrace::cMyTrace(local_1c,"virtual void CEventCeraShopRewardPoint::StartEvent()",0x13a,0);
  cMyTrace::operator()
            (local_1c,"[Taiwan, CeraShopRewardPoint] Start event. Timing:%d, CeraPoint:%d ",uVar2,
             uVar1);
  return;
}
```
