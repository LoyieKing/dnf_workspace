# SendCreateEmblemInfo

`_ZN25Dispatcher_DisJointAvatar20SendCreateEmblemInfoERKSt6vectorISt4pairIiiESaIS2_EE`

`Dispatcher_DisJointAvatar::SendCreateEmblemInfo(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_DisJointAvatar` | `0x08218a36` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08218a36  _ZN25Dispatcher_DisJointAvatar20SendCreateEmblemInfoERKSt6vectorISt4pairIiiESaIS2_EE
#           Dispatcher_DisJointAvatar::SendCreateEmblemInfo(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
# range [0x08218a36, 0x08218b93]
08218a36 +0x000:  push   %ebp
08218a37 +0x001:  mov    %esp,%ebp
08218a39 +0x003:  push   %ebx
08218a3a +0x004:  sub    $0x74,%esp
08218a3d +0x007:  lea    -0x5a(%ebp),%eax
08218a40 +0x00a:  mov    %eax,(%esp)
08218a43 +0x00d:  call   08110bdc <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xee>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xee
08218a48 +0x012:  mov    0xc(%ebp),%eax
08218a4b +0x015:  mov    %eax,(%esp)
08218a4e +0x018:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08218a53 +0x01d:  cmp    $0x5,%eax
08218a56 +0x020:  seta   %al
08218a59 +0x023:  test   %al,%al
08218a5b +0x025:  jne    08218b87 <+0x151>
08218a61 +0x02b:  lea    -0x20(%ebp),%eax
08218a64 +0x02e:  mov    0xc(%ebp),%edx
08218a67 +0x031:  mov    %edx,0x4(%esp)
08218a6b +0x035:  mov    %eax,(%esp)
08218a6e +0x038:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
08218a73 +0x03d:  sub    $0x4,%esp
08218a76 +0x040:  lea    -0x24(%ebp),%eax
08218a79 +0x043:  mov    0xc(%ebp),%edx
08218a7c +0x046:  mov    %edx,0x4(%esp)
08218a80 +0x04a:  mov    %eax,(%esp)
08218a83 +0x04d:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
08218a88 +0x052:  sub    $0x4,%esp
08218a8b +0x055:  movl   $0x0,-0x18(%ebp)
08218a92 +0x05c:  jmp    08218b1f <+0xe9>
08218a97 +0x061:  lea    -0x20(%ebp),%eax
08218a9a +0x064:  mov    %eax,(%esp)
08218a9d +0x067:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
08218aa2 +0x06c:  mov    (%eax),%eax
08218aa4 +0x06e:  mov    %eax,-0x14(%ebp)
08218aa7 +0x071:  lea    -0x20(%ebp),%eax
08218aaa +0x074:  mov    %eax,(%esp)
08218aad +0x077:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
08218ab2 +0x07c:  mov    0x4(%eax),%eax
08218ab5 +0x07f:  mov    %eax,-0x10(%ebp)
08218ab8 +0x082:  mov    -0x14(%ebp),%ebx
08218abb +0x085:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08218ac0 +0x08a:  mov    %ebx,0x4(%esp)
08218ac4 +0x08e:  mov    %eax,(%esp)
08218ac7 +0x091:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08218acc +0x096:  mov    %eax,-0xc(%ebp)
08218acf +0x099:  cmpl   $0x0,-0xc(%ebp)
08218ad3 +0x09d:  je     08218b8a <+0x154>
08218ad9 +0x0a3:  mov    -0x18(%ebp),%ebx
08218adc +0x0a6:  mov    -0xc(%ebp),%eax
08218adf +0x0a9:  mov    %eax,(%esp)
08218ae2 +0x0ac:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
08218ae7 +0x0b1:  mov    %eax,-0x4c(%ebp,%ebx,4)
08218aeb +0x0b5:  mov    -0x18(%ebp),%edx
08218aee +0x0b8:  mov    -0x10(%ebp),%eax
08218af1 +0x0bb:  add    $0x8,%edx
08218af4 +0x0be:  mov    %eax,-0x58(%ebp,%edx,4)
08218af8 +0x0c2:  addl   $0x1,-0x18(%ebp)
08218afc +0x0c6:  cmpl   $0x5,-0x18(%ebp)
08218b00 +0x0ca:  jg     08218b3b <+0x105>
08218b02 +0x0cc:  lea    -0x1c(%ebp),%eax
08218b05 +0x0cf:  movl   $0x0,0x8(%esp)
08218b0d +0x0d7:  lea    -0x20(%ebp),%edx
08218b10 +0x0da:  mov    %edx,0x4(%esp)
08218b14 +0x0de:  mov    %eax,(%esp)
08218b17 +0x0e1:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
08218b1c +0x0e6:  sub    $0x4,%esp
08218b1f +0x0e9:  lea    -0x24(%ebp),%eax
08218b22 +0x0ec:  mov    %eax,0x4(%esp)
08218b26 +0x0f0:  lea    -0x20(%ebp),%eax
08218b29 +0x0f3:  mov    %eax,(%esp)
08218b2c +0x0f6:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
08218b31 +0x0fb:  test   %al,%al
08218b33 +0x0fd:  jne    08218a97 <+0x61>
08218b39 +0x103:  jmp    08218b3c <+0x106>
08218b3b +0x105:  nop
08218b3c +0x106:  mov    -0x18(%ebp),%ebx
08218b3f +0x109:  mov    0xc(%ebp),%eax
08218b42 +0x10c:  mov    %eax,(%esp)
08218b45 +0x10f:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08218b4a +0x114:  cmp    %eax,%ebx
08218b4c +0x116:  setne  %al
08218b4f +0x119:  test   %al,%al
08218b51 +0x11b:  jne    08218b8d <+0x157>
08218b53 +0x11d:  mov    -0x18(%ebp),%eax
08218b56 +0x120:  mov    %eax,-0x50(%ebp)
08218b59 +0x123:  lea    -0x5a(%ebp),%ebx
08218b5c +0x126:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%eax
08218b61 +0x12b:  movl   $0x0,0x4(%esp)
08218b69 +0x133:  mov    %eax,(%esp)
08218b6c +0x136:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
08218b71 +0x13b:  movl   $0x36,0x8(%esp)
08218b79 +0x143:  mov    %ebx,0x4(%esp)
08218b7d +0x147:  mov    %eax,(%esp)
08218b80 +0x14a:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
08218b85 +0x14f:  jmp    08218b8e <+0x158>
08218b87 +0x151:  nop
08218b88 +0x152:  jmp    08218b8e <+0x158>
08218b8a +0x154:  nop
08218b8b +0x155:  jmp    08218b8e <+0x158>
08218b8d +0x157:  nop
08218b8e +0x158:  mov    -0x4(%ebp),%ebx
08218b91 +0x15b:  leave
08218b92 +0x15c:  ret
08218b93 +0x15d:  nop
```

## 反编译 C

```c
// Dispatcher_DisJointAvatar::SendCreateEmblemInfo @ 0x8218a36

/* Dispatcher_DisJointAvatar::SendCreateEmblemInfo(std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > > const&) */

void __thiscall
Dispatcher_DisJointAvatar::SendCreateEmblemInfo(Dispatcher_DisJointAvatar *this,vector *param_1)

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
