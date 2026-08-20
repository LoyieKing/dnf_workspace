# RoutingPickupItem

`_ZN8WongWork10CBossStage17RoutingPickupItemEP5CUserjR8map_item`

`WongWork::CBossStage::RoutingPickupItem(CUser*, unsigned int, map_item&)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossStage` | `0x0814e57a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0814e57a  _ZN8WongWork10CBossStage17RoutingPickupItemEP5CUserjR8map_item
#           WongWork::CBossStage::RoutingPickupItem(CUser*, unsigned int, map_item&)
# range [0x0814e57a, 0x0814e683]
0814e57a +0x000:  push   %ebp
0814e57b +0x001:  mov    %esp,%ebp
0814e57d +0x003:  push   %esi
0814e57e +0x004:  push   %ebx
0814e57f +0x005:  sub    $0x30,%esp
0814e582 +0x008:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0814e587 +0x00d:  mov    %eax,(%esp)
0814e58a +0x010:  call   08298fc4 <_ZN12CGameManager28GetSpecialItemRoutingManagerEv>  ; CGameManager::GetSpecialItemRoutingManager()
0814e58f +0x015:  mov    %eax,-0x10(%ebp)
0814e592 +0x018:  movl   $0x0,-0xc(%ebp)
0814e599 +0x01f:  mov    0x14(%ebp),%eax
0814e59c +0x022:  lea    0x10(%eax),%edx
0814e59f +0x025:  mov    0x10(%ebp),%eax
0814e5a2 +0x028:  mov    %eax,0xc(%esp)
0814e5a6 +0x02c:  mov    %edx,0x8(%esp)
0814e5aa +0x030:  mov    0xc(%ebp),%eax
0814e5ad +0x033:  mov    %eax,0x4(%esp)
0814e5b1 +0x037:  mov    -0x10(%ebp),%eax
0814e5b4 +0x03a:  mov    %eax,(%esp)
0814e5b7 +0x03d:  call   0860a9d4 <_ZN26CSpecialItemRoutingManager12StartRoutingEP5CUserR10Inven_Itemj>  ; CSpecialItemRoutingManager::StartRouting(CUser*, Inven_Item&, unsigned int)
0814e5bc +0x042:  mov    %eax,-0xc(%ebp)
0814e5bf +0x045:  cmpl   $0x0,-0xc(%ebp)
0814e5c3 +0x049:  setne  %al
0814e5c6 +0x04c:  test   %al,%al
0814e5c8 +0x04e:  je     0814e676 <+0xfc>
0814e5ce +0x054:  lea    -0x1c(%ebp),%eax
0814e5d1 +0x057:  mov    %eax,(%esp)
0814e5d4 +0x05a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0814e5d9 +0x05f:  lea    -0x1c(%ebp),%eax
0814e5dc +0x062:  mov    %eax,(%esp)
0814e5df +0x065:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0814e5e4 +0x06a:  movl   $0x2e,0x8(%esp)
0814e5ec +0x072:  movl   $0x1,0x4(%esp)
0814e5f4 +0x07a:  lea    -0x1c(%ebp),%eax
0814e5f7 +0x07d:  mov    %eax,(%esp)
0814e5fa +0x080:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0814e5ff +0x085:  movl   $0x0,0x4(%esp)
0814e607 +0x08d:  lea    -0x1c(%ebp),%eax
0814e60a +0x090:  mov    %eax,(%esp)
0814e60d +0x093:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814e612 +0x098:  mov    -0xc(%ebp),%eax
0814e615 +0x09b:  mov    %eax,0x4(%esp)
0814e619 +0x09f:  lea    -0x1c(%ebp),%eax
0814e61c +0x0a2:  mov    %eax,(%esp)
0814e61f +0x0a5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814e624 +0x0aa:  movl   $0x1,0x4(%esp)
0814e62c +0x0b2:  lea    -0x1c(%ebp),%eax
0814e62f +0x0b5:  mov    %eax,(%esp)
0814e632 +0x0b8:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0814e637 +0x0bd:  lea    -0x1c(%ebp),%eax
0814e63a +0x0c0:  mov    %eax,0x4(%esp)
0814e63e +0x0c4:  mov    0xc(%ebp),%eax
0814e641 +0x0c7:  mov    %eax,(%esp)
0814e644 +0x0ca:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0814e649 +0x0cf:  mov    $0x0,%ebx
0814e64e +0x0d4:  lea    -0x1c(%ebp),%eax
0814e651 +0x0d7:  mov    %eax,(%esp)
0814e654 +0x0da:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0814e659 +0x0df:  jmp    0814e67b <+0x101>
0814e65b +0x0e1:  mov    %edx,%ebx
0814e65d +0x0e3:  mov    %eax,%esi
0814e65f +0x0e5:  lea    -0x1c(%ebp),%eax
0814e662 +0x0e8:  mov    %eax,(%esp)
0814e665 +0x0eb:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0814e66a +0x0f0:  mov    %esi,%eax
0814e66c +0x0f2:  mov    %ebx,%edx
0814e66e +0x0f4:  mov    %eax,(%esp)
0814e671 +0x0f7:  call   08ae3750 <_Unwind_Resume>
0814e676 +0x0fc:  mov    $0x1,%ebx
0814e67b +0x101:  mov    %ebx,%eax
0814e67d +0x103:  add    $0x30,%esp
0814e680 +0x106:  pop    %ebx
0814e681 +0x107:  pop    %esi
0814e682 +0x108:  pop    %ebp
0814e683 +0x109:  ret
```

## 反编译 C

```c
// WongWork::CBossStage::RoutingPickupItem @ 0x814e57a

/* WongWork::CBossStage::RoutingPickupItem(CUser*, unsigned int, map_item&) */

bool __thiscall
WongWork::CBossStage::RoutingPickupItem
          (CBossStage *this,CUser *param_1,uint param_2,map_item *param_3)

{
  CGameManager *this_00;
  bool bVar1;
  PacketGuard local_20 [12];
  CSpecialItemRoutingManager *local_14;
  int local_10;
  
  this_00 = (CGameManager *)G_CGameManager();
  local_14 = (CSpecialItemRoutingManager *)CGameManager::GetSpecialItemRoutingManager(this_00);
  local_10 = 0;
  local_10 = CSpecialItemRoutingManager::StartRouting
                       (local_14,param_1,(Inven_Item *)(param_3 + 0x10),param_2);
  bVar1 = local_10 == 0;
  if (!bVar1) {
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 0814e5df to 0814e648 has its CatchHandler @ 0814e65b */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x2e);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,local_10);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CUser::Send(param_1,local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return bVar1;
}
```
