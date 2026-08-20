# StartEvent

`_ZN23COnlinePreliminaryEvent10StartEventE10Word_Param`

`COnlinePreliminaryEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `COnlinePreliminaryEvent` | `0x081bb56e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bb56e  _ZN23COnlinePreliminaryEvent10StartEventE10Word_Param
#           COnlinePreliminaryEvent::StartEvent(Word_Param)
# range [0x081bb56e, 0x081bb5e1]
081bb56e +0x00:  push   %ebp
081bb56f +0x01:  mov    %esp,%ebp
081bb571 +0x03:  sub    $0x28,%esp
081bb574 +0x06:  mov    0x8(%ebp),%eax
081bb577 +0x09:  movl   $0x1,0x4(%esp)
081bb57f +0x11:  mov    %eax,(%esp)
081bb582 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
081bb587 +0x19:  movl   $0x0,0xc(%esp)
081bb58f +0x21:  movl   $0x1f,0x8(%esp)
081bb597 +0x29:  movl   $&_ZZN23COnlinePreliminaryEvent10StartEventE10Word_ParamE19__PRETTY_FUNCTION__,0x4(%esp)
081bb59f +0x31:  lea    -0x18(%ebp),%eax
081bb5a2 +0x34:  mov    %eax,(%esp)
081bb5a5 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081bb5aa +0x3c:  movl   $"COnlinePreliminaryEvent Start!",0x4(%esp)
081bb5b2 +0x44:  lea    -0x18(%ebp),%eax
081bb5b5 +0x47:  mov    %eax,(%esp)
081bb5b8 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081bb5bd +0x4f:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081bb5c2 +0x54:  mov    %eax,(%esp)
081bb5c5 +0x57:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
081bb5ca +0x5c:  cmp    $0xe,%eax
081bb5cd +0x5f:  sete   %al
081bb5d0 +0x62:  test   %al,%al
081bb5d2 +0x64:  je     081bb5e0 <+0x72>
081bb5d4 +0x66:  movl   $0x1,(%esp)
081bb5db +0x6d:  call   085608da <_ZN18online_preliminary18COnlinePreliminary12SetMatchAbleEb>  ; online_preliminary::COnlinePreliminary::SetMatchAble(bool)
081bb5e0 +0x72:  leave
081bb5e1 +0x73:  ret
```

## 反编译 C

```c
// COnlinePreliminaryEvent::StartEvent @ 0x81bb56e

/* COnlinePreliminaryEvent::StartEvent(Word_Param) */

void COnlinePreliminaryEvent::StartEvent(CEventBase *param_1)

{
  GameWorld *this;
  int iVar1;
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"virtual void COnlinePreliminaryEvent::StartEvent(Word_Param)",0x1f,0)
  ;
  cMyTrace::operator()(local_1c,"COnlinePreliminaryEvent Start!");
  this = (GameWorld *)G_GameWorld();
  iVar1 = GameWorld::GetChannelType(this);
  if (iVar1 == 0xe) {
    online_preliminary::COnlinePreliminary::SetMatchAble(true);
  }
  return;
}
```
