# process

`_ZN42Dispatcher_SaveGameOption_ChattingEmoticon7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_SaveGameOption_ChattingEmoticon::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SaveGameOption_ChattingEmoticon` | `0x081cf52a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cf52a  _ZN42Dispatcher_SaveGameOption_ChattingEmoticon7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_SaveGameOption_ChattingEmoticon::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081cf52a, 0x081cf71d]
081cf52a +0x000:  push   %ebp
081cf52b +0x001:  mov    %esp,%ebp
081cf52d +0x003:  push   %edi
081cf52e +0x004:  push   %esi
081cf52f +0x005:  push   %ebx
081cf530 +0x006:  sub    $0x24c,%esp
081cf536 +0x00c:  mov    0x10(%ebp),%eax
081cf539 +0x00f:  mov    %eax,-0x28(%ebp)
081cf53c +0x012:  mov    0xc(%ebp),%eax
081cf53f +0x015:  mov    %eax,(%esp)
081cf542 +0x018:  call   0822fc4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52f8
081cf547 +0x01d:  mov    %eax,-0x24(%ebp)
081cf54a +0x020:  lea    -0x240(%ebp),%eax
081cf550 +0x026:  mov    -0x24(%ebp),%edx
081cf553 +0x029:  mov    %edx,0x4(%esp)
081cf557 +0x02d:  mov    %eax,(%esp)
081cf55a +0x030:  call   084b7136 <_ZNK11CGameOption15getEmoticonInfoEv>  ; CGameOption::getEmoticonInfo() const
081cf55f +0x035:  sub    $0x4,%esp
081cf562 +0x038:  movl   $0x0,-0x20(%ebp)
081cf569 +0x03f:  jmp    081cf5ca <+0xa0>
081cf56b +0x041:  mov    -0x28(%ebp),%eax
081cf56e +0x044:  lea    0xf(%eax),%edx
081cf571 +0x047:  mov    -0x20(%ebp),%eax
081cf574 +0x04a:  mov    %eax,0x4(%esp)
081cf578 +0x04e:  mov    %edx,(%esp)
081cf57b +0x051:  call   08236f74 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc61e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc61e
081cf580 +0x056:  add    $0x2,%eax
081cf583 +0x059:  mov    %eax,(%esp)
081cf586 +0x05c:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
081cf58b +0x061:  mov    %eax,%ebx
081cf58d +0x063:  mov    -0x28(%ebp),%eax
081cf590 +0x066:  lea    0xf(%eax),%edx
081cf593 +0x069:  mov    -0x20(%ebp),%eax
081cf596 +0x06c:  mov    %eax,0x4(%esp)
081cf59a +0x070:  mov    %edx,(%esp)
081cf59d +0x073:  call   08236f74 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc61e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc61e
081cf5a2 +0x078:  movzwl (%eax),%eax
081cf5a5 +0x07b:  cwtl
081cf5a6 +0x07c:  lea    -0x240(%ebp),%edx
081cf5ac +0x082:  imul   $0x16,%eax,%eax
081cf5af +0x085:  lea    (%edx,%eax,1),%eax
081cf5b2 +0x088:  movl   $0x14,0x8(%esp)
081cf5ba +0x090:  mov    %ebx,0x4(%esp)
081cf5be +0x094:  mov    %eax,(%esp)
081cf5c1 +0x097:  call   0807d8d0 <_init+0x1c8>
081cf5c6 +0x09c:  addl   $0x1,-0x20(%ebp)
081cf5ca +0x0a0:  mov    -0x28(%ebp),%eax
081cf5cd +0x0a3:  add    $0xf,%eax
081cf5d0 +0x0a6:  mov    %eax,(%esp)
081cf5d3 +0x0a9:  call   08236f54 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc5fe>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc5fe
081cf5d8 +0x0ae:  cmp    -0x20(%ebp),%eax
081cf5db +0x0b1:  seta   %al
081cf5de +0x0b4:  test   %al,%al
081cf5e0 +0x0b6:  jne    081cf56b <+0x41>
081cf5e2 +0x0b8:  lea    -0x240(%ebp),%eax
081cf5e8 +0x0be:  mov    %eax,0x4(%esp)
081cf5ec +0x0c2:  mov    -0x24(%ebp),%eax
081cf5ef +0x0c5:  mov    %eax,(%esp)
081cf5f2 +0x0c8:  call   084b71e8 <_ZN11CGameOption15isEqualEmoticonERK23CChattingEmoticonConfig>  ; CGameOption::isEqualEmoticon(CChattingEmoticonConfig const&)
081cf5f7 +0x0cd:  xor    $0x1,%eax
081cf5fa +0x0d0:  test   %al,%al
081cf5fc +0x0d2:  je     081cf70d <+0x1e3>
081cf602 +0x0d8:  lea    -0x240(%ebp),%eax
081cf608 +0x0de:  mov    %eax,0x4(%esp)
081cf60c +0x0e2:  mov    -0x24(%ebp),%eax
081cf60f +0x0e5:  mov    %eax,(%esp)
081cf612 +0x0e8:  call   084b7080 <_ZN11CGameOption15SetEmoticonInfoERK23CChattingEmoticonConfig>  ; CGameOption::SetEmoticonInfo(CChattingEmoticonConfig const&)
081cf617 +0x0ed:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
081cf61c +0x0f2:  movl   $0x2959,0x8(%esp)
081cf624 +0x0fa:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081cf62c +0x102:  mov    %eax,(%esp)
081cf62f +0x105:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
081cf634 +0x10a:  movl   $0x1,0x8(%esp)
081cf63c +0x112:  mov    %eax,0x4(%esp)
081cf640 +0x116:  lea    -0x30(%ebp),%eax
081cf643 +0x119:  mov    %eax,(%esp)
081cf646 +0x11c:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081cf64b +0x121:  lea    -0x30(%ebp),%eax
081cf64e +0x124:  mov    %eax,(%esp)
081cf651 +0x127:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081cf656 +0x12c:  movl   $0x2d7,0x4(%esp)
081cf65e +0x134:  mov    %eax,(%esp)
081cf661 +0x137:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081cf666 +0x13c:  mov    0xc(%ebp),%eax
081cf669 +0x13f:  mov    %eax,(%esp)
081cf66c +0x142:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081cf671 +0x147:  mov    %eax,%ebx
081cf673 +0x149:  lea    -0x30(%ebp),%eax
081cf676 +0x14c:  mov    %eax,(%esp)
081cf679 +0x14f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081cf67e +0x154:  mov    %ebx,0x4(%esp)
081cf682 +0x158:  mov    %eax,(%esp)
081cf685 +0x15b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081cf68a +0x160:  lea    -0x30(%ebp),%eax
081cf68d +0x163:  mov    %eax,(%esp)
081cf690 +0x166:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
081cf695 +0x16b:  mov    %eax,(%esp)
081cf698 +0x16e:  call   08236f8c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc636>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc636
081cf69d +0x173:  mov    %eax,-0x1c(%ebp)
081cf6a0 +0x176:  mov    0xc(%ebp),%eax
081cf6a3 +0x179:  mov    %eax,(%esp)
081cf6a6 +0x17c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081cf6ab +0x181:  mov    -0x1c(%ebp),%edx
081cf6ae +0x184:  mov    %eax,(%edx)
081cf6b0 +0x186:  mov    -0x1c(%ebp),%eax
081cf6b3 +0x189:  lea    0x4(%eax),%ebx
081cf6b6 +0x18c:  lea    -0x240(%ebp),%edx
081cf6bc +0x192:  mov    $0x84,%eax
081cf6c1 +0x197:  mov    %ebx,%edi
081cf6c3 +0x199:  mov    %edx,%esi
081cf6c5 +0x19b:  mov    %eax,%ecx
081cf6c7 +0x19d:  rep movsl %ds:(%esi),%es:(%edi)
081cf6c9 +0x19f:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081cf6ce +0x1a4:  lea    -0x30(%ebp),%edx
081cf6d1 +0x1a7:  mov    %edx,0x8(%esp)
081cf6d5 +0x1ab:  movl   $0x2,0x4(%esp)
081cf6dd +0x1b3:  mov    %eax,(%esp)
081cf6e0 +0x1b6:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081cf6e5 +0x1bb:  jmp    081cf702 <+0x1d8>
081cf6e7 +0x1bd:  mov    %edx,%ebx
081cf6e9 +0x1bf:  mov    %eax,%esi
081cf6eb +0x1c1:  lea    -0x30(%ebp),%eax
081cf6ee +0x1c4:  mov    %eax,(%esp)
081cf6f1 +0x1c7:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081cf6f6 +0x1cc:  mov    %esi,%eax
081cf6f8 +0x1ce:  mov    %ebx,%edx
081cf6fa +0x1d0:  mov    %eax,(%esp)
081cf6fd +0x1d3:  call   08ae3750 <_Unwind_Resume>
081cf702 +0x1d8:  lea    -0x30(%ebp),%eax
081cf705 +0x1db:  mov    %eax,(%esp)
081cf708 +0x1de:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081cf70d +0x1e3:  mov    $0x0,%eax
081cf712 +0x1e8:  lea    -0xc(%ebp),%esp
081cf715 +0x1eb:  add    $0x0,%esp
081cf718 +0x1ee:  pop    %ebx
081cf719 +0x1ef:  pop    %esi
081cf71a +0x1f0:  pop    %edi
081cf71b +0x1f1:  pop    %ebp
081cf71c +0x1f2:  ret
081cf71d +0x1f3:  nop
```

