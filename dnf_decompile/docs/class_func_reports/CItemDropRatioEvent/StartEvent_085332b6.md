# StartEvent

`_ZN19CItemDropRatioEvent10StartEventE10Word_Param`

`CItemDropRatioEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CItemDropRatioEvent` | `0x085332b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085332b6  _ZN19CItemDropRatioEvent10StartEventE10Word_Param
#           CItemDropRatioEvent::StartEvent(Word_Param)
# range [0x085332b6, 0x0853333f]
085332b6 +0x00:  push   %ebp
085332b7 +0x01:  mov    %esp,%ebp
085332b9 +0x03:  sub    $0x38,%esp
085332bc +0x06:  mov    0x8(%ebp),%eax
085332bf +0x09:  movl   $0x1,0x4(%esp)
085332c7 +0x11:  mov    %eax,(%esp)
085332ca +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
085332cf +0x19:  movzwl 0xc(%ebp),%eax
085332d3 +0x1d:  movzwl %ax,%edx
085332d6 +0x20:  mov    0x8(%ebp),%eax
085332d9 +0x23:  mov    %edx,0xc(%eax)
085332dc +0x26:  mov    0x8(%ebp),%eax
085332df +0x29:  mov    0xc(%eax),%eax
085332e2 +0x2c:  mov    $0x0,%edx
085332e7 +0x31:  mov    %eax,-0x20(%ebp)
085332ea +0x34:  mov    %edx,-0x1c(%ebp)
085332ed +0x37:  fildll -0x20(%ebp)
085332f0 +0x3a:  fstps  -0x24(%ebp)
085332f3 +0x3d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085332f8 +0x42:  flds   -0x24(%ebp)
085332fb +0x45:  fstps  0x4(%esp)
085332ff +0x49:  mov    %eax,(%esp)
08533302 +0x4c:  call   083607d8 <_ZN12CDataManager15SetItemDropRateEf>  ; CDataManager::SetItemDropRate(float)
08533307 +0x51:  movl   $0x0,0xc(%esp)
0853330f +0x59:  movl   $0x1f,0x8(%esp)
08533317 +0x61:  movl   $&_ZZN19CItemDropRatioEvent10StartEventE10Word_ParamE19__PRETTY_FUNCTION__,0x4(%esp)
0853331f +0x69:  lea    -0x18(%ebp),%eax
08533322 +0x6c:  mov    %eax,(%esp)
08533325 +0x6f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0853332a +0x74:  movl   $"Item Drop Event Start!",0x4(%esp)
08533332 +0x7c:  lea    -0x18(%ebp),%eax
08533335 +0x7f:  mov    %eax,(%esp)
08533338 +0x82:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0853333d +0x87:  leave
0853333e +0x88:  ret
0853333f +0x89:  nop
```

## 反编译 C

```c
// CItemDropRatioEvent::StartEvent @ 0x85332b6

/* CItemDropRatioEvent::StartEvent(Word_Param) */

void __thiscall CItemDropRatioEvent::StartEvent(CItemDropRatioEvent *this,ushort param_2)

{
  uint uVar1;
  CDataManager *this_00;
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  *(uint *)(this + 0xc) = (uint)param_2;
  uVar1 = *(uint *)(this + 0xc);
  this_00 = (CDataManager *)G_CDataManager();
  CDataManager::SetItemDropRate(this_00,(float)uVar1);
  cMyTrace::cMyTrace(local_1c,"virtual void CItemDropRatioEvent::StartEvent(Word_Param)",0x1f,0);
  cMyTrace::operator()(local_1c,"Item Drop Event Start!");
  return;
}
```
