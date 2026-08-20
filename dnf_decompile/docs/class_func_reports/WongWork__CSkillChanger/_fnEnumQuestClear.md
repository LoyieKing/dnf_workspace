# _fnEnumQuestClear

`_ZN8WongWork13CSkillChanger17_fnEnumQuestClearEjPc`

`WongWork::CSkillChanger::_fnEnumQuestClear(unsigned int, char*)`

| 类 | 地址 |
|---|---|
| `WongWork::CSkillChanger` | `0x0860a6da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860a6da  _ZN8WongWork13CSkillChanger17_fnEnumQuestClearEjPc
#           WongWork::CSkillChanger::_fnEnumQuestClear(unsigned int, char*)
# range [0x0860a6da, 0x0860a867]
0860a6da +0x000:  push   %ebp
0860a6db +0x001:  mov    %esp,%ebp
0860a6dd +0x003:  push   %ebx
0860a6de +0x004:  sub    $0x54,%esp
0860a6e1 +0x007:  mov    0xc(%ebp),%eax
0860a6e4 +0x00a:  lea    0x4(%eax),%edx
0860a6e7 +0x00d:  mov    %edx,0xc(%ebp)
0860a6ea +0x010:  mov    (%eax),%eax
0860a6ec +0x012:  mov    %eax,-0x30(%ebp)
0860a6ef +0x015:  mov    0xc(%ebp),%eax
0860a6f2 +0x018:  lea    0x4(%eax),%edx
0860a6f5 +0x01b:  mov    %edx,0xc(%ebp)
0860a6f8 +0x01e:  mov    (%eax),%eax
0860a6fa +0x020:  mov    %eax,-0x2c(%ebp)
0860a6fd +0x023:  mov    0xc(%ebp),%eax
0860a700 +0x026:  lea    0x4(%eax),%edx
0860a703 +0x029:  mov    %edx,0xc(%ebp)
0860a706 +0x02c:  mov    (%eax),%eax
0860a708 +0x02e:  mov    %eax,-0x28(%ebp)
0860a70b +0x031:  mov    0xc(%ebp),%eax
0860a70e +0x034:  lea    0x4(%eax),%edx
0860a711 +0x037:  mov    %edx,0xc(%ebp)
0860a714 +0x03a:  mov    (%eax),%eax
0860a716 +0x03c:  mov    %eax,-0x24(%ebp)
0860a719 +0x03f:  mov    0xc(%ebp),%eax
0860a71c +0x042:  lea    0x4(%eax),%edx
0860a71f +0x045:  mov    %edx,0xc(%ebp)
0860a722 +0x048:  mov    (%eax),%eax
0860a724 +0x04a:  mov    %eax,-0x20(%ebp)
0860a727 +0x04d:  mov    0xc(%ebp),%eax
0860a72a +0x050:  lea    0x4(%eax),%edx
0860a72d +0x053:  mov    %edx,0xc(%ebp)
0860a730 +0x056:  mov    (%eax),%eax
0860a732 +0x058:  mov    %eax,-0x1c(%ebp)
0860a735 +0x05b:  mov    0x8(%ebp),%ebx
0860a738 +0x05e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0860a73d +0x063:  mov    %ebx,0x4(%esp)
0860a741 +0x067:  mov    %eax,(%esp)
0860a744 +0x06a:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
0860a749 +0x06f:  mov    %eax,-0x18(%ebp)
0860a74c +0x072:  cmpl   $0x0,-0x18(%ebp)
0860a750 +0x076:  jne    0860a75c <+0x82>
0860a752 +0x078:  mov    $0x1,%eax
0860a757 +0x07d:  jmp    0860a862 <+0x188>
0860a75c +0x082:  mov    -0x18(%ebp),%eax
0860a75f +0x085:  mov    0xb8(%eax),%eax
0860a765 +0x08b:  test   %eax,%eax
0860a767 +0x08d:  je     0860a781 <+0xa7>
0860a769 +0x08f:  mov    -0x18(%ebp),%eax
0860a76c +0x092:  mov    0xb8(%eax),%eax
0860a772 +0x098:  cmp    $0x19,%eax
0860a775 +0x09b:  je     0860a781 <+0xa7>
0860a777 +0x09d:  mov    $0x1,%eax
0860a77c +0x0a2:  jmp    0860a862 <+0x188>
0860a781 +0x0a7:  movl   $0x0,-0x14(%ebp)
0860a788 +0x0ae:  mov    -0x1c(%ebp),%eax
0860a78b +0x0b1:  mov    %eax,0x4(%esp)
0860a78f +0x0b5:  mov    -0x18(%ebp),%eax
0860a792 +0x0b8:  mov    %eax,(%esp)
0860a795 +0x0bb:  call   0866e914 <_ZN5CUser22getUserQuestRewardItemEPK5QuestPKS_>  ; CUser::getUserQuestRewardItem(Quest const*, CUser const*)
0860a79a +0x0c0:  mov    %eax,-0x14(%ebp)
0860a79d +0x0c3:  lea    -0x34(%ebp),%eax
0860a7a0 +0x0c6:  mov    -0x14(%ebp),%edx
0860a7a3 +0x0c9:  mov    %edx,0x4(%esp)
0860a7a7 +0x0cd:  mov    %eax,(%esp)
0860a7aa +0x0d0:  call   083ad0dc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x470a8>  ; global constructors keyed to CServerEvent::m_nExpRate+0x470a8
0860a7af +0x0d5:  sub    $0x4,%esp
0860a7b2 +0x0d8:  lea    -0x38(%ebp),%eax
0860a7b5 +0x0db:  mov    -0x14(%ebp),%edx
0860a7b8 +0x0de:  mov    %edx,0x4(%esp)
0860a7bc +0x0e2:  mov    %eax,(%esp)
0860a7bf +0x0e5:  call   083ad108 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x470d4>  ; global constructors keyed to CServerEvent::m_nExpRate+0x470d4
0860a7c4 +0x0ea:  sub    $0x4,%esp
0860a7c7 +0x0ed:  jmp    0860a843 <+0x169>
0860a7c9 +0x0ef:  lea    -0x34(%ebp),%eax
0860a7cc +0x0f2:  mov    %eax,(%esp)
0860a7cf +0x0f5:  call   0839496e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2440e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2440e
0860a7d4 +0x0fa:  mov    (%eax),%eax
0860a7d6 +0x0fc:  mov    %eax,-0x10(%ebp)
0860a7d9 +0x0ff:  lea    -0x34(%ebp),%eax
0860a7dc +0x102:  mov    %eax,(%esp)
0860a7df +0x105:  call   0839496e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2440e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2440e
0860a7e4 +0x10a:  mov    0x4(%eax),%eax
0860a7e7 +0x10d:  mov    %eax,-0xc(%ebp)
0860a7ea +0x110:  mov    -0xc(%ebp),%eax
0860a7ed +0x113:  mov    %eax,0x10(%esp)
0860a7f1 +0x117:  mov    -0x10(%ebp),%eax
0860a7f4 +0x11a:  mov    %eax,0xc(%esp)
0860a7f8 +0x11e:  mov    -0x2c(%ebp),%eax
0860a7fb +0x121:  mov    %eax,0x8(%esp)
0860a7ff +0x125:  mov    -0x30(%ebp),%eax
0860a802 +0x128:  mov    %eax,0x4(%esp)
0860a806 +0x12c:  mov    -0x20(%ebp),%eax
0860a809 +0x12f:  mov    %eax,(%esp)
0860a80c +0x132:  call   0860a868 <_ZN8WongWork13CSkillChanger17_addSPRelatedItemEPiS1_ii>  ; WongWork::CSkillChanger::_addSPRelatedItem(int*, int*, int, int)
0860a811 +0x137:  mov    -0xc(%ebp),%eax
0860a814 +0x13a:  mov    %eax,0x10(%esp)
0860a818 +0x13e:  mov    -0x10(%ebp),%eax
0860a81b +0x141:  mov    %eax,0xc(%esp)
0860a81f +0x145:  mov    -0x24(%ebp),%eax
0860a822 +0x148:  mov    %eax,0x8(%esp)
0860a826 +0x14c:  mov    -0x28(%ebp),%eax
0860a829 +0x14f:  mov    %eax,0x4(%esp)
0860a82d +0x153:  mov    -0x20(%ebp),%eax
0860a830 +0x156:  mov    %eax,(%esp)
0860a833 +0x159:  call   0860a918 <_ZN8WongWork13CSkillChanger18_addSFPRelatedItemEPiS1_ii>  ; WongWork::CSkillChanger::_addSFPRelatedItem(int*, int*, int, int)
0860a838 +0x15e:  lea    -0x34(%ebp),%eax
0860a83b +0x161:  mov    %eax,(%esp)
0860a83e +0x164:  call   08394958 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x243f8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x243f8
0860a843 +0x169:  lea    -0x38(%ebp),%eax
0860a846 +0x16c:  mov    %eax,0x4(%esp)
0860a84a +0x170:  lea    -0x34(%ebp),%eax
0860a84d +0x173:  mov    %eax,(%esp)
0860a850 +0x176:  call   083e5e57 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x7fe23>  ; global constructors keyed to CServerEvent::m_nExpRate+0x7fe23
0860a855 +0x17b:  test   %al,%al
0860a857 +0x17d:  jne    0860a7c9 <+0xef>
0860a85d +0x183:  mov    $0x1,%eax
0860a862 +0x188:  mov    -0x4(%ebp),%ebx
0860a865 +0x18b:  leave
0860a866 +0x18c:  ret
0860a867 +0x18d:  nop
```

