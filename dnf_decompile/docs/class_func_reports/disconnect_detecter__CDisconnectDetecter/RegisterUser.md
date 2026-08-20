# RegisterUser

`_ZN19disconnect_detecter19CDisconnectDetecter12RegisterUserEP5CUser`

`disconnect_detecter::CDisconnectDetecter::RegisterUser(CUser*)`

| 类 | 地址 |
|---|---|
| `disconnect_detecter::CDisconnectDetecter` | `0x08472272` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08472272  _ZN19disconnect_detecter19CDisconnectDetecter12RegisterUserEP5CUser
#           disconnect_detecter::CDisconnectDetecter::RegisterUser(CUser*)
# range [0x08472272, 0x08472369]
08472272 +0x00:  push   %ebp
08472273 +0x01:  mov    %esp,%ebp
08472275 +0x03:  push   %ebx
08472276 +0x04:  sub    $0x54,%esp
08472279 +0x07:  mov    0x8(%ebp),%eax
0847227c +0x0a:  mov    %eax,(%esp)
0847227f +0x0d:  call   08472684 <_GLOBAL__I__ZN19disconnect_detecter19CDisconnectDetecter10_IsTimeoutEi+0x77>  ; global constructors keyed to disconnect_detecter::CDisconnectDetecter::_IsTimeout(int)+0x77
08472284 +0x12:  mov    %eax,-0xc(%ebp)
08472287 +0x15:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0847228e +0x1c:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08472293 +0x21:  mov    %eax,-0x28(%ebp)
08472296 +0x24:  mov    0xc(%ebp),%eax
08472299 +0x27:  mov    %eax,(%esp)
0847229c +0x2a:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
084722a1 +0x2f:  movzwl %ax,%ebx
084722a4 +0x32:  mov    0xc(%ebp),%eax
084722a7 +0x35:  mov    %eax,(%esp)
084722aa +0x38:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084722af +0x3d:  mov    %ebx,0x8(%esp)
084722b3 +0x41:  mov    %eax,0x4(%esp)
084722b7 +0x45:  lea    -0x24(%ebp),%eax
084722ba +0x48:  mov    %eax,(%esp)
084722bd +0x4b:  call   0847266e <_GLOBAL__I__ZN19disconnect_detecter19CDisconnectDetecter10_IsTimeoutEi+0x61>  ; global constructors keyed to disconnect_detecter::CDisconnectDetecter::_IsTimeout(int)+0x61
084722c2 +0x50:  lea    -0x34(%ebp),%eax
084722c5 +0x53:  lea    -0x28(%ebp),%edx
084722c8 +0x56:  mov    %edx,0x8(%esp)
084722cc +0x5a:  lea    -0x24(%ebp),%edx
084722cf +0x5d:  mov    %edx,0x4(%esp)
084722d3 +0x61:  mov    %eax,(%esp)
084722d6 +0x64:  call   08472697 <_GLOBAL__I__ZN19disconnect_detecter19CDisconnectDetecter10_IsTimeoutEi+0x8a>  ; global constructors keyed to disconnect_detecter::CDisconnectDetecter::_IsTimeout(int)+0x8a
084722db +0x69:  sub    $0x4,%esp
084722de +0x6c:  lea    -0x34(%ebp),%eax
084722e1 +0x6f:  mov    %eax,0x4(%esp)
084722e5 +0x73:  lea    -0x40(%ebp),%eax
084722e8 +0x76:  mov    %eax,(%esp)
084722eb +0x79:  call   084726da <_GLOBAL__I__ZN19disconnect_detecter19CDisconnectDetecter10_IsTimeoutEi+0xcd>  ; global constructors keyed to disconnect_detecter::CDisconnectDetecter::_IsTimeout(int)+0xcd
084722f0 +0x7e:  mov    0x8(%ebp),%edx
084722f3 +0x81:  lea    -0x48(%ebp),%eax
084722f6 +0x84:  lea    -0x40(%ebp),%ecx
084722f9 +0x87:  mov    %ecx,0x8(%esp)
084722fd +0x8b:  mov    %edx,0x4(%esp)
08472301 +0x8f:  mov    %eax,(%esp)
08472304 +0x92:  call   08472716 <_GLOBAL__I__ZN19disconnect_detecter19CDisconnectDetecter10_IsTimeoutEi+0x109>  ; global constructors keyed to disconnect_detecter::CDisconnectDetecter::_IsTimeout(int)+0x109
08472309 +0x97:  sub    $0x4,%esp
0847230c +0x9a:  movzbl -0x44(%ebp),%eax
08472310 +0x9e:  xor    $0x1,%eax
08472313 +0xa1:  test   %al,%al
08472315 +0xa3:  je     08472354 <+0xe2>
08472317 +0xa5:  movl   $0x0,0xc(%esp)
0847231f +0xad:  movl   $0x25,0x8(%esp)
08472327 +0xb5:  movl   $&_ZZN19disconnect_detecter19CDisconnectDetecter12RegisterUserEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
0847232f +0xbd:  lea    -0x1c(%ebp),%eax
08472332 +0xc0:  mov    %eax,(%esp)
08472335 +0xc3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0847233a +0xc8:  movl   $"RegisterUser() wrong",0x4(%esp)
08472342 +0xd0:  lea    -0x1c(%ebp),%eax
08472345 +0xd3:  mov    %eax,(%esp)
08472348 +0xd6:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0847234d +0xdb:  mov    $0x0,%eax
08472352 +0xe0:  jmp    08472364 <+0xf2>
08472354 +0xe2:  cmpl   $0x0,-0xc(%ebp)
08472358 +0xe6:  jne    0847235f <+0xed>
0847235a +0xe8:  call   086374e0 <_ZN21TimerDetectDisconnect15registNextTimerEv>  ; TimerDetectDisconnect::registNextTimer()
0847235f +0xed:  mov    $0x1,%eax
08472364 +0xf2:  mov    -0x4(%ebp),%ebx
08472367 +0xf5:  leave
08472368 +0xf6:  ret
08472369 +0xf7:  nop
```

## 反编译 C

```c
// disconnect_detecter::CDisconnectDetecter::RegisterUser @ 0x8472272

