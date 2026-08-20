# SendCreateEmblemInfo

`_ZN25Dispatcher_CompoundEmblem20SendCreateEmblemInfoERKSt6vectorISt4pairIiiESaIS2_EE`

`Dispatcher_CompoundEmblem::SendCreateEmblemInfo(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CompoundEmblem` | `0x08221dde` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08221dde  _ZN25Dispatcher_CompoundEmblem20SendCreateEmblemInfoERKSt6vectorISt4pairIiiESaIS2_EE
#           Dispatcher_CompoundEmblem::SendCreateEmblemInfo(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
# range [0x08221dde, 0x08221f3b]
08221dde +0x000:  push   %ebp
08221ddf +0x001:  mov    %esp,%ebp
08221de1 +0x003:  push   %ebx
08221de2 +0x004:  sub    $0x74,%esp
08221de5 +0x007:  lea    -0x5a(%ebp),%eax
08221de8 +0x00a:  mov    %eax,(%esp)
08221deb +0x00d:  call   08110bdc <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xee>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xee
08221df0 +0x012:  mov    0xc(%ebp),%eax
08221df3 +0x015:  mov    %eax,(%esp)
08221df6 +0x018:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08221dfb +0x01d:  cmp    $0x5,%eax
08221dfe +0x020:  seta   %al
08221e01 +0x023:  test   %al,%al
08221e03 +0x025:  jne    08221f2f <+0x151>
08221e09 +0x02b:  lea    -0x20(%ebp),%eax
08221e0c +0x02e:  mov    0xc(%ebp),%edx
08221e0f +0x031:  mov    %edx,0x4(%esp)
08221e13 +0x035:  mov    %eax,(%esp)
08221e16 +0x038:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
08221e1b +0x03d:  sub    $0x4,%esp
08221e1e +0x040:  lea    -0x24(%ebp),%eax
08221e21 +0x043:  mov    0xc(%ebp),%edx
08221e24 +0x046:  mov    %edx,0x4(%esp)
08221e28 +0x04a:  mov    %eax,(%esp)
08221e2b +0x04d:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
08221e30 +0x052:  sub    $0x4,%esp
08221e33 +0x055:  movl   $0x0,-0x18(%ebp)
08221e3a +0x05c:  jmp    08221ec7 <+0xe9>
08221e3f +0x061:  lea    -0x20(%ebp),%eax
08221e42 +0x064:  mov    %eax,(%esp)
08221e45 +0x067:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
08221e4a +0x06c:  mov    (%eax),%eax
08221e4c +0x06e:  mov    %eax,-0x14(%ebp)
08221e4f +0x071:  lea    -0x20(%ebp),%eax
08221e52 +0x074:  mov    %eax,(%esp)
08221e55 +0x077:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
08221e5a +0x07c:  mov    0x4(%eax),%eax
08221e5d +0x07f:  mov    %eax,-0x10(%ebp)
08221e60 +0x082:  mov    -0x14(%ebp),%ebx
08221e63 +0x085:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08221e68 +0x08a:  mov    %ebx,0x4(%esp)
08221e6c +0x08e:  mov    %eax,(%esp)
08221e6f +0x091:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08221e74 +0x096:  mov    %eax,-0xc(%ebp)
08221e77 +0x099:  cmpl   $0x0,-0xc(%ebp)
08221e7b +0x09d:  je     08221f32 <+0x154>
08221e81 +0x0a3:  mov    -0x18(%ebp),%ebx
08221e84 +0x0a6:  mov    -0xc(%ebp),%eax
08221e87 +0x0a9:  mov    %eax,(%esp)
08221e8a +0x0ac:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
08221e8f +0x0b1:  mov    %eax,-0x4c(%ebp,%ebx,4)
08221e93 +0x0b5:  mov    -0x18(%ebp),%edx
08221e96 +0x0b8:  mov    -0x10(%ebp),%eax
08221e99 +0x0bb:  add    $0x8,%edx
08221e9c +0x0be:  mov    %eax,-0x58(%ebp,%edx,4)
08221ea0 +0x0c2:  addl   $0x1,-0x18(%ebp)
08221ea4 +0x0c6:  cmpl   $0x5,-0x18(%ebp)
08221ea8 +0x0ca:  jg     08221ee3 <+0x105>
08221eaa +0x0cc:  lea    -0x1c(%ebp),%eax
08221ead +0x0cf:  movl   $0x0,0x8(%esp)
08221eb5 +0x0d7:  lea    -0x20(%ebp),%edx
08221eb8 +0x0da:  mov    %edx,0x4(%esp)
08221ebc +0x0de:  mov    %eax,(%esp)
08221ebf +0x0e1:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
08221ec4 +0x0e6:  sub    $0x4,%esp
08221ec7 +0x0e9:  lea    -0x24(%ebp),%eax
08221eca +0x0ec:  mov    %eax,0x4(%esp)
08221ece +0x0f0:  lea    -0x20(%ebp),%eax
08221ed1 +0x0f3:  mov    %eax,(%esp)
08221ed4 +0x0f6:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
08221ed9 +0x0fb:  test   %al,%al
08221edb +0x0fd:  jne    08221e3f <+0x61>
08221ee1 +0x103:  jmp    08221ee4 <+0x106>
08221ee3 +0x105:  nop
08221ee4 +0x106:  mov    -0x18(%ebp),%ebx
08221ee7 +0x109:  mov    0xc(%ebp),%eax
08221eea +0x10c:  mov    %eax,(%esp)
08221eed +0x10f:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08221ef2 +0x114:  cmp    %eax,%ebx
08221ef4 +0x116:  setne  %al
08221ef7 +0x119:  test   %al,%al
08221ef9 +0x11b:  jne    08221f35 <+0x157>
08221efb +0x11d:  mov    -0x18(%ebp),%eax
08221efe +0x120:  mov    %eax,-0x50(%ebp)
08221f01 +0x123:  lea    -0x5a(%ebp),%ebx
08221f04 +0x126:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%eax
08221f09 +0x12b:  movl   $0x0,0x4(%esp)
08221f11 +0x133:  mov    %eax,(%esp)
08221f14 +0x136:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
08221f19 +0x13b:  movl   $0x36,0x8(%esp)
08221f21 +0x143:  mov    %ebx,0x4(%esp)
08221f25 +0x147:  mov    %eax,(%esp)
08221f28 +0x14a:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
08221f2d +0x14f:  jmp    08221f36 <+0x158>
08221f2f +0x151:  nop
08221f30 +0x152:  jmp    08221f36 <+0x158>
08221f32 +0x154:  nop
08221f33 +0x155:  jmp    08221f36 <+0x158>
08221f35 +0x157:  nop
08221f36 +0x158:  mov    -0x4(%ebp),%ebx
08221f39 +0x15b:  leave
08221f3a +0x15c:  ret
08221f3b +0x15d:  nop
```

## 反编译 C

```c
// Dispatcher_CompoundEmblem::SendCreateEmblemInfo @ 0x8221dde

