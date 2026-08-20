# choose_item

`_ZN13random_option23CRandomOptionItemHandle11choose_itemER11ENUM_RARITYi`

`random_option::CRandomOptionItemHandle::choose_item(ENUM_RARITY&, int)`

| 类 | 地址 |
|---|---|
| `random_option::CRandomOptionItemHandle` | `0x085f1560` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f1560  _ZN13random_option23CRandomOptionItemHandle11choose_itemER11ENUM_RARITYi
#           random_option::CRandomOptionItemHandle::choose_item(ENUM_RARITY&, int)
# range [0x085f1560, 0x085f1801]
085f1560 +0x000:  push   %ebp
085f1561 +0x001:  mov    %esp,%ebp
085f1563 +0x003:  sub    $0x48,%esp
085f1566 +0x006:  mov    0x8(%ebp),%eax
085f1569 +0x009:  movzbl 0xc(%eax),%eax
085f156d +0x00d:  test   %al,%al
085f156f +0x00f:  je     085f157b <+0x1b>
085f1571 +0x011:  mov    $0xffffffff,%eax
085f1576 +0x016:  jmp    085f17ff <+0x29f>
085f157b +0x01b:  cmpl   $0x9,0x10(%ebp)
085f157f +0x01f:  jle    085f15be <+0x5e>
085f1581 +0x021:  cmpl   $0x4f,0x10(%ebp)
085f1585 +0x025:  jg     085f15b7 <+0x57>
085f1587 +0x027:  mov    0x10(%ebp),%ecx
085f158a +0x02a:  mov    $0x66666667,%edx
085f158f +0x02f:  mov    %ecx,%eax
085f1591 +0x031:  imul   %edx
085f1593 +0x033:  sar    $0x2,%edx
085f1596 +0x036:  mov    %ecx,%eax
085f1598 +0x038:  sar    $0x1f,%eax
085f159b +0x03b:  sub    %eax,%edx
085f159d +0x03d:  mov    %edx,%eax
085f159f +0x03f:  shl    $0x2,%eax
085f15a2 +0x042:  add    %edx,%eax
085f15a4 +0x044:  add    %eax,%eax
085f15a6 +0x046:  mov    %ecx,%edx
085f15a8 +0x048:  sub    %eax,%edx
085f15aa +0x04a:  mov    %edx,%eax
085f15ac +0x04c:  mov    %eax,-0x10(%ebp)
085f15af +0x04f:  mov    -0x10(%ebp),%eax
085f15b2 +0x052:  sub    %eax,0x10(%ebp)
085f15b5 +0x055:  jmp    085f15be <+0x5e>
085f15b7 +0x057:  movl   $0x50,0x10(%ebp)
085f15be +0x05e:  cmpl   $0x9,0x10(%ebp)
085f15c2 +0x062:  jg     085f15e1 <+0x81>
085f15c4 +0x064:  mov    0xc(%ebp),%eax
085f15c7 +0x067:  mov    (%eax),%eax
085f15c9 +0x069:  cmp    $0x2,%eax
085f15cc +0x06c:  jne    085f15e1 <+0x81>
085f15ce +0x06e:  mov    0xc(%ebp),%eax
085f15d1 +0x071:  movl   $0x0,(%eax)
085f15d7 +0x077:  mov    $0xffffffff,%eax
085f15dc +0x07c:  jmp    085f17ff <+0x29f>
085f15e1 +0x081:  mov    0xc(%ebp),%eax
085f15e4 +0x084:  mov    (%eax),%eax
085f15e6 +0x086:  mov    0x10(%ebp),%edx
085f15e9 +0x089:  mov    %edx,0x8(%esp)
085f15ed +0x08d:  mov    %eax,0x4(%esp)
085f15f1 +0x091:  mov    0x8(%ebp),%eax
085f15f4 +0x094:  mov    %eax,(%esp)
085f15f7 +0x097:  call   085f0ec2 <_ZN13random_option23CRandomOptionItemHandle19_random_applicationE11ENUM_RARITYi>  ; random_option::CRandomOptionItemHandle::_random_application(ENUM_RARITY, int)
085f15fc +0x09c:  xor    $0x1,%eax
085f15ff +0x09f:  test   %al,%al
085f1601 +0x0a1:  je     085f160d <+0xad>
085f1603 +0x0a3:  mov    $0xffffffff,%eax
085f1608 +0x0a8:  jmp    085f17ff <+0x29f>
085f160d +0x0ad:  mov    0x8(%ebp),%eax
085f1610 +0x0b0:  mov    0x8(%eax),%eax
085f1613 +0x0b3:  lea    0x1(%eax),%edx
085f1616 +0x0b6:  mov    0x8(%ebp),%eax
085f1619 +0x0b9:  mov    %edx,0x8(%eax)
085f161c +0x0bc:  mov    0xc(%ebp),%eax
085f161f +0x0bf:  mov    (%eax),%eax
085f1621 +0x0c1:  mov    0x10(%ebp),%edx
085f1624 +0x0c4:  mov    %edx,0x8(%esp)
085f1628 +0x0c8:  mov    %eax,0x4(%esp)
085f162c +0x0cc:  mov    0x8(%ebp),%eax
085f162f +0x0cf:  mov    %eax,(%esp)
085f1632 +0x0d2:  call   085f0f9a <_ZN13random_option23CRandomOptionItemHandle16_get_level_limitE11ENUM_RARITYi>  ; random_option::CRandomOptionItemHandle::_get_level_limit(ENUM_RARITY, int)
085f1637 +0x0d7:  mov    %eax,-0x1c(%ebp)
085f163a +0x0da:  mov    -0x1c(%ebp),%eax
085f163d +0x0dd:  mov    %eax,0x4(%esp)
085f1641 +0x0e1:  mov    0x8(%ebp),%eax
085f1644 +0x0e4:  mov    %eax,(%esp)
085f1647 +0x0e7:  call   085f1088 <_ZN13random_option23CRandomOptionItemHandle14_get_part_typeEi>  ; random_option::CRandomOptionItemHandle::_get_part_type(int)
085f164c +0x0ec:  mov    %eax,-0x18(%ebp)
085f164f +0x0ef:  mov    0xc(%ebp),%eax
085f1652 +0x0f2:  mov    (%eax),%eax
085f1654 +0x0f4:  mov    -0x1c(%ebp),%edx
085f1657 +0x0f7:  mov    %edx,0x8(%esp)
085f165b +0x0fb:  mov    %eax,0x4(%esp)
085f165f +0x0ff:  mov    0x8(%ebp),%eax
085f1662 +0x102:  mov    %eax,(%esp)
085f1665 +0x105:  call   085f1426 <_ZN13random_option23CRandomOptionItemHandle14_get_base_itemE11ENUM_RARITYi>  ; random_option::CRandomOptionItemHandle::_get_base_item(ENUM_RARITY, int)
085f166a +0x10a:  mov    %eax,-0x14(%ebp)
085f166d +0x10d:  mov    -0x18(%ebp),%eax
085f1670 +0x110:  movzwl %ax,%ecx
085f1673 +0x113:  mov    -0x1c(%ebp),%eax
085f1676 +0x116:  movzbl %al,%edx
085f1679 +0x119:  mov    0xc(%ebp),%eax
085f167c +0x11c:  mov    (%eax),%eax
085f167e +0x11e:  movzbl %al,%eax
085f1681 +0x121:  mov    %ecx,0xc(%esp)
085f1685 +0x125:  mov    %edx,0x8(%esp)
085f1689 +0x129:  mov    %eax,0x4(%esp)
085f168d +0x12d:  lea    -0x2c(%ebp),%eax
085f1690 +0x130:  mov    %eax,(%esp)
085f1693 +0x133:  call   08513f82 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5b7>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5b7
085f1698 +0x138:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f169d +0x13d:  lea    0x60(%eax),%ecx
085f16a0 +0x140:  lea    -0x30(%ebp),%eax
085f16a3 +0x143:  lea    -0x2c(%ebp),%edx
085f16a6 +0x146:  mov    %edx,0x8(%esp)
085f16aa +0x14a:  mov    %ecx,0x4(%esp)
085f16ae +0x14e:  mov    %eax,(%esp)
085f16b1 +0x151:  call   085f4556 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x571>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x571
085f16b6 +0x156:  sub    $0x4,%esp
085f16b9 +0x159:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f16be +0x15e:  lea    0x60(%eax),%edx
085f16c1 +0x161:  lea    -0x28(%ebp),%eax
085f16c4 +0x164:  mov    %edx,0x4(%esp)
085f16c8 +0x168:  mov    %eax,(%esp)
085f16cb +0x16b:  call   085f4582 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x59d>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x59d
085f16d0 +0x170:  sub    $0x4,%esp
085f16d3 +0x173:  lea    -0x28(%ebp),%eax
085f16d6 +0x176:  mov    %eax,0x4(%esp)
085f16da +0x17a:  lea    -0x30(%ebp),%eax
085f16dd +0x17d:  mov    %eax,(%esp)
085f16e0 +0x180:  call   085f45a8 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x5c3>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x5c3
085f16e5 +0x185:  test   %al,%al
085f16e7 +0x187:  je     085f17f1 <+0x291>
085f16ed +0x18d:  lea    -0x30(%ebp),%eax
085f16f0 +0x190:  mov    %eax,(%esp)
085f16f3 +0x193:  call   085f45bc <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x5d7>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x5d7
085f16f8 +0x198:  add    $0x4,%eax
085f16fb +0x19b:  mov    %eax,(%esp)
085f16fe +0x19e:  call   085f45ca <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x5e5>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x5e5
085f1703 +0x1a3:  test   %al,%al
085f1705 +0x1a5:  je     085f171a <+0x1ba>
085f1707 +0x1a7:  mov    0xc(%ebp),%eax
085f170a +0x1aa:  movl   $0x0,(%eax)
085f1710 +0x1b0:  mov    $0xffffffff,%eax
085f1715 +0x1b5:  jmp    085f17ff <+0x29f>
085f171a +0x1ba:  movl   $0x0,-0xc(%ebp)
085f1721 +0x1c1:  lea    -0x30(%ebp),%eax
085f1724 +0x1c4:  mov    %eax,(%esp)
085f1727 +0x1c7:  call   085f45bc <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x5d7>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x5d7
085f172c +0x1cc:  lea    0x4(%eax),%edx
085f172f +0x1cf:  lea    -0x34(%ebp),%eax
085f1732 +0x1d2:  mov    %edx,0x4(%esp)
085f1736 +0x1d6:  mov    %eax,(%esp)
085f1739 +0x1d9:  call   085f45de <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x5f9>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x5f9
085f173e +0x1de:  sub    $0x4,%esp
085f1741 +0x1e1:  jmp    085f1752 <+0x1f2>
085f1743 +0x1e3:  lea    -0x34(%ebp),%eax
085f1746 +0x1e6:  mov    %eax,(%esp)
085f1749 +0x1e9:  call   085f463e <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x659>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x659
085f174e +0x1ee:  addl   $0x1,-0xc(%ebp)
085f1752 +0x1f2:  lea    -0x30(%ebp),%eax
085f1755 +0x1f5:  mov    %eax,(%esp)
085f1758 +0x1f8:  call   085f45bc <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x5d7>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x5d7
085f175d +0x1fd:  lea    0x4(%eax),%edx
085f1760 +0x200:  lea    -0x24(%ebp),%eax
085f1763 +0x203:  mov    %edx,0x4(%esp)
085f1767 +0x207:  mov    %eax,(%esp)
085f176a +0x20a:  call   085f4604 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x61f>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x61f
085f176f +0x20f:  sub    $0x4,%esp
085f1772 +0x212:  lea    -0x24(%ebp),%eax
085f1775 +0x215:  mov    %eax,0x4(%esp)
085f1779 +0x219:  lea    -0x34(%ebp),%eax
085f177c +0x21c:  mov    %eax,(%esp)
085f177f +0x21f:  call   085f462a <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x645>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x645
085f1784 +0x224:  test   %al,%al
085f1786 +0x226:  je     085f1797 <+0x237>
085f1788 +0x228:  mov    -0xc(%ebp),%eax
085f178b +0x22b:  cmp    -0x14(%ebp),%eax
085f178e +0x22e:  jge    085f1797 <+0x237>
085f1790 +0x230:  mov    $0x1,%eax
085f1795 +0x235:  jmp    085f179c <+0x23c>
085f1797 +0x237:  mov    $0x0,%eax
085f179c +0x23c:  test   %al,%al
085f179e +0x23e:  jne    085f1743 <+0x1e3>
085f17a0 +0x240:  lea    -0x30(%ebp),%eax
085f17a3 +0x243:  mov    %eax,(%esp)
085f17a6 +0x246:  call   085f45bc <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x5d7>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x5d7
085f17ab +0x24b:  lea    0x4(%eax),%edx
085f17ae +0x24e:  lea    -0x20(%ebp),%eax
085f17b1 +0x251:  mov    %edx,0x4(%esp)
085f17b5 +0x255:  mov    %eax,(%esp)
085f17b8 +0x258:  call   085f4604 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x61f>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x61f
085f17bd +0x25d:  sub    $0x4,%esp
085f17c0 +0x260:  lea    -0x20(%ebp),%eax
085f17c3 +0x263:  mov    %eax,0x4(%esp)
085f17c7 +0x267:  lea    -0x34(%ebp),%eax
085f17ca +0x26a:  mov    %eax,(%esp)
085f17cd +0x26d:  call   085f465c <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x677>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x677
085f17d2 +0x272:  test   %al,%al
085f17d4 +0x274:  je     085f17e1 <+0x281>
085f17d6 +0x276:  lea    -0x34(%ebp),%eax
085f17d9 +0x279:  mov    %eax,(%esp)
085f17dc +0x27c:  call   085f4670 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x68b>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x68b
085f17e1 +0x281:  lea    -0x34(%ebp),%eax
085f17e4 +0x284:  mov    %eax,(%esp)
085f17e7 +0x287:  call   085f468e <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x6a9>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x6a9
085f17ec +0x28c:  mov    0x4(%eax),%eax
085f17ef +0x28f:  jmp    085f17ff <+0x29f>
085f17f1 +0x291:  mov    0xc(%ebp),%eax
085f17f4 +0x294:  movl   $0x0,(%eax)
085f17fa +0x29a:  mov    $0xffffffff,%eax
085f17ff +0x29f:  leave
085f1800 +0x2a0:  ret
085f1801 +0x2a1:  nop
```

## 反编译 C

```c
// random_option::CRandomOptionItemHandle::choose_item @ 0x85f1560

