# RegenVer_choose_item

`_ZN13random_option23CRandomOptionItemHandle20RegenVer_choose_itemE11ENUM_RARITYiRKSt6vectorIiSaIiEE`

`random_option::CRandomOptionItemHandle::RegenVer_choose_item(ENUM_RARITY, int, std::vector<int, std::allocator<int> > const&)`

| 类 | 地址 |
|---|---|
| `random_option::CRandomOptionItemHandle` | `0x085f1802` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f1802  _ZN13random_option23CRandomOptionItemHandle20RegenVer_choose_itemE11ENUM_RARITYiRKSt6vectorIiSaIiEE
#           random_option::CRandomOptionItemHandle::RegenVer_choose_item(ENUM_RARITY, int, std::vector<int, std::allocator<int> > const&)
# range [0x085f1802, 0x085f1a61]
085f1802 +0x000:  push   %ebp
085f1803 +0x001:  mov    %esp,%ebp
085f1805 +0x003:  push   %ebx
085f1806 +0x004:  sub    $0x64,%esp
085f1809 +0x007:  mov    0x10(%ebp),%eax
085f180c +0x00a:  mov    %eax,0x8(%esp)
085f1810 +0x00e:  mov    0xc(%ebp),%eax
085f1813 +0x011:  mov    %eax,0x4(%esp)
085f1817 +0x015:  mov    0x8(%ebp),%eax
085f181a +0x018:  mov    %eax,(%esp)
085f181d +0x01b:  call   085f0f9a <_ZN13random_option23CRandomOptionItemHandle16_get_level_limitE11ENUM_RARITYi>  ; random_option::CRandomOptionItemHandle::_get_level_limit(ENUM_RARITY, int)
085f1822 +0x020:  mov    %eax,-0x18(%ebp)
085f1825 +0x023:  movl   $0x0,-0x14(%ebp)
085f182c +0x02a:  mov    0x14(%ebp),%eax
085f182f +0x02d:  mov    %eax,(%esp)
085f1832 +0x030:  call   0811c960 <_GLOBAL__I_events+0x1003>  ; global constructors keyed to events+0x1003
085f1837 +0x035:  test   %al,%al
085f1839 +0x037:  je     085f1852 <+0x50>
085f183b +0x039:  mov    -0x18(%ebp),%eax
085f183e +0x03c:  mov    %eax,0x4(%esp)
085f1842 +0x040:  mov    0x8(%ebp),%eax
085f1845 +0x043:  mov    %eax,(%esp)
085f1848 +0x046:  call   085f1088 <_ZN13random_option23CRandomOptionItemHandle14_get_part_typeEi>  ; random_option::CRandomOptionItemHandle::_get_part_type(int)
085f184d +0x04b:  mov    %eax,-0x14(%ebp)
085f1850 +0x04e:  jmp    085f186e <+0x6c>
085f1852 +0x050:  mov    0x14(%ebp),%eax
085f1855 +0x053:  mov    %eax,0x8(%esp)
085f1859 +0x057:  mov    -0x18(%ebp),%eax
085f185c +0x05a:  mov    %eax,0x4(%esp)
085f1860 +0x05e:  mov    0x8(%ebp),%eax
085f1863 +0x061:  mov    %eax,(%esp)
085f1866 +0x064:  call   085f11a4 <_ZNK13random_option23CRandomOptionItemHandle27_get_part_type_by_ItemGroupEiRKSt6vectorIiSaIiEE>  ; random_option::CRandomOptionItemHandle::_get_part_type_by_ItemGroup(int, std::vector<int, std::allocator<int> > const&) const
085f186b +0x069:  mov    %eax,-0x14(%ebp)
085f186e +0x06c:  mov    -0x18(%ebp),%eax
085f1871 +0x06f:  mov    %eax,0x8(%esp)
085f1875 +0x073:  mov    0xc(%ebp),%eax
085f1878 +0x076:  mov    %eax,0x4(%esp)
085f187c +0x07a:  mov    0x8(%ebp),%eax
085f187f +0x07d:  mov    %eax,(%esp)
085f1882 +0x080:  call   085f1426 <_ZN13random_option23CRandomOptionItemHandle14_get_base_itemE11ENUM_RARITYi>  ; random_option::CRandomOptionItemHandle::_get_base_item(ENUM_RARITY, int)
085f1887 +0x085:  mov    %eax,-0x10(%ebp)
085f188a +0x088:  mov    -0x14(%ebp),%eax
085f188d +0x08b:  movzwl %ax,%ecx
085f1890 +0x08e:  mov    -0x18(%ebp),%eax
085f1893 +0x091:  movzbl %al,%edx
085f1896 +0x094:  mov    0xc(%ebp),%eax
085f1899 +0x097:  movzbl %al,%eax
085f189c +0x09a:  mov    %ecx,0xc(%esp)
085f18a0 +0x09e:  mov    %edx,0x8(%esp)
085f18a4 +0x0a2:  mov    %eax,0x4(%esp)
085f18a8 +0x0a6:  lea    -0x28(%ebp),%eax
085f18ab +0x0a9:  mov    %eax,(%esp)
085f18ae +0x0ac:  call   08513f82 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5b7>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5b7
085f18b3 +0x0b1:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f18b8 +0x0b6:  lea    0x60(%eax),%ecx
085f18bb +0x0b9:  lea    -0x2c(%ebp),%eax
085f18be +0x0bc:  lea    -0x28(%ebp),%edx
085f18c1 +0x0bf:  mov    %edx,0x8(%esp)
085f18c5 +0x0c3:  mov    %ecx,0x4(%esp)
085f18c9 +0x0c7:  mov    %eax,(%esp)
085f18cc +0x0ca:  call   085f4556 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x571>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x571
085f18d1 +0x0cf:  sub    $0x4,%esp
085f18d4 +0x0d2:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f18d9 +0x0d7:  lea    0x60(%eax),%edx
085f18dc +0x0da:  lea    -0x24(%ebp),%eax
085f18df +0x0dd:  mov    %edx,0x4(%esp)
085f18e3 +0x0e1:  mov    %eax,(%esp)
085f18e6 +0x0e4:  call   085f4582 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x59d>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x59d
085f18eb +0x0e9:  sub    $0x4,%esp
085f18ee +0x0ec:  lea    -0x24(%ebp),%eax
085f18f1 +0x0ef:  mov    %eax,0x4(%esp)
085f18f5 +0x0f3:  lea    -0x2c(%ebp),%eax
085f18f8 +0x0f6:  mov    %eax,(%esp)
085f18fb +0x0f9:  call   085f45a8 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x5c3>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x5c3
085f1900 +0x0fe:  test   %al,%al
085f1902 +0x100:  je     085f1a03 <+0x201>
085f1908 +0x106:  lea    -0x2c(%ebp),%eax
085f190b +0x109:  mov    %eax,(%esp)
085f190e +0x10c:  call   085f45bc <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x5d7>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x5d7
085f1913 +0x111:  add    $0x4,%eax
085f1916 +0x114:  mov    %eax,(%esp)
085f1919 +0x117:  call   085f45ca <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x5e5>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x5e5
085f191e +0x11c:  test   %al,%al
085f1920 +0x11e:  je     085f192c <+0x12a>
085f1922 +0x120:  mov    $0xffffffff,%eax
085f1927 +0x125:  jmp    085f1a5c <+0x25a>
085f192c +0x12a:  movl   $0x0,-0xc(%ebp)
085f1933 +0x131:  lea    -0x2c(%ebp),%eax
085f1936 +0x134:  mov    %eax,(%esp)
085f1939 +0x137:  call   085f45bc <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x5d7>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x5d7
085f193e +0x13c:  lea    0x4(%eax),%edx
085f1941 +0x13f:  lea    -0x30(%ebp),%eax
085f1944 +0x142:  mov    %edx,0x4(%esp)
085f1948 +0x146:  mov    %eax,(%esp)
085f194b +0x149:  call   085f45de <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x5f9>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x5f9
085f1950 +0x14e:  sub    $0x4,%esp
085f1953 +0x151:  jmp    085f1964 <+0x162>
085f1955 +0x153:  lea    -0x30(%ebp),%eax
085f1958 +0x156:  mov    %eax,(%esp)
085f195b +0x159:  call   085f463e <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x659>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x659
085f1960 +0x15e:  addl   $0x1,-0xc(%ebp)
085f1964 +0x162:  lea    -0x2c(%ebp),%eax
085f1967 +0x165:  mov    %eax,(%esp)
085f196a +0x168:  call   085f45bc <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x5d7>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x5d7
085f196f +0x16d:  lea    0x4(%eax),%edx
085f1972 +0x170:  lea    -0x20(%ebp),%eax
085f1975 +0x173:  mov    %edx,0x4(%esp)
085f1979 +0x177:  mov    %eax,(%esp)
085f197c +0x17a:  call   085f4604 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x61f>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x61f
085f1981 +0x17f:  sub    $0x4,%esp
085f1984 +0x182:  lea    -0x20(%ebp),%eax
085f1987 +0x185:  mov    %eax,0x4(%esp)
085f198b +0x189:  lea    -0x30(%ebp),%eax
085f198e +0x18c:  mov    %eax,(%esp)
085f1991 +0x18f:  call   085f462a <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x645>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x645
085f1996 +0x194:  test   %al,%al
085f1998 +0x196:  je     085f19a9 <+0x1a7>
085f199a +0x198:  mov    -0xc(%ebp),%eax
085f199d +0x19b:  cmp    -0x10(%ebp),%eax
085f19a0 +0x19e:  jge    085f19a9 <+0x1a7>
085f19a2 +0x1a0:  mov    $0x1,%eax
085f19a7 +0x1a5:  jmp    085f19ae <+0x1ac>
085f19a9 +0x1a7:  mov    $0x0,%eax
085f19ae +0x1ac:  test   %al,%al
085f19b0 +0x1ae:  jne    085f1955 <+0x153>
085f19b2 +0x1b0:  lea    -0x2c(%ebp),%eax
085f19b5 +0x1b3:  mov    %eax,(%esp)
085f19b8 +0x1b6:  call   085f45bc <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x5d7>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x5d7
085f19bd +0x1bb:  lea    0x4(%eax),%edx
085f19c0 +0x1be:  lea    -0x1c(%ebp),%eax
085f19c3 +0x1c1:  mov    %edx,0x4(%esp)
085f19c7 +0x1c5:  mov    %eax,(%esp)
085f19ca +0x1c8:  call   085f4604 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x61f>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x61f
085f19cf +0x1cd:  sub    $0x4,%esp
085f19d2 +0x1d0:  lea    -0x1c(%ebp),%eax
085f19d5 +0x1d3:  mov    %eax,0x4(%esp)
085f19d9 +0x1d7:  lea    -0x30(%ebp),%eax
085f19dc +0x1da:  mov    %eax,(%esp)
085f19df +0x1dd:  call   085f465c <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x677>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x677
085f19e4 +0x1e2:  test   %al,%al
085f19e6 +0x1e4:  je     085f19f3 <+0x1f1>
085f19e8 +0x1e6:  lea    -0x30(%ebp),%eax
085f19eb +0x1e9:  mov    %eax,(%esp)
085f19ee +0x1ec:  call   085f4670 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x68b>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x68b
085f19f3 +0x1f1:  lea    -0x30(%ebp),%eax
085f19f6 +0x1f4:  mov    %eax,(%esp)
085f19f9 +0x1f7:  call   085f468e <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x6a9>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x6a9
085f19fe +0x1fc:  mov    0x4(%eax),%eax
085f1a01 +0x1ff:  jmp    085f1a5c <+0x25a>
085f1a03 +0x201:  movzwl -0x26(%ebp),%eax
085f1a07 +0x205:  movzwl %ax,%ecx
085f1a0a +0x208:  movzbl -0x27(%ebp),%eax
085f1a0e +0x20c:  movzbl %al,%edx
085f1a11 +0x20f:  movzbl -0x28(%ebp),%eax
085f1a15 +0x213:  movzbl %al,%eax
085f1a18 +0x216:  mov    -0x10(%ebp),%ebx
085f1a1b +0x219:  mov    %ebx,0x20(%esp)
085f1a1f +0x21d:  mov    %ecx,0x1c(%esp)
085f1a23 +0x221:  mov    %edx,0x18(%esp)
085f1a27 +0x225:  mov    %eax,0x14(%esp)
085f1a2b +0x229:  movl   $"choose_item (%d,%d,%d,%d)",0x10(%esp)
085f1a33 +0x231:  movl   $0x19a,0xc(%esp)
085f1a3b +0x239:  movl   $&_ZZN13random_option23CRandomOptionItemHandle20RegenVer_choose_itemE11ENUM_RARITYiRKSt6vectorIiSaIiEEE19__PRETTY_FUNCTION__,0x8(%esp)
085f1a43 +0x241:  movl   $"RandomOption.cpp",0x4(%esp)
085f1a4b +0x249:  movl   $0x1,(%esp)
085f1a52 +0x250:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085f1a57 +0x255:  mov    $0xffffffff,%eax
085f1a5c +0x25a:  mov    -0x4(%ebp),%ebx
085f1a5f +0x25d:  leave
085f1a60 +0x25e:  ret
085f1a61 +0x25f:  nop
```

## 反编译 C

```c
// random_option::CRandomOptionItemHandle::RegenVer_choose_item @ 0x85f1802

