# StartEvent

`_ZN16CCoinRefillEvent10StartEventE10Word_Param`

`CCoinRefillEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CCoinRefillEvent` | `0x0832be82` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832be82  _ZN16CCoinRefillEvent10StartEventE10Word_Param
#           CCoinRefillEvent::StartEvent(Word_Param)
# range [0x0832be82, 0x0832c047]
0832be82 +0x000:  push   %ebp
0832be83 +0x001:  mov    %esp,%ebp
0832be85 +0x003:  push   %edi
0832be86 +0x004:  push   %esi
0832be87 +0x005:  push   %ebx
0832be88 +0x006:  sub    $0x4c,%esp
0832be8b +0x009:  mov    0x8(%ebp),%eax
0832be8e +0x00c:  movl   $0x1,0x4(%esp)
0832be96 +0x014:  mov    %eax,(%esp)
0832be99 +0x017:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0832be9e +0x01c:  mov    0x8(%ebp),%eax
0832bea1 +0x01f:  add    $0xc,%eax
0832bea4 +0x022:  movl   $0x14,0x8(%esp)
0832beac +0x02a:  movl   $0xffffffff,0x4(%esp)
0832beb4 +0x032:  mov    %eax,(%esp)
0832beb7 +0x035:  call   0807dcc0 <_init+0x5b8>
0832bebc +0x03a:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0832bec1 +0x03f:  mov    0x37c(%eax),%edx
0832bec7 +0x045:  mov    0x8(%ebp),%eax
0832beca +0x048:  mov    %edx,0x10(%eax)
0832becd +0x04b:  movzwl 0xc(%ebp),%eax
0832bed1 +0x04f:  movzwl %ax,%edx
0832bed4 +0x052:  mov    0x8(%ebp),%eax
0832bed7 +0x055:  mov    %edx,0x14(%eax)
0832beda +0x058:  movzwl 0xe(%ebp),%eax
0832bede +0x05c:  movzwl %ax,%edx
0832bee1 +0x05f:  mov    0x8(%ebp),%eax
0832bee4 +0x062:  mov    %edx,0x18(%eax)
0832bee7 +0x065:  mov    0x8(%ebp),%eax
0832beea +0x068:  movl   $0x0,0xc(%eax)
0832bef1 +0x06f:  jmp    0832bf40 <+0xbe>
0832bef3 +0x071:  mov    0x8(%ebp),%eax
0832bef6 +0x074:  mov    0xc(%eax),%eax
0832bef9 +0x077:  lea    0x1(%eax),%edx
0832befc +0x07a:  mov    0x8(%ebp),%eax
0832beff +0x07d:  mov    0xc(%eax,%edx,4),%eax
0832bf03 +0x081:  cmp    $0x17,%eax
0832bf06 +0x084:  jle    0832bf1c <+0x9a>
0832bf08 +0x086:  mov    0x8(%ebp),%eax
0832bf0b +0x089:  mov    0xc(%eax),%eax
0832bf0e +0x08c:  lea    0x1(%eax),%edx
0832bf11 +0x08f:  mov    0x8(%ebp),%eax
0832bf14 +0x092:  movl   $0xffffffff,0xc(%eax,%edx,4)
0832bf1c +0x09a:  mov    0x8(%ebp),%eax
0832bf1f +0x09d:  mov    0xc(%eax),%eax
0832bf22 +0x0a0:  lea    0x1(%eax),%edx
0832bf25 +0x0a3:  mov    0x8(%ebp),%eax
0832bf28 +0x0a6:  mov    0xc(%eax,%edx,4),%eax
0832bf2c +0x0aa:  cmp    $0xffffffff,%eax
0832bf2f +0x0ad:  je     0832bf52 <+0xd0>
0832bf31 +0x0af:  mov    0x8(%ebp),%eax
0832bf34 +0x0b2:  mov    0xc(%eax),%eax
0832bf37 +0x0b5:  lea    0x1(%eax),%edx
0832bf3a +0x0b8:  mov    0x8(%ebp),%eax
0832bf3d +0x0bb:  mov    %edx,0xc(%eax)
0832bf40 +0x0be:  mov    0x8(%ebp),%eax
0832bf43 +0x0c1:  mov    0xc(%eax),%eax
0832bf46 +0x0c4:  cmp    $0x3,%eax
0832bf49 +0x0c7:  setbe  %al
0832bf4c +0x0ca:  test   %al,%al
0832bf4e +0x0cc:  jne    0832bef3 <+0x71>
0832bf50 +0x0ce:  jmp    0832bf53 <+0xd1>
0832bf52 +0x0d0:  nop
0832bf53 +0x0d1:  movl   $0x1,-0x28(%ebp)
0832bf5a +0x0d8:  jmp    0832bfcd <+0x14b>
0832bf5c +0x0da:  movl   $0x19,-0x24(%ebp)
0832bf63 +0x0e1:  movl   $0x5,-0x20(%ebp)
0832bf6a +0x0e8:  mov    -0x28(%ebp),%eax
0832bf6d +0x0eb:  mov    %eax,-0x1c(%ebp)
0832bf70 +0x0ee:  jmp    0832bf98 <+0x116>
0832bf72 +0x0f0:  mov    -0x1c(%ebp),%edx
0832bf75 +0x0f3:  mov    0x8(%ebp),%eax
0832bf78 +0x0f6:  mov    0xc(%eax,%edx,4),%eax
0832bf7c +0x0fa:  cmp    -0x24(%ebp),%eax
0832bf7f +0x0fd:  jge    0832bf94 <+0x112>
0832bf81 +0x0ff:  mov    -0x1c(%ebp),%edx
0832bf84 +0x102:  mov    0x8(%ebp),%eax
0832bf87 +0x105:  mov    0xc(%eax,%edx,4),%eax
0832bf8b +0x109:  mov    %eax,-0x24(%ebp)
0832bf8e +0x10c:  mov    -0x1c(%ebp),%eax
0832bf91 +0x10f:  mov    %eax,-0x20(%ebp)
0832bf94 +0x112:  addl   $0x1,-0x1c(%ebp)
0832bf98 +0x116:  mov    0x8(%ebp),%eax
0832bf9b +0x119:  mov    0xc(%eax),%eax
0832bf9e +0x11c:  cmp    -0x1c(%ebp),%eax
0832bfa1 +0x11f:  setge  %al
0832bfa4 +0x122:  test   %al,%al
0832bfa6 +0x124:  jne    0832bf72 <+0xf0>
0832bfa8 +0x126:  mov    -0x20(%ebp),%edx
0832bfab +0x129:  mov    -0x28(%ebp),%ecx
0832bfae +0x12c:  mov    0x8(%ebp),%eax
0832bfb1 +0x12f:  mov    0xc(%eax,%ecx,4),%ecx
0832bfb5 +0x133:  mov    0x8(%ebp),%eax
0832bfb8 +0x136:  mov    %ecx,0xc(%eax,%edx,4)
0832bfbc +0x13a:  mov    -0x28(%ebp),%edx
0832bfbf +0x13d:  mov    0x8(%ebp),%eax
0832bfc2 +0x140:  mov    -0x24(%ebp),%ecx
0832bfc5 +0x143:  mov    %ecx,0xc(%eax,%edx,4)
0832bfc9 +0x147:  addl   $0x1,-0x28(%ebp)
0832bfcd +0x14b:  mov    0x8(%ebp),%eax
0832bfd0 +0x14e:  mov    0xc(%eax),%eax
0832bfd3 +0x151:  cmp    -0x28(%ebp),%eax
0832bfd6 +0x154:  setge  %al
0832bfd9 +0x157:  test   %al,%al
0832bfdb +0x159:  jne    0832bf5c <+0xda>
0832bfe1 +0x15f:  mov    0x8(%ebp),%eax
0832bfe4 +0x162:  mov    %eax,(%esp)
0832bfe7 +0x165:  call   0832c1fe <_ZNK16CCoinRefillEvent21registNextRefillTimerEv>  ; CCoinRefillEvent::registNextRefillTimer() const
0832bfec +0x16a:  mov    0x8(%ebp),%eax
0832bfef +0x16d:  mov    0x18(%eax),%edi
0832bff2 +0x170:  mov    0x8(%ebp),%eax
0832bff5 +0x173:  mov    0x14(%eax),%esi
0832bff8 +0x176:  mov    0x8(%ebp),%eax
0832bffb +0x179:  mov    0x10(%eax),%ebx
0832bffe +0x17c:  movl   $0x0,0xc(%esp)
0832c006 +0x184:  movl   $0x48,0x8(%esp)
0832c00e +0x18c:  movl   $&_ZZN16CCoinRefillEvent10StartEventE10Word_ParamE19__PRETTY_FUNCTION__,0x4(%esp)
0832c016 +0x194:  lea    -0x38(%ebp),%eax
0832c019 +0x197:  mov    %eax,(%esp)
0832c01c +0x19a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0832c021 +0x19f:  mov    %edi,0x10(%esp)
0832c025 +0x1a3:  mov    %esi,0xc(%esp)
0832c029 +0x1a7:  mov    %ebx,0x8(%esp)
0832c02d +0x1ab:  movl   $"Coin Refill Event Start! time(%d) time(%d) time(%d)",0x4(%esp)
0832c035 +0x1b3:  lea    -0x38(%ebp),%eax
0832c038 +0x1b6:  mov    %eax,(%esp)
0832c03b +0x1b9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0832c040 +0x1be:  add    $0x4c,%esp
0832c043 +0x1c1:  pop    %ebx
0832c044 +0x1c2:  pop    %esi
0832c045 +0x1c3:  pop    %edi
0832c046 +0x1c4:  pop    %ebp
0832c047 +0x1c5:  ret
```

## 反编译 C

```c
// CCoinRefillEvent::StartEvent @ 0x832be82

