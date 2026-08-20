# get_createCharacterGift

`_ZNK12CDataManager23get_createCharacterGiftEiRN17createChracScript14rewardInfoListE`

`CDataManager::get_createCharacterGift(int, createChracScript::rewardInfoList&) const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08365668` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08365668  _ZNK12CDataManager23get_createCharacterGiftEiRN17createChracScript14rewardInfoListE
#           CDataManager::get_createCharacterGift(int, createChracScript::rewardInfoList&) const
# range [0x08365668, 0x0836580d]
08365668 +0x000:  push   %ebp
08365669 +0x001:  mov    %esp,%ebp
0836566b +0x003:  sub    $0x58,%esp
0836566e +0x006:  mov    0x8(%ebp),%eax
08365671 +0x009:  lea    0x4bd4(%eax),%ecx
08365677 +0x00f:  lea    -0x30(%ebp),%eax
0836567a +0x012:  lea    0xc(%ebp),%edx
0836567d +0x015:  mov    %edx,0x8(%esp)
08365681 +0x019:  mov    %ecx,0x4(%esp)
08365685 +0x01d:  mov    %eax,(%esp)
08365688 +0x020:  call   08395bdc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2567c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2567c
0836568d +0x025:  sub    $0x4,%esp
08365690 +0x028:  mov    0x8(%ebp),%eax
08365693 +0x02b:  lea    0x4bd4(%eax),%edx
08365699 +0x031:  lea    -0x2c(%ebp),%eax
0836569c +0x034:  mov    %edx,0x4(%esp)
083656a0 +0x038:  mov    %eax,(%esp)
083656a3 +0x03b:  call   08395c08 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x256a8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x256a8
083656a8 +0x040:  sub    $0x4,%esp
083656ab +0x043:  lea    -0x2c(%ebp),%eax
083656ae +0x046:  mov    %eax,0x4(%esp)
083656b2 +0x04a:  lea    -0x30(%ebp),%eax
083656b5 +0x04d:  mov    %eax,(%esp)
083656b8 +0x050:  call   08395c2e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x256ce>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x256ce
083656bd +0x055:  test   %al,%al
083656bf +0x057:  je     08365736 <+0xce>
083656c1 +0x059:  lea    -0x30(%ebp),%eax
083656c4 +0x05c:  mov    %eax,(%esp)
083656c7 +0x05f:  call   08395c68 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25708>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25708
083656cc +0x064:  lea    0x4(%eax),%edx
083656cf +0x067:  lea    -0x28(%ebp),%eax
083656d2 +0x06a:  mov    %edx,0x4(%esp)
083656d6 +0x06e:  mov    %eax,(%esp)
083656d9 +0x071:  call   08395ca2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25742>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25742
083656de +0x076:  sub    $0x4,%esp
083656e1 +0x079:  lea    -0x30(%ebp),%eax
083656e4 +0x07c:  mov    %eax,(%esp)
083656e7 +0x07f:  call   08395c68 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25708>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25708
083656ec +0x084:  lea    0x4(%eax),%edx
083656ef +0x087:  lea    -0x24(%ebp),%eax
083656f2 +0x08a:  mov    %edx,0x4(%esp)
083656f6 +0x08e:  mov    %eax,(%esp)
083656f9 +0x091:  call   08395c76 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25716>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25716
083656fe +0x096:  sub    $0x4,%esp
08365701 +0x099:  mov    0x10(%ebp),%edx
08365704 +0x09c:  lea    -0x20(%ebp),%eax
08365707 +0x09f:  mov    %edx,0x4(%esp)
0836570b +0x0a3:  mov    %eax,(%esp)
0836570e +0x0a6:  call   08395c42 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x256e2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x256e2
08365713 +0x0ab:  sub    $0x4,%esp
08365716 +0x0ae:  mov    0x10(%ebp),%eax
08365719 +0x0b1:  mov    -0x28(%ebp),%edx
0836571c +0x0b4:  mov    %edx,0xc(%esp)
08365720 +0x0b8:  mov    -0x24(%ebp),%edx
08365723 +0x0bb:  mov    %edx,0x8(%esp)
08365727 +0x0bf:  mov    -0x20(%ebp),%edx
0836572a +0x0c2:  mov    %edx,0x4(%esp)
0836572e +0x0c6:  mov    %eax,(%esp)
08365731 +0x0c9:  call   08395cce <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2576e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2576e
08365736 +0x0ce:  movl   $0xb,-0x1c(%ebp)
0836573d +0x0d5:  mov    0x8(%ebp),%eax
08365740 +0x0d8:  lea    0x4bd4(%eax),%ecx
08365746 +0x0de:  lea    -0x3c(%ebp),%eax
08365749 +0x0e1:  lea    -0x1c(%ebp),%edx
0836574c +0x0e4:  mov    %edx,0x8(%esp)
08365750 +0x0e8:  mov    %ecx,0x4(%esp)
08365754 +0x0ec:  mov    %eax,(%esp)
08365757 +0x0ef:  call   08395bdc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2567c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2567c
0836575c +0x0f4:  sub    $0x4,%esp
0836575f +0x0f7:  mov    -0x3c(%ebp),%eax
08365762 +0x0fa:  mov    %eax,-0x30(%ebp)
08365765 +0x0fd:  mov    0x8(%ebp),%eax
08365768 +0x100:  lea    0x4bd4(%eax),%edx
0836576e +0x106:  lea    -0x18(%ebp),%eax
08365771 +0x109:  mov    %edx,0x4(%esp)
08365775 +0x10d:  mov    %eax,(%esp)
08365778 +0x110:  call   08395c08 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x256a8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x256a8
0836577d +0x115:  sub    $0x4,%esp
08365780 +0x118:  lea    -0x18(%ebp),%eax
08365783 +0x11b:  mov    %eax,0x4(%esp)
08365787 +0x11f:  lea    -0x30(%ebp),%eax
0836578a +0x122:  mov    %eax,(%esp)
0836578d +0x125:  call   08395c2e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x256ce>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x256ce
08365792 +0x12a:  test   %al,%al
08365794 +0x12c:  je     0836580b <+0x1a3>
08365796 +0x12e:  lea    -0x30(%ebp),%eax
08365799 +0x131:  mov    %eax,(%esp)
0836579c +0x134:  call   08395c68 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25708>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25708
083657a1 +0x139:  lea    0x4(%eax),%edx
083657a4 +0x13c:  lea    -0x14(%ebp),%eax
083657a7 +0x13f:  mov    %edx,0x4(%esp)
083657ab +0x143:  mov    %eax,(%esp)
083657ae +0x146:  call   08395ca2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25742>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25742
083657b3 +0x14b:  sub    $0x4,%esp
083657b6 +0x14e:  lea    -0x30(%ebp),%eax
083657b9 +0x151:  mov    %eax,(%esp)
083657bc +0x154:  call   08395c68 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25708>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25708
083657c1 +0x159:  lea    0x4(%eax),%edx
083657c4 +0x15c:  lea    -0x10(%ebp),%eax
083657c7 +0x15f:  mov    %edx,0x4(%esp)
083657cb +0x163:  mov    %eax,(%esp)
083657ce +0x166:  call   08395c76 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25716>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25716
083657d3 +0x16b:  sub    $0x4,%esp
083657d6 +0x16e:  mov    0x10(%ebp),%edx
083657d9 +0x171:  lea    -0xc(%ebp),%eax
083657dc +0x174:  mov    %edx,0x4(%esp)
083657e0 +0x178:  mov    %eax,(%esp)
083657e3 +0x17b:  call   08395c42 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x256e2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x256e2
083657e8 +0x180:  sub    $0x4,%esp
083657eb +0x183:  mov    0x10(%ebp),%eax
083657ee +0x186:  mov    -0x14(%ebp),%edx
083657f1 +0x189:  mov    %edx,0xc(%esp)
083657f5 +0x18d:  mov    -0x10(%ebp),%edx
083657f8 +0x190:  mov    %edx,0x8(%esp)
083657fc +0x194:  mov    -0xc(%ebp),%edx
083657ff +0x197:  mov    %edx,0x4(%esp)
08365803 +0x19b:  mov    %eax,(%esp)
08365806 +0x19e:  call   08395cce <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2576e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2576e
0836580b +0x1a3:  leave
0836580c +0x1a4:  ret
0836580d +0x1a5:  nop
```

## 反编译 C

```c
// CDataManager::get_createCharacterGift @ 0x8365668

