# _check_error

`_ZN17expert_extraction25CDollControllerExtraction12_check_errorEP5CUserss`

`expert_extraction::CDollControllerExtraction::_check_error(CUser*, short, short)`

| 类 | 地址 |
|---|---|
| `expert_extraction::CDollControllerExtraction` | `0x084a4286` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a4286  _ZN17expert_extraction25CDollControllerExtraction12_check_errorEP5CUserss
#           expert_extraction::CDollControllerExtraction::_check_error(CUser*, short, short)
# range [0x084a4286, 0x084a43a9]
084a4286 +0x000:  push   %ebp
084a4287 +0x001:  mov    %esp,%ebp
084a4289 +0x003:  push   %ebx
084a428a +0x004:  sub    $0xb4,%esp
084a4290 +0x00a:  mov    0x10(%ebp),%edx
084a4293 +0x00d:  mov    0x14(%ebp),%eax
084a4296 +0x010:  mov    %dx,-0x9c(%ebp)
084a429d +0x017:  mov    %ax,-0xa0(%ebp)
084a42a4 +0x01e:  movswl -0x9c(%ebp),%ebx
084a42ab +0x025:  mov    0xc(%ebp),%eax
084a42ae +0x028:  mov    %eax,(%esp)
084a42b1 +0x02b:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
084a42b6 +0x030:  lea    -0x59(%ebp),%edx
084a42b9 +0x033:  mov    %ebx,0xc(%esp)
084a42bd +0x037:  movl   $0x1,0x8(%esp)
084a42c5 +0x03f:  mov    %eax,0x4(%esp)
084a42c9 +0x043:  mov    %edx,(%esp)
084a42cc +0x046:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
084a42d1 +0x04b:  sub    $0x4,%esp
084a42d4 +0x04e:  mov    -0x57(%ebp),%eax
084a42d7 +0x051:  mov    %eax,%ebx
084a42d9 +0x053:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a42de +0x058:  mov    %ebx,0x4(%esp)
084a42e2 +0x05c:  mov    %eax,(%esp)
084a42e5 +0x05f:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084a42ea +0x064:  mov    %eax,-0x1c(%ebp)
084a42ed +0x067:  movswl -0xa0(%ebp),%ebx
084a42f4 +0x06e:  mov    0xc(%ebp),%eax
084a42f7 +0x071:  mov    %eax,(%esp)
084a42fa +0x074:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
084a42ff +0x079:  lea    -0x96(%ebp),%edx
084a4305 +0x07f:  mov    %ebx,0xc(%esp)
084a4309 +0x083:  movl   $0x1,0x8(%esp)
084a4311 +0x08b:  mov    %eax,0x4(%esp)
084a4315 +0x08f:  mov    %edx,(%esp)
084a4318 +0x092:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
084a431d +0x097:  sub    $0x4,%esp
084a4320 +0x09a:  mov    -0x94(%ebp),%eax
084a4326 +0x0a0:  mov    %eax,%ebx
084a4328 +0x0a2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a432d +0x0a7:  mov    %ebx,0x4(%esp)
084a4331 +0x0ab:  mov    %eax,(%esp)
084a4334 +0x0ae:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084a4339 +0x0b3:  mov    %eax,-0x18(%ebp)
084a433c +0x0b6:  mov    -0x1c(%ebp),%eax
084a433f +0x0b9:  mov    0x33c(%eax),%eax
084a4345 +0x0bf:  mov    %eax,-0x14(%ebp)
084a4348 +0x0c2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a434d +0x0c7:  movl   $0x4,0x4(%esp)
084a4355 +0x0cf:  mov    %eax,(%esp)
084a4358 +0x0d2:  call   0822b5f2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9c
084a435d +0x0d7:  mov    -0x14(%ebp),%edx
084a4360 +0x0da:  mov    %edx,0x4(%esp)
084a4364 +0x0de:  mov    %eax,(%esp)
084a4367 +0x0e1:  call   084a459e <_GLOBAL__I__ZN17expert_extraction16GetExtracterTypeE20ENUM_EXPERT_JOB_TYPE+0x105>  ; global constructors keyed to expert_extraction::GetExtracterType(ENUM_EXPERT_JOB_TYPE)+0x105
084a436c +0x0e6:  mov    %eax,-0x10(%ebp)
084a436f +0x0e9:  mov    -0x18(%ebp),%eax
084a4372 +0x0ec:  mov    %eax,(%esp)
084a4375 +0x0ef:  call   080f12ee <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x370>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x370
084a437a +0x0f4:  mov    %eax,-0xc(%ebp)
084a437d +0x0f7:  cmpl   $0x0,-0xc(%ebp)
084a4381 +0x0fb:  jne    084a4391 <+0x10b>
084a4383 +0x0fd:  mov    -0x18(%ebp),%eax
084a4386 +0x100:  mov    %eax,(%esp)
084a4389 +0x103:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
084a438e +0x108:  mov    %eax,-0xc(%ebp)
084a4391 +0x10b:  mov    -0xc(%ebp),%eax
084a4394 +0x10e:  cmp    -0x10(%ebp),%eax
084a4397 +0x111:  jle    084a43a0 <+0x11a>
084a4399 +0x113:  mov    $0xd,%eax
084a439e +0x118:  jmp    084a43a5 <+0x11f>
084a43a0 +0x11a:  mov    $0x0,%eax
084a43a5 +0x11f:  mov    -0x4(%ebp),%ebx
084a43a8 +0x122:  leave
084a43a9 +0x123:  ret
```

## 反编译 C

```c
// expert_extraction::CDollControllerExtraction::_check_error @ 0x84a4286

/* expert_extraction::CDollControllerExtraction::_check_error(CUser*, short, short) */

undefined4
expert_extraction::CDollControllerExtraction::_check_error
          (CUser *param_1,short param_2,short param_3)

{
  int iVar1;
  CDataManager *pCVar2;
  undefined4 uVar3;
  undefined2 in_stack_0000000a;
  undefined1 local_9a [2];
  int local_98;
  undefined1 local_5d [2];
  int local_5b;
  int local_20;
  CItem *local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  
  iVar1 = CUserCharacInfo::getCurCharacInvenR(_param_2);
  CInventory::GetInvenSlot((int)local_5d,iVar1);
  pCVar2 = (CDataManager *)G_CDataManager();
  local_20 = CDataManager::find_item(pCVar2,local_5b);
  iVar1 = CUserCharacInfo::getCurCharacInvenR(_param_2);
  CInventory::GetInvenSlot((int)local_9a,iVar1);
  pCVar2 = (CDataManager *)G_CDataManager();
  local_1c = (CItem *)CDataManager::find_item(pCVar2,local_98);
  local_18 = *(undefined4 *)(local_20 + 0x33c);
  iVar1 = G_CDataManager();
  iVar1 = CDataManager::GetExpertJobScript(iVar1);
  local_14 = STExpertJobScript::GetDollControllerExtractionPossibleLevel(iVar1);
  local_10 = CItem::getUsableLevel(local_1c);
  if (local_10 == 0) {
    local_10 = CItem::get_grade(local_1c);
  }
  if (local_14 < local_10) {
    uVar3 = 0xd;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