/* random_option::CRandomOptionItemHandle::choose_item(ENUM_RARITY&, int) */

undefined4 __thiscall
random_option::CRandomOptionItemHandle::choose_item
          (CRandomOptionItemHandle *this,ENUM_RARITY *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
  local_38 [4];
  _Rb_tree_const_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
  local_34 [4];
  BaseItemKey local_30 [4];
  map<int,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>>
  local_2c [4];
  map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
  local_28 [4];
  map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
  local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (this[0xc] == (CRandomOptionItemHandle)0x0) {
    if (9 < param_2) {
      if (param_2 < 0x50) {
        local_14 = param_2 % 10;
        param_2 = param_2 - local_14;
      }
      else {
        param_2 = 0x50;
      }
    }
    if ((param_2 < 10) && (*(int *)param_1 == 2)) {
      *(undefined4 *)param_1 = 0;
      uVar3 = 0xffffffff;
    }
    else {
      cVar2 = _random_application(this,*(undefined4 *)param_1,param_2);
      if (cVar2 == '\x01') {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        local_20 = _get_level_limit(this,*(undefined4 *)param_1,param_2);
        local_1c = _get_part_type((int)this);
        local_18 = _get_base_item(this,*(undefined4 *)param_1,local_20);
        BaseItemKey::BaseItemKey
                  (local_30,(uchar)*(undefined4 *)param_1,(uchar)local_20,(ushort)local_1c);
        GetRandomOption();
        std::
        map<int,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>>
        ::find((int *)local_34);
        GetRandomOption();
        std::
        map<int,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>>
        ::end(local_2c);
        cVar2 = std::
                _Rb_tree_const_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
                ::operator!=(local_34,(_Rb_tree_const_iterator *)local_2c);
        if (cVar2 == '\0') {
          *(undefined4 *)param_1 = 0;
          uVar3 = 0xffffffff;
        }
        else {
          iVar4 = std::
                  _Rb_tree_const_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
                  ::operator->(local_34);
          cVar2 = std::
                  map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
                  ::empty((map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
                           *)(iVar4 + 4));
          if (cVar2 == '\0') {
            local_10 = 0;
            std::
            _Rb_tree_const_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
            ::operator->(local_34);
            std::
            map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
            ::begin(local_38);
            while( true ) {
              std::
              _Rb_tree_const_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
              ::operator->(local_34);
              std::
              map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
              ::end(local_28);
              cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>>::operator!=
                                ((_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>> *)
                                 local_38,(_Rb_tree_const_iterator *)local_28);
              if ((cVar2 == '\0') || (local_18 <= local_10)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (!bVar1) break;
              std::_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>>::operator++
                        ((_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>> *)local_38);
              local_10 = local_10 + 1;
            }
            std::
            _Rb_tree_const_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
            ::operator->(local_34);
            std::
            map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
            ::end(local_24);
            cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>>::operator==
                              ((_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>> *)
                               local_38,(_Rb_tree_const_iterator *)local_24);
            if (cVar2 != '\0') {
              std::_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>>::operator--
                        ((_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>> *)local_38);
            }
            iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>>::operator->
                              ((_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>> *)
                               local_38);
            uVar3 = *(undefined4 *)(iVar4 + 4);
          }
          else {
            *(undefined4 *)param_1 = 0;
            uVar3 = 0xffffffff;
          }
        }
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}
```
