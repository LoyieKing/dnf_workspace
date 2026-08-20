# CPrivateStoreMgr

`_ZN13private_store16CPrivateStoreMgrC1Ev`

`private_store::CPrivateStoreMgr::CPrivateStoreMgr()`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStoreMgr` | `0x085ca3d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ca3d6  _ZN13private_store16CPrivateStoreMgrC1Ev
#           private_store::CPrivateStoreMgr::CPrivateStoreMgr()
# range [0x085ca3d6, 0x085ca4fd]
085ca3d6 +0x000:  push   %ebp
085ca3d7 +0x001:  mov    %esp,%ebp
085ca3d9 +0x003:  push   %esi
085ca3da +0x004:  push   %ebx
085ca3db +0x005:  sub    $0x10,%esp
085ca3de +0x008:  mov    0x8(%ebp),%eax
085ca3e1 +0x00b:  mov    %eax,(%esp)
085ca3e4 +0x00e:  call   085cb93c <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x652>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x652
085ca3e9 +0x013:  mov    0x8(%ebp),%eax
085ca3ec +0x016:  movl   $&_ZTVN13private_store16CPrivateStoreMgrE+0x8,(%eax)
085ca3f2 +0x01c:  mov    0x8(%ebp),%eax
085ca3f5 +0x01f:  add    $0x4,%eax
085ca3f8 +0x022:  mov    %eax,(%esp)
085ca3fb +0x025:  call   085c4d10 <_ZN13private_store13CPrivateStoreC1Ev>  ; private_store::CPrivateStore::CPrivateStore()
085ca400 +0x02a:  mov    0x8(%ebp),%eax
085ca403 +0x02d:  add    $0x68,%eax
085ca406 +0x030:  mov    %eax,(%esp)
085ca409 +0x033:  call   085ccbee <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1904>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1904
085ca40e +0x038:  mov    0x8(%ebp),%eax
085ca411 +0x03b:  add    $0x98,%eax
085ca416 +0x040:  mov    %eax,(%esp)
085ca419 +0x043:  call   085cce12 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1b28>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1b28
085ca41e +0x048:  mov    0x8(%ebp),%eax
085ca421 +0x04b:  add    $0xb0,%eax
085ca426 +0x050:  mov    %eax,(%esp)
085ca429 +0x053:  call   085cce12 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1b28>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1b28
085ca42e +0x058:  mov    0x8(%ebp),%eax
085ca431 +0x05b:  add    $0xc8,%eax
085ca436 +0x060:  mov    %eax,(%esp)
085ca439 +0x063:  call   085cce8c <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1ba2>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1ba2
085ca43e +0x068:  mov    0x8(%ebp),%eax
085ca441 +0x06b:  add    $0x98,%eax
085ca446 +0x070:  mov    %eax,(%esp)
085ca449 +0x073:  call   085cd468 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x217e>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x217e
085ca44e +0x078:  mov    0x8(%ebp),%eax
085ca451 +0x07b:  add    $0xb0,%eax
085ca456 +0x080:  mov    %eax,(%esp)
085ca459 +0x083:  call   085cd468 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x217e>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x217e
085ca45e +0x088:  mov    0x8(%ebp),%eax
085ca461 +0x08b:  add    $0xc8,%eax
085ca466 +0x090:  mov    %eax,(%esp)
085ca469 +0x093:  call   085cd47c <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x2192>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x2192
085ca46e +0x098:  jmp    085ca4f7 <+0x121>
085ca473 +0x09d:  mov    %edx,%ebx
085ca475 +0x09f:  mov    %eax,%esi
085ca477 +0x0a1:  mov    0x8(%ebp),%eax
085ca47a +0x0a4:  add    $0xc8,%eax
085ca47f +0x0a9:  mov    %eax,(%esp)
085ca482 +0x0ac:  call   085cb95e <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x674>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x674
085ca487 +0x0b1:  mov    %esi,%eax
085ca489 +0x0b3:  mov    %ebx,%edx
085ca48b +0x0b5:  jmp    085ca48d <+0xb7>
085ca48d +0x0b7:  mov    %edx,%ebx
085ca48f +0x0b9:  mov    %eax,%esi
085ca491 +0x0bb:  mov    0x8(%ebp),%eax
085ca494 +0x0be:  add    $0xb0,%eax
085ca499 +0x0c3:  mov    %eax,(%esp)
085ca49c +0x0c6:  call   085cb94a <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x660>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x660
085ca4a1 +0x0cb:  mov    %esi,%eax
085ca4a3 +0x0cd:  mov    %ebx,%edx
085ca4a5 +0x0cf:  jmp    085ca4a7 <+0xd1>
085ca4a7 +0x0d1:  mov    %edx,%ebx
085ca4a9 +0x0d3:  mov    %eax,%esi
085ca4ab +0x0d5:  mov    0x8(%ebp),%eax
085ca4ae +0x0d8:  add    $0x98,%eax
085ca4b3 +0x0dd:  mov    %eax,(%esp)
085ca4b6 +0x0e0:  call   085cb94a <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x660>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x660
085ca4bb +0x0e5:  mov    %esi,%eax
085ca4bd +0x0e7:  mov    %ebx,%edx
085ca4bf +0x0e9:  jmp    085ca4c1 <+0xeb>
085ca4c1 +0x0eb:  mov    %edx,%ebx
085ca4c3 +0x0ed:  mov    %eax,%esi
085ca4c5 +0x0ef:  mov    0x8(%ebp),%eax
085ca4c8 +0x0f2:  add    $0x68,%eax
085ca4cb +0x0f5:  mov    %eax,(%esp)
085ca4ce +0x0f8:  call   085ccd90 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1aa6>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1aa6
085ca4d3 +0x0fd:  mov    %esi,%eax
085ca4d5 +0x0ff:  mov    %ebx,%edx
085ca4d7 +0x101:  jmp    085ca4d9 <+0x103>
085ca4d9 +0x103:  mov    %edx,%ebx
085ca4db +0x105:  mov    %eax,%esi
085ca4dd +0x107:  mov    0x8(%ebp),%eax
085ca4e0 +0x10a:  add    $0x4,%eax
085ca4e3 +0x10d:  mov    %eax,(%esp)
085ca4e6 +0x110:  call   085c4ecc <_ZN13private_store13CPrivateStoreD1Ev>  ; private_store::CPrivateStore::~CPrivateStore()
085ca4eb +0x115:  mov    %esi,%eax
085ca4ed +0x117:  mov    %ebx,%edx
085ca4ef +0x119:  mov    %eax,(%esp)
085ca4f2 +0x11c:  call   08ae3750 <_Unwind_Resume>
085ca4f7 +0x121:  add    $0x10,%esp
085ca4fa +0x124:  pop    %ebx
085ca4fb +0x125:  pop    %esi
085ca4fc +0x126:  pop    %ebp
085ca4fd +0x127:  ret
```

## 反编译 C

```c
// private_store::CPrivateStoreMgr::CPrivateStoreMgr @ 0x85ca3d6

