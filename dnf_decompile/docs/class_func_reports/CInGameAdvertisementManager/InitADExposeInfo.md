# InitADExposeInfo

`_ZN27CInGameAdvertisementManager16InitADExposeInfoEv`

`CInGameAdvertisementManager::InitADExposeInfo()`

| 类 | 地址 |
|---|---|
| `CInGameAdvertisementManager` | `0x080fd122` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080fd122  _ZN27CInGameAdvertisementManager16InitADExposeInfoEv
#           CInGameAdvertisementManager::InitADExposeInfo()
# range [0x080fd122, 0x080fd19d]
080fd122 +0x00:  push   %ebp
080fd123 +0x01:  mov    %esp,%ebp
080fd125 +0x03:  sub    $0x28,%esp
080fd128 +0x06:  mov    0x8(%ebp),%edx
080fd12b +0x09:  lea    -0x14(%ebp),%eax
080fd12e +0x0c:  mov    %edx,0x4(%esp)
080fd132 +0x10:  mov    %eax,(%esp)
080fd135 +0x13:  call   080fe4c2 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x7ee>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x7ee
080fd13a +0x18:  sub    $0x4,%esp
080fd13d +0x1b:  jmp    080fd166 <+0x44>
080fd13f +0x1d:  lea    -0x14(%ebp),%eax
080fd142 +0x20:  mov    %eax,(%esp)
080fd145 +0x23:  call   080fe3f0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x71c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x71c
080fd14a +0x28:  mov    0x4(%eax),%eax
080fd14d +0x2b:  mov    %eax,-0xc(%ebp)
080fd150 +0x2e:  mov    -0xc(%ebp),%eax
080fd153 +0x31:  mov    %eax,(%esp)
080fd156 +0x34:  call   080fc9ce <_ZN24CAdvertisementExposeInfodlEPv>  ; CAdvertisementExposeInfo::operator delete(void*)
080fd15b +0x39:  lea    -0x14(%ebp),%eax
080fd15e +0x3c:  mov    %eax,(%esp)
080fd161 +0x3f:  call   080fe3d2 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x6fe>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x6fe
080fd166 +0x44:  mov    0x8(%ebp),%edx
080fd169 +0x47:  lea    -0x10(%ebp),%eax
080fd16c +0x4a:  mov    %edx,0x4(%esp)
080fd170 +0x4e:  mov    %eax,(%esp)
080fd173 +0x51:  call   080fe4e8 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x814>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x814
080fd178 +0x56:  sub    $0x4,%esp
080fd17b +0x59:  lea    -0x10(%ebp),%eax
080fd17e +0x5c:  mov    %eax,0x4(%esp)
080fd182 +0x60:  lea    -0x14(%ebp),%eax
080fd185 +0x63:  mov    %eax,(%esp)
080fd188 +0x66:  call   080fe3be <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x6ea>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x6ea
080fd18d +0x6b:  test   %al,%al
080fd18f +0x6d:  jne    080fd13f <+0x1d>
080fd191 +0x6f:  mov    0x8(%ebp),%eax
080fd194 +0x72:  mov    %eax,(%esp)
080fd197 +0x75:  call   080fe50e <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x83a>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x83a
080fd19c +0x7a:  leave
080fd19d +0x7b:  ret
```

## 反编译 C

```c
// CInGameAdvertisementManager::InitADExposeInfo @ 0x80fd122

/* CInGameAdvertisementManager::InitADExposeInfo() */

void __thiscall CInGameAdvertisementManager::InitADExposeInfo(CInGameAdvertisementManager *this)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator *p_Var3;
  multimap<short,CAdvertisementExposeInfo*,std::less<short>,std::allocator<std::pair<short_const,CAdvertisementExposeInfo*>>>
  local_18 [4];
  multimap<short,CAdvertisementExposeInfo*,std::less<short>,std::allocator<std::pair<short_const,CAdvertisementExposeInfo*>>>
  local_14 [4];
  CAdvertisementExposeInfo *local_10;
  
  std::
  multimap<short,CAdvertisementExposeInfo*,std::less<short>,std::allocator<std::pair<short_const,CAdvertisementExposeInfo*>>>
  ::begin(local_18);
  while( true ) {
    std::
    multimap<short,CAdvertisementExposeInfo*,std::less<short>,std::allocator<std::pair<short_const,CAdvertisementExposeInfo*>>>
    ::end(local_14);
    p_Var3 = (_Rb_tree_iterator *)local_14;
    cVar1 = std::_Rb_tree_iterator<std::pair<short_const,CAdvertisementExposeInfo*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<short_const,CAdvertisementExposeInfo*>> *)
                       local_18,p_Var3);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<short_const,CAdvertisementExposeInfo*>>::operator->
                      ((_Rb_tree_iterator<std::pair<short_const,CAdvertisementExposeInfo*>> *)
                       local_18);
    local_10 = *(CAdvertisementExposeInfo **)(iVar2 + 4);
    CAdvertisementExposeInfo::operator_delete(local_10,p_Var3);
    std::_Rb_tree_iterator<std::pair<short_const,CAdvertisementExposeInfo*>>::operator++
              ((_Rb_tree_iterator<std::pair<short_const,CAdvertisementExposeInfo*>> *)local_18);
  }
  std::
  multimap<short,CAdvertisementExposeInfo*,std::less<short>,std::allocator<std::pair<short_const,CAdvertisementExposeInfo*>>>
  ::clear((multimap<short,CAdvertisementExposeInfo*,std::less<short>,std::allocator<std::pair<short_const,CAdvertisementExposeInfo*>>>
           *)this);
  return;
}
```
