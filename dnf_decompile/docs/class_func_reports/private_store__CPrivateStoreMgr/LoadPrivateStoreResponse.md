# LoadPrivateStoreResponse

`_ZN13private_store16CPrivateStoreMgr24LoadPrivateStoreResponseEP5CUserPNS_17SIG_PRIVATE_STOREE`

`private_store::CPrivateStoreMgr::LoadPrivateStoreResponse(CUser*, private_store::SIG_PRIVATE_STORE*)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStoreMgr` | `0x085cac16` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085cac16  _ZN13private_store16CPrivateStoreMgr24LoadPrivateStoreResponseEP5CUserPNS_17SIG_PRIVATE_STOREE
#           private_store::CPrivateStoreMgr::LoadPrivateStoreResponse(CUser*, private_store::SIG_PRIVATE_STORE*)
# range [0x085cac16, 0x085cad5d]
085cac16 +0x000:  push   %ebp
085cac17 +0x001:  mov    %esp,%ebp
085cac19 +0x003:  push   %esi
085cac1a +0x004:  push   %ebx
085cac1b +0x005:  sub    $0x30,%esp
085cac1e +0x008:  movl   $0x0,-0x10(%ebp)
085cac25 +0x00f:  mov    0x10(%ebp),%eax
085cac28 +0x012:  mov    0x430(%eax),%eax
085cac2e +0x018:  cmp    $0x1,%eax
085cac31 +0x01b:  jne    085cacb2 <+0x9c>
085cac33 +0x01d:  mov    0xc(%ebp),%eax
085cac36 +0x020:  mov    %eax,0x8(%esp)
085cac3a +0x024:  lea    -0x14(%ebp),%eax
085cac3d +0x027:  mov    %eax,0x4(%esp)
085cac41 +0x02b:  mov    0x8(%ebp),%eax
085cac44 +0x02e:  mov    %eax,(%esp)
085cac47 +0x031:  call   085ca698 <_ZN13private_store16CPrivateStoreMgr14GetStoreSellerEPPNS_7ISellerEP5CUser>  ; private_store::CPrivateStoreMgr::GetStoreSeller(private_store::ISeller**, CUser*)
085cac4c +0x036:  mov    -0x14(%ebp),%eax
085cac4f +0x039:  mov    %eax,-0xc(%ebp)
085cac52 +0x03c:  mov    -0xc(%ebp),%eax
085cac55 +0x03f:  mov    %eax,(%esp)
085cac58 +0x042:  call   085c4f52 <_ZN13private_store13CPrivateStore10ResetItemsEv>  ; private_store::CPrivateStore::ResetItems()
085cac5d +0x047:  mov    0x10(%ebp),%eax
085cac60 +0x04a:  add    $0x8,%eax
085cac63 +0x04d:  movl   $0xe,0x8(%esp)
085cac6b +0x055:  mov    %eax,0x4(%esp)
085cac6f +0x059:  mov    -0xc(%ebp),%eax
085cac72 +0x05c:  mov    %eax,(%esp)
085cac75 +0x05f:  call   085c4f9c <_ZN13private_store13CPrivateStore9CopyItemsEPNS_16PrivateStoreItemEi>  ; private_store::CPrivateStore::CopyItems(private_store::PrivateStoreItem*, int)
085cac7a +0x064:  mov    -0xc(%ebp),%eax
085cac7d +0x067:  mov    %eax,(%esp)
085cac80 +0x06a:  call   085c5cec <_ZN13private_store13CPrivateStore28RecallPrivateStoreItemToMailEv>  ; private_store::CPrivateStore::RecallPrivateStoreItemToMail()
085cac85 +0x06f:  mov    -0xc(%ebp),%eax
085cac88 +0x072:  mov    %eax,(%esp)
085cac8b +0x075:  call   085ca116 <_ZN13private_store13CPrivateStore16SavePrivateStoreEv>  ; private_store::CPrivateStore::SavePrivateStore()
085cac90 +0x07a:  mov    -0xc(%ebp),%eax
085cac93 +0x07d:  mov    %eax,(%esp)
085cac96 +0x080:  call   085c4e70 <_ZN13private_store13CPrivateStore5ClearEv>  ; private_store::CPrivateStore::Clear()
085cac9b +0x085:  mov    0xc(%ebp),%eax
085cac9e +0x088:  mov    %eax,0x4(%esp)
085caca2 +0x08c:  mov    0x8(%ebp),%eax
085caca5 +0x08f:  mov    %eax,(%esp)
085caca8 +0x092:  call   085ca874 <_ZN13private_store16CPrivateStoreMgr15FreeStoreSellerEP5CUser>  ; private_store::CPrivateStoreMgr::FreeStoreSeller(CUser*)
085cacad +0x097:  jmp    085cad57 <+0x141>
085cacb2 +0x09c:  mov    0xc(%ebp),%eax
085cacb5 +0x09f:  mov    %eax,(%esp)
085cacb8 +0x0a2:  call   0865c65c <_ZN5CUser24IsPermissionPrivateStoreEv>  ; CUser::IsPermissionPrivateStore()
085cacbd +0x0a7:  test   %al,%al
085cacbf +0x0a9:  je     085cad57 <+0x141>
085cacc5 +0x0af:  lea    -0x20(%ebp),%eax
085cacc8 +0x0b2:  mov    %eax,(%esp)
085caccb +0x0b5:  call   085cb972 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x688>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x688
085cacd0 +0x0ba:  mov    0x10(%ebp),%eax
085cacd3 +0x0bd:  mov    %eax,0x4(%esp)
085cacd7 +0x0c1:  lea    -0x20(%ebp),%eax
085cacda +0x0c4:  mov    %eax,(%esp)
085cacdd +0x0c7:  call   085cc5bc <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x12d2>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x12d2
085cace2 +0x0cc:  mov    %eax,-0x10(%ebp)
085cace5 +0x0cf:  lea    -0x20(%ebp),%eax
085cace8 +0x0d2:  mov    %eax,0x4(%esp)
085cacec +0x0d6:  mov    0xc(%ebp),%eax
085cacef +0x0d9:  mov    %eax,(%esp)
085cacf2 +0x0dc:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085cacf7 +0x0e1:  cmpl   $0x0,-0x10(%ebp)
085cacfb +0x0e5:  je     085cad4c <+0x136>
085cacfd +0x0e7:  mov    0xc(%ebp),%eax
085cad00 +0x0ea:  mov    %eax,0x8(%esp)
085cad04 +0x0ee:  lea    -0x24(%ebp),%eax
085cad07 +0x0f1:  mov    %eax,0x4(%esp)
085cad0b +0x0f5:  mov    0x8(%ebp),%eax
085cad0e +0x0f8:  mov    %eax,(%esp)
085cad11 +0x0fb:  call   085ca698 <_ZN13private_store16CPrivateStoreMgr14GetStoreSellerEPPNS_7ISellerEP5CUser>  ; private_store::CPrivateStoreMgr::GetStoreSeller(private_store::ISeller**, CUser*)
085cad16 +0x100:  mov    -0x24(%ebp),%eax
085cad19 +0x103:  mov    (%eax),%eax
085cad1b +0x105:  add    $0x14,%eax
085cad1e +0x108:  mov    (%eax),%ecx
085cad20 +0x10a:  mov    -0x24(%ebp),%eax
085cad23 +0x10d:  mov    0x10(%ebp),%edx
085cad26 +0x110:  mov    %edx,0x4(%esp)
085cad2a +0x114:  mov    %eax,(%esp)
085cad2d +0x117:  call   *%ecx
085cad2f +0x119:  jmp    085cad4c <+0x136>
085cad31 +0x11b:  mov    %edx,%ebx
085cad33 +0x11d:  mov    %eax,%esi
085cad35 +0x11f:  lea    -0x20(%ebp),%eax
085cad38 +0x122:  mov    %eax,(%esp)
085cad3b +0x125:  call   085ccaac <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x17c2>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x17c2
085cad40 +0x12a:  mov    %esi,%eax
085cad42 +0x12c:  mov    %ebx,%edx
085cad44 +0x12e:  mov    %eax,(%esp)
085cad47 +0x131:  call   08ae3750 <_Unwind_Resume>
085cad4c +0x136:  lea    -0x20(%ebp),%eax
085cad4f +0x139:  mov    %eax,(%esp)
085cad52 +0x13c:  call   085ccaac <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x17c2>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x17c2
085cad57 +0x141:  add    $0x30,%esp
085cad5a +0x144:  pop    %ebx
085cad5b +0x145:  pop    %esi
085cad5c +0x146:  pop    %ebp
085cad5d +0x147:  ret
```

## 反编译 C

```c
// private_store::CPrivateStoreMgr::LoadPrivateStoreResponse @ 0x85cac16

