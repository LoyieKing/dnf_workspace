# GetStoreBuyer

`_ZN13private_store16CPrivateStoreMgr13GetStoreBuyerEPPNS_6IBuyerEP5CUserS5_`

`private_store::CPrivateStoreMgr::GetStoreBuyer(private_store::IBuyer**, CUser*, CUser*)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStoreMgr` | `0x085ca7b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ca7b8  _ZN13private_store16CPrivateStoreMgr13GetStoreBuyerEPPNS_6IBuyerEP5CUserS5_
#           private_store::CPrivateStoreMgr::GetStoreBuyer(private_store::IBuyer**, CUser*, CUser*)
# range [0x085ca7b8, 0x085ca873]
085ca7b8 +0x00:  push   %ebp
085ca7b9 +0x01:  mov    %esp,%ebp
085ca7bb +0x03:  sub    $0x28,%esp
085ca7be +0x06:  mov    0x10(%ebp),%eax
085ca7c1 +0x09:  mov    %eax,0x4(%esp)
085ca7c5 +0x0d:  mov    0x8(%ebp),%eax
085ca7c8 +0x10:  mov    %eax,(%esp)
085ca7cb +0x13:  call   085ca2da <_ZN13private_store16CPrivateStoreMgr14FindStoreBuyerEP5CUser>  ; private_store::CPrivateStoreMgr::FindStoreBuyer(CUser*)
085ca7d0 +0x18:  mov    %eax,-0xc(%ebp)
085ca7d3 +0x1b:  cmpl   $0x0,-0xc(%ebp)
085ca7d7 +0x1f:  sete   %al
085ca7da +0x22:  test   %al,%al
085ca7dc +0x24:  je     085ca842 <+0x8a>
085ca7de +0x26:  mov    0x14(%ebp),%eax
085ca7e1 +0x29:  mov    %eax,0x4(%esp)
085ca7e5 +0x2d:  mov    0x8(%ebp),%eax
085ca7e8 +0x30:  mov    %eax,(%esp)
085ca7eb +0x33:  call   085ca358 <_ZN13private_store16CPrivateStoreMgr15FindStoreSellerEP5CUser>  ; private_store::CPrivateStoreMgr::FindStoreSeller(CUser*)
085ca7f0 +0x38:  mov    %eax,-0xc(%ebp)
085ca7f3 +0x3b:  cmpl   $0x0,-0xc(%ebp)
085ca7f7 +0x3f:  sete   %al
085ca7fa +0x42:  test   %al,%al
085ca7fc +0x44:  je     085ca825 <+0x6d>
085ca7fe +0x46:  mov    0x8(%ebp),%eax
085ca801 +0x49:  lea    0x8(%eax),%edx
085ca804 +0x4c:  mov    0xc(%ebp),%eax
085ca807 +0x4f:  mov    %edx,(%eax)
085ca809 +0x51:  mov    0x10(%ebp),%eax
085ca80c +0x54:  mov    0x8(%ebp),%edx
085ca80f +0x57:  add    $0x4,%edx
085ca812 +0x5a:  mov    %eax,0x4(%esp)
085ca816 +0x5e:  mov    %edx,(%esp)
085ca819 +0x61:  call   085cb8b8 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x5ce>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x5ce
085ca81e +0x66:  mov    $0x0,%eax
085ca823 +0x6b:  jmp    085ca871 <+0xb9>
085ca825 +0x6d:  mov    0x8(%ebp),%eax
085ca828 +0x70:  lea    0xb0(%eax),%edx
085ca82e +0x76:  lea    0x10(%ebp),%eax
085ca831 +0x79:  mov    %eax,0x4(%esp)
085ca835 +0x7d:  mov    %edx,(%esp)
085ca838 +0x80:  call   085cd6ae <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x23c4>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x23c4
085ca83d +0x85:  mov    -0xc(%ebp),%edx
085ca840 +0x88:  mov    %edx,(%eax)
085ca842 +0x8a:  cmpl   $0x0,-0xc(%ebp)
085ca846 +0x8e:  je     085ca850 <+0x98>
085ca848 +0x90:  mov    -0xc(%ebp),%eax
085ca84b +0x93:  add    $0x4,%eax
085ca84e +0x96:  jmp    085ca855 <+0x9d>
085ca850 +0x98:  mov    $0x0,%eax
085ca855 +0x9d:  mov    0xc(%ebp),%edx
085ca858 +0xa0:  mov    %eax,(%edx)
085ca85a +0xa2:  mov    0x10(%ebp),%eax
085ca85d +0xa5:  mov    %eax,0x4(%esp)
085ca861 +0xa9:  mov    -0xc(%ebp),%eax
085ca864 +0xac:  mov    %eax,(%esp)
085ca867 +0xaf:  call   085cb8b8 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x5ce>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x5ce
085ca86c +0xb4:  mov    $0x1,%eax
085ca871 +0xb9:  leave
085ca872 +0xba:  ret
085ca873 +0xbb:  nop
```

## 反编译 C

```c
// private_store::CPrivateStoreMgr::GetStoreBuyer @ 0x85ca7b8

/* private_store::CPrivateStoreMgr::GetStoreBuyer(private_store::IBuyer**, CUser*, CUser*) */

undefined4 __thiscall
private_store::CPrivateStoreMgr::GetStoreBuyer
          (CPrivateStoreMgr *this,IBuyer **param_1,CUser *param_2,CUser *param_3)

{
  int *piVar1;
  IBuyer *pIVar2;
  CPrivateStore *local_10;
  
  local_10 = (CPrivateStore *)FindStoreBuyer(this,param_2);
  if (local_10 == (CPrivateStore *)0x0) {
    local_10 = (CPrivateStore *)FindStoreSeller(this,param_3);
    if (local_10 == (CPrivateStore *)0x0) {
      *param_1 = (IBuyer *)(this + 8);
      CPrivateStore::SetBuyer((CPrivateStore *)(this + 4),param_2);
      return 0;
    }
    piVar1 = (int *)std::
                    map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
                    ::operator[]((map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
                                  *)(this + 0xb0),&param_2);
    *piVar1 = (int)local_10;
  }
  if (local_10 == (CPrivateStore *)0x0) {
    pIVar2 = (IBuyer *)0x0;
  }
  else {
    pIVar2 = (IBuyer *)(local_10 + 4);
  }
  *param_1 = pIVar2;
  CPrivateStore::SetBuyer(local_10,param_2);
  return 1;
}
```
