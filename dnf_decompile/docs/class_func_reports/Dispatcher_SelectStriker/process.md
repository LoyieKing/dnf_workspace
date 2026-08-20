# process

`_ZN24Dispatcher_SelectStriker7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_SelectStriker::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SelectStriker` | `0x081e3dca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e3dca  _ZN24Dispatcher_SelectStriker7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_SelectStriker::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e3dca, 0x081e4065]
081e3dca +0x000:  push   %ebp
081e3dcb +0x001:  mov    %esp,%ebp
081e3dcd +0x003:  push   %esi
081e3dce +0x004:  push   %ebx
081e3dcf +0x005:  sub    $0x30,%esp
081e3dd2 +0x008:  mov    0x14(%ebp),%eax
081e3dd5 +0x00b:  mov    %eax,-0x14(%ebp)
081e3dd8 +0x00e:  mov    0x10(%ebp),%eax
081e3ddb +0x011:  mov    %eax,0x8(%esp)
081e3ddf +0x015:  mov    0xc(%ebp),%eax
081e3de2 +0x018:  mov    %eax,0x4(%esp)
081e3de6 +0x01c:  mov    0x8(%ebp),%eax
081e3de9 +0x01f:  mov    %eax,(%esp)
081e3dec +0x022:  call   081e4066 <_ZN24Dispatcher_SelectStriker11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_SelectStriker::check_error(CUser*, MSG_BASE&)
081e3df1 +0x027:  mov    -0x14(%ebp),%edx
081e3df4 +0x02a:  mov    %eax,0x4(%edx)
081e3df7 +0x02d:  mov    -0x14(%ebp),%eax
081e3dfa +0x030:  mov    0x4(%eax),%eax
081e3dfd +0x033:  test   %eax,%eax
081e3dff +0x035:  jle    081e3e0b <+0x41>
081e3e01 +0x037:  mov    $0x0,%eax
081e3e06 +0x03c:  jmp    081e405f <+0x295>
081e3e0b +0x041:  mov    -0x14(%ebp),%eax
081e3e0e +0x044:  mov    0x4(%eax),%eax
081e3e11 +0x047:  test   %eax,%eax
081e3e13 +0x049:  jns    081e3e40 <+0x76>
081e3e15 +0x04b:  mov    -0x14(%ebp),%eax
081e3e18 +0x04e:  mov    0x4(%eax),%eax
081e3e1b +0x051:  movl   $0x0,0xc(%esp)
081e3e23 +0x059:  mov    %eax,0x8(%esp)
081e3e27 +0x05d:  movl   $&_ZZN24Dispatcher_SelectStriker7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e3e2f +0x065:  movl   $0x5b93,(%esp)
081e3e36 +0x06c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e3e3b +0x071:  jmp    081e405f <+0x295>
081e3e40 +0x076:  mov    0x10(%ebp),%eax
081e3e43 +0x079:  mov    %eax,-0x10(%ebp)
081e3e46 +0x07c:  mov    -0x10(%ebp),%eax
081e3e49 +0x07f:  movzbl 0xd(%eax),%eax
081e3e4d +0x083:  movsbl %al,%eax
081e3e50 +0x086:  mov    0xc(%ebp),%edx
081e3e53 +0x089:  add    $0x796e8,%edx
081e3e59 +0x08f:  mov    %eax,0x4(%esp)
081e3e5d +0x093:  mov    %edx,(%esp)
081e3e60 +0x096:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
081e3e65 +0x09b:  movzbl 0x14bc(%eax),%eax
081e3e6c +0x0a2:  test   %al,%al
081e3e6e +0x0a4:  je     081e3f3f <+0x175>
081e3e74 +0x0aa:  mov    -0x10(%ebp),%eax
081e3e77 +0x0ad:  movzbl 0xd(%eax),%eax
081e3e7b +0x0b1:  movsbl %al,%eax
081e3e7e +0x0b4:  mov    0xc(%ebp),%edx
081e3e81 +0x0b7:  add    $0x796e8,%edx
081e3e87 +0x0bd:  mov    %eax,0x4(%esp)
081e3e8b +0x0c1:  mov    %edx,(%esp)
081e3e8e +0x0c4:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
081e3e93 +0x0c9:  mov    (%eax),%edx
081e3e95 +0x0cb:  mov    0xc(%ebp),%eax
081e3e98 +0x0ce:  mov    %edx,0x4(%esp)
081e3e9c +0x0d2:  mov    %eax,(%esp)
081e3e9f +0x0d5:  call   0822f0e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x478e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x478e
081e3ea4 +0x0da:  mov    -0x10(%ebp),%eax
081e3ea7 +0x0dd:  movzbl 0xe(%eax),%eax
081e3eab +0x0e1:  movzbl %al,%edx
081e3eae +0x0e4:  mov    0xc(%ebp),%eax
081e3eb1 +0x0e7:  mov    %edx,0x4(%esp)
081e3eb5 +0x0eb:  mov    %eax,(%esp)
081e3eb8 +0x0ee:  call   0822f0b0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x475a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x475a
081e3ebd +0x0f3:  mov    0xc(%ebp),%eax
081e3ec0 +0x0f6:  add    $0x796f4,%eax
081e3ec5 +0x0fb:  mov    %eax,(%esp)
081e3ec8 +0x0fe:  call   0822fbda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5284>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5284
081e3ecd +0x103:  mov    -0x10(%ebp),%eax
081e3ed0 +0x106:  movzbl 0xd(%eax),%eax
081e3ed4 +0x10a:  movsbl %al,%eax
081e3ed7 +0x10d:  mov    0xc(%ebp),%edx
081e3eda +0x110:  add    $0x796e8,%edx
081e3ee0 +0x116:  mov    %eax,0x4(%esp)
081e3ee4 +0x11a:  mov    %edx,(%esp)
081e3ee7 +0x11d:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
081e3eec +0x122:  mov    0xc(%ebp),%edx
081e3eef +0x125:  mov    %eax,0x4(%esp)
081e3ef3 +0x129:  mov    %edx,(%esp)
081e3ef6 +0x12c:  call   0864e28e <_ZN15CUserCharacInfo12setTagCharacEP12_Charac_info>  ; CUserCharacInfo::setTagCharac(_Charac_info*)
081e3efb +0x131:  mov    0xc(%ebp),%eax
081e3efe +0x134:  mov    %eax,(%esp)
081e3f01 +0x137:  call   0822f110 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ba>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ba
081e3f06 +0x13c:  mov    0xc(%ebp),%edx
081e3f09 +0x13f:  mov    %edx,0x4(%esp)
081e3f0d +0x143:  mov    %eax,(%esp)
081e3f10 +0x146:  call   0822d6c6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d70>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d70
081e3f15 +0x14b:  mov    0xc(%ebp),%eax
081e3f18 +0x14e:  mov    %eax,(%esp)
081e3f1b +0x151:  call   0822f120 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ca
081e3f20 +0x156:  mov    0xc(%ebp),%edx
081e3f23 +0x159:  mov    %edx,0x4(%esp)
081e3f27 +0x15d:  mov    %eax,(%esp)
081e3f2a +0x160:  call   0822ee2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x44d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x44d8
081e3f2f +0x165:  mov    0xc(%ebp),%eax
081e3f32 +0x168:  mov    %eax,(%esp)
081e3f35 +0x16b:  call   086903f8 <_ZN5CUser17SendTagCharacInfoEv>  ; CUser::SendTagCharacInfo()
081e3f3a +0x170:  jmp    081e405a <+0x290>
081e3f3f +0x175:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
081e3f44 +0x17a:  movl   $0x5ba6,0x8(%esp)
081e3f4c +0x182:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081e3f54 +0x18a:  mov    %eax,(%esp)
081e3f57 +0x18d:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
081e3f5c +0x192:  movl   $0x1,0x8(%esp)
081e3f64 +0x19a:  mov    %eax,0x4(%esp)
081e3f68 +0x19e:  lea    -0x1c(%ebp),%eax
081e3f6b +0x1a1:  mov    %eax,(%esp)
081e3f6e +0x1a4:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081e3f73 +0x1a9:  lea    -0x1c(%ebp),%eax
081e3f76 +0x1ac:  mov    %eax,(%esp)
081e3f79 +0x1af:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081e3f7e +0x1b4:  movl   $0x2fe,0x4(%esp)
081e3f86 +0x1bc:  mov    %eax,(%esp)
081e3f89 +0x1bf:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081e3f8e +0x1c4:  mov    0xc(%ebp),%eax
081e3f91 +0x1c7:  mov    %eax,(%esp)
081e3f94 +0x1ca:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081e3f99 +0x1cf:  mov    %eax,%ebx
081e3f9b +0x1d1:  lea    -0x1c(%ebp),%eax
081e3f9e +0x1d4:  mov    %eax,(%esp)
081e3fa1 +0x1d7:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081e3fa6 +0x1dc:  mov    %ebx,0x4(%esp)
081e3faa +0x1e0:  mov    %eax,(%esp)
081e3fad +0x1e3:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081e3fb2 +0x1e8:  lea    -0x1c(%ebp),%eax
081e3fb5 +0x1eb:  mov    %eax,(%esp)
081e3fb8 +0x1ee:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
081e3fbd +0x1f3:  mov    %eax,(%esp)
081e3fc0 +0x1f6:  call   0823744e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcaf8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcaf8
081e3fc5 +0x1fb:  mov    %eax,-0xc(%ebp)
081e3fc8 +0x1fe:  movl   $0x414c,0x8(%esp)
081e3fd0 +0x206:  movl   $0x0,0x4(%esp)
081e3fd8 +0x20e:  mov    -0xc(%ebp),%eax
081e3fdb +0x211:  mov    %eax,(%esp)
081e3fde +0x214:  call   0807dcc0 <_init+0x5b8>
081e3fe3 +0x219:  mov    -0x10(%ebp),%eax
081e3fe6 +0x21c:  movzbl 0xd(%eax),%eax
081e3fea +0x220:  movsbl %al,%eax
081e3fed +0x223:  mov    0xc(%ebp),%edx
081e3ff0 +0x226:  add    $0x796e8,%edx
081e3ff6 +0x22c:  mov    %eax,0x4(%esp)
081e3ffa +0x230:  mov    %edx,(%esp)
081e3ffd +0x233:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
081e4002 +0x238:  mov    (%eax),%edx
081e4004 +0x23a:  mov    -0xc(%ebp),%eax
081e4007 +0x23d:  mov    %edx,(%eax)
081e4009 +0x23f:  mov    -0x10(%ebp),%eax
081e400c +0x242:  movzbl 0xe(%eax),%edx
081e4010 +0x246:  mov    -0xc(%ebp),%eax
081e4013 +0x249:  mov    %dl,0x4(%eax)
081e4016 +0x24c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081e401b +0x251:  lea    -0x1c(%ebp),%edx
081e401e +0x254:  mov    %edx,0x8(%esp)
081e4022 +0x258:  movl   $0x2,0x4(%esp)
081e402a +0x260:  mov    %eax,(%esp)
081e402d +0x263:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081e4032 +0x268:  jmp    081e404f <+0x285>
081e4034 +0x26a:  mov    %edx,%ebx
081e4036 +0x26c:  mov    %eax,%esi
081e4038 +0x26e:  lea    -0x1c(%ebp),%eax
081e403b +0x271:  mov    %eax,(%esp)
081e403e +0x274:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081e4043 +0x279:  mov    %esi,%eax
081e4045 +0x27b:  mov    %ebx,%edx
081e4047 +0x27d:  mov    %eax,(%esp)
081e404a +0x280:  call   08ae3750 <_Unwind_Resume>
081e404f +0x285:  lea    -0x1c(%ebp),%eax
081e4052 +0x288:  mov    %eax,(%esp)
081e4055 +0x28b:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081e405a +0x290:  mov    $0x0,%eax
081e405f +0x295:  add    $0x30,%esp
081e4062 +0x298:  pop    %ebx
081e4063 +0x299:  pop    %esi
081e4064 +0x29a:  pop    %ebp
081e4065 +0x29b:  ret
```

