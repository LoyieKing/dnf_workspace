# _fnStatQuestClear

`_ZN5CUser17_fnStatQuestClearEjPc`

`CUser::_fnStatQuestClear(unsigned int, char*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08664e8e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08664e8e  _ZN5CUser17_fnStatQuestClearEjPc
#           CUser::_fnStatQuestClear(unsigned int, char*)
# range [0x08664e8e, 0x086650b1]
08664e8e +0x000:  push   %ebp
08664e8f +0x001:  mov    %esp,%ebp
08664e91 +0x003:  push   %ebx
08664e92 +0x004:  sub    $0x64,%esp
08664e95 +0x007:  mov    0xc(%ebp),%eax
08664e98 +0x00a:  lea    0x4(%eax),%edx
08664e9b +0x00d:  mov    %edx,0xc(%ebp)
08664e9e +0x010:  mov    (%eax),%eax
08664ea0 +0x012:  mov    %eax,-0x1c(%ebp)
08664ea3 +0x015:  mov    0xc(%ebp),%eax
08664ea6 +0x018:  lea    0x4(%eax),%edx
08664ea9 +0x01b:  mov    %edx,0xc(%ebp)
08664eac +0x01e:  mov    (%eax),%eax
08664eae +0x020:  mov    %eax,-0x18(%ebp)
08664eb1 +0x023:  mov    0xc(%ebp),%eax
08664eb4 +0x026:  lea    0x4(%eax),%edx
08664eb7 +0x029:  mov    %edx,0xc(%ebp)
08664eba +0x02c:  mov    (%eax),%eax
08664ebc +0x02e:  mov    %eax,-0x14(%ebp)
08664ebf +0x031:  mov    0x8(%ebp),%ebx
08664ec2 +0x034:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08664ec7 +0x039:  mov    %ebx,0x4(%esp)
08664ecb +0x03d:  mov    %eax,(%esp)
08664ece +0x040:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
08664ed3 +0x045:  mov    %eax,-0x10(%ebp)
08664ed6 +0x048:  cmpl   $0x0,-0x10(%ebp)
08664eda +0x04c:  jne    08664ee6 <+0x58>
08664edc +0x04e:  mov    $0x1,%eax
08664ee1 +0x053:  jmp    086650ad <+0x21f>
08664ee6 +0x058:  mov    -0x10(%ebp),%eax
08664ee9 +0x05b:  mov    0xb8(%eax),%eax
08664eef +0x061:  test   %eax,%eax
08664ef1 +0x063:  je     08664f0b <+0x7d>
08664ef3 +0x065:  mov    -0x10(%ebp),%eax
08664ef6 +0x068:  mov    0xb8(%eax),%eax
08664efc +0x06e:  cmp    $0x19,%eax
08664eff +0x071:  je     08664f0b <+0x7d>
08664f01 +0x073:  mov    $0x1,%eax
08664f06 +0x078:  jmp    086650ad <+0x21f>
08664f0b +0x07d:  movl   $0x0,-0xc(%ebp)
08664f12 +0x084:  mov    -0x1c(%ebp),%eax
08664f15 +0x087:  mov    %eax,0x4(%esp)
08664f19 +0x08b:  mov    -0x10(%ebp),%eax
08664f1c +0x08e:  mov    %eax,(%esp)
08664f1f +0x091:  call   0866e914 <_ZN5CUser22getUserQuestRewardItemEPK5QuestPKS_>  ; CUser::getUserQuestRewardItem(Quest const*, CUser const*)
08664f24 +0x096:  mov    %eax,-0xc(%ebp)
08664f27 +0x099:  lea    -0x38(%ebp),%eax
08664f2a +0x09c:  mov    %eax,(%esp)
08664f2d +0x09f:  call   0869b10a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x795f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x795f
08664f32 +0x0a4:  lea    -0x3c(%ebp),%eax
08664f35 +0x0a7:  mov    %eax,(%esp)
08664f38 +0x0aa:  call   0869b10a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x795f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x795f
08664f3d +0x0af:  lea    -0x40(%ebp),%eax
08664f40 +0x0b2:  mov    %eax,(%esp)
08664f43 +0x0b5:  call   0869b118 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x796d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x796d
08664f48 +0x0ba:  lea    -0x44(%ebp),%eax
08664f4b +0x0bd:  mov    %eax,(%esp)
08664f4e +0x0c0:  call   0869b118 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x796d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x796d
08664f53 +0x0c5:  lea    -0x4c(%ebp),%eax
08664f56 +0x0c8:  mov    -0xc(%ebp),%edx
08664f59 +0x0cb:  mov    %edx,0x4(%esp)
08664f5d +0x0cf:  mov    %eax,(%esp)
08664f60 +0x0d2:  call   083ad0dc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x470a8>  ; global constructors keyed to CServerEvent::m_nExpRate+0x470a8
08664f65 +0x0d7:  sub    $0x4,%esp
08664f68 +0x0da:  mov    -0x4c(%ebp),%eax
08664f6b +0x0dd:  mov    %eax,-0x38(%ebp)
08664f6e +0x0e0:  lea    -0x4c(%ebp),%eax
08664f71 +0x0e3:  mov    -0xc(%ebp),%edx
08664f74 +0x0e6:  mov    %edx,0x4(%esp)
08664f78 +0x0ea:  mov    %eax,(%esp)
08664f7b +0x0ed:  call   083ad108 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x470d4>  ; global constructors keyed to CServerEvent::m_nExpRate+0x470d4
08664f80 +0x0f2:  sub    $0x4,%esp
08664f83 +0x0f5:  mov    -0x4c(%ebp),%eax
08664f86 +0x0f8:  mov    %eax,-0x3c(%ebp)
08664f89 +0x0fb:  lea    -0x30(%ebp),%eax
08664f8c +0x0fe:  mov    -0x18(%ebp),%edx
08664f8f +0x101:  mov    %edx,0x4(%esp)
08664f93 +0x105:  mov    %eax,(%esp)
08664f96 +0x108:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08664f9b +0x10d:  sub    $0x4,%esp
08664f9e +0x110:  lea    -0x30(%ebp),%eax
08664fa1 +0x113:  mov    %eax,0x4(%esp)
08664fa5 +0x117:  lea    -0x34(%ebp),%eax
08664fa8 +0x11a:  mov    %eax,(%esp)
08664fab +0x11d:  call   080f99ec <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1f8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1f8
08664fb0 +0x122:  mov    -0x34(%ebp),%eax
08664fb3 +0x125:  mov    %eax,-0x40(%ebp)
08664fb6 +0x128:  lea    -0x28(%ebp),%eax
08664fb9 +0x12b:  mov    -0x18(%ebp),%edx
08664fbc +0x12e:  mov    %edx,0x4(%esp)
08664fc0 +0x132:  mov    %eax,(%esp)
08664fc3 +0x135:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08664fc8 +0x13a:  sub    $0x4,%esp
08664fcb +0x13d:  lea    -0x28(%ebp),%eax
08664fce +0x140:  mov    %eax,0x4(%esp)
08664fd2 +0x144:  lea    -0x2c(%ebp),%eax
08664fd5 +0x147:  mov    %eax,(%esp)
08664fd8 +0x14a:  call   080f99ec <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1f8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1f8
08664fdd +0x14f:  mov    -0x2c(%ebp),%eax
08664fe0 +0x152:  mov    %eax,-0x44(%ebp)
08664fe3 +0x155:  jmp    08665092 <+0x204>
08664fe8 +0x15a:  lea    -0x38(%ebp),%eax
08664feb +0x15d:  mov    %eax,(%esp)
08664fee +0x160:  call   0839496e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2440e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2440e
08664ff3 +0x165:  mov    (%eax),%ebx
08664ff5 +0x167:  lea    -0x40(%ebp),%eax
08664ff8 +0x16a:  mov    %eax,(%esp)
08664ffb +0x16d:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
08665000 +0x172:  mov    (%eax),%eax
08665002 +0x174:  cmp    %eax,%ebx
08665004 +0x176:  sete   %al
08665007 +0x179:  test   %al,%al
08665009 +0x17b:  je     08665039 <+0x1ab>
0866500b +0x17d:  lea    -0x38(%ebp),%eax
0866500e +0x180:  mov    %eax,(%esp)
08665011 +0x183:  call   0839496e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2440e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2440e
08665016 +0x188:  mov    0x4(%eax),%ebx
08665019 +0x18b:  lea    -0x38(%ebp),%eax
0866501c +0x18e:  mov    %eax,(%esp)
0866501f +0x191:  call   0839496e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2440e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2440e
08665024 +0x196:  mov    (%eax),%eax
08665026 +0x198:  mov    %ebx,0x8(%esp)
0866502a +0x19c:  mov    %eax,0x4(%esp)
0866502e +0x1a0:  mov    -0x14(%ebp),%eax
08665031 +0x1a3:  mov    %eax,(%esp)
08665034 +0x1a6:  call   086650b2 <_ZN5CUser16add_matched_listERSt6vectorISt4pairIiiESaIS2_EEii>  ; CUser::add_matched_list(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, int, int)
08665039 +0x1ab:  lea    -0x40(%ebp),%eax
0866503c +0x1ae:  mov    %eax,(%esp)
0866503f +0x1b1:  call   080f9a06 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x212>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x212
08665044 +0x1b6:  lea    -0x44(%ebp),%eax
08665047 +0x1b9:  mov    %eax,0x4(%esp)
0866504b +0x1bd:  lea    -0x40(%ebp),%eax
0866504e +0x1c0:  mov    %eax,(%esp)
08665051 +0x1c3:  call   080f9a26 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x232>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x232
08665056 +0x1c8:  test   %al,%al
08665058 +0x1ca:  jne    08664fe8 <+0x15a>
0866505a +0x1cc:  lea    -0x20(%ebp),%eax
0866505d +0x1cf:  mov    -0x18(%ebp),%edx
08665060 +0x1d2:  mov    %edx,0x4(%esp)
08665064 +0x1d6:  mov    %eax,(%esp)
08665067 +0x1d9:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
0866506c +0x1de:  sub    $0x4,%esp
0866506f +0x1e1:  lea    -0x20(%ebp),%eax
08665072 +0x1e4:  mov    %eax,0x4(%esp)
08665076 +0x1e8:  lea    -0x24(%ebp),%eax
08665079 +0x1eb:  mov    %eax,(%esp)
0866507c +0x1ee:  call   080f99ec <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1f8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1f8
08665081 +0x1f3:  mov    -0x24(%ebp),%eax
08665084 +0x1f6:  mov    %eax,-0x40(%ebp)
08665087 +0x1f9:  lea    -0x38(%ebp),%eax
0866508a +0x1fc:  mov    %eax,(%esp)
0866508d +0x1ff:  call   08394958 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x243f8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x243f8
08665092 +0x204:  lea    -0x3c(%ebp),%eax
08665095 +0x207:  mov    %eax,0x4(%esp)
08665099 +0x20b:  lea    -0x38(%ebp),%eax
0866509c +0x20e:  mov    %eax,(%esp)
0866509f +0x211:  call   083e5e57 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x7fe23>  ; global constructors keyed to CServerEvent::m_nExpRate+0x7fe23
086650a4 +0x216:  test   %al,%al
086650a6 +0x218:  jne    08665044 <+0x1b6>
086650a8 +0x21a:  mov    $0x1,%eax
086650ad +0x21f:  mov    -0x4(%ebp),%ebx
086650b0 +0x222:  leave
086650b1 +0x223:  ret
```

