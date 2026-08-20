# ~CPrivateStoreMgr

`_ZN13private_store16CPrivateStoreMgrD1Ev`

`private_store::CPrivateStoreMgr::~CPrivateStoreMgr()`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStoreMgr` | `0x085ca4fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ca4fe  _ZN13private_store16CPrivateStoreMgrD1Ev
#           private_store::CPrivateStoreMgr::~CPrivateStoreMgr()
# range [0x085ca4fe, 0x085ca697]
085ca4fe +0x000:  push   %ebp
085ca4ff +0x001:  mov    %esp,%ebp
085ca501 +0x003:  push   %esi
085ca502 +0x004:  push   %ebx
085ca503 +0x005:  sub    $0x20,%esp
085ca506 +0x008:  mov    0x8(%ebp),%eax
085ca509 +0x00b:  movl   $&_ZTVN13private_store16CPrivateStoreMgrE+0x8,(%eax)
085ca50f +0x011:  mov    0x8(%ebp),%eax
085ca512 +0x014:  lea    0xc8(%eax),%edx
085ca518 +0x01a:  lea    -0x18(%ebp),%eax
085ca51b +0x01d:  mov    %edx,0x4(%esp)
085ca51f +0x021:  mov    %eax,(%esp)
085ca522 +0x024:  call   085cd490 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x21a6>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x21a6
085ca527 +0x029:  sub    $0x4,%esp
085ca52a +0x02c:  jmp    085ca57e <+0x80>
085ca52c +0x02e:  lea    -0x18(%ebp),%eax
085ca52f +0x031:  mov    %eax,(%esp)
085ca532 +0x034:  call   085cd52e <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x2244>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x2244
085ca537 +0x039:  mov    0x4(%eax),%eax
085ca53a +0x03c:  mov    %eax,-0xc(%ebp)
085ca53d +0x03f:  cmpl   $0x0,-0xc(%ebp)
085ca541 +0x043:  je     085ca561 <+0x63>
085ca543 +0x045:  mov    -0xc(%ebp),%ebx
085ca546 +0x048:  test   %ebx,%ebx
085ca548 +0x04a:  je     085ca55a <+0x5c>
085ca54a +0x04c:  mov    %ebx,(%esp)
085ca54d +0x04f:  call   085ccb2c <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1842>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1842
085ca552 +0x054:  mov    %ebx,(%esp)
085ca555 +0x057:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085ca55a +0x05c:  movl   $0x0,-0xc(%ebp)
085ca561 +0x063:  lea    -0x10(%ebp),%eax
085ca564 +0x066:  movl   $0x0,0x8(%esp)
085ca56c +0x06e:  lea    -0x18(%ebp),%edx
085ca56f +0x071:  mov    %edx,0x4(%esp)
085ca573 +0x075:  mov    %eax,(%esp)
085ca576 +0x078:  call   085cd4f0 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x2206>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x2206
085ca57b +0x07d:  sub    $0x4,%esp
085ca57e +0x080:  mov    0x8(%ebp),%eax
085ca581 +0x083:  lea    0xc8(%eax),%edx
085ca587 +0x089:  lea    -0x14(%ebp),%eax
085ca58a +0x08c:  mov    %edx,0x4(%esp)
085ca58e +0x090:  mov    %eax,(%esp)
085ca591 +0x093:  call   085cd4b6 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x21cc>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x21cc
085ca596 +0x098:  sub    $0x4,%esp
085ca599 +0x09b:  lea    -0x14(%ebp),%eax
085ca59c +0x09e:  mov    %eax,0x4(%esp)
085ca5a0 +0x0a2:  lea    -0x18(%ebp),%eax
085ca5a3 +0x0a5:  mov    %eax,(%esp)
085ca5a6 +0x0a8:  call   085cd4dc <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x21f2>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x21f2
085ca5ab +0x0ad:  test   %al,%al
085ca5ad +0x0af:  jne    085ca52c <+0x2e>
085ca5b3 +0x0b5:  jmp    085ca5cf <+0xd1>
085ca5b5 +0x0b7:  mov    %edx,%ebx
085ca5b7 +0x0b9:  mov    %eax,%esi
085ca5b9 +0x0bb:  mov    0x8(%ebp),%eax
085ca5bc +0x0be:  add    $0xc8,%eax
085ca5c1 +0x0c3:  mov    %eax,(%esp)
085ca5c4 +0x0c6:  call   085cb95e <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x674>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x674
085ca5c9 +0x0cb:  mov    %esi,%eax
085ca5cb +0x0cd:  mov    %ebx,%edx
085ca5cd +0x0cf:  jmp    085ca5e1 <+0xe3>
085ca5cf +0x0d1:  mov    0x8(%ebp),%eax
085ca5d2 +0x0d4:  add    $0xc8,%eax
085ca5d7 +0x0d9:  mov    %eax,(%esp)
085ca5da +0x0dc:  call   085cb95e <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x674>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x674
085ca5df +0x0e1:  jmp    085ca5fb <+0xfd>
085ca5e1 +0x0e3:  mov    %edx,%ebx
085ca5e3 +0x0e5:  mov    %eax,%esi
085ca5e5 +0x0e7:  mov    0x8(%ebp),%eax
085ca5e8 +0x0ea:  add    $0xb0,%eax
085ca5ed +0x0ef:  mov    %eax,(%esp)
085ca5f0 +0x0f2:  call   085cb94a <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x660>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x660
085ca5f5 +0x0f7:  mov    %esi,%eax
085ca5f7 +0x0f9:  mov    %ebx,%edx
085ca5f9 +0x0fb:  jmp    085ca60d <+0x10f>
085ca5fb +0x0fd:  mov    0x8(%ebp),%eax
085ca5fe +0x100:  add    $0xb0,%eax
085ca603 +0x105:  mov    %eax,(%esp)
085ca606 +0x108:  call   085cb94a <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x660>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x660
085ca60b +0x10d:  jmp    085ca627 <+0x129>
085ca60d +0x10f:  mov    %edx,%ebx
085ca60f +0x111:  mov    %eax,%esi
085ca611 +0x113:  mov    0x8(%ebp),%eax
085ca614 +0x116:  add    $0x98,%eax
085ca619 +0x11b:  mov    %eax,(%esp)
085ca61c +0x11e:  call   085cb94a <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x660>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x660
085ca621 +0x123:  mov    %esi,%eax
085ca623 +0x125:  mov    %ebx,%edx
085ca625 +0x127:  jmp    085ca639 <+0x13b>
085ca627 +0x129:  mov    0x8(%ebp),%eax
085ca62a +0x12c:  add    $0x98,%eax
085ca62f +0x131:  mov    %eax,(%esp)
085ca632 +0x134:  call   085cb94a <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x660>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x660
085ca637 +0x139:  jmp    085ca651 <+0x153>
085ca639 +0x13b:  mov    %edx,%ebx
085ca63b +0x13d:  mov    %eax,%esi
085ca63d +0x13f:  mov    0x8(%ebp),%eax
085ca640 +0x142:  add    $0x68,%eax
085ca643 +0x145:  mov    %eax,(%esp)
085ca646 +0x148:  call   085ccd90 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1aa6>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1aa6
085ca64b +0x14d:  mov    %esi,%eax
085ca64d +0x14f:  mov    %ebx,%edx
085ca64f +0x151:  jmp    085ca661 <+0x163>
085ca651 +0x153:  mov    0x8(%ebp),%eax
085ca654 +0x156:  add    $0x68,%eax
085ca657 +0x159:  mov    %eax,(%esp)
085ca65a +0x15c:  call   085ccd90 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1aa6>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1aa6
085ca65f +0x161:  jmp    085ca67f <+0x181>
085ca661 +0x163:  mov    %edx,%ebx
085ca663 +0x165:  mov    %eax,%esi
085ca665 +0x167:  mov    0x8(%ebp),%eax
085ca668 +0x16a:  add    $0x4,%eax
085ca66b +0x16d:  mov    %eax,(%esp)
085ca66e +0x170:  call   085c4ecc <_ZN13private_store13CPrivateStoreD1Ev>  ; private_store::CPrivateStore::~CPrivateStore()
085ca673 +0x175:  mov    %esi,%eax
085ca675 +0x177:  mov    %ebx,%edx
085ca677 +0x179:  mov    %eax,(%esp)
085ca67a +0x17c:  call   08ae3750 <_Unwind_Resume>
085ca67f +0x181:  mov    0x8(%ebp),%eax
085ca682 +0x184:  add    $0x4,%eax
085ca685 +0x187:  mov    %eax,(%esp)
085ca688 +0x18a:  call   085c4ecc <_ZN13private_store13CPrivateStoreD1Ev>  ; private_store::CPrivateStore::~CPrivateStore()
085ca68d +0x18f:  lea    -0x8(%ebp),%esp
085ca690 +0x192:  add    $0x0,%esp
085ca693 +0x195:  pop    %ebx
085ca694 +0x196:  pop    %esi
085ca695 +0x197:  pop    %ebp
085ca696 +0x198:  ret
085ca697 +0x199:  nop
```

## 反编译 C

```c
// private_store::CPrivateStoreMgr::~CPrivateStoreMgr @ 0x85ca4fe

