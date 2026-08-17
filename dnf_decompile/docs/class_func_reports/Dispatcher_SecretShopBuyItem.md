# Dispatcher_SecretShopBuyItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081d26c0 Dispatcher_SecretShopBuyItem::check_error  [0x081d26c0-0x81d26e9] ===
 81d26c0:	55                   	push   %ebp
 81d26c1:	89 e5                	mov    %esp,%ebp
 81d26c3:	83 ec 18             	sub    $0x18,%esp
 81d26c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d26c9:	89 04 24             	mov    %eax,(%esp)
 81d26cc:	e8 bb 7c f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d26d1:	83 f8 05             	cmp    $0x5,%eax
 81d26d4:	0f 95 c0             	setne  %al
 81d26d7:	84 c0                	test   %al,%al
 81d26d9:	74 07                	je     81d26e2 <_ZN28Dispatcher_SecretShopBuyItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x22>
 81d26db:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81d26e0:	eb 05                	jmp    81d26e7 <_ZN28Dispatcher_SecretShopBuyItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x27>
 81d26e2:	b8 00 00 00 00       	mov    $0x0,%eax
 81d26e7:	c9                   	leave
 81d26e8:	c3                   	ret
 81d26e9:	90                   	nop

```

```c
// Dispatcher_SecretShopBuyItem::check_error @ 0x81d26c0

