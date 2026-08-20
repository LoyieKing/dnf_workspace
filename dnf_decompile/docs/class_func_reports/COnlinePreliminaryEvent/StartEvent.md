# StartEvent

`_ZN23COnlinePreliminaryEvent10StartEventEv`

`COnlinePreliminaryEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `COnlinePreliminaryEvent` | `0x081bb4fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bb4fa  _ZN23COnlinePreliminaryEvent10StartEventEv
#           COnlinePreliminaryEvent::StartEvent()
# range [0x081bb4fa, 0x081bb56d]
081bb4fa +0x00:  push   %ebp
081bb4fb +0x01:  mov    %esp,%ebp
081bb4fd +0x03:  sub    $0x28,%esp
081bb500 +0x06:  mov    0x8(%ebp),%eax
081bb503 +0x09:  movl   $0x1,0x4(%esp)
081bb50b +0x11:  mov    %eax,(%esp)
081bb50e +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
081bb513 +0x19:  movl   $0x0,0xc(%esp)
081bb51b +0x21:  movl   $0x15,0x8(%esp)
081bb523 +0x29:  movl   $&_ZZN23COnlinePreliminaryEvent10StartEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
081bb52b +0x31:  lea    -0x18(%ebp),%eax
081bb52e +0x34:  mov    %eax,(%esp)
081bb531 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081bb536 +0x3c:  movl   $"COnlinePreliminaryEvent Start!",0x4(%esp)
081bb53e +0x44:  lea    -0x18(%ebp),%eax
081bb541 +0x47:  mov    %eax,(%esp)
081bb544 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081bb549 +0x4f:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081bb54e +0x54:  mov    %eax,(%esp)
081bb551 +0x57:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
081bb556 +0x5c:  cmp    $0xe,%eax
081bb559 +0x5f:  sete   %al
081bb55c +0x62:  test   %al,%al
081bb55e +0x64:  je     081bb56c <+0x72>
081bb560 +0x66:  movl   $0x1,(%esp)
081bb567 +0x6d:  call   085608da <_ZN18online_preliminary18COnlinePreliminary12SetMatchAbleEb>  ; online_preliminary::COnlinePreliminary::SetMatchAble(bool)
081bb56c +0x72:  leave
081bb56d +0x73:  ret
```

## 反编译 C

```c
// COnlinePreliminaryEvent::StartEvent @ 0x81bb4fa

/* COnlinePreliminaryEvent::StartEvent() */

void __thiscall COnlinePreliminaryEvent::StartEvent(COnlinePreliminaryEvent *this)

{
  GameWorld *this_00;
  int iVar1;
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"virtual void COnlinePreliminaryEvent::StartEvent()",0x15,0);
  cMyTrace::operator()(local_1c,"COnlinePreliminaryEvent Start!");
  this_00 = (GameWorld *)G_GameWorld();
  iVar1 = GameWorld::GetChannelType(this_00);
  if (iVar1 == 0xe) {
    online_preliminary::COnlinePreliminary::SetMatchAble(true);
  }
  return;
}
```
