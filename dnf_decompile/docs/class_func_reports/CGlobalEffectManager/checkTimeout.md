# checkTimeout

`_ZN20CGlobalEffectManager12checkTimeoutEjj`

`CGlobalEffectManager::checkTimeout(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CGlobalEffectManager` | `0x084b7a94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b7a94  _ZN20CGlobalEffectManager12checkTimeoutEjj
#           CGlobalEffectManager::checkTimeout(unsigned int, unsigned int)
# range [0x084b7a94, 0x084b7c4f]
084b7a94 +0x000:  push   %ebp
084b7a95 +0x001:  mov    %esp,%ebp
084b7a97 +0x003:  push   %esi
084b7a98 +0x004:  push   %ebx
084b7a99 +0x005:  sub    $0x40,%esp
084b7a9c +0x008:  lea    -0x20(%ebp),%eax
084b7a9f +0x00b:  mov    %eax,(%esp)
084b7aa2 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084b7aa7 +0x013:  movl   $0xb5,0x8(%esp)
084b7aaf +0x01b:  movl   $0x0,0x4(%esp)
084b7ab7 +0x023:  lea    -0x20(%ebp),%eax
084b7aba +0x026:  mov    %eax,(%esp)
084b7abd +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084b7ac2 +0x02e:  movl   $0x0,0x4(%esp)
084b7aca +0x036:  lea    -0x20(%ebp),%eax
084b7acd +0x039:  mov    %eax,(%esp)
084b7ad0 +0x03c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084b7ad5 +0x041:  lea    -0x20(%ebp),%eax
084b7ad8 +0x044:  mov    %eax,(%esp)
084b7adb +0x047:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
084b7ae0 +0x04c:  mov    %eax,-0x24(%ebp)
084b7ae3 +0x04f:  movl   $0x0,-0x10(%ebp)
084b7aea +0x056:  movb   $0x0,-0x9(%ebp)
084b7aee +0x05a:  movl   $0x0,0x4(%esp)
084b7af6 +0x062:  lea    -0x20(%ebp),%eax
084b7af9 +0x065:  mov    %eax,(%esp)
084b7afc +0x068:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084b7b01 +0x06d:  mov    0x8(%ebp),%edx
084b7b04 +0x070:  lea    -0x28(%ebp),%eax
084b7b07 +0x073:  mov    %edx,0x4(%esp)
084b7b0b +0x077:  mov    %eax,(%esp)
084b7b0e +0x07a:  call   084b8090 <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0xd3>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0xd3
084b7b13 +0x07f:  sub    $0x4,%esp
084b7b16 +0x082:  jmp    084b7bae <+0x11a>
084b7b1b +0x087:  lea    -0x28(%ebp),%eax
084b7b1e +0x08a:  mov    %eax,(%esp)
084b7b21 +0x08d:  call   084b8106 <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x149>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x149
084b7b26 +0x092:  mov    %eax,(%esp)
084b7b29 +0x095:  call   084b7fda <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x1d>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x1d
084b7b2e +0x09a:  cmp    0xc(%ebp),%eax
084b7b31 +0x09d:  jne    084b7b58 <+0xc4>
084b7b33 +0x09f:  mov    0x10(%ebp),%ebx
084b7b36 +0x0a2:  lea    -0x28(%ebp),%eax
084b7b39 +0x0a5:  mov    %eax,(%esp)
084b7b3c +0x0a8:  call   084b8106 <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x149>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x149
084b7b41 +0x0ad:  mov    %ebx,0x4(%esp)
084b7b45 +0x0b1:  mov    %eax,(%esp)
084b7b48 +0x0b4:  call   084b7ff8 <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x3b>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x3b
084b7b4d +0x0b9:  test   %al,%al
084b7b4f +0x0bb:  je     084b7b58 <+0xc4>
084b7b51 +0x0bd:  mov    $0x1,%eax
084b7b56 +0x0c2:  jmp    084b7b5d <+0xc9>
084b7b58 +0x0c4:  mov    $0x0,%eax
084b7b5d +0x0c9:  test   %al,%al
084b7b5f +0x0cb:  je     084b7ba3 <+0x10f>
084b7b61 +0x0cd:  lea    -0x28(%ebp),%eax
084b7b64 +0x0d0:  mov    %eax,(%esp)
084b7b67 +0x0d3:  call   084b8106 <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x149>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x149
084b7b6c +0x0d8:  lea    -0x20(%ebp),%edx
084b7b6f +0x0db:  mov    %edx,0x4(%esp)
084b7b73 +0x0df:  mov    %eax,(%esp)
084b7b76 +0x0e2:  call   084b7880 <_ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard>  ; CGlobalEffect::makeNotifyInfo(PacketGuard&) const
084b7b7b +0x0e7:  addl   $0x1,-0x10(%ebp)
084b7b7f +0x0eb:  mov    0x8(%ebp),%edx
084b7b82 +0x0ee:  lea    -0x2c(%ebp),%eax
084b7b85 +0x0f1:  mov    -0x28(%ebp),%ecx
084b7b88 +0x0f4:  mov    %ecx,0x8(%esp)
084b7b8c +0x0f8:  mov    %edx,0x4(%esp)
084b7b90 +0x0fc:  mov    %eax,(%esp)
084b7b93 +0x0ff:  call   084b8110 <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x153>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x153
084b7b98 +0x104:  sub    $0x4,%esp
084b7b9b +0x107:  mov    -0x2c(%ebp),%eax
084b7b9e +0x10a:  mov    %eax,-0x28(%ebp)
084b7ba1 +0x10d:  jmp    084b7bae <+0x11a>
084b7ba3 +0x10f:  lea    -0x28(%ebp),%eax
084b7ba6 +0x112:  mov    %eax,(%esp)
084b7ba9 +0x115:  call   084b81f6 <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x239>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x239
084b7bae +0x11a:  mov    0x8(%ebp),%edx
084b7bb1 +0x11d:  lea    -0x14(%ebp),%eax
084b7bb4 +0x120:  mov    %edx,0x4(%esp)
084b7bb8 +0x124:  mov    %eax,(%esp)
084b7bbb +0x127:  call   084b80b4 <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0xf7>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0xf7
084b7bc0 +0x12c:  sub    $0x4,%esp
084b7bc3 +0x12f:  lea    -0x14(%ebp),%eax
084b7bc6 +0x132:  mov    %eax,0x4(%esp)
084b7bca +0x136:  lea    -0x28(%ebp),%eax
084b7bcd +0x139:  mov    %eax,(%esp)
084b7bd0 +0x13c:  call   084b80da <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x11d>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x11d
084b7bd5 +0x141:  test   %al,%al
084b7bd7 +0x143:  jne    084b7b1b <+0x87>
084b7bdd +0x149:  mov    -0x10(%ebp),%eax
084b7be0 +0x14c:  mov    %eax,0x8(%esp)
084b7be4 +0x150:  lea    -0x24(%ebp),%eax
084b7be7 +0x153:  mov    %eax,0x4(%esp)
084b7beb +0x157:  lea    -0x20(%ebp),%eax
084b7bee +0x15a:  mov    %eax,(%esp)
084b7bf1 +0x15d:  call   084b804a <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x8d>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x8d
084b7bf6 +0x162:  movl   $0x1,0x4(%esp)
084b7bfe +0x16a:  lea    -0x20(%ebp),%eax
084b7c01 +0x16d:  mov    %eax,(%esp)
084b7c04 +0x170:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084b7c09 +0x175:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084b7c0e +0x17a:  lea    -0x20(%ebp),%edx
084b7c11 +0x17d:  mov    %edx,0x4(%esp)
084b7c15 +0x181:  mov    %eax,(%esp)
084b7c18 +0x184:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
084b7c1d +0x189:  jmp    084b7c3a <+0x1a6>
084b7c1f +0x18b:  mov    %edx,%ebx
084b7c21 +0x18d:  mov    %eax,%esi
084b7c23 +0x18f:  lea    -0x20(%ebp),%eax
084b7c26 +0x192:  mov    %eax,(%esp)
084b7c29 +0x195:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084b7c2e +0x19a:  mov    %esi,%eax
084b7c30 +0x19c:  mov    %ebx,%edx
084b7c32 +0x19e:  mov    %eax,(%esp)
084b7c35 +0x1a1:  call   08ae3750 <_Unwind_Resume>
084b7c3a +0x1a6:  lea    -0x20(%ebp),%eax
084b7c3d +0x1a9:  mov    %eax,(%esp)
084b7c40 +0x1ac:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084b7c45 +0x1b1:  lea    -0x8(%ebp),%esp
084b7c48 +0x1b4:  add    $0x0,%esp
084b7c4b +0x1b7:  pop    %ebx
084b7c4c +0x1b8:  pop    %esi
084b7c4d +0x1b9:  pop    %ebp
084b7c4e +0x1ba:  ret
084b7c4f +0x1bb:  nop
```