/* random_option::CRandomOptionItemHandle::RegenVer_choose_item(ENUM_RARITY, int, std::vector<int,
   std::allocator<int> > const&) */

undefined4 __thiscall
random_option::CRandomOptionItemHandle::RegenVer_choose_item
          (CRandomOptionItemHandle *this,undefined4 param_2,undefined4 param_3,vector *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
  local_34 [4];
  _Rb_tree_const_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
  local_30 [4];
  BaseItemKey local_2c;
  byte local_2b;
  ushort local_2a;
  map<int,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>>
  local_28 [4];
  map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
  local_24 [4];
  map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
  local_20 [4];
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  
  local_1c = _get_level_limit(this,param_2,param_3);
  local_18 = 0;
  cVar2 = std::vector<int,std::allocator<int>>::empty();
  if (cVar2 == '\0') {
    local_18 = _get_part_type_by_ItemGroup(this,local_1c,param_4);
  }
  else {
    local_18 = _get_part_type((int)this);
  }
  local_14 = _get_base_item(this,param_2,local_1c);
  BaseItemKey::BaseItemKey(&local_2c,(uchar)param_2,(uchar)local_1c,(ushort)local_18);
  GetRandomOption();
  std::
  map<int,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>>
  ::find((int *)local_30);
  GetRandomOption();
  std::
  map<int,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>>
  ::end(local_28);
  cVar2 = std::
          _Rb_tree_const_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
          ::operator!=(local_30,(_Rb_tree_const_iterator *)local_28);
  if (cVar2 == '\0') {
    LogManager::logFormat
              (1,"RandomOption.cpp",
               "itemIndex_t random_option::CRandomOptionItemHandle::RegenVer_choose_item(ENUM_RARITY, int, const std::vector<int, std::allocator<int> >&)"
               ,0x19a,"choose_item (%d,%d,%d,%d)",(uint)(byte)local_2c,(uint)local_2b,(uint)local_2a
               ,local_14);
    uVar4 = 0xffffffff;
  }
  else {
    iVar3 = std::
            _Rb_tree_const_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
            ::operator->(local_30);
    cVar2 = std::
            map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
            ::empty((map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
                     *)(iVar3 + 4));
    if (cVar2 == '\0') {
      local_10 = 0;
      std::
      _Rb_tree_const_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
      ::operator->(local_30);
      std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
      ::begin(local_34);
      while( true ) {
        std::
        _Rb_tree_const_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
        ::operator->(local_30);
        std::
        map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>::
        end(local_24);
        cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>>::operator!=
                          ((_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>> *)local_34,
                           (_Rb_tree_const_iterator *)local_24);
        if ((cVar2 == '\0') || (local_14 <= local_10)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) break;
        std::_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>>::operator++
                  ((_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>> *)local_34);
        local_10 = local_10 + 1;
      }
      std::
      _Rb_tree_const_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
      ::operator->(local_30);
      std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
      ::end(local_20);
      cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>>::operator==
                        ((_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>> *)local_34,
                         (_Rb_tree_const_iterator *)local_20);
      if (cVar2 != '\0') {
        std::_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>>::operator--
                  ((_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>> *)local_34);
      }
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>> *)local_34);
      uVar4 = *(undefined4 *)(iVar3 + 4);
    }
    else {
      uVar4 = 0xffffffff;
    }
  }
  return uVar4;
}
```