/* Dispatcher_CompoundEmblem::SendCreateEmblemInfo(std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > > const&) */

void __thiscall
Dispatcher_CompoundEmblem::SendCreateEmblemInfo(Dispatcher_CompoundEmblem *this,vector *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  CDataManager *this_00;
  int iVar5;
  CStatisticServerProxy *this_01;
  Packet_Emblem_Create_Statistic local_5e [2];
  int aiStack_5c [13];
  __normal_iterator local_28 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_24 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_20 [4];
  int local_1c;
  int local_18;
  int local_14;
  CItem *local_10;
  
  Packet_Emblem_Create_Statistic::Packet_Emblem_Create_Statistic(local_5e);
  uVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1);
  if (uVar3 < 6) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    local_1c = 0;
    while (bVar2 = __gnu_cxx::operator!=(local_24,local_28), bVar2) {
      piVar4 = (int *)__gnu_cxx::
                      __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                      ::operator->(local_24);
      local_18 = *piVar4;
      iVar5 = __gnu_cxx::
              __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
              ::operator->(local_24);
      iVar1 = local_18;
      local_14 = *(int *)(iVar5 + 4);
      this_00 = (CDataManager *)G_CDataManager();
      local_10 = (CItem *)CDataManager::find_item(this_00,iVar1);
      iVar1 = local_1c;
      if (local_10 == (CItem *)0x0) {
        return;
      }
      iVar5 = CItem::get_grade(local_10);
      aiStack_5c[iVar1 + 3] = iVar5;
      aiStack_5c[local_1c + 8] = local_14;
      local_1c = local_1c + 1;
      if (5 < local_1c) break;
      __gnu_cxx::
      __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
      ::operator++(local_20,(int)local_24);
    }
    iVar1 = local_1c;
    iVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1);
    if (iVar1 == iVar5) {
      aiStack_5c[2] = local_1c;
      this_01 = (CStatisticServerProxy *)
                CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                          (GlobalData::s_statistic_proxy_mgr,0);
      CStatisticServerProxy::SendPacket(this_01,(char *)local_5e,0x36);
    }
  }
  return;
}
```
