# _debugCommandAddAvatar

`_ZN23DisPatcher_DebugCommand22_debugCommandAddAvatarEP5CUserR17MSG_DEBUG_COMMAND`

`DisPatcher_DebugCommand::_debugCommandAddAvatar(CUser*, MSG_DEBUG_COMMAND&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DebugCommand` | `0x0858f7b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858f7b6  _ZN23DisPatcher_DebugCommand22_debugCommandAddAvatarEP5CUserR17MSG_DEBUG_COMMAND
#           DisPatcher_DebugCommand::_debugCommandAddAvatar(CUser*, MSG_DEBUG_COMMAND&)
# range [0x0858f7b6, 0x0858fab9]
0858f7b6 +0x000:  push   %ebp
0858f7b7 +0x001:  mov    %esp,%ebp
0858f7b9 +0x003:  push   %edi
0858f7ba +0x004:  push   %esi
0858f7bb +0x005:  push   %ebx
0858f7bc +0x006:  sub    $0xbc,%esp
0858f7c2 +0x00c:  mov    0xc(%ebp),%eax
0858f7c5 +0x00f:  mov    %eax,(%esp)
0858f7c8 +0x012:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
0858f7cd +0x017:  xor    $0x1,%eax
0858f7d0 +0x01a:  test   %al,%al
0858f7d2 +0x01c:  je     0858f7de <+0x28>
0858f7d4 +0x01e:  mov    $0x0,%eax
0858f7d9 +0x023:  jmp    0858faae <+0x2f8>
0858f7de +0x028:  movl   $0x18,0x8(%esp)
0858f7e6 +0x030:  movl   $0x0,0x4(%esp)
0858f7ee +0x038:  lea    -0x4c(%ebp),%eax
0858f7f1 +0x03b:  mov    %eax,(%esp)
0858f7f4 +0x03e:  call   0807dcc0 <_init+0x5b8>
0858f7f9 +0x043:  movl   $0x0,(%esp)
0858f800 +0x04a:  call   0807d750 <_init+0x48>
0858f805 +0x04f:  mov    %eax,-0x50(%ebp)
0858f808 +0x052:  lea    -0x7c(%ebp),%eax
0858f80b +0x055:  mov    %eax,0x4(%esp)
0858f80f +0x059:  lea    -0x50(%ebp),%eax
0858f812 +0x05c:  mov    %eax,(%esp)
0858f815 +0x05f:  call   0807e360 <_init+0xc58>
0858f81a +0x064:  mov    %eax,-0x24(%ebp)
0858f81d +0x067:  mov    0xc(%ebp),%eax
0858f820 +0x06a:  mov    %eax,(%esp)
0858f823 +0x06d:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0858f828 +0x072:  mov    %eax,%esi
0858f82a +0x074:  mov    -0x24(%ebp),%eax
0858f82d +0x077:  mov    0xc(%eax),%edi
0858f830 +0x07a:  mov    -0x24(%ebp),%eax
0858f833 +0x07d:  mov    0x10(%eax),%eax
0858f836 +0x080:  add    $0x1,%eax
0858f839 +0x083:  mov    %eax,-0x94(%ebp)
0858f83f +0x089:  mov    -0x24(%ebp),%eax
0858f842 +0x08c:  mov    0x14(%eax),%eax
0858f845 +0x08f:  lea    0x76c(%eax),%ecx
0858f84b +0x095:  mov    $0x10624dd3,%edx
0858f850 +0x09a:  mov    %ecx,%eax
0858f852 +0x09c:  imul   %edx
0858f854 +0x09e:  sar    $0x7,%edx
0858f857 +0x0a1:  mov    %ecx,%eax
0858f859 +0x0a3:  sar    $0x1f,%eax
0858f85c +0x0a6:  mov    %edx,%ebx
0858f85e +0x0a8:  sub    %eax,%ebx
0858f860 +0x0aa:  imul   $0x7d0,%ebx,%eax
0858f866 +0x0b0:  mov    %ecx,%ebx
0858f868 +0x0b2:  sub    %eax,%ebx
0858f86a +0x0b4:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0858f86f +0x0b9:  mov    0x1b0(%eax),%eax
0858f875 +0x0bf:  mov    %esi,0x1c(%esp)
0858f879 +0x0c3:  mov    %edi,0x18(%esp)
0858f87d +0x0c7:  mov    -0x94(%ebp),%edx
0858f883 +0x0cd:  mov    %edx,0x14(%esp)
0858f887 +0x0d1:  mov    %ebx,0x10(%esp)
0858f88b +0x0d5:  mov    %eax,0xc(%esp)
0858f88f +0x0d9:  movl   $"D%02d%02d%02d%02d%010d",0x8(%esp)
0858f897 +0x0e1:  movl   $0x14,0x4(%esp)
0858f89f +0x0e9:  lea    -0x4c(%ebp),%eax
0858f8a2 +0x0ec:  mov    %eax,(%esp)
0858f8a5 +0x0ef:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
0858f8aa +0x0f4:  mov    0x10(%ebp),%eax
0858f8ad +0x0f7:  mov    0xe(%eax),%ebx
0858f8b0 +0x0fa:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0858f8b5 +0x0ff:  mov    %ebx,0x4(%esp)
0858f8b9 +0x103:  mov    %eax,(%esp)
0858f8bc +0x106:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0858f8c1 +0x10b:  mov    %eax,-0x20(%ebp)
0858f8c4 +0x10e:  cmpl   $0x0,-0x20(%ebp)
0858f8c8 +0x112:  je     0858f8e7 <+0x131>
0858f8ca +0x114:  mov    -0x20(%ebp),%eax
0858f8cd +0x117:  mov    (%eax),%eax
0858f8cf +0x119:  add    $0x10,%eax
0858f8d2 +0x11c:  mov    (%eax),%edx
0858f8d4 +0x11e:  mov    -0x20(%ebp),%eax
0858f8d7 +0x121:  mov    %eax,(%esp)
0858f8da +0x124:  call   *%edx
0858f8dc +0x126:  test   %al,%al
0858f8de +0x128:  je     0858f8e7 <+0x131>
0858f8e0 +0x12a:  mov    $0x1,%eax
0858f8e5 +0x12f:  jmp    0858f8ec <+0x136>
0858f8e7 +0x131:  mov    $0x0,%eax
0858f8ec +0x136:  test   %al,%al
0858f8ee +0x138:  je     0858faa9 <+0x2f3>
0858f8f4 +0x13e:  movl   $0x0,-0x1c(%ebp)
0858f8fb +0x145:  mov    -0x20(%ebp),%eax
0858f8fe +0x148:  mov    %eax,(%esp)
0858f901 +0x14b:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
0858f906 +0x150:  mov    %eax,%ebx
0858f908 +0x152:  mov    0x10(%ebp),%eax
0858f90b +0x155:  movzbl 0x13(%eax),%eax
0858f90f +0x159:  movzbl %al,%esi
0858f912 +0x15c:  movl   $0x0,0xc(%esp)
0858f91a +0x164:  movl   $0x231,0x8(%esp)
0858f922 +0x16c:  movl   $&_ZZN23DisPatcher_DebugCommand22_debugCommandAddAvatarEP5CUserR17MSG_DEBUG_COMMANDE19__PRETTY_FUNCTION__,0x4(%esp)
0858f92a +0x174:  lea    -0x34(%ebp),%eax
0858f92d +0x177:  mov    %eax,(%esp)
0858f930 +0x17a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0858f935 +0x17f:  mov    %ebx,0xc(%esp)
0858f939 +0x183:  mov    %esi,0x8(%esp)
0858f93d +0x187:  movl   $"[DEBUG_COMMAND_ADD_AVATAR] Param.Sub.AddAvatar.period : %d, item->getUsablePeriod() : %d",0x4(%esp)
0858f945 +0x18f:  lea    -0x34(%ebp),%eax
0858f948 +0x192:  mov    %eax,(%esp)
0858f94b +0x195:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0858f950 +0x19a:  mov    0x10(%ebp),%eax
0858f953 +0x19d:  movzbl 0x13(%eax),%eax
0858f957 +0x1a1:  test   %al,%al
0858f959 +0x1a3:  jne    0858f9e4 <+0x22e>
0858f95f +0x1a9:  mov    0x10(%ebp),%eax
0858f962 +0x1ac:  movzwl 0x14(%eax),%eax
0858f966 +0x1b0:  movzwl %ax,%eax
0858f969 +0x1b3:  mov    %eax,-0x90(%ebp)
0858f96f +0x1b9:  mov    0x10(%ebp),%eax
0858f972 +0x1bc:  movzbl 0x12(%eax),%eax
0858f976 +0x1c0:  movsbl %al,%edi
0858f979 +0x1c3:  mov    -0x20(%ebp),%eax
0858f97c +0x1c6:  mov    %eax,(%esp)
0858f97f +0x1c9:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
0858f984 +0x1ce:  mov    %eax,%ebx
0858f986 +0x1d0:  mov    0x10(%ebp),%eax
0858f989 +0x1d3:  mov    0xe(%eax),%esi
0858f98c +0x1d6:  mov    0xc(%ebp),%eax
0858f98f +0x1d9:  mov    %eax,(%esp)
0858f992 +0x1dc:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0858f997 +0x1e1:  mov    -0x90(%ebp),%edx
0858f99d +0x1e7:  mov    %edx,0x24(%esp)
0858f9a1 +0x1eb:  movl   $0x0,0x20(%esp)
0858f9a9 +0x1f3:  movl   $0x9,0x1c(%esp)
0858f9b1 +0x1fb:  lea    -0x4c(%ebp),%edx
0858f9b4 +0x1fe:  mov    %edx,0x18(%esp)
0858f9b8 +0x202:  movl   $0xffffffff,0x14(%esp)
0858f9c0 +0x20a:  mov    %edi,0x10(%esp)
0858f9c4 +0x20e:  movl   $0x0,0xc(%esp)
0858f9cc +0x216:  mov    %ebx,0x8(%esp)
0858f9d0 +0x21a:  mov    %esi,0x4(%esp)
0858f9d4 +0x21e:  mov    %eax,(%esp)
0858f9d7 +0x221:  call   08509b9e <_ZN10CInventory13AddAvatarItemEiibccPKc20eAvatarItemAddReasonbt>  ; CInventory::AddAvatarItem(int, int, bool, char, char, char const*, eAvatarItemAddReason, bool, unsigned short)
0858f9dc +0x226:  mov    %eax,-0x1c(%ebp)
0858f9df +0x229:  jmp    0858fa73 <+0x2bd>
0858f9e4 +0x22e:  mov    0x10(%ebp),%eax
0858f9e7 +0x231:  movzbl 0x13(%eax),%eax
0858f9eb +0x235:  cmp    $0x63,%al
0858f9ed +0x237:  jne    0858f9f6 <+0x240>
0858f9ef +0x239:  mov    0x10(%ebp),%eax
0858f9f2 +0x23c:  movb   $0x0,0x13(%eax)
0858f9f6 +0x240:  mov    0x10(%ebp),%eax
0858f9f9 +0x243:  movzwl 0x14(%eax),%eax
0858f9fd +0x247:  movzwl %ax,%eax
0858fa00 +0x24a:  mov    %eax,-0x8c(%ebp)
0858fa06 +0x250:  mov    0x10(%ebp),%eax
0858fa09 +0x253:  movzbl 0x12(%eax),%eax
0858fa0d +0x257:  movsbl %al,%edi
0858fa10 +0x25a:  mov    0x10(%ebp),%eax
0858fa13 +0x25d:  movzbl 0x13(%eax),%eax
0858fa17 +0x261:  movzbl %al,%esi
0858fa1a +0x264:  mov    0x10(%ebp),%eax
0858fa1d +0x267:  mov    0xe(%eax),%ebx
0858fa20 +0x26a:  mov    0xc(%ebp),%eax
0858fa23 +0x26d:  mov    %eax,(%esp)
0858fa26 +0x270:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0858fa2b +0x275:  mov    -0x8c(%ebp),%edx
0858fa31 +0x27b:  mov    %edx,0x24(%esp)
0858fa35 +0x27f:  movl   $0x0,0x20(%esp)
0858fa3d +0x287:  movl   $0x9,0x1c(%esp)
0858fa45 +0x28f:  lea    -0x4c(%ebp),%edx
0858fa48 +0x292:  mov    %edx,0x18(%esp)
0858fa4c +0x296:  movl   $0xffffffff,0x14(%esp)
0858fa54 +0x29e:  mov    %edi,0x10(%esp)
0858fa58 +0x2a2:  movl   $0x0,0xc(%esp)
0858fa60 +0x2aa:  mov    %esi,0x8(%esp)
0858fa64 +0x2ae:  mov    %ebx,0x4(%esp)
0858fa68 +0x2b2:  mov    %eax,(%esp)
0858fa6b +0x2b5:  call   08509b9e <_ZN10CInventory13AddAvatarItemEiibccPKc20eAvatarItemAddReasonbt>  ; CInventory::AddAvatarItem(int, int, bool, char, char, char const*, eAvatarItemAddReason, bool, unsigned short)
0858fa70 +0x2ba:  mov    %eax,-0x1c(%ebp)
0858fa73 +0x2bd:  cmpl   $0xffffffff,-0x1c(%ebp)
0858fa77 +0x2c1:  je     0858faa2 <+0x2ec>
0858fa79 +0x2c3:  mov    -0x1c(%ebp),%eax
0858fa7c +0x2c6:  mov    %eax,0xc(%esp)
0858fa80 +0x2ca:  movl   $0x1,0x8(%esp)
0858fa88 +0x2d2:  movl   $0x1,0x4(%esp)
0858fa90 +0x2da:  mov    0xc(%ebp),%eax
0858fa93 +0x2dd:  mov    %eax,(%esp)
0858fa96 +0x2e0:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0858fa9b +0x2e5:  mov    $0x1,%eax
0858faa0 +0x2ea:  jmp    0858faae <+0x2f8>
0858faa2 +0x2ec:  mov    $0x0,%eax
0858faa7 +0x2f1:  jmp    0858faae <+0x2f8>
0858faa9 +0x2f3:  mov    $0x0,%eax
0858faae +0x2f8:  add    $0xbc,%esp
0858fab4 +0x2fe:  pop    %ebx
0858fab5 +0x2ff:  pop    %esi
0858fab6 +0x300:  pop    %edi
0858fab7 +0x301:  pop    %ebp
0858fab8 +0x302:  ret
0858fab9 +0x303:  nop
```

