# _saveData

`_ZN10CQuestShop9_saveDataEP5CUser`

`CQuestShop::_saveData(CUser*)`

| 类 | 地址 |
|---|---|
| `CQuestShop` | `0x085efb66` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085efb66  _ZN10CQuestShop9_saveDataEP5CUser
#           CQuestShop::_saveData(CUser*)
# range [0x085efb66, 0x085efd73]
085efb66 +0x000:  push   %ebp
085efb67 +0x001:  mov    %esp,%ebp
085efb69 +0x003:  push   %esi
085efb6a +0x004:  push   %ebx
085efb6b +0x005:  sub    $0x30,%esp
085efb6e +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
085efb73 +0x00d:  movl   $0x21b,0x8(%esp)
085efb7b +0x015:  movl   $"QuestShop.cpp",0x4(%esp)
085efb83 +0x01d:  mov    %eax,(%esp)
085efb86 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
085efb8b +0x025:  movl   $0x1,0x8(%esp)
085efb93 +0x02d:  mov    %eax,0x4(%esp)
085efb97 +0x031:  lea    -0x1c(%ebp),%eax
085efb9a +0x034:  mov    %eax,(%esp)
085efb9d +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
085efba2 +0x03c:  lea    -0x1c(%ebp),%eax
085efba5 +0x03f:  mov    %eax,(%esp)
085efba8 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085efbad +0x047:  movl   $0x279,0x4(%esp)
085efbb5 +0x04f:  mov    %eax,(%esp)
085efbb8 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
085efbbd +0x057:  mov    0xc(%ebp),%eax
085efbc0 +0x05a:  mov    %eax,(%esp)
085efbc3 +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
085efbc8 +0x062:  mov    %eax,%ebx
085efbca +0x064:  lea    -0x1c(%ebp),%eax
085efbcd +0x067:  mov    %eax,(%esp)
085efbd0 +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085efbd5 +0x06f:  mov    %ebx,0x4(%esp)
085efbd9 +0x073:  mov    %eax,(%esp)
085efbdc +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
085efbe1 +0x07b:  lea    -0x1c(%ebp),%eax
085efbe4 +0x07e:  mov    %eax,(%esp)
085efbe7 +0x081:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
085efbec +0x086:  mov    %eax,(%esp)
085efbef +0x089:  call   085f00c8 <_GLOBAL__I__ZN10CQuestShopC2Ev+0x234>  ; global constructors keyed to CQuestShop::CQuestShop()+0x234
085efbf4 +0x08e:  mov    %eax,-0x14(%ebp)
085efbf7 +0x091:  cmpl   $0x0,-0x14(%ebp)
085efbfb +0x095:  jne    085efc07 <+0xa1>
085efbfd +0x097:  mov    $0x0,%ebx
085efc02 +0x09c:  jmp    085efd5d <+0x1f7>
085efc07 +0x0a1:  movl   $0x155,0x8(%esp)
085efc0f +0x0a9:  movl   $0x0,0x4(%esp)
085efc17 +0x0b1:  mov    -0x14(%ebp),%eax
085efc1a +0x0b4:  mov    %eax,(%esp)
085efc1d +0x0b7:  call   0807dcc0 <_init+0x5b8>
085efc22 +0x0bc:  mov    -0x14(%ebp),%eax
085efc25 +0x0bf:  mov    %eax,-0x10(%ebp)
085efc28 +0x0c2:  movl   $0xffffffff,0x4(%esp)
085efc30 +0x0ca:  mov    0xc(%ebp),%eax
085efc33 +0x0cd:  mov    %eax,(%esp)
085efc36 +0x0d0:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
085efc3b +0x0d5:  mov    %eax,%edx
085efc3d +0x0d7:  mov    -0x10(%ebp),%eax
085efc40 +0x0da:  mov    %edx,(%eax)
085efc42 +0x0dc:  mov    0x8(%ebp),%eax
085efc45 +0x0df:  mov    %eax,(%esp)
085efc48 +0x0e2:  call   085efeb0 <_GLOBAL__I__ZN10CQuestShopC2Ev+0x1c>  ; global constructors keyed to CQuestShop::CQuestShop()+0x1c
085efc4d +0x0e7:  mov    %eax,%edx
085efc4f +0x0e9:  mov    -0x10(%ebp),%eax
085efc52 +0x0ec:  mov    %edx,0x4(%eax)
085efc55 +0x0ef:  mov    0x8(%ebp),%eax
085efc58 +0x0f2:  mov    %eax,(%esp)
085efc5b +0x0f5:  call   085eff0a <_GLOBAL__I__ZN10CQuestShopC2Ev+0x76>  ; global constructors keyed to CQuestShop::CQuestShop()+0x76
085efc60 +0x0fa:  mov    %eax,%edx
085efc62 +0x0fc:  mov    -0x10(%ebp),%eax
085efc65 +0x0ff:  mov    %edx,0x8(%eax)
085efc68 +0x102:  mov    0x8(%ebp),%eax
085efc6b +0x105:  mov    %eax,(%esp)
085efc6e +0x108:  call   085eff44 <_GLOBAL__I__ZN10CQuestShopC2Ev+0xb0>  ; global constructors keyed to CQuestShop::CQuestShop()+0xb0
085efc73 +0x10d:  mov    %eax,%edx
085efc75 +0x10f:  mov    -0x10(%ebp),%eax
085efc78 +0x112:  mov    %edx,0xa6(%eax)
085efc7e +0x118:  mov    0x8(%ebp),%eax
085efc81 +0x11b:  lea    0x8(%eax),%edx
085efc84 +0x11e:  lea    -0x20(%ebp),%eax
085efc87 +0x121:  mov    %edx,0x4(%esp)
085efc8b +0x125:  mov    %eax,(%esp)
085efc8e +0x128:  call   08450180 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2d96>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2d96
085efc93 +0x12d:  sub    $0x4,%esp
085efc96 +0x130:  mov    0x8(%ebp),%eax
085efc99 +0x133:  lea    0x8(%eax),%edx
085efc9c +0x136:  lea    -0x24(%ebp),%eax
085efc9f +0x139:  mov    %edx,0x4(%esp)
085efca3 +0x13d:  mov    %eax,(%esp)
085efca6 +0x140:  call   0845015a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2d70>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2d70
085efcab +0x145:  sub    $0x4,%esp
085efcae +0x148:  jmp    085efd09 <+0x1a3>
085efcb0 +0x14a:  lea    -0x24(%ebp),%eax
085efcb3 +0x14d:  mov    %eax,(%esp)
085efcb6 +0x150:  call   084501ba <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2dd0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2dd0
085efcbb +0x155:  movzbl (%eax),%eax
085efcbe +0x158:  mov    %al,-0xb(%ebp)
085efcc1 +0x15b:  lea    -0x24(%ebp),%eax
085efcc4 +0x15e:  mov    %eax,(%esp)
085efcc7 +0x161:  call   084501ba <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2dd0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2dd0
085efccc +0x166:  movzwl 0x2(%eax),%eax
085efcd0 +0x16a:  mov    %ax,-0xa(%ebp)
085efcd4 +0x16e:  lea    -0x24(%ebp),%eax
085efcd7 +0x171:  mov    %eax,(%esp)
085efcda +0x174:  call   084501ba <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2dd0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2dd0
085efcdf +0x179:  movzbl (%eax),%eax
085efce2 +0x17c:  cmp    $0x4c,%al
085efce4 +0x17e:  seta   %al
085efce7 +0x181:  test   %al,%al
085efce9 +0x183:  jne    085efcfd <+0x197>
085efceb +0x185:  movzbl -0xb(%ebp),%edx
085efcef +0x189:  movzwl -0xa(%ebp),%ecx
085efcf3 +0x18d:  mov    -0x10(%ebp),%eax
085efcf6 +0x190:  mov    %cx,0xc(%eax,%edx,2)
085efcfb +0x195:  jmp    085efcfe <+0x198>
085efcfd +0x197:  nop
085efcfe +0x198:  lea    -0x24(%ebp),%eax
085efd01 +0x19b:  mov    %eax,(%esp)
085efd04 +0x19e:  call   084540e0 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6cf6>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6cf6
085efd09 +0x1a3:  lea    -0x20(%ebp),%eax
085efd0c +0x1a6:  mov    %eax,0x4(%esp)
085efd10 +0x1aa:  lea    -0x24(%ebp),%eax
085efd13 +0x1ad:  mov    %eax,(%esp)
085efd16 +0x1b0:  call   084501a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2dbc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2dbc
085efd1b +0x1b5:  test   %al,%al
085efd1d +0x1b7:  jne    085efcb0 <+0x14a>
085efd1f +0x1b9:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
085efd24 +0x1be:  lea    -0x1c(%ebp),%edx
085efd27 +0x1c1:  mov    %edx,0x8(%esp)
085efd2b +0x1c5:  movl   $0x2,0x4(%esp)
085efd33 +0x1cd:  mov    %eax,(%esp)
085efd36 +0x1d0:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
085efd3b +0x1d5:  mov    $0x1,%ebx
085efd40 +0x1da:  jmp    085efd5d <+0x1f7>
085efd42 +0x1dc:  mov    %edx,%ebx
085efd44 +0x1de:  mov    %eax,%esi
085efd46 +0x1e0:  lea    -0x1c(%ebp),%eax
085efd49 +0x1e3:  mov    %eax,(%esp)
085efd4c +0x1e6:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
085efd51 +0x1eb:  mov    %esi,%eax
085efd53 +0x1ed:  mov    %ebx,%edx
085efd55 +0x1ef:  mov    %eax,(%esp)
085efd58 +0x1f2:  call   08ae3750 <_Unwind_Resume>
085efd5d +0x1f7:  lea    -0x1c(%ebp),%eax
085efd60 +0x1fa:  mov    %eax,(%esp)
085efd63 +0x1fd:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
085efd68 +0x202:  mov    %ebx,%eax
085efd6a +0x204:  lea    -0x8(%ebp),%esp
085efd6d +0x207:  add    $0x0,%esp
085efd70 +0x20a:  pop    %ebx
085efd71 +0x20b:  pop    %esi
085efd72 +0x20c:  pop    %ebp
085efd73 +0x20d:  ret
```

## 反编译 C

```c
// CQuestShop::_saveData @ 0x85efb66

