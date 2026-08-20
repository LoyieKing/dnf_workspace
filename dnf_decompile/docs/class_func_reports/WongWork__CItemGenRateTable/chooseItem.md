# chooseItem

`_ZN8WongWork17CItemGenRateTable10chooseItemENS_15eItemDropType_tE11ENUM_RARITYi`

`WongWork::CItemGenRateTable::chooseItem(WongWork::eItemDropType_t, ENUM_RARITY, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemGenRateTable` | `0x085349a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085349a4  _ZN8WongWork17CItemGenRateTable10chooseItemENS_15eItemDropType_tE11ENUM_RARITYi
#           WongWork::CItemGenRateTable::chooseItem(WongWork::eItemDropType_t, ENUM_RARITY, int)
# range [0x085349a4, 0x08534c19]
085349a4 +0x000:  push   %ebp
085349a5 +0x001:  mov    %esp,%ebp
085349a7 +0x003:  push   %esi
085349a8 +0x004:  push   %ebx
085349a9 +0x005:  sub    $0x60,%esp
085349ac +0x008:  cmpl   $0x2,0xc(%ebp)
085349b0 +0x00c:  jne    085349ee <+0x4a>
085349b2 +0x00e:  movl   $0xffffffff,-0xc(%ebp)
085349b9 +0x015:  mov    0x8(%ebp),%eax
085349bc +0x018:  lea    &_ZL14gUnicodeBuffer+0x19028(%eax),%edx
085349c2 +0x01e:  mov    0x14(%ebp),%eax
085349c5 +0x021:  mov    %eax,0x8(%esp)
085349c9 +0x025:  lea    0x10(%ebp),%eax
085349cc +0x028:  mov    %eax,0x4(%esp)
085349d0 +0x02c:  mov    %edx,(%esp)
085349d3 +0x02f:  call   085f1560 <_ZN13random_option23CRandomOptionItemHandle11choose_itemER11ENUM_RARITYi>  ; random_option::CRandomOptionItemHandle::choose_item(ENUM_RARITY&, int)
085349d8 +0x034:  mov    %eax,-0xc(%ebp)
085349db +0x037:  cmpl   $0xffffffff,-0xc(%ebp)
085349df +0x03b:  setne  %al
085349e2 +0x03e:  test   %al,%al
085349e4 +0x040:  je     085349ee <+0x4a>
085349e6 +0x042:  mov    -0xc(%ebp),%eax
085349e9 +0x045:  jmp    08534c0f <+0x26b>
085349ee +0x04a:  mov    0xc(%ebp),%ecx
085349f1 +0x04d:  mov    0x10(%ebp),%eax
085349f4 +0x050:  mov    %eax,%ebx
085349f6 +0x052:  mov    0x14(%ebp),%edx
085349f9 +0x055:  mov    %edx,%eax
085349fb +0x057:  add    %eax,%eax
085349fd +0x059:  add    %edx,%eax
085349ff +0x05b:  shl    $0x3,%eax
08534a02 +0x05e:  imul   $0x12d8,%ebx,%edx
08534a08 +0x064:  lea    (%eax,%edx,1),%edx
08534a0b +0x067:  imul   $0x7110,%ecx,%eax
08534a11 +0x06d:  lea    (%edx,%eax,1),%eax
08534a14 +0x070:  add    0x8(%ebp),%eax
08534a17 +0x073:  mov    %eax,(%esp)
08534a1a +0x076:  call   0853af60 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x11ec>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x11ec
08534a1f +0x07b:  test   %eax,%eax
08534a21 +0x07d:  sete   %al
08534a24 +0x080:  test   %al,%al
08534a26 +0x082:  je     08534a32 <+0x8e>
08534a28 +0x084:  mov    $0xffffffff,%eax
08534a2d +0x089:  jmp    08534c0f <+0x26b>
08534a32 +0x08e:  lea    -0x38(%ebp),%eax
08534a35 +0x091:  mov    %eax,(%esp)
08534a38 +0x094:  call   0853af74 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1200>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1200
08534a3d +0x099:  mov    0xc(%ebp),%ecx
08534a40 +0x09c:  mov    0x10(%ebp),%eax
08534a43 +0x09f:  mov    %eax,%ebx
08534a45 +0x0a1:  mov    0x14(%ebp),%edx
08534a48 +0x0a4:  mov    %edx,%eax
08534a4a +0x0a6:  add    %eax,%eax
08534a4c +0x0a8:  add    %edx,%eax
08534a4e +0x0aa:  shl    $0x3,%eax
08534a51 +0x0ad:  imul   $0x12d8,%ebx,%edx
08534a57 +0x0b3:  lea    (%eax,%edx,1),%edx
08534a5a +0x0b6:  imul   $0x7110,%ecx,%eax
08534a60 +0x0bc:  lea    (%edx,%eax,1),%eax
08534a63 +0x0bf:  mov    %eax,%edx
08534a65 +0x0c1:  add    0x8(%ebp),%edx
08534a68 +0x0c4:  lea    -0x4c(%ebp),%eax
08534a6b +0x0c7:  mov    %edx,0x4(%esp)
08534a6f +0x0cb:  mov    %eax,(%esp)
08534a72 +0x0ce:  call   08450298 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2eae>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2eae
08534a77 +0x0d3:  sub    $0x4,%esp
08534a7a +0x0d6:  mov    -0x4c(%ebp),%eax
08534a7d +0x0d9:  mov    %eax,-0x38(%ebp)
08534a80 +0x0dc:  lea    -0x34(%ebp),%eax
08534a83 +0x0df:  movl   $0x0,0x8(%esp)
08534a8b +0x0e7:  lea    -0x38(%ebp),%edx
08534a8e +0x0ea:  mov    %edx,0x4(%esp)
08534a92 +0x0ee:  mov    %eax,(%esp)
08534a95 +0x0f1:  call   0853af82 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x120e>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x120e
08534a9a +0x0f6:  sub    $0x4,%esp
08534a9d +0x0f9:  lea    -0x38(%ebp),%eax
08534aa0 +0x0fc:  mov    %eax,(%esp)
08534aa3 +0x0ff:  call   084502d2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2ee8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2ee8
08534aa8 +0x104:  mov    (%eax),%eax
08534aaa +0x106:  mov    %eax,-0x14(%ebp)
08534aad +0x109:  mov    -0x14(%ebp),%eax
08534ab0 +0x10c:  mov    %eax,-0x30(%ebp)
08534ab3 +0x10f:  mov    0x8(%ebp),%eax
08534ab6 +0x112:  mov    &_ZL14gUnicodeBuffer+0x19024(%eax),%eax
08534abc +0x118:  lea    -0x30(%ebp),%edx
08534abf +0x11b:  mov    %edx,0x4(%esp)
08534ac3 +0x11f:  mov    %eax,(%esp)
08534ac6 +0x122:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
08534acb +0x127:  mov    %eax,-0x3c(%ebp)
08534ace +0x12a:  movl   $0xffffffff,-0x10(%ebp)
08534ad5 +0x131:  mov    0xc(%ebp),%ecx
08534ad8 +0x134:  mov    0x10(%ebp),%eax
08534adb +0x137:  mov    %eax,%ebx
08534add +0x139:  mov    0x14(%ebp),%edx
08534ae0 +0x13c:  mov    %edx,%eax
08534ae2 +0x13e:  add    %eax,%eax
08534ae4 +0x140:  add    %edx,%eax
08534ae6 +0x142:  shl    $0x3,%eax
08534ae9 +0x145:  imul   $0x12d8,%ebx,%edx
08534aef +0x14b:  lea    (%eax,%edx,1),%edx
08534af2 +0x14e:  imul   $0x7110,%ecx,%eax
08534af8 +0x154:  lea    (%edx,%eax,1),%eax
08534afb +0x157:  mov    %eax,%edx
08534afd +0x159:  add    0x8(%ebp),%edx
08534b00 +0x15c:  lea    -0x4c(%ebp),%eax
08534b03 +0x15f:  lea    -0x3c(%ebp),%ecx
08534b06 +0x162:  mov    %ecx,0x8(%esp)
08534b0a +0x166:  mov    %edx,0x4(%esp)
08534b0e +0x16a:  mov    %eax,(%esp)
08534b11 +0x16d:  call   0853afc0 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x124c>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x124c
08534b16 +0x172:  sub    $0x4,%esp
08534b19 +0x175:  mov    -0x4c(%ebp),%eax
08534b1c +0x178:  mov    %eax,-0x38(%ebp)
08534b1f +0x17b:  mov    0xc(%ebp),%ecx
08534b22 +0x17e:  mov    0x10(%ebp),%eax
08534b25 +0x181:  mov    %eax,%ebx
08534b27 +0x183:  mov    0x14(%ebp),%edx
08534b2a +0x186:  mov    %edx,%eax
08534b2c +0x188:  add    %eax,%eax
08534b2e +0x18a:  add    %edx,%eax
08534b30 +0x18c:  shl    $0x3,%eax
08534b33 +0x18f:  imul   $0x12d8,%ebx,%edx
08534b39 +0x195:  lea    (%eax,%edx,1),%edx
08534b3c +0x198:  imul   $0x7110,%ecx,%eax
08534b42 +0x19e:  lea    (%edx,%eax,1),%eax
08534b45 +0x1a1:  mov    %eax,%edx
08534b47 +0x1a3:  add    0x8(%ebp),%edx
08534b4a +0x1a6:  lea    -0x2c(%ebp),%eax
08534b4d +0x1a9:  mov    %edx,0x4(%esp)
08534b51 +0x1ad:  mov    %eax,(%esp)
08534b54 +0x1b0:  call   08450298 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2eae>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2eae
08534b59 +0x1b5:  sub    $0x4,%esp
08534b5c +0x1b8:  lea    -0x2c(%ebp),%eax
08534b5f +0x1bb:  mov    %eax,0x4(%esp)
08534b63 +0x1bf:  lea    -0x38(%ebp),%eax
08534b66 +0x1c2:  mov    %eax,(%esp)
08534b69 +0x1c5:  call   082c068c <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x12587>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x12587
08534b6e +0x1ca:  test   %al,%al
08534b70 +0x1cc:  je     08534b8f <+0x1eb>
08534b72 +0x1ce:  lea    -0x28(%ebp),%eax
08534b75 +0x1d1:  movl   $0x0,0x8(%esp)
08534b7d +0x1d9:  lea    -0x38(%ebp),%edx
08534b80 +0x1dc:  mov    %edx,0x4(%esp)
08534b84 +0x1e0:  mov    %eax,(%esp)
08534b87 +0x1e3:  call   0853af82 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x120e>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x120e
08534b8c +0x1e8:  sub    $0x4,%esp
08534b8f +0x1eb:  lea    -0x38(%ebp),%eax
08534b92 +0x1ee:  mov    %eax,(%esp)
08534b95 +0x1f1:  call   084502d2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2ee8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2ee8
08534b9a +0x1f6:  mov    0x4(%eax),%eax
08534b9d +0x1f9:  mov    %eax,-0x10(%ebp)
08534ba0 +0x1fc:  jmp    08534c0c <+0x268>
08534ba2 +0x1fe:  mov    %eax,(%esp)
08534ba5 +0x201:  call   08725ce0 <__cxa_begin_catch>
08534baa +0x206:  movl   $0x5,0xc(%esp)
08534bb2 +0x20e:  movl   $0x279,0x8(%esp)
08534bba +0x216:  movl   $&_ZZN8WongWork17CItemGenRateTable10chooseItemENS_15eItemDropType_tE11ENUM_RARITYiE19__PRETTY_FUNCTION__,0x4(%esp)
08534bc2 +0x21e:  lea    -0x24(%ebp),%eax
08534bc5 +0x221:  mov    %eax,(%esp)
08534bc8 +0x224:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08534bcd +0x229:  movl   $0x279,0xc(%esp)
08534bd5 +0x231:  movl   $&_ZZN8WongWork17CItemGenRateTable10chooseItemENS_15eItemDropType_tE11ENUM_RARITYiE19__PRETTY_FUNCTION__,0x8(%esp)
08534bdd +0x239:  movl   $"[%s][%d]",0x4(%esp)
08534be5 +0x241:  lea    -0x24(%ebp),%eax
08534be8 +0x244:  mov    %eax,(%esp)
08534beb +0x247:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08534bf0 +0x24c:  jmp    08534c07 <+0x263>
08534bf2 +0x24e:  mov    %edx,%ebx
08534bf4 +0x250:  mov    %eax,%esi
08534bf6 +0x252:  call   08725c30 <__cxa_end_catch>
08534bfb +0x257:  mov    %esi,%eax
08534bfd +0x259:  mov    %ebx,%edx
08534bff +0x25b:  mov    %eax,(%esp)
08534c02 +0x25e:  call   08ae3750 <_Unwind_Resume>
08534c07 +0x263:  call   08725c30 <__cxa_end_catch>
08534c0c +0x268:  mov    -0x10(%ebp),%eax
08534c0f +0x26b:  lea    -0x8(%ebp),%esp
08534c12 +0x26e:  add    $0x0,%esp
08534c15 +0x271:  pop    %ebx
08534c16 +0x272:  pop    %esi
08534c17 +0x273:  pop    %ebp
08534c18 +0x274:  ret
08534c19 +0x275:  nop
```

