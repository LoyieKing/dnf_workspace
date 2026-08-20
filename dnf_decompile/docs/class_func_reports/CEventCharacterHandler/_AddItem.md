# _AddItem

`_ZN22CEventCharacterHandler8_AddItemEP5CUsermii`

`CEventCharacterHandler::_AddItem(CUser*, unsigned long, int, int)`

| 类 | 地址 |
|---|---|
| `CEventCharacterHandler` | `0x0848e8e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848e8e2  _ZN22CEventCharacterHandler8_AddItemEP5CUsermii
#           CEventCharacterHandler::_AddItem(CUser*, unsigned long, int, int)
# range [0x0848e8e2, 0x0848ea4f]
0848e8e2 +0x000:  push   %ebp
0848e8e3 +0x001:  mov    %esp,%ebp
0848e8e5 +0x003:  push   %esi
0848e8e6 +0x004:  push   %ebx
0848e8e7 +0x005:  sub    $0x40,%esp
0848e8ea +0x008:  cmpl   $0xffffffff,0x10(%ebp)
0848e8ee +0x00c:  jne    0848e921 <+0x3f>
0848e8f0 +0x00e:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0848e8f7 +0x015:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0848e8fc +0x01a:  lea    &_ZL14gUnicodeBuffer+0xac54(%eax),%ebx
0848e902 +0x020:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0848e909 +0x027:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0848e90e +0x02c:  mov    %ebx,0x8(%esp)
0848e912 +0x030:  mov    %eax,0x4(%esp)
0848e916 +0x034:  mov    0xc(%ebp),%eax
0848e919 +0x037:  mov    %eax,(%esp)
0848e91c +0x03a:  call   086b02fe <_ZN8WongWork14CHandlePremium19handleSetUserPCRoomEP5CUserll>  ; WongWork::CHandlePremium::handleSetUserPCRoom(CUser*, long, long)
0848e921 +0x03f:  mov    0x10(%ebp),%ebx
0848e924 +0x042:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0848e929 +0x047:  mov    %ebx,0x4(%esp)
0848e92d +0x04b:  mov    %eax,(%esp)
0848e930 +0x04e:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0848e935 +0x053:  mov    %eax,-0x10(%ebp)
0848e938 +0x056:  cmpl   $0x0,-0x10(%ebp)
0848e93c +0x05a:  je     0848e970 <+0x8e>
0848e93e +0x05c:  mov    -0x10(%ebp),%eax
0848e941 +0x05f:  mov    %eax,(%esp)
0848e944 +0x062:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
0848e949 +0x067:  test   %al,%al
0848e94b +0x069:  je     0848e970 <+0x8e>
0848e94d +0x06b:  mov    -0x10(%ebp),%eax
0848e950 +0x06e:  mov    %eax,(%esp)
0848e953 +0x071:  call   0822c9fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x20a6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x20a6
0848e958 +0x076:  cmp    0x14(%ebp),%eax
0848e95b +0x079:  setl   %al
0848e95e +0x07c:  test   %al,%al
0848e960 +0x07e:  je     0848e970 <+0x8e>
0848e962 +0x080:  mov    -0x10(%ebp),%eax
0848e965 +0x083:  mov    %eax,(%esp)
0848e968 +0x086:  call   0822c9fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x20a6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x20a6
0848e96d +0x08b:  mov    %eax,0x14(%ebp)
0848e970 +0x08e:  mov    0x10(%ebp),%eax
0848e973 +0x091:  mov    0x18(%ebp),%edx
0848e976 +0x094:  mov    %edx,0x14(%esp)
0848e97a +0x098:  lea    -0x24(%ebp),%edx
0848e97d +0x09b:  mov    %edx,0x10(%esp)
0848e981 +0x09f:  movl   $0x6,0xc(%esp)
0848e989 +0x0a7:  mov    0x14(%ebp),%edx
0848e98c +0x0aa:  mov    %edx,0x8(%esp)
0848e990 +0x0ae:  mov    %eax,0x4(%esp)
0848e994 +0x0b2:  mov    0xc(%ebp),%eax
0848e997 +0x0b5:  mov    %eax,(%esp)
0848e99a +0x0b8:  call   0867b6d4 <_ZN5CUser7AddItemEii14eItemAddReasonR14ENUM_ITEMSPACEi>  ; CUser::AddItem(int, int, eItemAddReason, ENUM_ITEMSPACE&, int)
0848e99f +0x0bd:  mov    %eax,-0xc(%ebp)
0848e9a2 +0x0c0:  cmpl   $0x0,-0xc(%ebp)
0848e9a6 +0x0c4:  js     0848ea43 <+0x161>
0848e9ac +0x0ca:  mov    0xc(%ebp),%eax
0848e9af +0x0cd:  mov    %eax,(%esp)
0848e9b2 +0x0d0:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0848e9b7 +0x0d5:  mov    %eax,%esi
0848e9b9 +0x0d7:  mov    0xc(%ebp),%eax
0848e9bc +0x0da:  mov    %eax,(%esp)
0848e9bf +0x0dd:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0848e9c4 +0x0e2:  movl   $0x0,0x4(%esp)
0848e9cc +0x0ea:  mov    %eax,(%esp)
0848e9cf +0x0ed:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0848e9d4 +0x0f2:  mov    %eax,%ebx
0848e9d6 +0x0f4:  movl   $0x0,0xc(%esp)
0848e9de +0x0fc:  movl   $0xda,0x8(%esp)
0848e9e6 +0x104:  movl   $&_ZZN22CEventCharacterHandler8_AddItemEP5CUsermiiE19__PRETTY_FUNCTION__,0x4(%esp)
0848e9ee +0x10c:  lea    -0x20(%ebp),%eax
0848e9f1 +0x10f:  mov    %eax,(%esp)
0848e9f4 +0x112:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0848e9f9 +0x117:  mov    -0xc(%ebp),%eax
0848e9fc +0x11a:  mov    %eax,0x10(%esp)
0848ea00 +0x11e:  mov    %esi,0xc(%esp)
0848ea04 +0x122:  mov    %ebx,0x8(%esp)
0848ea08 +0x126:  movl   $"%s:'%s' GM Mode Add Item(%d).",0x4(%esp)
0848ea10 +0x12e:  lea    -0x20(%ebp),%eax
0848ea13 +0x131:  mov    %eax,(%esp)
0848ea16 +0x134:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0848ea1b +0x139:  mov    -0x24(%ebp),%eax
0848ea1e +0x13c:  mov    -0xc(%ebp),%edx
0848ea21 +0x13f:  mov    %edx,0xc(%esp)
0848ea25 +0x143:  mov    %eax,0x8(%esp)
0848ea29 +0x147:  movl   $0x1,0x4(%esp)
0848ea31 +0x14f:  mov    0xc(%ebp),%eax
0848ea34 +0x152:  mov    %eax,(%esp)
0848ea37 +0x155:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0848ea3c +0x15a:  mov    $0x1,%eax
0848ea41 +0x15f:  jmp    0848ea48 <+0x166>
0848ea43 +0x161:  mov    $0x0,%eax
0848ea48 +0x166:  add    $0x40,%esp
0848ea4b +0x169:  pop    %ebx
0848ea4c +0x16a:  pop    %esi
0848ea4d +0x16b:  pop    %ebp
0848ea4e +0x16c:  ret
0848ea4f +0x16d:  nop
```

