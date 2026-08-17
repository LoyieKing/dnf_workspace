# Dispatcher_SecretShopOpenClose

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081d288a Dispatcher_SecretShopOpenClose::check_error  [0x081d288a-0x81d28b3] ===
 81d288a:	55                   	push   %ebp
 81d288b:	89 e5                	mov    %esp,%ebp
 81d288d:	83 ec 18             	sub    $0x18,%esp
 81d2890:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d2893:	89 04 24             	mov    %eax,(%esp)
 81d2896:	e8 f1 7a f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d289b:	83 f8 05             	cmp    $0x5,%eax
 81d289e:	0f 95 c0             	setne  %al
 81d28a1:	84 c0                	test   %al,%al
 81d28a3:	74 07                	je     81d28ac <_ZN30Dispatcher_SecretShopOpenClose11check_errorEP5CUserR8MSG_BASER9ParamBase+0x22>
 81d28a5:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81d28aa:	eb 05                	jmp    81d28b1 <_ZN30Dispatcher_SecretShopOpenClose11check_errorEP5CUserR8MSG_BASER9ParamBase+0x27>
 81d28ac:	b8 00 00 00 00       	mov    $0x0,%eax
 81d28b1:	c9                   	leave
 81d28b2:	c3                   	ret
 81d28b3:	90                   	nop

```

```c
// Dispatcher_SecretShopOpenClose::check_error @ 0x81d288a

