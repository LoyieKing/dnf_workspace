# GetSuccessRate

`_ZN10expert_job10CExpertJob14GetSuccessRateEP5CUserPK14CStackableItemRi`

`expert_job::CExpertJob::GetSuccessRate(CUser*, CStackableItem const*, int&)`

| 类 | 地址 |
|---|---|
| `expert_job::CExpertJob` | `0x0849b2e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849b2e8  _ZN10expert_job10CExpertJob14GetSuccessRateEP5CUserPK14CStackableItemRi
#           expert_job::CExpertJob::GetSuccessRate(CUser*, CStackableItem const*, int&)
# range [0x0849b2e8, 0x0849b461]
0849b2e8 +0x000:  push   %ebp
0849b2e9 +0x001:  mov    %esp,%ebp
0849b2eb +0x003:  push   %ebx
0849b2ec +0x004:  sub    $0x44,%esp
0849b2ef +0x007:  movl   $0x0,-0x1c(%ebp)
0849b2f6 +0x00e:  mov    0x10(%ebp),%eax
0849b2f9 +0x011:  movl   $0x0,(%eax)
0849b2ff +0x017:  mov    0x8(%ebp),%eax
0849b302 +0x01a:  mov    %eax,(%esp)
0849b305 +0x01d:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
0849b30a +0x022:  mov    %eax,%ebx
0849b30c +0x024:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0849b311 +0x029:  mov    %ebx,0x4(%esp)
0849b315 +0x02d:  mov    %eax,(%esp)
0849b318 +0x030:  call   0822b5f2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9c
0849b31d +0x035:  mov    %eax,-0x18(%ebp)
0849b320 +0x038:  cmpl   $0x0,-0x18(%ebp)
0849b324 +0x03c:  jne    0849b330 <+0x48>
0849b326 +0x03e:  mov    $0x0,%eax
0849b32b +0x043:  jmp    0849b45d <+0x175>
0849b330 +0x048:  mov    0xc(%ebp),%eax
0849b333 +0x04b:  mov    %eax,(%esp)
0849b336 +0x04e:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
0849b33b +0x053:  mov    %eax,-0x24(%ebp)
0849b33e +0x056:  mov    -0x18(%ebp),%eax
0849b341 +0x059:  lea    0x230(%eax),%ecx
0849b347 +0x05f:  lea    -0x28(%ebp),%eax
0849b34a +0x062:  lea    -0x24(%ebp),%edx
0849b34d +0x065:  mov    %edx,0x8(%esp)
0849b351 +0x069:  mov    %ecx,0x4(%esp)
0849b355 +0x06d:  mov    %eax,(%esp)
0849b358 +0x070:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
0849b35d +0x075:  sub    $0x4,%esp
0849b360 +0x078:  mov    -0x18(%ebp),%eax
0849b363 +0x07b:  lea    0x230(%eax),%edx
0849b369 +0x081:  lea    -0x20(%ebp),%eax
0849b36c +0x084:  mov    %edx,0x4(%esp)
0849b370 +0x088:  mov    %eax,(%esp)
0849b373 +0x08b:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0849b378 +0x090:  sub    $0x4,%esp
0849b37b +0x093:  lea    -0x20(%ebp),%eax
0849b37e +0x096:  mov    %eax,0x4(%esp)
0849b382 +0x09a:  lea    -0x28(%ebp),%eax
0849b385 +0x09d:  mov    %eax,(%esp)
0849b388 +0x0a0:  call   080c78f0 <_GLOBAL__I_g_ServerString_+0xe5b>  ; global constructors keyed to g_ServerString_+0xe5b
0849b38d +0x0a5:  test   %al,%al
0849b38f +0x0a7:  je     0849b39b <+0xb3>
0849b391 +0x0a9:  mov    $0x0,%eax
0849b396 +0x0ae:  jmp    0849b45d <+0x175>
0849b39b +0x0b3:  lea    -0x28(%ebp),%eax
0849b39e +0x0b6:  mov    %eax,(%esp)
0849b3a1 +0x0b9:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0849b3a6 +0x0be:  mov    0x4(%eax),%ebx
0849b3a9 +0x0c1:  mov    0x8(%ebp),%eax
0849b3ac +0x0c4:  mov    %eax,(%esp)
0849b3af +0x0c7:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
0849b3b4 +0x0cc:  mov    %eax,0x4(%esp)
0849b3b8 +0x0d0:  mov    0x8(%ebp),%eax
0849b3bb +0x0d3:  mov    %eax,(%esp)
0849b3be +0x0d6:  call   0868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>  ; CUser::GetCurExpertJobLevel(int)
0849b3c3 +0x0db:  mov    %ebx,%edx
0849b3c5 +0x0dd:  sub    %eax,%edx
0849b3c7 +0x0df:  mov    %edx,%eax
0849b3c9 +0x0e1:  mov    %eax,-0x1c(%ebp)
0849b3cc +0x0e4:  mov    -0x1c(%ebp),%eax
0849b3cf +0x0e7:  mov    %eax,0x4(%esp)
0849b3d3 +0x0eb:  mov    -0x18(%ebp),%eax
0849b3d6 +0x0ee:  mov    %eax,(%esp)
0849b3d9 +0x0f1:  call   0849f366 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x197>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x197
0849b3de +0x0f6:  mov    %eax,-0x14(%ebp)
0849b3e1 +0x0f9:  cmpl   $0x0,-0x14(%ebp)
0849b3e5 +0x0fd:  jne    0849b3ee <+0x106>
0849b3e7 +0x0ff:  mov    $0x0,%eax
0849b3ec +0x104:  jmp    0849b45d <+0x175>
0849b3ee +0x106:  mov    0x8(%ebp),%eax
0849b3f1 +0x109:  mov    %eax,(%esp)
0849b3f4 +0x10c:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0849b3f9 +0x111:  mov    %eax,-0x10(%ebp)
0849b3fc +0x114:  mov    0x8(%ebp),%eax
0849b3ff +0x117:  mov    %eax,(%esp)
0849b402 +0x11a:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
0849b407 +0x11f:  mov    %eax,0x4(%esp)
0849b40b +0x123:  mov    0x8(%ebp),%eax
0849b40e +0x126:  mov    %eax,(%esp)
0849b411 +0x129:  call   0868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>  ; CUser::GetCurExpertJobLevel(int)
0849b416 +0x12e:  mov    %eax,%ebx
0849b418 +0x130:  mov    0x8(%ebp),%eax
0849b41b +0x133:  mov    %eax,(%esp)
0849b41e +0x136:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
0849b423 +0x13b:  mov    %ebx,0x8(%esp)
0849b427 +0x13f:  mov    %eax,0x4(%esp)
0849b42b +0x143:  mov    -0x10(%ebp),%eax
0849b42e +0x146:  mov    %eax,(%esp)
0849b431 +0x149:  call   0850c95a <_ZNK10CInventory33GetExpertJobCompoundRateVariationE20ENUM_EXPERT_JOB_TYPEi>  ; CInventory::GetExpertJobCompoundRateVariation(ENUM_EXPERT_JOB_TYPE, int) const
0849b436 +0x14e:  fstps  -0xc(%ebp)
0849b439 +0x151:  flds   -0xc(%ebp)
0849b43c +0x154:  fnstcw -0x2a(%ebp)
0849b43f +0x157:  movzwl -0x2a(%ebp),%eax
0849b443 +0x15b:  mov    $0xc,%ah
0849b445 +0x15d:  mov    %ax,-0x2c(%ebp)
0849b449 +0x161:  fldcw  -0x2c(%ebp)
0849b44c +0x164:  fistpl -0x30(%ebp)
0849b44f +0x167:  fldcw  -0x2a(%ebp)
0849b452 +0x16a:  mov    -0x30(%ebp),%edx
0849b455 +0x16d:  mov    0x10(%ebp),%eax
0849b458 +0x170:  mov    %edx,(%eax)
0849b45a +0x172:  mov    -0x14(%ebp),%eax
0849b45d +0x175:  mov    -0x4(%ebp),%ebx
0849b460 +0x178:  leave
0849b461 +0x179:  ret
```

