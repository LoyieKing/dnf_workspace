# generateGoldCardBlankItem

`_ZN8WongWork12CClearReward25generateGoldCardBlankItemER10Inven_Item`

`WongWork::CClearReward::generateGoldCardBlankItem(Inven_Item&)`

| 类 | 地址 |
|---|---|
| `WongWork::CClearReward` | `0x08539166` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08539166  _ZN8WongWork12CClearReward25generateGoldCardBlankItemER10Inven_Item
#           WongWork::CClearReward::generateGoldCardBlankItem(Inven_Item&)
# range [0x08539166, 0x085392bf]
08539166 +0x000:  push   %ebp
08539167 +0x001:  mov    %esp,%ebp
08539169 +0x003:  push   %ebx
0853916a +0x004:  sub    $0x34,%esp
0853916d +0x007:  mov    0x8(%ebp),%eax
08539170 +0x00a:  add    $&_ZL14gUnicodeBuffer+0x19614,%eax
08539175 +0x00f:  mov    %eax,(%esp)
08539178 +0x012:  call   0853bd72 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1ffe>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1ffe
0853917d +0x017:  test   %al,%al
0853917f +0x019:  je     0853918b <+0x25>
08539181 +0x01b:  mov    $0x0,%eax
08539186 +0x020:  jmp    085392ba <+0x154>
0853918b +0x025:  movl   $0x0,-0x10(%ebp)
08539192 +0x02c:  mov    0x8(%ebp),%eax
08539195 +0x02f:  mov    &_ZL14gUnicodeBuffer+0x19610(%eax),%eax
0853919b +0x035:  mov    %eax,(%esp)
0853919e +0x038:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
085391a3 +0x03d:  mov    %eax,-0xc(%ebp)
085391a6 +0x040:  mov    0x8(%ebp),%eax
085391a9 +0x043:  lea    &_ZL14gUnicodeBuffer+0x19614(%eax),%edx
085391af +0x049:  lea    -0x18(%ebp),%eax
085391b2 +0x04c:  mov    %edx,0x4(%esp)
085391b6 +0x050:  mov    %eax,(%esp)
085391b9 +0x053:  call   0853bdb6 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x2042>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x2042
085391be +0x058:  sub    $0x4,%esp
085391c1 +0x05b:  lea    -0x18(%ebp),%eax
085391c4 +0x05e:  mov    %eax,0x4(%esp)
085391c8 +0x062:  lea    -0x1c(%ebp),%eax
085391cb +0x065:  mov    %eax,(%esp)
085391ce +0x068:  call   0853bdda <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x2066>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x2066
085391d3 +0x06d:  mov    0x8(%ebp),%eax
085391d6 +0x070:  lea    &_ZL14gUnicodeBuffer+0x19614(%eax),%edx
085391dc +0x076:  lea    -0x14(%ebp),%eax
085391df +0x079:  mov    %edx,0x4(%esp)
085391e3 +0x07d:  mov    %eax,(%esp)
085391e6 +0x080:  call   0853bdf4 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x2080>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x2080
085391eb +0x085:  sub    $0x4,%esp
085391ee +0x088:  lea    -0x14(%ebp),%eax
085391f1 +0x08b:  mov    %eax,0x4(%esp)
085391f5 +0x08f:  lea    -0x20(%ebp),%eax
085391f8 +0x092:  mov    %eax,(%esp)
085391fb +0x095:  call   0853bdda <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x2066>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x2066
08539200 +0x09a:  jmp    0853929b <+0x135>
08539205 +0x09f:  lea    -0x1c(%ebp),%eax
08539208 +0x0a2:  mov    %eax,(%esp)
0853920b +0x0a5:  call   0853be5c <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x20e8>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x20e8
08539210 +0x0aa:  mov    (%eax),%edx
08539212 +0x0ac:  mov    -0x10(%ebp),%eax
08539215 +0x0af:  lea    (%edx,%eax,1),%eax
08539218 +0x0b2:  mov    %eax,-0x10(%ebp)
0853921b +0x0b5:  mov    -0xc(%ebp),%eax
0853921e +0x0b8:  cmp    -0x10(%ebp),%eax
08539221 +0x0bb:  jge    08539290 <+0x12a>
08539223 +0x0bd:  lea    -0x1c(%ebp),%eax
08539226 +0x0c0:  mov    %eax,(%esp)
08539229 +0x0c3:  call   0853be5c <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x20e8>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x20e8
0853922e +0x0c8:  mov    0x4(%eax),%eax
08539231 +0x0cb:  cmp    $0xffffffff,%eax
08539234 +0x0ce:  sete   %al
08539237 +0x0d1:  test   %al,%al
08539239 +0x0d3:  je     08539242 <+0xdc>
0853923b +0x0d5:  mov    $0x0,%eax
08539240 +0x0da:  jmp    085392ba <+0x154>
08539242 +0x0dc:  lea    -0x1c(%ebp),%eax
08539245 +0x0df:  mov    %eax,(%esp)
08539248 +0x0e2:  call   0853be5c <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x20e8>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x20e8
0853924d +0x0e7:  mov    0x4(%eax),%edx
08539250 +0x0ea:  mov    0xc(%ebp),%eax
08539253 +0x0ed:  mov    %edx,0x2(%eax)
08539256 +0x0f0:  lea    -0x1c(%ebp),%eax
08539259 +0x0f3:  mov    %eax,(%esp)
0853925c +0x0f6:  call   0853be5c <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x20e8>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x20e8
08539261 +0x0fb:  mov    0x8(%eax),%eax
08539264 +0x0fe:  mov    %eax,%ebx
08539266 +0x100:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0853926b +0x105:  mov    0xc(%eax),%eax
0853926e +0x108:  mov    %ebx,0xc(%esp)
08539272 +0x10c:  mov    0xc(%ebp),%edx
08539275 +0x10f:  mov    %edx,0x8(%esp)
08539279 +0x113:  movl   $0x1,0x4(%esp)
08539281 +0x11b:  mov    %eax,(%esp)
08539284 +0x11e:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
08539289 +0x123:  mov    $0x1,%eax
0853928e +0x128:  jmp    085392ba <+0x154>
08539290 +0x12a:  lea    -0x1c(%ebp),%eax
08539293 +0x12d:  mov    %eax,(%esp)
08539296 +0x130:  call   0853be46 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x20d2>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x20d2
0853929b +0x135:  lea    -0x20(%ebp),%eax
0853929e +0x138:  mov    %eax,0x4(%esp)
085392a2 +0x13c:  lea    -0x1c(%ebp),%eax
085392a5 +0x13f:  mov    %eax,(%esp)
085392a8 +0x142:  call   0853be1a <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x20a6>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x20a6
085392ad +0x147:  test   %al,%al
085392af +0x149:  jne    08539205 <+0x9f>
085392b5 +0x14f:  mov    $0x0,%eax
085392ba +0x154:  mov    -0x4(%ebp),%ebx
085392bd +0x157:  leave
085392be +0x158:  ret
085392bf +0x159:  nop
```

## 反编译 C

```c
// WongWork::CClearReward::generateGoldCardBlankItem @ 0x8539166

/* WongWork::CClearReward::generateGoldCardBlankItem(Inven_Item&) */

undefined4 __thiscall
WongWork::CClearReward::generateGoldCardBlankItem(CClearReward *this,Inven_Item *param_1)

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
    local_10 = get_rand_int(*(int *)(this + 0x23b3c));
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
