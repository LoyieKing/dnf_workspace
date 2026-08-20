# get_useJobFatigueMatchGift

`_ZN12CDataManager26get_useJobFatigueMatchGiftEcii`

`CDataManager::get_useJobFatigueMatchGift(char, int, int)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x0836580e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0836580e  _ZN12CDataManager26get_useJobFatigueMatchGiftEcii
#           CDataManager::get_useJobFatigueMatchGift(char, int, int)
# range [0x0836580e, 0x0836598d]
0836580e +0x000:  push   %ebp
0836580f +0x001:  mov    %esp,%ebp
08365811 +0x003:  sub    $0x58,%esp
08365814 +0x006:  mov    0xc(%ebp),%eax
08365817 +0x009:  mov    %al,-0x3c(%ebp)
0836581a +0x00c:  mov    0x14(%ebp),%eax
0836581d +0x00f:  mov    0x10(%ebp),%edx
08365820 +0x012:  mov    %edx,%ecx
08365822 +0x014:  sub    %eax,%ecx
08365824 +0x016:  mov    %ecx,%eax
08365826 +0x018:  mov    %eax,-0x20(%ebp)
08365829 +0x01b:  movsbl -0x3c(%ebp),%eax
0836582d +0x01f:  mov    %eax,-0x1c(%ebp)
08365830 +0x022:  mov    0x8(%ebp),%eax
08365833 +0x025:  lea    0x4bec(%eax),%ecx
08365839 +0x02b:  lea    -0x24(%ebp),%eax
0836583c +0x02e:  lea    -0x1c(%ebp),%edx
0836583f +0x031:  mov    %edx,0x8(%esp)
08365843 +0x035:  mov    %ecx,0x4(%esp)
08365847 +0x039:  mov    %eax,(%esp)
0836584a +0x03c:  call   08395cfa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2579a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2579a
0836584f +0x041:  sub    $0x4,%esp
08365852 +0x044:  mov    0x8(%ebp),%eax
08365855 +0x047:  lea    0x4bec(%eax),%edx
0836585b +0x04d:  lea    -0x18(%ebp),%eax
0836585e +0x050:  mov    %edx,0x4(%esp)
08365862 +0x054:  mov    %eax,(%esp)
08365865 +0x057:  call   08395d26 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x257c6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x257c6
0836586a +0x05c:  sub    $0x4,%esp
0836586d +0x05f:  lea    -0x18(%ebp),%eax
08365870 +0x062:  mov    %eax,0x4(%esp)
08365874 +0x066:  lea    -0x24(%ebp),%eax
08365877 +0x069:  mov    %eax,(%esp)
0836587a +0x06c:  call   08395d4c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x257ec>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x257ec
0836587f +0x071:  test   %al,%al
08365881 +0x073:  je     08365987 <+0x179>
08365887 +0x079:  lea    -0x24(%ebp),%eax
0836588a +0x07c:  mov    %eax,(%esp)
0836588d +0x07f:  call   08395d60 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25800>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25800
08365892 +0x084:  lea    0x4(%eax),%ecx
08365895 +0x087:  lea    -0x28(%ebp),%eax
08365898 +0x08a:  lea    -0x20(%ebp),%edx
0836589b +0x08d:  mov    %edx,0x8(%esp)
0836589f +0x091:  mov    %ecx,0x4(%esp)
083658a3 +0x095:  mov    %eax,(%esp)
083658a6 +0x098:  call   081527f0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2125>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2125
083658ab +0x09d:  sub    $0x4,%esp
083658ae +0x0a0:  mov    -0x20(%ebp),%eax
083658b1 +0x0a3:  add    0x14(%ebp),%eax
083658b4 +0x0a6:  mov    %eax,-0x14(%ebp)
083658b7 +0x0a9:  lea    -0x24(%ebp),%eax
083658ba +0x0ac:  mov    %eax,(%esp)
083658bd +0x0af:  call   08395d60 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25800>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25800
083658c2 +0x0b4:  lea    0x4(%eax),%ecx
083658c5 +0x0b7:  lea    -0x2c(%ebp),%eax
083658c8 +0x0ba:  lea    -0x14(%ebp),%edx
083658cb +0x0bd:  mov    %edx,0x8(%esp)
083658cf +0x0c1:  mov    %ecx,0x4(%esp)
083658d3 +0x0c5:  mov    %eax,(%esp)
083658d6 +0x0c8:  call   081527f0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2125>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2125
083658db +0x0cd:  sub    $0x4,%esp
083658de +0x0d0:  lea    -0x24(%ebp),%eax
083658e1 +0x0d3:  mov    %eax,(%esp)
083658e4 +0x0d6:  call   08395d60 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25800>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25800
083658e9 +0x0db:  lea    0x4(%eax),%edx
083658ec +0x0de:  lea    -0x10(%ebp),%eax
083658ef +0x0e1:  mov    %edx,0x4(%esp)
083658f3 +0x0e5:  mov    %eax,(%esp)
083658f6 +0x0e8:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
083658fb +0x0ed:  sub    $0x4,%esp
083658fe +0x0f0:  lea    -0x10(%ebp),%eax
08365901 +0x0f3:  mov    %eax,0x4(%esp)
08365905 +0x0f7:  lea    -0x28(%ebp),%eax
08365908 +0x0fa:  mov    %eax,(%esp)
0836590b +0x0fd:  call   080c78f0 <_GLOBAL__I_g_ServerString_+0xe5b>  ; global constructors keyed to g_ServerString_+0xe5b
08365910 +0x102:  test   %al,%al
08365912 +0x104:  je     08365951 <+0x143>
08365914 +0x106:  lea    -0x24(%ebp),%eax
08365917 +0x109:  mov    %eax,(%esp)
0836591a +0x10c:  call   08395d60 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25800>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25800
0836591f +0x111:  lea    0x4(%eax),%edx
08365922 +0x114:  lea    -0xc(%ebp),%eax
08365925 +0x117:  mov    %edx,0x4(%esp)
08365929 +0x11b:  mov    %eax,(%esp)
0836592c +0x11e:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
08365931 +0x123:  sub    $0x4,%esp
08365934 +0x126:  lea    -0xc(%ebp),%eax
08365937 +0x129:  mov    %eax,0x4(%esp)
0836593b +0x12d:  lea    -0x2c(%ebp),%eax
0836593e +0x130:  mov    %eax,(%esp)
08365941 +0x133:  call   080c78f0 <_GLOBAL__I_g_ServerString_+0xe5b>  ; global constructors keyed to g_ServerString_+0xe5b
08365946 +0x138:  test   %al,%al
08365948 +0x13a:  je     08365951 <+0x143>
0836594a +0x13c:  mov    $0x1,%eax
0836594f +0x141:  jmp    08365956 <+0x148>
08365951 +0x143:  mov    $0x0,%eax
08365956 +0x148:  test   %al,%al
08365958 +0x14a:  je     08365961 <+0x153>
0836595a +0x14c:  mov    $0x0,%eax
0836595f +0x151:  jmp    0836598c <+0x17e>
08365961 +0x153:  lea    -0x2c(%ebp),%eax
08365964 +0x156:  mov    %eax,0x4(%esp)
08365968 +0x15a:  lea    -0x28(%ebp),%eax
0836596b +0x15d:  mov    %eax,(%esp)
0836596e +0x160:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
08365973 +0x165:  test   %al,%al
08365975 +0x167:  je     08365987 <+0x179>
08365977 +0x169:  lea    -0x28(%ebp),%eax
0836597a +0x16c:  mov    %eax,(%esp)
0836597d +0x16f:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
08365982 +0x174:  mov    0x4(%eax),%eax
08365985 +0x177:  jmp    0836598c <+0x17e>
08365987 +0x179:  mov    $0x0,%eax
0836598c +0x17e:  leave
0836598d +0x17f:  ret
```

