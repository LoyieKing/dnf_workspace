# respond_special_item_charac_slot_extend

`_ZN18SpecialItemHandler39respond_special_item_charac_slot_extendEiRK19STSpecailItem_ParamR20STSpecailItem_Result`

`SpecialItemHandler::respond_special_item_charac_slot_extend(int, STSpecailItem_Param const&, STSpecailItem_Result&)`

| 类 | 地址 |
|---|---|
| `SpecialItemHandler` | `0x0827c0c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827c0c2  _ZN18SpecialItemHandler39respond_special_item_charac_slot_extendEiRK19STSpecailItem_ParamR20STSpecailItem_Result
#           SpecialItemHandler::respond_special_item_charac_slot_extend(int, STSpecailItem_Param const&, STSpecailItem_Result&)
# range [0x0827c0c2, 0x0827c203]
0827c0c2 +0x000:  push   %ebp
0827c0c3 +0x001:  mov    %esp,%ebp
0827c0c5 +0x003:  push   %esi
0827c0c6 +0x004:  push   %ebx
0827c0c7 +0x005:  sub    $0x20,%esp
0827c0ca +0x008:  mov    0x10(%ebp),%eax
0827c0cd +0x00b:  mov    0x8(%eax),%eax
0827c0d0 +0x00e:  movzbl %al,%edx
0827c0d3 +0x011:  mov    0x10(%ebp),%eax
0827c0d6 +0x014:  mov    (%eax),%eax
0827c0d8 +0x016:  mov    %edx,0x4(%esp)
0827c0dc +0x01a:  mov    %eax,(%esp)
0827c0df +0x01d:  call   0827df1e <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x40>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x40
0827c0e4 +0x022:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0827c0e9 +0x027:  movl   $0x8d,0x8(%esp)
0827c0f1 +0x02f:  movl   $"SpecialItemHandler.cpp",0x4(%esp)
0827c0f9 +0x037:  mov    %eax,(%esp)
0827c0fc +0x03a:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0827c101 +0x03f:  movl   $0x1,0x8(%esp)
0827c109 +0x047:  mov    %eax,0x4(%esp)
0827c10d +0x04b:  lea    -0x14(%ebp),%eax
0827c110 +0x04e:  mov    %eax,(%esp)
0827c113 +0x051:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0827c118 +0x056:  lea    -0x14(%ebp),%eax
0827c11b +0x059:  mov    %eax,(%esp)
0827c11e +0x05c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0827c123 +0x061:  movl   $0x28a,0x4(%esp)
0827c12b +0x069:  mov    %eax,(%esp)
0827c12e +0x06c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0827c133 +0x071:  lea    -0x14(%ebp),%eax
0827c136 +0x074:  mov    %eax,(%esp)
0827c139 +0x077:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0827c13e +0x07c:  movl   $0xffffffff,0x4(%esp)
0827c146 +0x084:  mov    %eax,(%esp)
0827c149 +0x087:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0827c14e +0x08c:  lea    -0x14(%ebp),%eax
0827c151 +0x08f:  mov    %eax,(%esp)
0827c154 +0x092:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0827c159 +0x097:  mov    %eax,(%esp)
0827c15c +0x09a:  call   082370a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc74a
0827c161 +0x09f:  mov    %eax,-0xc(%ebp)
0827c164 +0x0a2:  mov    0x10(%ebp),%eax
0827c167 +0x0a5:  mov    (%eax),%eax
0827c169 +0x0a7:  mov    %eax,(%esp)
0827c16c +0x0aa:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0827c171 +0x0af:  mov    -0xc(%ebp),%edx
0827c174 +0x0b2:  mov    %eax,(%edx)
0827c176 +0x0b4:  mov    0x10(%ebp),%eax
0827c179 +0x0b7:  mov    (%eax),%eax
0827c17b +0x0b9:  mov    %eax,(%esp)
0827c17e +0x0bc:  call   08230870 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5f1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5f1a
0827c183 +0x0c1:  mov    -0xc(%ebp),%edx
0827c186 +0x0c4:  mov    %al,0x4(%edx)
0827c189 +0x0c7:  mov    0x10(%ebp),%eax
0827c18c +0x0ca:  mov    (%eax),%eax
0827c18e +0x0cc:  mov    %eax,(%esp)
0827c191 +0x0cf:  call   08230860 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5f0a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5f0a
0827c196 +0x0d4:  mov    -0xc(%ebp),%edx
0827c199 +0x0d7:  mov    %al,0x5(%edx)
0827c19c +0x0da:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0827c1a1 +0x0df:  lea    -0x14(%ebp),%edx
0827c1a4 +0x0e2:  mov    %edx,0x8(%esp)
0827c1a8 +0x0e6:  movl   $0x2,0x4(%esp)
0827c1b0 +0x0ee:  mov    %eax,(%esp)
0827c1b3 +0x0f1:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0827c1b8 +0x0f6:  mov    0x10(%ebp),%eax
0827c1bb +0x0f9:  mov    (%eax),%edx
0827c1bd +0x0fb:  mov    0x8(%ebp),%eax
0827c1c0 +0x0fe:  mov    (%eax),%eax
0827c1c2 +0x100:  mov    0xc(%ebp),%ecx
0827c1c5 +0x103:  mov    %ecx,0x8(%esp)
0827c1c9 +0x107:  mov    %edx,0x4(%esp)
0827c1cd +0x10b:  mov    %eax,(%esp)
0827c1d0 +0x10e:  call   08327674 <_ZN8WongWork9CCeraShop27_sendCharacSlotExtendPacketEP5CUseri>  ; WongWork::CCeraShop::_sendCharacSlotExtendPacket(CUser*, int)
0827c1d5 +0x113:  jmp    0827c1f2 <+0x130>
0827c1d7 +0x115:  mov    %edx,%ebx
0827c1d9 +0x117:  mov    %eax,%esi
0827c1db +0x119:  lea    -0x14(%ebp),%eax
0827c1de +0x11c:  mov    %eax,(%esp)
0827c1e1 +0x11f:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0827c1e6 +0x124:  mov    %esi,%eax
0827c1e8 +0x126:  mov    %ebx,%edx
0827c1ea +0x128:  mov    %eax,(%esp)
0827c1ed +0x12b:  call   08ae3750 <_Unwind_Resume>
0827c1f2 +0x130:  lea    -0x14(%ebp),%eax
0827c1f5 +0x133:  mov    %eax,(%esp)
0827c1f8 +0x136:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0827c1fd +0x13b:  add    $0x20,%esp
0827c200 +0x13e:  pop    %ebx
0827c201 +0x13f:  pop    %esi
0827c202 +0x140:  pop    %ebp
0827c203 +0x141:  ret
```

