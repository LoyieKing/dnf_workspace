# process

`_ZN33Dispatcher_RequestCharacSkillInfo7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_RequestCharacSkillInfo::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RequestCharacSkillInfo` | `0x081e39e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e39e0  _ZN33Dispatcher_RequestCharacSkillInfo7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_RequestCharacSkillInfo::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e39e0, 0x081e3c07]
081e39e0 +0x000:  push   %ebp
081e39e1 +0x001:  mov    %esp,%ebp
081e39e3 +0x003:  push   %esi
081e39e4 +0x004:  push   %ebx
081e39e5 +0x005:  sub    $0x30,%esp
081e39e8 +0x008:  mov    0x14(%ebp),%eax
081e39eb +0x00b:  mov    %eax,-0x18(%ebp)
081e39ee +0x00e:  mov    0x10(%ebp),%eax
081e39f1 +0x011:  mov    %eax,0x8(%esp)
081e39f5 +0x015:  mov    0xc(%ebp),%eax
081e39f8 +0x018:  mov    %eax,0x4(%esp)
081e39fc +0x01c:  mov    0x8(%ebp),%eax
081e39ff +0x01f:  mov    %eax,(%esp)
081e3a02 +0x022:  call   081e3c08 <_ZN33Dispatcher_RequestCharacSkillInfo11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_RequestCharacSkillInfo::check_error(CUser*, MSG_BASE&)
081e3a07 +0x027:  mov    -0x18(%ebp),%edx
081e3a0a +0x02a:  mov    %eax,0x4(%edx)
081e3a0d +0x02d:  mov    -0x18(%ebp),%eax
081e3a10 +0x030:  mov    0x4(%eax),%eax
081e3a13 +0x033:  test   %eax,%eax
081e3a15 +0x035:  jle    081e3a21 <+0x41>
081e3a17 +0x037:  mov    $0x0,%ebx
081e3a1c +0x03c:  jmp    081e3bfe <+0x21e>
081e3a21 +0x041:  mov    -0x18(%ebp),%eax
081e3a24 +0x044:  mov    0x4(%eax),%eax
081e3a27 +0x047:  test   %eax,%eax
081e3a29 +0x049:  jns    081e3a58 <+0x78>
081e3a2b +0x04b:  mov    -0x18(%ebp),%eax
081e3a2e +0x04e:  mov    0x4(%eax),%eax
081e3a31 +0x051:  movl   $0x0,0xc(%esp)
081e3a39 +0x059:  mov    %eax,0x8(%esp)
081e3a3d +0x05d:  movl   $&_ZZN33Dispatcher_RequestCharacSkillInfo7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e3a45 +0x065:  movl   $0x5b32,(%esp)
081e3a4c +0x06c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e3a51 +0x071:  mov    %eax,%ebx
081e3a53 +0x073:  jmp    081e3bfe <+0x21e>
081e3a58 +0x078:  mov    0x10(%ebp),%eax
081e3a5b +0x07b:  mov    %eax,-0x14(%ebp)
081e3a5e +0x07e:  mov    -0x14(%ebp),%eax
081e3a61 +0x081:  movzbl 0xd(%eax),%eax
081e3a65 +0x085:  movsbl %al,%eax
081e3a68 +0x088:  mov    0xc(%ebp),%edx
081e3a6b +0x08b:  add    $0x796e8,%edx
081e3a71 +0x091:  mov    %eax,0x4(%esp)
081e3a75 +0x095:  mov    %edx,(%esp)
081e3a78 +0x098:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
081e3a7d +0x09d:  add    $0x892,%eax
081e3a82 +0x0a2:  mov    %eax,(%esp)
081e3a85 +0x0a5:  call   086086aa <_ZN9SkillSlot18IsLoadStrikerSkillEv>  ; SkillSlot::IsLoadStrikerSkill()
081e3a8a +0x0aa:  test   %al,%al
081e3a8c +0x0ac:  je     081e3b06 <+0x126>
081e3a8e +0x0ae:  mov    -0x14(%ebp),%eax
081e3a91 +0x0b1:  movzbl 0xd(%eax),%eax
081e3a95 +0x0b5:  movsbl %al,%eax
081e3a98 +0x0b8:  mov    0xc(%ebp),%edx
081e3a9b +0x0bb:  add    $0x796e8,%edx
081e3aa1 +0x0c1:  mov    %eax,0x4(%esp)
081e3aa5 +0x0c5:  mov    %edx,(%esp)
081e3aa8 +0x0c8:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
081e3aad +0x0cd:  movzbl 0x1239(%eax),%eax
081e3ab4 +0x0d4:  movsbl %al,%eax
081e3ab7 +0x0d7:  mov    %eax,-0xc(%ebp)
081e3aba +0x0da:  mov    -0x14(%ebp),%eax
081e3abd +0x0dd:  movzbl 0xd(%eax),%eax
081e3ac1 +0x0e1:  movsbl %al,%ebx
081e3ac4 +0x0e4:  mov    -0x14(%ebp),%eax
081e3ac7 +0x0e7:  movzbl 0xd(%eax),%eax
081e3acb +0x0eb:  movsbl %al,%eax
081e3ace +0x0ee:  mov    0xc(%ebp),%edx
081e3ad1 +0x0f1:  add    $0x796e8,%edx
081e3ad7 +0x0f7:  mov    %eax,0x4(%esp)
081e3adb +0x0fb:  mov    %edx,(%esp)
081e3ade +0x0fe:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
081e3ae3 +0x103:  lea    0x892(%eax),%edx
081e3ae9 +0x109:  mov    -0xc(%ebp),%eax
081e3aec +0x10c:  mov    %eax,0x8(%esp)
081e3af0 +0x110:  mov    %ebx,0x4(%esp)
081e3af4 +0x114:  mov    %edx,(%esp)
081e3af7 +0x117:  call   086086ce <_ZN9SkillSlot13SendSkillInfoEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::SendSkillInfo(int, ENUM_SKILL_TREE_KIND)
081e3afc +0x11c:  mov    $0x0,%ebx
081e3b01 +0x121:  jmp    081e3bfe <+0x21e>
081e3b06 +0x126:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
081e3b0b +0x12b:  movl   $0x5b40,0x8(%esp)
081e3b13 +0x133:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081e3b1b +0x13b:  mov    %eax,(%esp)
081e3b1e +0x13e:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
081e3b23 +0x143:  movl   $0x1,0x8(%esp)
081e3b2b +0x14b:  mov    %eax,0x4(%esp)
081e3b2f +0x14f:  lea    -0x20(%ebp),%eax
081e3b32 +0x152:  mov    %eax,(%esp)
081e3b35 +0x155:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081e3b3a +0x15a:  lea    -0x20(%ebp),%eax
081e3b3d +0x15d:  mov    %eax,(%esp)
081e3b40 +0x160:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081e3b45 +0x165:  movl   $0x2fd,0x4(%esp)
081e3b4d +0x16d:  mov    %eax,(%esp)
081e3b50 +0x170:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081e3b55 +0x175:  mov    0xc(%ebp),%eax
081e3b58 +0x178:  mov    %eax,(%esp)
081e3b5b +0x17b:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081e3b60 +0x180:  mov    %eax,%ebx
081e3b62 +0x182:  lea    -0x20(%ebp),%eax
081e3b65 +0x185:  mov    %eax,(%esp)
081e3b68 +0x188:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081e3b6d +0x18d:  mov    %ebx,0x4(%esp)
081e3b71 +0x191:  mov    %eax,(%esp)
081e3b74 +0x194:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081e3b79 +0x199:  lea    -0x20(%ebp),%eax
081e3b7c +0x19c:  mov    %eax,(%esp)
081e3b7f +0x19f:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
081e3b84 +0x1a4:  mov    %eax,(%esp)
081e3b87 +0x1a7:  call   08237438 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcae2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcae2
081e3b8c +0x1ac:  mov    %eax,-0x10(%ebp)
081e3b8f +0x1af:  mov    -0x14(%ebp),%eax
081e3b92 +0x1b2:  movzbl 0xd(%eax),%eax
081e3b96 +0x1b6:  movsbl %al,%eax
081e3b99 +0x1b9:  mov    0xc(%ebp),%edx
081e3b9c +0x1bc:  add    $0x796e8,%edx
081e3ba2 +0x1c2:  mov    %eax,0x4(%esp)
081e3ba6 +0x1c6:  mov    %edx,(%esp)
081e3ba9 +0x1c9:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
081e3bae +0x1ce:  mov    (%eax),%edx
081e3bb0 +0x1d0:  mov    -0x10(%ebp),%eax
081e3bb3 +0x1d3:  mov    %edx,(%eax)
081e3bb5 +0x1d5:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081e3bba +0x1da:  lea    -0x20(%ebp),%edx
081e3bbd +0x1dd:  mov    %edx,0x8(%esp)
081e3bc1 +0x1e1:  movl   $0x2,0x4(%esp)
081e3bc9 +0x1e9:  mov    %eax,(%esp)
081e3bcc +0x1ec:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081e3bd1 +0x1f1:  mov    $0x0,%ebx
081e3bd6 +0x1f6:  lea    -0x20(%ebp),%eax
081e3bd9 +0x1f9:  mov    %eax,(%esp)
081e3bdc +0x1fc:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081e3be1 +0x201:  jmp    081e3bfe <+0x21e>
081e3be3 +0x203:  mov    %edx,%ebx
081e3be5 +0x205:  mov    %eax,%esi
081e3be7 +0x207:  lea    -0x20(%ebp),%eax
081e3bea +0x20a:  mov    %eax,(%esp)
081e3bed +0x20d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081e3bf2 +0x212:  mov    %esi,%eax
081e3bf4 +0x214:  mov    %ebx,%edx
081e3bf6 +0x216:  mov    %eax,(%esp)
081e3bf9 +0x219:  call   08ae3750 <_Unwind_Resume>
081e3bfe +0x21e:  mov    %ebx,%eax
081e3c00 +0x220:  add    $0x30,%esp
081e3c03 +0x223:  pop    %ebx
081e3c04 +0x224:  pop    %esi
081e3c05 +0x225:  pop    %ebp
081e3c06 +0x226:  ret
081e3c07 +0x227:  nop
```

