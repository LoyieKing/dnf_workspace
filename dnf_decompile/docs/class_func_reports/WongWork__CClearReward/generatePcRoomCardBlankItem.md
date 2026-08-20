# generatePcRoomCardBlankItem

`_ZN8WongWork12CClearReward27generatePcRoomCardBlankItemER10Inven_Item`

`WongWork::CClearReward::generatePcRoomCardBlankItem(Inven_Item&)`

| 类 | 地址 |
|---|---|
| `WongWork::CClearReward` | `0x0853900c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0853900c  _ZN8WongWork12CClearReward27generatePcRoomCardBlankItemER10Inven_Item
#           WongWork::CClearReward::generatePcRoomCardBlankItem(Inven_Item&)
# range [0x0853900c, 0x08539165]
0853900c +0x000:  push   %ebp
0853900d +0x001:  mov    %esp,%ebp
0853900f +0x003:  push   %ebx
08539010 +0x004:  sub    $0x34,%esp
08539013 +0x007:  mov    0x8(%ebp),%eax
08539016 +0x00a:  add    $&_ZL14gUnicodeBuffer+0x1964c,%eax
0853901b +0x00f:  mov    %eax,(%esp)
0853901e +0x012:  call   0853bd72 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1ffe>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1ffe
08539023 +0x017:  test   %al,%al
08539025 +0x019:  je     08539031 <+0x25>
08539027 +0x01b:  mov    $0x0,%eax
0853902c +0x020:  jmp    08539160 <+0x154>
08539031 +0x025:  movl   $0x0,-0x10(%ebp)
08539038 +0x02c:  mov    0x8(%ebp),%eax
0853903b +0x02f:  mov    &_ZL14gUnicodeBuffer+0x19648(%eax),%eax
08539041 +0x035:  mov    %eax,(%esp)
08539044 +0x038:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08539049 +0x03d:  mov    %eax,-0xc(%ebp)
0853904c +0x040:  mov    0x8(%ebp),%eax
0853904f +0x043:  lea    &_ZL14gUnicodeBuffer+0x1964c(%eax),%edx
08539055 +0x049:  lea    -0x18(%ebp),%eax
08539058 +0x04c:  mov    %edx,0x4(%esp)
0853905c +0x050:  mov    %eax,(%esp)
0853905f +0x053:  call   0853bdb6 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x2042>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x2042
08539064 +0x058:  sub    $0x4,%esp
08539067 +0x05b:  lea    -0x18(%ebp),%eax
0853906a +0x05e:  mov    %eax,0x4(%esp)
0853906e +0x062:  lea    -0x1c(%ebp),%eax
08539071 +0x065:  mov    %eax,(%esp)
08539074 +0x068:  call   0853bdda <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x2066>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x2066
08539079 +0x06d:  mov    0x8(%ebp),%eax
0853907c +0x070:  lea    &_ZL14gUnicodeBuffer+0x1964c(%eax),%edx
08539082 +0x076:  lea    -0x14(%ebp),%eax
08539085 +0x079:  mov    %edx,0x4(%esp)
08539089 +0x07d:  mov    %eax,(%esp)
0853908c +0x080:  call   0853bdf4 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x2080>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x2080
08539091 +0x085:  sub    $0x4,%esp
08539094 +0x088:  lea    -0x14(%ebp),%eax
08539097 +0x08b:  mov    %eax,0x4(%esp)
0853909b +0x08f:  lea    -0x20(%ebp),%eax
0853909e +0x092:  mov    %eax,(%esp)
085390a1 +0x095:  call   0853bdda <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x2066>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x2066
085390a6 +0x09a:  jmp    08539141 <+0x135>
085390ab +0x09f:  lea    -0x1c(%ebp),%eax
085390ae +0x0a2:  mov    %eax,(%esp)
085390b1 +0x0a5:  call   0853be5c <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x20e8>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x20e8
085390b6 +0x0aa:  mov    (%eax),%edx
085390b8 +0x0ac:  mov    -0x10(%ebp),%eax
085390bb +0x0af:  lea    (%edx,%eax,1),%eax
085390be +0x0b2:  mov    %eax,-0x10(%ebp)
085390c1 +0x0b5:  mov    -0xc(%ebp),%eax
085390c4 +0x0b8:  cmp    -0x10(%ebp),%eax
085390c7 +0x0bb:  jge    08539136 <+0x12a>
085390c9 +0x0bd:  lea    -0x1c(%ebp),%eax
085390cc +0x0c0:  mov    %eax,(%esp)
085390cf +0x0c3:  call   0853be5c <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x20e8>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x20e8
085390d4 +0x0c8:  mov    0x4(%eax),%eax
085390d7 +0x0cb:  cmp    $0xffffffff,%eax
085390da +0x0ce:  sete   %al
085390dd +0x0d1:  test   %al,%al
085390df +0x0d3:  je     085390e8 <+0xdc>
085390e1 +0x0d5:  mov    $0x0,%eax
085390e6 +0x0da:  jmp    08539160 <+0x154>
085390e8 +0x0dc:  lea    -0x1c(%ebp),%eax
085390eb +0x0df:  mov    %eax,(%esp)
085390ee +0x0e2:  call   0853be5c <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x20e8>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x20e8
085390f3 +0x0e7:  mov    0x4(%eax),%edx
085390f6 +0x0ea:  mov    0xc(%ebp),%eax
085390f9 +0x0ed:  mov    %edx,0x2(%eax)
085390fc +0x0f0:  lea    -0x1c(%ebp),%eax
085390ff +0x0f3:  mov    %eax,(%esp)
08539102 +0x0f6:  call   0853be5c <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x20e8>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x20e8
08539107 +0x0fb:  mov    0x8(%eax),%eax
0853910a +0x0fe:  mov    %eax,%ebx
0853910c +0x100:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08539111 +0x105:  mov    0xc(%eax),%eax
08539114 +0x108:  mov    %ebx,0xc(%esp)
08539118 +0x10c:  mov    0xc(%ebp),%edx
0853911b +0x10f:  mov    %edx,0x8(%esp)
0853911f +0x113:  movl   $0x1,0x4(%esp)
08539127 +0x11b:  mov    %eax,(%esp)
0853912a +0x11e:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
0853912f +0x123:  mov    $0x1,%eax
08539134 +0x128:  jmp    08539160 <+0x154>
08539136 +0x12a:  lea    -0x1c(%ebp),%eax
08539139 +0x12d:  mov    %eax,(%esp)
0853913c +0x130:  call   0853be46 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x20d2>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x20d2
08539141 +0x135:  lea    -0x20(%ebp),%eax
08539144 +0x138:  mov    %eax,0x4(%esp)
08539148 +0x13c:  lea    -0x1c(%ebp),%eax
0853914b +0x13f:  mov    %eax,(%esp)
0853914e +0x142:  call   0853be1a <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x20a6>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x20a6
08539153 +0x147:  test   %al,%al
08539155 +0x149:  jne    085390ab <+0x9f>
0853915b +0x14f:  mov    $0x0,%eax
08539160 +0x154:  mov    -0x4(%ebp),%ebx
08539163 +0x157:  leave
08539164 +0x158:  ret
08539165 +0x159:  nop
```

