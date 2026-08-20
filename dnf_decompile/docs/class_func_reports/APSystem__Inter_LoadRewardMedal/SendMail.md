# SendMail

`_ZN8APSystem21Inter_LoadRewardMedal8SendMailER5CUserj`

`APSystem::Inter_LoadRewardMedal::SendMail(CUser&, unsigned int)`

| 类 | 地址 |
|---|---|
| `APSystem::Inter_LoadRewardMedal` | `0x08124ea0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08124ea0  _ZN8APSystem21Inter_LoadRewardMedal8SendMailER5CUserj
#           APSystem::Inter_LoadRewardMedal::SendMail(CUser&, unsigned int)
# range [0x08124ea0, 0x0812513b]
08124ea0 +0x000:  push   %ebp
08124ea1 +0x001:  mov    %esp,%ebp
08124ea3 +0x003:  push   %esi
08124ea4 +0x004:  push   %ebx
08124ea5 +0x005:  sub    $0x1b0,%esp
08124eab +0x00b:  movzbl &_ZN8APSystem19CActionPointManager7_IsGMOnE,%eax
08124eb2 +0x012:  movzbl %al,%ebx
08124eb5 +0x015:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08124eba +0x01a:  mov    %ebx,0x4(%esp)
08124ebe +0x01e:  mov    %eax,(%esp)
08124ec1 +0x021:  call   08122ace <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x41>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x41
08124ec6 +0x026:  add    $0x60,%eax
08124ec9 +0x029:  mov    %eax,-0x20(%ebp)
08124ecc +0x02c:  mov    -0x20(%ebp),%eax
08124ecf +0x02f:  mov    %eax,(%esp)
08124ed2 +0x032:  call   0812578c <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x4ef>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x4ef
08124ed7 +0x037:  mov    %eax,-0x1c(%ebp)
08124eda +0x03a:  movl   $0x0,-0x18(%ebp)
08124ee1 +0x041:  movl   $0x0,-0x14(%ebp)
08124ee8 +0x048:  jmp    08124fb2 <+0x112>
08124eed +0x04d:  mov    -0x14(%ebp),%eax
08124ef0 +0x050:  mov    %eax,0x4(%esp)
08124ef4 +0x054:  mov    -0x20(%ebp),%eax
08124ef7 +0x057:  mov    %eax,(%esp)
08124efa +0x05a:  call   081257ac <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x50f>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x50f
08124eff +0x05f:  movzwl (%eax),%eax
08124f02 +0x062:  movzwl %ax,%eax
08124f05 +0x065:  cmp    0x10(%ebp),%eax
08124f08 +0x068:  ja     08124f2f <+0x8f>
08124f0a +0x06a:  mov    -0x14(%ebp),%eax
08124f0d +0x06d:  mov    %eax,0x4(%esp)
08124f11 +0x071:  mov    -0x20(%ebp),%eax
08124f14 +0x074:  mov    %eax,(%esp)
08124f17 +0x077:  call   081257ac <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x50f>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x50f
08124f1c +0x07c:  movzwl 0x2(%eax),%eax
08124f20 +0x080:  movzwl %ax,%eax
08124f23 +0x083:  cmp    0x10(%ebp),%eax
08124f26 +0x086:  jb     08124f2f <+0x8f>
08124f28 +0x088:  mov    $0x1,%eax
08124f2d +0x08d:  jmp    08124f34 <+0x94>
08124f2f +0x08f:  mov    $0x0,%eax
08124f34 +0x094:  test   %al,%al
08124f36 +0x096:  je     08124f4f <+0xaf>
08124f38 +0x098:  mov    -0x14(%ebp),%eax
08124f3b +0x09b:  mov    %eax,0x4(%esp)
08124f3f +0x09f:  mov    -0x20(%ebp),%eax
08124f42 +0x0a2:  mov    %eax,(%esp)
08124f45 +0x0a5:  call   081257ac <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x50f>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x50f
08124f4a +0x0aa:  mov    %eax,-0x18(%ebp)
08124f4d +0x0ad:  jmp    08124fc3 <+0x123>
08124f4f +0x0af:  mov    -0x14(%ebp),%eax
08124f52 +0x0b2:  mov    %eax,0x4(%esp)
08124f56 +0x0b6:  mov    -0x20(%ebp),%eax
08124f59 +0x0b9:  mov    %eax,(%esp)
08124f5c +0x0bc:  call   081257ac <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x50f>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x50f
08124f61 +0x0c1:  movzwl (%eax),%eax
08124f64 +0x0c4:  movzwl %ax,%eax
08124f67 +0x0c7:  cmp    0x10(%ebp),%eax
08124f6a +0x0ca:  ja     08124f8e <+0xee>
08124f6c +0x0cc:  mov    -0x14(%ebp),%eax
08124f6f +0x0cf:  mov    %eax,0x4(%esp)
08124f73 +0x0d3:  mov    -0x20(%ebp),%eax
08124f76 +0x0d6:  mov    %eax,(%esp)
08124f79 +0x0d9:  call   081257ac <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x50f>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x50f
08124f7e +0x0de:  movzwl (%eax),%eax
08124f81 +0x0e1:  cmp    $0x64,%ax
08124f85 +0x0e5:  jne    08124f8e <+0xee>
08124f87 +0x0e7:  mov    $0x1,%eax
08124f8c +0x0ec:  jmp    08124f93 <+0xf3>
08124f8e +0x0ee:  mov    $0x0,%eax
08124f93 +0x0f3:  test   %al,%al
08124f95 +0x0f5:  je     08124fae <+0x10e>
08124f97 +0x0f7:  mov    -0x14(%ebp),%eax
08124f9a +0x0fa:  mov    %eax,0x4(%esp)
08124f9e +0x0fe:  mov    -0x20(%ebp),%eax
08124fa1 +0x101:  mov    %eax,(%esp)
08124fa4 +0x104:  call   081257ac <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x50f>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x50f
08124fa9 +0x109:  mov    %eax,-0x18(%ebp)
08124fac +0x10c:  jmp    08124fc3 <+0x123>
08124fae +0x10e:  addl   $0x1,-0x14(%ebp)
08124fb2 +0x112:  mov    -0x14(%ebp),%eax
08124fb5 +0x115:  cmp    -0x1c(%ebp),%eax
08124fb8 +0x118:  setb   %al
08124fbb +0x11b:  test   %al,%al
08124fbd +0x11d:  jne    08124eed <+0x4d>
08124fc3 +0x123:  cmpl   $0x0,-0x18(%ebp)
08124fc7 +0x127:  je     0812512c <+0x28c>
08124fcd +0x12d:  mov    -0x18(%ebp),%eax
08124fd0 +0x130:  mov    0x4(%eax),%eax
08124fd3 +0x133:  mov    %eax,%ebx
08124fd5 +0x135:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08124fda +0x13a:  mov    %ebx,0x4(%esp)
08124fde +0x13e:  mov    %eax,(%esp)
08124fe1 +0x141:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08124fe6 +0x146:  mov    %eax,-0x10(%ebp)
08124fe9 +0x149:  lea    -0x7b(%ebp),%eax
08124fec +0x14c:  mov    %eax,(%esp)
08124fef +0x14f:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08124ff4 +0x154:  cmpl   $0x0,-0x10(%ebp)
08124ff8 +0x158:  je     0812512c <+0x28c>
08124ffe +0x15e:  mov    -0x10(%ebp),%eax
08125001 +0x161:  mov    (%eax),%eax
08125003 +0x163:  add    $0x8,%eax
08125006 +0x166:  mov    (%eax),%edx
08125008 +0x168:  lea    -0x7b(%ebp),%eax
0812500b +0x16b:  mov    %eax,0x4(%esp)
0812500f +0x16f:  mov    -0x10(%ebp),%eax
08125012 +0x172:  mov    %eax,(%esp)
08125015 +0x175:  call   *%edx
08125017 +0x177:  mov    -0x18(%ebp),%eax
0812501a +0x17a:  movzwl 0x8(%eax),%eax
0812501e +0x17e:  movzwl %ax,%eax
08125021 +0x181:  mov    %eax,-0x74(%ebp)
08125024 +0x184:  mov    -0x18(%ebp),%eax
08125027 +0x187:  mov    0x4(%eax),%eax
0812502a +0x18a:  mov    %eax,-0x79(%ebp)
0812502d +0x18d:  movl   $0x8,-0xc(%ebp)
08125034 +0x194:  movl   $0x0,0xc(%esp)
0812503c +0x19c:  movl   $"chn_game_server_msg_82",0x8(%esp)
08125044 +0x1a4:  movl   $0x4,0x4(%esp)
0812504c +0x1ac:  movl   $&g_scriptStringManager_,(%esp)
08125053 +0x1b3:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08125058 +0x1b8:  movl   $0x1d,0x8(%esp)
08125060 +0x1c0:  mov    %eax,0x4(%esp)
08125064 +0x1c4:  lea    -0x3e(%ebp),%eax
08125067 +0x1c7:  mov    %eax,(%esp)
0812506a +0x1ca:  call   0807d8d0 <_init+0x1c8>
0812506f +0x1cf:  movl   $0x0,0xc(%esp)
08125077 +0x1d7:  movl   $"chn_game_server_msg_83",0x8(%esp)
0812507f +0x1df:  movl   $0x4,0x4(%esp)
08125087 +0x1e7:  movl   $&g_scriptStringManager_,(%esp)
0812508e +0x1ee:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08125093 +0x1f3:  movl   $0xff,0x8(%esp)
0812509b +0x1fb:  mov    %eax,0x4(%esp)
0812509f +0x1ff:  lea    -0x17b(%ebp),%eax
081250a5 +0x205:  mov    %eax,(%esp)
081250a8 +0x208:  call   0807d8d0 <_init+0x1c8>
081250ad +0x20d:  mov    0xc(%ebp),%eax
081250b0 +0x210:  mov    %eax,(%esp)
081250b3 +0x213:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081250b8 +0x218:  mov    %eax,%ebx
081250ba +0x21a:  lea    -0x17b(%ebp),%eax
081250c0 +0x220:  mov    %eax,(%esp)
081250c3 +0x223:  call   0807e3b0 <_init+0xca8>
081250c8 +0x228:  mov    %eax,%esi
081250ca +0x22a:  movl   $0xffffffff,0x4(%esp)
081250d2 +0x232:  mov    0xc(%ebp),%eax
081250d5 +0x235:  mov    %eax,(%esp)
081250d8 +0x238:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081250dd +0x23d:  movl   $0x0,0x24(%esp)
081250e5 +0x245:  movl   $0x0,0x20(%esp)
081250ed +0x24d:  mov    %ebx,0x1c(%esp)
081250f1 +0x251:  movl   $0x8,0x18(%esp)
081250f9 +0x259:  mov    %esi,0x14(%esp)
081250fd +0x25d:  lea    -0x17b(%ebp),%edx
08125103 +0x263:  mov    %edx,0x10(%esp)
08125107 +0x267:  mov    %eax,0xc(%esp)
0812510b +0x26b:  movl   $0x0,0x8(%esp)
08125113 +0x273:  lea    -0x7b(%ebp),%eax
08125116 +0x276:  mov    %eax,0x4(%esp)
0812511a +0x27a:  lea    -0x3e(%ebp),%eax
0812511d +0x27d:  mov    %eax,(%esp)
08125120 +0x280:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
08125125 +0x285:  mov    $0x1,%eax
0812512a +0x28a:  jmp    08125131 <+0x291>
0812512c +0x28c:  mov    $0x0,%eax
08125131 +0x291:  add    $0x1b0,%esp
08125137 +0x297:  pop    %ebx
08125138 +0x298:  pop    %esi
08125139 +0x299:  pop    %ebp
0812513a +0x29a:  ret
0812513b +0x29b:  nop
```

