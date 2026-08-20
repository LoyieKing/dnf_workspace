# insertUserByAccID

`_ZN12CGameManager17insertUserByAccIDEP5CUser`

`CGameManager::insertUserByAccID(CUser*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x0829445e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0829445e  _ZN12CGameManager17insertUserByAccIDEP5CUser
#           CGameManager::insertUserByAccID(CUser*)
# range [0x0829445e, 0x0829451d]
0829445e +0x00:  push   %ebp
0829445f +0x01:  mov    %esp,%ebp
08294461 +0x03:  push   %ebx
08294462 +0x04:  sub    $0x34,%esp
08294465 +0x07:  mov    0xc(%ebp),%eax
08294468 +0x0a:  mov    %eax,(%esp)
0829446b +0x0d:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08294470 +0x12:  mov    %eax,-0x1c(%ebp)
08294473 +0x15:  mov    0x8(%ebp),%eax
08294476 +0x18:  lea    0x22c(%eax),%edx
0829447c +0x1e:  lea    -0x1c(%ebp),%eax
0829447f +0x21:  mov    %eax,0x4(%esp)
08294483 +0x25:  mov    %edx,(%esp)
08294486 +0x28:  call   082b0416 <_GLOBAL__I__ZN4CLog5this_E+0xc83d>  ; global constructors keyed to CLog::this_+0xc83d
0829448b +0x2d:  mov    0xc(%ebp),%edx
0829448e +0x30:  mov    %edx,(%eax)
08294490 +0x32:  mov    0xc(%ebp),%eax
08294493 +0x35:  mov    %eax,(%esp)
08294496 +0x38:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0829449b +0x3d:  mov    %eax,-0x20(%ebp)
0829449e +0x40:  mov    -0x20(%ebp),%eax
082944a1 +0x43:  test   %eax,%eax
082944a3 +0x45:  jne    082944ee <+0x90>
082944a5 +0x47:  mov    0xc(%ebp),%eax
082944a8 +0x4a:  mov    %eax,(%esp)
082944ab +0x4d:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
082944b0 +0x52:  mov    %eax,%ebx
082944b2 +0x54:  movl   $0x5,0xc(%esp)
082944ba +0x5c:  movl   $0x91d,0x8(%esp)
082944c2 +0x64:  movl   $&_ZZN12CGameManager17insertUserByAccIDEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
082944ca +0x6c:  lea    -0x18(%ebp),%eax
082944cd +0x6f:  mov    %eax,(%esp)
082944d0 +0x72:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082944d5 +0x77:  mov    %ebx,0x8(%esp)
082944d9 +0x7b:  movl   $"[QQID_ERROR]CGameManager::insertUserByAccID  qq_id:%s",0x4(%esp)
082944e1 +0x83:  lea    -0x18(%ebp),%eax
082944e4 +0x86:  mov    %eax,(%esp)
082944e7 +0x89:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082944ec +0x8e:  jmp    08294518 <+0xba>
082944ee +0x90:  mov    0x8(%ebp),%eax
082944f1 +0x93:  lea    0x244(%eax),%edx
082944f7 +0x99:  lea    -0x20(%ebp),%eax
082944fa +0x9c:  mov    %eax,0x4(%esp)
082944fe +0xa0:  mov    %edx,(%esp)
08294501 +0xa3:  call   082b0416 <_GLOBAL__I__ZN4CLog5this_E+0xc83d>  ; global constructors keyed to CLog::this_+0xc83d
08294506 +0xa8:  mov    0xc(%ebp),%edx
08294509 +0xab:  mov    %edx,(%eax)
0829450b +0xad:  mov    &_ZN10GlobalData17s_pLogGameChannelE,%eax
08294510 +0xb2:  mov    %eax,(%esp)
08294513 +0xb5:  call   085506de <_ZN8WongWork15CLogGameChannel9IncInUserEv>  ; WongWork::CLogGameChannel::IncInUser()
08294518 +0xba:  add    $0x34,%esp
0829451b +0xbd:  pop    %ebx
0829451c +0xbe:  pop    %ebp
0829451d +0xbf:  ret
```

## 反编译 C

```c
// CGameManager::insertUserByAccID @ 0x829445e

/* CGameManager::insertUserByAccID(CUser*) */

void __thiscall CGameManager::insertUserByAccID(CGameManager *this,CUser *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint local_24;
  uint local_20;
  cMyTrace local_1c [20];
  
  local_20 = CUser::get_acc_id(param_1);
  puVar1 = (undefined4 *)
           std::
           map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
           ::operator[]((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                         *)(this + 0x22c),&local_20);
  *puVar1 = param_1;
  local_24 = CUser::get_acc_id(param_1);
  if (local_24 == 0) {
    uVar2 = CUser::get_acc_name(param_1);
    cMyTrace::cMyTrace(local_1c,"void CGameManager::insertUserByAccID(CUser*)",0x91d,5);
    cMyTrace::operator()(local_1c,"[QQID_ERROR]CGameManager::insertUserByAccID  qq_id:%s",uVar2);
  }
  else {
    puVar1 = (undefined4 *)
             std::
             map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
             ::operator[]((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                           *)(this + 0x244),&local_24);
    *puVar1 = param_1;
    WongWork::CLogGameChannel::IncInUser(GlobalData::s_pLogGameChannel);
  }
  return;
}
```
