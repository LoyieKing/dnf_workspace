# StartEvent

`_ZN19CItemDropRatioEvent10StartEventEv`

`CItemDropRatioEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CItemDropRatioEvent` | `0x08533244` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08533244  _ZN19CItemDropRatioEvent10StartEventEv
#           CItemDropRatioEvent::StartEvent()
# range [0x08533244, 0x085332b5]
08533244 +0x00:  push   %ebp
08533245 +0x01:  mov    %esp,%ebp
08533247 +0x03:  sub    $0x28,%esp
0853324a +0x06:  mov    0x8(%ebp),%eax
0853324d +0x09:  movl   $0x1,0x4(%esp)
08533255 +0x11:  mov    %eax,(%esp)
08533258 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0853325d +0x19:  mov    0x8(%ebp),%eax
08533260 +0x1c:  movl   $0x1,0xc(%eax)
08533267 +0x23:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0853326c +0x28:  mov    $0x3f800000,%edx
08533271 +0x2d:  mov    %edx,0x4(%esp)
08533275 +0x31:  mov    %eax,(%esp)
08533278 +0x34:  call   083607d8 <_ZN12CDataManager15SetItemDropRateEf>  ; CDataManager::SetItemDropRate(float)
0853327d +0x39:  movl   $0x0,0xc(%esp)
08533285 +0x41:  movl   $0x16,0x8(%esp)
0853328d +0x49:  movl   $&_ZZN19CItemDropRatioEvent10StartEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
08533295 +0x51:  lea    -0x18(%ebp),%eax
08533298 +0x54:  mov    %eax,(%esp)
0853329b +0x57:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085332a0 +0x5c:  movl   $"Item Drop Event Start!",0x4(%esp)
085332a8 +0x64:  lea    -0x18(%ebp),%eax
085332ab +0x67:  mov    %eax,(%esp)
085332ae +0x6a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085332b3 +0x6f:  leave
085332b4 +0x70:  ret
085332b5 +0x71:  nop
```

## 反编译 C

```c
// CItemDropRatioEvent::StartEvent @ 0x8533244

/* CItemDropRatioEvent::StartEvent() */

void __thiscall CItemDropRatioEvent::StartEvent(CItemDropRatioEvent *this)

{
  CDataManager *this_00;
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  *(undefined4 *)(this + 0xc) = 1;
  this_00 = (CDataManager *)G_CDataManager();
  CDataManager::SetItemDropRate(this_00,1.0);
  cMyTrace::cMyTrace(local_1c,"virtual void CItemDropRatioEvent::StartEvent()",0x16,0);
  cMyTrace::operator()(local_1c,"Item Drop Event Start!");
  return;
}
```