## 反编译 C

```c
// CUser::_fnStatQuestClear @ 0x8664e8e

/* CUser::_fnStatQuestClear(unsigned int, char*) */

undefined4 CUser::_fnStatQuestClear(uint param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_48;
  undefined4 local_44;
  __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
  local_40 [4];
  __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
  local_3c [4];
  undefined4 local_38;
  __normal_iterator local_34 [4];
  undefined4 local_30;
  __normal_iterator local_2c [4];
  undefined4 local_28;
  __normal_iterator local_24 [4];
  CUser *local_20;
  undefined4 local_1c;
  vector *local_18;
  Quest *local_14;
  undefined4 local_10;
  
  local_20 = *(CUser **)param_2;
  local_1c = *(undefined4 *)(param_2 + 4);
  local_18 = *(vector **)(param_2 + 8);
  iVar2 = G_CDataManager();
  local_14 = (Quest *)CDataManager::find_quest(iVar2);
  if ((local_14 != (Quest *)0x0) &&
     ((*(int *)(local_14 + 0xb8) == 0 || (*(int *)(local_14 + 0xb8) == 0x19)))) {
    local_10 = 0;
    local_10 = getUserQuestRewardItem(local_14,local_20);
    __gnu_cxx::
    __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
    ::__normal_iterator(local_3c);
    __gnu_cxx::
    __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
    ::__normal_iterator(local_40);
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::__normal_iterator
              ((__normal_iterator<int_const*,std::vector<int,std::allocator<int>>> *)&local_44);
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::__normal_iterator
              ((__normal_iterator<int_const*,std::vector<int,std::allocator<int>>> *)&local_48);
    std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::begin();
    std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::end();
    std::vector<int,std::allocator<int>>::begin();
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
    __normal_iterator<int*>
              ((__normal_iterator<int_const*,std::vector<int,std::allocator<int>>> *)&local_38,
               local_34);
    local_44 = local_38;
    std::vector<int,std::allocator<int>>::end();
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
    __normal_iterator<int*>
              ((__normal_iterator<int_const*,std::vector<int,std::allocator<int>>> *)&local_30,
               local_2c);
    local_48 = local_30;
    while (bVar1 = __gnu_cxx::operator!=(local_3c,local_40), bVar1) {
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_44,(__normal_iterator *)&local_48),
            bVar1) {
        piVar3 = (int *)__gnu_cxx::
                        __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
                        ::operator->(local_3c);
        iVar2 = *piVar3;
        piVar3 = (int *)__gnu_cxx::
                        __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                        operator*((__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                                   *)&local_44);
        if (iVar2 == *piVar3) {
          iVar2 = __gnu_cxx::
                  __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
                  ::operator->(local_3c);
          iVar2 = *(int *)(iVar2 + 4);
          piVar3 = (int *)__gnu_cxx::
                          __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
                          ::operator->(local_3c);
          add_matched_list(local_18,*piVar3,iVar2);
        }
        __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                  ((__normal_iterator<int_const*,std::vector<int,std::allocator<int>>> *)&local_44);
      }
      std::vector<int,std::allocator<int>>::begin();
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
      __normal_iterator<int*>
                ((__normal_iterator<int_const*,std::vector<int,std::allocator<int>>> *)&local_28,
                 local_24);
      local_44 = local_28;
      __gnu_cxx::
      __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
      ::operator++(local_3c);
    }
  }
  return 1;
}
```
