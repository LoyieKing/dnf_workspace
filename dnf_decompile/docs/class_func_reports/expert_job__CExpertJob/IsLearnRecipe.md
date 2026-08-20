# IsLearnRecipe

`_ZN10expert_job10CExpertJob13IsLearnRecipeEP5CUserPK14CStackableItem`

`expert_job::CExpertJob::IsLearnRecipe(CUser*, CStackableItem const*)`

| 类 | 地址 |
|---|---|
| `expert_job::CExpertJob` | `0x0849b590` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849b590  _ZN10expert_job10CExpertJob13IsLearnRecipeEP5CUserPK14CStackableItem
#           expert_job::CExpertJob::IsLearnRecipe(CUser*, CStackableItem const*)
# range [0x0849b590, 0x0849b733]
0849b590 +0x000:  push   %ebp
0849b591 +0x001:  mov    %esp,%ebp
0849b593 +0x003:  push   %ebx
0849b594 +0x004:  sub    $0x54,%esp
0849b597 +0x007:  mov    0x8(%ebp),%eax
0849b59a +0x00a:  mov    %eax,(%esp)
0849b59d +0x00d:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
0849b5a2 +0x012:  mov    %eax,%ebx
0849b5a4 +0x014:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0849b5a9 +0x019:  mov    %ebx,0x4(%esp)
0849b5ad +0x01d:  mov    %eax,(%esp)
0849b5b0 +0x020:  call   0822b5f2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9c
0849b5b5 +0x025:  mov    %eax,-0x10(%ebp)
0849b5b8 +0x028:  cmpl   $0x0,-0x10(%ebp)
0849b5bc +0x02c:  jne    0849b60f <+0x7f>
0849b5be +0x02e:  mov    0x8(%ebp),%eax
0849b5c1 +0x031:  mov    %eax,(%esp)
0849b5c4 +0x034:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0849b5c9 +0x039:  mov    %eax,%ebx
0849b5cb +0x03b:  movl   $0x0,0xc(%esp)
0849b5d3 +0x043:  movl   $0x13f,0x8(%esp)
0849b5db +0x04b:  movl   $&_ZZN10expert_job10CExpertJob13IsLearnRecipeEP5CUserPK14CStackableItemE19__PRETTY_FUNCTION__,0x4(%esp)
0849b5e3 +0x053:  lea    -0x40(%ebp),%eax
0849b5e6 +0x056:  mov    %eax,(%esp)
0849b5e9 +0x059:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0849b5ee +0x05e:  mov    %ebx,0x8(%esp)
0849b5f2 +0x062:  movl   $"EXPERT_JOB_ERROR : GetExpertJobScript() charac_no(%d)",0x4(%esp)
0849b5fa +0x06a:  lea    -0x40(%ebp),%eax
0849b5fd +0x06d:  mov    %eax,(%esp)
0849b600 +0x070:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0849b605 +0x075:  mov    $0x0,%eax
0849b60a +0x07a:  jmp    0849b72e <+0x19e>
0849b60f +0x07f:  movl   $0xffffffff,-0xc(%ebp)
0849b616 +0x086:  mov    0xc(%ebp),%eax
0849b619 +0x089:  mov    %eax,(%esp)
0849b61c +0x08c:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
0849b621 +0x091:  mov    %eax,0x4(%esp)
0849b625 +0x095:  mov    -0x10(%ebp),%eax
0849b628 +0x098:  mov    %eax,(%esp)
0849b62b +0x09b:  call   0832b726 <_GLOBAL__I__ZN10expert_job16CCharacExpertJob6_resetEv+0x8c>  ; global constructors keyed to expert_job::CCharacExpertJob::_reset()+0x8c
0849b630 +0x0a0:  mov    %eax,-0xc(%ebp)
0849b633 +0x0a3:  mov    -0xc(%ebp),%eax
0849b636 +0x0a6:  shr    $0x1f,%eax
0849b639 +0x0a9:  test   %al,%al
0849b63b +0x0ab:  je     0849b68e <+0xfe>
0849b63d +0x0ad:  mov    0x8(%ebp),%eax
0849b640 +0x0b0:  mov    %eax,(%esp)
0849b643 +0x0b3:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0849b648 +0x0b8:  mov    %eax,%ebx
0849b64a +0x0ba:  movl   $0x0,0xc(%esp)
0849b652 +0x0c2:  movl   $0x146,0x8(%esp)
0849b65a +0x0ca:  movl   $&_ZZN10expert_job10CExpertJob13IsLearnRecipeEP5CUserPK14CStackableItemE19__PRETTY_FUNCTION__,0x4(%esp)
0849b662 +0x0d2:  lea    -0x30(%ebp),%eax
0849b665 +0x0d5:  mov    %eax,(%esp)
0849b668 +0x0d8:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0849b66d +0x0dd:  mov    %ebx,0x8(%esp)
0849b671 +0x0e1:  movl   $"EXPERT_JOB_ERROR : GetRecipeInfoIndex() charac_no(%d)",0x4(%esp)
0849b679 +0x0e9:  lea    -0x30(%ebp),%eax
0849b67c +0x0ec:  mov    %eax,(%esp)
0849b67f +0x0ef:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0849b684 +0x0f4:  mov    $0x0,%eax
0849b689 +0x0f9:  jmp    0849b72e <+0x19e>
0849b68e +0x0fe:  movl   $0x0,0x4(%esp)
0849b696 +0x106:  mov    0x8(%ebp),%eax
0849b699 +0x109:  mov    %eax,(%esp)
0849b69c +0x10c:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0849b6a1 +0x111:  mov    -0xc(%ebp),%edx
0849b6a4 +0x114:  mov    %edx,0x4(%esp)
0849b6a8 +0x118:  mov    %eax,(%esp)
0849b6ab +0x11b:  call   0832b306 <_ZNK10expert_job16CCharacExpertJob10get_recipeEi>  ; expert_job::CCharacExpertJob::get_recipe(int) const
0849b6b0 +0x120:  xor    $0x1,%eax
0849b6b3 +0x123:  test   %al,%al
0849b6b5 +0x125:  je     0849b729 <+0x199>
0849b6b7 +0x127:  mov    0x8(%ebp),%eax
0849b6ba +0x12a:  mov    %eax,(%esp)
0849b6bd +0x12d:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0849b6c2 +0x132:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%edx
0849b6c8 +0x138:  mov    %eax,0x4(%esp)
0849b6cc +0x13c:  mov    %edx,(%esp)
0849b6cf +0x13f:  call   08109346 <_ZN8WongWork11CGMAccounts4isGMEj>  ; WongWork::CGMAccounts::isGM(unsigned int)
0849b6d4 +0x144:  xor    $0x1,%eax
0849b6d7 +0x147:  test   %al,%al
0849b6d9 +0x149:  je     0849b729 <+0x199>
0849b6db +0x14b:  mov    0x8(%ebp),%eax
0849b6de +0x14e:  mov    %eax,(%esp)
0849b6e1 +0x151:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0849b6e6 +0x156:  mov    %eax,%ebx
0849b6e8 +0x158:  movl   $0x0,0xc(%esp)
0849b6f0 +0x160:  movl   $0x14e,0x8(%esp)
0849b6f8 +0x168:  movl   $&_ZZN10expert_job10CExpertJob13IsLearnRecipeEP5CUserPK14CStackableItemE19__PRETTY_FUNCTION__,0x4(%esp)
0849b700 +0x170:  lea    -0x20(%ebp),%eax
0849b703 +0x173:  mov    %eax,(%esp)
0849b706 +0x176:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0849b70b +0x17b:  mov    %ebx,0x8(%esp)
0849b70f +0x17f:  movl   $"EXPERT_JOB_ERROR : get_recipe() charac_no(%d)",0x4(%esp)
0849b717 +0x187:  lea    -0x20(%ebp),%eax
0849b71a +0x18a:  mov    %eax,(%esp)
0849b71d +0x18d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0849b722 +0x192:  mov    $0x0,%eax
0849b727 +0x197:  jmp    0849b72e <+0x19e>
0849b729 +0x199:  mov    $0x1,%eax
0849b72e +0x19e:  add    $0x54,%esp
0849b731 +0x1a1:  pop    %ebx
0849b732 +0x1a2:  pop    %ebp
0849b733 +0x1a3:  ret
```

## 反编译 C

```c
// expert_job::CExpertJob::IsLearnRecipe @ 0x849b590

