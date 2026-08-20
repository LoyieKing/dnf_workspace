# SendUsers

`_ZN13private_store13CPrivateStore9SendUsersEP11PacketGuardP5CUserS4_`

`private_store::CPrivateStore::SendUsers(PacketGuard*, CUser*, CUser*)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c7adc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c7adc  _ZN13private_store13CPrivateStore9SendUsersEP11PacketGuardP5CUserS4_
#           private_store::CPrivateStore::SendUsers(PacketGuard*, CUser*, CUser*)
# range [0x085c7adc, 0x085c7bbb]
085c7adc +0x00:  push   %ebp
085c7add +0x01:  mov    %esp,%ebp
085c7adf +0x03:  sub    $0x48,%esp
085c7ae2 +0x06:  movl   $0x0,-0x10(%ebp)
085c7ae9 +0x0d:  lea    -0x1c(%ebp),%eax
085c7aec +0x10:  mov    %eax,(%esp)
085c7aef +0x13:  call   085cd27a <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1f90>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1f90
085c7af4 +0x18:  movl   $0x0,-0xc(%ebp)
085c7afb +0x1f:  mov    0x8(%ebp),%eax
085c7afe +0x22:  lea    0x34(%eax),%edx
085c7b01 +0x25:  lea    -0x2c(%ebp),%eax
085c7b04 +0x28:  mov    %edx,0x4(%esp)
085c7b08 +0x2c:  mov    %eax,(%esp)
085c7b0b +0x2f:  call   0826be82 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x750>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x750
085c7b10 +0x34:  sub    $0x4,%esp
085c7b13 +0x37:  mov    -0x2c(%ebp),%eax
085c7b16 +0x3a:  mov    %eax,-0x1c(%ebp)
085c7b19 +0x3d:  jmp    085c7b6c <+0x90>
085c7b1b +0x3f:  lea    -0x1c(%ebp),%eax
085c7b1e +0x42:  mov    %eax,(%esp)
085c7b21 +0x45:  call   0826bef4 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x7c2>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x7c2
085c7b26 +0x4a:  mov    (%eax),%eax
085c7b28 +0x4c:  mov    %eax,-0xc(%ebp)
085c7b2b +0x4f:  mov    -0xc(%ebp),%eax
085c7b2e +0x52:  cmp    0x10(%ebp),%eax
085c7b31 +0x55:  je     085c7b4f <+0x73>
085c7b33 +0x57:  cmpl   $0x0,-0xc(%ebp)
085c7b37 +0x5b:  je     085c7b4f <+0x73>
085c7b39 +0x5d:  mov    0xc(%ebp),%eax
085c7b3c +0x60:  mov    %eax,0x4(%esp)
085c7b40 +0x64:  mov    -0xc(%ebp),%eax
085c7b43 +0x67:  mov    %eax,(%esp)
085c7b46 +0x6a:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085c7b4b +0x6f:  addl   $0x1,-0x10(%ebp)
085c7b4f +0x73:  lea    -0x14(%ebp),%eax
085c7b52 +0x76:  movl   $0x0,0x8(%esp)
085c7b5a +0x7e:  lea    -0x1c(%ebp),%edx
085c7b5d +0x81:  mov    %edx,0x4(%esp)
085c7b61 +0x85:  mov    %eax,(%esp)
085c7b64 +0x88:  call   085cd288 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1f9e>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1f9e
085c7b69 +0x8d:  sub    $0x4,%esp
085c7b6c +0x90:  mov    0x8(%ebp),%eax
085c7b6f +0x93:  lea    0x34(%eax),%edx
085c7b72 +0x96:  lea    -0x18(%ebp),%eax
085c7b75 +0x99:  mov    %edx,0x4(%esp)
085c7b79 +0x9d:  mov    %eax,(%esp)
085c7b7c +0xa0:  call   0826bea8 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x776>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x776
085c7b81 +0xa5:  sub    $0x4,%esp
085c7b84 +0xa8:  lea    -0x18(%ebp),%eax
085c7b87 +0xab:  mov    %eax,0x4(%esp)
085c7b8b +0xaf:  lea    -0x1c(%ebp),%eax
085c7b8e +0xb2:  mov    %eax,(%esp)
085c7b91 +0xb5:  call   0826becc <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x79a>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x79a
085c7b96 +0xba:  test   %al,%al
085c7b98 +0xbc:  jne    085c7b1b <+0x3f>
085c7b9a +0xbe:  cmpl   $0x0,0x14(%ebp)
085c7b9e +0xc2:  je     085c7bb6 <+0xda>
085c7ba0 +0xc4:  mov    0xc(%ebp),%eax
085c7ba3 +0xc7:  mov    %eax,0x4(%esp)
085c7ba7 +0xcb:  mov    0x14(%ebp),%eax
085c7baa +0xce:  mov    %eax,(%esp)
085c7bad +0xd1:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085c7bb2 +0xd6:  addl   $0x1,-0x10(%ebp)
085c7bb6 +0xda:  mov    -0x10(%ebp),%eax
085c7bb9 +0xdd:  leave
085c7bba +0xde:  ret
085c7bbb +0xdf:  nop
```

## 反编译 C

```c
// private_store::CPrivateStore::SendUsers @ 0x85c7adc

/* private_store::CPrivateStore::SendUsers(PacketGuard*, CUser*, CUser*) */

int __thiscall
private_store::CPrivateStore::SendUsers
          (CPrivateStore *this,PacketGuard *param_1,CUser *param_2,CUser *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  _List_iterator<CUser*> local_20 [4];
  _List_iterator local_1c [4];
  _List_iterator<CUser*> local_18 [4];
  int local_14;
  CUser *local_10;
  
  local_14 = 0;
  std::_List_iterator<CUser*>::_List_iterator(local_20);
  local_10 = (CUser *)0x0;
  std::list<CUser*,std::allocator<CUser*>>::begin();
  while( true ) {
    std::list<CUser*,std::allocator<CUser*>>::end();
    cVar1 = std::_List_iterator<CUser*>::operator!=(local_20,local_1c);
    if (cVar1 == '\0') break;
    puVar2 = (undefined4 *)std::_List_iterator<CUser*>::operator*(local_20);
    local_10 = (CUser *)*puVar2;
    if ((local_10 != param_2) && (local_10 != (CUser *)0x0)) {
      CUser::Send(local_10,param_1);
      local_14 = local_14 + 1;
    }
    std::_List_iterator<CUser*>::operator++(local_18,(int)local_20);
  }
  if (param_3 != (CUser *)0x0) {
    CUser::Send(param_3,param_1);
    local_14 = local_14 + 1;
  }
  return local_14;
}
```
