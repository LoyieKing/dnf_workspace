# StatisticsEmblemCreate

`_ZN19AvatarConvertServer22StatisticsEmblemCreateERKSt6vectorISt4pairIiiESaIS2_EE`

`AvatarConvertServer::StatisticsEmblemCreate(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)`

| 类 | 地址 |
|---|---|
| `AvatarConvertServer` | `0x081931dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081931dc  _ZN19AvatarConvertServer22StatisticsEmblemCreateERKSt6vectorISt4pairIiiESaIS2_EE
#           AvatarConvertServer::StatisticsEmblemCreate(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
# range [0x081931dc, 0x08193357]
081931dc +0x000:  push   %ebp
081931dd +0x001:  mov    %esp,%ebp
081931df +0x003:  push   %ebx
081931e0 +0x004:  sub    $0x74,%esp
081931e3 +0x007:  lea    -0x5a(%ebp),%eax
081931e6 +0x00a:  mov    %eax,(%esp)
081931e9 +0x00d:  call   08110bdc <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xee>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xee
081931ee +0x012:  mov    0x8(%ebp),%eax
081931f1 +0x015:  mov    %eax,(%esp)
081931f4 +0x018:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
081931f9 +0x01d:  cmp    $0x5,%eax
081931fc +0x020:  seta   %al
081931ff +0x023:  test   %al,%al
08193201 +0x025:  jne    0819334c <+0x170>
08193207 +0x02b:  lea    -0x20(%ebp),%eax
0819320a +0x02e:  mov    0x8(%ebp),%edx
0819320d +0x031:  mov    %edx,0x4(%esp)
08193211 +0x035:  mov    %eax,(%esp)
08193214 +0x038:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
08193219 +0x03d:  sub    $0x4,%esp
0819321c +0x040:  lea    -0x24(%ebp),%eax
0819321f +0x043:  mov    0x8(%ebp),%edx
08193222 +0x046:  mov    %edx,0x4(%esp)
08193226 +0x04a:  mov    %eax,(%esp)
08193229 +0x04d:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
0819322e +0x052:  sub    $0x4,%esp
08193231 +0x055:  movl   $0x0,-0x18(%ebp)
08193238 +0x05c:  jmp    081932e4 <+0x108>
0819323d +0x061:  lea    -0x20(%ebp),%eax
08193240 +0x064:  mov    %eax,(%esp)
08193243 +0x067:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
08193248 +0x06c:  mov    (%eax),%eax
0819324a +0x06e:  mov    %eax,-0x14(%ebp)
0819324d +0x071:  lea    -0x20(%ebp),%eax
08193250 +0x074:  mov    %eax,(%esp)
08193253 +0x077:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
08193258 +0x07c:  mov    0x4(%eax),%eax
0819325b +0x07f:  mov    %eax,-0x10(%ebp)
0819325e +0x082:  lea    -0x1c(%ebp),%eax
08193261 +0x085:  movl   $0x0,0x8(%esp)
08193269 +0x08d:  lea    -0x20(%ebp),%edx
0819326c +0x090:  mov    %edx,0x4(%esp)
08193270 +0x094:  mov    %eax,(%esp)
08193273 +0x097:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
08193278 +0x09c:  sub    $0x4,%esp
0819327b +0x09f:  mov    -0x14(%ebp),%ebx
0819327e +0x0a2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08193283 +0x0a7:  mov    %ebx,0x4(%esp)
08193287 +0x0ab:  mov    %eax,(%esp)
0819328a +0x0ae:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0819328f +0x0b3:  mov    %eax,-0xc(%ebp)
08193292 +0x0b6:  cmpl   $0x0,-0xc(%ebp)
08193296 +0x0ba:  je     0819334f <+0x173>
0819329c +0x0c0:  mov    -0xc(%ebp),%eax
0819329f +0x0c3:  mov    (%eax),%eax
081932a1 +0x0c5:  add    $0xc,%eax
081932a4 +0x0c8:  mov    (%eax),%edx
081932a6 +0x0ca:  mov    -0xc(%ebp),%eax
081932a9 +0x0cd:  mov    %eax,(%esp)
081932ac +0x0d0:  call   *%edx
081932ae +0x0d2:  cmp    $0x14,%eax
081932b1 +0x0d5:  setne  %al
081932b4 +0x0d8:  test   %al,%al
081932b6 +0x0da:  jne    081932e3 <+0x107>
081932b8 +0x0dc:  mov    -0x18(%ebp),%ebx
081932bb +0x0df:  mov    -0xc(%ebp),%eax
081932be +0x0e2:  mov    %eax,(%esp)
081932c1 +0x0e5:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
081932c6 +0x0ea:  mov    %eax,-0x4c(%ebp,%ebx,4)
081932ca +0x0ee:  mov    -0x18(%ebp),%edx
081932cd +0x0f1:  mov    -0x10(%ebp),%eax
081932d0 +0x0f4:  add    $0x8,%edx
081932d3 +0x0f7:  mov    %eax,-0x58(%ebp,%edx,4)
081932d7 +0x0fb:  addl   $0x1,-0x18(%ebp)
081932db +0x0ff:  cmpl   $0x5,-0x18(%ebp)
081932df +0x103:  jg     08193300 <+0x124>
081932e1 +0x105:  jmp    081932e4 <+0x108>
081932e3 +0x107:  nop
081932e4 +0x108:  lea    -0x24(%ebp),%eax
081932e7 +0x10b:  mov    %eax,0x4(%esp)
081932eb +0x10f:  lea    -0x20(%ebp),%eax
081932ee +0x112:  mov    %eax,(%esp)
081932f1 +0x115:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
081932f6 +0x11a:  test   %al,%al
081932f8 +0x11c:  jne    0819323d <+0x61>
081932fe +0x122:  jmp    08193301 <+0x125>
08193300 +0x124:  nop
08193301 +0x125:  mov    -0x18(%ebp),%ebx
08193304 +0x128:  mov    0x8(%ebp),%eax
08193307 +0x12b:  mov    %eax,(%esp)
0819330a +0x12e:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0819330f +0x133:  cmp    %eax,%ebx
08193311 +0x135:  setne  %al
08193314 +0x138:  test   %al,%al
08193316 +0x13a:  jne    08193352 <+0x176>
08193318 +0x13c:  mov    -0x18(%ebp),%eax
0819331b +0x13f:  mov    %eax,-0x50(%ebp)
0819331e +0x142:  lea    -0x5a(%ebp),%ebx
08193321 +0x145:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%eax
08193326 +0x14a:  movl   $0x0,0x4(%esp)
0819332e +0x152:  mov    %eax,(%esp)
08193331 +0x155:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
08193336 +0x15a:  movl   $0x36,0x8(%esp)
0819333e +0x162:  mov    %ebx,0x4(%esp)
08193342 +0x166:  mov    %eax,(%esp)
08193345 +0x169:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
0819334a +0x16e:  jmp    08193353 <+0x177>
0819334c +0x170:  nop
0819334d +0x171:  jmp    08193353 <+0x177>
0819334f +0x173:  nop
08193350 +0x174:  jmp    08193353 <+0x177>
08193352 +0x176:  nop
08193353 +0x177:  mov    -0x4(%ebp),%ebx
08193356 +0x17a:  leave
08193357 +0x17b:  ret
```