## 反编译 C

```c
// SpecialItemHandler::respond_special_item_charac_slot_extend @ 0x827c0c2

/* SpecialItemHandler::respond_special_item_charac_slot_extend(int, STSpecailItem_Param const&,
   STSpecailItem_Result&) */

void SpecialItemHandler::respond_special_item_charac_slot_extend
               (int param_1,STSpecailItem_Param *param_2,STSpecailItem_Result *param_3)

{
  SIG_EXTEND_CHARAC_SLOT SVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  undefined4 uVar4;
  CStreamGuard local_18 [8];
  SIG_EXTEND_CHARAC_SLOT *local_10;
  
  CUser::incCharacSlotLimit(*(CUser **)param_3,(uchar)*(undefined4 *)(param_3 + 8));
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"SpecialItemHandler.cpp",0x8d);
  CStreamGuard::CStreamGuard(local_18,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0827c12e to 0827c1d4 has its CatchHandler @ 0827c1d7 */
  CStreamGuard::operator<<(pCVar3,0x28a);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar3,-1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_EXTEND_CHARAC_SLOT>(pCVar3);
  uVar4 = CUser::get_acc_id(*(CUser **)param_3);
  *(undefined4 *)local_10 = uVar4;
  SVar1 = (SIG_EXTEND_CHARAC_SLOT)CUser::getSlotEffectCount(*(CUser **)param_3);
  local_10[4] = SVar1;
  SVar1 = (SIG_EXTEND_CHARAC_SLOT)CUser::getCharacSlotLimit(*(CUser **)param_3);
  local_10[5] = SVar1;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  WongWork::CCeraShop::_sendCharacSlotExtendPacket
            (*(CCeraShop **)param_1,*(CUser **)param_3,(int)param_2);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
