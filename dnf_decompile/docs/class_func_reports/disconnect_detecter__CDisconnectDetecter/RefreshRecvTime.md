# RefreshRecvTime

`_ZN19disconnect_detecter19CDisconnectDetecter15RefreshRecvTimeEP5CUser`

`disconnect_detecter::CDisconnectDetecter::RefreshRecvTime(CUser*)`

| 类 | 地址 |
|---|---|
| `disconnect_detecter::CDisconnectDetecter` | `0x08472408` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08472408  _ZN19disconnect_detecter19CDisconnectDetecter15RefreshRecvTimeEP5CUser
#           disconnect_detecter::CDisconnectDetecter::RefreshRecvTime(CUser*)
# range [0x08472408, 0x084724af]
08472408 +0x00:  push   %ebp
08472409 +0x01:  mov    %esp,%ebp
0847240b +0x03:  push   %ebx
0847240c +0x04:  sub    $0x24,%esp
0847240f +0x07:  mov    0xc(%ebp),%eax
08472412 +0x0a:  mov    %eax,(%esp)
08472415 +0x0d:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0847241a +0x12:  movzwl %ax,%ebx
0847241d +0x15:  mov    0xc(%ebp),%eax
08472420 +0x18:  mov    %eax,(%esp)
08472423 +0x1b:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08472428 +0x20:  mov    %ebx,0x8(%esp)
0847242c +0x24:  mov    %eax,0x4(%esp)
08472430 +0x28:  lea    -0x14(%ebp),%eax
08472433 +0x2b:  mov    %eax,(%esp)
08472436 +0x2e:  call   0847266e <_GLOBAL__I__ZN19disconnect_detecter19CDisconnectDetecter10_IsTimeoutEi+0x61>  ; global constructors keyed to disconnect_detecter::CDisconnectDetecter::_IsTimeout(int)+0x61
0847243b +0x33:  mov    0x8(%ebp),%edx
0847243e +0x36:  lea    -0x18(%ebp),%eax
08472441 +0x39:  lea    -0x14(%ebp),%ecx
08472444 +0x3c:  mov    %ecx,0x8(%esp)
08472448 +0x40:  mov    %edx,0x4(%esp)
0847244c +0x44:  mov    %eax,(%esp)
0847244f +0x47:  call   08472742 <_GLOBAL__I__ZN19disconnect_detecter19CDisconnectDetecter10_IsTimeoutEi+0x135>  ; global constructors keyed to disconnect_detecter::CDisconnectDetecter::_IsTimeout(int)+0x135
08472454 +0x4c:  sub    $0x4,%esp
08472457 +0x4f:  mov    0x8(%ebp),%edx
0847245a +0x52:  lea    -0xc(%ebp),%eax
0847245d +0x55:  mov    %edx,0x4(%esp)
08472461 +0x59:  mov    %eax,(%esp)
08472464 +0x5c:  call   0847276e <_GLOBAL__I__ZN19disconnect_detecter19CDisconnectDetecter10_IsTimeoutEi+0x161>  ; global constructors keyed to disconnect_detecter::CDisconnectDetecter::_IsTimeout(int)+0x161
08472469 +0x61:  sub    $0x4,%esp
0847246c +0x64:  lea    -0xc(%ebp),%eax
0847246f +0x67:  mov    %eax,0x4(%esp)
08472473 +0x6b:  lea    -0x18(%ebp),%eax
08472476 +0x6e:  mov    %eax,(%esp)
08472479 +0x71:  call   08472794 <_GLOBAL__I__ZN19disconnect_detecter19CDisconnectDetecter10_IsTimeoutEi+0x187>  ; global constructors keyed to disconnect_detecter::CDisconnectDetecter::_IsTimeout(int)+0x187
0847247e +0x76:  test   %al,%al
08472480 +0x78:  je     084724a5 <+0x9d>
08472482 +0x7a:  lea    -0x18(%ebp),%eax
08472485 +0x7d:  mov    %eax,(%esp)
08472488 +0x80:  call   084727c2 <_GLOBAL__I__ZN19disconnect_detecter19CDisconnectDetecter10_IsTimeoutEi+0x1b5>  ; global constructors keyed to disconnect_detecter::CDisconnectDetecter::_IsTimeout(int)+0x1b5
0847248d +0x85:  mov    %eax,%ebx
0847248f +0x87:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08472496 +0x8e:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0847249b +0x93:  mov    %eax,0x8(%ebx)
0847249e +0x96:  mov    $0x1,%eax
084724a3 +0x9b:  jmp    084724aa <+0xa2>
084724a5 +0x9d:  mov    $0x0,%eax
084724aa +0xa2:  mov    -0x4(%ebp),%ebx
084724ad +0xa5:  leave
084724ae +0xa6:  ret
084724af +0xa7:  nop
```

## 反编译 C

```c
// disconnect_detecter::CDisconnectDetecter::RefreshRecvTime @ 0x8472408

/* disconnect_detecter::CDisconnectDetecter::RefreshRecvTime(CUser*) */

bool __thiscall
disconnect_detecter::CDisconnectDetecter::RefreshRecvTime(CDisconnectDetecter *this,CUser *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  DetectedObjectKey local_1c [4];
  DetectedObjectKey local_18 [8];
  map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
  local_10 [8];
  
  uVar2 = CUser::get_unique_id(param_1);
  iVar3 = CUser::GetUID(param_1);
  DetectedObjectKey::DetectedObjectKey(local_18,iVar3,uVar2 & 0xffff);
  std::
  map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
  ::find(local_1c);
  std::
  map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>::
          operator!=((_Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>
                      *)local_1c,(_Rb_tree_iterator *)local_10);
  if (cVar1 != '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>::
            operator->((_Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>
                        *)local_1c);
    uVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    *(undefined4 *)(iVar3 + 8) = uVar4;
  }
  return cVar1 != '\0';
}
```
