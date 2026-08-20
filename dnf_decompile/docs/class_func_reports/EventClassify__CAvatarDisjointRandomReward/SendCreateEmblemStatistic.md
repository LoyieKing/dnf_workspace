# SendCreateEmblemStatistic

`_ZN13EventClassify27CAvatarDisjointRandomReward25SendCreateEmblemStatisticERSt6vectorISt4pairIiiESaIS3_EE`

`EventClassify::CAvatarDisjointRandomReward::SendCreateEmblemStatistic(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)`

| 类 | 地址 |
|---|---|
| `EventClassify::CAvatarDisjointRandomReward` | `0x0810f742` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810f742  _ZN13EventClassify27CAvatarDisjointRandomReward25SendCreateEmblemStatisticERSt6vectorISt4pairIiiESaIS3_EE
#           EventClassify::CAvatarDisjointRandomReward::SendCreateEmblemStatistic(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
# range [0x0810f742, 0x0810f88b]
0810f742 +0x000:  push   %ebp
0810f743 +0x001:  mov    %esp,%ebp
0810f745 +0x003:  push   %ebx
0810f746 +0x004:  sub    $0x64,%esp
0810f749 +0x007:  lea    -0x4e(%ebp),%eax
0810f74c +0x00a:  mov    %eax,(%esp)
0810f74f +0x00d:  call   08110bdc <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xee>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xee
0810f754 +0x012:  mov    0xc(%ebp),%eax
0810f757 +0x015:  mov    %eax,(%esp)
0810f75a +0x018:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0810f75f +0x01d:  cmp    $0x5,%eax
0810f762 +0x020:  seta   %al
0810f765 +0x023:  test   %al,%al
0810f767 +0x025:  jne    0810f880 <+0x13e>
0810f76d +0x02b:  movl   $0x0,-0x10(%ebp)
0810f774 +0x032:  lea    -0x18(%ebp),%eax
0810f777 +0x035:  mov    0xc(%ebp),%edx
0810f77a +0x038:  mov    %edx,0x4(%esp)
0810f77e +0x03c:  mov    %eax,(%esp)
0810f781 +0x03f:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
0810f786 +0x044:  sub    $0x4,%esp
0810f789 +0x047:  jmp    0810f814 <+0xd2>
0810f78e +0x04c:  lea    -0x18(%ebp),%eax
0810f791 +0x04f:  mov    %eax,(%esp)
0810f794 +0x052:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
0810f799 +0x057:  mov    (%eax),%ebx
0810f79b +0x059:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0810f7a0 +0x05e:  mov    %ebx,0x4(%esp)
0810f7a4 +0x062:  mov    %eax,(%esp)
0810f7a7 +0x065:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0810f7ac +0x06a:  mov    %eax,-0xc(%ebp)
0810f7af +0x06d:  cmpl   $0x0,-0xc(%ebp)
0810f7b3 +0x071:  je     0810f883 <+0x141>
0810f7b9 +0x077:  mov    -0xc(%ebp),%eax
0810f7bc +0x07a:  mov    (%eax),%eax
0810f7be +0x07c:  add    $0xc,%eax
0810f7c1 +0x07f:  mov    (%eax),%edx
0810f7c3 +0x081:  mov    -0xc(%ebp),%eax
0810f7c6 +0x084:  mov    %eax,(%esp)
0810f7c9 +0x087:  call   *%edx
0810f7cb +0x089:  cmp    $0x14,%eax
0810f7ce +0x08c:  sete   %al
0810f7d1 +0x08f:  test   %al,%al
0810f7d3 +0x091:  je     0810f809 <+0xc7>
0810f7d5 +0x093:  mov    -0x10(%ebp),%ebx
0810f7d8 +0x096:  mov    -0xc(%ebp),%eax
0810f7db +0x099:  mov    %eax,(%esp)
0810f7de +0x09c:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
0810f7e3 +0x0a1:  mov    %eax,-0x40(%ebp,%ebx,4)
0810f7e7 +0x0a5:  mov    -0x10(%ebp),%ebx
0810f7ea +0x0a8:  lea    -0x18(%ebp),%eax
0810f7ed +0x0ab:  mov    %eax,(%esp)
0810f7f0 +0x0ae:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
0810f7f5 +0x0b3:  mov    0x4(%eax),%eax
0810f7f8 +0x0b6:  lea    0x8(%ebx),%edx
0810f7fb +0x0b9:  mov    %eax,-0x4c(%ebp,%edx,4)
0810f7ff +0x0bd:  addl   $0x1,-0x10(%ebp)
0810f803 +0x0c1:  cmpl   $0x5,-0x10(%ebp)
0810f807 +0x0c5:  jg     0810f845 <+0x103>
0810f809 +0x0c7:  lea    -0x18(%ebp),%eax
0810f80c +0x0ca:  mov    %eax,(%esp)
0810f80f +0x0cd:  call   0811120a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x71c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x71c
0810f814 +0x0d2:  lea    -0x14(%ebp),%eax
0810f817 +0x0d5:  mov    0xc(%ebp),%edx
0810f81a +0x0d8:  mov    %edx,0x4(%esp)
0810f81e +0x0dc:  mov    %eax,(%esp)
0810f821 +0x0df:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
0810f826 +0x0e4:  sub    $0x4,%esp
0810f829 +0x0e7:  lea    -0x14(%ebp),%eax
0810f82c +0x0ea:  mov    %eax,0x4(%esp)
0810f830 +0x0ee:  lea    -0x18(%ebp),%eax
0810f833 +0x0f1:  mov    %eax,(%esp)
0810f836 +0x0f4:  call   081111de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6f0
0810f83b +0x0f9:  test   %al,%al
0810f83d +0x0fb:  jne    0810f78e <+0x4c>
0810f843 +0x101:  jmp    0810f846 <+0x104>
0810f845 +0x103:  nop
0810f846 +0x104:  cmpl   $0x0,-0x10(%ebp)
0810f84a +0x108:  jle    0810f886 <+0x144>
0810f84c +0x10a:  mov    -0x10(%ebp),%eax
0810f84f +0x10d:  mov    %eax,-0x44(%ebp)
0810f852 +0x110:  lea    -0x4e(%ebp),%ebx
0810f855 +0x113:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%eax
0810f85a +0x118:  movl   $0x0,0x4(%esp)
0810f862 +0x120:  mov    %eax,(%esp)
0810f865 +0x123:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
0810f86a +0x128:  movl   $0x36,0x8(%esp)
0810f872 +0x130:  mov    %ebx,0x4(%esp)
0810f876 +0x134:  mov    %eax,(%esp)
0810f879 +0x137:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
0810f87e +0x13c:  jmp    0810f887 <+0x145>
0810f880 +0x13e:  nop
0810f881 +0x13f:  jmp    0810f887 <+0x145>
0810f883 +0x141:  nop
0810f884 +0x142:  jmp    0810f887 <+0x145>
0810f886 +0x144:  nop
0810f887 +0x145:  mov    -0x4(%ebp),%ebx
0810f88a +0x148:  leave
0810f88b +0x149:  ret
```

## 反编译 C

```c
// EventClassify::CAvatarDisjointRandomReward::SendCreateEmblemStatistic @ 0x810f742

