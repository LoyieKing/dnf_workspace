# generateSpecificItem

`_ZN8WongWork11CObjectDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE`

`WongWork::CObjectDrop::generateSpecificItem(WongWork::stGenerateRefData_t const&, WongWork::stGenerateResult_t&)`

| 类 | 地址 |
|---|---|
| `WongWork::CObjectDrop` | `0x08538234` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08538234  _ZN8WongWork11CObjectDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE
#           WongWork::CObjectDrop::generateSpecificItem(WongWork::stGenerateRefData_t const&, WongWork::stGenerateResult_t&)
# range [0x08538234, 0x08538351]
08538234 +0x000:  push   %ebp
08538235 +0x001:  mov    %esp,%ebp
08538237 +0x003:  sub    $0x78,%esp
0853823a +0x006:  movl   $0x0,-0x14(%ebp)
08538241 +0x00d:  jmp    08538338 <+0x104>
08538246 +0x012:  mov    0x8(%ebp),%eax
08538249 +0x015:  add    $0x8,%eax
0853824c +0x018:  movl   $0x2710,0x8(%esp)
08538254 +0x020:  movl   $0x2,0x4(%esp)
0853825c +0x028:  mov    %eax,(%esp)
0853825f +0x02b:  call   085334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>  ; WongWork::CGenerateRandomNumber::generateNumber(int, int)
08538264 +0x030:  mov    %eax,-0x10(%ebp)
08538267 +0x033:  movl   $0x0,-0xc(%ebp)
0853826e +0x03a:  mov    0xc(%ebp),%eax
08538271 +0x03d:  mov    0x34(%eax),%edx
08538274 +0x040:  lea    -0x1c(%ebp),%eax
08538277 +0x043:  mov    %edx,0x4(%esp)
0853827b +0x047:  mov    %eax,(%esp)
0853827e +0x04a:  call   083e930c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x832d8>  ; global constructors keyed to CServerEvent::m_nExpRate+0x832d8
08538283 +0x04f:  sub    $0x4,%esp
08538286 +0x052:  jmp    08538302 <+0xce>
08538288 +0x054:  lea    -0x1c(%ebp),%eax
0853828b +0x057:  mov    %eax,(%esp)
0853828e +0x05a:  call   0853ba88 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1d14>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1d14
08538293 +0x05f:  mov    0x4(%eax),%eax
08538296 +0x062:  add    %eax,-0xc(%ebp)
08538299 +0x065:  mov    -0x10(%ebp),%eax
0853829c +0x068:  cmp    -0xc(%ebp),%eax
0853829f +0x06b:  jge    085382f7 <+0xc3>
085382a1 +0x06d:  lea    -0x59(%ebp),%eax
085382a4 +0x070:  mov    %eax,(%esp)
085382a7 +0x073:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
085382ac +0x078:  lea    -0x1c(%ebp),%eax
085382af +0x07b:  mov    %eax,(%esp)
085382b2 +0x07e:  call   0853ba88 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1d14>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1d14
085382b7 +0x083:  mov    (%eax),%eax
085382b9 +0x085:  mov    %eax,-0x57(%ebp)
085382bc +0x088:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085382c1 +0x08d:  mov    0xc(%eax),%eax
085382c4 +0x090:  movl   $0x1,0xc(%esp)
085382cc +0x098:  lea    -0x59(%ebp),%edx
085382cf +0x09b:  mov    %edx,0x8(%esp)
085382d3 +0x09f:  movl   $0x1,0x4(%esp)
085382db +0x0a7:  mov    %eax,(%esp)
085382de +0x0aa:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
085382e3 +0x0af:  mov    0x10(%ebp),%eax
085382e6 +0x0b2:  lea    -0x59(%ebp),%edx
085382e9 +0x0b5:  mov    %edx,0x4(%esp)
085382ed +0x0b9:  mov    %eax,(%esp)
085382f0 +0x0bc:  call   08237262 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc90c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc90c
085382f5 +0x0c1:  jmp    08538334 <+0x100>
085382f7 +0x0c3:  lea    -0x1c(%ebp),%eax
085382fa +0x0c6:  mov    %eax,(%esp)
085382fd +0x0c9:  call   083edc5c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x87c28>  ; global constructors keyed to CServerEvent::m_nExpRate+0x87c28
08538302 +0x0ce:  mov    0xc(%ebp),%eax
08538305 +0x0d1:  mov    0x34(%eax),%edx
08538308 +0x0d4:  lea    -0x18(%ebp),%eax
0853830b +0x0d7:  mov    %edx,0x4(%esp)
0853830f +0x0db:  mov    %eax,(%esp)
08538312 +0x0de:  call   083e9332 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x832fe>  ; global constructors keyed to CServerEvent::m_nExpRate+0x832fe
08538317 +0x0e3:  sub    $0x4,%esp
0853831a +0x0e6:  lea    -0x18(%ebp),%eax
0853831d +0x0e9:  mov    %eax,0x4(%esp)
08538321 +0x0ed:  lea    -0x1c(%ebp),%eax
08538324 +0x0f0:  mov    %eax,(%esp)
08538327 +0x0f3:  call   083edc48 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x87c14>  ; global constructors keyed to CServerEvent::m_nExpRate+0x87c14
0853832c +0x0f8:  test   %al,%al
0853832e +0x0fa:  jne    08538288 <+0x54>
08538334 +0x100:  addl   $0x1,-0x14(%ebp)
08538338 +0x104:  mov    0xc(%ebp),%eax
0853833b +0x107:  movzbl 0x39(%eax),%eax
0853833f +0x10b:  movsbl %al,%eax
08538342 +0x10e:  cmp    -0x14(%ebp),%eax
08538345 +0x111:  setg   %al
08538348 +0x114:  test   %al,%al
0853834a +0x116:  jne    08538246 <+0x12>
08538350 +0x11c:  leave
08538351 +0x11d:  ret
```

## 反编译 C

```c
// WongWork::CObjectDrop::generateSpecificItem @ 0x8538234

/* WongWork::CObjectDrop::generateSpecificItem(WongWork::stGenerateRefData_t const&,
   WongWork::stGenerateResult_t&) */

void __thiscall
WongWork::CObjectDrop::generateSpecificItem
          (CObjectDrop *this,stGenerateRefData_t *param_1,stGenerateResult_t *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  Inven_Item local_5d [2];
  undefined4 local_5b;
  _List_const_iterator<std::pair<int,int>> local_20 [4];
  _List_const_iterator local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = 0;
  do {
    if ((char)param_1[0x39] <= local_18) {
      return;
    }
    local_14 = CGenerateRandomNumber::generateNumber((CGenerateRandomNumber *)(this + 8),2,10000);
    local_10 = 0;
    std::list<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
    while( true ) {
      std::list<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
      cVar1 = std::_List_const_iterator<std::pair<int,int>>::operator!=(local_20,local_1c);
      if (cVar1 == '\0') break;
      iVar2 = std::_List_const_iterator<std::pair<int,int>>::operator->(local_20);
      local_10 = local_10 + *(int *)(iVar2 + 4);
      if (local_14 < local_10) {
        Inven_Item::Inven_Item(local_5d);
        puVar3 = (undefined4 *)std::_List_const_iterator<std::pair<int,int>>::operator->(local_20);
        local_5b = *puVar3;
        iVar2 = G_CDataManager();
        CItemList::create_item(*(CItemList **)(iVar2 + 0xc),1,local_5d,1);
        std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
                  ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_2,local_5d);
        break;
      }
      std::_List_const_iterator<std::pair<int,int>>::operator++(local_20);
    }
    local_18 = local_18 + 1;
  } while( true );
}
```