/* private_store::CPrivateStoreMgr::LoadPrivateStoreResponse(CUser*,
   private_store::SIG_PRIVATE_STORE*) */

void __thiscall
private_store::CPrivateStoreMgr::LoadPrivateStoreResponse
          (CPrivateStoreMgr *this,CUser *param_1,SIG_PRIVATE_STORE *param_2)

{
  char cVar1;
  ISeller *local_28;
  CPacketBufPrivate local_24 [12];
  CPrivateStore *local_18;
  int local_14;
  CPrivateStore *local_10;
  
  local_14 = 0;
  if (*(int *)(param_2 + 0x430) == 1) {
    GetStoreSeller(this,(ISeller **)&local_18,param_1);
    local_10 = local_18;
    CPrivateStore::ResetItems(local_18);
    CPrivateStore::CopyItems(local_10,(PrivateStoreItem *)(param_2 + 8),0xe);
    CPrivateStore::RecallPrivateStoreItemToMail(local_10);
    CPrivateStore::SavePrivateStore(local_10);
    CPrivateStore::Clear(local_10);
    FreeStoreSeller((CUser *)this);
  }
  else {
    cVar1 = CUser::IsPermissionPrivateStore(param_1);
    if (cVar1 != '\0') {
      CPacketBufPrivate::CPacketBufPrivate(local_24);
                    /* try { // try from 085cacdd to 085cad2e has its CatchHandler @ 085cad31 */
      local_14 = CPacketBufPrivate::MakeNotipacketPrivateStoreInfo(local_24,param_2);
      CUser::Send(param_1,(PacketGuard *)local_24);
      if (local_14 != 0) {
        GetStoreSeller(this,&local_28,param_1);
        (**(code **)(*(int *)local_28 + 0x14))(local_28,param_2);
      }
      CPacketBufPrivate::~CPacketBufPrivate(local_24);
    }
  }
  return;
}
```
