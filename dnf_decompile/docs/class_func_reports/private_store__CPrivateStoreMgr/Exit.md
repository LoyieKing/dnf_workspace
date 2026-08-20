# Exit

`_ZN13private_store16CPrivateStoreMgr4ExitEP5CUser`

`private_store::CPrivateStoreMgr::Exit(CUser*)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStoreMgr` | `0x085ca994` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ca994  _ZN13private_store16CPrivateStoreMgr4ExitEP5CUser
#           private_store::CPrivateStoreMgr::Exit(CUser*)
# range [0x085ca994, 0x085caa89]
085ca994 +0x00:  push   %ebp
085ca995 +0x01:  mov    %esp,%ebp
085ca997 +0x03:  sub    $0x28,%esp
085ca99a +0x06:  cmpl   $0x0,0xc(%ebp)
085ca99e +0x0a:  jne    085ca9aa <+0x16>
085ca9a0 +0x0c:  mov    $0x0,%eax
085ca9a5 +0x11:  jmp    085caa87 <+0xf3>
085ca9aa +0x16:  mov    0xc(%ebp),%eax
085ca9ad +0x19:  mov    %eax,0x4(%esp)
085ca9b1 +0x1d:  mov    0x8(%ebp),%eax
085ca9b4 +0x20:  mov    %eax,(%esp)
085ca9b7 +0x23:  call   085ca2da <_ZN13private_store16CPrivateStoreMgr14FindStoreBuyerEP5CUser>  ; private_store::CPrivateStoreMgr::FindStoreBuyer(CUser*)
085ca9bc +0x28:  mov    %eax,-0xc(%ebp)
085ca9bf +0x2b:  cmpl   $0x0,-0xc(%ebp)
085ca9c3 +0x2f:  setne  %al
085ca9c6 +0x32:  test   %al,%al
085ca9c8 +0x34:  je     085caa16 <+0x82>
085ca9ca +0x36:  movl   $0x0,-0x10(%ebp)
085ca9d1 +0x3d:  movl   $0x0,0xc(%esp)
085ca9d9 +0x45:  mov    0xc(%ebp),%eax
085ca9dc +0x48:  mov    %eax,0x8(%esp)
085ca9e0 +0x4c:  lea    -0x10(%ebp),%eax
085ca9e3 +0x4f:  mov    %eax,0x4(%esp)
085ca9e7 +0x53:  mov    0x8(%ebp),%eax
085ca9ea +0x56:  mov    %eax,(%esp)
085ca9ed +0x59:  call   085ca7b8 <_ZN13private_store16CPrivateStoreMgr13GetStoreBuyerEPPNS_6IBuyerEP5CUserS5_>  ; private_store::CPrivateStoreMgr::GetStoreBuyer(private_store::IBuyer**, CUser*, CUser*)
085ca9f2 +0x5e:  mov    -0x10(%ebp),%eax
085ca9f5 +0x61:  mov    (%eax),%eax
085ca9f7 +0x63:  add    $0xc,%eax
085ca9fa +0x66:  mov    (%eax),%edx
085ca9fc +0x68:  mov    -0x10(%ebp),%eax
085ca9ff +0x6b:  mov    %eax,(%esp)
085caa02 +0x6e:  call   *%edx
085caa04 +0x70:  mov    0xc(%ebp),%eax
085caa07 +0x73:  mov    %eax,0x4(%esp)
085caa0b +0x77:  mov    0x8(%ebp),%eax
085caa0e +0x7a:  mov    %eax,(%esp)
085caa11 +0x7d:  call   085ca914 <_ZN13private_store16CPrivateStoreMgr14FreeStoreBuyerEP5CUser>  ; private_store::CPrivateStoreMgr::FreeStoreBuyer(CUser*)
085caa16 +0x82:  mov    0xc(%ebp),%eax
085caa19 +0x85:  mov    %eax,0x4(%esp)
085caa1d +0x89:  mov    0x8(%ebp),%eax
085caa20 +0x8c:  mov    %eax,(%esp)
085caa23 +0x8f:  call   085ca358 <_ZN13private_store16CPrivateStoreMgr15FindStoreSellerEP5CUser>  ; private_store::CPrivateStoreMgr::FindStoreSeller(CUser*)
085caa28 +0x94:  mov    %eax,-0xc(%ebp)
085caa2b +0x97:  cmpl   $0x0,-0xc(%ebp)
085caa2f +0x9b:  setne  %al
085caa32 +0x9e:  test   %al,%al
085caa34 +0xa0:  je     085caa82 <+0xee>
085caa36 +0xa2:  movl   $0x0,-0x14(%ebp)
085caa3d +0xa9:  mov    0xc(%ebp),%eax
085caa40 +0xac:  mov    %eax,0x8(%esp)
085caa44 +0xb0:  lea    -0x14(%ebp),%eax
085caa47 +0xb3:  mov    %eax,0x4(%esp)
085caa4b +0xb7:  mov    0x8(%ebp),%eax
085caa4e +0xba:  mov    %eax,(%esp)
085caa51 +0xbd:  call   085ca698 <_ZN13private_store16CPrivateStoreMgr14GetStoreSellerEPPNS_7ISellerEP5CUser>  ; private_store::CPrivateStoreMgr::GetStoreSeller(private_store::ISeller**, CUser*)
085caa56 +0xc2:  mov    -0x14(%ebp),%eax
085caa59 +0xc5:  mov    (%eax),%eax
085caa5b +0xc7:  add    $0x4,%eax
085caa5e +0xca:  mov    (%eax),%edx
085caa60 +0xcc:  mov    -0x14(%ebp),%eax
085caa63 +0xcf:  movl   $0x1,0x4(%esp)
085caa6b +0xd7:  mov    %eax,(%esp)
085caa6e +0xda:  call   *%edx
085caa70 +0xdc:  mov    0xc(%ebp),%eax
085caa73 +0xdf:  mov    %eax,0x4(%esp)
085caa77 +0xe3:  mov    0x8(%ebp),%eax
085caa7a +0xe6:  mov    %eax,(%esp)
085caa7d +0xe9:  call   085ca874 <_ZN13private_store16CPrivateStoreMgr15FreeStoreSellerEP5CUser>  ; private_store::CPrivateStoreMgr::FreeStoreSeller(CUser*)
085caa82 +0xee:  mov    $0x1,%eax
085caa87 +0xf3:  leave
085caa88 +0xf4:  ret
085caa89 +0xf5:  nop
```

## 反编译 C

```c
// private_store::CPrivateStoreMgr::Exit @ 0x85ca994

/* private_store::CPrivateStoreMgr::Exit(CUser*) */

undefined4 __thiscall private_store::CPrivateStoreMgr::Exit(CPrivateStoreMgr *this,CUser *param_1)

{
  undefined4 uVar1;
  ISeller *local_18;
  IBuyer *local_14;
  int local_10;
  
  if (param_1 == (CUser *)0x0) {
    uVar1 = 0;
  }
  else {
    local_10 = FindStoreBuyer(this,param_1);
    if (local_10 != 0) {
      local_14 = (IBuyer *)0x0;
      GetStoreBuyer(this,&local_14,param_1,(CUser *)0x0);
      (**(code **)(*(int *)local_14 + 0xc))(local_14);
      FreeStoreBuyer((CUser *)this);
    }
    local_10 = FindStoreSeller(this,param_1);
    if (local_10 != 0) {
      local_18 = (ISeller *)0x0;
      GetStoreSeller(this,&local_18,param_1);
      (**(code **)(*(int *)local_18 + 4))(local_18,1);
      FreeStoreSeller((CUser *)this);
    }
    uVar1 = 1;
  }
  return uVar1;
}
```