## 反编译 C

```c
// Dispatcher_SelectStriker::process @ 0x81e3dca

/* Dispatcher_SelectStriker::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_SelectStriker::process
          (Dispatcher_SelectStriker *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  _Charac_info *p_Var4;
  CInventory *this_00;
  SkillSlot *this_01;
  Stream *pSVar5;
  CStreamGuard *pCVar6;
  undefined4 *puVar7;
  CStreamGuard local_20 [8];
  ParamBase *local_18;
  MSG_BASE *local_14;
  SIG_REQUEST_TAG_CHARAC_INFO *local_10;
  
  local_18 = param_3;
  uVar1 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_18 + 4) = uVar1;
  if (*(int *)(local_18 + 4) < 1) {
    if (*(int *)(local_18 + 4) < 0) {
      uVar1 = LineFunc(0x5b93,
                       "virtual int Dispatcher_SelectStriker::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_18 + 4),0);
    }
    else {
      local_14 = param_2;
      iVar2 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8),
                         (int)(char)param_2[0xd]);
      if (*(char *)(iVar2 + 0x14bc) == '\0') {
        pSVar5 = (Stream *)
                 StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0x5ba6)
        ;
        CStreamGuard::CStreamGuard(local_20,pSVar5,true);
        pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 081e3f89 to 081e4031 has its CatchHandler @ 081e4034 */
        CStreamGuard::operator<<(pCVar6,0x2fe);
        iVar2 = CUser::GetUID(param_1);
        pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_20);
        CStreamGuard::operator<<(pCVar6,iVar2);
        pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_20);
        local_10 = CStreamGuard::GetInBuffer<SIG_REQUEST_TAG_CHARAC_INFO>(pCVar6);
        memset(local_10,0,0x414c);
        puVar7 = (undefined4 *)
                 std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                           ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8)
                            ,(int)(char)local_14[0xd]);
        *(undefined4 *)local_10 = *puVar7;
        local_10[4] = *(SIG_REQUEST_TAG_CHARAC_INFO *)(local_14 + 0xe);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_20);
        CStreamGuard::~CStreamGuard(local_20);
      }
      else {
        puVar3 = (uint *)std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                                   ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                                    (param_1 + 0x796e8),(int)(char)local_14[0xd]);
        CUserCharacInfo::setCurCharacTagCharacNo((CUserCharacInfo *)param_1,*puVar3);
        CUserCharacInfo::setCurCharacStrikerSkillIndex
                  ((CUserCharacInfo *)param_1,(uchar)local_14[0xe]);
        CCharacterView::enableSaveCharacView((CCharacterView *)(param_1 + 0x796f4));
        p_Var4 = (_Charac_info *)
                 std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                           ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8)
                            ,(int)(char)local_14[0xd]);
        CUserCharacInfo::setTagCharac((CUserCharacInfo *)param_1,p_Var4);
        this_00 = (CInventory *)CUserCharacInfo::getTagCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::set_parent(this_00,param_1);
        this_01 = (SkillSlot *)CUserCharacInfo::getTagCharacSkillR((CUserCharacInfo *)param_1);
        SkillSlot::set_parent(this_01,param_1);
        CUser::SendTagCharacInfo(param_1);
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
