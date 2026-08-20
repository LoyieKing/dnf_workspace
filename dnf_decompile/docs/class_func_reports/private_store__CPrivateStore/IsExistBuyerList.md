# IsExistBuyerList

`_ZN13private_store13CPrivateStore16IsExistBuyerListEP5CUser`

`private_store::CPrivateStore::IsExistBuyerList(CUser*)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c91b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c91b6  _ZN13private_store13CPrivateStore16IsExistBuyerListEP5CUser
#           private_store::CPrivateStore::IsExistBuyerList(CUser*)
# range [0x085c91b6, 0x085c924b]
085c91b6 +0x00:  push   %ebp
085c91b7 +0x01:  mov    %esp,%ebp
085c91b9 +0x03:  sub    $0x28,%esp
085c91bc +0x06:  mov    0x8(%ebp),%eax
085c91bf +0x09:  lea    0x34(%eax),%edx
085c91c2 +0x0c:  lea    -0x14(%ebp),%eax
085c91c5 +0x0f:  mov    %edx,0x4(%esp)
085c91c9 +0x13:  mov    %eax,(%esp)
085c91cc +0x16:  call   0826bea8 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x776>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x776
085c91d1 +0x1b:  sub    $0x4,%esp
085c91d4 +0x1e:  mov    0x8(%ebp),%eax
085c91d7 +0x21:  lea    0x34(%eax),%edx
085c91da +0x24:  lea    -0x10(%ebp),%eax
085c91dd +0x27:  mov    %edx,0x4(%esp)
085c91e1 +0x2b:  mov    %eax,(%esp)
085c91e4 +0x2e:  call   0826be82 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x750>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x750
085c91e9 +0x33:  sub    $0x4,%esp
085c91ec +0x36:  lea    -0x18(%ebp),%eax
085c91ef +0x39:  lea    0xc(%ebp),%edx
085c91f2 +0x3c:  mov    %edx,0xc(%esp)
085c91f6 +0x40:  mov    -0x14(%ebp),%edx
085c91f9 +0x43:  mov    %edx,0x8(%esp)
085c91fd +0x47:  mov    -0x10(%ebp),%edx
085c9200 +0x4a:  mov    %edx,0x4(%esp)
085c9204 +0x4e:  mov    %eax,(%esp)
085c9207 +0x51:  call   085cd2bf <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1fd5>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1fd5
085c920c +0x56:  sub    $0x4,%esp
085c920f +0x59:  mov    0x8(%ebp),%eax
085c9212 +0x5c:  lea    0x34(%eax),%edx
085c9215 +0x5f:  lea    -0xc(%ebp),%eax
085c9218 +0x62:  mov    %edx,0x4(%esp)
085c921c +0x66:  mov    %eax,(%esp)
085c921f +0x69:  call   0826bea8 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x776>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x776
085c9224 +0x6e:  sub    $0x4,%esp
085c9227 +0x71:  lea    -0xc(%ebp),%eax
085c922a +0x74:  mov    %eax,0x4(%esp)
085c922e +0x78:  lea    -0x18(%ebp),%eax
085c9231 +0x7b:  mov    %eax,(%esp)
085c9234 +0x7e:  call   0826becc <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x79a>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x79a
085c9239 +0x83:  test   %al,%al
085c923b +0x85:  je     085c9244 <+0x8e>
085c923d +0x87:  mov    $0x1,%eax
085c9242 +0x8c:  jmp    085c9249 <+0x93>
085c9244 +0x8e:  mov    $0x0,%eax
085c9249 +0x93:  leave
085c924a +0x94:  ret
085c924b +0x95:  nop
```

## 反编译 C

```c
// private_store::CPrivateStore::IsExistBuyerList @ 0x85c91b6

/* private_store::CPrivateStore::IsExistBuyerList(CUser*) */

bool private_store::CPrivateStore::IsExistBuyerList(CUser *param_1)

{
  char cVar1;
  _List_iterator<CUser*> local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  _List_iterator local_10 [12];
  
  std::list<CUser*,std::allocator<CUser*>>::end();
  std::list<CUser*,std::allocator<CUser*>>::begin();
  std::find<std::_List_iterator<CUser*>,CUser*>(local_1c,local_14,local_18,&stack0x00000008);
  std::list<CUser*,std::allocator<CUser*>>::end();
  cVar1 = std::_List_iterator<CUser*>::operator!=(local_1c,local_10);
  return cVar1 != '\0';
}
```
