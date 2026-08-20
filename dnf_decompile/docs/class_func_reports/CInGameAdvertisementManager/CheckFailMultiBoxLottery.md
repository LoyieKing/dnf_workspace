# CheckFailMultiBoxLottery

`_ZN27CInGameAdvertisementManager24CheckFailMultiBoxLotteryEP5CUserRSt6vectorISt4pairI10Inven_ItembESaIS5_EE`

`CInGameAdvertisementManager::CheckFailMultiBoxLottery(CUser*, std::vector<std::pair<Inven_Item, bool>, std::allocator<std::pair<Inven_Item, bool> > >&)`

| 类 | 地址 |
|---|---|
| `CInGameAdvertisementManager` | `0x080fcb3e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080fcb3e  _ZN27CInGameAdvertisementManager24CheckFailMultiBoxLotteryEP5CUserRSt6vectorISt4pairI10Inven_ItembESaIS5_EE
#           CInGameAdvertisementManager::CheckFailMultiBoxLottery(CUser*, std::vector<std::pair<Inven_Item, bool>, std::allocator<std::pair<Inven_Item, bool> > >&)
# range [0x080fcb3e, 0x080fcd2d]
080fcb3e +0x000:  push   %ebp
080fcb3f +0x001:  mov    %esp,%ebp
080fcb41 +0x003:  push   %esi
080fcb42 +0x004:  push   %ebx
080fcb43 +0x005:  sub    $0x70,%esp
080fcb46 +0x008:  cmpl   $0x0,0xc(%ebp)
080fcb4a +0x00c:  je     080fcd1f <+0x1e1>
080fcb50 +0x012:  mov    0x10(%ebp),%eax
080fcb53 +0x015:  mov    %eax,(%esp)
080fcb56 +0x018:  call   080fe1fc <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x528>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x528
080fcb5b +0x01d:  test   %al,%al
080fcb5d +0x01f:  jne    080fcd22 <+0x1e4>
080fcb63 +0x025:  movb   $0x0,-0xd(%ebp)
080fcb67 +0x029:  lea    -0x1c(%ebp),%eax
080fcb6a +0x02c:  mov    0x10(%ebp),%edx
080fcb6d +0x02f:  mov    %edx,0x4(%esp)
080fcb71 +0x033:  mov    %eax,(%esp)
080fcb74 +0x036:  call   080fe240 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x56c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x56c
080fcb79 +0x03b:  sub    $0x4,%esp
080fcb7c +0x03e:  jmp    080fcc35 <+0xf7>
080fcb81 +0x043:  lea    -0x1c(%ebp),%eax
080fcb84 +0x046:  mov    %eax,(%esp)
080fcb87 +0x049:  call   080fe2b6 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x5e2>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x5e2
080fcb8c +0x04e:  mov    (%eax),%edx
080fcb8e +0x050:  mov    %edx,-0x66(%ebp)
080fcb91 +0x053:  mov    0x4(%eax),%edx
080fcb94 +0x056:  mov    %edx,-0x62(%ebp)
080fcb97 +0x059:  mov    0x8(%eax),%edx
080fcb9a +0x05c:  mov    %edx,-0x5e(%ebp)
080fcb9d +0x05f:  mov    0xc(%eax),%edx
080fcba0 +0x062:  mov    %edx,-0x5a(%ebp)
080fcba3 +0x065:  mov    0x10(%eax),%edx
080fcba6 +0x068:  mov    %edx,-0x56(%ebp)
080fcba9 +0x06b:  mov    0x14(%eax),%edx
080fcbac +0x06e:  mov    %edx,-0x52(%ebp)
080fcbaf +0x071:  mov    0x18(%eax),%edx
080fcbb2 +0x074:  mov    %edx,-0x4e(%ebp)
080fcbb5 +0x077:  mov    0x1c(%eax),%edx
080fcbb8 +0x07a:  mov    %edx,-0x4a(%ebp)
080fcbbb +0x07d:  mov    0x20(%eax),%edx
080fcbbe +0x080:  mov    %edx,-0x46(%ebp)
080fcbc1 +0x083:  mov    0x24(%eax),%edx
080fcbc4 +0x086:  mov    %edx,-0x42(%ebp)
080fcbc7 +0x089:  mov    0x28(%eax),%edx
080fcbca +0x08c:  mov    %edx,-0x3e(%ebp)
080fcbcd +0x08f:  mov    0x2c(%eax),%edx
080fcbd0 +0x092:  mov    %edx,-0x3a(%ebp)
080fcbd3 +0x095:  mov    0x30(%eax),%edx
080fcbd6 +0x098:  mov    %edx,-0x36(%ebp)
080fcbd9 +0x09b:  mov    0x34(%eax),%edx
080fcbdc +0x09e:  mov    %edx,-0x32(%ebp)
080fcbdf +0x0a1:  mov    0x38(%eax),%edx
080fcbe2 +0x0a4:  mov    %edx,-0x2e(%ebp)
080fcbe5 +0x0a7:  movzwl 0x3c(%eax),%eax
080fcbe9 +0x0ab:  mov    %ax,-0x2a(%ebp)
080fcbed +0x0af:  mov    -0x64(%ebp),%eax
080fcbf0 +0x0b2:  cmp    $0x1e3c,%eax
080fcbf5 +0x0b7:  je     080fcc0b <+0xcd>
080fcbf7 +0x0b9:  mov    -0x64(%ebp),%eax
080fcbfa +0x0bc:  cmp    $0x1e3d,%eax
080fcbff +0x0c1:  je     080fcc0b <+0xcd>
080fcc01 +0x0c3:  mov    -0x64(%ebp),%eax
080fcc04 +0x0c6:  cmp    $0x1e3e,%eax
080fcc09 +0x0cb:  jne    080fcc2f <+0xf1>
080fcc0b +0x0cd:  movb   $0x1,-0xd(%ebp)
080fcc0f +0x0d1:  nop
080fcc10 +0x0d2:  lea    -0x14(%ebp),%eax
080fcc13 +0x0d5:  movl   $0x0,0x8(%esp)
080fcc1b +0x0dd:  lea    -0x1c(%ebp),%edx
080fcc1e +0x0e0:  mov    %edx,0x4(%esp)
080fcc22 +0x0e4:  mov    %eax,(%esp)
080fcc25 +0x0e7:  call   080fe2c0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x5ec>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x5ec
080fcc2a +0x0ec:  sub    $0x4,%esp
080fcc2d +0x0ef:  jmp    080fcc35 <+0xf7>
080fcc2f +0x0f1:  movb   $0x0,-0xd(%ebp)
080fcc33 +0x0f5:  jmp    080fcc64 <+0x126>
080fcc35 +0x0f7:  lea    -0x18(%ebp),%eax
080fcc38 +0x0fa:  mov    0x10(%ebp),%edx
080fcc3b +0x0fd:  mov    %edx,0x4(%esp)
080fcc3f +0x101:  mov    %eax,(%esp)
080fcc42 +0x104:  call   080fe264 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x590>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x590
080fcc47 +0x109:  sub    $0x4,%esp
080fcc4a +0x10c:  lea    -0x18(%ebp),%eax
080fcc4d +0x10f:  mov    %eax,0x4(%esp)
080fcc51 +0x113:  lea    -0x1c(%ebp),%eax
080fcc54 +0x116:  mov    %eax,(%esp)
080fcc57 +0x119:  call   080fe28a <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x5b6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x5b6
080fcc5c +0x11e:  test   %al,%al
080fcc5e +0x120:  jne    080fcb81 <+0x43>
080fcc64 +0x126:  movzbl -0xd(%ebp),%eax
080fcc68 +0x12a:  xor    $0x1,%eax
080fcc6b +0x12d:  test   %al,%al
080fcc6d +0x12f:  je     080fcc87 <+0x149>
080fcc6f +0x131:  movl   $0x0,0x4(%esp)
080fcc77 +0x139:  mov    0xc(%ebp),%eax
080fcc7a +0x13c:  mov    %eax,(%esp)
080fcc7d +0x13f:  call   080fdf44 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x270>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x270
080fcc82 +0x144:  jmp    080fcd23 <+0x1e5>
080fcc87 +0x149:  mov    0xc(%ebp),%eax
080fcc8a +0x14c:  mov    %eax,(%esp)
080fcc8d +0x14f:  call   080fdf56 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x282>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x282
080fcc92 +0x154:  mov    %eax,-0xc(%ebp)
080fcc95 +0x157:  cmpl   $0x2,-0xc(%ebp)
080fcc99 +0x15b:  jle    080fcd23 <+0x1e5>
080fcc9f +0x161:  lea    -0x28(%ebp),%eax
080fcca2 +0x164:  mov    %eax,(%esp)
080fcca5 +0x167:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
080fccaa +0x16c:  lea    -0x28(%ebp),%eax
080fccad +0x16f:  mov    %eax,(%esp)
080fccb0 +0x172:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
080fccb5 +0x177:  movl   $0x1c6,0x8(%esp)
080fccbd +0x17f:  movl   $0x0,0x4(%esp)
080fccc5 +0x187:  lea    -0x28(%ebp),%eax
080fccc8 +0x18a:  mov    %eax,(%esp)
080fcccb +0x18d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
080fccd0 +0x192:  movl   $0x1,0x4(%esp)
080fccd8 +0x19a:  lea    -0x28(%ebp),%eax
080fccdb +0x19d:  mov    %eax,(%esp)
080fccde +0x1a0:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
080fcce3 +0x1a5:  lea    -0x28(%ebp),%eax
080fcce6 +0x1a8:  mov    %eax,0x4(%esp)
080fccea +0x1ac:  mov    0xc(%ebp),%eax
080fcced +0x1af:  mov    %eax,(%esp)
080fccf0 +0x1b2:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
080fccf5 +0x1b7:  jmp    080fcd12 <+0x1d4>
080fccf7 +0x1b9:  mov    %edx,%ebx
080fccf9 +0x1bb:  mov    %eax,%esi
080fccfb +0x1bd:  lea    -0x28(%ebp),%eax
080fccfe +0x1c0:  mov    %eax,(%esp)
080fcd01 +0x1c3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
080fcd06 +0x1c8:  mov    %esi,%eax
080fcd08 +0x1ca:  mov    %ebx,%edx
080fcd0a +0x1cc:  mov    %eax,(%esp)
080fcd0d +0x1cf:  call   08ae3750 <_Unwind_Resume>
080fcd12 +0x1d4:  lea    -0x28(%ebp),%eax
080fcd15 +0x1d7:  mov    %eax,(%esp)
080fcd18 +0x1da:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
080fcd1d +0x1df:  jmp    080fcd23 <+0x1e5>
080fcd1f +0x1e1:  nop
080fcd20 +0x1e2:  jmp    080fcd23 <+0x1e5>
080fcd22 +0x1e4:  nop
080fcd23 +0x1e5:  lea    -0x8(%ebp),%esp
080fcd26 +0x1e8:  add    $0x0,%esp
080fcd29 +0x1eb:  pop    %ebx
080fcd2a +0x1ec:  pop    %esi
080fcd2b +0x1ed:  pop    %ebp
080fcd2c +0x1ee:  ret
080fcd2d +0x1ef:  nop
```