## 反编译 C

```c
// APSystem::Inter_LoadRewardMedal::SendMail @ 0x8124ea0

/* APSystem::Inter_LoadRewardMedal::SendMail(CUser&, unsigned int) */

undefined4 __thiscall
APSystem::Inter_LoadRewardMedal::SendMail(Inter_LoadRewardMedal *this,CUser *param_1,uint param_2)

{
  bool bVar1;
  CDataManager *pCVar2;
  int iVar3;
  ushort *puVar4;
  short *psVar5;
  char *pcVar6;
  undefined4 uVar7;
  size_t sVar8;
  undefined4 uVar9;
  char local_17f [256];
  Inven_Item local_7f [2];
  undefined4 local_7d;
  uint local_78;
  char local_42 [30];
  vector<APSystem::_MedalRewardItem,std::allocator<APSystem::_MedalRewardItem>> *local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int *local_14;
  undefined4 local_10;
  
  bVar1 = (bool)CActionPointManager::_IsGMOn;
  pCVar2 = (CDataManager *)G_CDataManager();
  iVar3 = CDataManager::GetActionPointEtcParameter(pCVar2,bVar1);
  local_24 = (vector<APSystem::_MedalRewardItem,std::allocator<APSystem::_MedalRewardItem>> *)
             (iVar3 + 0x60);
  local_20 = std::vector<APSystem::_MedalRewardItem,std::allocator<APSystem::_MedalRewardItem>>::
             size(local_24);
  local_1c = 0;
  local_18 = 0;
  do {
    if (local_20 <= local_18) {
LAB_08124fc3:
      if (local_1c != 0) {
        iVar3 = *(int *)(local_1c + 4);
        pCVar2 = (CDataManager *)G_CDataManager();
        local_14 = (int *)CDataManager::find_item(pCVar2,iVar3);
        Inven_Item::Inven_Item(local_7f);
        if (local_14 != (int *)0x0) {
          (**(code **)(*local_14 + 8))(local_14,local_7f);
          local_78 = (uint)*(ushort *)(local_1c + 8);
          local_7d = *(undefined4 *)(local_1c + 4);
          local_10 = 8;
          pcVar6 = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                      "chn_game_server_msg_82",(bool *)0x0);
          strncpy(local_42,pcVar6,0x1d);
          pcVar6 = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                      "chn_game_server_msg_83",(bool *)0x0);
          strncpy(local_17f,pcVar6,0xff);
          uVar7 = CUser::GetServerGroup(param_1);
          sVar8 = strlen(local_17f);
          uVar9 = CUser::get_charac_no(param_1,-1);
          WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                    (local_42,local_7f,0,uVar9,local_17f,sVar8,8,uVar7,0,0);
          return 1;
        }
      }
      return 0;
    }
    puVar4 = (ushort *)
             std::vector<APSystem::_MedalRewardItem,std::allocator<APSystem::_MedalRewardItem>>::
             operator[](local_24,local_18);
    if ((param_2 < *puVar4) ||
       (iVar3 = std::vector<APSystem::_MedalRewardItem,std::allocator<APSystem::_MedalRewardItem>>::
                operator[](local_24,local_18), *(ushort *)(iVar3 + 2) < param_2)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_1c = std::vector<APSystem::_MedalRewardItem,std::allocator<APSystem::_MedalRewardItem>>
                 ::operator[](local_24,local_18);
      goto LAB_08124fc3;
    }
    puVar4 = (ushort *)
             std::vector<APSystem::_MedalRewardItem,std::allocator<APSystem::_MedalRewardItem>>::
             operator[](local_24,local_18);
    if ((param_2 < *puVar4) ||
       (psVar5 = (short *)std::
                          vector<APSystem::_MedalRewardItem,std::allocator<APSystem::_MedalRewardItem>>
                          ::operator[](local_24,local_18), *psVar5 != 100)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_1c = std::vector<APSystem::_MedalRewardItem,std::allocator<APSystem::_MedalRewardItem>>
                 ::operator[](local_24,local_18);
      goto LAB_08124fc3;
    }
    local_18 = local_18 + 1;
  } while( true );
}
```