/* private_store::CPrivateStoreMgr::~CPrivateStoreMgr() */

void __thiscall private_store::CPrivateStoreMgr::~CPrivateStoreMgr(CPrivateStoreMgr *this)

{
  list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>> *this_00;
  char cVar1;
  int iVar2;
  map<private_store::PrivateStoreZone,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*,std::less<private_store::PrivateStoreZone>,std::allocator<std::pair<private_store::PrivateStoreZone_const,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*>>>
  local_1c [4];
  map<private_store::PrivateStoreZone,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*,std::less<private_store::PrivateStoreZone>,std::allocator<std::pair<private_store::PrivateStoreZone_const,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<private_store::PrivateStoreZone_const,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*>>
  local_14 [4];
  list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>> *local_10;
  
  *(undefined ***)this = &PTR_Exit_08cbeb40;
                    /* try { // try from 085ca522 to 085ca595 has its CatchHandler @ 085ca5b5 */
  std::
  map<private_store::PrivateStoreZone,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*,std::less<private_store::PrivateStoreZone>,std::allocator<std::pair<private_store::PrivateStoreZone_const,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*>>>
  ::begin(local_1c);
  while( true ) {
    std::
    map<private_store::PrivateStoreZone,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*,std::less<private_store::PrivateStoreZone>,std::allocator<std::pair<private_store::PrivateStoreZone_const,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*>>>
    ::end(local_18);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<private_store::PrivateStoreZone_const,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*>>
            ::operator!=((_Rb_tree_iterator<std::pair<private_store::PrivateStoreZone_const,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*>>
                          *)local_1c,(_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    iVar2 = std::
            _Rb_tree_iterator<std::pair<private_store::PrivateStoreZone_const,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*>>
            ::operator->((_Rb_tree_iterator<std::pair<private_store::PrivateStoreZone_const,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*>>
                          *)local_1c);
    this_00 = *(list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>> **
               )(iVar2 + 4);
    local_10 = this_00;
    if (this_00 !=
        (list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>> *)0x0) {
      if (this_00 !=
          (list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>> *)0x0)
      {
        std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>::
        ~list(this_00);
        operator_delete(this_00);
      }
      local_10 = (list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>
                  *)0x0;
    }
    std::
    _Rb_tree_iterator<std::pair<private_store::PrivateStoreZone_const,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*>>
    ::operator++(local_14,(int)local_1c);
  }
                    /* try { // try from 085ca5da to 085ca5de has its CatchHandler @ 085ca5e1 */
  std::
  map<private_store::PrivateStoreZone,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*,std::less<private_store::PrivateStoreZone>,std::allocator<std::pair<private_store::PrivateStoreZone_const,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*>>>
  ::~map((map<private_store::PrivateStoreZone,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*,std::less<private_store::PrivateStoreZone>,std::allocator<std::pair<private_store::PrivateStoreZone_const,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*>>>
          *)(this + 200));
                    /* try { // try from 085ca606 to 085ca60a has its CatchHandler @ 085ca60d */
  std::
  map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
  ::~map((map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
          *)(this + 0xb0));
                    /* try { // try from 085ca632 to 085ca636 has its CatchHandler @ 085ca639 */
  std::
  map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
  ::~map((map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
          *)(this + 0x98));
                    /* try { // try from 085ca65a to 085ca65e has its CatchHandler @ 085ca661 */
  StaticPool<private_store::CPrivateStore,300>::~StaticPool
            ((StaticPool<private_store::CPrivateStore,300> *)(this + 0x68));
  CPrivateStore::~CPrivateStore((CPrivateStore *)(this + 4));
  return;
}
```