## 反编译 C

```c
// CEventCharacterHandler::_AddItem @ 0x848e8e2

/* CEventCharacterHandler::_AddItem(CUser*, unsigned long, int, int) */

bool __thiscall
CEventCharacterHandler::_AddItem
          (CEventCharacterHandler *this,CUser *param_1,ulong param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  CDataManager *this_00;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined4 local_28;
  cMyTrace local_24 [16];
  CStackableItem *local_14;
  int local_10;
  
  if (param_2 == 0xffffffff) {
    iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    lVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    WongWork::CHandlePremium::handleSetUserPCRoom(param_1,lVar3,iVar2 + 0x15180);
  }
  this_00 = (CDataManager *)G_CDataManager();
  local_14 = (CStackableItem *)CDataManager::find_item(this_00,param_2);
  if (((local_14 != (CStackableItem *)0x0) &&
      (cVar1 = CItem::is_stackable((CItem *)local_14), cVar1 != '\0')) &&
     (iVar2 = CStackableItem::getStackableLimit(local_14), iVar2 < param_3)) {
    param_3 = CStackableItem::getStackableLimit(local_14);
  }
  local_10 = CUser::AddItem(param_1,param_2,param_3,6,&local_28,param_4);
  bVar7 = -1 < local_10;
  if (bVar7) {
    uVar4 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    uVar5 = CUser::get_acc_id(param_1);
    uVar6 = NumberToString(uVar5,0);
    cMyTrace::cMyTrace(local_24,
                       "bool CEventCharacterHandler::_AddItem(CUser*, itemIndexOnlyServer_t, int, int)"
                       ,0xda,0);
    cMyTrace::operator()(local_24,"%s:\'%s\' GM Mode Add Item(%d).",uVar6,uVar4,local_10);
    CUser::SendUpdateItemList(param_1,1,local_28,local_10);
  }
  return bVar7;
}
```
