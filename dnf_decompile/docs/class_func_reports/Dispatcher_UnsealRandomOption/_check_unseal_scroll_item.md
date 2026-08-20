# _check_unseal_scroll_item

`_ZN29Dispatcher_UnsealRandomOption25_check_unseal_scroll_itemEP5CUserPK10Inven_Itemt`

`Dispatcher_UnsealRandomOption::_check_unseal_scroll_item(CUser*, Inven_Item const*, unsigned short)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UnsealRandomOption` | `0x08229644` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08229644  _ZN29Dispatcher_UnsealRandomOption25_check_unseal_scroll_itemEP5CUserPK10Inven_Itemt
#           Dispatcher_UnsealRandomOption::_check_unseal_scroll_item(CUser*, Inven_Item const*, unsigned short)
# range [0x08229644, 0x08229767]
08229644 +0x000:  push   %ebp
08229645 +0x001:  mov    %esp,%ebp
08229647 +0x003:  push   %ebx
08229648 +0x004:  sub    $0x84,%esp
0822964e +0x00a:  mov    0x14(%ebp),%eax
08229651 +0x00d:  mov    %ax,-0x6c(%ebp)
08229655 +0x011:  cmpw   $0xffff,-0x6c(%ebp)
0822965a +0x016:  je     0822975e <+0x11a>
08229660 +0x01c:  movzwl -0x6c(%ebp),%ebx
08229664 +0x020:  mov    0xc(%ebp),%eax
08229667 +0x023:  mov    %eax,(%esp)
0822966a +0x026:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0822966f +0x02b:  lea    -0x5d(%ebp),%edx
08229672 +0x02e:  mov    %ebx,0xc(%esp)
08229676 +0x032:  movl   $0x1,0x8(%esp)
0822967e +0x03a:  mov    %eax,0x4(%esp)
08229682 +0x03e:  mov    %edx,(%esp)
08229685 +0x041:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0822968a +0x046:  sub    $0x4,%esp
0822968d +0x049:  mov    -0x5b(%ebp),%eax
08229690 +0x04c:  mov    %eax,%ebx
08229692 +0x04e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08229697 +0x053:  mov    %ebx,0x4(%esp)
0822969b +0x057:  mov    %eax,(%esp)
0822969e +0x05a:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
082296a3 +0x05f:  mov    %eax,-0x20(%ebp)
082296a6 +0x062:  cmpl   $0x0,-0x20(%ebp)
082296aa +0x066:  jne    082296b6 <+0x72>
082296ac +0x068:  mov    $0x15,%eax
082296b1 +0x06d:  jmp    08229763 <+0x11f>
082296b6 +0x072:  mov    -0x20(%ebp),%eax
082296b9 +0x075:  mov    %eax,(%esp)
082296bc +0x078:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
082296c1 +0x07d:  xor    $0x1,%eax
082296c4 +0x080:  test   %al,%al
082296c6 +0x082:  je     082296d2 <+0x8e>
082296c8 +0x084:  mov    $0x11,%eax
082296cd +0x089:  jmp    08229763 <+0x11f>
082296d2 +0x08e:  mov    -0x20(%ebp),%eax
082296d5 +0x091:  mov    0x328(%eax),%eax
082296db +0x097:  mov    %eax,-0x1c(%ebp)
082296de +0x09a:  cmpl   $0xffffffff,-0x1c(%ebp)
082296e2 +0x09e:  jne    082296eb <+0xa7>
082296e4 +0x0a0:  mov    $0x1,%eax
082296e9 +0x0a5:  jmp    08229763 <+0x11f>
082296eb +0x0a7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082296f0 +0x0ac:  movl   $0x2,0x4(%esp)
082296f8 +0x0b4:  mov    %eax,(%esp)
082296fb +0x0b7:  call   0822b5f2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9c
08229700 +0x0bc:  mov    %eax,-0x18(%ebp)
08229703 +0x0bf:  mov    -0x1c(%ebp),%eax
08229706 +0x0c2:  mov    %eax,0x4(%esp)
0822970a +0x0c6:  mov    -0x18(%ebp),%eax
0822970d +0x0c9:  mov    %eax,(%esp)
08229710 +0x0cc:  call   0822b262 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x90c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x90c
08229715 +0x0d1:  mov    %eax,-0x14(%ebp)
08229718 +0x0d4:  cmpl   $0xffffffff,-0x14(%ebp)
0822971c +0x0d8:  jne    08229725 <+0xe1>
0822971e +0x0da:  mov    $0x1,%eax
08229723 +0x0df:  jmp    08229763 <+0x11f>
08229725 +0x0e1:  mov    0x10(%ebp),%eax
08229728 +0x0e4:  mov    0x2(%eax),%eax
0822972b +0x0e7:  mov    %eax,%ebx
0822972d +0x0e9:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08229732 +0x0ee:  mov    %ebx,0x4(%esp)
08229736 +0x0f2:  mov    %eax,(%esp)
08229739 +0x0f5:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0822973e +0x0fa:  mov    %eax,-0x10(%ebp)
08229741 +0x0fd:  mov    -0x10(%ebp),%eax
08229744 +0x100:  mov    %eax,(%esp)
08229747 +0x103:  call   080f12ee <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x370>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x370
0822974c +0x108:  mov    %eax,-0xc(%ebp)
0822974f +0x10b:  mov    -0xc(%ebp),%eax
08229752 +0x10e:  cmp    -0x14(%ebp),%eax
08229755 +0x111:  jle    0822975e <+0x11a>
08229757 +0x113:  mov    $0x11,%eax
0822975c +0x118:  jmp    08229763 <+0x11f>
0822975e +0x11a:  mov    $0x0,%eax
08229763 +0x11f:  mov    -0x4(%ebp),%ebx
08229766 +0x122:  leave
08229767 +0x123:  ret
```

## 反编译 C

```c
// Dispatcher_UnsealRandomOption::_check_unseal_scroll_item @ 0x8229644

