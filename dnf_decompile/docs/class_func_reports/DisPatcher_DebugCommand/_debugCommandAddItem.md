# _debugCommandAddItem

`_ZN23DisPatcher_DebugCommand20_debugCommandAddItemEP5CUsermi`

`DisPatcher_DebugCommand::_debugCommandAddItem(CUser*, unsigned long, int)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DebugCommand` | `0x0858ec9c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858ec9c  _ZN23DisPatcher_DebugCommand20_debugCommandAddItemEP5CUsermi
#           DisPatcher_DebugCommand::_debugCommandAddItem(CUser*, unsigned long, int)
# range [0x0858ec9c, 0x0858ee53]
0858ec9c +0x000:  push   %ebp
0858ec9d +0x001:  mov    %esp,%ebp
0858ec9f +0x003:  push   %esi
0858eca0 +0x004:  push   %ebx
0858eca1 +0x005:  sub    $0x40,%esp
0858eca4 +0x008:  mov    0xc(%ebp),%eax
0858eca7 +0x00b:  mov    %eax,(%esp)
0858ecaa +0x00e:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
0858ecaf +0x013:  xor    $0x1,%eax
0858ecb2 +0x016:  test   %al,%al
0858ecb4 +0x018:  je     0858ecc0 <+0x24>
0858ecb6 +0x01a:  mov    $0x0,%eax
0858ecbb +0x01f:  jmp    0858ee4c <+0x1b0>
0858ecc0 +0x024:  cmpl   $0xffffffff,0x10(%ebp)
0858ecc4 +0x028:  jne    0858ecf7 <+0x5b>
0858ecc6 +0x02a:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0858eccd +0x031:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0858ecd2 +0x036:  lea    &_ZL14gUnicodeBuffer+0xac54(%eax),%ebx
0858ecd8 +0x03c:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0858ecdf +0x043:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0858ece4 +0x048:  mov    %ebx,0x8(%esp)
0858ece8 +0x04c:  mov    %eax,0x4(%esp)
0858ecec +0x050:  mov    0xc(%ebp),%eax
0858ecef +0x053:  mov    %eax,(%esp)
0858ecf2 +0x056:  call   086b02fe <_ZN8WongWork14CHandlePremium19handleSetUserPCRoomEP5CUserll>  ; WongWork::CHandlePremium::handleSetUserPCRoom(CUser*, long, long)
0858ecf7 +0x05b:  cmpl   $0x0,0x14(%ebp)
0858ecfb +0x05f:  jg     0858ed04 <+0x68>
0858ecfd +0x061:  movl   $0x64,0x14(%ebp)
0858ed04 +0x068:  mov    0x10(%ebp),%ebx
0858ed07 +0x06b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0858ed0c +0x070:  mov    %ebx,0x4(%esp)
0858ed10 +0x074:  mov    %eax,(%esp)
0858ed13 +0x077:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0858ed18 +0x07c:  mov    %eax,-0x10(%ebp)
0858ed1b +0x07f:  cmpl   $0x0,-0x10(%ebp)
0858ed1f +0x083:  je     0858ed73 <+0xd7>
0858ed21 +0x085:  mov    -0x10(%ebp),%eax
0858ed24 +0x088:  mov    %eax,(%esp)
0858ed27 +0x08b:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
0858ed2c +0x090:  test   %al,%al
0858ed2e +0x092:  je     0858ed53 <+0xb7>
0858ed30 +0x094:  mov    -0x10(%ebp),%eax
0858ed33 +0x097:  mov    %eax,(%esp)
0858ed36 +0x09a:  call   0822c9fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x20a6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x20a6
0858ed3b +0x09f:  cmp    0x14(%ebp),%eax
0858ed3e +0x0a2:  setl   %al
0858ed41 +0x0a5:  test   %al,%al
0858ed43 +0x0a7:  je     0858ed53 <+0xb7>
0858ed45 +0x0a9:  mov    -0x10(%ebp),%eax
0858ed48 +0x0ac:  mov    %eax,(%esp)
0858ed4b +0x0af:  call   0822c9fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x20a6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x20a6
0858ed50 +0x0b4:  mov    %eax,0x14(%ebp)
0858ed53 +0x0b7:  mov    -0x10(%ebp),%eax
0858ed56 +0x0ba:  mov    (%eax),%eax
0858ed58 +0x0bc:  add    $0x10,%eax
0858ed5b +0x0bf:  mov    (%eax),%edx
0858ed5d +0x0c1:  mov    -0x10(%ebp),%eax
0858ed60 +0x0c4:  mov    %eax,(%esp)
0858ed63 +0x0c7:  call   *%edx
0858ed65 +0x0c9:  test   %al,%al
0858ed67 +0x0cb:  je     0858ed73 <+0xd7>
0858ed69 +0x0cd:  mov    $0x0,%eax
0858ed6e +0x0d2:  jmp    0858ee4c <+0x1b0>
0858ed73 +0x0d7:  mov    0x10(%ebp),%eax
0858ed76 +0x0da:  movl   $0x0,0x14(%esp)
0858ed7e +0x0e2:  lea    -0x24(%ebp),%edx
0858ed81 +0x0e5:  mov    %edx,0x10(%esp)
0858ed85 +0x0e9:  movl   $0x6,0xc(%esp)
0858ed8d +0x0f1:  mov    0x14(%ebp),%edx
0858ed90 +0x0f4:  mov    %edx,0x8(%esp)
0858ed94 +0x0f8:  mov    %eax,0x4(%esp)
0858ed98 +0x0fc:  mov    0xc(%ebp),%eax
0858ed9b +0x0ff:  mov    %eax,(%esp)
0858ed9e +0x102:  call   0867b6d4 <_ZN5CUser7AddItemEii14eItemAddReasonR14ENUM_ITEMSPACEi>  ; CUser::AddItem(int, int, eItemAddReason, ENUM_ITEMSPACE&, int)
0858eda3 +0x107:  mov    %eax,-0xc(%ebp)
0858eda6 +0x10a:  cmpl   $0x0,-0xc(%ebp)
0858edaa +0x10e:  js     0858ee47 <+0x1ab>
0858edb0 +0x114:  mov    0xc(%ebp),%eax
0858edb3 +0x117:  mov    %eax,(%esp)
0858edb6 +0x11a:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0858edbb +0x11f:  mov    %eax,%esi
0858edbd +0x121:  mov    0xc(%ebp),%eax
0858edc0 +0x124:  mov    %eax,(%esp)
0858edc3 +0x127:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0858edc8 +0x12c:  movl   $0x0,0x4(%esp)
0858edd0 +0x134:  mov    %eax,(%esp)
0858edd3 +0x137:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0858edd8 +0x13c:  mov    %eax,%ebx
0858edda +0x13e:  movl   $0x0,0xc(%esp)
0858ede2 +0x146:  movl   $0xf4,0x8(%esp)
0858edea +0x14e:  movl   $&_ZZN23DisPatcher_DebugCommand20_debugCommandAddItemEP5CUsermiE19__PRETTY_FUNCTION__,0x4(%esp)
0858edf2 +0x156:  lea    -0x20(%ebp),%eax
0858edf5 +0x159:  mov    %eax,(%esp)
0858edf8 +0x15c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0858edfd +0x161:  mov    -0xc(%ebp),%eax
0858ee00 +0x164:  mov    %eax,0x10(%esp)
0858ee04 +0x168:  mov    %esi,0xc(%esp)
0858ee08 +0x16c:  mov    %ebx,0x8(%esp)
0858ee0c +0x170:  movl   $"%s:'%s' GM Mode Add Item(%d).",0x4(%esp)
0858ee14 +0x178:  lea    -0x20(%ebp),%eax
0858ee17 +0x17b:  mov    %eax,(%esp)
0858ee1a +0x17e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0858ee1f +0x183:  mov    -0x24(%ebp),%eax
0858ee22 +0x186:  mov    -0xc(%ebp),%edx
0858ee25 +0x189:  mov    %edx,0xc(%esp)
0858ee29 +0x18d:  mov    %eax,0x8(%esp)
0858ee2d +0x191:  movl   $0x1,0x4(%esp)
0858ee35 +0x199:  mov    0xc(%ebp),%eax
0858ee38 +0x19c:  mov    %eax,(%esp)
0858ee3b +0x19f:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0858ee40 +0x1a4:  mov    $0x1,%eax
0858ee45 +0x1a9:  jmp    0858ee4c <+0x1b0>
0858ee47 +0x1ab:  mov    $0x0,%eax
0858ee4c +0x1b0:  add    $0x40,%esp
0858ee4f +0x1b3:  pop    %ebx
0858ee50 +0x1b4:  pop    %esi
0858ee51 +0x1b5:  pop    %ebp
0858ee52 +0x1b6:  ret
0858ee53 +0x1b7:  nop
```