/* disconnect_detecter::CDisconnectDetecter::RegisterUser(CUser*) */

undefined4 __thiscall
disconnect_detecter::CDisconnectDetecter::RegisterUser(CDisconnectDetecter *this,CUser *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  pair local_4c [4];
  char local_48;
  pair<disconnect_detecter::DetectedObjectKey_const,int> local_44 [12];
  DetectedObjectKey local_38 [12];
  undefined4 local_2c;
  DetectedObjectKey local_28 [8];
  cMyTrace local_20 [16];
  int local_10;
  
  local_10 = std::
             map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
             ::size((map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
                     *)this);
  local_2c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  uVar1 = CUser::get_unique_id(param_1);
  iVar2 = CUser::GetUID(param_1);
  DetectedObjectKey::DetectedObjectKey(local_28,iVar2,uVar1 & 0xffff);
  std::make_pair<disconnect_detecter::DetectedObjectKey,long>(local_38,(long *)local_28);
  std::pair<disconnect_detecter::DetectedObjectKey_const,int>::
  pair<disconnect_detecter::DetectedObjectKey,long>(local_44,local_38);
  std::
  map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
  ::insert(local_4c);
  if (local_48 == '\x01') {
    if (local_10 == 0) {
      TimerDetectDisconnect::registNextTimer();
    }
    uVar3 = 1;
  }
  else {
    cMyTrace::cMyTrace(local_20,
                       "bool disconnect_detecter::CDisconnectDetecter::RegisterUser(CUser*)",0x25,0)
    ;
    cMyTrace::operator()(local_20,"RegisterUser() wrong");
    uVar3 = 0;
  }
  return uVar3;
}
```
