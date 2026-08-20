# StartEvent

`_ZN10BingoEvent10StartEventEv`

`BingoEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `BingoEvent` | `0x080c9a86` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c9a86  _ZN10BingoEvent10StartEventEv
#           BingoEvent::StartEvent()
# range [0x080c9a86, 0x080c9b67]
080c9a86 +0x00:  push   %ebp
080c9a87 +0x01:  mov    %esp,%ebp
080c9a89 +0x03:  sub    $0x38,%esp
080c9a8c +0x06:  mov    0x8(%ebp),%eax
080c9a8f +0x09:  movl   $0x1,0x4(%esp)
080c9a97 +0x11:  mov    %eax,(%esp)
080c9a9a +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
080c9a9f +0x19:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
080c9aa4 +0x1e:  mov    0x37c(%eax),%eax
080c9aaa +0x24:  mov    %eax,-0x14(%ebp)
080c9aad +0x27:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
080c9ab4 +0x2e:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
080c9ab9 +0x33:  mov    %eax,-0x10(%ebp)
080c9abc +0x36:  mov    0x8(%ebp),%eax
080c9abf +0x39:  add    $0xc,%eax
080c9ac2 +0x3c:  mov    %eax,(%esp)
080c9ac5 +0x3f:  call   080ce766 <_GLOBAL__I__ZN10BingoEventC2Ev+0x35b3>  ; global constructors keyed to BingoEvent::BingoEvent()+0x35b3
080c9aca +0x44:  mov    -0x14(%ebp),%edx
080c9acd +0x47:  mov    %edx,0x8(%esp)
080c9ad1 +0x4b:  mov    -0x10(%ebp),%edx
080c9ad4 +0x4e:  mov    %edx,0x4(%esp)
080c9ad8 +0x52:  mov    %eax,(%esp)
080c9adb +0x55:  call   080ca942 <_ZN6CBingo8getTodayEli>  ; CBingo::getToday(long, int)
080c9ae0 +0x5a:  mov    %eax,-0xc(%ebp)
080c9ae3 +0x5d:  cmpl   $0x0,-0xc(%ebp)
080c9ae7 +0x61:  jle    080c9b66 <+0xe0>
080c9ae9 +0x63:  cmpl   $0x1f,-0xc(%ebp)
080c9aed +0x67:  jg     080c9b66 <+0xe0>
080c9aef +0x69:  mov    0x8(%ebp),%eax
080c9af2 +0x6c:  add    $0xc,%eax
080c9af5 +0x6f:  mov    %eax,(%esp)
080c9af8 +0x72:  call   080ce766 <_GLOBAL__I__ZN10BingoEventC2Ev+0x35b3>  ; global constructors keyed to BingoEvent::BingoEvent()+0x35b3
080c9afd +0x77:  mov    -0xc(%ebp),%edx
080c9b00 +0x7a:  mov    %edx,0x4(%esp)
080c9b04 +0x7e:  mov    %eax,(%esp)
080c9b07 +0x81:  call   080ca9b8 <_ZN6CBingo10resetBoardEi>  ; CBingo::resetBoard(int)
080c9b0c +0x86:  mov    0x8(%ebp),%eax
080c9b0f +0x89:  add    $0xc,%eax
080c9b12 +0x8c:  mov    %eax,(%esp)
080c9b15 +0x8f:  call   080ce766 <_GLOBAL__I__ZN10BingoEventC2Ev+0x35b3>  ; global constructors keyed to BingoEvent::BingoEvent()+0x35b3
080c9b1a +0x94:  mov    -0xc(%ebp),%edx
080c9b1d +0x97:  mov    %edx,0x4(%esp)
080c9b21 +0x9b:  mov    %eax,(%esp)
080c9b24 +0x9e:  call   080caa64 <_ZN6CBingo9resetQuizEi>  ; CBingo::resetQuiz(int)
080c9b29 +0xa3:  movl   $0x0,0xc(%esp)
080c9b31 +0xab:  movl   $0x2a,0x8(%esp)
080c9b39 +0xb3:  movl   $&_ZZN10BingoEvent10StartEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
080c9b41 +0xbb:  lea    -0x24(%ebp),%eax
080c9b44 +0xbe:  mov    %eax,(%esp)
080c9b47 +0xc1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
080c9b4c +0xc6:  mov    -0xc(%ebp),%eax
080c9b4f +0xc9:  mov    %eax,0x8(%esp)
080c9b53 +0xcd:  movl   $"BingoEvent Day(%d)",0x4(%esp)
080c9b5b +0xd5:  lea    -0x24(%ebp),%eax
080c9b5e +0xd8:  mov    %eax,(%esp)
080c9b61 +0xdb:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
080c9b66 +0xe0:  leave
080c9b67 +0xe1:  ret
```

## 反编译 C

```c
// BingoEvent::StartEvent @ 0x80c9a86

/* BingoEvent::StartEvent() */

void __thiscall BingoEvent::StartEvent(BingoEvent *this)

{
  int iVar1;
  CBingo *pCVar2;
  cMyTrace local_28 [16];
  int local_18;
  long local_14;
  int local_10;
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  iVar1 = G_CEnvironment();
  local_18 = *(int *)(iVar1 + 0x37c);
  local_14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  pCVar2 = (CBingo *)boost::shared_ptr<CBingo>::operator->((shared_ptr<CBingo> *)(this + 0xc));
  local_10 = CBingo::getToday(pCVar2,local_14,local_18);
  if ((0 < local_10) && (local_10 < 0x20)) {
    pCVar2 = (CBingo *)boost::shared_ptr<CBingo>::operator->((shared_ptr<CBingo> *)(this + 0xc));
    CBingo::resetBoard(pCVar2,local_10);
    pCVar2 = (CBingo *)boost::shared_ptr<CBingo>::operator->((shared_ptr<CBingo> *)(this + 0xc));
    CBingo::resetQuiz(pCVar2,local_10);
    cMyTrace::cMyTrace(local_28,"virtual void BingoEvent::StartEvent()",0x2a,0);
    cMyTrace::operator()(local_28,"BingoEvent Day(%d)",local_10);
  }
  return;
}
```
