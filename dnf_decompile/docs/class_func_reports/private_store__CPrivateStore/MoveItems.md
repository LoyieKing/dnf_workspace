# MoveItems

`_ZN13private_store13CPrivateStore9MoveItemsEv`

`private_store::CPrivateStore::MoveItems()`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c7246` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c7246  _ZN13private_store13CPrivateStore9MoveItemsEv
#           private_store::CPrivateStore::MoveItems()
# range [0x085c7246, 0x085c7519]
085c7246 +0x000:  push   %ebp
085c7247 +0x001:  mov    %esp,%ebp
085c7249 +0x003:  push   %ebx
085c724a +0x004:  sub    $0x34,%esp
085c724d +0x007:  movl   $0x0,-0x10(%ebp)
085c7254 +0x00e:  movl   $0x0,-0x10(%ebp)
085c725b +0x015:  jmp    085c73c8 <+0x182>
085c7260 +0x01a:  mov    -0x10(%ebp),%eax
085c7263 +0x01d:  mov    0x8(%ebp),%edx
085c7266 +0x020:  add    $0x3c,%edx
085c7269 +0x023:  mov    %eax,0x4(%esp)
085c726d +0x027:  mov    %edx,(%esp)
085c7270 +0x02a:  call   085ccf06 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1c1c>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1c1c
085c7275 +0x02f:  mov    %eax,(%esp)
085c7278 +0x032:  call   085cb662 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x378>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x378
085c727d +0x037:  cmp    $0x1,%al
085c727f +0x039:  sete   %al
085c7282 +0x03c:  test   %al,%al
085c7284 +0x03e:  je     085c73c4 <+0x17e>
085c728a +0x044:  mov    -0x10(%ebp),%eax
085c728d +0x047:  mov    0x8(%ebp),%edx
085c7290 +0x04a:  add    $0x3c,%edx
085c7293 +0x04d:  mov    %eax,0x4(%esp)
085c7297 +0x051:  mov    %edx,(%esp)
085c729a +0x054:  call   085ccf06 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1c1c>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1c1c
085c729f +0x059:  mov    0x7(%eax),%eax
085c72a2 +0x05c:  mov    %eax,-0xc(%ebp)
085c72a5 +0x05f:  mov    -0x10(%ebp),%eax
085c72a8 +0x062:  mov    0x8(%ebp),%edx
085c72ab +0x065:  add    $0x3c,%edx
085c72ae +0x068:  mov    %eax,0x4(%esp)
085c72b2 +0x06c:  mov    %edx,(%esp)
085c72b5 +0x06f:  call   085ccf06 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1c1c>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1c1c
085c72ba +0x074:  mov    0x8(%ebp),%edx
085c72bd +0x077:  mov    0x2c(%edx),%edx
085c72c0 +0x07a:  mov    %eax,0x8(%esp)
085c72c4 +0x07e:  mov    %edx,0x4(%esp)
085c72c8 +0x082:  mov    0x8(%ebp),%eax
085c72cb +0x085:  mov    %eax,(%esp)
085c72ce +0x088:  call   085c9f22 <_ZN13private_store13CPrivateStore11GetItemInfoEP5CUserRNS_16PrivateStoreItemE>  ; private_store::CPrivateStore::GetItemInfo(CUser*, private_store::PrivateStoreItem&)
085c72d3 +0x08d:  test   %al,%al
085c72d5 +0x08f:  je     085c7399 <+0x153>
085c72db +0x095:  mov    -0x10(%ebp),%eax
085c72de +0x098:  mov    0x8(%ebp),%edx
085c72e1 +0x09b:  add    $0x3c,%edx
085c72e4 +0x09e:  mov    %eax,0x4(%esp)
085c72e8 +0x0a2:  mov    %edx,(%esp)
085c72eb +0x0a5:  call   085ccf06 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1c1c>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1c1c
085c72f0 +0x0aa:  movb   $0x2,0x3d(%eax)
085c72f4 +0x0ae:  mov    -0x10(%ebp),%eax
085c72f7 +0x0b1:  mov    0x8(%ebp),%edx
085c72fa +0x0b4:  add    $0x3c,%edx
085c72fd +0x0b7:  mov    %eax,0x4(%esp)
085c7301 +0x0bb:  mov    %edx,(%esp)
085c7304 +0x0be:  call   085ccf06 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1c1c>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1c1c
085c7309 +0x0c3:  movzbl 0x1(%eax),%eax
085c730d +0x0c7:  cmp    $0x8,%al
085c730f +0x0c9:  setne  %al
085c7312 +0x0cc:  test   %al,%al
085c7314 +0x0ce:  je     085c7336 <+0xf0>
085c7316 +0x0d0:  mov    -0x10(%ebp),%eax
085c7319 +0x0d3:  mov    0x8(%ebp),%edx
085c731c +0x0d6:  add    $0x3c,%edx
085c731f +0x0d9:  mov    %eax,0x4(%esp)
085c7323 +0x0dd:  mov    %edx,(%esp)
085c7326 +0x0e0:  call   085ccf06 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1c1c>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1c1c
085c732b +0x0e5:  mov    -0xc(%ebp),%edx
085c732e +0x0e8:  mov    %edx,0x7(%eax)
085c7331 +0x0eb:  jmp    085c73c4 <+0x17e>
085c7336 +0x0f0:  mov    -0x10(%ebp),%eax
085c7339 +0x0f3:  mov    0x8(%ebp),%edx
085c733c +0x0f6:  add    $0x3c,%edx
085c733f +0x0f9:  mov    %eax,0x4(%esp)
085c7343 +0x0fd:  mov    %edx,(%esp)
085c7346 +0x100:  call   085ccf06 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1c1c>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1c1c
085c734b +0x105:  mov    0x7(%eax),%ebx
085c734e +0x108:  mov    0x8(%ebp),%eax
085c7351 +0x10b:  mov    0x2c(%eax),%eax
085c7354 +0x10e:  mov    %eax,(%esp)
085c7357 +0x111:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085c735c +0x116:  mov    %eax,(%esp)
085c735f +0x119:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
085c7364 +0x11e:  mov    %ebx,0x4(%esp)
085c7368 +0x122:  mov    %eax,(%esp)
085c736b +0x125:  call   082f981a <_ZNK8WongWork14CAvatarItemMgr13GetExpireDateEi>  ; WongWork::CAvatarItemMgr::GetExpireDate(int) const
085c7370 +0x12a:  test   %eax,%eax
085c7372 +0x12c:  setne  %al
085c7375 +0x12f:  test   %al,%al
085c7377 +0x131:  je     085c73c4 <+0x17e>
085c7379 +0x133:  mov    0x8(%ebp),%eax
085c737c +0x136:  add    $0x14,%eax
085c737f +0x139:  movl   $0x11,0x4(%esp)
085c7387 +0x141:  mov    %eax,(%esp)
085c738a +0x144:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c738f +0x149:  mov    $0x0,%eax
085c7394 +0x14e:  jmp    085c7513 <+0x2cd>
085c7399 +0x153:  mov    0x8(%ebp),%eax
085c739c +0x156:  mov    %eax,(%esp)
085c739f +0x159:  call   085c4f52 <_ZN13private_store13CPrivateStore10ResetItemsEv>  ; private_store::CPrivateStore::ResetItems()
085c73a4 +0x15e:  mov    0x8(%ebp),%eax
085c73a7 +0x161:  add    $0x14,%eax
085c73aa +0x164:  movl   $0x11,0x4(%esp)
085c73b2 +0x16c:  mov    %eax,(%esp)
085c73b5 +0x16f:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c73ba +0x174:  mov    $0x0,%eax
085c73bf +0x179:  jmp    085c7513 <+0x2cd>
085c73c4 +0x17e:  addl   $0x1,-0x10(%ebp)
085c73c8 +0x182:  cmpl   $0xd,-0x10(%ebp)
085c73cc +0x186:  setle  %al
085c73cf +0x189:  test   %al,%al
085c73d1 +0x18b:  jne    085c7260 <+0x1a>
085c73d7 +0x191:  mov    0x8(%ebp),%eax
085c73da +0x194:  mov    %eax,(%esp)
085c73dd +0x197:  call   085c76f0 <_ZN13private_store13CPrivateStore19CheckTotalItemPriceEv>  ; private_store::CPrivateStore::CheckTotalItemPrice()
085c73e2 +0x19c:  xor    $0x1,%eax
085c73e5 +0x19f:  test   %al,%al
085c73e7 +0x1a1:  je     085c7414 <+0x1ce>
085c73e9 +0x1a3:  mov    0x8(%ebp),%eax
085c73ec +0x1a6:  mov    %eax,(%esp)
085c73ef +0x1a9:  call   085c4f52 <_ZN13private_store13CPrivateStore10ResetItemsEv>  ; private_store::CPrivateStore::ResetItems()
085c73f4 +0x1ae:  mov    0x8(%ebp),%eax
085c73f7 +0x1b1:  add    $0x14,%eax
085c73fa +0x1b4:  movl   $0x11,0x4(%esp)
085c7402 +0x1bc:  mov    %eax,(%esp)
085c7405 +0x1bf:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c740a +0x1c4:  mov    $0x0,%eax
085c740f +0x1c9:  jmp    085c7513 <+0x2cd>
085c7414 +0x1ce:  movl   $0x0,-0x10(%ebp)
085c741b +0x1d5:  jmp    085c74ff <+0x2b9>
085c7420 +0x1da:  mov    -0x10(%ebp),%eax
085c7423 +0x1dd:  mov    0x8(%ebp),%edx
085c7426 +0x1e0:  add    $0x3c,%edx
085c7429 +0x1e3:  mov    %eax,0x4(%esp)
085c742d +0x1e7:  mov    %edx,(%esp)
085c7430 +0x1ea:  call   085ccf06 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1c1c>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1c1c
085c7435 +0x1ef:  mov    %eax,(%esp)
085c7438 +0x1f2:  call   085cb662 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x378>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x378
085c743d +0x1f7:  cmp    $0x2,%al
085c743f +0x1f9:  sete   %al
085c7442 +0x1fc:  test   %al,%al
085c7444 +0x1fe:  je     085c74fb <+0x2b5>
085c744a +0x204:  mov    -0x10(%ebp),%eax
085c744d +0x207:  mov    0x8(%ebp),%edx
085c7450 +0x20a:  add    $0x3c,%edx
085c7453 +0x20d:  mov    %eax,0x4(%esp)
085c7457 +0x211:  mov    %edx,(%esp)
085c745a +0x214:  call   085ccf06 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1c1c>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1c1c
085c745f +0x219:  mov    %eax,0x4(%esp)
085c7463 +0x21d:  mov    0x8(%ebp),%eax
085c7466 +0x220:  mov    %eax,(%esp)
085c7469 +0x223:  call   085c68b4 <_ZN13private_store13CPrivateStore10DeleteItemERNS_16PrivateStoreItemE>  ; private_store::CPrivateStore::DeleteItem(private_store::PrivateStoreItem&)
085c746e +0x228:  test   %al,%al
085c7470 +0x22a:  je     085c748d <+0x247>
085c7472 +0x22c:  mov    -0x10(%ebp),%eax
085c7475 +0x22f:  mov    0x8(%ebp),%edx
085c7478 +0x232:  add    $0x3c,%edx
085c747b +0x235:  mov    %eax,0x4(%esp)
085c747f +0x239:  mov    %edx,(%esp)
085c7482 +0x23c:  call   085ccf06 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1c1c>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1c1c
085c7487 +0x241:  movb   $0x3,0x3d(%eax)
085c748b +0x245:  jmp    085c74fb <+0x2b5>
085c748d +0x247:  movl   $0x5,0xc(%esp)
085c7495 +0x24f:  movl   $0x637,0x8(%esp)
085c749d +0x257:  movl   $&_ZZN13private_store13CPrivateStore9MoveItemsEvE19__PRETTY_FUNCTION__,0x4(%esp)
085c74a5 +0x25f:  lea    -0x20(%ebp),%eax
085c74a8 +0x262:  mov    %eax,(%esp)
085c74ab +0x265:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085c74b0 +0x26a:  movl   $0x637,0xc(%esp)
085c74b8 +0x272:  movl   $&_ZZN13private_store13CPrivateStore9MoveItemsEvE19__PRETTY_FUNCTION__,0x8(%esp)
085c74c0 +0x27a:  movl   $"CPrivateStore [%s][%d]",0x4(%esp)
085c74c8 +0x282:  lea    -0x20(%ebp),%eax
085c74cb +0x285:  mov    %eax,(%esp)
085c74ce +0x288:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085c74d3 +0x28d:  mov    0x8(%ebp),%eax
085c74d6 +0x290:  mov    %eax,(%esp)
085c74d9 +0x293:  call   085c4f52 <_ZN13private_store13CPrivateStore10ResetItemsEv>  ; private_store::CPrivateStore::ResetItems()
085c74de +0x298:  mov    0x8(%ebp),%eax
085c74e1 +0x29b:  add    $0x14,%eax
085c74e4 +0x29e:  movl   $0x11,0x4(%esp)
085c74ec +0x2a6:  mov    %eax,(%esp)
085c74ef +0x2a9:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c74f4 +0x2ae:  mov    $0x0,%eax
085c74f9 +0x2b3:  jmp    085c7513 <+0x2cd>
085c74fb +0x2b5:  addl   $0x1,-0x10(%ebp)
085c74ff +0x2b9:  cmpl   $0xd,-0x10(%ebp)
085c7503 +0x2bd:  setle  %al
085c7506 +0x2c0:  test   %al,%al
085c7508 +0x2c2:  jne    085c7420 <+0x1da>
085c750e +0x2c8:  mov    $0x1,%eax
085c7513 +0x2cd:  add    $0x34,%esp
085c7516 +0x2d0:  pop    %ebx
085c7517 +0x2d1:  pop    %ebp
085c7518 +0x2d2:  ret
085c7519 +0x2d3:  nop
```