## 反编译 C

```c
// CInGameAdvertisementManager::CheckFailMultiBoxLottery @ 0x80fcb3e

/* CInGameAdvertisementManager::CheckFailMultiBoxLottery(CUser*, std::vector<std::pair<Inven_Item,
   bool>, std::allocator<std::pair<Inven_Item, bool> > >&) */

void CInGameAdvertisementManager::CheckFailMultiBoxLottery(CUser *param_1,vector *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined2 uStack_68;
  undefined2 local_66;
  PacketGuard local_2c [12];
  __normal_iterator<std::pair<Inven_Item,bool>*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
  local_20 [4];
  __normal_iterator local_1c [4];
  __normal_iterator<std::pair<Inven_Item,bool>*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
  local_18 [7];
  char local_11;
  int local_10;
  
  if ((param_2 != (vector *)0x0) &&
     (cVar1 = std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::
              empty(), cVar1 == '\0')) {
    local_11 = '\0';
    std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::begin();
    while( true ) {
      std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::end();
      bVar2 = __gnu_cxx::operator!=(local_20,local_1c);
      if (!bVar2) break;
      puVar3 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<std::pair<Inven_Item,bool>*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
               ::operator*(local_20);
      uStack_68 = (undefined2)((uint)*puVar3 >> 0x10);
      local_66 = (undefined2)puVar3[1];
      if (((CONCAT22(local_66,uStack_68) != 0x1e3c) && (CONCAT22(local_66,uStack_68) != 0x1e3d)) &&
         (CONCAT22(local_66,uStack_68) != 0x1e3e)) {
        local_11 = '\0';
        break;
      }
      local_11 = '\x01';
      __gnu_cxx::
      __normal_iterator<std::pair<Inven_Item,bool>*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
      ::operator++(local_18,(int)local_20);
    }
    if (local_11 == '\x01') {
      local_10 = CUser::inc_multiboxLotteryItemFailCnt((CUser *)param_2);
      if (2 < local_10) {
        PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 080fccb0 to 080fccf4 has its CatchHandler @ 080fccf7 */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_2c);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0x1c6);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
        CUser::Send((CUser *)param_2,local_2c);
        PacketGuard::~PacketGuard(local_2c);
      }
    }
    else {
      CUser::set_multiboxLotteryItemFailCnt((CUser *)param_2,0);
    }
  }
  return;
}
```
