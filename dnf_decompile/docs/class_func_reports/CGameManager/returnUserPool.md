# returnUserPool

`_ZN12CGameManager14returnUserPoolEP5CUser`

`CGameManager::returnUserPool(CUser*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08294b2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08294b2c  _ZN12CGameManager14returnUserPoolEP5CUser
#           CGameManager::returnUserPool(CUser*)
# range [0x08294b2c, 0x08294d3b]
08294b2c +0x000:  push   %ebp
08294b2d +0x001:  mov    %esp,%ebp
08294b2f +0x003:  push   %esi
08294b30 +0x004:  push   %ebx
08294b31 +0x005:  sub    $0x60,%esp
08294b34 +0x008:  cmpl   $0x0,0xc(%ebp)
08294b38 +0x00c:  je     08294d30 <+0x204>
08294b3e +0x012:  mov    0xc(%ebp),%eax
08294b41 +0x015:  mov    %eax,(%esp)
08294b44 +0x018:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08294b49 +0x01d:  mov    %eax,-0x30(%ebp)
08294b4c +0x020:  mov    0x8(%ebp),%eax
08294b4f +0x023:  lea    0x22c(%eax),%ecx
08294b55 +0x029:  lea    -0x34(%ebp),%eax
08294b58 +0x02c:  lea    -0x30(%ebp),%edx
08294b5b +0x02f:  mov    %edx,0x8(%esp)
08294b5f +0x033:  mov    %ecx,0x4(%esp)
08294b63 +0x037:  mov    %eax,(%esp)
08294b66 +0x03a:  call   082b076c <_GLOBAL__I__ZN4CLog5this_E+0xcb93>  ; global constructors keyed to CLog::this_+0xcb93
08294b6b +0x03f:  sub    $0x4,%esp
08294b6e +0x042:  mov    0x8(%ebp),%eax
08294b71 +0x045:  lea    0x22c(%eax),%edx
08294b77 +0x04b:  lea    -0x2c(%ebp),%eax
08294b7a +0x04e:  mov    %edx,0x4(%esp)
08294b7e +0x052:  mov    %eax,(%esp)
08294b81 +0x055:  call   080d3ada <_GLOBAL__I__ZN10BingoEventC2Ev+0x8927>  ; global constructors keyed to BingoEvent::BingoEvent()+0x8927
08294b86 +0x05a:  sub    $0x4,%esp
08294b89 +0x05d:  lea    -0x2c(%ebp),%eax
08294b8c +0x060:  mov    %eax,0x4(%esp)
08294b90 +0x064:  lea    -0x34(%ebp),%eax
08294b93 +0x067:  mov    %eax,(%esp)
08294b96 +0x06a:  call   082b07fc <_GLOBAL__I__ZN4CLog5this_E+0xcc23>  ; global constructors keyed to CLog::this_+0xcc23
08294b9b +0x06f:  test   %al,%al
08294b9d +0x071:  je     08294bc4 <+0x98>
08294b9f +0x073:  mov    0x8(%ebp),%eax
08294ba2 +0x076:  lea    0x22c(%eax),%edx
08294ba8 +0x07c:  mov    -0x34(%ebp),%eax
08294bab +0x07f:  mov    %eax,0x4(%esp)
08294baf +0x083:  mov    %edx,(%esp)
08294bb2 +0x086:  call   082b0810 <_GLOBAL__I__ZN4CLog5this_E+0xcc37>  ; global constructors keyed to CLog::this_+0xcc37
08294bb7 +0x08b:  mov    &_ZN10GlobalData17s_pLogGameChannelE,%eax
08294bbc +0x090:  mov    %eax,(%esp)
08294bbf +0x093:  call   08550700 <_ZN8WongWork15CLogGameChannel10IncOutUserEv>  ; WongWork::CLogGameChannel::IncOutUser()
08294bc4 +0x098:  mov    0xc(%ebp),%eax
08294bc7 +0x09b:  mov    %eax,(%esp)
08294bca +0x09e:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08294bcf +0x0a3:  mov    %eax,-0x38(%ebp)
08294bd2 +0x0a6:  mov    0x8(%ebp),%eax
08294bd5 +0x0a9:  lea    0x244(%eax),%ecx
08294bdb +0x0af:  lea    -0x3c(%ebp),%eax
08294bde +0x0b2:  lea    -0x38(%ebp),%edx
08294be1 +0x0b5:  mov    %edx,0x8(%esp)
08294be5 +0x0b9:  mov    %ecx,0x4(%esp)
08294be9 +0x0bd:  mov    %eax,(%esp)
08294bec +0x0c0:  call   082b076c <_GLOBAL__I__ZN4CLog5this_E+0xcb93>  ; global constructors keyed to CLog::this_+0xcb93
08294bf1 +0x0c5:  sub    $0x4,%esp
08294bf4 +0x0c8:  mov    0x8(%ebp),%eax
08294bf7 +0x0cb:  lea    0x244(%eax),%edx
08294bfd +0x0d1:  lea    -0x28(%ebp),%eax
08294c00 +0x0d4:  mov    %edx,0x4(%esp)
08294c04 +0x0d8:  mov    %eax,(%esp)
08294c07 +0x0db:  call   080d3ada <_GLOBAL__I__ZN10BingoEventC2Ev+0x8927>  ; global constructors keyed to BingoEvent::BingoEvent()+0x8927
08294c0c +0x0e0:  sub    $0x4,%esp
08294c0f +0x0e3:  lea    -0x28(%ebp),%eax
08294c12 +0x0e6:  mov    %eax,0x4(%esp)
08294c16 +0x0ea:  lea    -0x3c(%ebp),%eax
08294c19 +0x0ed:  mov    %eax,(%esp)
08294c1c +0x0f0:  call   082b07fc <_GLOBAL__I__ZN4CLog5this_E+0xcc23>  ; global constructors keyed to CLog::this_+0xcc23
08294c21 +0x0f5:  test   %al,%al
08294c23 +0x0f7:  je     08294c3d <+0x111>
08294c25 +0x0f9:  mov    0x8(%ebp),%eax
08294c28 +0x0fc:  lea    0x244(%eax),%edx
08294c2e +0x102:  mov    -0x3c(%ebp),%eax
08294c31 +0x105:  mov    %eax,0x4(%esp)
08294c35 +0x109:  mov    %edx,(%esp)
08294c38 +0x10c:  call   082b0810 <_GLOBAL__I__ZN4CLog5this_E+0xcc37>  ; global constructors keyed to CLog::this_+0xcc37
08294c3d +0x111:  mov    0xc(%ebp),%eax
08294c40 +0x114:  mov    %eax,(%esp)
08294c43 +0x117:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08294c48 +0x11c:  mov    %eax,-0x14(%ebp)
08294c4b +0x11f:  mov    0xc(%ebp),%eax
08294c4e +0x122:  mov    %eax,(%esp)
08294c51 +0x125:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08294c56 +0x12a:  mov    %eax,-0x10(%ebp)
08294c59 +0x12d:  mov    0xc(%ebp),%eax
08294c5c +0x130:  mov    %eax,(%esp)
08294c5f +0x133:  call   08658910 <_ZN5CUser7log_outEv>  ; CUser::log_out()
08294c64 +0x138:  mov    0x8(%ebp),%eax
08294c67 +0x13b:  mov    %eax,0x4(%esp)
08294c6b +0x13f:  lea    -0x40(%ebp),%eax
08294c6e +0x142:  mov    %eax,(%esp)
08294c71 +0x145:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
08294c76 +0x14a:  mov    0x8(%ebp),%eax
08294c79 +0x14d:  lea    0x4c(%eax),%edx
08294c7c +0x150:  mov    0xc(%ebp),%eax
08294c7f +0x153:  mov    %eax,0x4(%esp)
08294c83 +0x157:  mov    %edx,(%esp)
08294c86 +0x15a:  call   082b082a <_GLOBAL__I__ZN4CLog5this_E+0xcc51>  ; global constructors keyed to CLog::this_+0xcc51
08294c8b +0x15f:  jmp    08294ca8 <+0x17c>
08294c8d +0x161:  mov    %edx,%ebx
08294c8f +0x163:  mov    %eax,%esi
08294c91 +0x165:  lea    -0x40(%ebp),%eax
08294c94 +0x168:  mov    %eax,(%esp)
08294c97 +0x16b:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08294c9c +0x170:  mov    %esi,%eax
08294c9e +0x172:  mov    %ebx,%edx
08294ca0 +0x174:  mov    %eax,(%esp)
08294ca3 +0x177:  call   08ae3750 <_Unwind_Resume>
08294ca8 +0x17c:  lea    -0x40(%ebp),%eax
08294cab +0x17f:  mov    %eax,(%esp)
08294cae +0x182:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08294cb3 +0x187:  mov    0x8(%ebp),%eax
08294cb6 +0x18a:  add    $0x4c,%eax
08294cb9 +0x18d:  mov    %eax,(%esp)
08294cbc +0x190:  call   082b040a <_GLOBAL__I__ZN4CLog5this_E+0xc831>  ; global constructors keyed to CLog::this_+0xc831
08294cc1 +0x195:  mov    %eax,-0xc(%ebp)
08294cc4 +0x198:  cmpl   $0x0,-0xc(%ebp)
08294cc8 +0x19c:  je     08294d31 <+0x205>
08294cca +0x19e:  movl   $0x0,0x4(%esp)
08294cd2 +0x1a6:  mov    -0x10(%ebp),%eax
08294cd5 +0x1a9:  mov    %eax,(%esp)
08294cd8 +0x1ac:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08294cdd +0x1b1:  mov    %eax,%ebx
08294cdf +0x1b3:  mov    -0xc(%ebp),%esi
08294ce2 +0x1b6:  movl   $0x0,0xc(%esp)
08294cea +0x1be:  movl   $0xa0e,0x8(%esp)
08294cf2 +0x1c6:  movl   $&_ZZN12CGameManager14returnUserPoolEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
08294cfa +0x1ce:  lea    -0x24(%ebp),%eax
08294cfd +0x1d1:  mov    %eax,(%esp)
08294d00 +0x1d4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08294d05 +0x1d9:  mov    -0x14(%ebp),%eax
08294d08 +0x1dc:  mov    %eax,0x14(%esp)
08294d0c +0x1e0:  mov    %ebx,0x10(%esp)
08294d10 +0x1e4:  mov    0xc(%ebp),%eax
08294d13 +0x1e7:  mov    %eax,0xc(%esp)
08294d17 +0x1eb:  mov    %esi,0x8(%esp)
08294d1b +0x1ef:  movl   $"STATIC MEMORY_POOL returnUserPool error(%d), user(%x), last user m_acc_id(%s), idx(%d)",0x4(%esp)
08294d23 +0x1f7:  lea    -0x24(%ebp),%eax
08294d26 +0x1fa:  mov    %eax,(%esp)
08294d29 +0x1fd:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08294d2e +0x202:  jmp    08294d31 <+0x205>
08294d30 +0x204:  nop
08294d31 +0x205:  lea    -0x8(%ebp),%esp
08294d34 +0x208:  add    $0x0,%esp
08294d37 +0x20b:  pop    %ebx
08294d38 +0x20c:  pop    %esi
08294d39 +0x20d:  pop    %ebp
08294d3a +0x20e:  ret
08294d3b +0x20f:  nop
```