## 反编译 C

```c
// DisPatcher_DebugCommand::_debugCommandAddItem @ 0x858ec9c

/* DisPatcher_DebugCommand::_debugCommandAddItem(CUser*, unsigned long, int) */

undefined4 __thiscall
DisPatcher_DebugCommand::_debugCommandAddItem
          (DisPatcher_DebugCommand *this,CUser *param_1,ulong param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  CDataManager *this_00;
  uint uVar5;
  undefined4 uVar6;
  undefined4 local_28;
  cMyTrace local_24 [16];
  CStackableItem *local_14;
  int local_10;
  
  cVar1 = CUser::isGMUser(param_1);
  if (cVar1 == '\x01') {
    if (param_2 == 0xffffffff) {
      iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      lVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      WongWork::CHandlePremium::handleSetUserPCRoom(param_1,lVar4,iVar3 + 0x15180);
    }
    if (param_3 < 1) {
      param_3 = 100;
    }
    this_00 = (CDataManager *)G_CDataManager();
    local_14 = (CStackableItem *)CDataManager::find_item(this_00,param_2);
    if (local_14 != (CStackableItem *)0x0) {
      cVar1 = CItem::is_stackable((CItem *)local_14);
      if ((cVar1 != '\0') && (iVar3 = CStackableItem::getStackableLimit(local_14), iVar3 < param_3))
      {
        param_3 = CStackableItem::getStackableLimit(local_14);
      }
      cVar1 = (**(code **)(*(int *)local_14 + 0x10))(local_14);
      if (cVar1 != '\0') {
        return 0;
      }
    }
    local_10 = CUser::AddItem(param_1,param_2,param_3,6,&local_28,0);
    if (local_10 < 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
      uVar5 = CUser::get_acc_id(param_1);
      uVar6 = NumberToString(uVar5,0);
      cMyTrace::cMyTrace(local_24,
                         "bool DisPatcher_DebugCommand::_debugCommandAddItem(CUser*, itemIndexOnlyServer_t, int)"
                         ,0xf4,0);
      cMyTrace::operator()(local_24,"%s:\'%s\' GM Mode Add Item(%d).",uVar6,uVar2,local_10);
      CUser::SendUpdateItemList(param_1,1,local_28,local_10);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