## 反编译 C

```c
// AvatarConvertServer::StatisticsEmblemCreate @ 0x81931dc

/* AvatarConvertServer::StatisticsEmblemCreate(std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > > const&) */

void AvatarConvertServer::StatisticsEmblemCreate(vector *param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  CDataManager *this;
  int iVar5;
  CStatisticServerProxy *this_00;
  undefined4 uVar6;
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
  uVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1);
  if (uVar2 < 6) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    local_1c = 0;
    do {
      do {
        bVar1 = __gnu_cxx::operator!=(local_24,local_28);
        if (!bVar1) goto LAB_08193301;
        piVar3 = (int *)__gnu_cxx::
                        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                        ::operator->(local_24);
        local_18 = *piVar3;
        iVar4 = __gnu_cxx::
                __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                ::operator->(local_24);
        local_14 = *(int *)(iVar4 + 4);
        uVar6 = 0;
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator++(local_20,(int)local_24);
        iVar4 = local_18;
        this = (CDataManager *)G_CDataManager();
        local_10 = (CItem *)CDataManager::find_item(this,iVar4);
        if (local_10 == (CItem *)0x0) {
          return;
        }
        iVar5 = (**(code **)(*(int *)local_10 + 0xc))(local_10,iVar4,uVar6);
        iVar4 = local_1c;
      } while (iVar5 != 0x14);
      iVar5 = CItem::get_grade(local_10);
      aiStack_5c[iVar4 + 3] = iVar5;
      aiStack_5c[local_1c + 8] = local_14;
      local_1c = local_1c + 1;
    } while (local_1c < 6);
LAB_08193301:
    iVar4 = local_1c;
    iVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1);
    if (iVar4 == iVar5) {
      aiStack_5c[2] = local_1c;
      this_00 = (CStatisticServerProxy *)
                CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                          (GlobalData::s_statistic_proxy_mgr,0);
      CStatisticServerProxy::SendPacket(this_00,(char *)local_5e,0x36);
    }
  }
  return;
}
```