## 反编译 C

```c
// WongWork::CClearReward::generatePcRoomCardBlankItem @ 0x853900c

/* WongWork::CClearReward::generatePcRoomCardBlankItem(Inven_Item&) */

undefined4 __thiscall
WongWork::CClearReward::generatePcRoomCardBlankItem(CClearReward *this,Inven_Item *param_1)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  __normal_iterator<WongWork::CClearReward::stGoldCardBlankItemInfo_t_const*,std::vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>>
  local_24 [4];
  __normal_iterator<WongWork::CClearReward::stGoldCardBlankItemInfo_t_const*,std::vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>>
  local_20 [4];
  __normal_iterator local_1c [4];
  __normal_iterator local_18 [4];
  int local_14;
  int local_10;
  
  cVar2 = std::
          vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>
          ::empty();
  if (cVar2 == '\0') {
    local_14 = 0;
    local_10 = get_rand_int(*(int *)(this + 0x23b74));
    std::
    vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>
    ::begin();
    __gnu_cxx::
    __normal_iterator<WongWork::CClearReward::stGoldCardBlankItemInfo_t_const*,std::vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>>
    ::__normal_iterator<WongWork::CClearReward::stGoldCardBlankItemInfo_t*>(local_20,local_1c);
    std::
    vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>
    ::end();
    __gnu_cxx::
    __normal_iterator<WongWork::CClearReward::stGoldCardBlankItemInfo_t_const*,std::vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>>
    ::__normal_iterator<WongWork::CClearReward::stGoldCardBlankItemInfo_t*>(local_24,local_18);
    while (bVar3 = __gnu_cxx::operator!=(local_20,local_24), bVar3) {
      piVar4 = (int *)__gnu_cxx::
                      __normal_iterator<WongWork::CClearReward::stGoldCardBlankItemInfo_t_const*,std::vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>>
                      ::operator->(local_20);
      local_14 = *piVar4 + local_14;
      if (local_10 < local_14) {
        iVar5 = __gnu_cxx::
                __normal_iterator<WongWork::CClearReward::stGoldCardBlankItemInfo_t_const*,std::vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>>
                ::operator->(local_20);
        if (*(int *)(iVar5 + 4) != -1) {
          iVar5 = __gnu_cxx::
                  __normal_iterator<WongWork::CClearReward::stGoldCardBlankItemInfo_t_const*,std::vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>>
                  ::operator->(local_20);
          *(undefined4 *)(param_1 + 2) = *(undefined4 *)(iVar5 + 4);
          iVar5 = __gnu_cxx::
                  __normal_iterator<WongWork::CClearReward::stGoldCardBlankItemInfo_t_const*,std::vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>>
                  ::operator->(local_20);
          uVar1 = *(undefined4 *)(iVar5 + 8);
          iVar5 = G_CDataManager();
          CItemList::create_item(*(CItemList **)(iVar5 + 0xc),1,param_1,uVar1);
          return 1;
        }
        return 0;
      }
      __gnu_cxx::
      __normal_iterator<WongWork::CClearReward::stGoldCardBlankItemInfo_t_const*,std::vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>>
      ::operator++(local_20);
    }
  }
  return 0;
}
```
