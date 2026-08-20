# SendSecretShopItemList

`_ZN10secretshop11CSecretShop22SendSecretShopItemListEP5CUserRSt6vectorINS_9SALE_INFOESaIS4_EE`

`secretshop::CSecretShop::SendSecretShopItemList(CUser*, std::vector<secretshop::SALE_INFO, std::allocator<secretshop::SALE_INFO> >&)`

| 类 | 地址 |
|---|---|
| `secretshop::CSecretShop` | `0x085fb374` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fb374  _ZN10secretshop11CSecretShop22SendSecretShopItemListEP5CUserRSt6vectorINS_9SALE_INFOESaIS4_EE
#           secretshop::CSecretShop::SendSecretShopItemList(CUser*, std::vector<secretshop::SALE_INFO, std::allocator<secretshop::SALE_INFO> >&)
# range [0x085fb374, 0x085fb539]
085fb374 +0x000:  push   %ebp
085fb375 +0x001:  mov    %esp,%ebp
085fb377 +0x003:  push   %esi
085fb378 +0x004:  push   %ebx
085fb379 +0x005:  sub    $0x30,%esp
085fb37c +0x008:  mov    0x10(%ebp),%eax
085fb37f +0x00b:  mov    %eax,(%esp)
085fb382 +0x00e:  call   085fc376 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x508>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x508
085fb387 +0x013:  mov    %eax,-0x10(%ebp)
085fb38a +0x016:  lea    -0x1c(%ebp),%eax
085fb38d +0x019:  mov    %eax,(%esp)
085fb390 +0x01c:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085fb395 +0x021:  movl   $0x115,0x8(%esp)
085fb39d +0x029:  movl   $0x0,0x4(%esp)
085fb3a5 +0x031:  lea    -0x1c(%ebp),%eax
085fb3a8 +0x034:  mov    %eax,(%esp)
085fb3ab +0x037:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085fb3b0 +0x03c:  mov    -0x10(%ebp),%eax
085fb3b3 +0x03f:  mov    %eax,0x4(%esp)
085fb3b7 +0x043:  lea    -0x1c(%ebp),%eax
085fb3ba +0x046:  mov    %eax,(%esp)
085fb3bd +0x049:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085fb3c2 +0x04e:  movl   $0x0,-0xc(%ebp)
085fb3c9 +0x055:  jmp    085fb4d5 <+0x161>
085fb3ce +0x05a:  mov    -0xc(%ebp),%eax
085fb3d1 +0x05d:  mov    %eax,0x4(%esp)
085fb3d5 +0x061:  mov    0x10(%ebp),%eax
085fb3d8 +0x064:  mov    %eax,(%esp)
085fb3db +0x067:  call   085fc398 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x52a>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x52a
085fb3e0 +0x06c:  mov    (%eax),%eax
085fb3e2 +0x06e:  mov    %eax,0x4(%esp)
085fb3e6 +0x072:  lea    -0x1c(%ebp),%eax
085fb3e9 +0x075:  mov    %eax,(%esp)
085fb3ec +0x078:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085fb3f1 +0x07d:  mov    -0xc(%ebp),%eax
085fb3f4 +0x080:  mov    %eax,0x4(%esp)
085fb3f8 +0x084:  mov    0x10(%ebp),%eax
085fb3fb +0x087:  mov    %eax,(%esp)
085fb3fe +0x08a:  call   085fc398 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x52a>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x52a
085fb403 +0x08f:  movzbl 0x4(%eax),%eax
085fb407 +0x093:  movsbl %al,%eax
085fb40a +0x096:  mov    %eax,0x4(%esp)
085fb40e +0x09a:  lea    -0x1c(%ebp),%eax
085fb411 +0x09d:  mov    %eax,(%esp)
085fb414 +0x0a0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085fb419 +0x0a5:  mov    -0xc(%ebp),%eax
085fb41c +0x0a8:  mov    %eax,0x4(%esp)
085fb420 +0x0ac:  mov    0x10(%ebp),%eax
085fb423 +0x0af:  mov    %eax,(%esp)
085fb426 +0x0b2:  call   085fc398 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x52a>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x52a
085fb42b +0x0b7:  mov    0x8(%eax),%eax
085fb42e +0x0ba:  mov    %eax,0x4(%esp)
085fb432 +0x0be:  lea    -0x1c(%ebp),%eax
085fb435 +0x0c1:  mov    %eax,(%esp)
085fb438 +0x0c4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085fb43d +0x0c9:  mov    -0xc(%ebp),%eax
085fb440 +0x0cc:  mov    %eax,0x4(%esp)
085fb444 +0x0d0:  mov    0x10(%ebp),%eax
085fb447 +0x0d3:  mov    %eax,(%esp)
085fb44a +0x0d6:  call   085fc398 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x52a>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x52a
085fb44f +0x0db:  mov    0xc(%eax),%eax
085fb452 +0x0de:  mov    %eax,0x4(%esp)
085fb456 +0x0e2:  lea    -0x1c(%ebp),%eax
085fb459 +0x0e5:  mov    %eax,(%esp)
085fb45c +0x0e8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085fb461 +0x0ed:  mov    -0xc(%ebp),%eax
085fb464 +0x0f0:  mov    %eax,0x4(%esp)
085fb468 +0x0f4:  mov    0x10(%ebp),%eax
085fb46b +0x0f7:  mov    %eax,(%esp)
085fb46e +0x0fa:  call   085fc398 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x52a>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x52a
085fb473 +0x0ff:  mov    0x10(%eax),%eax
085fb476 +0x102:  mov    %eax,0x4(%esp)
085fb47a +0x106:  lea    -0x1c(%ebp),%eax
085fb47d +0x109:  mov    %eax,(%esp)
085fb480 +0x10c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085fb485 +0x111:  mov    -0xc(%ebp),%eax
085fb488 +0x114:  mov    %eax,0x4(%esp)
085fb48c +0x118:  mov    0x10(%ebp),%eax
085fb48f +0x11b:  mov    %eax,(%esp)
085fb492 +0x11e:  call   085fc398 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x52a>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x52a
085fb497 +0x123:  mov    0x14(%eax),%eax
085fb49a +0x126:  mov    %eax,0x4(%esp)
085fb49e +0x12a:  lea    -0x1c(%ebp),%eax
085fb4a1 +0x12d:  mov    %eax,(%esp)
085fb4a4 +0x130:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085fb4a9 +0x135:  mov    -0xc(%ebp),%eax
085fb4ac +0x138:  mov    %eax,0x4(%esp)
085fb4b0 +0x13c:  mov    0x10(%ebp),%eax
085fb4b3 +0x13f:  mov    %eax,(%esp)
085fb4b6 +0x142:  call   085fc398 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x52a>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x52a
085fb4bb +0x147:  movzbl 0x18(%eax),%eax
085fb4bf +0x14b:  movsbl %al,%eax
085fb4c2 +0x14e:  mov    %eax,0x4(%esp)
085fb4c6 +0x152:  lea    -0x1c(%ebp),%eax
085fb4c9 +0x155:  mov    %eax,(%esp)
085fb4cc +0x158:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085fb4d1 +0x15d:  addl   $0x1,-0xc(%ebp)
085fb4d5 +0x161:  mov    -0xc(%ebp),%eax
085fb4d8 +0x164:  cmp    -0x10(%ebp),%eax
085fb4db +0x167:  setl   %al
085fb4de +0x16a:  test   %al,%al
085fb4e0 +0x16c:  jne    085fb3ce <+0x5a>
085fb4e6 +0x172:  movl   $0x1,0x4(%esp)
085fb4ee +0x17a:  lea    -0x1c(%ebp),%eax
085fb4f1 +0x17d:  mov    %eax,(%esp)
085fb4f4 +0x180:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085fb4f9 +0x185:  lea    -0x1c(%ebp),%eax
085fb4fc +0x188:  mov    %eax,0x4(%esp)
085fb500 +0x18c:  mov    0xc(%ebp),%eax
085fb503 +0x18f:  mov    %eax,(%esp)
085fb506 +0x192:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085fb50b +0x197:  jmp    085fb528 <+0x1b4>
085fb50d +0x199:  mov    %edx,%ebx
085fb50f +0x19b:  mov    %eax,%esi
085fb511 +0x19d:  lea    -0x1c(%ebp),%eax
085fb514 +0x1a0:  mov    %eax,(%esp)
085fb517 +0x1a3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085fb51c +0x1a8:  mov    %esi,%eax
085fb51e +0x1aa:  mov    %ebx,%edx
085fb520 +0x1ac:  mov    %eax,(%esp)
085fb523 +0x1af:  call   08ae3750 <_Unwind_Resume>
085fb528 +0x1b4:  lea    -0x1c(%ebp),%eax
085fb52b +0x1b7:  mov    %eax,(%esp)
085fb52e +0x1ba:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085fb533 +0x1bf:  add    $0x30,%esp
085fb536 +0x1c2:  pop    %ebx
085fb537 +0x1c3:  pop    %esi
085fb538 +0x1c4:  pop    %ebp
085fb539 +0x1c5:  ret
```

## 反编译 C

```c
// secretshop::CSecretShop::SendSecretShopItemList @ 0x85fb374