## 反编译 C

```c
// CGameManager::returnUserPool @ 0x8294b2c

/* CGameManager::returnUserPool(CUser*) */

void __thiscall CGameManager::returnUserPool(CGameManager *this,CUser *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  Guard<Mutex> local_44 [4];
  uint local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_30 [4];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_2c [4];
  cMyTrace local_28 [16];
  undefined4 local_18;
  uint local_14;
  int local_10;
  
  if (param_1 != (CUser *)0x0) {
    local_34 = CUser::get_acc_id(param_1);
    puVar4 = &local_34;
    std::
    map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::find(&local_38);
    std::
    map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::end(local_30);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_38,
                       (_Rb_tree_iterator *)local_30);
    if (cVar2 != '\0') {
      std::
      map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
      ::erase((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
               *)(this + 0x22c),local_38,puVar4);
      WongWork::CLogGameChannel::IncOutUser(GlobalData::s_pLogGameChannel);
    }
    local_3c = CUser::get_acc_id(param_1);
    puVar4 = &local_3c;
    std::
    map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::find(&local_40);
    std::
    map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::end(local_2c);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_40,
                       (_Rb_tree_iterator *)local_2c);
    if (cVar2 != '\0') {
      std::
      map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
      ::erase((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
               *)(this + 0x244),local_40,puVar4);
    }
    local_18 = CUser::GetUID(param_1);
    local_14 = CUser::get_acc_id(param_1);
    CUser::log_out(param_1);
    Guard<Mutex>::Guard(local_44,(Mutex *)this);
                    /* try { // try from 08294c86 to 08294c8a has its CatchHandler @ 08294c8d */
    StaticPool<CUser,600>::Free((StaticPool<CUser,600> *)(this + 0x4c),param_1);
    Guard<Mutex>::~Guard(local_44);
    local_10 = StaticPool<CUser,600>::GetLastErrorCode((StaticPool<CUser,600> *)(this + 0x4c));
    if (local_10 != 0) {
      uVar3 = NumberToString(local_14,0);
      iVar1 = local_10;
      cMyTrace::cMyTrace(local_28,"void CGameManager::returnUserPool(CUser*)",0xa0e,0);
      cMyTrace::operator()
                (local_28,
                 "STATIC MEMORY_POOL returnUserPool error(%d), user(%x), last user m_acc_id(%s), idx(%d)"
                 ,iVar1,param_1,uVar3,local_18);
    }
  }
  return;
}
```