## 反编译 C

```c
// Dispatcher_RequestCharacSkillInfo::process @ 0x81e39e0

/* Dispatcher_RequestCharacSkillInfo::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_RequestCharacSkillInfo::process
          (Dispatcher_RequestCharacSkillInfo *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  MSG_BASE MVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  Stream *pSVar5;
  CStreamGuard *pCVar6;
  undefined4 *puVar7;
  CStreamGuard local_24 [8];
  ParamBase *local_1c;
  MSG_BASE *local_18;
  SIG_REQUEST_CHARAC_SKILL_INFO *local_14;
  int local_10;
  
  local_1c = param_3;
  uVar3 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_1c + 4) = uVar3;
  if (*(int *)(local_1c + 4) < 1) {
    if (*(int *)(local_1c + 4) < 0) {
      uVar3 = LineFunc(0x5b32,
                       "virtual int Dispatcher_RequestCharacSkillInfo::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_1c + 4),0);
    }
    else {
      local_18 = param_2;
      iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8),
                         (int)(char)param_2[0xd]);
      cVar2 = SkillSlot::IsLoadStrikerSkill((SkillSlot *)(iVar4 + 0x892));
      if (cVar2 == '\0') {
        pSVar5 = (Stream *)
                 StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0x5b40)
        ;
        CStreamGuard::CStreamGuard(local_24,pSVar5,true);
        pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 081e3b50 to 081e3bd0 has its CatchHandler @ 081e3be3 */
        CStreamGuard::operator<<(pCVar6,0x2fd);
        iVar4 = CUser::GetUID(param_1);
        pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_24);
        CStreamGuard::operator<<(pCVar6,iVar4);
        pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_24);
        local_14 = CStreamGuard::GetInBuffer<SIG_REQUEST_CHARAC_SKILL_INFO>(pCVar6);
        puVar7 = (undefined4 *)
                 std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                           ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8)
                            ,(int)(char)local_18[0xd]);
        *(undefined4 *)local_14 = *puVar7;
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_24);
        uVar3 = 0;
        CStreamGuard::~CStreamGuard(local_24);
      }
      else {
        iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8),
                           (int)(char)local_18[0xd]);
        local_10 = (int)*(char *)(iVar4 + 0x1239);
        MVar1 = local_18[0xd];
        iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8),
                           (int)(char)local_18[0xd]);
        SkillSlot::SendSkillInfo((SkillSlot *)(iVar4 + 0x892),(int)(char)MVar1,local_10);
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
