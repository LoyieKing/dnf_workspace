# FindStoreSeller

`_ZN13private_store16CPrivateStoreMgr15FindStoreSellerEP5CUser`

`private_store::CPrivateStoreMgr::FindStoreSeller(CUser*)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStoreMgr` | `0x085ca358` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ca358  _ZN13private_store16CPrivateStoreMgr15FindStoreSellerEP5CUser
#           private_store::CPrivateStoreMgr::FindStoreSeller(CUser*)
# range [0x085ca358, 0x085ca3d5]
085ca358 +0x00:  push   %ebp
085ca359 +0x01:  mov    %esp,%ebp
085ca35b +0x03:  sub    $0x28,%esp
085ca35e +0x06:  mov    0xc(%ebp),%eax
085ca361 +0x09:  test   %eax,%eax
085ca363 +0x0b:  jne    085ca36c <+0x14>
085ca365 +0x0d:  mov    $0x0,%eax
085ca36a +0x12:  jmp    085ca3d4 <+0x7c>
085ca36c +0x14:  mov    0x8(%ebp),%eax
085ca36f +0x17:  lea    0x98(%eax),%ecx
085ca375 +0x1d:  lea    -0x10(%ebp),%eax
085ca378 +0x20:  lea    0xc(%ebp),%edx
085ca37b +0x23:  mov    %edx,0x8(%esp)
085ca37f +0x27:  mov    %ecx,0x4(%esp)
085ca383 +0x2b:  mov    %eax,(%esp)
085ca386 +0x2e:  call   085cd3f4 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x210a>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x210a
085ca38b +0x33:  sub    $0x4,%esp
085ca38e +0x36:  mov    0x8(%ebp),%eax
085ca391 +0x39:  lea    0x98(%eax),%edx
085ca397 +0x3f:  lea    -0xc(%ebp),%eax
085ca39a +0x42:  mov    %edx,0x4(%esp)
085ca39e +0x46:  mov    %eax,(%esp)
085ca3a1 +0x49:  call   085cd420 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x2136>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x2136
085ca3a6 +0x4e:  sub    $0x4,%esp
085ca3a9 +0x51:  lea    -0xc(%ebp),%eax
085ca3ac +0x54:  mov    %eax,0x4(%esp)
085ca3b0 +0x58:  lea    -0x10(%ebp),%eax
085ca3b3 +0x5b:  mov    %eax,(%esp)
085ca3b6 +0x5e:  call   085cd446 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x215c>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x215c
085ca3bb +0x63:  test   %al,%al
085ca3bd +0x65:  je     085ca3cf <+0x77>
085ca3bf +0x67:  lea    -0x10(%ebp),%eax
085ca3c2 +0x6a:  mov    %eax,(%esp)
085ca3c5 +0x6d:  call   085cd45a <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x2170>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x2170
085ca3ca +0x72:  mov    0x4(%eax),%eax
085ca3cd +0x75:  jmp    085ca3d4 <+0x7c>
085ca3cf +0x77:  mov    $0x0,%eax
085ca3d4 +0x7c:  leave
085ca3d5 +0x7d:  ret
```

## 反编译 C

```c
// private_store::CPrivateStoreMgr::FindStoreSeller @ 0x85ca358

/* private_store::CPrivateStoreMgr::FindStoreSeller(CUser*) */

undefined4 __thiscall
private_store::CPrivateStoreMgr::FindStoreSeller(CPrivateStoreMgr *this,CUser *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<CUser*const,private_store::CPrivateStore*>> local_14 [4];
  map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
  local_10 [12];
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0;
  }
  else {
    std::
    map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
    ::find((CUser **)local_14);
    std::
    map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<CUser*const,private_store::CPrivateStore*>>::operator!=
                      (local_14,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      iVar3 = std::_Rb_tree_iterator<std::pair<CUser*const,private_store::CPrivateStore*>>::
              operator->(local_14);
      uVar2 = *(undefined4 *)(iVar3 + 4);
    }
  }
  return uVar2;
}
```
