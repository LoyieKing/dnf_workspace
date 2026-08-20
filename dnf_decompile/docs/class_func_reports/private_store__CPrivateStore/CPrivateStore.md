# CPrivateStore

`_ZN13private_store13CPrivateStoreC1Ev`

`private_store::CPrivateStore::CPrivateStore()`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c4d10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c4d10  _ZN13private_store13CPrivateStoreC1Ev
#           private_store::CPrivateStore::CPrivateStore()
# range [0x085c4d10, 0x085c4e6b]
085c4d10 +0x000:  push   %ebp
085c4d11 +0x001:  mov    %esp,%ebp
085c4d13 +0x003:  push   %edi
085c4d14 +0x004:  push   %esi
085c4d15 +0x005:  push   %ebx
085c4d16 +0x006:  sub    $0xcc,%esp
085c4d1c +0x00c:  mov    0x8(%ebp),%eax
085c4d1f +0x00f:  mov    %eax,(%esp)
085c4d22 +0x012:  call   085ccac0 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x17d6>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x17d6
085c4d27 +0x017:  mov    0x8(%ebp),%eax
085c4d2a +0x01a:  add    $0x4,%eax
085c4d2d +0x01d:  mov    %eax,(%esp)
085c4d30 +0x020:  call   085ccace <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x17e4>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x17e4
085c4d35 +0x025:  mov    0x8(%ebp),%eax
085c4d38 +0x028:  movl   $&_ZTVN13private_store13CPrivateStoreE+0x8,(%eax)
085c4d3e +0x02e:  mov    0x8(%ebp),%eax
085c4d41 +0x031:  movl   $&_ZTVN13private_store13CPrivateStoreE+0x38,0x4(%eax)
085c4d48 +0x038:  mov    0x8(%ebp),%eax
085c4d4b +0x03b:  add    $0x24,%eax
085c4d4e +0x03e:  mov    %eax,(%esp)
085c4d51 +0x041:  call   085cb6f6 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x40c>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x40c
085c4d56 +0x046:  mov    0x8(%ebp),%eax
085c4d59 +0x049:  add    $0x34,%eax
085c4d5c +0x04c:  mov    %eax,(%esp)
085c4d5f +0x04f:  call   0826be18 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x6e6>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x6e6
085c4d64 +0x054:  mov    0x8(%ebp),%eax
085c4d67 +0x057:  add    $0x3c,%eax
085c4d6a +0x05a:  mov    %eax,(%esp)
085c4d6d +0x05d:  call   085ccf1a <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1c30>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1c30
085c4d72 +0x062:  mov    0x8(%ebp),%eax
085c4d75 +0x065:  add    $0x48,%eax
085c4d78 +0x068:  mov    %eax,(%esp)
085c4d7b +0x06b:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
085c4d80 +0x070:  mov    0x8(%ebp),%eax
085c4d83 +0x073:  add    $0x4c,%eax
085c4d86 +0x076:  mov    %eax,(%esp)
085c4d89 +0x079:  call   085cb7c8 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x4de>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x4de
085c4d8e +0x07e:  mov    0x8(%ebp),%eax
085c4d91 +0x081:  movl   $0x0,0x20(%eax)
085c4d98 +0x088:  mov    0x8(%ebp),%eax
085c4d9b +0x08b:  movb   $0x0,0x10(%eax)
085c4d9f +0x08f:  mov    0x8(%ebp),%eax
085c4da2 +0x092:  add    $0x3c,%eax
085c4da5 +0x095:  movl   $0xe,0x4(%esp)
085c4dad +0x09d:  mov    %eax,(%esp)
085c4db0 +0x0a0:  call   085ccf8c <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1ca2>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1ca2
085c4db5 +0x0a5:  lea    -0x64(%ebp),%eax
085c4db8 +0x0a8:  mov    %eax,(%esp)
085c4dbb +0x0ab:  call   0823457c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c26>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c26
085c4dc0 +0x0b0:  mov    0x8(%ebp),%eax
085c4dc3 +0x0b3:  add    $0x3c,%eax
085c4dc6 +0x0b6:  mov    %eax,-0x6c(%ebp)
085c4dc9 +0x0b9:  lea    0x8(%esp),%edx
085c4dcd +0x0bd:  lea    -0x64(%ebp),%ebx
085c4dd0 +0x0c0:  mov    $0x13,%eax
085c4dd5 +0x0c5:  mov    %edx,%edi
085c4dd7 +0x0c7:  mov    %ebx,%esi
085c4dd9 +0x0c9:  mov    %eax,%ecx
085c4ddb +0x0cb:  rep movsl %ds:(%esi),%es:(%edi)
085c4ddd +0x0cd:  movl   $0xe,0x4(%esp)
085c4de5 +0x0d5:  mov    -0x6c(%ebp),%eax
085c4de8 +0x0d8:  mov    %eax,(%esp)
085c4deb +0x0db:  call   085cd0b4 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1dca>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1dca
085c4df0 +0x0e0:  mov    0x8(%ebp),%eax
085c4df3 +0x0e3:  add    $0x48,%eax
085c4df6 +0x0e6:  movl   $0x28,0x4(%esp)
085c4dfe +0x0ee:  mov    %eax,(%esp)
085c4e01 +0x0f1:  call   08707d10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1920>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1920
085c4e06 +0x0f6:  mov    0x8(%ebp),%eax
085c4e09 +0x0f9:  movb   $0x0,0x8(%eax)
085c4e0d +0x0fd:  mov    0x8(%ebp),%eax
085c4e10 +0x100:  movl   $0x0,0xc(%eax)
085c4e17 +0x107:  add    $0xcc,%esp
085c4e1d +0x10d:  pop    %ebx
085c4e1e +0x10e:  pop    %esi
085c4e1f +0x10f:  pop    %edi
085c4e20 +0x110:  pop    %ebp
085c4e21 +0x111:  ret
085c4e22 +0x112:  mov    %edx,%ebx
085c4e24 +0x114:  mov    %eax,%esi
085c4e26 +0x116:  mov    0x8(%ebp),%eax
085c4e29 +0x119:  add    $0x48,%eax
085c4e2c +0x11c:  mov    %eax,(%esp)
085c4e2f +0x11f:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
085c4e34 +0x124:  mov    %esi,%eax
085c4e36 +0x126:  mov    %ebx,%edx
085c4e38 +0x128:  jmp    085c4e3a <+0x12a>
085c4e3a +0x12a:  mov    %edx,%ebx
085c4e3c +0x12c:  mov    %eax,%esi
085c4e3e +0x12e:  mov    0x8(%ebp),%eax
085c4e41 +0x131:  add    $0x3c,%eax
085c4e44 +0x134:  mov    %eax,(%esp)
085c4e47 +0x137:  call   085ccf2e <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1c44>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1c44
085c4e4c +0x13c:  mov    %esi,%eax
085c4e4e +0x13e:  mov    %ebx,%edx
085c4e50 +0x140:  jmp    085c4e52 <+0x142>
085c4e52 +0x142:  mov    %edx,%ebx
085c4e54 +0x144:  mov    %eax,%esi
085c4e56 +0x146:  mov    0x8(%ebp),%eax
085c4e59 +0x149:  add    $0x34,%eax
085c4e5c +0x14c:  mov    %eax,(%esp)
085c4e5f +0x14f:  call   0826ba2c <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x2fa>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x2fa
085c4e64 +0x154:  mov    %esi,%eax
085c4e66 +0x156:  mov    %ebx,%edx
085c4e68 +0x158:  mov    %eax,(%esp)
085c4e6b +0x15b:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// private_store::CPrivateStore::CPrivateStore @ 0x85c4d10