/* Dispatcher_UnsealRandomOption::_check_unseal_scroll_item(CUser*, Inven_Item const*, unsigned
   short) */

undefined4 __thiscall
Dispatcher_UnsealRandomOption::_check_unseal_scroll_item
          (Dispatcher_UnsealRandomOption *this,CUser *param_1,Inven_Item *param_2,ushort param_3)

{
  char cVar1;
  int iVar2;
  CDataManager *pCVar3;
  undefined1 local_61 [2];
  int local_5f;
  CItem *local_24;
  int local_20;
  int local_1c;
  int local_18;
  CItem *local_14;
  
  if (param_3 != 0xffff) {
    iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_61,iVar2);
    pCVar3 = (CDataManager *)G_CDataManager();
    local_24 = (CItem *)CDataManager::find_item(pCVar3,local_5f);
    if (local_24 == (CItem *)0x0) {
      return 0x15;
    }
    cVar1 = CItem::is_stackable(local_24);
    if (cVar1 != '\x01') {
      return 0x11;
    }
    local_20 = *(int *)(local_24 + 0x328);
    if (local_20 == -1) {
      return 1;
    }
    iVar2 = G_CDataManager();
    local_1c = CDataManager::GetExpertJobScript(iVar2);
    local_18 = STExpertJobScript::GetUnsealScrollPossibleLevel(local_1c);
    if (local_18 == -1) {
      return 1;
    }
    iVar2 = *(int *)(param_2 + 2);
    pCVar3 = (CDataManager *)G_CDataManager();
    local_14 = (CItem *)CDataManager::find_item(pCVar3,iVar2);
    iVar2 = CItem::getUsableLevel(local_14);
    if (local_18 < iVar2) {
      return 0x11;
    }
  }
  return 0;
}
```