/* EventClassify::CAvatarDisjointRandomReward::SendCreateEmblemStatistic(std::vector<std::pair<int,
   int>, std::allocator<std::pair<int, int> > >&) */

void __thiscall
EventClassify::CAvatarDisjointRandomReward::SendCreateEmblemStatistic
          (CAvatarDisjointRandomReward *this,vector *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  CDataManager *this_00;
  int iVar5;
  CStatisticServerProxy *this_01;
  Packet_Emblem_Create_Statistic local_52 [2];
  int aiStack_50 [13];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  int local_14;
  CItem *local_10;
  
  Packet_Emblem_Create_Statistic::Packet_Emblem_Create_Statistic(local_52);
  uVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1);
  if (uVar3 < 6) {
    local_14 = 0;
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
    while( true ) {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
      bVar2 = __gnu_cxx::operator!=(local_1c,local_18);
      if (!bVar2) break;
      piVar4 = (int *)__gnu_cxx::
                      __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                      ::operator->(local_1c);
      iVar1 = *piVar4;
      this_00 = (CDataManager *)G_CDataManager();
      local_10 = (CItem *)CDataManager::find_item(this_00,iVar1);
      if (local_10 == (CItem *)0x0) {
        return;
      }
      iVar5 = (**(code **)(*(int *)local_10 + 0xc))(local_10);
      iVar1 = local_14;
      if (iVar5 == 0x14) {
        iVar5 = CItem::get_grade(local_10);
        aiStack_50[iVar1 + 3] = iVar5;
        iVar1 = local_14;
        iVar5 = __gnu_cxx::
                __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                ::operator->(local_1c);
        aiStack_50[iVar1 + 8] = *(int *)(iVar5 + 4);
        local_14 = local_14 + 1;
        if (5 < local_14) break;
      }
      __gnu_cxx::
      __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
      ::operator++(local_1c);
    }
    if (0 < local_14) {
      aiStack_50[2] = local_14;
      this_01 = (CStatisticServerProxy *)
                CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                          (GlobalData::s_statistic_proxy_mgr,0);
      CStatisticServerProxy::SendPacket(this_01,(char *)local_52,0x36);
    }
  }
  return;
}
```
