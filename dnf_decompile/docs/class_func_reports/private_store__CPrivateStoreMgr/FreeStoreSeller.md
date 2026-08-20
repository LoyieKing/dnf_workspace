# FreeStoreSeller

`_ZN13private_store16CPrivateStoreMgr15FreeStoreSellerEP5CUser`

`private_store::CPrivateStoreMgr::FreeStoreSeller(CUser*)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStoreMgr` | `0x085ca874` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ca874  _ZN13private_store16CPrivateStoreMgr15FreeStoreSellerEP5CUser
#           private_store::CPrivateStoreMgr::FreeStoreSeller(CUser*)
# range [0x085ca874, 0x085ca913]
085ca874 +0x00:  push   %ebp
085ca875 +0x01:  mov    %esp,%ebp
085ca877 +0x03:  sub    $0x28,%esp
085ca87a +0x06:  mov    0x8(%ebp),%eax
085ca87d +0x09:  lea    0x98(%eax),%ecx
085ca883 +0x0f:  lea    -0x10(%ebp),%eax
085ca886 +0x12:  lea    0xc(%ebp),%edx
085ca889 +0x15:  mov    %edx,0x8(%esp)
085ca88d +0x19:  mov    %ecx,0x4(%esp)
085ca891 +0x1d:  mov    %eax,(%esp)
085ca894 +0x20:  call   085cd3f4 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x210a>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x210a
085ca899 +0x25:  sub    $0x4,%esp
085ca89c +0x28:  mov    0x8(%ebp),%eax
085ca89f +0x2b:  lea    0x98(%eax),%edx
085ca8a5 +0x31:  lea    -0xc(%ebp),%eax
085ca8a8 +0x34:  mov    %edx,0x4(%esp)
085ca8ac +0x38:  mov    %eax,(%esp)
085ca8af +0x3b:  call   085cd420 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x2136>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x2136
085ca8b4 +0x40:  sub    $0x4,%esp
085ca8b7 +0x43:  lea    -0xc(%ebp),%eax
085ca8ba +0x46:  mov    %eax,0x4(%esp)
085ca8be +0x4a:  lea    -0x10(%ebp),%eax
085ca8c1 +0x4d:  mov    %eax,(%esp)
085ca8c4 +0x50:  call   085cd446 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x215c>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x215c
085ca8c9 +0x55:  test   %al,%al
085ca8cb +0x57:  je     085ca90c <+0x98>
085ca8cd +0x59:  lea    -0x10(%ebp),%eax
085ca8d0 +0x5c:  mov    %eax,(%esp)
085ca8d3 +0x5f:  call   085cd45a <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x2170>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x2170
085ca8d8 +0x64:  mov    0x4(%eax),%eax
085ca8db +0x67:  mov    0x8(%ebp),%edx
085ca8de +0x6a:  add    $0x68,%edx
085ca8e1 +0x6d:  mov    %eax,0x4(%esp)
085ca8e5 +0x71:  mov    %edx,(%esp)
085ca8e8 +0x74:  call   085cd7a4 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x24ba>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x24ba
085ca8ed +0x79:  mov    0x8(%ebp),%eax
085ca8f0 +0x7c:  lea    0x98(%eax),%edx
085ca8f6 +0x82:  mov    -0x10(%ebp),%eax
085ca8f9 +0x85:  mov    %eax,0x4(%esp)
085ca8fd +0x89:  mov    %edx,(%esp)
085ca900 +0x8c:  call   085cd8ea <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x2600>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x2600
085ca905 +0x91:  mov    $0x1,%eax
085ca90a +0x96:  jmp    085ca911 <+0x9d>
085ca90c +0x98:  mov    $0x0,%eax
085ca911 +0x9d:  leave
085ca912 +0x9e:  ret
085ca913 +0x9f:  nop
```

## 反编译 C

```c
// private_store::CPrivateStoreMgr::FreeStoreSeller @ 0x85ca874

/* private_store::CPrivateStoreMgr::FreeStoreSeller(CUser*) */

bool private_store::CPrivateStoreMgr::FreeStoreSeller(CUser *param_1)

{
  char cVar1;
  int iVar2;
  CUser *local_14;
  map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
  local_10 [12];
  
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
    iVar2 = std::_Rb_tree_iterator<std::pair<CUser*const,private_store::CPrivateStore*>>::operator->
                      ((_Rb_tree_iterator<std::pair<CUser*const,private_store::CPrivateStore*>> *)
                       &local_14);
    StaticPool<private_store::CPrivateStore,300>::Free
              ((StaticPool<private_store::CPrivateStore,300> *)(param_1 + 0x68),
               *(CPrivateStore **)(iVar2 + 4));
    std::
    map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
    ::erase((map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
             *)(param_1 + 0x98),local_14);
  }
  return cVar1 != '\0';
}
```
