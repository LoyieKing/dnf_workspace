# OnUseStackableItem

`_ZN10expert_job10CAlchemist18OnUseStackableItemEP5CUsermPK5CItem`

`expert_job::CAlchemist::OnUseStackableItem(CUser*, unsigned long, CItem const*)`

| 类 | 地址 |
|---|---|
| `expert_job::CAlchemist` | `0x085d1712` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d1712  _ZN10expert_job10CAlchemist18OnUseStackableItemEP5CUsermPK5CItem
#           expert_job::CAlchemist::OnUseStackableItem(CUser*, unsigned long, CItem const*)
# range [0x085d1712, 0x085d18ad]
085d1712 +0x000:  push   %ebp
085d1713 +0x001:  mov    %esp,%ebp
085d1715 +0x003:  push   %ebx
085d1716 +0x004:  sub    $0x24,%esp
085d1719 +0x007:  mov    0x10(%ebp),%eax
085d171c +0x00a:  mov    %eax,(%esp)
085d171f +0x00d:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
085d1724 +0x012:  test   %al,%al
085d1726 +0x014:  je     085d185c <+0x14a>
085d172c +0x01a:  mov    0x10(%ebp),%eax
085d172f +0x01d:  mov    (%eax),%eax
085d1731 +0x01f:  add    $0xc,%eax
085d1734 +0x022:  mov    (%eax),%edx
085d1736 +0x024:  mov    0x10(%ebp),%eax
085d1739 +0x027:  mov    %eax,(%esp)
085d173c +0x02a:  call   *%edx
085d173e +0x02c:  cmp    $0x3,%eax
085d1741 +0x02f:  jne    085d1758 <+0x46>
085d1743 +0x031:  mov    0x10(%ebp),%eax
085d1746 +0x034:  movzbl 0x199(%eax),%eax
085d174d +0x03b:  test   %al,%al
085d174f +0x03d:  je     085d1758 <+0x46>
085d1751 +0x03f:  mov    $0x1,%eax
085d1756 +0x044:  jmp    085d175d <+0x4b>
085d1758 +0x046:  mov    $0x0,%eax
085d175d +0x04b:  test   %al,%al
085d175f +0x04d:  je     085d1807 <+0xf5>
085d1765 +0x053:  mov    0x8(%ebp),%eax
085d1768 +0x056:  mov    %eax,(%esp)
085d176b +0x059:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
085d1770 +0x05e:  mov    %eax,%ebx
085d1772 +0x060:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085d1777 +0x065:  mov    %ebx,0x4(%esp)
085d177b +0x069:  mov    %eax,(%esp)
085d177e +0x06c:  call   0822b5f2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9c
085d1783 +0x071:  mov    %eax,-0xc(%ebp)
085d1786 +0x074:  cmpl   $0x0,-0xc(%ebp)
085d178a +0x078:  je     085d1807 <+0xf5>
085d178c +0x07a:  mov    0x8(%ebp),%eax
085d178f +0x07d:  mov    %eax,(%esp)
085d1792 +0x080:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
085d1797 +0x085:  mov    %eax,0x4(%esp)
085d179b +0x089:  mov    0x8(%ebp),%eax
085d179e +0x08c:  mov    %eax,(%esp)
085d17a1 +0x08f:  call   0868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>  ; CUser::GetCurExpertJobLevel(int)
085d17a6 +0x094:  mov    %eax,%ebx
085d17a8 +0x096:  movl   $0x0,0x4(%esp)
085d17b0 +0x09e:  mov    0x8(%ebp),%eax
085d17b3 +0x0a1:  mov    %eax,(%esp)
085d17b6 +0x0a4:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085d17bb +0x0a9:  mov    %ebx,0xc(%esp)
085d17bf +0x0ad:  mov    -0xc(%ebp),%edx
085d17c2 +0x0b0:  mov    %edx,0x8(%esp)
085d17c6 +0x0b4:  mov    0xc(%ebp),%edx
085d17c9 +0x0b7:  mov    %edx,0x4(%esp)
085d17cd +0x0bb:  mov    %eax,(%esp)
085d17d0 +0x0be:  call   0832b3c0 <_ZN10expert_job16CCharacExpertJob11learnRecipeEmP17STExpertJobScripti>  ; expert_job::CCharacExpertJob::learnRecipe(unsigned long, STExpertJobScript*, int)
085d17d5 +0x0c3:  test   %al,%al
085d17d7 +0x0c5:  je     085d17fd <+0xeb>
085d17d9 +0x0c7:  movl   $0x0,0x4(%esp)
085d17e1 +0x0cf:  mov    0x8(%ebp),%eax
085d17e4 +0x0d2:  mov    %eax,(%esp)
085d17e7 +0x0d5:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085d17ec +0x0da:  mov    0x8(%ebp),%edx
085d17ef +0x0dd:  mov    %edx,0x4(%esp)
085d17f3 +0x0e1:  mov    %eax,(%esp)
085d17f6 +0x0e4:  call   0832b454 <_ZN10expert_job16CCharacExpertJob17SendExpertJobInfoEP5CUser>  ; expert_job::CCharacExpertJob::SendExpertJobInfo(CUser*)
085d17fb +0x0e9:  jmp    085d1807 <+0xf5>
085d17fd +0x0eb:  mov    $0xd,%eax
085d1802 +0x0f0:  jmp    085d18a8 <+0x196>
085d1807 +0x0f5:  mov    0x10(%ebp),%eax
085d180a +0x0f8:  mov    %eax,(%esp)
085d180d +0x0fb:  call   0822c9d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x207c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x207c
085d1812 +0x100:  cmp    $0x2,%eax
085d1815 +0x103:  sete   %al
085d1818 +0x106:  test   %al,%al
085d181a +0x108:  je     085d185c <+0x14a>
085d181c +0x10a:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085d1823 +0x111:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
085d1828 +0x116:  mov    %eax,%ebx
085d182a +0x118:  mov    0x10(%ebp),%eax
085d182d +0x11b:  mov    0x2d0(%eax),%ecx
085d1833 +0x121:  mov    $0x10624dd3,%edx
085d1838 +0x126:  mov    %ecx,%eax
085d183a +0x128:  imul   %edx
085d183c +0x12a:  sar    $0x6,%edx
085d183f +0x12d:  mov    %ecx,%eax
085d1841 +0x12f:  sar    $0x1f,%eax
085d1844 +0x132:  mov    %edx,%ecx
085d1846 +0x134:  sub    %eax,%ecx
085d1848 +0x136:  mov    %ecx,%eax
085d184a +0x138:  lea    (%ebx,%eax,1),%eax
085d184d +0x13b:  mov    %eax,0x4(%esp)
085d1851 +0x13f:  mov    0x8(%ebp),%eax
085d1854 +0x142:  mov    %eax,(%esp)
085d1857 +0x145:  call   0814aa9a <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x839>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x839
085d185c +0x14a:  mov    0xc(%ebp),%eax
085d185f +0x14d:  cmp    $0x28e7cf,%eax
085d1864 +0x152:  je     085d188b <+0x179>
085d1866 +0x154:  cmp    $0x28e7cf,%eax
085d186b +0x159:  ja     085d187d <+0x16b>
085d186d +0x15b:  cmp    $0x27ac54,%eax
085d1872 +0x160:  je     085d188b <+0x179>
085d1874 +0x162:  cmp    $0x27acda,%eax
085d1879 +0x167:  je     085d1898 <+0x186>
085d187b +0x169:  jmp    085d18a3 <+0x191>
085d187d +0x16b:  cmp    $0x29f287,%eax
085d1882 +0x170:  je     085d188b <+0x179>
085d1884 +0x172:  cmp    $0x29f2ed,%eax
085d1889 +0x177:  jne    085d18a3 <+0x191>
085d188b +0x179:  mov    0x8(%ebp),%eax
085d188e +0x17c:  mov    %eax,(%esp)
085d1891 +0x17f:  call   085d1694 <_ZN10expert_job10CAlchemist14UseRevivalItemEP5CUser>  ; expert_job::CAlchemist::UseRevivalItem(CUser*)
085d1896 +0x184:  jmp    085d18a3 <+0x191>
085d1898 +0x186:  mov    0x8(%ebp),%eax
085d189b +0x189:  mov    %eax,(%esp)
085d189e +0x18c:  call   085d18ae <_ZN10expert_job10CAlchemist10UseDelilahEP5CUser>  ; expert_job::CAlchemist::UseDelilah(CUser*)
085d18a3 +0x191:  mov    $0x0,%eax
085d18a8 +0x196:  add    $0x24,%esp
085d18ab +0x199:  pop    %ebx
085d18ac +0x19a:  pop    %ebp
085d18ad +0x19b:  ret
```

## 反编译 C

```c
// expert_job::CAlchemist::OnUseStackableItem @ 0x85d1712

