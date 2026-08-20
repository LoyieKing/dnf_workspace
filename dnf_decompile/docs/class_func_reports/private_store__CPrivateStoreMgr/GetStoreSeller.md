# GetStoreSeller

`_ZN13private_store16CPrivateStoreMgr14GetStoreSellerEPPNS_7ISellerEP5CUser`

`private_store::CPrivateStoreMgr::GetStoreSeller(private_store::ISeller**, CUser*)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStoreMgr` | `0x085ca698` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ca698  _ZN13private_store16CPrivateStoreMgr14GetStoreSellerEPPNS_7ISellerEP5CUser
#           private_store::CPrivateStoreMgr::GetStoreSeller(private_store::ISeller**, CUser*)
# range [0x085ca698, 0x085ca75f]
085ca698 +0x00:  push   %ebp
085ca699 +0x01:  mov    %esp,%ebp
085ca69b +0x03:  sub    $0x28,%esp
085ca69e +0x06:  mov    0x10(%ebp),%eax
085ca6a1 +0x09:  mov    %eax,0x4(%esp)
085ca6a5 +0x0d:  mov    0x8(%ebp),%eax
085ca6a8 +0x10:  mov    %eax,(%esp)
085ca6ab +0x13:  call   085ca358 <_ZN13private_store16CPrivateStoreMgr15FindStoreSellerEP5CUser>  ; private_store::CPrivateStoreMgr::FindStoreSeller(CUser*)
085ca6b0 +0x18:  mov    %eax,-0xc(%ebp)
085ca6b3 +0x1b:  cmpl   $0x0,-0xc(%ebp)
085ca6b7 +0x1f:  sete   %al
085ca6ba +0x22:  test   %al,%al
085ca6bc +0x24:  je     085ca751 <+0xb9>
085ca6c2 +0x2a:  mov    0x8(%ebp),%eax
085ca6c5 +0x2d:  add    $0x68,%eax
085ca6c8 +0x30:  mov    %eax,(%esp)
085ca6cb +0x33:  call   085cd592 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x22a8>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x22a8
085ca6d0 +0x38:  mov    %eax,-0xc(%ebp)
085ca6d3 +0x3b:  cmpl   $0x0,-0xc(%ebp)
085ca6d7 +0x3f:  sete   %al
085ca6da +0x42:  test   %al,%al
085ca6dc +0x44:  je     085ca705 <+0x6d>
085ca6de +0x46:  mov    0x8(%ebp),%eax
085ca6e1 +0x49:  lea    0x4(%eax),%edx
085ca6e4 +0x4c:  mov    0xc(%ebp),%eax
085ca6e7 +0x4f:  mov    %edx,(%eax)
085ca6e9 +0x51:  mov    0x10(%ebp),%eax
085ca6ec +0x54:  mov    0x8(%ebp),%edx
085ca6ef +0x57:  add    $0x4,%edx
085ca6f2 +0x5a:  mov    %eax,0x4(%esp)
085ca6f6 +0x5e:  mov    %edx,(%esp)
085ca6f9 +0x61:  call   085cb8aa <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x5c0>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x5c0
085ca6fe +0x66:  mov    $0x0,%eax
085ca703 +0x6b:  jmp    085ca75e <+0xc6>
085ca705 +0x6d:  mov    -0xc(%ebp),%eax
085ca708 +0x70:  mov    %eax,(%esp)
085ca70b +0x73:  call   085c4e70 <_ZN13private_store13CPrivateStore5ClearEv>  ; private_store::CPrivateStore::Clear()
085ca710 +0x78:  mov    0x8(%ebp),%eax
085ca713 +0x7b:  mov    %eax,0x4(%esp)
085ca717 +0x7f:  mov    -0xc(%ebp),%eax
085ca71a +0x82:  mov    %eax,(%esp)
085ca71d +0x85:  call   085cb8c6 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x5dc>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x5dc
085ca722 +0x8a:  mov    0x10(%ebp),%eax
085ca725 +0x8d:  mov    %eax,0x4(%esp)
085ca729 +0x91:  mov    -0xc(%ebp),%eax
085ca72c +0x94:  mov    %eax,(%esp)
085ca72f +0x97:  call   085cb8aa <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x5c0>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x5c0
085ca734 +0x9c:  mov    0x8(%ebp),%eax
085ca737 +0x9f:  lea    0x98(%eax),%edx
085ca73d +0xa5:  lea    0x10(%ebp),%eax
085ca740 +0xa8:  mov    %eax,0x4(%esp)
085ca744 +0xac:  mov    %edx,(%esp)
085ca747 +0xaf:  call   085cd6ae <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x23c4>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x23c4
085ca74c +0xb4:  mov    -0xc(%ebp),%edx
085ca74f +0xb7:  mov    %edx,(%eax)
085ca751 +0xb9:  mov    -0xc(%ebp),%edx
085ca754 +0xbc:  mov    0xc(%ebp),%eax
085ca757 +0xbf:  mov    %edx,(%eax)
085ca759 +0xc1:  mov    $0x1,%eax
085ca75e +0xc6:  leave
085ca75f +0xc7:  ret
```

## 反编译 C

```c
// private_store::CPrivateStoreMgr::GetStoreSeller @ 0x85ca698

/* private_store::CPrivateStoreMgr::GetStoreSeller(private_store::ISeller**, CUser*) */

undefined4 __thiscall
private_store::CPrivateStoreMgr::GetStoreSeller
          (CPrivateStoreMgr *this,ISeller **param_1,CUser *param_2)

{
  undefined4 *puVar1;
  CPrivateStore *local_10;
  
  local_10 = (CPrivateStore *)FindStoreSeller(this,param_2);
  if (local_10 == (CPrivateStore *)0x0) {
    local_10 = (CPrivateStore *)
               StaticPool<private_store::CPrivateStore,300>::Acquire
                         ((StaticPool<private_store::CPrivateStore,300> *)(this + 0x68));
    if (local_10 == (CPrivateStore *)0x0) {
      *param_1 = (ISeller *)(this + 4);
      CPrivateStore::SetSeller((CPrivateStore *)(this + 4),param_2);
      return 0;
    }
    CPrivateStore::Clear(local_10);
    CPrivateStore::SetParent(local_10,this);
    CPrivateStore::SetSeller(local_10,param_2);
    puVar1 = (undefined4 *)
             std::
             map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
             ::operator[]((map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
                           *)(this + 0x98),&param_2);
    *puVar1 = local_10;
  }
  *param_1 = (ISeller *)local_10;
  return 1;
}
```