## 反编译 C

```c
// CDataManager::get_useJobFatigueMatchGift @ 0x836580e

/* CDataManager::get_useJobFatigueMatchGift(char, int, int) */

undefined4 __thiscall
CDataManager::get_useJobFatigueMatchGift(CDataManager *this,char param_1,int param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_30 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_2c [4];
  _Rb_tree_iterator<std::pair<int_const,useCharacterJobFatigue::fatigueMatchGift>> local_28 [4];
  int local_24;
  int local_20;
  map<int,useCharacterJobFatigue::fatigueMatchGift,std::less<int>,std::allocator<std::pair<int_const,useCharacterJobFatigue::fatigueMatchGift>>>
  local_1c [4];
  int local_18;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  local_24 = param_2 - param_3;
  local_20 = (int)param_1;
  std::
  map<int,useCharacterJobFatigue::fatigueMatchGift,std::less<int>,std::allocator<std::pair<int_const,useCharacterJobFatigue::fatigueMatchGift>>>
  ::find((int *)local_28);
  std::
  map<int,useCharacterJobFatigue::fatigueMatchGift,std::less<int>,std::allocator<std::pair<int_const,useCharacterJobFatigue::fatigueMatchGift>>>
  ::end(local_1c);
  cVar2 = std::_Rb_tree_iterator<std::pair<int_const,useCharacterJobFatigue::fatigueMatchGift>>::
          operator!=(local_28,(_Rb_tree_iterator *)local_1c);
  if (cVar2 == '\0') {
    return 0;
  }
  iVar3 = std::_Rb_tree_iterator<std::pair<int_const,useCharacterJobFatigue::fatigueMatchGift>>::
          operator->(local_28);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::upper_bound
            (local_2c,(int *)(iVar3 + 4));
  local_18 = local_24 + param_3;
  iVar3 = std::_Rb_tree_iterator<std::pair<int_const,useCharacterJobFatigue::fatigueMatchGift>>::
          operator->(local_28);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::upper_bound
            (local_30,(int *)(iVar3 + 4));
  std::_Rb_tree_iterator<std::pair<int_const,useCharacterJobFatigue::fatigueMatchGift>>::operator->
            (local_28);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_14);
  cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                    ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_2c,
                     (_Rb_tree_iterator *)local_14);
  if (cVar2 != '\0') {
    std::_Rb_tree_iterator<std::pair<int_const,useCharacterJobFatigue::fatigueMatchGift>>::
    operator->(local_28);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
    cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_30,
                       (_Rb_tree_iterator *)local_10);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_08365956;
    }
  }
  bVar1 = false;
LAB_08365956:
  if (bVar1) {
    return 0;
  }
  cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_2c,
                     (_Rb_tree_iterator *)local_30);
  if (cVar2 == '\0') {
    return 0;
  }
  iVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                    ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_2c);
  return *(undefined4 *)(iVar3 + 4);
}
```