/* private_store::CPrivateStore::CPrivateStore() */

void __thiscall private_store::CPrivateStore::CPrivateStore(CPrivateStore *this)

{
  int iVar1;
  PrivateStoreItem *pPVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 local_d4 [25];
  CPrivateStore *local_70;
  PrivateStoreItem local_68 [88];
  
  bVar4 = 0;
  ISeller::ISeller((ISeller *)this);
  IBuyer::IBuyer((IBuyer *)(this + 4));
  *(undefined ***)this = &PTR_CreatePrivateStore_08cbeb68;
  *(undefined ***)(this + 4) = &PTR_BuyPrivateStoreItem_08cbeb98;
  PrivateStorePos::PrivateStorePos((PrivateStorePos *)(this + 0x24));
  std::list<CUser*,std::allocator<CUser*>>::list
            ((list<CUser*,std::allocator<CUser*>> *)(this + 0x34));
                    /* try { // try from 085c4d6d to 085c4d71 has its CatchHandler @ 085c4e52 */
  std::vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>::
  vector((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>> *)
         (this + 0x3c));
                    /* try { // try from 085c4d7b to 085c4d7f has its CatchHandler @ 085c4e3a */
  std::string::string((string *)(this + 0x48));
  CPrivateStorePos::CPrivateStorePos((CPrivateStorePos *)(this + 0x4c));
  *(undefined4 *)(this + 0x20) = 0;
  this[0x10] = (CPrivateStore)0x0;
                    /* try { // try from 085c4db0 to 085c4e05 has its CatchHandler @ 085c4e22 */
  std::vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>::
  reserve((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>> *
          )(this + 0x3c),0xe);
  PrivateStoreItem::PrivateStoreItem(local_68);
  local_70 = this + 0x3c;
  pPVar2 = local_68;
  puVar3 = local_d4;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pPVar2;
    pPVar2 = pPVar2 + ((uint)bVar4 * -2 + 1) * 4;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  std::vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>::
  resize(local_70,0xe);
  std::string::reserve((string *)(this + 0x48),0x28);
  this[8] = (CPrivateStore)0x0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}
```