/* CCoinRefillEvent::StartEvent(Word_Param) */

void __thiscall CCoinRefillEvent::StartEvent(CCoinRefillEvent *this,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  cMyTrace local_3c [16];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  memset(this + 0xc,-1,0x14);
  iVar4 = G_CEnvironment();
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(iVar4 + 0x37c);
  *(uint *)(this + 0x14) = param_2 & 0xffff;
  *(uint *)(this + 0x18) = param_2 >> 0x10;
  *(undefined4 *)(this + 0xc) = 0;
  while (*(uint *)(this + 0xc) < 4) {
    if (0x17 < *(int *)(this + (*(int *)(this + 0xc) + 1) * 4 + 0xc)) {
      *(undefined4 *)(this + (*(int *)(this + 0xc) + 1) * 4 + 0xc) = 0xffffffff;
    }
    if (*(int *)(this + (*(int *)(this + 0xc) + 1) * 4 + 0xc) == -1) break;
    *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
  }
  for (local_2c = 1; local_2c <= *(int *)(this + 0xc); local_2c = local_2c + 1) {
    local_28 = 0x19;
    local_24 = 5;
    for (local_20 = local_2c; local_20 <= *(int *)(this + 0xc); local_20 = local_20 + 1) {
      if (*(int *)(this + local_20 * 4 + 0xc) < local_28) {
        local_28 = *(int *)(this + local_20 * 4 + 0xc);
        local_24 = local_20;
      }
    }
    *(undefined4 *)(this + local_24 * 4 + 0xc) = *(undefined4 *)(this + local_2c * 4 + 0xc);
    *(int *)(this + local_2c * 4 + 0xc) = local_28;
  }
  registNextRefillTimer(this);
  uVar1 = *(undefined4 *)(this + 0x18);
  uVar2 = *(undefined4 *)(this + 0x14);
  uVar3 = *(undefined4 *)(this + 0x10);
  cMyTrace::cMyTrace(local_3c,"virtual void CCoinRefillEvent::StartEvent(Word_Param)",0x48,0);
  cMyTrace::operator()
            (local_3c,"Coin Refill Event Start! time(%d) time(%d) time(%d)",uVar3,uVar2,uVar1);
  return;
}
```