/* CDataManager::get_createCharacterGift(int, createChracScript::rewardInfoList&) const */

void __thiscall
CDataManager::get_createCharacterGift(CDataManager *this,int param_1,rewardInfoList *param_2)

{
  char cVar1;
  int local_40 [3];
  int local_34;
  map<int,createChracScript::rewardInfoList,std::less<int>,std::allocator<std::pair<int_const,createChracScript::rewardInfoList>>>
  local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  map<int,createChracScript::rewardInfoList,std::less<int>,std::allocator<std::pair<int_const,createChracScript::rewardInfoList>>>
  local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  std::
  map<int,createChracScript::rewardInfoList,std::less<int>,std::allocator<std::pair<int_const,createChracScript::rewardInfoList>>>
  ::find(&local_34);
  std::
  map<int,createChracScript::rewardInfoList,std::less<int>,std::allocator<std::pair<int_const,createChracScript::rewardInfoList>>>
  ::end(local_30);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,createChracScript::rewardInfoList>>::
          operator!=((_Rb_tree_const_iterator<std::pair<int_const,createChracScript::rewardInfoList>>
                      *)&local_34,(_Rb_tree_const_iterator *)local_30);
  if (cVar1 != '\0') {
    std::_Rb_tree_const_iterator<std::pair<int_const,createChracScript::rewardInfoList>>::operator->
              ((_Rb_tree_const_iterator<std::pair<int_const,createChracScript::rewardInfoList>> *)
               &local_34);
    std::vector<createChracScript::rewardInfo,std::allocator<createChracScript::rewardInfo>>::end();
    std::_Rb_tree_const_iterator<std::pair<int_const,createChracScript::rewardInfoList>>::operator->
              ((_Rb_tree_const_iterator<std::pair<int_const,createChracScript::rewardInfoList>> *)
               &local_34);
    std::vector<createChracScript::rewardInfo,std::allocator<createChracScript::rewardInfo>>::begin
              ();
    std::vector<createChracScript::rewardInfo,std::allocator<createChracScript::rewardInfo>>::end();
    std::vector<createChracScript::rewardInfo,std::allocator<createChracScript::rewardInfo>>::
    insert<__gnu_cxx::__normal_iterator<createChracScript::rewardInfo_const*,std::vector<createChracScript::rewardInfo,std::allocator<createChracScript::rewardInfo>>>>
              (param_2,param_2,local_24,local_28,local_2c);
  }
  local_20 = 0xb;
  std::
  map<int,createChracScript::rewardInfoList,std::less<int>,std::allocator<std::pair<int_const,createChracScript::rewardInfoList>>>
  ::find(local_40);
  local_34 = local_40[0];
  std::
  map<int,createChracScript::rewardInfoList,std::less<int>,std::allocator<std::pair<int_const,createChracScript::rewardInfoList>>>
  ::end(local_1c);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,createChracScript::rewardInfoList>>::
          operator!=((_Rb_tree_const_iterator<std::pair<int_const,createChracScript::rewardInfoList>>
                      *)&local_34,(_Rb_tree_const_iterator *)local_1c);
  if (cVar1 != '\0') {
    std::_Rb_tree_const_iterator<std::pair<int_const,createChracScript::rewardInfoList>>::operator->
              ((_Rb_tree_const_iterator<std::pair<int_const,createChracScript::rewardInfoList>> *)
               &local_34);
    std::vector<createChracScript::rewardInfo,std::allocator<createChracScript::rewardInfo>>::end();
    std::_Rb_tree_const_iterator<std::pair<int_const,createChracScript::rewardInfoList>>::operator->
              ((_Rb_tree_const_iterator<std::pair<int_const,createChracScript::rewardInfoList>> *)
               &local_34);
    std::vector<createChracScript::rewardInfo,std::allocator<createChracScript::rewardInfo>>::begin
              ();
    std::vector<createChracScript::rewardInfo,std::allocator<createChracScript::rewardInfo>>::end();
    std::vector<createChracScript::rewardInfo,std::allocator<createChracScript::rewardInfo>>::
    insert<__gnu_cxx::__normal_iterator<createChracScript::rewardInfo_const*,std::vector<createChracScript::rewardInfo,std::allocator<createChracScript::rewardInfo>>>>
              (param_2,param_2,local_10,local_14,local_18);
  }
  return;
}
```
