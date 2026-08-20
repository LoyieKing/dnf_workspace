# ~CPrivateStore

`_ZN13private_store13CPrivateStoreD1Ev`

`private_store::CPrivateStore::~CPrivateStore()`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c4ecc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c4ecc  _ZN13private_store13CPrivateStoreD1Ev
#           private_store::CPrivateStore::~CPrivateStore()
# range [0x085c4ecc, 0x085c4f51]
085c4ecc +0x00:  push   %ebp
085c4ecd +0x01:  mov    %esp,%ebp
085c4ecf +0x03:  push   %esi
085c4ed0 +0x04:  push   %ebx
085c4ed1 +0x05:  sub    $0x10,%esp
085c4ed4 +0x08:  mov    0x8(%ebp),%eax
085c4ed7 +0x0b:  movl   $&_ZTVN13private_store13CPrivateStoreE+0x8,(%eax)
085c4edd +0x11:  mov    0x8(%ebp),%eax
085c4ee0 +0x14:  movl   $&_ZTVN13private_store13CPrivateStoreE+0x38,0x4(%eax)
085c4ee7 +0x1b:  mov    0x8(%ebp),%eax
085c4eea +0x1e:  add    $0x48,%eax
085c4eed +0x21:  mov    %eax,(%esp)
085c4ef0 +0x24:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
085c4ef5 +0x29:  jmp    085c4f0f <+0x43>
085c4ef7 +0x2b:  mov    %edx,%ebx
085c4ef9 +0x2d:  mov    %eax,%esi
085c4efb +0x2f:  mov    0x8(%ebp),%eax
085c4efe +0x32:  add    $0x3c,%eax
085c4f01 +0x35:  mov    %eax,(%esp)
085c4f04 +0x38:  call   085ccf2e <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1c44>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1c44
085c4f09 +0x3d:  mov    %esi,%eax
085c4f0b +0x3f:  mov    %ebx,%edx
085c4f0d +0x41:  jmp    085c4f1f <+0x53>
085c4f0f +0x43:  mov    0x8(%ebp),%eax
085c4f12 +0x46:  add    $0x3c,%eax
085c4f15 +0x49:  mov    %eax,(%esp)
085c4f18 +0x4c:  call   085ccf2e <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1c44>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1c44
085c4f1d +0x51:  jmp    085c4f3d <+0x71>
085c4f1f +0x53:  mov    %edx,%ebx
085c4f21 +0x55:  mov    %eax,%esi
085c4f23 +0x57:  mov    0x8(%ebp),%eax
085c4f26 +0x5a:  add    $0x34,%eax
085c4f29 +0x5d:  mov    %eax,(%esp)
085c4f2c +0x60:  call   0826ba2c <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x2fa>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x2fa
085c4f31 +0x65:  mov    %esi,%eax
085c4f33 +0x67:  mov    %ebx,%edx
085c4f35 +0x69:  mov    %eax,(%esp)
085c4f38 +0x6c:  call   08ae3750 <_Unwind_Resume>
085c4f3d +0x71:  mov    0x8(%ebp),%eax
085c4f40 +0x74:  add    $0x34,%eax
085c4f43 +0x77:  mov    %eax,(%esp)
085c4f46 +0x7a:  call   0826ba2c <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x2fa>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x2fa
085c4f4b +0x7f:  add    $0x10,%esp
085c4f4e +0x82:  pop    %ebx
085c4f4f +0x83:  pop    %esi
085c4f50 +0x84:  pop    %ebp
085c4f51 +0x85:  ret
```

## 反编译 C

```c
// private_store::CPrivateStore::~CPrivateStore @ 0x85c4ecc

/* private_store::CPrivateStore::~CPrivateStore() */

void __thiscall private_store::CPrivateStore::~CPrivateStore(CPrivateStore *this)

{
  *(undefined ***)this = &PTR_CreatePrivateStore_08cbeb68;
  *(undefined ***)(this + 4) = &PTR_BuyPrivateStoreItem_08cbeb98;
                    /* try { // try from 085c4ef0 to 085c4ef4 has its CatchHandler @ 085c4ef7 */
  std::string::~string((string *)(this + 0x48));
                    /* try { // try from 085c4f18 to 085c4f1c has its CatchHandler @ 085c4f1f */
  std::vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>::
  ~vector((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>> *
          )(this + 0x3c));
  std::list<CUser*,std::allocator<CUser*>>::~list
            ((list<CUser*,std::allocator<CUser*>> *)(this + 0x34));
  return;
}
```
