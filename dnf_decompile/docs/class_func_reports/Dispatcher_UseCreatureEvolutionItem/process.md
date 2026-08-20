# process

`_ZN35Dispatcher_UseCreatureEvolutionItem7processEP5CUserhsi`

`Dispatcher_UseCreatureEvolutionItem::process(CUser*, unsigned char, short, int)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UseCreatureEvolutionItem` | `0x08228bcc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08228bcc  _ZN35Dispatcher_UseCreatureEvolutionItem7processEP5CUserhsi
#           Dispatcher_UseCreatureEvolutionItem::process(CUser*, unsigned char, short, int)
# range [0x08228bcc, 0x08228e5d]
08228bcc +0x000:  push   %ebp
08228bcd +0x001:  mov    %esp,%ebp
08228bcf +0x003:  push   %edi
08228bd0 +0x004:  push   %esi
08228bd1 +0x005:  push   %ebx
08228bd2 +0x006:  sub    $0x7c,%esp
08228bd5 +0x009:  mov    0x10(%ebp),%edx
08228bd8 +0x00c:  mov    0x14(%ebp),%eax
08228bdb +0x00f:  mov    %dl,-0x5c(%ebp)
08228bde +0x012:  mov    %ax,-0x60(%ebp)
08228be2 +0x016:  movswl -0x60(%ebp),%esi
08228be6 +0x01a:  movzbl -0x5c(%ebp),%eax
08228bea +0x01e:  mov    %eax,(%esp)
08228bed +0x021:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
08228bf2 +0x026:  mov    %eax,%ebx
08228bf4 +0x028:  mov    0xc(%ebp),%eax
08228bf7 +0x02b:  mov    %eax,(%esp)
08228bfa +0x02e:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08228bff +0x033:  mov    %esi,0x8(%esp)
08228c03 +0x037:  mov    %ebx,0x4(%esp)
08228c07 +0x03b:  mov    %eax,(%esp)
08228c0a +0x03e:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
08228c0f +0x043:  mov    %eax,-0x24(%ebp)
08228c12 +0x046:  cmpl   $0x0,-0x24(%ebp)
08228c16 +0x04a:  jne    08228c22 <+0x56>
08228c18 +0x04c:  mov    $0x4,%eax
08228c1d +0x051:  jmp    08228e56 <+0x28a>
08228c22 +0x056:  mov    -0x24(%ebp),%eax
08228c25 +0x059:  mov    0x2(%eax),%eax
08228c28 +0x05c:  mov    %eax,%ebx
08228c2a +0x05e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08228c2f +0x063:  mov    %ebx,0x4(%esp)
08228c33 +0x067:  mov    %eax,(%esp)
08228c36 +0x06a:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08228c3b +0x06f:  mov    %eax,-0x20(%ebp)
08228c3e +0x072:  cmpl   $0x0,-0x20(%ebp)
08228c42 +0x076:  jne    08228c9f <+0xd3>
08228c44 +0x078:  mov    0xc(%ebp),%eax
08228c47 +0x07b:  mov    %eax,(%esp)
08228c4a +0x07e:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08228c4f +0x083:  mov    %eax,%ebx
08228c51 +0x085:  mov    -0x24(%ebp),%eax
08228c54 +0x088:  mov    0x2(%eax),%esi
08228c57 +0x08b:  movl   $0x5,0xc(%esp)
08228c5f +0x093:  movl   $0xe621,0x8(%esp)
08228c67 +0x09b:  movl   $&_ZZN35Dispatcher_UseCreatureEvolutionItem7processEP5CUserhsiE19__PRETTY_FUNCTION__,0x4(%esp)
08228c6f +0x0a3:  lea    -0x58(%ebp),%eax
08228c72 +0x0a6:  mov    %eax,(%esp)
08228c75 +0x0a9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08228c7a +0x0ae:  mov    %ebx,0xc(%esp)
08228c7e +0x0b2:  mov    %esi,0x8(%esp)
08228c82 +0x0b6:  movl   $"Dispatcher_UseCreatureEvolutionItem not found item_id(%d), charac_no(%d)\n",0x4(%esp)
08228c8a +0x0be:  lea    -0x58(%ebp),%eax
08228c8d +0x0c1:  mov    %eax,(%esp)
08228c90 +0x0c4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08228c95 +0x0c9:  mov    $0x15,%eax
08228c9a +0x0ce:  jmp    08228e56 <+0x28a>
08228c9f +0x0d3:  mov    -0x20(%ebp),%eax
08228ca2 +0x0d6:  mov    %eax,(%esp)
08228ca5 +0x0d9:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08228caa +0x0de:  xor    $0x1,%eax
08228cad +0x0e1:  test   %al,%al
08228caf +0x0e3:  je     08228d0c <+0x140>
08228cb1 +0x0e5:  mov    0xc(%ebp),%eax
08228cb4 +0x0e8:  mov    %eax,(%esp)
08228cb7 +0x0eb:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08228cbc +0x0f0:  mov    %eax,%ebx
08228cbe +0x0f2:  mov    -0x24(%ebp),%eax
08228cc1 +0x0f5:  mov    0x2(%eax),%esi
08228cc4 +0x0f8:  movl   $0x5,0xc(%esp)
08228ccc +0x100:  movl   $0xe627,0x8(%esp)
08228cd4 +0x108:  movl   $&_ZZN35Dispatcher_UseCreatureEvolutionItem7processEP5CUserhsiE19__PRETTY_FUNCTION__,0x4(%esp)
08228cdc +0x110:  lea    -0x48(%ebp),%eax
08228cdf +0x113:  mov    %eax,(%esp)
08228ce2 +0x116:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08228ce7 +0x11b:  mov    %ebx,0xc(%esp)
08228ceb +0x11f:  mov    %esi,0x8(%esp)
08228cef +0x123:  movl   $"Dispatcher_UseCreatureEvolutionItem item_id(%d) is not stackable charac_no(%d)\n",0x4(%esp)
08228cf7 +0x12b:  lea    -0x48(%ebp),%eax
08228cfa +0x12e:  mov    %eax,(%esp)
08228cfd +0x131:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08228d02 +0x136:  mov    $0x17,%eax
08228d07 +0x13b:  jmp    08228e56 <+0x28a>
08228d0c +0x140:  mov    -0x20(%ebp),%eax
08228d0f +0x143:  mov    %eax,-0x1c(%ebp)
08228d12 +0x146:  mov    0xc(%ebp),%eax
08228d15 +0x149:  mov    %eax,(%esp)
08228d18 +0x14c:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08228d1d +0x151:  mov    %eax,(%esp)
08228d20 +0x154:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
08228d25 +0x159:  mov    %eax,(%esp)
08228d28 +0x15c:  call   08338f36 <_ZN13user_creature12CCreatureMgr16GetCreatureIndexEv>  ; user_creature::CCreatureMgr::GetCreatureIndex()
08228d2d +0x161:  mov    -0x1c(%ebp),%edx
08228d30 +0x164:  mov    0x360(%edx),%edx
08228d36 +0x16a:  cmp    %edx,%eax
08228d38 +0x16c:  setne  %al
08228d3b +0x16f:  test   %al,%al
08228d3d +0x171:  je     08228dd2 <+0x206>
08228d43 +0x177:  mov    0xc(%ebp),%eax
08228d46 +0x17a:  mov    %eax,(%esp)
08228d49 +0x17d:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08228d4e +0x182:  mov    %eax,%esi
08228d50 +0x184:  mov    -0x24(%ebp),%eax
08228d53 +0x187:  mov    0x2(%eax),%eax
08228d56 +0x18a:  mov    %eax,-0x64(%ebp)
08228d59 +0x18d:  mov    -0x1c(%ebp),%eax
08228d5c +0x190:  mov    0x360(%eax),%edi
08228d62 +0x196:  mov    0xc(%ebp),%eax
08228d65 +0x199:  mov    %eax,(%esp)
08228d68 +0x19c:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08228d6d +0x1a1:  mov    %eax,(%esp)
08228d70 +0x1a4:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
08228d75 +0x1a9:  mov    %eax,(%esp)
08228d78 +0x1ac:  call   08338f36 <_ZN13user_creature12CCreatureMgr16GetCreatureIndexEv>  ; user_creature::CCreatureMgr::GetCreatureIndex()
08228d7d +0x1b1:  mov    %eax,%ebx
08228d7f +0x1b3:  movl   $0x5,0xc(%esp)
08228d87 +0x1bb:  movl   $0xe62f,0x8(%esp)
08228d8f +0x1c3:  movl   $&_ZZN35Dispatcher_UseCreatureEvolutionItem7processEP5CUserhsiE19__PRETTY_FUNCTION__,0x4(%esp)
08228d97 +0x1cb:  lea    -0x38(%ebp),%eax
08228d9a +0x1ce:  mov    %eax,(%esp)
08228d9d +0x1d1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08228da2 +0x1d6:  mov    %esi,0x14(%esp)
08228da6 +0x1da:  mov    -0x64(%ebp),%eax
08228da9 +0x1dd:  mov    %eax,0x10(%esp)
08228dad +0x1e1:  mov    %edi,0xc(%esp)
08228db1 +0x1e5:  mov    %ebx,0x8(%esp)
08228db5 +0x1e9:  movl   $"Dispatcher_UseCreatureEvolutionItem cur_creatureid(%d) != item_base_creature_id(%d) charac_no(%d)\n",0x4(%esp)
08228dbd +0x1f1:  lea    -0x38(%ebp),%eax
08228dc0 +0x1f4:  mov    %eax,(%esp)
08228dc3 +0x1f7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08228dc8 +0x1fc:  mov    $0x7,%eax
08228dcd +0x201:  jmp    08228e56 <+0x28a>
08228dd2 +0x206:  mov    0xc(%ebp),%eax
08228dd5 +0x209:  mov    %eax,(%esp)
08228dd8 +0x20c:  call   0819340a <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x72>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x72
08228ddd +0x211:  mov    %eax,(%esp)
08228de0 +0x214:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
08228de5 +0x219:  mov    0x18(%ebp),%edx
08228de8 +0x21c:  mov    %edx,0x4(%esp)
08228dec +0x220:  mov    %eax,(%esp)
08228def +0x223:  call   0833d6c2 <_ZN13user_creature12CCreatureMgr11ItemEvoluteEi>  ; user_creature::CCreatureMgr::ItemEvolute(int)
08228df4 +0x228:  test   %al,%al
08228df6 +0x22a:  je     08228e28 <+0x25c>
08228df8 +0x22c:  mov    0xc(%ebp),%eax
08228dfb +0x22f:  mov    %eax,(%esp)
08228dfe +0x232:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08228e03 +0x237:  mov    %eax,0xc(%esp)
08228e07 +0x23b:  mov    0x18(%ebp),%eax
08228e0a +0x23e:  mov    %eax,0x8(%esp)
08228e0e +0x242:  movl   $"ItemEvolute Succ evolution_creature_id(%d), charac_no(%d)",0x4(%esp)
08228e16 +0x24a:  lea    -0x26(%ebp),%eax
08228e19 +0x24d:  mov    %eax,(%esp)
08228e1c +0x250:  call   0854f990 <_ZN13cHistoryTraceclEPKcz>  ; cHistoryTrace::operator()(char const*, ...)
08228e21 +0x255:  mov    $0x0,%eax
08228e26 +0x25a:  jmp    08228e56 <+0x28a>
08228e28 +0x25c:  mov    0xc(%ebp),%eax
08228e2b +0x25f:  mov    %eax,(%esp)
08228e2e +0x262:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08228e33 +0x267:  mov    %eax,0xc(%esp)
08228e37 +0x26b:  mov    0x18(%ebp),%eax
08228e3a +0x26e:  mov    %eax,0x8(%esp)
08228e3e +0x272:  movl   $"ItemEvolute Fail evolution_creature_id(%d), charac_no(%d)",0x4(%esp)
08228e46 +0x27a:  lea    -0x25(%ebp),%eax
08228e49 +0x27d:  mov    %eax,(%esp)
08228e4c +0x280:  call   0854f990 <_ZN13cHistoryTraceclEPKcz>  ; cHistoryTrace::operator()(char const*, ...)
08228e51 +0x285:  mov    $0x1,%eax
08228e56 +0x28a:  add    $0x7c,%esp
08228e59 +0x28d:  pop    %ebx
08228e5a +0x28e:  pop    %esi
08228e5b +0x28f:  pop    %edi
08228e5c +0x290:  pop    %ebp
08228e5d +0x291:  ret
```

