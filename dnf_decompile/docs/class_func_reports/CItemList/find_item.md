# find_item

`_ZN9CItemList9find_itemEi`

`CItemList::find_item(int)`

| 类 | 地址 |
|---|---|
| `CItemList` | `0x08511e8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08511e8a  _ZN9CItemList9find_itemEi
#           CItemList::find_item(int)
# range [0x08511e8a, 0x08511f1d]
08511e8a +0x00:  push   %ebp
08511e8b +0x01:  mov    %esp,%ebp
08511e8d +0x03:  sub    $0x38,%esp
08511e90 +0x06:  lea    -0x18(%ebp),%eax
08511e93 +0x09:  mov    %eax,(%esp)
08511e96 +0x0c:  call   0851873c <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4d71>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4d71
08511e9b +0x11:  mov    0x8(%ebp),%eax
08511e9e +0x14:  lea    0x4(%eax),%ecx
08511ea1 +0x17:  lea    -0x20(%ebp),%eax
08511ea4 +0x1a:  lea    0xc(%ebp),%edx
08511ea7 +0x1d:  mov    %edx,0x8(%esp)
08511eab +0x21:  mov    %ecx,0x4(%esp)
08511eaf +0x25:  mov    %eax,(%esp)
08511eb2 +0x28:  call   08518742 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4d77>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4d77
08511eb7 +0x2d:  sub    $0x4,%esp
08511eba +0x30:  mov    -0x20(%ebp),%eax
08511ebd +0x33:  mov    -0x1c(%ebp),%edx
08511ec0 +0x36:  mov    %eax,-0x18(%ebp)
08511ec3 +0x39:  mov    %edx,-0x14(%ebp)
08511ec6 +0x3c:  mov    0x8(%ebp),%eax
08511ec9 +0x3f:  lea    0x4(%eax),%edx
08511ecc +0x42:  lea    -0x10(%ebp),%eax
08511ecf +0x45:  mov    %edx,0x4(%esp)
08511ed3 +0x49:  mov    %eax,(%esp)
08511ed6 +0x4c:  call   0839461c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x240bc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x240bc
08511edb +0x51:  sub    $0x4,%esp
08511ede +0x54:  lea    -0x10(%ebp),%eax
08511ee1 +0x57:  mov    %eax,0x4(%esp)
08511ee5 +0x5b:  lea    -0x18(%ebp),%eax
08511ee8 +0x5e:  mov    %eax,(%esp)
08511eeb +0x61:  call   0851876e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4da3>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4da3
08511ef0 +0x66:  test   %al,%al
08511ef2 +0x68:  je     08511f0e <+0x84>
08511ef4 +0x6a:  mov    0xc(%ebp),%eax
08511ef7 +0x6d:  mov    %eax,0x4(%esp)
08511efb +0x71:  movl   $"[CItemList::find_item] Can't find item : index(%d)\n",(%esp)
08511f02 +0x78:  call   0807db60 <_init+0x458>
08511f07 +0x7d:  mov    $0x0,%eax
08511f0c +0x82:  jmp    08511f1c <+0x92>
08511f0e +0x84:  lea    -0x18(%ebp),%eax
08511f11 +0x87:  mov    %eax,(%esp)
08511f14 +0x8a:  call   08518aca <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x50ff>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x50ff
08511f19 +0x8f:  mov    0x4(%eax),%eax
08511f1c +0x92:  leave
08511f1d +0x93:  ret
```

## 反编译 C

```c
// CItemList::find_item @ 0x8511e8a

/* CItemList::find_item(int) */

undefined4 __thiscall CItemList::find_item(CItemList *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> local_14 [16];
  
  __gnu_cxx::
  _Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
  ::_Hashtable_iterator();
  piVar4 = &param_1;
  __gnu_cxx::hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::
  find(&local_24);
  local_1c = local_24;
  local_18 = local_20;
  __gnu_cxx::hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::
  end(local_14);
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
          ::operator==((_Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                        *)&local_1c,(_Hashtable_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar3 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
            ::operator->((_Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                          *)&local_1c);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    printf("[CItemList::find_item] Can\'t find item : index(%d)\n",param_1,piVar4);
    uVar2 = 0;
  }
  return uVar2;
}
```
