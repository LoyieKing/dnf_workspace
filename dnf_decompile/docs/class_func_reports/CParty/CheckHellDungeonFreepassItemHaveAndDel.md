# CheckHellDungeonFreepassItemHaveAndDel

`_ZN6CParty38CheckHellDungeonFreepassItemHaveAndDelEP5CUserb`

`CParty::CheckHellDungeonFreepassItemHaveAndDel(CUser*, bool)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085bc86e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bc86e  _ZN6CParty38CheckHellDungeonFreepassItemHaveAndDelEP5CUserb
#           CParty::CheckHellDungeonFreepassItemHaveAndDel(CUser*, bool)
# range [0x085bc86e, 0x085bca89]
085bc86e +0x000:  push   %ebp
085bc86f +0x001:  mov    %esp,%ebp
085bc871 +0x003:  push   %esi
085bc872 +0x004:  push   %ebx
085bc873 +0x005:  sub    $0x60,%esp
085bc876 +0x008:  mov    0x10(%ebp),%eax
085bc879 +0x00b:  mov    %al,-0x3c(%ebp)
085bc87c +0x00e:  movl   $0x0,-0x10(%ebp)
085bc883 +0x015:  mov    0x8(%ebp),%eax
085bc886 +0x018:  mov    0x1868(%eax),%eax
085bc88c +0x01e:  test   %eax,%eax
085bc88e +0x020:  jne    085bc8e7 <+0x79>
085bc890 +0x022:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085bc895 +0x027:  mov    0xc(%ebp),%edx
085bc898 +0x02a:  mov    %edx,0x4(%esp)
085bc89c +0x02e:  mov    %eax,(%esp)
085bc89f +0x031:  call   086cebe0 <_ZN9GameWorld16GetWorldMapIndexEP5CUser>  ; GameWorld::GetWorldMapIndex(CUser*)
085bc8a4 +0x036:  mov    %eax,-0xc(%ebp)
085bc8a7 +0x039:  cmpl   $0x0,-0xc(%ebp)
085bc8ab +0x03d:  jle    085bc8d0 <+0x62>
085bc8ad +0x03f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085bc8b2 +0x044:  lea    0x8780(%eax),%edx
085bc8b8 +0x04a:  mov    -0xc(%ebp),%eax
085bc8bb +0x04d:  mov    %eax,0x4(%esp)
085bc8bf +0x051:  mov    %edx,(%esp)
085bc8c2 +0x054:  call   083647a2 <_ZNK13CWorldMapList14find_world_mapEi>  ; CWorldMapList::find_world_map(int) const
085bc8c7 +0x059:  mov    0x8(%ebp),%edx
085bc8ca +0x05c:  mov    %eax,0x1868(%edx)
085bc8d0 +0x062:  mov    0x8(%ebp),%eax
085bc8d3 +0x065:  mov    0x1868(%eax),%eax
085bc8d9 +0x06b:  test   %eax,%eax
085bc8db +0x06d:  jne    085bc8e7 <+0x79>
085bc8dd +0x06f:  mov    $0x0,%eax
085bc8e2 +0x074:  jmp    085bca7f <+0x211>
085bc8e7 +0x079:  mov    0x8(%ebp),%eax
085bc8ea +0x07c:  mov    0x1868(%eax),%eax
085bc8f0 +0x082:  lea    0x28(%eax),%edx
085bc8f3 +0x085:  lea    -0x28(%ebp),%eax
085bc8f6 +0x088:  mov    %edx,0x4(%esp)
085bc8fa +0x08c:  mov    %eax,(%esp)
085bc8fd +0x08f:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
085bc902 +0x094:  sub    $0x4,%esp
085bc905 +0x097:  lea    -0x28(%ebp),%eax
085bc908 +0x09a:  mov    %eax,0x4(%esp)
085bc90c +0x09e:  lea    -0x2c(%ebp),%eax
085bc90f +0x0a1:  mov    %eax,(%esp)
085bc912 +0x0a4:  call   08387922 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x173c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x173c2
085bc917 +0x0a9:  jmp    085bca32 <+0x1c4>
085bc91c +0x0ae:  lea    -0x2c(%ebp),%eax
085bc91f +0x0b1:  mov    %eax,(%esp)
085bc922 +0x0b4:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
085bc927 +0x0b9:  mov    (%eax),%ebx
085bc929 +0x0bb:  mov    0xc(%ebp),%eax
085bc92c +0x0be:  mov    %eax,(%esp)
085bc92f +0x0c1:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085bc934 +0x0c6:  mov    %ebx,0x4(%esp)
085bc938 +0x0ca:  mov    %eax,(%esp)
085bc93b +0x0cd:  call   08505172 <_ZNK10CInventory16check_item_existEi>  ; CInventory::check_item_exist(int) const
085bc940 +0x0d2:  mov    %eax,-0x10(%ebp)
085bc943 +0x0d5:  cmpl   $0xffffffff,-0x10(%ebp)
085bc947 +0x0d9:  je     085bca27 <+0x1b9>
085bc94d +0x0df:  cmpb   $0x0,-0x3c(%ebp)
085bc951 +0x0e3:  je     085bca6c <+0x1fe>
085bc957 +0x0e9:  lea    -0x2c(%ebp),%eax
085bc95a +0x0ec:  mov    %eax,(%esp)
085bc95d +0x0ef:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
085bc962 +0x0f4:  mov    0x4(%eax),%ebx
085bc965 +0x0f7:  mov    0xc(%ebp),%eax
085bc968 +0x0fa:  mov    %eax,(%esp)
085bc96b +0x0fd:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085bc970 +0x102:  movl   $0x1,0x14(%esp)
085bc978 +0x10a:  movl   $0x17,0x10(%esp)
085bc980 +0x112:  mov    %ebx,0xc(%esp)
085bc984 +0x116:  mov    -0x10(%ebp),%edx
085bc987 +0x119:  mov    %edx,0x8(%esp)
085bc98b +0x11d:  movl   $0x1,0x4(%esp)
085bc993 +0x125:  mov    %eax,(%esp)
085bc996 +0x128:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
085bc99b +0x12d:  xor    $0x1,%eax
085bc99e +0x130:  test   %al,%al
085bc9a0 +0x132:  je     085bca03 <+0x195>
085bc9a2 +0x134:  lea    -0x2c(%ebp),%eax
085bc9a5 +0x137:  mov    %eax,(%esp)
085bc9a8 +0x13a:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
085bc9ad +0x13f:  mov    (%eax),%esi
085bc9af +0x141:  mov    0xc(%ebp),%eax
085bc9b2 +0x144:  mov    %eax,(%esp)
085bc9b5 +0x147:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085bc9ba +0x14c:  mov    %eax,%ebx
085bc9bc +0x14e:  movl   $0x5,0xc(%esp)
085bc9c4 +0x156:  movl   $0x44fb,0x8(%esp)
085bc9cc +0x15e:  movl   $&_ZZN6CParty38CheckHellDungeonFreepassItemHaveAndDelEP5CUserbE19__PRETTY_FUNCTION__,0x4(%esp)
085bc9d4 +0x166:  lea    -0x20(%ebp),%eax
085bc9d7 +0x169:  mov    %eax,(%esp)
085bc9da +0x16c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085bc9df +0x171:  mov    %esi,0x10(%esp)
085bc9e3 +0x175:  mov    -0x10(%ebp),%eax
085bc9e6 +0x178:  mov    %eax,0xc(%esp)
085bc9ea +0x17c:  mov    %ebx,0x8(%esp)
085bc9ee +0x180:  movl   $"CParty::UseSealDoorItems, freepass delete_item failed , User ch=%d , %d %d",0x4(%esp)
085bc9f6 +0x188:  lea    -0x20(%ebp),%eax
085bc9f9 +0x18b:  mov    %eax,(%esp)
085bc9fc +0x18e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085bca01 +0x193:  jmp    085bca27 <+0x1b9>
085bca03 +0x195:  mov    -0x10(%ebp),%eax
085bca06 +0x198:  mov    %eax,0xc(%esp)
085bca0a +0x19c:  movl   $0x0,0x8(%esp)
085bca12 +0x1a4:  movl   $0x1,0x4(%esp)
085bca1a +0x1ac:  mov    0xc(%ebp),%eax
085bca1d +0x1af:  mov    %eax,(%esp)
085bca20 +0x1b2:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
085bca25 +0x1b7:  jmp    085bca6d <+0x1ff>
085bca27 +0x1b9:  lea    -0x2c(%ebp),%eax
085bca2a +0x1bc:  mov    %eax,(%esp)
085bca2d +0x1bf:  call   0823dcd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x8e4e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x8e4e
085bca32 +0x1c4:  mov    0x8(%ebp),%eax
085bca35 +0x1c7:  mov    0x1868(%eax),%eax
085bca3b +0x1cd:  lea    0x28(%eax),%edx
085bca3e +0x1d0:  lea    -0x24(%ebp),%eax
085bca41 +0x1d3:  mov    %edx,0x4(%esp)
085bca45 +0x1d7:  mov    %eax,(%esp)
085bca48 +0x1da:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
085bca4d +0x1df:  sub    $0x4,%esp
085bca50 +0x1e2:  lea    -0x24(%ebp),%eax
085bca53 +0x1e5:  mov    %eax,0x4(%esp)
085bca57 +0x1e9:  lea    -0x2c(%ebp),%eax
085bca5a +0x1ec:  mov    %eax,(%esp)
085bca5d +0x1ef:  call   0838793c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x173dc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x173dc
085bca62 +0x1f4:  test   %al,%al
085bca64 +0x1f6:  jne    085bc91c <+0xae>
085bca6a +0x1fc:  jmp    085bca6d <+0x1ff>
085bca6c +0x1fe:  nop
085bca6d +0x1ff:  cmpl   $0x0,-0x10(%ebp)
085bca71 +0x203:  jle    085bca7a <+0x20c>
085bca73 +0x205:  mov    $0x1,%eax
085bca78 +0x20a:  jmp    085bca7f <+0x211>
085bca7a +0x20c:  mov    $0x0,%eax
085bca7f +0x211:  lea    -0x8(%ebp),%esp
085bca82 +0x214:  add    $0x0,%esp
085bca85 +0x217:  pop    %ebx
085bca86 +0x218:  pop    %esi
085bca87 +0x219:  pop    %ebp
085bca88 +0x21a:  ret
085bca89 +0x21b:  nop
```