## 反编译 C

```c
// WongWork::CItemGenRateTable::chooseItem @ 0x85349a4

/* WongWork::CItemGenRateTable::chooseItem(WongWork::eItemDropType_t, ENUM_RARITY, int) */

int __thiscall
WongWork::CItemGenRateTable::chooseItem(CItemGenRateTable *this,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  ulong *puVar3;
  undefined4 local_50 [4];
  undefined4 local_40;
  undefined4 local_3c;
  _Rb_tree_iterator<std::pair<unsigned_int_const,int>> local_38 [4];
  ulong local_34;
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
  local_30 [4];
  _Rb_tree_iterator<std::pair<unsigned_int_const,int>> local_2c [20];
  ulong local_18;
  undefined4 local_14;
  int local_10;
  
  if (param_2 == 2) {
    local_10 = 0xffffffff;
    local_10 = random_option::CRandomOptionItemHandle::choose_item
                         ((CRandomOptionItemHandle *)(this + 0x23554),(ENUM_RARITY *)&param_3,
                          param_4);
    if (local_10 != -1) {
      return local_10;
    }
  }
  iVar2 = std::
          map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
          ::size((map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
                  *)(this + param_4 * 0x18 + param_3 * 0x12d8 + param_2 * 0x7110));
  if (iVar2 == 0) {
    iVar2 = -1;
  }
  else {
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::_Rb_tree_iterator
              ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)&local_3c);
    std::
    map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
    ::end((map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
           *)local_50);
    local_3c = local_50[0];
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator--(local_38,(int)&local_3c);
    puVar3 = (ulong *)std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator->
                                ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)&local_3c);
    local_34 = *puVar3;
    local_18 = local_34;
    local_40 = CMTRand::randInt(*(CMTRand **)(this + 0x23550),&local_34);
    local_14 = 0xffffffff;
                    /* try { // try from 08534b11 to 08534b8b has its CatchHandler @ 08534ba2 */
    std::
    map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
    ::lower_bound((map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
                   *)local_50,(uint *)(this + param_4 * 0x18 + param_3 * 0x12d8 + param_2 * 0x7110))
    ;
    local_3c = local_50[0];
    std::
    map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
    ::end(local_30);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator==
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)&local_3c,
                       (_Rb_tree_iterator *)local_30);
    if (cVar1 != '\0') {
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator--(local_2c,(int)&local_3c)
      ;
    }
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)&local_3c);
    iVar2 = *(int *)(iVar2 + 4);
  }
  return iVar2;
}
```