/* secretshop::CSecretShop::SendSecretShopItemList(CUser*, std::vector<secretshop::SALE_INFO,
   std::allocator<secretshop::SALE_INFO> >&) */

void __thiscall
secretshop::CSecretShop::SendSecretShopItemList(CSecretShop *this,CUser *param_1,vector *param_2)

{
  int *piVar1;
  int iVar2;
  PacketGuard local_20 [12];
  int local_14;
  uint local_10;
  
  local_14 = std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::size
                       ((vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>> *)
                        param_2);
  PacketGuard::PacketGuard(local_20);
                    /* try { // try from 085fb3ab to 085fb50a has its CatchHandler @ 085fb50d */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x115);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_14);
  for (local_10 = 0; (int)local_10 < local_14; local_10 = local_10 + 1) {
    piVar1 = (int *)std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::
                    operator[]((vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>
                                *)param_2,local_10);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*piVar1);
    iVar2 = std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::operator[]
                      ((vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>> *)
                       param_2,local_10);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*(char *)(iVar2 + 4));
    iVar2 = std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::operator[]
                      ((vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>> *)
                       param_2,local_10);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(iVar2 + 8));
    iVar2 = std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::operator[]
                      ((vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>> *)
                       param_2,local_10);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(iVar2 + 0xc));
    iVar2 = std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::operator[]
                      ((vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>> *)
                       param_2,local_10);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(iVar2 + 0x10));
    iVar2 = std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::operator[]
                      ((vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>> *)
                       param_2,local_10);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(iVar2 + 0x14));
    iVar2 = std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::operator[]
                      ((vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>> *)
                       param_2,local_10);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*(char *)(iVar2 + 0x18));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  CUser::Send(param_1,local_20);
  PacketGuard::~PacketGuard(local_20);
  return;
}
```