## 反编译 C

```c
// WongWork::CSkillChanger::_fnEnumQuestClear @ 0x860a6da

/* WongWork::CSkillChanger::_fnEnumQuestClear(unsigned int, char*) */

undefined4 WongWork::CSkillChanger::_fnEnumQuestClear(uint param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  __normal_iterator local_3c [4];
  __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
  local_38 [4];
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  CSkillChanger *local_24;
  CUser *local_20;
  Quest *local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  
  local_34 = *(int **)param_2;
  local_30 = *(int **)(param_2 + 4);
  local_2c = *(int **)(param_2 + 8);
  local_28 = *(int **)(param_2 + 0xc);
  local_24 = *(CSkillChanger **)(param_2 + 0x10);
  local_20 = *(CUser **)(param_2 + 0x14);
  iVar2 = G_CDataManager();
  local_1c = (Quest *)CDataManager::find_quest(iVar2);
  if ((local_1c != (Quest *)0x0) &&
     ((*(int *)(local_1c + 0xb8) == 0 || (*(int *)(local_1c + 0xb8) == 0x19)))) {
    local_18 = 0;
    local_18 = CUser::getUserQuestRewardItem(local_1c,local_20);
    std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::begin();
    std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::end();
    while (bVar1 = __gnu_cxx::operator!=(local_38,local_3c), bVar1) {
      piVar3 = (int *)__gnu_cxx::
                      __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
                      ::operator->(local_38);
      local_14 = *piVar3;
      iVar2 = __gnu_cxx::
              __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
              ::operator->(local_38);
      local_10 = *(int *)(iVar2 + 4);
      _addSPRelatedItem(local_24,local_34,local_30,local_14,local_10);
      _addSFPRelatedItem(local_24,local_2c,local_28,local_14,local_10);
      __gnu_cxx::
      __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
      ::operator++(local_38);
    }
  }
  return 1;
}
```