/* CQuestShop::_saveData(CUser*) */

undefined4 __thiscall CQuestShop::_saveData(CQuestShop *this,CUser *param_1)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 uVar6;
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  local_28 [4];
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  local_24 [4];
  CStreamGuard local_20 [8];
  SIG_QUEST_SHOP_DATA *local_18;
  SIG_QUEST_SHOP_DATA *local_14;
  byte local_f;
  undefined2 local_e;
  
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"QuestShop.cpp",0x21b);
  CStreamGuard::CStreamGuard(local_20,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 085efbb8 to 085efd3a has its CatchHandler @ 085efd42 */
  CStreamGuard::operator<<(pCVar3,0x279);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_20);
  CStreamGuard::operator<<(pCVar3,iVar4);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_20);
  local_18 = CStreamGuard::GetInBuffer<SIG_QUEST_SHOP_DATA>(pCVar3);
  if (local_18 == (SIG_QUEST_SHOP_DATA *)0x0) {
    uVar6 = 0;
  }
  else {
    memset(local_18,0,0x155);
    local_14 = local_18;
    uVar6 = CUser::get_charac_no(param_1,-1);
    *(undefined4 *)local_14 = uVar6;
    uVar6 = getQp(this);
    *(undefined4 *)(local_14 + 4) = uVar6;
    uVar6 = getInitCount(this);
    *(undefined4 *)(local_14 + 8) = uVar6;
    uVar6 = getPiece(this);
    *(undefined4 *)(local_14 + 0xa6) = uVar6;
    std::
    map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
    ::end(local_24);
    std::
    map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
    ::begin(local_28);
    while( true ) {
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)local_28,
                         (_Rb_tree_iterator *)local_24);
      if (cVar1 == '\0') break;
      pbVar5 = (byte *)std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->
                                 ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)
                                  local_28);
      local_f = *pbVar5;
      iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)local_28);
      local_e = *(undefined2 *)(iVar4 + 2);
      pbVar5 = (byte *)std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->
                                 ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)
                                  local_28);
      if (*pbVar5 < 0x4d) {
        *(undefined2 *)(local_14 + (uint)local_f * 2 + 0xc) = local_e;
      }
      std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)local_28);
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_20);
    uVar6 = 1;
  }
  CStreamGuard::~CStreamGuard(local_20);
  return uVar6;
}
```