/* Dispatcher_SecretShopBuyItem::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_SecretShopBuyItem::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 == 5) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x7fffffff;
  }
  return uVar2;
}

```

---

## process

```asm
// === 081d26ea Dispatcher_SecretShopBuyItem::process  [0x081d26ea-0x81d27eb] ===
 81d26ea:	55                   	push   %ebp
 81d26eb:	89 e5                	mov    %esp,%ebp
 81d26ed:	83 ec 38             	sub    $0x38,%esp
 81d26f0:	8b 45 14             	mov    0x14(%ebp),%eax
 81d26f3:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81d26f6:	8b 45 14             	mov    0x14(%ebp),%eax
 81d26f9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d26fd:	8b 45 10             	mov    0x10(%ebp),%eax
 81d2700:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d2704:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d2707:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d270b:	8b 45 08             	mov    0x8(%ebp),%eax
 81d270e:	89 04 24             	mov    %eax,(%esp)
 81d2711:	e8 aa ff ff ff       	call   81d26c0 <_ZN28Dispatcher_SecretShopBuyItem11check_errorEP5CUserR8MSG_BASER9ParamBase>
 81d2716:	89 c2                	mov    %eax,%edx
 81d2718:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d271b:	89 50 04             	mov    %edx,0x4(%eax)
 81d271e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d2721:	8b 40 04             	mov    0x4(%eax),%eax
 81d2724:	85 c0                	test   %eax,%eax
 81d2726:	7e 0a                	jle    81d2732 <_ZN28Dispatcher_SecretShopBuyItem7processEP5CUserR8MSG_BASER9ParamBase+0x48>
 81d2728:	b8 00 00 00 00       	mov    $0x0,%eax
 81d272d:	e9 b7 00 00 00       	jmp    81d27e9 <_ZN28Dispatcher_SecretShopBuyItem7processEP5CUserR8MSG_BASER9ParamBase+0xff>
 81d2732:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d2735:	8b 40 04             	mov    0x4(%eax),%eax
 81d2738:	85 c0                	test   %eax,%eax
 81d273a:	79 2b                	jns    81d2767 <_ZN28Dispatcher_SecretShopBuyItem7processEP5CUserR8MSG_BASER9ParamBase+0x7d>
 81d273c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d273f:	8b 40 04             	mov    0x4(%eax),%eax
 81d2742:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d2749:	00 
 81d274a:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d274e:	c7 44 24 04 40 37 bd 	movl   $0x8bd3740,0x4(%esp)
 81d2755:	08 
 81d2756:	c7 04 24 a1 2f 00 00 	movl   $0x2fa1,(%esp)
 81d275d:	e8 75 e1 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d2762:	e9 82 00 00 00       	jmp    81d27e9 <_ZN28Dispatcher_SecretShopBuyItem7processEP5CUserR8MSG_BASER9ParamBase+0xff>
 81d2767:	8b 45 10             	mov    0x10(%ebp),%eax
 81d276a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81d276d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d2770:	89 04 24             	mov    %eax,(%esp)
 81d2773:	e8 2e 5e 4b 00       	call   86885a6 <_ZN5CUser17GetSecretShopDataEv>
 81d2778:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d277b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d277e:	89 04 24             	mov    %eax,(%esp)
 81d2781:	e8 4e 5e 4b 00       	call   86885d4 <_ZN5CUser17GetUserSecretShopEv>
 81d2786:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d2789:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81d278d:	74 06                	je     81d2795 <_ZN28Dispatcher_SecretShopBuyItem7processEP5CUserR8MSG_BASER9ParamBase+0xab>
 81d278f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81d2793:	75 11                	jne    81d27a6 <_ZN28Dispatcher_SecretShopBuyItem7processEP5CUserR8MSG_BASER9ParamBase+0xbc>
 81d2795:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d2798:	c7 40 04 ff ff ff 7f 	movl   $0x7fffffff,0x4(%eax)
 81d279f:	b8 00 00 00 00       	mov    $0x0,%eax
 81d27a4:	eb 43                	jmp    81d27e9 <_ZN28Dispatcher_SecretShopBuyItem7processEP5CUserR8MSG_BASER9ParamBase+0xff>
 81d27a6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d27a9:	89 04 24             	mov    %eax,(%esp)
 81d27ac:	e8 5b ed 8d 00       	call   8ab150c <_ZN10secretshop16SECRET_SHOP_DATA6IsOpenEv>
 81d27b1:	84 c0                	test   %al,%al
 81d27b3:	74 2f                	je     81d27e4 <_ZN28Dispatcher_SecretShopBuyItem7processEP5CUserR8MSG_BASER9ParamBase+0xfa>
 81d27b5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d27b8:	8b 48 11             	mov    0x11(%eax),%ecx
 81d27bb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d27be:	8b 50 0d             	mov    0xd(%eax),%edx
 81d27c1:	a1 54 be 40 09       	mov    0x940be54,%eax
 81d27c6:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81d27ca:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81d27ce:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81d27d1:	89 54 24 08          	mov    %edx,0x8(%esp)
 81d27d5:	8b 55 0c             	mov    0xc(%ebp),%edx
 81d27d8:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d27dc:	89 04 24             	mov    %eax,(%esp)
 81d27df:	e8 8a 89 42 00       	call   85fb16e <_ZN10secretshop11CSecretShop7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii>
 81d27e4:	b8 00 00 00 00       	mov    $0x0,%eax
 81d27e9:	c9                   	leave
 81d27ea:	c3                   	ret
 81d27eb:	90                   	nop

```

```c
// Dispatcher_SecretShopBuyItem::process @ 0x81d26ea

/* Dispatcher_SecretShopBuyItem::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_SecretShopBuyItem::process
          (Dispatcher_SecretShopBuyItem *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  undefined4 uVar2;
  SECRET_SHOP_DATA *this_00;
  SECRET_SHOP_INFO *pSVar3;
  
  uVar2 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  *(undefined4 *)(param_3 + 4) = uVar2;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar2 = LineFunc(0x2fa1,
                       "virtual int Dispatcher_SecretShopBuyItem::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),0);
    }
    else {
      this_00 = (SECRET_SHOP_DATA *)CUser::GetSecretShopData(param_1);
      pSVar3 = (SECRET_SHOP_INFO *)CUser::GetUserSecretShop(param_1);
      if ((this_00 == (SECRET_SHOP_DATA *)0x0) || (pSVar3 == (SECRET_SHOP_INFO *)0x0)) {
        *(undefined4 *)(param_3 + 4) = 0x7fffffff;
        uVar2 = 0;
      }
      else {
        cVar1 = secretshop::SECRET_SHOP_DATA::IsOpen(this_00);
        if (cVar1 != '\0') {
          secretshop::CSecretShop::BuyItem
                    (GlobalData::s_secret_shop,param_1,pSVar3,*(int *)(param_2 + 0xd),
                     *(int *)(param_2 + 0x11));
        }
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## read

```asm
// === 081d25f8 Dispatcher_SecretShopBuyItem::read  [0x081d25f8-0x81d26bf] ===
 81d25f8:	55                   	push   %ebp
 81d25f9:	89 e5                	mov    %esp,%ebp
 81d25fb:	83 ec 28             	sub    $0x28,%esp
 81d25fe:	8b 45 10             	mov    0x10(%ebp),%eax
 81d2601:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d2604:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d2607:	83 c0 0d             	add    $0xd,%eax
 81d260a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d260e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d2611:	89 04 24             	mov    %eax,(%esp)
 81d2614:	e8 d7 aa 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81d2619:	83 f0 01             	xor    $0x1,%eax
 81d261c:	84 c0                	test   %al,%al
 81d261e:	74 26                	je     81d2646 <_ZN28Dispatcher_SecretShopBuyItem4readER9PacketBufR8MSG_BASE+0x4e>
 81d2620:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d2627:	00 
 81d2628:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d262f:	00 
 81d2630:	c7 44 24 04 a0 37 bd 	movl   $0x8bd37a0,0x4(%esp)
 81d2637:	08 
 81d2638:	c7 04 24 80 2f 00 00 	movl   $0x2f80,(%esp)
 81d263f:	e8 93 e2 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d2644:	eb 77                	jmp    81d26bd <_ZN28Dispatcher_SecretShopBuyItem4readER9PacketBufR8MSG_BASE+0xc5>
 81d2646:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d2649:	83 c0 11             	add    $0x11,%eax
 81d264c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d2650:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d2653:	89 04 24             	mov    %eax,(%esp)
 81d2656:	e8 95 aa 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81d265b:	83 f0 01             	xor    $0x1,%eax
 81d265e:	84 c0                	test   %al,%al
 81d2660:	74 26                	je     81d2688 <_ZN28Dispatcher_SecretShopBuyItem4readER9PacketBufR8MSG_BASE+0x90>
 81d2662:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d2669:	00 
 81d266a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d2671:	00 
 81d2672:	c7 44 24 04 a0 37 bd 	movl   $0x8bd37a0,0x4(%esp)
 81d2679:	08 
 81d267a:	c7 04 24 81 2f 00 00 	movl   $0x2f81,(%esp)
 81d2681:	e8 51 e2 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d2686:	eb 35                	jmp    81d26bd <_ZN28Dispatcher_SecretShopBuyItem4readER9PacketBufR8MSG_BASE+0xc5>
 81d2688:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d268b:	8b 40 11             	mov    0x11(%eax),%eax
 81d268e:	85 c0                	test   %eax,%eax
 81d2690:	7f 26                	jg     81d26b8 <_ZN28Dispatcher_SecretShopBuyItem4readER9PacketBufR8MSG_BASE+0xc0>
 81d2692:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d2699:	00 
 81d269a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d26a1:	00 
 81d26a2:	c7 44 24 04 a0 37 bd 	movl   $0x8bd37a0,0x4(%esp)
 81d26a9:	08 
 81d26aa:	c7 04 24 84 2f 00 00 	movl   $0x2f84,(%esp)
 81d26b1:	e8 21 e2 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d26b6:	eb 05                	jmp    81d26bd <_ZN28Dispatcher_SecretShopBuyItem4readER9PacketBufR8MSG_BASE+0xc5>
 81d26b8:	b8 00 00 00 00       	mov    $0x0,%eax
 81d26bd:	c9                   	leave
 81d26be:	c3                   	ret
 81d26bf:	90                   	nop

```

```c
// Dispatcher_SecretShopBuyItem::read @ 0x81d25f8

/* Dispatcher_SecretShopBuyItem::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SecretShopBuyItem::read
          (Dispatcher_SecretShopBuyItem *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x11));
    if (cVar1 == '\x01') {
      if (*(int *)(param_2 + 0x11) < 1) {
        uVar2 = LineFunc(0x2f84,
                         "virtual int Dispatcher_SecretShopBuyItem::read(PacketBuf&, MSG_BASE&)",0,0
                        );
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = LineFunc(0x2f81,
                       "virtual int Dispatcher_SecretShopBuyItem::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x2f80,"virtual int Dispatcher_SecretShopBuyItem::read(PacketBuf&, MSG_BASE&)",
                     0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081d27ec Dispatcher_SecretShopBuyItem::send  [0x081d27ec-0x81d2833] ===
 81d27ec:	55                   	push   %ebp
 81d27ed:	89 e5                	mov    %esp,%ebp
 81d27ef:	83 ec 28             	sub    $0x28,%esp
 81d27f2:	8b 45 10             	mov    0x10(%ebp),%eax
 81d27f5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d27f8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d27fb:	8b 40 04             	mov    0x4(%eax),%eax
 81d27fe:	3d ff ff ff 7f       	cmp    $0x7fffffff,%eax
 81d2803:	74 2c                	je     81d2831 <_ZN28Dispatcher_SecretShopBuyItem4sendEP5CUserR9ParamBase+0x45>
 81d2805:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d2808:	8b 40 04             	mov    0x4(%eax),%eax
 81d280b:	85 c0                	test   %eax,%eax
 81d280d:	74 23                	je     81d2832 <_ZN28Dispatcher_SecretShopBuyItem4sendEP5CUserR9ParamBase+0x46>
 81d280f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d2812:	8b 40 04             	mov    0x4(%eax),%eax
 81d2815:	0f b6 c0             	movzbl %al,%eax
 81d2818:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d281c:	c7 44 24 04 29 01 00 	movl   $0x129,0x4(%esp)
 81d2823:	00 
 81d2824:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d2827:	89 04 24             	mov    %eax,(%esp)
 81d282a:	e8 13 97 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81d282f:	eb 01                	jmp    81d2832 <_ZN28Dispatcher_SecretShopBuyItem4sendEP5CUserR9ParamBase+0x46>
 81d2831:	90                   	nop
 81d2832:	c9                   	leave
 81d2833:	c3                   	ret

```

```c
// Dispatcher_SecretShopBuyItem::send @ 0x81d27ec

/* Dispatcher_SecretShopBuyItem::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_SecretShopBuyItem::send
          (Dispatcher_SecretShopBuyItem *this,CUser *param_1,ParamBase *param_2)

{
  if ((*(int *)(param_2 + 4) != 0x7fffffff) && (*(int *)(param_2 + 4) != 0)) {
    CUser::SendCmdErrorPacket(param_1,0x129,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

