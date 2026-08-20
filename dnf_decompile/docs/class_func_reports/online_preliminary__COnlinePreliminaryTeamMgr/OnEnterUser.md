# OnEnterUser

`_ZN18online_preliminary25COnlinePreliminaryTeamMgr11OnEnterUserEP5CUserPc`

`online_preliminary::COnlinePreliminaryTeamMgr::OnEnterUser(CUser*, char*)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryTeamMgr` | `0x085887c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085887c8  _ZN18online_preliminary25COnlinePreliminaryTeamMgr11OnEnterUserEP5CUserPc
#           online_preliminary::COnlinePreliminaryTeamMgr::OnEnterUser(CUser*, char*)
# range [0x085887c8, 0x08588ae7]
085887c8 +0x000:  push   %ebp
085887c9 +0x001:  mov    %esp,%ebp
085887cb +0x003:  push   %esi
085887cc +0x004:  push   %ebx
085887cd +0x005:  sub    $0x50,%esp
085887d0 +0x008:  mov    0x10(%ebp),%eax
085887d3 +0x00b:  mov    %eax,-0xc(%ebp)
085887d6 +0x00e:  mov    -0xc(%ebp),%edx
085887d9 +0x011:  mov    0x8(%ebp),%eax
085887dc +0x014:  lea    0x4(%eax),%ecx
085887df +0x017:  lea    -0x2c(%ebp),%eax
085887e2 +0x01a:  mov    %edx,0x8(%esp)
085887e6 +0x01e:  mov    %ecx,0x4(%esp)
085887ea +0x022:  mov    %eax,(%esp)
085887ed +0x025:  call   08589728 <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xa1b>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xa1b
085887f2 +0x02a:  sub    $0x4,%esp
085887f5 +0x02d:  mov    0x8(%ebp),%eax
085887f8 +0x030:  lea    0x4(%eax),%edx
085887fb +0x033:  lea    -0x28(%ebp),%eax
085887fe +0x036:  mov    %edx,0x4(%esp)
08588802 +0x03a:  mov    %eax,(%esp)
08588805 +0x03d:  call   08589754 <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xa47>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xa47
0858880a +0x042:  sub    $0x4,%esp
0858880d +0x045:  lea    -0x28(%ebp),%eax
08588810 +0x048:  mov    %eax,0x4(%esp)
08588814 +0x04c:  lea    -0x2c(%ebp),%eax
08588817 +0x04f:  mov    %eax,(%esp)
0858881a +0x052:  call   0858977a <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xa6d>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xa6d
0858881f +0x057:  test   %al,%al
08588821 +0x059:  je     0858885b <+0x93>
08588823 +0x05b:  lea    -0x2c(%ebp),%eax
08588826 +0x05e:  mov    %eax,(%esp)
08588829 +0x061:  call   0858978e <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xa81>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xa81
0858882e +0x066:  mov    0x4(%eax),%edx
08588831 +0x069:  mov    0xc(%ebp),%eax
08588834 +0x06c:  mov    %edx,0x4(%esp)
08588838 +0x070:  mov    %eax,(%esp)
0858883b +0x073:  call   08588dba <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xad>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xad
08588840 +0x078:  lea    -0x2c(%ebp),%eax
08588843 +0x07b:  mov    %eax,(%esp)
08588846 +0x07e:  call   0858978e <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xa81>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xa81
0858884b +0x083:  mov    0x4(%eax),%eax
0858884e +0x086:  mov    %eax,(%esp)
08588851 +0x089:  call   08588d96 <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x89>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x89
08588856 +0x08e:  jmp    085889e2 <+0x21a>
0858885b +0x093:  mov    0x8(%ebp),%eax
0858885e +0x096:  mov    (%eax),%eax
08588860 +0x098:  mov    %eax,(%esp)
08588863 +0x09b:  call   08588dd8 <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xcb>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xcb
08588868 +0x0a0:  mov    %eax,-0x3c(%ebp)
0858886b +0x0a3:  mov    -0x3c(%ebp),%eax
0858886e +0x0a6:  test   %eax,%eax
08588870 +0x0a8:  jne    0858887c <+0xb4>
08588872 +0x0aa:  mov    $0x0,%ebx
08588877 +0x0af:  jmp    08588adc <+0x314>
0858887c +0x0b4:  mov    -0x3c(%ebp),%eax
0858887f +0x0b7:  mov    %eax,(%esp)
08588882 +0x0ba:  call   0858838a <_ZN18online_preliminary22COnlinePreliminaryTeam5ResetEv>  ; online_preliminary::COnlinePreliminaryTeam::Reset()
08588887 +0x0bf:  mov    -0x3c(%ebp),%edx
0858888a +0x0c2:  mov    0xc(%ebp),%eax
0858888d +0x0c5:  mov    %edx,0x4(%esp)
08588891 +0x0c9:  mov    %eax,(%esp)
08588894 +0x0cc:  call   08588dba <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xad>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xad
08588899 +0x0d1:  mov    -0x3c(%ebp),%eax
0858889c +0x0d4:  movl   $0x1,0x4(%esp)
085888a4 +0x0dc:  mov    %eax,(%esp)
085888a7 +0x0df:  call   08588d88 <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x7b>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x7b
085888ac +0x0e4:  mov    -0x3c(%ebp),%eax
085888af +0x0e7:  mov    0x10(%ebp),%edx
085888b2 +0x0ea:  mov    %edx,0x4(%esp)
085888b6 +0x0ee:  mov    %eax,(%esp)
085888b9 +0x0f1:  call   085882b8 <_ZN18online_preliminary22COnlinePreliminaryTeam23loadDataPreliminaryTeamEPc>  ; online_preliminary::COnlinePreliminaryTeam::loadDataPreliminaryTeam(char*)
085888be +0x0f6:  mov    -0xc(%ebp),%edx
085888c1 +0x0f9:  lea    -0x14(%ebp),%eax
085888c4 +0x0fc:  lea    -0x3c(%ebp),%ecx
085888c7 +0x0ff:  mov    %ecx,0x8(%esp)
085888cb +0x103:  mov    %edx,0x4(%esp)
085888cf +0x107:  mov    %eax,(%esp)
085888d2 +0x10a:  call   0858979b <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xa8e>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xa8e
085888d7 +0x10f:  sub    $0x4,%esp
085888da +0x112:  lea    -0x14(%ebp),%eax
085888dd +0x115:  mov    %eax,0x4(%esp)
085888e1 +0x119:  lea    -0x1c(%ebp),%eax
085888e4 +0x11c:  mov    %eax,(%esp)
085888e7 +0x11f:  call   085897da <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xacd>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xacd
085888ec +0x124:  mov    0x8(%ebp),%eax
085888ef +0x127:  lea    0x4(%eax),%ecx
085888f2 +0x12a:  lea    -0x24(%ebp),%eax
085888f5 +0x12d:  lea    -0x1c(%ebp),%edx
085888f8 +0x130:  mov    %edx,0x8(%esp)
085888fc +0x134:  mov    %ecx,0x4(%esp)
08588900 +0x138:  mov    %eax,(%esp)
08588903 +0x13b:  call   0858980a <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xafd>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xafd
08588908 +0x140:  sub    $0x4,%esp
0858890b +0x143:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08588910 +0x148:  movl   $0x106,0x8(%esp)
08588918 +0x150:  movl   $"OnlinePreliminaryTeam.cpp",0x4(%esp)
08588920 +0x158:  mov    %eax,(%esp)
08588923 +0x15b:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08588928 +0x160:  movl   $0x1,0x8(%esp)
08588930 +0x168:  mov    %eax,0x4(%esp)
08588934 +0x16c:  lea    -0x44(%ebp),%eax
08588937 +0x16f:  mov    %eax,(%esp)
0858893a +0x172:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0858893f +0x177:  lea    -0x44(%ebp),%eax
08588942 +0x17a:  mov    %eax,(%esp)
08588945 +0x17d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0858894a +0x182:  movl   $0x1ec,0x4(%esp)
08588952 +0x18a:  mov    %eax,(%esp)
08588955 +0x18d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0858895a +0x192:  lea    -0x44(%ebp),%eax
0858895d +0x195:  mov    %eax,(%esp)
08588960 +0x198:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08588965 +0x19d:  movl   $0xffffffff,0x4(%esp)
0858896d +0x1a5:  mov    %eax,(%esp)
08588970 +0x1a8:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08588975 +0x1ad:  mov    -0xc(%ebp),%eax
08588978 +0x1b0:  mov    (%eax),%ebx
0858897a +0x1b2:  lea    -0x44(%ebp),%eax
0858897d +0x1b5:  mov    %eax,(%esp)
08588980 +0x1b8:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08588985 +0x1bd:  mov    %ebx,0x4(%esp)
08588989 +0x1c1:  mov    %eax,(%esp)
0858898c +0x1c4:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08588991 +0x1c9:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08588996 +0x1ce:  lea    -0x44(%ebp),%edx
08588999 +0x1d1:  mov    %edx,0x8(%esp)
0858899d +0x1d5:  movl   $0x2,0x4(%esp)
085889a5 +0x1dd:  mov    %eax,(%esp)
085889a8 +0x1e0:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
085889ad +0x1e5:  mov    -0xc(%ebp),%eax
085889b0 +0x1e8:  mov    (%eax),%eax
085889b2 +0x1ea:  mov    %eax,(%esp)
085889b5 +0x1ed:  call   0863977e <_ZN33Timer_UpdateOnlinePreliminaryTeam15RegistNextTimerEi>  ; Timer_UpdateOnlinePreliminaryTeam::RegistNextTimer(int)
085889ba +0x1f2:  jmp    085889d7 <+0x20f>
085889bc +0x1f4:  mov    %edx,%ebx
085889be +0x1f6:  mov    %eax,%esi
085889c0 +0x1f8:  lea    -0x44(%ebp),%eax
085889c3 +0x1fb:  mov    %eax,(%esp)
085889c6 +0x1fe:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
085889cb +0x203:  mov    %esi,%eax
085889cd +0x205:  mov    %ebx,%edx
085889cf +0x207:  mov    %eax,(%esp)
085889d2 +0x20a:  call   08ae3750 <_Unwind_Resume>
085889d7 +0x20f:  lea    -0x44(%ebp),%eax
085889da +0x212:  mov    %eax,(%esp)
085889dd +0x215:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
085889e2 +0x21a:  lea    -0x38(%ebp),%eax
085889e5 +0x21d:  mov    %eax,(%esp)
085889e8 +0x220:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085889ed +0x225:  lea    -0x38(%ebp),%eax
085889f0 +0x228:  mov    %eax,(%esp)
085889f3 +0x22b:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085889f8 +0x230:  movl   $0x118,0x8(%esp)
08588a00 +0x238:  movl   $0x0,0x4(%esp)
08588a08 +0x240:  lea    -0x38(%ebp),%eax
08588a0b +0x243:  mov    %eax,(%esp)
08588a0e +0x246:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08588a13 +0x24b:  mov    0xc(%ebp),%eax
08588a16 +0x24e:  mov    %eax,(%esp)
08588a19 +0x251:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08588a1e +0x256:  movzwl %ax,%eax
08588a21 +0x259:  mov    %eax,0x4(%esp)
08588a25 +0x25d:  lea    -0x38(%ebp),%eax
08588a28 +0x260:  mov    %eax,(%esp)
08588a2b +0x263:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08588a30 +0x268:  mov    -0xc(%ebp),%eax
08588a33 +0x26b:  mov    (%eax),%eax
08588a35 +0x26d:  mov    %eax,0x4(%esp)
08588a39 +0x271:  lea    -0x38(%ebp),%eax
08588a3c +0x274:  mov    %eax,(%esp)
08588a3f +0x277:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08588a44 +0x27c:  mov    -0xc(%ebp),%eax
08588a47 +0x27f:  add    $0x4,%eax
08588a4a +0x282:  mov    %eax,(%esp)
08588a4d +0x285:  call   0807e3b0 <_init+0xca8>
08588a52 +0x28a:  mov    %eax,0x4(%esp)
08588a56 +0x28e:  lea    -0x38(%ebp),%eax
08588a59 +0x291:  mov    %eax,(%esp)
08588a5c +0x294:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08588a61 +0x299:  mov    -0xc(%ebp),%eax
08588a64 +0x29c:  add    $0x4,%eax
08588a67 +0x29f:  mov    %eax,(%esp)
08588a6a +0x2a2:  call   0807e3b0 <_init+0xca8>
08588a6f +0x2a7:  mov    -0xc(%ebp),%edx
08588a72 +0x2aa:  add    $0x4,%edx
08588a75 +0x2ad:  mov    %eax,0x8(%esp)
08588a79 +0x2b1:  mov    %edx,0x4(%esp)
08588a7d +0x2b5:  lea    -0x38(%ebp),%eax
08588a80 +0x2b8:  mov    %eax,(%esp)
08588a83 +0x2bb:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
08588a88 +0x2c0:  movl   $0x1,0x4(%esp)
08588a90 +0x2c8:  lea    -0x38(%ebp),%eax
08588a93 +0x2cb:  mov    %eax,(%esp)
08588a96 +0x2ce:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08588a9b +0x2d3:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08588aa0 +0x2d8:  lea    -0x38(%ebp),%edx
08588aa3 +0x2db:  mov    %edx,0x4(%esp)
08588aa7 +0x2df:  mov    %eax,(%esp)
08588aaa +0x2e2:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
08588aaf +0x2e7:  mov    $0x1,%ebx
08588ab4 +0x2ec:  lea    -0x38(%ebp),%eax
08588ab7 +0x2ef:  mov    %eax,(%esp)
08588aba +0x2f2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08588abf +0x2f7:  jmp    08588adc <+0x314>
08588ac1 +0x2f9:  mov    %edx,%ebx
08588ac3 +0x2fb:  mov    %eax,%esi
08588ac5 +0x2fd:  lea    -0x38(%ebp),%eax
08588ac8 +0x300:  mov    %eax,(%esp)
08588acb +0x303:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08588ad0 +0x308:  mov    %esi,%eax
08588ad2 +0x30a:  mov    %ebx,%edx
08588ad4 +0x30c:  mov    %eax,(%esp)
08588ad7 +0x30f:  call   08ae3750 <_Unwind_Resume>
08588adc +0x314:  mov    %ebx,%eax
08588ade +0x316:  lea    -0x8(%ebp),%esp
08588ae1 +0x319:  add    $0x0,%esp
08588ae4 +0x31c:  pop    %ebx
08588ae5 +0x31d:  pop    %esi
08588ae6 +0x31e:  pop    %ebp
08588ae7 +0x31f:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryTeamMgr::OnEnterUser @ 0x85887c8

/* online_preliminary::COnlinePreliminaryTeamMgr::OnEnterUser(CUser*, char*) */

undefined4 __thiscall
online_preliminary::COnlinePreliminaryTeamMgr::OnEnterUser
          (COnlinePreliminaryTeamMgr *this,CUser *param_1,char *param_2)

{
  COnlinePreliminaryTeam *pCVar1;
  char cVar2;
  int iVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  uint uVar6;
  size_t sVar7;
  GameWorld *this_00;
  CStreamGuard local_48 [8];
  COnlinePreliminaryTeam *local_40;
  PacketGuard local_3c [12];
  _Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>> local_30 [4];
  map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
  local_2c [4];
  pair local_28 [8];
  pair<int_const,online_preliminary::COnlinePreliminaryTeam*> local_20 [8];
  int local_18 [2];
  COnlinePreliminaryTeam **local_10;
  
  local_10 = (COnlinePreliminaryTeam **)param_2;
  std::
  map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
  ::find((int *)local_30);
  std::
  map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
  ::end(local_2c);
  cVar2 = std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>::
          operator!=(local_30,(_Rb_tree_iterator *)local_2c);
  if (cVar2 == '\0') {
    local_40 = (COnlinePreliminaryTeam *)CTeamFactory::Acquire(*(CTeamFactory **)this);
    if (local_40 == (COnlinePreliminaryTeam *)0x0) {
      return 0;
    }
    COnlinePreliminaryTeam::Reset(local_40);
    CUserCharacInfo::SetCurCharacOnlinePreliminaryTeam((CUserCharacInfo *)param_1,local_40);
    COnlinePreliminaryTeam::SetCurrentUserCount(local_40,1);
    COnlinePreliminaryTeam::loadDataPreliminaryTeam(local_40,param_2);
    std::make_pair<int&,online_preliminary::COnlinePreliminaryTeam*&>(local_18,local_10);
    std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>::
    pair<int,online_preliminary::COnlinePreliminaryTeam*>(local_20,(pair *)local_18);
    std::
    map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
    ::insert(local_28);
    pSVar4 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"OnlinePreliminaryTeam.cpp",0x106);
    CStreamGuard::CStreamGuard(local_48,pSVar4,true);
    pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_48);
                    /* try { // try from 08588955 to 085889b9 has its CatchHandler @ 085889bc */
    CStreamGuard::operator<<(pCVar5,0x1ec);
    pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_48);
    CStreamGuard::operator<<(pCVar5,-1);
    pCVar1 = *local_10;
    pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_48);
    CStreamGuard::operator<<(pCVar5,(int)pCVar1);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_48);
    Timer_UpdateOnlinePreliminaryTeam::RegistNextTimer((int)*local_10);
    CStreamGuard::~CStreamGuard(local_48);
  }
  else {
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>
            ::operator->(local_30);
    CUserCharacInfo::SetCurCharacOnlinePreliminaryTeam
              ((CUserCharacInfo *)param_1,*(COnlinePreliminaryTeam **)(iVar3 + 4));
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>
            ::operator->(local_30);
    COnlinePreliminaryTeam::IncreaseCurrentUserCount(*(COnlinePreliminaryTeam **)(iVar3 + 4));
  }
  PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 085889f3 to 08588aae has its CatchHandler @ 08588ac1 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_3c);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,0x118);
  uVar6 = CUser::get_unique_id(param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_3c,uVar6 & 0xffff);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,(int)*local_10);
  sVar7 = strlen((char *)(local_10 + 1));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,sVar7);
  sVar7 = strlen((char *)(local_10 + 1));
  InterfacePacketBuf::put_str((InterfacePacketBuf *)local_3c,(char *)(local_10 + 1),sVar7);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this_00,local_3c);
  PacketGuard::~PacketGuard(local_3c);
  return 1;
}
```
