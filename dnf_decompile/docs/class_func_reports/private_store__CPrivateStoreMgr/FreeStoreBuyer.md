# FreeStoreBuyer

`_ZN13private_store16CPrivateStoreMgr14FreeStoreBuyerEP5CUser`

`private_store::CPrivateStoreMgr::FreeStoreBuyer(CUser*)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStoreMgr` | `0x085ca914` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ca914  _ZN13private_store16CPrivateStoreMgr14FreeStoreBuyerEP5CUser
#           private_store::CPrivateStoreMgr::FreeStoreBuyer(CUser*)
# range [0x085ca914, 0x085ca993]
085ca914 +0x00:  push   %ebp
085ca915 +0x01:  mov    %esp,%ebp
085ca917 +0x03:  sub    $0x28,%esp
085ca91a +0x06:  mov    0x8(%ebp),%eax
085ca91d +0x09:  lea    0xb0(%eax),%ecx
085ca923 +0x0f:  lea    -0x10(%ebp),%eax
085ca926 +0x12:  lea    0xc(%ebp),%edx
085ca929 +0x15:  mov    %edx,0x8(%esp)
085ca92d +0x19:  mov    %ecx,0x4(%esp)
085ca931 +0x1d:  mov    %eax,(%esp)
085ca934 +0x20:  call   085cd3f4 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x210a>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x210a
085ca939 +0x25:  sub    $0x4,%esp
085ca93c +0x28:  mov    0x8(%ebp),%eax
085ca93f +0x2b:  lea    0xb0(%eax),%edx
085ca945 +0x31:  lea    -0xc(%ebp),%eax
085ca948 +0x34:  mov    %edx,0x4(%esp)
085ca94c +0x38:  mov    %eax,(%esp)
085ca94f +0x3b:  call   085cd420 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x2136>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x2136
085ca954 +0x40:  sub    $0x4,%esp
085ca957 +0x43:  lea    -0xc(%ebp),%eax
085ca95a +0x46:  mov    %eax,0x4(%esp)
085ca95e +0x4a:  lea    -0x10(%ebp),%eax
085ca961 +0x4d:  mov    %eax,(%esp)
085ca964 +0x50:  call   085cd446 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x215c>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x215c
085ca969 +0x55:  test   %al,%al
085ca96b +0x57:  je     085ca98c <+0x78>
085ca96d +0x59:  mov    0x8(%ebp),%eax
085ca970 +0x5c:  lea    0xb0(%eax),%edx
085ca976 +0x62:  mov    -0x10(%ebp),%eax
085ca979 +0x65:  mov    %eax,0x4(%esp)
085ca97d +0x69:  mov    %edx,(%esp)
085ca980 +0x6c:  call   085cd8ea <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x2600>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x2600
085ca985 +0x71:  mov    $0x1,%eax
085ca98a +0x76:  jmp    085ca991 <+0x7d>
085ca98c +0x78:  mov    $0x0,%eax
085ca991 +0x7d:  leave
085ca992 +0x7e:  ret
085ca993 +0x7f:  nop
```

## 反编译 C

```c
// private_store::CPrivateStoreMgr::FreeStoreBuyer @ 0x85ca914

/* private_store::CPrivateStoreMgr::FreeStoreBuyer(CUser*) */

bool private_store::CPrivateStoreMgr::FreeStoreBuyer(CUser *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  CUser *local_14;
  map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
  local_10 [12];
  
  puVar2 = &stack0x00000008;
  std::
  map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
  ::find(&local_14);
  std::
  map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<CUser*const,private_store::CPrivateStore*>>::operator!=
                    ((_Rb_tree_iterator<std::pair<CUser*const,private_store::CPrivateStore*>> *)
                     &local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 != '\0') {
    std::
    map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
    ::erase((map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
             *)(param_1 + 0xb0),local_14,puVar2);
  }
  return cVar1 != '\0';
}
```
