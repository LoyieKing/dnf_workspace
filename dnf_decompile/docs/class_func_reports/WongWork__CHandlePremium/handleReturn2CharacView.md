# handleReturn2CharacView

`_ZN8WongWork14CHandlePremium23handleReturn2CharacViewEP5CUser`

`WongWork::CHandlePremium::handleReturn2CharacView(CUser*)`

| 类 | 地址 |
|---|---|
| `WongWork::CHandlePremium` | `0x086af96e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086af96e  _ZN8WongWork14CHandlePremium23handleReturn2CharacViewEP5CUser
#           WongWork::CHandlePremium::handleReturn2CharacView(CUser*)
# range [0x086af96e, 0x086afa7b]
086af96e +0x000:  push   %ebp
086af96f +0x001:  mov    %esp,%ebp
086af971 +0x003:  push   %esi
086af972 +0x004:  push   %ebx
086af973 +0x005:  sub    $0x30,%esp
086af976 +0x008:  mov    0x8(%ebp),%eax
086af979 +0x00b:  mov    %eax,(%esp)
086af97c +0x00e:  call   0812ce28 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xa4>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xa4
086af981 +0x013:  lea    -0x18(%ebp),%edx
086af984 +0x016:  movl   $0x270f,0x8(%esp)
086af98c +0x01e:  mov    %eax,0x4(%esp)
086af990 +0x022:  mov    %edx,(%esp)
086af993 +0x025:  call   086ade9c <_ZNK8WongWork12CUserPremium18GetPremiumInfoListEi>  ; WongWork::CUserPremium::GetPremiumInfoList(int) const
086af998 +0x02a:  sub    $0x4,%esp
086af99b +0x02d:  movl   $0x0,-0xc(%ebp)
086af9a2 +0x034:  jmp    086afa30 <+0xc2>
086af9a7 +0x039:  mov    -0xc(%ebp),%eax
086af9aa +0x03c:  mov    %eax,0x4(%esp)
086af9ae +0x040:  lea    -0x18(%ebp),%eax
086af9b1 +0x043:  mov    %eax,(%esp)
086af9b4 +0x046:  call   08469e3a <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x51d>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x51d
086af9b9 +0x04b:  mov    (%eax),%eax
086af9bb +0x04d:  test   %eax,%eax
086af9bd +0x04f:  je     086af9e0 <+0x72>
086af9bf +0x051:  mov    -0xc(%ebp),%eax
086af9c2 +0x054:  mov    %eax,0x4(%esp)
086af9c6 +0x058:  lea    -0x18(%ebp),%eax
086af9c9 +0x05b:  mov    %eax,(%esp)
086af9cc +0x05e:  call   08469e3a <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x51d>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x51d
086af9d1 +0x063:  mov    0x10(%eax),%eax
086af9d4 +0x066:  cmp    $0x3,%eax
086af9d7 +0x069:  jne    086af9e0 <+0x72>
086af9d9 +0x06b:  mov    $0x1,%eax
086af9de +0x070:  jmp    086af9e5 <+0x77>
086af9e0 +0x072:  mov    $0x0,%eax
086af9e5 +0x077:  test   %al,%al
086af9e7 +0x079:  je     086afa2c <+0xbe>
086af9e9 +0x07b:  mov    -0xc(%ebp),%eax
086af9ec +0x07e:  mov    %eax,0x4(%esp)
086af9f0 +0x082:  lea    -0x18(%ebp),%eax
086af9f3 +0x085:  mov    %eax,(%esp)
086af9f6 +0x088:  call   08469e3a <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x51d>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x51d
086af9fb +0x08d:  mov    (%eax),%eax
086af9fd +0x08f:  movl   $0x1,0x14(%esp)
086afa05 +0x097:  movl   $0x0,0x10(%esp)
086afa0d +0x09f:  movl   $0x0,0xc(%esp)
086afa15 +0x0a7:  movl   $0x0,0x8(%esp)
086afa1d +0x0af:  mov    %eax,0x4(%esp)
086afa21 +0x0b3:  mov    0x8(%ebp),%eax
086afa24 +0x0b6:  mov    %eax,(%esp)
086afa27 +0x0b9:  call   086af7e8 <_ZN8WongWork14CHandlePremium20handleSetUserPremiumEP5CUser17ENUM_PREMIUM_TYPEllib>  ; WongWork::CHandlePremium::handleSetUserPremium(CUser*, ENUM_PREMIUM_TYPE, long, long, int, bool)
086afa2c +0x0be:  addl   $0x1,-0xc(%ebp)
086afa30 +0x0c2:  lea    -0x18(%ebp),%eax
086afa33 +0x0c5:  mov    %eax,(%esp)
086afa36 +0x0c8:  call   08329b1c <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x1a75>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x1a75
086afa3b +0x0cd:  cmp    -0xc(%ebp),%eax
086afa3e +0x0d0:  seta   %al
086afa41 +0x0d3:  test   %al,%al
086afa43 +0x0d5:  jne    086af9a7 <+0x39>
086afa49 +0x0db:  jmp    086afa66 <+0xf8>
086afa4b +0x0dd:  mov    %edx,%ebx
086afa4d +0x0df:  mov    %eax,%esi
086afa4f +0x0e1:  lea    -0x18(%ebp),%eax
086afa52 +0x0e4:  mov    %eax,(%esp)
086afa55 +0x0e7:  call   0832850a <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x463>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x463
086afa5a +0x0ec:  mov    %esi,%eax
086afa5c +0x0ee:  mov    %ebx,%edx
086afa5e +0x0f0:  mov    %eax,(%esp)
086afa61 +0x0f3:  call   08ae3750 <_Unwind_Resume>
086afa66 +0x0f8:  lea    -0x18(%ebp),%eax
086afa69 +0x0fb:  mov    %eax,(%esp)
086afa6c +0x0fe:  call   0832850a <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x463>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x463
086afa71 +0x103:  lea    -0x8(%ebp),%esp
086afa74 +0x106:  add    $0x0,%esp
086afa77 +0x109:  pop    %ebx
086afa78 +0x10a:  pop    %esi
086afa79 +0x10b:  pop    %ebp
086afa7a +0x10c:  ret
086afa7b +0x10d:  nop
```

## 反编译 C

```c
// WongWork::CHandlePremium::handleReturn2CharacView @ 0x86af96e

/* WongWork::CHandlePremium::handleReturn2CharacView(CUser*) */

void WongWork::CHandlePremium::handleReturn2CharacView(CUser *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>> local_1c [12];
  uint local_10;
  
  CUser::GetPremiumInfo(param_1);
  CUserPremium::GetPremiumInfoList((int)local_1c);
  local_10 = 0;
  do {
    uVar5 = std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::size
                      (local_1c);
    if (uVar5 <= local_10) {
      std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::~vector
                (local_1c);
      return;
    }
    piVar2 = (int *)std::
                    vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::
                    operator[](local_1c,local_10);
    if (*piVar2 == 0) {
LAB_086af9e0:
      bVar1 = false;
    }
    else {
      iVar3 = std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::
              operator[](local_1c,local_10);
      if (*(int *)(iVar3 + 0x10) != 3) goto LAB_086af9e0;
      bVar1 = true;
    }
    if (bVar1) {
      puVar4 = (undefined4 *)
               std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::
               operator[](local_1c,local_10);
                    /* try { // try from 086afa27 to 086afa2b has its CatchHandler @ 086afa4b */
      handleSetUserPremium(param_1,*puVar4,0,0,0,1);
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