## 反编译 C

```c
// expert_job::CExpertJob::GetSuccessRate @ 0x849b2e8

/* expert_job::CExpertJob::GetSuccessRate(CUser*, CStackableItem const*, int&) */

int expert_job::CExpertJob::GetSuccessRate(CUser *param_1,CStackableItem *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longdouble lVar6;
  _Rb_tree_iterator<std::pair<int_const,int>> local_2c [4];
  undefined4 local_28;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_24 [4];
  int local_20;
  STExpertJobScript *local_1c;
  int local_18;
  CInventory *local_14;
  
  local_20 = 0;
  *param_3 = 0;
  CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
  iVar2 = G_CDataManager();
  local_1c = (STExpertJobScript *)CDataManager::GetExpertJobScript(iVar2);
  if (local_1c == (STExpertJobScript *)0x0) {
    local_18 = 0;
  }
  else {
    local_28 = CItem::get_index((CItem *)param_2);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_2c)
    ;
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_24);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                      (local_2c,(_Rb_tree_iterator *)local_24);
    if (cVar1 == '\0') {
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_2c);
      iVar2 = *(int *)(iVar2 + 4);
      iVar3 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)param_1);
      local_20 = CUser::GetCurExpertJobLevel(param_1,iVar3);
      local_20 = iVar2 - local_20;
      local_18 = STExpertJobScript::GetCompoundRate(local_1c,local_20);
      if (local_18 == 0) {
        local_18 = 0;
      }
      else {
        local_14 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        iVar2 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)param_1);
        uVar4 = CUser::GetCurExpertJobLevel(param_1,iVar2);
        uVar5 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
        lVar6 = (longdouble)CInventory::GetExpertJobCompoundRateVariation(local_14,uVar5,uVar4);
        *param_3 = (int)ROUND((float)lVar6);
      }
    }
    else {
      local_18 = 0;
    }
  }
  return local_18;
}
```
