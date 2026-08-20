# _check_error

`_ZN17expert_extraction20CEnchanterExtraction12_check_errorEP5CUserss`

`expert_extraction::CEnchanterExtraction::_check_error(CUser*, short, short)`

| 类 | 地址 |
|---|---|
| `expert_extraction::CEnchanterExtraction` | `0x084a3b92` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a3b92  _ZN17expert_extraction20CEnchanterExtraction12_check_errorEP5CUserss
#           expert_extraction::CEnchanterExtraction::_check_error(CUser*, short, short)
# range [0x084a3b92, 0x084a3cb5]
084a3b92 +0x000:  push   %ebp
084a3b93 +0x001:  mov    %esp,%ebp
084a3b95 +0x003:  push   %ebx
084a3b96 +0x004:  sub    $0xb4,%esp
084a3b9c +0x00a:  mov    0x10(%ebp),%edx
084a3b9f +0x00d:  mov    0x14(%ebp),%eax
084a3ba2 +0x010:  mov    %dx,-0x9c(%ebp)
084a3ba9 +0x017:  mov    %ax,-0xa0(%ebp)
084a3bb0 +0x01e:  movswl -0x9c(%ebp),%ebx
084a3bb7 +0x025:  mov    0xc(%ebp),%eax
084a3bba +0x028:  mov    %eax,(%esp)
084a3bbd +0x02b:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
084a3bc2 +0x030:  lea    -0x59(%ebp),%edx
084a3bc5 +0x033:  mov    %ebx,0xc(%esp)
084a3bc9 +0x037:  movl   $0x1,0x8(%esp)
084a3bd1 +0x03f:  mov    %eax,0x4(%esp)
084a3bd5 +0x043:  mov    %edx,(%esp)
084a3bd8 +0x046:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
084a3bdd +0x04b:  sub    $0x4,%esp
084a3be0 +0x04e:  mov    -0x57(%ebp),%eax
084a3be3 +0x051:  mov    %eax,%ebx
084a3be5 +0x053:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a3bea +0x058:  mov    %ebx,0x4(%esp)
084a3bee +0x05c:  mov    %eax,(%esp)
084a3bf1 +0x05f:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084a3bf6 +0x064:  mov    %eax,-0x1c(%ebp)
084a3bf9 +0x067:  movswl -0xa0(%ebp),%ebx
084a3c00 +0x06e:  mov    0xc(%ebp),%eax
084a3c03 +0x071:  mov    %eax,(%esp)
084a3c06 +0x074:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
084a3c0b +0x079:  lea    -0x96(%ebp),%edx
084a3c11 +0x07f:  mov    %ebx,0xc(%esp)
084a3c15 +0x083:  movl   $0x1,0x8(%esp)
084a3c1d +0x08b:  mov    %eax,0x4(%esp)
084a3c21 +0x08f:  mov    %edx,(%esp)
084a3c24 +0x092:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
084a3c29 +0x097:  sub    $0x4,%esp
084a3c2c +0x09a:  mov    -0x94(%ebp),%eax
084a3c32 +0x0a0:  mov    %eax,%ebx
084a3c34 +0x0a2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a3c39 +0x0a7:  mov    %ebx,0x4(%esp)
084a3c3d +0x0ab:  mov    %eax,(%esp)
084a3c40 +0x0ae:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084a3c45 +0x0b3:  mov    %eax,-0x18(%ebp)
084a3c48 +0x0b6:  mov    -0x1c(%ebp),%eax
084a3c4b +0x0b9:  mov    0x338(%eax),%eax
084a3c51 +0x0bf:  mov    %eax,-0x14(%ebp)
084a3c54 +0x0c2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a3c59 +0x0c7:  movl   $0x1,0x4(%esp)
084a3c61 +0x0cf:  mov    %eax,(%esp)
084a3c64 +0x0d2:  call   0822b5f2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9c
084a3c69 +0x0d7:  mov    -0x14(%ebp),%edx
084a3c6c +0x0da:  mov    %edx,0x4(%esp)
084a3c70 +0x0de:  mov    %eax,(%esp)
084a3c73 +0x0e1:  call   084a452a <_GLOBAL__I__ZN17expert_extraction16GetExtracterTypeE20ENUM_EXPERT_JOB_TYPE+0x91>  ; global constructors keyed to expert_extraction::GetExtracterType(ENUM_EXPERT_JOB_TYPE)+0x91
084a3c78 +0x0e6:  mov    %eax,-0x10(%ebp)
084a3c7b +0x0e9:  mov    -0x18(%ebp),%eax
084a3c7e +0x0ec:  mov    %eax,(%esp)
084a3c81 +0x0ef:  call   080f12ee <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x370>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x370
084a3c86 +0x0f4:  mov    %eax,-0xc(%ebp)
084a3c89 +0x0f7:  cmpl   $0x0,-0xc(%ebp)
084a3c8d +0x0fb:  jne    084a3c9d <+0x10b>
084a3c8f +0x0fd:  mov    -0x18(%ebp),%eax
084a3c92 +0x100:  mov    %eax,(%esp)
084a3c95 +0x103:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
084a3c9a +0x108:  mov    %eax,-0xc(%ebp)
084a3c9d +0x10b:  mov    -0xc(%ebp),%eax
084a3ca0 +0x10e:  cmp    -0x10(%ebp),%eax
084a3ca3 +0x111:  jle    084a3cac <+0x11a>
084a3ca5 +0x113:  mov    $0xd,%eax
084a3caa +0x118:  jmp    084a3cb1 <+0x11f>
084a3cac +0x11a:  mov    $0x0,%eax
084a3cb1 +0x11f:  mov    -0x4(%ebp),%ebx
084a3cb4 +0x122:  leave
084a3cb5 +0x123:  ret
```

## 反编译 C

```c
// expert_extraction::CEnchanterExtraction::_check_error @ 0x84a3b92

/* expert_extraction::CEnchanterExtraction::_check_error(CUser*, short, short) */

undefined4
expert_extraction::CEnchanterExtraction::_check_error(CUser *param_1,short param_2,short param_3)

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
  local_18 = *(undefined4 *)(local_20 + 0x338);
  iVar1 = G_CDataManager();
  iVar1 = CDataManager::GetExpertJobScript(iVar1);
  local_14 = STExpertJobScript::GetEnchanterExtractionPossibleLevel(iVar1);
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