/* private_store::CPrivateStoreMgr::CPrivateStoreMgr() */

void __thiscall private_store::CPrivateStoreMgr::CPrivateStoreMgr(CPrivateStoreMgr *this)

{
  IUserPos::IUserPos((IUserPos *)this);
  *(undefined ***)this = &PTR_Exit_08cbeb40;
  CPrivateStore::CPrivateStore((CPrivateStore *)(this + 4));
                    /* try { // try from 085ca409 to 085ca40d has its CatchHandler @ 085ca4d9 */
  StaticPool<private_store::CPrivateStore,300>::StaticPool
            ((StaticPool<private_store::CPrivateStore,300> *)(this + 0x68));
                    /* try { // try from 085ca419 to 085ca41d has its CatchHandler @ 085ca4c1 */
  std::
  map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
  ::map((map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
         *)(this + 0x98));
                    /* try { // try from 085ca429 to 085ca42d has its CatchHandler @ 085ca4a7 */
  std::
  map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
  ::map((map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
         *)(this + 0xb0));
                    /* try { // try from 085ca439 to 085ca43d has its CatchHandler @ 085ca48d */
  std::
  map<private_store::PrivateStoreZone,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*,std::less<private_store::PrivateStoreZone>,std::allocator<std::pair<private_store::PrivateStoreZone_const,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*>>>
  ::map((map<private_store::PrivateStoreZone,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*,std::less<private_store::PrivateStoreZone>,std::allocator<std::pair<private_store::PrivateStoreZone_const,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*>>>
         *)(this + 200));
                    /* try { // try from 085ca449 to 085ca46d has its CatchHandler @ 085ca473 */
  std::
  map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
  ::clear((map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
           *)(this + 0x98));
  std::
  map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
  ::clear((map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
           *)(this + 0xb0));
  std::
  map<private_store::PrivateStoreZone,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*,std::less<private_store::PrivateStoreZone>,std::allocator<std::pair<private_store::PrivateStoreZone_const,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*>>>
  ::clear((map<private_store::PrivateStoreZone,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*,std::less<private_store::PrivateStoreZone>,std::allocator<std::pair<private_store::PrivateStoreZone_const,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*>>>
           *)(this + 200));
  return;
}
```
