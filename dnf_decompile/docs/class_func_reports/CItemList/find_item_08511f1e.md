# find_item

`_ZN9CItemList9find_itemEPKc`

`CItemList::find_item(char const*)`

| 类 | 地址 |
|---|---|
| `CItemList` | `0x08511f1e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08511f1e  _ZN9CItemList9find_itemEPKc
#           CItemList::find_item(char const*)
# range [0x08511f1e, 0x08511fb7]
08511f1e +0x00:  push   %ebp
08511f1f +0x01:  mov    %esp,%ebp
08511f21 +0x03:  sub    $0x38,%esp
08511f24 +0x06:  mov    0x8(%ebp),%eax
08511f27 +0x09:  lea    0x4(%eax),%edx
08511f2a +0x0c:  lea    -0x1c(%ebp),%eax
08511f2d +0x0f:  mov    %edx,0x4(%esp)
08511f31 +0x13:  mov    %eax,(%esp)
08511f34 +0x16:  call   083945da <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2407a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2407a
08511f39 +0x1b:  sub    $0x4,%esp
08511f3c +0x1e:  jmp    08511f82 <+0x64>
08511f3e +0x20:  lea    -0x1c(%ebp),%eax
08511f41 +0x23:  mov    %eax,(%esp)
08511f44 +0x26:  call   08518aca <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x50ff>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x50ff
08511f49 +0x2b:  mov    0x4(%eax),%eax
08511f4c +0x2e:  mov    %eax,-0xc(%ebp)
08511f4f +0x31:  mov    -0xc(%ebp),%eax
08511f52 +0x34:  mov    %eax,(%esp)
08511f55 +0x37:  call   0811ed82 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x7d>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x7d
08511f5a +0x3c:  mov    0xc(%ebp),%edx
08511f5d +0x3f:  mov    %edx,0x4(%esp)
08511f61 +0x43:  mov    %eax,(%esp)
08511f64 +0x46:  call   0807e4e0 <_init+0xdd8>
08511f69 +0x4b:  test   %eax,%eax
08511f6b +0x4d:  sete   %al
08511f6e +0x50:  test   %al,%al
08511f70 +0x52:  je     08511f77 <+0x59>
08511f72 +0x54:  mov    -0xc(%ebp),%eax
08511f75 +0x57:  jmp    08511fb5 <+0x97>
08511f77 +0x59:  lea    -0x1c(%ebp),%eax
08511f7a +0x5c:  mov    %eax,(%esp)
08511f7d +0x5f:  call   08518682 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4cb7>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4cb7
08511f82 +0x64:  mov    0x8(%ebp),%eax
08511f85 +0x67:  lea    0x4(%eax),%edx
08511f88 +0x6a:  lea    -0x14(%ebp),%eax
08511f8b +0x6d:  mov    %edx,0x4(%esp)
08511f8f +0x71:  mov    %eax,(%esp)
08511f92 +0x74:  call   0839461c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x240bc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x240bc
08511f97 +0x79:  sub    $0x4,%esp
08511f9a +0x7c:  lea    -0x14(%ebp),%eax
08511f9d +0x7f:  mov    %eax,0x4(%esp)
08511fa1 +0x83:  lea    -0x1c(%ebp),%eax
08511fa4 +0x86:  mov    %eax,(%esp)
08511fa7 +0x89:  call   0851866e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4ca3>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4ca3
08511fac +0x8e:  test   %al,%al
08511fae +0x90:  jne    08511f3e <+0x20>
08511fb0 +0x92:  mov    $0x0,%eax
08511fb5 +0x97:  leave
08511fb6 +0x98:  ret
08511fb7 +0x99:  nop
```

## 反编译 C

```c
// CItemList::find_item @ 0x8511f1e

/* CItemList::find_item(char const*) */

CItem * __thiscall CItemList::find_item(CItemList *this,char *param_1)

{
  char cVar1;
  int iVar2;
  char *__s1;
  hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> local_20 [8];
  hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> local_18 [8];
  CItem *local_10;
  
  __gnu_cxx::hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::
  begin(local_20);
  while( true ) {
    __gnu_cxx::hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::
    end(local_18);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
            ::operator!=((_Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                          *)local_20,(_Hashtable_iterator *)local_18);
    if (cVar1 == '\0') {
      return (CItem *)0x0;
    }
    iVar2 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
            ::operator->((_Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                          *)local_20);
    local_10 = *(CItem **)(iVar2 + 4);
    __s1 = (char *)CItem::GetItemName(local_10);
    iVar2 = strcmp(__s1,param_1);
    if (iVar2 == 0) break;
    __gnu_cxx::
    _Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
    ::operator++((_Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                  *)local_20);
  }
  return local_10;
}
```
