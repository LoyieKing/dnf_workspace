# EndEvent

`_ZN23COnlinePreliminaryEvent8EndEventEv`

`COnlinePreliminaryEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `COnlinePreliminaryEvent` | `0x081bb5e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bb5e2  _ZN23COnlinePreliminaryEvent8EndEventEv
#           COnlinePreliminaryEvent::EndEvent()
# range [0x081bb5e2, 0x081bb61f]
081bb5e2 +0x00:  push   %ebp
081bb5e3 +0x01:  mov    %esp,%ebp
081bb5e5 +0x03:  sub    $0x18,%esp
081bb5e8 +0x06:  mov    0x8(%ebp),%eax
081bb5eb +0x09:  movl   $0x0,0x4(%esp)
081bb5f3 +0x11:  mov    %eax,(%esp)
081bb5f6 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
081bb5fb +0x19:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081bb600 +0x1e:  mov    %eax,(%esp)
081bb603 +0x21:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
081bb608 +0x26:  cmp    $0xe,%eax
081bb60b +0x29:  sete   %al
081bb60e +0x2c:  test   %al,%al
081bb610 +0x2e:  je     081bb61e <+0x3c>
081bb612 +0x30:  movl   $0x0,(%esp)
081bb619 +0x37:  call   085608da <_ZN18online_preliminary18COnlinePreliminary12SetMatchAbleEb>  ; online_preliminary::COnlinePreliminary::SetMatchAble(bool)
081bb61e +0x3c:  leave
081bb61f +0x3d:  ret
```

## 反编译 C

```c
// COnlinePreliminaryEvent::EndEvent @ 0x81bb5e2

/* COnlinePreliminaryEvent::EndEvent() */

void __thiscall COnlinePreliminaryEvent::EndEvent(COnlinePreliminaryEvent *this)

{
  GameWorld *this_00;
  int iVar1;
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  this_00 = (GameWorld *)G_GameWorld();
  iVar1 = GameWorld::GetChannelType(this_00);
  if (iVar1 == 0xe) {
    online_preliminary::COnlinePreliminary::SetMatchAble(false);
  }
  return;
}
```