/* expert_job::CExpertJob::IsLearnRecipe(CUser*, CStackableItem const*) */

undefined4 expert_job::CExpertJob::IsLearnRecipe(CUser *param_1,CStackableItem *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CCharacExpertJob *this;
  uint uVar4;
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  ulong local_14;
  int local_10;
  
  CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
  iVar2 = G_CDataManager();
  local_14 = CDataManager::GetExpertJobScript(iVar2);
  if (local_14 == 0) {
    uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    cMyTrace::cMyTrace(local_44,
                       "static bool expert_job::CExpertJob::IsLearnRecipe(CUser*, const CStackableItem*)"
                       ,0x13f,0);
    cMyTrace::operator()(local_44,"EXPERT_JOB_ERROR : GetExpertJobScript() charac_no(%d)",uVar3);
    uVar3 = 0;
  }
  else {
    local_10 = 0xffffffff;
    CItem::get_index((CItem *)param_2);
    local_10 = STExpertJobScript::GetRecipeInfoIndex(local_14);
    if (local_10 < 0) {
      uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      cMyTrace::cMyTrace(local_34,
                         "static bool expert_job::CExpertJob::IsLearnRecipe(CUser*, const CStackableItem*)"
                         ,0x146,0);
      cMyTrace::operator()(local_34,"EXPERT_JOB_ERROR : GetRecipeInfoIndex() charac_no(%d)",uVar3);
      uVar3 = 0;
    }
    else {
      this = (CCharacExpertJob *)CUser::GetCharacExpandData(param_1,0);
      cVar1 = CCharacExpertJob::get_recipe(this,local_10);
      if (cVar1 != '\x01') {
        uVar4 = CUser::get_acc_id(param_1);
        cVar1 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,uVar4);
        if (cVar1 != '\x01') {
          uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          cMyTrace::cMyTrace(local_24,
                             "static bool expert_job::CExpertJob::IsLearnRecipe(CUser*, const CStackableItem*)"
                             ,0x14e,0);
          cMyTrace::operator()(local_24,"EXPERT_JOB_ERROR : get_recipe() charac_no(%d)",uVar3);
          return 0;
        }
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}
```