## 反编译 C

```c
// CGlobalEffectManager::checkTimeout @ 0x84b7a94

/* CGlobalEffectManager::checkTimeout(unsigned int, unsigned int) */

void __thiscall
CGlobalEffectManager::checkTimeout(CGlobalEffectManager *this,uint param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  CGlobalEffect *pCVar3;
  uint uVar4;
  GameWorld *this_00;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  PacketGuard local_24 [12];
  __normal_iterator local_18 [4];
  int local_14;
  undefined1 local_d;
  
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 084b7abd to 084b7c1c has its CatchHandler @ 084b7c1f */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0xb5);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
  local_28 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_24);
  local_14 = 0;
  local_d = 0;
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,0);
  std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>::begin();
  do {
    std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>::end();
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_2c,local_18);
    if (!bVar2) {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,&local_28,local_14);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
      this_00 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(this_00,local_24);
      PacketGuard::~PacketGuard(local_24);
      return;
    }
    pCVar3 = (CGlobalEffect *)
             __gnu_cxx::
             __normal_iterator<CGlobalEffect*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
             ::operator->((__normal_iterator<CGlobalEffect*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
                           *)&local_2c);
    uVar4 = CGlobalEffect::getType(pCVar3);
    if (uVar4 == param_1) {
      pCVar3 = (CGlobalEffect *)
               __gnu_cxx::
               __normal_iterator<CGlobalEffect*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
               ::operator->((__normal_iterator<CGlobalEffect*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
                             *)&local_2c);
      cVar1 = CGlobalEffect::isTimeout(pCVar3,param_2);
      if (cVar1 == '\0') goto LAB_084b7b58;
      bVar2 = true;
    }
    else {
LAB_084b7b58:
      bVar2 = false;
    }
    if (bVar2) {
      pCVar3 = (CGlobalEffect *)
               __gnu_cxx::
               __normal_iterator<CGlobalEffect*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
               ::operator->((__normal_iterator<CGlobalEffect*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
                             *)&local_2c);
      CGlobalEffect::makeNotifyInfo(pCVar3,local_24);
      local_14 = local_14 + 1;
      std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>::erase(&local_30,this,local_2c);
      local_2c = local_30;
    }
    else {
      __gnu_cxx::
      __normal_iterator<CGlobalEffect*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>::
      operator++((__normal_iterator<CGlobalEffect*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
                  *)&local_2c);
    }
  } while( true );
}
```