## 反编译 C

```c
// CParty::CheckHellDungeonFreepassItemHaveAndDel @ 0x85bc86e

/* CParty::CheckHellDungeonFreepassItemHaveAndDel(CUser*, bool) */

bool __thiscall
CParty::CheckHellDungeonFreepassItemHaveAndDel(CParty *this,CUser *param_1,bool param_2)

{
  char cVar1;
  bool bVar2;
  GameWorld *this_00;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  CInventory *pCVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_30 [4];
  __normal_iterator local_2c [4];
  __normal_iterator local_28 [4];
  cMyTrace local_24 [16];
  int local_14;
  int local_10;
  
  local_14 = 0;
  if (*(int *)(this + 0x1868) == 0) {
    this_00 = (GameWorld *)G_GameWorld();
    local_10 = GameWorld::GetWorldMapIndex(this_00,param_1);
    if (0 < local_10) {
      iVar3 = G_CDataManager();
      uVar4 = CWorldMapList::find_world_map(iVar3 + 0x8780);
      *(undefined4 *)(this + 0x1868) = uVar4;
    }
    if (*(int *)(this + 0x1868) == 0) {
      return false;
    }
  }
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  __gnu_cxx::
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  ::__normal_iterator<std::pair<int,int>*>(local_30,local_2c);
  do {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    bVar2 = __gnu_cxx::operator!=(local_30,local_28);
    if (!bVar2) {
LAB_085bca6d:
      return 0 < local_14;
    }
    piVar5 = (int *)__gnu_cxx::
                    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                    ::operator->(local_30);
    iVar3 = *piVar5;
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    local_14 = CInventory::check_item_exist(pCVar6,iVar3);
    if (local_14 != -1) {
      if (!param_2) goto LAB_085bca6d;
      iVar3 = __gnu_cxx::
              __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
              ::operator->(local_30);
      uVar4 = *(undefined4 *)(iVar3 + 4);
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      cVar1 = CInventory::delete_item(pCVar6,1,local_14,uVar4,0x17,1);
      if (cVar1 == '\x01') {
        CUser::SendUpdateItem(param_1,1,0,local_14);
        goto LAB_085bca6d;
      }
      puVar7 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
               ::operator->(local_30);
      uVar4 = *puVar7;
      uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      cMyTrace::cMyTrace(local_24,
                         "bool CParty::CheckHellDungeonFreepassItemHaveAndDel(CUser*, bool)",0x44fb,
                         5);
      cMyTrace::operator()
                (local_24,
                 "CParty::UseSealDoorItems, freepass delete_item failed , User ch=%d , %d %d",uVar8,
                 local_14,uVar4);
    }
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_30);
  } while( true );
}
```