/* Dispatcher_SecretShopOpenClose::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_SecretShopOpenClose::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

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
// === 081d28b4 Dispatcher_SecretShopOpenClose::process  [0x081d28b4-0x81d2991] ===
 81d28b4:	55                   	push   %ebp
 81d28b5:	89 e5                	mov    %esp,%ebp
 81d28b7:	53                   	push   %ebx
 81d28b8:	83 ec 24             	sub    $0x24,%esp
 81d28bb:	8b 45 14             	mov    0x14(%ebp),%eax
 81d28be:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81d28c1:	8b 45 14             	mov    0x14(%ebp),%eax
 81d28c4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d28c8:	8b 45 10             	mov    0x10(%ebp),%eax
 81d28cb:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d28cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d28d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d28d6:	8b 45 08             	mov    0x8(%ebp),%eax
 81d28d9:	89 04 24             	mov    %eax,(%esp)
 81d28dc:	e8 a9 ff ff ff       	call   81d288a <_ZN30Dispatcher_SecretShopOpenClose11check_errorEP5CUserR8MSG_BASER9ParamBase>
 81d28e1:	89 c2                	mov    %eax,%edx
 81d28e3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d28e6:	89 50 04             	mov    %edx,0x4(%eax)
 81d28e9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d28ec:	8b 40 04             	mov    0x4(%eax),%eax
 81d28ef:	85 c0                	test   %eax,%eax
 81d28f1:	7e 0a                	jle    81d28fd <_ZN30Dispatcher_SecretShopOpenClose7processEP5CUserR8MSG_BASER9ParamBase+0x49>
 81d28f3:	b8 00 00 00 00       	mov    $0x0,%eax
 81d28f8:	e9 8f 00 00 00       	jmp    81d298c <_ZN30Dispatcher_SecretShopOpenClose7processEP5CUserR8MSG_BASER9ParamBase+0xd8>
 81d28fd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d2900:	8b 40 04             	mov    0x4(%eax),%eax
 81d2903:	85 c0                	test   %eax,%eax
 81d2905:	79 28                	jns    81d292f <_ZN30Dispatcher_SecretShopOpenClose7processEP5CUserR8MSG_BASER9ParamBase+0x7b>
 81d2907:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d290a:	8b 40 04             	mov    0x4(%eax),%eax
 81d290d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d2914:	00 
 81d2915:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d2919:	c7 44 24 04 80 36 bd 	movl   $0x8bd3680,0x4(%esp)
 81d2920:	08 
 81d2921:	c7 04 24 dc 2f 00 00 	movl   $0x2fdc,(%esp)
 81d2928:	e8 aa df 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d292d:	eb 5d                	jmp    81d298c <_ZN30Dispatcher_SecretShopOpenClose7processEP5CUserR8MSG_BASER9ParamBase+0xd8>
 81d292f:	8b 45 10             	mov    0x10(%ebp),%eax
 81d2932:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d2935:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d2938:	89 04 24             	mov    %eax,(%esp)
 81d293b:	e8 66 5c 4b 00       	call   86885a6 <_ZN5CUser17GetSecretShopDataEv>
 81d2940:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d2943:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81d2947:	75 11                	jne    81d295a <_ZN30Dispatcher_SecretShopOpenClose7processEP5CUserR8MSG_BASER9ParamBase+0xa6>
 81d2949:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d294c:	c7 40 04 ff ff ff 7f 	movl   $0x7fffffff,0x4(%eax)
 81d2953:	b8 00 00 00 00       	mov    $0x0,%eax
 81d2958:	eb 32                	jmp    81d298c <_ZN30Dispatcher_SecretShopOpenClose7processEP5CUserR8MSG_BASER9ParamBase+0xd8>
 81d295a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d295d:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d2961:	84 c0                	test   %al,%al
 81d2963:	0f 95 c0             	setne  %al
 81d2966:	0f b6 d8             	movzbl %al,%ebx
 81d2969:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d296c:	89 04 24             	mov    %eax,(%esp)
 81d296f:	e8 c4 5c 4b 00       	call   8688638 <_ZN5CUser17GetUserPosInPartyEv>
 81d2974:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81d2978:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d297c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d297f:	89 04 24             	mov    %eax,(%esp)
 81d2982:	e8 ab eb 8d 00       	call   8ab1532 <_ZN10secretshop16SECRET_SHOP_DATA9SetBuyingEib>
 81d2987:	b8 00 00 00 00       	mov    $0x0,%eax
 81d298c:	83 c4 24             	add    $0x24,%esp
 81d298f:	5b                   	pop    %ebx
 81d2990:	5d                   	pop    %ebp
 81d2991:	c3                   	ret

```

```c
// Dispatcher_SecretShopOpenClose::process @ 0x81d28b4

/* Dispatcher_SecretShopOpenClose::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_SecretShopOpenClose::process
          (Dispatcher_SecretShopOpenClose *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  MSG_BASE MVar1;
  undefined4 uVar2;
  SECRET_SHOP_DATA *this_00;
  int iVar3;
  
  uVar2 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  *(undefined4 *)(param_3 + 4) = uVar2;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar2 = LineFunc(0x2fdc,
                       "virtual int Dispatcher_SecretShopOpenClose::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),0);
    }
    else {
      this_00 = (SECRET_SHOP_DATA *)CUser::GetSecretShopData(param_1);
      if (this_00 == (SECRET_SHOP_DATA *)0x0) {
        *(undefined4 *)(param_3 + 4) = 0x7fffffff;
        uVar2 = 0;
      }
      else {
        MVar1 = param_2[0xd];
        iVar3 = CUser::GetUserPosInParty(param_1);
        secretshop::SECRET_SHOP_DATA::SetBuying(this_00,iVar3,MVar1 != (MSG_BASE)0x0);
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
// === 081d2834 Dispatcher_SecretShopOpenClose::read  [0x081d2834-0x81d2889] ===
 81d2834:	55                   	push   %ebp
 81d2835:	89 e5                	mov    %esp,%ebp
 81d2837:	83 ec 28             	sub    $0x28,%esp
 81d283a:	8b 45 10             	mov    0x10(%ebp),%eax
 81d283d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d2840:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d2843:	83 c0 0d             	add    $0xd,%eax
 81d2846:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d284a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d284d:	89 04 24             	mov    %eax,(%esp)
 81d2850:	e8 cd a6 3b 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81d2855:	83 f0 01             	xor    $0x1,%eax
 81d2858:	84 c0                	test   %al,%al
 81d285a:	74 26                	je     81d2882 <_ZN30Dispatcher_SecretShopOpenClose4readER9PacketBufR8MSG_BASE+0x4e>
 81d285c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d2863:	00 
 81d2864:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d286b:	00 
 81d286c:	c7 44 24 04 e0 36 bd 	movl   $0x8bd36e0,0x4(%esp)
 81d2873:	08 
 81d2874:	c7 04 24 c4 2f 00 00 	movl   $0x2fc4,(%esp)
 81d287b:	e8 57 e0 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d2880:	eb 05                	jmp    81d2887 <_ZN30Dispatcher_SecretShopOpenClose4readER9PacketBufR8MSG_BASE+0x53>
 81d2882:	b8 00 00 00 00       	mov    $0x0,%eax
 81d2887:	c9                   	leave
 81d2888:	c3                   	ret
 81d2889:	90                   	nop

```

```c
// Dispatcher_SecretShopOpenClose::read @ 0x81d2834

/* Dispatcher_SecretShopOpenClose::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SecretShopOpenClose::read
          (Dispatcher_SecretShopOpenClose *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x2fc4,
                     "virtual int Dispatcher_SecretShopOpenClose::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081d2992 Dispatcher_SecretShopOpenClose::send  [0x081d2992-0x81d29ab] ===
 81d2992:	55                   	push   %ebp
 81d2993:	89 e5                	mov    %esp,%ebp
 81d2995:	83 ec 10             	sub    $0x10,%esp
 81d2998:	8b 45 10             	mov    0x10(%ebp),%eax
 81d299b:	89 45 fc             	mov    %eax,-0x4(%ebp)
 81d299e:	8b 45 fc             	mov    -0x4(%ebp),%eax
 81d29a1:	8b 40 04             	mov    0x4(%eax),%eax
 81d29a4:	3d ff ff ff 7f       	cmp    $0x7fffffff,%eax
 81d29a9:	c9                   	leave
 81d29aa:	c3                   	ret
 81d29ab:	90                   	nop

```

```c
// Dispatcher_SecretShopOpenClose::send @ 0x81d2992

/* Dispatcher_SecretShopOpenClose::send(CUser*, ParamBase&) */

undefined4 __thiscall
Dispatcher_SecretShopOpenClose::send
          (Dispatcher_SecretShopOpenClose *this,CUser *param_1,ParamBase *param_2)

{
  return *(undefined4 *)(param_2 + 4);
}

```