## 反编译 C

```c
// private_store::CPrivateStore::MoveItems @ 0x85c7246

/* private_store::CPrivateStore::MoveItems() */

undefined4 __thiscall private_store::CPrivateStore::MoveItems(CPrivateStore *this)

{
  char cVar1;
  CInventory *this_00;
  CAvatarItemMgr *this_01;
  undefined4 uVar2;
  PrivateStoreItem *pPVar3;
  int iVar4;
  cMyTrace local_24 [16];
  uint local_14;
  undefined4 local_10;
  
  for (local_14 = 0; (int)local_14 < 0xe; local_14 = local_14 + 1) {
    pPVar3 = (PrivateStoreItem *)
             std::
             vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
             ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                           *)(this + 0x3c),local_14);
    cVar1 = PrivateStoreItem::GetState(pPVar3);
    if (cVar1 == '\x01') {
      iVar4 = std::
              vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
              ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                            *)(this + 0x3c),local_14);
      local_10 = *(undefined4 *)(iVar4 + 7);
      pPVar3 = (PrivateStoreItem *)
               std::
               vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
               ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                             *)(this + 0x3c),local_14);
      cVar1 = GetItemInfo(this,*(CUser **)(this + 0x2c),pPVar3);
      if (cVar1 == '\0') {
        ResetItems(this);
        CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x11);
        return 0;
      }
      iVar4 = std::
              vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
              ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                            *)(this + 0x3c),local_14);
      *(undefined1 *)(iVar4 + 0x3d) = 2;
      iVar4 = std::
              vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
              ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                            *)(this + 0x3c),local_14);
      if (*(char *)(iVar4 + 1) == '\b') {
        iVar4 = std::
                vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                              *)(this + 0x3c),local_14);
        iVar4 = *(int *)(iVar4 + 7);
        this_00 = (CInventory *)
                  CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x2c));
        this_01 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(this_00);
        iVar4 = WongWork::CAvatarItemMgr::GetExpireDate(this_01,iVar4);
        if (iVar4 != 0) {
          CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x11);
          return 0;
        }
      }
      else {
        iVar4 = std::
                vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                              *)(this + 0x3c),local_14);
        *(undefined4 *)(iVar4 + 7) = local_10;
      }
    }
  }
  cVar1 = CheckTotalItemPrice(this);
  if (cVar1 == '\x01') {
    for (local_14 = 0; (int)local_14 < 0xe; local_14 = local_14 + 1) {
      pPVar3 = (PrivateStoreItem *)
               std::
               vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
               ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                             *)(this + 0x3c),local_14);
      cVar1 = PrivateStoreItem::GetState(pPVar3);
      if (cVar1 == '\x02') {
        pPVar3 = (PrivateStoreItem *)
                 std::
                 vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                 ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                               *)(this + 0x3c),local_14);
        cVar1 = DeleteItem(this,pPVar3);
        if (cVar1 == '\0') {
          cMyTrace::cMyTrace(local_24,"bool private_store::CPrivateStore::MoveItems()",0x637,5);
          cMyTrace::operator()
                    (local_24,"CPrivateStore [%s][%d]",
                     "bool private_store::CPrivateStore::MoveItems()",0x637);
          ResetItems(this);
          CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x11);
          return 0;
        }
        iVar4 = std::
                vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                              *)(this + 0x3c),local_14);
        *(undefined1 *)(iVar4 + 0x3d) = 3;
      }
    }
    uVar2 = 1;
  }
  else {
    ResetItems(this);
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x11);
    uVar2 = 0;
  }
  return uVar2;
}
```
