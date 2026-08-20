# EndEvent

`_ZN19CItemDropRatioEvent8EndEventEv`

`CItemDropRatioEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CItemDropRatioEvent` | `0x08533340` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08533340  _ZN19CItemDropRatioEvent8EndEventEv
#           CItemDropRatioEvent::EndEvent()
# range [0x08533340, 0x085333b0]
08533340 +0x00:  push   %ebp
08533341 +0x01:  mov    %esp,%ebp
08533343 +0x03:  sub    $0x28,%esp
08533346 +0x06:  mov    0x8(%ebp),%eax
08533349 +0x09:  movl   $0x0,0x4(%esp)
08533351 +0x11:  mov    %eax,(%esp)
08533354 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08533359 +0x19:  mov    0x8(%ebp),%eax
0853335c +0x1c:  movl   $0x1,0xc(%eax)
08533363 +0x23:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08533368 +0x28:  mov    $0x3f800000,%edx
0853336d +0x2d:  mov    %edx,0x4(%esp)
08533371 +0x31:  mov    %eax,(%esp)
08533374 +0x34:  call   083607d8 <_ZN12CDataManager15SetItemDropRateEf>  ; CDataManager::SetItemDropRate(float)
08533379 +0x39:  movl   $0x0,0xc(%esp)
08533381 +0x41:  movl   $0x28,0x8(%esp)
08533389 +0x49:  movl   $&_ZZN19CItemDropRatioEvent8EndEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
08533391 +0x51:  lea    -0x18(%ebp),%eax
08533394 +0x54:  mov    %eax,(%esp)
08533397 +0x57:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0853339c +0x5c:  movl   $"Item Drop Event End!",0x4(%esp)
085333a4 +0x64:  lea    -0x18(%ebp),%eax
085333a7 +0x67:  mov    %eax,(%esp)
085333aa +0x6a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085333af +0x6f:  leave
085333b0 +0x70:  ret
```

## 反编译 C

```c
// CItemDropRatioEvent::EndEvent @ 0x8533340

/* CItemDropRatioEvent::EndEvent() */

void __thiscall CItemDropRatioEvent::EndEvent(CItemDropRatioEvent *this)

{
  CDataManager *this_00;
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  *(undefined4 *)(this + 0xc) = 1;
  this_00 = (CDataManager *)G_CDataManager();
  CDataManager::SetItemDropRate(this_00,1.0);
  cMyTrace::cMyTrace(local_1c,"virtual void CItemDropRatioEvent::EndEvent()",0x28,0);
  cMyTrace::operator()(local_1c,"Item Drop Event End!");
  return;
}
```