## 反编译 C

```c
// Dispatcher_UseCreatureEvolutionItem::process @ 0x8228bcc

/* Dispatcher_UseCreatureEvolutionItem::process(CUser*, unsigned char, short, int) */

undefined4 __thiscall
Dispatcher_UseCreatureEvolutionItem::process
          (Dispatcher_UseCreatureEvolutionItem *this,CUser *param_1,uchar param_2,short param_3,
          int param_4)

{
  char cVar1;
  int iVar2;
  CInventory *pCVar3;
  undefined4 uVar4;
  CDataManager *this_00;
  undefined4 uVar5;
  CCreatureMgr *pCVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  cMyTrace local_3c [18];
  cHistoryTrace local_2a;
  cHistoryTrace local_29;
  int local_28;
  CItem *local_24;
  CItem *local_20;
  
  iVar2 = GetInvenTypeFromItemSpace(param_2);
  pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  local_28 = CInventory::GetInvenRef(pCVar3,iVar2,(int)param_3);
  if (local_28 == 0) {
    uVar4 = 4;
  }
  else {
    iVar2 = *(int *)(local_28 + 2);
    this_00 = (CDataManager *)G_CDataManager();
    local_24 = (CItem *)CDataManager::find_item(this_00,iVar2);
    if (local_24 == (CItem *)0x0) {
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      uVar4 = *(undefined4 *)(local_28 + 2);
      cMyTrace::cMyTrace(local_5c,
                         "int Dispatcher_UseCreatureEvolutionItem::process(CUser*, unsigned char, short int, int)"
                         ,0xe621,5);
      cMyTrace::operator()
                (local_5c,
                 "Dispatcher_UseCreatureEvolutionItem not found item_id(%d), charac_no(%d)\n",uVar4,
                 uVar5);
      uVar4 = 0x15;
    }
    else {
      cVar1 = CItem::is_stackable(local_24);
      if (cVar1 == '\x01') {
        local_20 = local_24;
        pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        pCVar6 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar3);
        iVar2 = user_creature::CCreatureMgr::GetCreatureIndex(pCVar6);
        if (iVar2 == *(int *)(local_20 + 0x360)) {
          pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenRefW((CUserCharacInfo *)param_1);
          pCVar6 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar3);
          cVar1 = user_creature::CCreatureMgr::ItemEvolute(pCVar6,param_4);
          if (cVar1 == '\0') {
            uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            cHistoryTrace::operator()
                      (&local_29,"ItemEvolute Fail evolution_creature_id(%d), charac_no(%d)",param_4
                       ,uVar4);
            uVar4 = 1;
          }
          else {
            uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            cHistoryTrace::operator()
                      (&local_2a,"ItemEvolute Succ evolution_creature_id(%d), charac_no(%d)",param_4
                       ,uVar4);
            uVar4 = 0;
          }
        }
        else {
          uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          uVar4 = *(undefined4 *)(local_28 + 2);
          uVar5 = *(undefined4 *)(local_20 + 0x360);
          pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          pCVar6 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar3);
          uVar8 = user_creature::CCreatureMgr::GetCreatureIndex(pCVar6);
          cMyTrace::cMyTrace(local_3c,
                             "int Dispatcher_UseCreatureEvolutionItem::process(CUser*, unsigned char, short int, int)"
                             ,0xe62f,5);
          cMyTrace::operator()
                    (local_3c,
                     "Dispatcher_UseCreatureEvolutionItem cur_creatureid(%d) != item_base_creature_id(%d) charac_no(%d)\n"
                     ,uVar8,uVar5,uVar4,uVar7);
          uVar4 = 7;
        }
      }
      else {
        uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        uVar4 = *(undefined4 *)(local_28 + 2);
        cMyTrace::cMyTrace(local_4c,
                           "int Dispatcher_UseCreatureEvolutionItem::process(CUser*, unsigned char, short int, int)"
                           ,0xe627,5);
        cMyTrace::operator()
                  (local_4c,
                   "Dispatcher_UseCreatureEvolutionItem item_id(%d) is not stackable charac_no(%d)\n"
                   ,uVar4,uVar5);
        uVar4 = 0x17;
      }
    }
  }
  return uVar4;
}
```