## 反编译 C

```c
// DisPatcher_DebugCommand::_debugCommandAddAvatar @ 0x858f7b6

/* DisPatcher_DebugCommand::_debugCommandAddAvatar(CUser*, MSG_DEBUG_COMMAND&) */

undefined4 __thiscall
DisPatcher_DebugCommand::_debugCommandAddAvatar
          (DisPatcher_DebugCommand *this,CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  MSG_DEBUG_COMMAND MVar1;
  MSG_DEBUG_COMMAND MVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  CDataManager *this_00;
  undefined4 uVar11;
  CInventory *pCVar12;
  tm local_80;
  time_t local_54;
  char local_50 [24];
  cMyTrace local_38 [16];
  tm *local_28;
  CItem *local_24;
  int local_20;
  
  cVar8 = CUser::isGMUser(param_1);
  if (cVar8 == '\x01') {
    memset(local_50,0,0x18);
    local_54 = time((time_t *)0x0);
    local_28 = localtime_r(&local_54,&local_80);
    uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    iVar4 = local_28->tm_mday;
    iVar5 = local_28->tm_mon;
    iVar6 = local_28->tm_year;
    iVar10 = G_CEnvironment();
    OS_API::snprintf(local_50,0x14,"D%02d%02d%02d%02d%010d",*(undefined4 *)(iVar10 + 0x1b0),
                     (iVar6 + 0x76c) % 2000,iVar5 + 1,iVar4,uVar9);
    iVar4 = *(int *)(param_2 + 0xe);
    this_00 = (CDataManager *)G_CDataManager();
    local_24 = (CItem *)CDataManager::find_item(this_00,iVar4);
    if ((local_24 == (CItem *)0x0) ||
       (cVar8 = (**(code **)(*(int *)local_24 + 0x10))(local_24), cVar8 == '\0')) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      local_20 = 0;
      uVar9 = CItem::getUsablePeriod(local_24);
      MVar1 = param_2[0x13];
      cMyTrace::cMyTrace(local_38,
                         "bool DisPatcher_DebugCommand::_debugCommandAddAvatar(CUser*, MSG_DEBUG_COMMAND&)"
                         ,0x231,0);
      cMyTrace::operator()
                (local_38,
                 "[DEBUG_COMMAND_ADD_AVATAR] Param.Sub.AddAvatar.period : %d, item->getUsablePeriod() : %d"
                 ,(uint)(byte)MVar1,uVar9);
      if (param_2[0x13] == (MSG_DEBUG_COMMAND)0x0) {
        uVar3 = *(undefined2 *)(param_2 + 0x14);
        MVar1 = param_2[0x12];
        uVar11 = CItem::getUsablePeriod(local_24);
        uVar9 = *(undefined4 *)(param_2 + 0xe);
        pCVar12 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        local_20 = CInventory::AddAvatarItem
                             (pCVar12,uVar9,uVar11,0,(int)(char)MVar1,0xffffffff,local_50,9,0,uVar3)
        ;
      }
      else {
        if (param_2[0x13] == (MSG_DEBUG_COMMAND)0x63) {
          param_2[0x13] = (MSG_DEBUG_COMMAND)0x0;
        }
        uVar3 = *(undefined2 *)(param_2 + 0x14);
        MVar1 = param_2[0x12];
        MVar2 = param_2[0x13];
        uVar9 = *(undefined4 *)(param_2 + 0xe);
        pCVar12 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        local_20 = CInventory::AddAvatarItem
                             (pCVar12,uVar9,MVar2,0,(int)(char)MVar1,0xffffffff,local_50,9,0,uVar3);
      }
      if (local_20 == -1) {
        uVar9 = 0;
      }
      else {
        CUser::SendUpdateItemList(param_1,1,1,local_20);
        uVar9 = 1;
      }
    }
    else {
      uVar9 = 0;
    }
    return uVar9;
  }
  return 0;
}
```