## 反编译 C

```c
// Dispatcher_SaveGameOption_ChattingEmoticon::process @ 0x81cf52a

/* Dispatcher_SaveGameOption_ChattingEmoticon::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_SaveGameOption_ChattingEmoticon::process
          (CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  char *__src;
  short *psVar2;
  uint uVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  int iVar6;
  undefined4 uVar7;
  CChattingEmoticonConfig *pCVar8;
  SIG_SAVE_CHATTING_EMOTICON *pSVar9;
  byte bVar10;
  CChattingEmoticonConfig local_244 [528];
  CStreamGuard local_34 [8];
  ParamBase *local_2c;
  CGameOption *local_28;
  uint local_24;
  SIG_SAVE_CHATTING_EMOTICON *local_20;
  
  bVar10 = 0;
  local_2c = param_3;
  local_28 = (CGameOption *)CUser::GetGameOptionRef((CUser *)param_2);
  CGameOption::getEmoticonInfo();
  local_24 = 0;
  while( true ) {
    uVar3 = std::
            vector<MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String,std::allocator<MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String>>
            ::size((vector<MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String,std::allocator<MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String>>
                    *)(local_2c + 0xf));
    if (uVar3 <= local_24) break;
    iVar6 = std::
            vector<MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String,std::allocator<MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String>>
            ::operator[]((vector<MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String,std::allocator<MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String>>
                          *)(local_2c + 0xf),local_24);
    __src = (char *)std::string::c_str((string *)(iVar6 + 2));
    psVar2 = (short *)std::
                      vector<MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String,std::allocator<MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String>>
                      ::operator[]((vector<MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String,std::allocator<MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String>>
                                    *)(local_2c + 0xf),local_24);
    strncpy((char *)(local_244 + *psVar2 * 0x16),__src,0x14);
    local_24 = local_24 + 1;
  }
  cVar1 = CGameOption::isEqualEmoticon(local_28,local_244);
  if (cVar1 != '\x01') {
    CGameOption::SetEmoticonInfo(local_28,local_244);
    pSVar4 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0x2959);
    CStreamGuard::CStreamGuard(local_34,pSVar4,true);
    pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_34);
                    /* try { // try from 081cf661 to 081cf6e4 has its CatchHandler @ 081cf6e7 */
    CStreamGuard::operator<<(pCVar5,0x2d7);
    iVar6 = CUser::GetUID((CUser *)param_2);
    pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_34);
    CStreamGuard::operator<<(pCVar5,iVar6);
    pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_34);
    local_20 = CStreamGuard::GetInBuffer<SIG_SAVE_CHATTING_EMOTICON>(pCVar5);
    uVar7 = CUser::get_acc_id((CUser *)param_2);
    *(undefined4 *)local_20 = uVar7;
    pCVar8 = local_244;
    pSVar9 = local_20 + 4;
    for (iVar6 = 0x84; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pSVar9 = *(undefined4 *)pCVar8;
      pCVar8 = pCVar8 + ((uint)bVar10 * -2 + 1) * 4;
      pSVar9 = pSVar9 + (uint)bVar10 * -8 + 4;
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_34);
    CStreamGuard::~CStreamGuard(local_34);
  }
  return 0;
}
```