/* expert_job::CAlchemist::OnUseStackableItem(CUser*, unsigned long, CItem const*) */

undefined4 expert_job::CAlchemist::OnUseStackableItem(CUser *param_1,ulong param_2,CItem *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  STExpertJobScript *pSVar4;
  CCharacExpertJob *pCVar5;
  
  cVar2 = CItem::is_stackable(param_3);
  if (cVar2 != '\0') {
    iVar3 = (**(code **)(*(int *)param_3 + 0xc))(param_3);
    if ((iVar3 == 3) && (param_3[0x199] != (CItem)0x0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
      iVar3 = G_CDataManager();
      pSVar4 = (STExpertJobScript *)CDataManager::GetExpertJobScript(iVar3);
      if (pSVar4 != (STExpertJobScript *)0x0) {
        iVar3 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)param_1);
        iVar3 = CUser::GetCurExpertJobLevel(param_1,iVar3);
        pCVar5 = (CCharacExpertJob *)CUser::GetCharacExpandData(param_1,0);
        cVar2 = CCharacExpertJob::learnRecipe(pCVar5,param_2,pSVar4,iVar3);
        if (cVar2 == '\0') {
          return 0xd;
        }
        pCVar5 = (CCharacExpertJob *)CUser::GetCharacExpandData(param_1,0);
        CCharacExpertJob::SendExpertJobInfo(pCVar5,param_1);
      }
    }
    iVar3 = CStackableItem::get_sub_type((CStackableItem *)param_3);
    if (iVar3 == 2) {
      iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      CUser::SetUseAPCPotionTime(param_1,iVar3 + *(int *)(param_3 + 0x2d0) / 1000);
    }
  }
  if (param_2 != 0x28e7cf) {
    if (param_2 < 0x28e7d0) {
      if (param_2 != 0x27ac54) {
        if (param_2 != 0x27acda) {
          return 0;
        }
        UseDelilah(param_1);
        return 0;
      }
    }
    else if ((param_2 != 0x29f287) && (param_2 != 0x29f2ed)) {
      return 0;
    }
  }
  UseRevivalItem(param_1);
  return 0;
}
```
