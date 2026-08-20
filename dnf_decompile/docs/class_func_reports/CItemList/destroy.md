# destroy

`_ZN9CItemList7destroyEv`

`CItemList::destroy()`

| 类 | 地址 |
|---|---|
| `CItemList` | `0x08510f06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08510f06  _ZN9CItemList7destroyEv
#           CItemList::destroy()
# range [0x08510f06, 0x08510ff9]
08510f06 +0x00:  push   %ebp
08510f07 +0x01:  mov    %esp,%ebp
08510f09 +0x03:  push   %ebx
08510f0a +0x04:  sub    $0x34,%esp
08510f0d +0x07:  mov    0x8(%ebp),%eax
08510f10 +0x0a:  lea    0x4(%eax),%edx
08510f13 +0x0d:  lea    -0x14(%ebp),%eax
08510f16 +0x10:  mov    %edx,0x4(%esp)
08510f1a +0x14:  mov    %eax,(%esp)
08510f1d +0x17:  call   083945da <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2407a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2407a
08510f22 +0x1c:  sub    $0x4,%esp
08510f25 +0x1f:  mov    0x8(%ebp),%eax
08510f28 +0x22:  lea    0x4(%eax),%edx
08510f2b +0x25:  lea    -0x1c(%ebp),%eax
08510f2e +0x28:  mov    %edx,0x4(%esp)
08510f32 +0x2c:  mov    %eax,(%esp)
08510f35 +0x2f:  call   0839461c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x240bc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x240bc
08510f3a +0x34:  sub    $0x4,%esp
08510f3d +0x37:  jmp    08510f73 <+0x6d>
08510f3f +0x39:  lea    -0x14(%ebp),%eax
08510f42 +0x3c:  mov    %eax,(%esp)
08510f45 +0x3f:  call   0851871a <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4d4f>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4d4f
08510f4a +0x44:  mov    0x4(%eax),%eax
08510f4d +0x47:  mov    %eax,-0xc(%ebp)
08510f50 +0x4a:  cmpl   $0x0,-0xc(%ebp)
08510f54 +0x4e:  je     08510f68 <+0x62>
08510f56 +0x50:  mov    -0xc(%ebp),%eax
08510f59 +0x53:  mov    (%eax),%eax
08510f5b +0x55:  add    $0x4,%eax
08510f5e +0x58:  mov    (%eax),%edx
08510f60 +0x5a:  mov    -0xc(%ebp),%eax
08510f63 +0x5d:  mov    %eax,(%esp)
08510f66 +0x60:  call   *%edx
08510f68 +0x62:  lea    -0x14(%ebp),%eax
08510f6b +0x65:  mov    %eax,(%esp)
08510f6e +0x68:  call   08518682 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4cb7>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4cb7
08510f73 +0x6d:  lea    -0x1c(%ebp),%eax
08510f76 +0x70:  mov    %eax,0x4(%esp)
08510f7a +0x74:  lea    -0x14(%ebp),%eax
08510f7d +0x77:  mov    %eax,(%esp)
08510f80 +0x7a:  call   0851866e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4ca3>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4ca3
08510f85 +0x7f:  test   %al,%al
08510f87 +0x81:  jne    08510f3f <+0x39>
08510f89 +0x83:  mov    0x8(%ebp),%eax
08510f8c +0x86:  add    $0x4,%eax
08510f8f +0x89:  mov    %eax,(%esp)
08510f92 +0x8c:  call   08518728 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4d5d>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4d5d
08510f97 +0x91:  mov    0x8(%ebp),%eax
08510f9a +0x94:  mov    (%eax),%eax
08510f9c +0x96:  test   %eax,%eax
08510f9e +0x98:  je     08510ff4 <+0xee>
08510fa0 +0x9a:  mov    0x8(%ebp),%eax
08510fa3 +0x9d:  mov    (%eax),%eax
08510fa5 +0x9f:  test   %eax,%eax
08510fa7 +0xa1:  je     08510feb <+0xe5>
08510fa9 +0xa3:  mov    0x8(%ebp),%eax
08510fac +0xa6:  mov    (%eax),%ecx
08510fae +0xa8:  mov    0x8(%ebp),%eax
08510fb1 +0xab:  mov    (%eax),%eax
08510fb3 +0xad:  sub    $0x4,%eax
08510fb6 +0xb0:  mov    (%eax),%edx
08510fb8 +0xb2:  mov    %edx,%eax
08510fba +0xb4:  shl    $0x2,%eax
08510fbd +0xb7:  add    %edx,%eax
08510fbf +0xb9:  shl    $0x2,%eax
08510fc2 +0xbc:  lea    (%ecx,%eax,1),%ebx
08510fc5 +0xbf:  mov    0x8(%ebp),%eax
08510fc8 +0xc2:  mov    (%eax),%eax
08510fca +0xc4:  cmp    %eax,%ebx
08510fcc +0xc6:  je     08510fdb <+0xd5>
08510fce +0xc8:  sub    $0x14,%ebx
08510fd1 +0xcb:  mov    %ebx,(%esp)
08510fd4 +0xce:  call   08515282 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x18b7>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x18b7
08510fd9 +0xd3:  jmp    08510fc5 <+0xbf>
08510fdb +0xd5:  mov    0x8(%ebp),%eax
08510fde +0xd8:  mov    (%eax),%eax
08510fe0 +0xda:  sub    $0x4,%eax
08510fe3 +0xdd:  mov    %eax,(%esp)
08510fe6 +0xe0:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08510feb +0xe5:  mov    0x8(%ebp),%eax
08510fee +0xe8:  movl   $0x0,(%eax)
08510ff4 +0xee:  mov    -0x4(%ebp),%ebx
08510ff7 +0xf1:  leave
08510ff8 +0xf2:  ret
08510ff9 +0xf3:  nop
```

## 反编译 C

```c
// CItemList::destroy @ 0x8510f06

/* CItemList::destroy() */

void __thiscall CItemList::destroy(CItemList *this)

{
  char cVar1;
  int iVar2;
  hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> *this_00;
  hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> local_20 [8];
  hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> local_18 [8];
  int *local_10;
  
  __gnu_cxx::hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::
  begin(local_18);
  __gnu_cxx::hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::
  end(local_20);
  while( true ) {
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
            ::operator!=((_Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                          *)local_18,(_Hashtable_iterator *)local_20);
    if (cVar1 == '\0') break;
    iVar2 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
            ::operator*((_Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                         *)local_18);
    local_10 = *(int **)(iVar2 + 4);
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 4))(local_10);
    }
    __gnu_cxx::
    _Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
    ::operator++((_Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                  *)local_18);
  }
  __gnu_cxx::hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::
  clear((hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> *)
        (this + 4));
  if (*(int *)this != 0) {
    if (*(int *)this != 0) {
      this_00 = (hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>
                 *)(*(int *)this + *(int *)(*(int *)this + -4) * 0x14);
      while (this_00 !=
             *(hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>
               **)this) {
        this_00 = this_00 + -0x14;
        __gnu_cxx::
        hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::
        ~hash_map(this_00);
      }
      operator_delete__((void *)(*(int *)this + -4));
    }
    *(undefined4 *)this = 0;
  }
  return;
}
```
