# CNCryptoBlowFish

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 13

---

## CNCryptoBlowFish

```asm
// === 0809980c CNCryptoBlowFish::CNCryptoBlowFish  [0x0809980c-0x80998f7] ===
 809980c:	55                   	push   %ebp
 809980d:	89 e5                	mov    %esp,%ebp
 809980f:	57                   	push   %edi
 8099810:	56                   	push   %esi
 8099811:	53                   	push   %ebx
 8099812:	83 ec 5c             	sub    $0x5c,%esp
 8099815:	8b 45 08             	mov    0x8(%ebp),%eax
 8099818:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 809981f:	00 
 8099820:	89 04 24             	mov    %eax,(%esp)
 8099823:	e8 c8 46 00 00       	call   809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>
 8099828:	8b 45 08             	mov    0x8(%ebp),%eax
 809982b:	c7 00 e8 36 b1 08    	movl   $0x8b136e8,(%eax)
 8099831:	8b 45 08             	mov    0x8(%ebp),%eax
 8099834:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 809983b:	8b 45 08             	mov    0x8(%ebp),%eax
 809983e:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8099845:	c7 44 24 04 38 00 00 	movl   $0x38,0x4(%esp)
 809984c:	00 
 809984d:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8099850:	89 04 24             	mov    %eax,(%esp)
 8099853:	e8 5a 4e 00 00       	call   809e6b2 <_Z17GenerateRandomKeyPhi>
 8099858:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 809985f:	00 
 8099860:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8099867:	00 
 8099868:	8d 45 e0             	lea    -0x20(%ebp),%eax
 809986b:	89 04 24             	mov    %eax,(%esp)
 809986e:	e8 83 06 00 00       	call   8099ef6 <_ZN6SBlockC1Ejj>
 8099873:	8d 75 e0             	lea    -0x20(%ebp),%esi
 8099876:	c7 04 24 58 10 00 00 	movl   $0x1058,(%esp)
 809987d:	e8 ce ab 68 00       	call   8724450 <_Znwj>
 8099882:	89 c3                	mov    %eax,%ebx
 8099884:	89 d8                	mov    %ebx,%eax
 8099886:	89 74 24 0c          	mov    %esi,0xc(%esp)
 809988a:	c7 44 24 08 38 00 00 	movl   $0x38,0x8(%esp)
 8099891:	00 
 8099892:	8d 55 a8             	lea    -0x58(%ebp),%edx
 8099895:	89 54 24 04          	mov    %edx,0x4(%esp)
 8099899:	89 04 24             	mov    %eax,(%esp)
 809989c:	e8 cb fc 00 00       	call   80a956c <_ZN9CBlowFishC1EPhjRK6SBlock>
 80998a1:	eb 12                	jmp    80998b5 <_ZN16CNCryptoBlowFishC1Ev+0xa9>
 80998a3:	89 d6                	mov    %edx,%esi
 80998a5:	89 c7                	mov    %eax,%edi
 80998a7:	89 1c 24             	mov    %ebx,(%esp)
 80998aa:	e8 41 ac 68 00       	call   87244f0 <_ZdlPv>
 80998af:	89 f8                	mov    %edi,%eax
 80998b1:	89 f2                	mov    %esi,%edx
 80998b3:	eb 20                	jmp    80998d5 <_ZN16CNCryptoBlowFishC1Ev+0xc9>
 80998b5:	89 da                	mov    %ebx,%edx
 80998b7:	8b 45 08             	mov    0x8(%ebp),%eax
 80998ba:	89 50 08             	mov    %edx,0x8(%eax)
 80998bd:	8b 45 08             	mov    0x8(%ebp),%eax
 80998c0:	8b 40 08             	mov    0x8(%eax),%eax
 80998c3:	85 c0                	test   %eax,%eax
 80998c5:	75 29                	jne    80998f0 <_ZN16CNCryptoBlowFishC1Ev+0xe4>
 80998c7:	c7 04 24 0d 00 00 70 	movl   $0x7000000d,(%esp)
 80998ce:	e8 89 4b 00 00       	call   809e45c <_Z19NCryptoSetLastErrorj>
 80998d3:	eb 1b                	jmp    80998f0 <_ZN16CNCryptoBlowFishC1Ev+0xe4>
 80998d5:	89 d3                	mov    %edx,%ebx
 80998d7:	89 c6                	mov    %eax,%esi
 80998d9:	8b 45 08             	mov    0x8(%ebp),%eax
 80998dc:	89 04 24             	mov    %eax,(%esp)
 80998df:	e8 24 46 00 00       	call   809df08 <_ZN12ICryptoGraphD1Ev>
 80998e4:	89 f0                	mov    %esi,%eax
 80998e6:	89 da                	mov    %ebx,%edx
 80998e8:	89 04 24             	mov    %eax,(%esp)
 80998eb:	e8 60 9e a4 00       	call   8ae3750 <_Unwind_Resume>
 80998f0:	83 c4 5c             	add    $0x5c,%esp
 80998f3:	5b                   	pop    %ebx
 80998f4:	5e                   	pop    %esi
 80998f5:	5f                   	pop    %edi
 80998f6:	5d                   	pop    %ebp
 80998f7:	c3                   	ret

```

```c
// CNCryptoBlowFish::CNCryptoBlowFish @ 0x809980c

/* CNCryptoBlowFish::CNCryptoBlowFish() */

void __thiscall CNCryptoBlowFish::CNCryptoBlowFish(CNCryptoBlowFish *this)

{
  CBlowFish *this_00;
  uchar local_5c [56];
  SBlock local_24 [20];
  
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,2);
  *(undefined ***)this = &PTR__CNCryptoBlowFish_08b136e8;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
                    /* try { // try from 08099853 to 08099881 has its CatchHandler @ 080998d5 */
  GenerateRandomKey(local_5c,0x38);
  SBlock::SBlock(local_24,0,0);
  this_00 = operator_new(0x1058);
                    /* try { // try from 0809989c to 080998a0 has its CatchHandler @ 080998a3 */
  CBlowFish::CBlowFish(this_00,local_5c,0x38,local_24);
  *(CBlowFish **)(this + 8) = this_00;
  if (*(int *)(this + 8) == 0) {
                    /* try { // try from 080998ce to 080998d2 has its CatchHandler @ 080998d5 */
    NCryptoSetLastError(0x7000000d);
  }
  return;
}

```

---

## CNCryptoBlowFish_08099968

```asm
// === 08099968 CNCryptoBlowFish::CNCryptoBlowFish  [0x08099968-0x809998b] ===
 8099968:	55                   	push   %ebp
 8099969:	89 e5                	mov    %esp,%ebp
 809996b:	83 ec 18             	sub    $0x18,%esp
 809996e:	8b 45 08             	mov    0x8(%ebp),%eax
 8099971:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8099978:	00 
 8099979:	89 04 24             	mov    %eax,(%esp)
 809997c:	e8 6f 45 00 00       	call   809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>
 8099981:	8b 45 08             	mov    0x8(%ebp),%eax
 8099984:	c7 00 e8 36 b1 08    	movl   $0x8b136e8,(%eax)
 809998a:	c9                   	leave
 809998b:	c3                   	ret

```

```c
// CNCryptoBlowFish::CNCryptoBlowFish @ 0x8099968

/* CNCryptoBlowFish::CNCryptoBlowFish(CNCryptoBlowFish const&) */

void __thiscall CNCryptoBlowFish::CNCryptoBlowFish(CNCryptoBlowFish *this,CNCryptoBlowFish *param_1)

{
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,2);
  *(undefined ***)this = &PTR__CNCryptoBlowFish_08b136e8;
  return;
}

```

---

## Decrypt

```asm
// === 08099c20 CNCryptoBlowFish::Decrypt  [0x08099c20-0x8099d15] ===
 8099c20:	55                   	push   %ebp
 8099c21:	89 e5                	mov    %esp,%ebp
 8099c23:	83 ec 38             	sub    $0x38,%esp
 8099c26:	8b 45 08             	mov    0x8(%ebp),%eax
 8099c29:	8b 40 08             	mov    0x8(%eax),%eax
 8099c2c:	85 c0                	test   %eax,%eax
 8099c2e:	75 0a                	jne    8099c3a <_ZN16CNCryptoBlowFish7DecryptEPhi+0x1a>
 8099c30:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 8099c35:	e9 d9 00 00 00       	jmp    8099d13 <_ZN16CNCryptoBlowFish7DecryptEPhi+0xf3>
 8099c3a:	8b 45 08             	mov    0x8(%ebp),%eax
 8099c3d:	8b 00                	mov    (%eax),%eax
 8099c3f:	83 c0 24             	add    $0x24,%eax
 8099c42:	8b 10                	mov    (%eax),%edx
 8099c44:	8b 45 08             	mov    0x8(%ebp),%eax
 8099c47:	89 04 24             	mov    %eax,(%esp)
 8099c4a:	ff d2                	call   *%edx
 8099c4c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8099c4f:	8b 55 10             	mov    0x10(%ebp),%edx
 8099c52:	89 d0                	mov    %edx,%eax
 8099c54:	c1 fa 1f             	sar    $0x1f,%edx
 8099c57:	f7 7d f4             	idivl  -0xc(%ebp)
 8099c5a:	89 d0                	mov    %edx,%eax
 8099c5c:	85 c0                	test   %eax,%eax
 8099c5e:	0f 95 c0             	setne  %al
 8099c61:	84 c0                	test   %al,%al
 8099c63:	74 0a                	je     8099c6f <_ZN16CNCryptoBlowFish7DecryptEPhi+0x4f>
 8099c65:	b8 06 00 00 70       	mov    $0x70000006,%eax
 8099c6a:	e9 a4 00 00 00       	jmp    8099d13 <_ZN16CNCryptoBlowFish7DecryptEPhi+0xf3>
 8099c6f:	8b 45 08             	mov    0x8(%ebp),%eax
 8099c72:	8b 40 0c             	mov    0xc(%eax),%eax
 8099c75:	83 f8 01             	cmp    $0x1,%eax
 8099c78:	74 3a                	je     8099cb4 <_ZN16CNCryptoBlowFish7DecryptEPhi+0x94>
 8099c7a:	83 f8 03             	cmp    $0x3,%eax
 8099c7d:	74 62                	je     8099ce1 <_ZN16CNCryptoBlowFish7DecryptEPhi+0xc1>
 8099c7f:	85 c0                	test   %eax,%eax
 8099c81:	0f 85 87 00 00 00    	jne    8099d0e <_ZN16CNCryptoBlowFish7DecryptEPhi+0xee>
 8099c87:	8b 55 10             	mov    0x10(%ebp),%edx
 8099c8a:	8b 45 08             	mov    0x8(%ebp),%eax
 8099c8d:	8b 40 08             	mov    0x8(%eax),%eax
 8099c90:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8099c97:	00 
 8099c98:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8099c9c:	8b 55 0c             	mov    0xc(%ebp),%edx
 8099c9f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8099ca3:	8b 55 0c             	mov    0xc(%ebp),%edx
 8099ca6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8099caa:	89 04 24             	mov    %eax,(%esp)
 8099cad:	e8 4a 04 01 00       	call   80aa0fc <_ZN9CBlowFish7DecryptEPKhPhji>
 8099cb2:	eb 5f                	jmp    8099d13 <_ZN16CNCryptoBlowFish7DecryptEPhi+0xf3>
 8099cb4:	8b 55 10             	mov    0x10(%ebp),%edx
 8099cb7:	8b 45 08             	mov    0x8(%ebp),%eax
 8099cba:	8b 40 08             	mov    0x8(%eax),%eax
 8099cbd:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8099cc4:	00 
 8099cc5:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8099cc9:	8b 55 0c             	mov    0xc(%ebp),%edx
 8099ccc:	89 54 24 08          	mov    %edx,0x8(%esp)
 8099cd0:	8b 55 0c             	mov    0xc(%ebp),%edx
 8099cd3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8099cd7:	89 04 24             	mov    %eax,(%esp)
 8099cda:	e8 1d 04 01 00       	call   80aa0fc <_ZN9CBlowFish7DecryptEPKhPhji>
 8099cdf:	eb 32                	jmp    8099d13 <_ZN16CNCryptoBlowFish7DecryptEPhi+0xf3>
 8099ce1:	8b 55 10             	mov    0x10(%ebp),%edx
 8099ce4:	8b 45 08             	mov    0x8(%ebp),%eax
 8099ce7:	8b 40 08             	mov    0x8(%eax),%eax
 8099cea:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 8099cf1:	00 
 8099cf2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8099cf6:	8b 55 0c             	mov    0xc(%ebp),%edx
 8099cf9:	89 54 24 08          	mov    %edx,0x8(%esp)
 8099cfd:	8b 55 0c             	mov    0xc(%ebp),%edx
 8099d00:	89 54 24 04          	mov    %edx,0x4(%esp)
 8099d04:	89 04 24             	mov    %eax,(%esp)
 8099d07:	e8 f0 03 01 00       	call   80aa0fc <_ZN9CBlowFish7DecryptEPKhPhji>
 8099d0c:	eb 05                	jmp    8099d13 <_ZN16CNCryptoBlowFish7DecryptEPhi+0xf3>
 8099d0e:	b8 17 00 00 70       	mov    $0x70000017,%eax
 8099d13:	c9                   	leave
 8099d14:	c3                   	ret
 8099d15:	90                   	nop

```

```c
// CNCryptoBlowFish::Decrypt @ 0x8099c20

/* CNCryptoBlowFish::Decrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoBlowFish::Decrypt(CNCryptoBlowFish *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x7000000c;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar2 == 0) {
      iVar2 = *(int *)(this + 0xc);
      if (iVar2 == 1) {
        uVar1 = CBlowFish::Decrypt(*(CBlowFish **)(this + 8),param_1,param_1,param_2,1);
      }
      else if (iVar2 == 3) {
        uVar1 = CBlowFish::Decrypt(*(CBlowFish **)(this + 8),param_1,param_1,param_2,2);
      }
      else if (iVar2 == 0) {
        uVar1 = CBlowFish::Decrypt(*(CBlowFish **)(this + 8),param_1,param_1,param_2,0);
      }
      else {
        uVar1 = 0x70000017;
      }
    }
    else {
      uVar1 = 0x70000006;
    }
  }
  return uVar1;
}

```

---

## Decrypt_08099dfc

```asm
// === 08099dfc CNCryptoBlowFish::Decrypt  [0x08099dfc-0x8099ee1] ===
 8099dfc:	55                   	push   %ebp
 8099dfd:	89 e5                	mov    %esp,%ebp
 8099dff:	83 ec 28             	sub    $0x28,%esp
 8099e02:	8b 45 08             	mov    0x8(%ebp),%eax
 8099e05:	8b 40 08             	mov    0x8(%eax),%eax
 8099e08:	85 c0                	test   %eax,%eax
 8099e0a:	75 0a                	jne    8099e16 <_ZN16CNCryptoBlowFish7DecryptEPKhiPhi+0x1a>
 8099e0c:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 8099e11:	e9 ca 00 00 00       	jmp    8099ee0 <_ZN16CNCryptoBlowFish7DecryptEPKhiPhi+0xe4>
 8099e16:	8b 45 10             	mov    0x10(%ebp),%eax
 8099e19:	3b 45 18             	cmp    0x18(%ebp),%eax
 8099e1c:	7e 0a                	jle    8099e28 <_ZN16CNCryptoBlowFish7DecryptEPKhiPhi+0x2c>
 8099e1e:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 8099e23:	e9 b8 00 00 00       	jmp    8099ee0 <_ZN16CNCryptoBlowFish7DecryptEPKhiPhi+0xe4>
 8099e28:	8b 45 10             	mov    0x10(%ebp),%eax
 8099e2b:	83 e0 07             	and    $0x7,%eax
 8099e2e:	85 c0                	test   %eax,%eax
 8099e30:	74 0a                	je     8099e3c <_ZN16CNCryptoBlowFish7DecryptEPKhiPhi+0x40>
 8099e32:	b8 06 00 00 70       	mov    $0x70000006,%eax
 8099e37:	e9 a4 00 00 00       	jmp    8099ee0 <_ZN16CNCryptoBlowFish7DecryptEPKhiPhi+0xe4>
 8099e3c:	8b 45 08             	mov    0x8(%ebp),%eax
 8099e3f:	8b 40 0c             	mov    0xc(%eax),%eax
 8099e42:	83 f8 01             	cmp    $0x1,%eax
 8099e45:	74 3a                	je     8099e81 <_ZN16CNCryptoBlowFish7DecryptEPKhiPhi+0x85>
 8099e47:	83 f8 03             	cmp    $0x3,%eax
 8099e4a:	74 62                	je     8099eae <_ZN16CNCryptoBlowFish7DecryptEPKhiPhi+0xb2>
 8099e4c:	85 c0                	test   %eax,%eax
 8099e4e:	0f 85 87 00 00 00    	jne    8099edb <_ZN16CNCryptoBlowFish7DecryptEPKhiPhi+0xdf>
 8099e54:	8b 55 10             	mov    0x10(%ebp),%edx
 8099e57:	8b 45 08             	mov    0x8(%ebp),%eax
 8099e5a:	8b 40 08             	mov    0x8(%eax),%eax
 8099e5d:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8099e64:	00 
 8099e65:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8099e69:	8b 55 14             	mov    0x14(%ebp),%edx
 8099e6c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8099e70:	8b 55 0c             	mov    0xc(%ebp),%edx
 8099e73:	89 54 24 04          	mov    %edx,0x4(%esp)
 8099e77:	89 04 24             	mov    %eax,(%esp)
 8099e7a:	e8 7d 02 01 00       	call   80aa0fc <_ZN9CBlowFish7DecryptEPKhPhji>
 8099e7f:	eb 5f                	jmp    8099ee0 <_ZN16CNCryptoBlowFish7DecryptEPKhiPhi+0xe4>
 8099e81:	8b 55 10             	mov    0x10(%ebp),%edx
 8099e84:	8b 45 08             	mov    0x8(%ebp),%eax
 8099e87:	8b 40 08             	mov    0x8(%eax),%eax
 8099e8a:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8099e91:	00 
 8099e92:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8099e96:	8b 55 14             	mov    0x14(%ebp),%edx
 8099e99:	89 54 24 08          	mov    %edx,0x8(%esp)
 8099e9d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8099ea0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8099ea4:	89 04 24             	mov    %eax,(%esp)
 8099ea7:	e8 50 02 01 00       	call   80aa0fc <_ZN9CBlowFish7DecryptEPKhPhji>
 8099eac:	eb 32                	jmp    8099ee0 <_ZN16CNCryptoBlowFish7DecryptEPKhiPhi+0xe4>
 8099eae:	8b 55 10             	mov    0x10(%ebp),%edx
 8099eb1:	8b 45 08             	mov    0x8(%ebp),%eax
 8099eb4:	8b 40 08             	mov    0x8(%eax),%eax
 8099eb7:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 8099ebe:	00 
 8099ebf:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8099ec3:	8b 55 14             	mov    0x14(%ebp),%edx
 8099ec6:	89 54 24 08          	mov    %edx,0x8(%esp)
 8099eca:	8b 55 0c             	mov    0xc(%ebp),%edx
 8099ecd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8099ed1:	89 04 24             	mov    %eax,(%esp)
 8099ed4:	e8 23 02 01 00       	call   80aa0fc <_ZN9CBlowFish7DecryptEPKhPhji>
 8099ed9:	eb 05                	jmp    8099ee0 <_ZN16CNCryptoBlowFish7DecryptEPKhiPhi+0xe4>
 8099edb:	b8 17 00 00 70       	mov    $0x70000017,%eax
 8099ee0:	c9                   	leave
 8099ee1:	c3                   	ret

```

```c
// CNCryptoBlowFish::Decrypt @ 0x8099dfc

/* CNCryptoBlowFish::Decrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoBlowFish::Decrypt
          (CNCryptoBlowFish *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 0x7000000c;
  }
  else if (param_4 < param_2) {
    uVar2 = 0x7000000a;
  }
  else if ((param_2 & 7U) == 0) {
    iVar1 = *(int *)(this + 0xc);
    if (iVar1 == 1) {
      uVar2 = CBlowFish::Decrypt(*(CBlowFish **)(this + 8),param_1,param_3,param_2,1);
    }
    else if (iVar1 == 3) {
      uVar2 = CBlowFish::Decrypt(*(CBlowFish **)(this + 8),param_1,param_3,param_2,2);
    }
    else if (iVar1 == 0) {
      uVar2 = CBlowFish::Decrypt(*(CBlowFish **)(this + 8),param_1,param_3,param_2,0);
    }
    else {
      uVar2 = 0x70000017;
    }
  }
  else {
    uVar2 = 0x70000006;
  }
  return uVar2;
}

```

---

## Encrypt

```asm
// === 08099b2a CNCryptoBlowFish::Encrypt  [0x08099b2a-0x8099c1f] ===
 8099b2a:	55                   	push   %ebp
 8099b2b:	89 e5                	mov    %esp,%ebp
 8099b2d:	83 ec 38             	sub    $0x38,%esp
 8099b30:	8b 45 08             	mov    0x8(%ebp),%eax
 8099b33:	8b 40 08             	mov    0x8(%eax),%eax
 8099b36:	85 c0                	test   %eax,%eax
 8099b38:	75 0a                	jne    8099b44 <_ZN16CNCryptoBlowFish7EncryptEPhi+0x1a>
 8099b3a:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 8099b3f:	e9 d9 00 00 00       	jmp    8099c1d <_ZN16CNCryptoBlowFish7EncryptEPhi+0xf3>
 8099b44:	8b 45 08             	mov    0x8(%ebp),%eax
 8099b47:	8b 00                	mov    (%eax),%eax
 8099b49:	83 c0 24             	add    $0x24,%eax
 8099b4c:	8b 10                	mov    (%eax),%edx
 8099b4e:	8b 45 08             	mov    0x8(%ebp),%eax
 8099b51:	89 04 24             	mov    %eax,(%esp)
 8099b54:	ff d2                	call   *%edx
 8099b56:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8099b59:	8b 55 10             	mov    0x10(%ebp),%edx
 8099b5c:	89 d0                	mov    %edx,%eax
 8099b5e:	c1 fa 1f             	sar    $0x1f,%edx
 8099b61:	f7 7d f4             	idivl  -0xc(%ebp)
 8099b64:	89 d0                	mov    %edx,%eax
 8099b66:	85 c0                	test   %eax,%eax
 8099b68:	0f 95 c0             	setne  %al
 8099b6b:	84 c0                	test   %al,%al
 8099b6d:	74 0a                	je     8099b79 <_ZN16CNCryptoBlowFish7EncryptEPhi+0x4f>
 8099b6f:	b8 06 00 00 70       	mov    $0x70000006,%eax
 8099b74:	e9 a4 00 00 00       	jmp    8099c1d <_ZN16CNCryptoBlowFish7EncryptEPhi+0xf3>
 8099b79:	8b 45 08             	mov    0x8(%ebp),%eax
 8099b7c:	8b 40 0c             	mov    0xc(%eax),%eax
 8099b7f:	83 f8 01             	cmp    $0x1,%eax
 8099b82:	74 3a                	je     8099bbe <_ZN16CNCryptoBlowFish7EncryptEPhi+0x94>
 8099b84:	83 f8 03             	cmp    $0x3,%eax
 8099b87:	74 62                	je     8099beb <_ZN16CNCryptoBlowFish7EncryptEPhi+0xc1>
 8099b89:	85 c0                	test   %eax,%eax
 8099b8b:	0f 85 87 00 00 00    	jne    8099c18 <_ZN16CNCryptoBlowFish7EncryptEPhi+0xee>
 8099b91:	8b 55 10             	mov    0x10(%ebp),%edx
 8099b94:	8b 45 08             	mov    0x8(%ebp),%eax
 8099b97:	8b 40 08             	mov    0x8(%eax),%eax
 8099b9a:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8099ba1:	00 
 8099ba2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8099ba6:	8b 55 0c             	mov    0xc(%ebp),%edx
 8099ba9:	89 54 24 08          	mov    %edx,0x8(%esp)
 8099bad:	8b 55 0c             	mov    0xc(%ebp),%edx
 8099bb0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8099bb4:	89 04 24             	mov    %eax,(%esp)
 8099bb7:	e8 92 03 01 00       	call   80a9f4e <_ZN9CBlowFish7EncryptEPKhPhji>
 8099bbc:	eb 5f                	jmp    8099c1d <_ZN16CNCryptoBlowFish7EncryptEPhi+0xf3>
 8099bbe:	8b 55 10             	mov    0x10(%ebp),%edx
 8099bc1:	8b 45 08             	mov    0x8(%ebp),%eax
 8099bc4:	8b 40 08             	mov    0x8(%eax),%eax
 8099bc7:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8099bce:	00 
 8099bcf:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8099bd3:	8b 55 0c             	mov    0xc(%ebp),%edx
 8099bd6:	89 54 24 08          	mov    %edx,0x8(%esp)
 8099bda:	8b 55 0c             	mov    0xc(%ebp),%edx
 8099bdd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8099be1:	89 04 24             	mov    %eax,(%esp)
 8099be4:	e8 65 03 01 00       	call   80a9f4e <_ZN9CBlowFish7EncryptEPKhPhji>
 8099be9:	eb 32                	jmp    8099c1d <_ZN16CNCryptoBlowFish7EncryptEPhi+0xf3>
 8099beb:	8b 55 10             	mov    0x10(%ebp),%edx
 8099bee:	8b 45 08             	mov    0x8(%ebp),%eax
 8099bf1:	8b 40 08             	mov    0x8(%eax),%eax
 8099bf4:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 8099bfb:	00 
 8099bfc:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8099c00:	8b 55 0c             	mov    0xc(%ebp),%edx
 8099c03:	89 54 24 08          	mov    %edx,0x8(%esp)
 8099c07:	8b 55 0c             	mov    0xc(%ebp),%edx
 8099c0a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8099c0e:	89 04 24             	mov    %eax,(%esp)
 8099c11:	e8 38 03 01 00       	call   80a9f4e <_ZN9CBlowFish7EncryptEPKhPhji>
 8099c16:	eb 05                	jmp    8099c1d <_ZN16CNCryptoBlowFish7EncryptEPhi+0xf3>
 8099c18:	b8 17 00 00 70       	mov    $0x70000017,%eax
 8099c1d:	c9                   	leave
 8099c1e:	c3                   	ret
 8099c1f:	90                   	nop

```

```c
// CNCryptoBlowFish::Encrypt @ 0x8099b2a

/* CNCryptoBlowFish::Encrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoBlowFish::Encrypt(CNCryptoBlowFish *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x7000000c;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar2 == 0) {
      iVar2 = *(int *)(this + 0xc);
      if (iVar2 == 1) {
        uVar1 = CBlowFish::Encrypt(*(CBlowFish **)(this + 8),param_1,param_1,param_2,1);
      }
      else if (iVar2 == 3) {
        uVar1 = CBlowFish::Encrypt(*(CBlowFish **)(this + 8),param_1,param_1,param_2,2);
      }
      else if (iVar2 == 0) {
        uVar1 = CBlowFish::Encrypt(*(CBlowFish **)(this + 8),param_1,param_1,param_2,0);
      }
      else {
        uVar1 = 0x70000017;
      }
    }
    else {
      uVar1 = 0x70000006;
    }
  }
  return uVar1;
}

```

---

## Encrypt_08099d16

```asm
// === 08099d16 CNCryptoBlowFish::Encrypt  [0x08099d16-0x8099dfb] ===
 8099d16:	55                   	push   %ebp
 8099d17:	89 e5                	mov    %esp,%ebp
 8099d19:	83 ec 28             	sub    $0x28,%esp
 8099d1c:	8b 45 08             	mov    0x8(%ebp),%eax
 8099d1f:	8b 40 08             	mov    0x8(%eax),%eax
 8099d22:	85 c0                	test   %eax,%eax
 8099d24:	75 0a                	jne    8099d30 <_ZN16CNCryptoBlowFish7EncryptEPKhiPhi+0x1a>
 8099d26:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 8099d2b:	e9 ca 00 00 00       	jmp    8099dfa <_ZN16CNCryptoBlowFish7EncryptEPKhiPhi+0xe4>
 8099d30:	8b 45 10             	mov    0x10(%ebp),%eax
 8099d33:	3b 45 18             	cmp    0x18(%ebp),%eax
 8099d36:	7e 0a                	jle    8099d42 <_ZN16CNCryptoBlowFish7EncryptEPKhiPhi+0x2c>
 8099d38:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 8099d3d:	e9 b8 00 00 00       	jmp    8099dfa <_ZN16CNCryptoBlowFish7EncryptEPKhiPhi+0xe4>
 8099d42:	8b 45 10             	mov    0x10(%ebp),%eax
 8099d45:	83 e0 07             	and    $0x7,%eax
 8099d48:	85 c0                	test   %eax,%eax
 8099d4a:	74 0a                	je     8099d56 <_ZN16CNCryptoBlowFish7EncryptEPKhiPhi+0x40>
 8099d4c:	b8 06 00 00 70       	mov    $0x70000006,%eax
 8099d51:	e9 a4 00 00 00       	jmp    8099dfa <_ZN16CNCryptoBlowFish7EncryptEPKhiPhi+0xe4>
 8099d56:	8b 45 08             	mov    0x8(%ebp),%eax
 8099d59:	8b 40 0c             	mov    0xc(%eax),%eax
 8099d5c:	83 f8 01             	cmp    $0x1,%eax
 8099d5f:	74 3a                	je     8099d9b <_ZN16CNCryptoBlowFish7EncryptEPKhiPhi+0x85>
 8099d61:	83 f8 03             	cmp    $0x3,%eax
 8099d64:	74 62                	je     8099dc8 <_ZN16CNCryptoBlowFish7EncryptEPKhiPhi+0xb2>
 8099d66:	85 c0                	test   %eax,%eax
 8099d68:	0f 85 87 00 00 00    	jne    8099df5 <_ZN16CNCryptoBlowFish7EncryptEPKhiPhi+0xdf>
 8099d6e:	8b 55 10             	mov    0x10(%ebp),%edx
 8099d71:	8b 45 08             	mov    0x8(%ebp),%eax
 8099d74:	8b 40 08             	mov    0x8(%eax),%eax
 8099d77:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8099d7e:	00 
 8099d7f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8099d83:	8b 55 14             	mov    0x14(%ebp),%edx
 8099d86:	89 54 24 08          	mov    %edx,0x8(%esp)
 8099d8a:	8b 55 0c             	mov    0xc(%ebp),%edx
 8099d8d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8099d91:	89 04 24             	mov    %eax,(%esp)
 8099d94:	e8 b5 01 01 00       	call   80a9f4e <_ZN9CBlowFish7EncryptEPKhPhji>
 8099d99:	eb 5f                	jmp    8099dfa <_ZN16CNCryptoBlowFish7EncryptEPKhiPhi+0xe4>
 8099d9b:	8b 55 10             	mov    0x10(%ebp),%edx
 8099d9e:	8b 45 08             	mov    0x8(%ebp),%eax
 8099da1:	8b 40 08             	mov    0x8(%eax),%eax
 8099da4:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8099dab:	00 
 8099dac:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8099db0:	8b 55 14             	mov    0x14(%ebp),%edx
 8099db3:	89 54 24 08          	mov    %edx,0x8(%esp)
 8099db7:	8b 55 0c             	mov    0xc(%ebp),%edx
 8099dba:	89 54 24 04          	mov    %edx,0x4(%esp)
 8099dbe:	89 04 24             	mov    %eax,(%esp)
 8099dc1:	e8 88 01 01 00       	call   80a9f4e <_ZN9CBlowFish7EncryptEPKhPhji>
 8099dc6:	eb 32                	jmp    8099dfa <_ZN16CNCryptoBlowFish7EncryptEPKhiPhi+0xe4>
 8099dc8:	8b 55 10             	mov    0x10(%ebp),%edx
 8099dcb:	8b 45 08             	mov    0x8(%ebp),%eax
 8099dce:	8b 40 08             	mov    0x8(%eax),%eax
 8099dd1:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8099dd8:	00 
 8099dd9:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8099ddd:	8b 55 14             	mov    0x14(%ebp),%edx
 8099de0:	89 54 24 08          	mov    %edx,0x8(%esp)
 8099de4:	8b 55 0c             	mov    0xc(%ebp),%edx
 8099de7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8099deb:	89 04 24             	mov    %eax,(%esp)
 8099dee:	e8 5b 01 01 00       	call   80a9f4e <_ZN9CBlowFish7EncryptEPKhPhji>
 8099df3:	eb 05                	jmp    8099dfa <_ZN16CNCryptoBlowFish7EncryptEPKhiPhi+0xe4>
 8099df5:	b8 17 00 00 70       	mov    $0x70000017,%eax
 8099dfa:	c9                   	leave
 8099dfb:	c3                   	ret

```

```c
// CNCryptoBlowFish::Encrypt @ 0x8099d16

/* CNCryptoBlowFish::Encrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoBlowFish::Encrypt
          (CNCryptoBlowFish *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 0x7000000c;
  }
  else if (param_4 < param_2) {
    uVar2 = 0x7000000a;
  }
  else if ((param_2 & 7U) == 0) {
    iVar1 = *(int *)(this + 0xc);
    if (iVar1 == 1) {
      uVar2 = CBlowFish::Encrypt(*(CBlowFish **)(this + 8),param_1,param_3,param_2,1);
    }
    else if (iVar1 == 3) {
      uVar2 = CBlowFish::Encrypt(*(CBlowFish **)(this + 8),param_1,param_3,param_2,1);
    }
    else if (iVar1 == 0) {
      uVar2 = CBlowFish::Encrypt(*(CBlowFish **)(this + 8),param_1,param_3,param_2,0);
    }
    else {
      uVar2 = 0x70000017;
    }
  }
  else {
    uVar2 = 0x70000006;
  }
  return uVar2;
}

```

---

## GetBlockSize

```asm
// === 08099eec CNCryptoBlowFish::GetBlockSize  [0x08099eec-0x8099f0b] ===
 8099eec:	55                   	push   %ebp
 8099eed:	89 e5                	mov    %esp,%ebp
 8099eef:	b8 08 00 00 00       	mov    $0x8,%eax
 8099ef4:	5d                   	pop    %ebp
 8099ef5:	c3                   	ret

08099ef6 <_ZN6SBlockC1Ejj>:
 8099ef6:	55                   	push   %ebp
 8099ef7:	89 e5                	mov    %esp,%ebp
 8099ef9:	8b 45 08             	mov    0x8(%ebp),%eax
 8099efc:	8b 55 0c             	mov    0xc(%ebp),%edx
 8099eff:	89 10                	mov    %edx,(%eax)
 8099f01:	8b 45 08             	mov    0x8(%ebp),%eax
 8099f04:	8b 55 10             	mov    0x10(%ebp),%edx
 8099f07:	89 50 04             	mov    %edx,0x4(%eax)
 8099f0a:	5d                   	pop    %ebp
 8099f0b:	c3                   	ret

```

```c
// CNCryptoBlowFish::GetBlockSize @ 0x8099eec

/* CNCryptoBlowFish::GetBlockSize() const */

undefined4 CNCryptoBlowFish::GetBlockSize(void)

{
  return 8;
}

```

---

## GetKeySize

```asm
// === 08099ee2 CNCryptoBlowFish::GetKeySize  [0x08099ee2-0x8099eeb] ===
 8099ee2:	55                   	push   %ebp
 8099ee3:	89 e5                	mov    %esp,%ebp
 8099ee5:	b8 38 00 00 00       	mov    $0x38,%eax
 8099eea:	5d                   	pop    %ebp
 8099eeb:	c3                   	ret

```

```c
// CNCryptoBlowFish::GetKeySize @ 0x8099ee2

/* CNCryptoBlowFish::GetKeySize() const */

undefined4 CNCryptoBlowFish::GetKeySize(void)

{
  return 0x38;
}

```

---

## Initialize

```asm
// === 080999a8 CNCryptoBlowFish::Initialize  [0x080999a8-0x8099b29] ===
 80999a8:	55                   	push   %ebp
 80999a9:	89 e5                	mov    %esp,%ebp
 80999ab:	57                   	push   %edi
 80999ac:	56                   	push   %esi
 80999ad:	53                   	push   %ebx
 80999ae:	83 ec 6c             	sub    $0x6c,%esp
 80999b1:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 80999b5:	7f 0a                	jg     80999c1 <_ZN16CNCryptoBlowFish10InitializeEPKhi+0x19>
 80999b7:	b8 02 00 00 70       	mov    $0x70000002,%eax
 80999bc:	e9 61 01 00 00       	jmp    8099b22 <_ZN16CNCryptoBlowFish10InitializeEPKhi+0x17a>
 80999c1:	83 7d 10 37          	cmpl   $0x37,0x10(%ebp)
 80999c5:	0f 8e 92 00 00 00    	jle    8099a5d <_ZN16CNCryptoBlowFish10InitializeEPKhi+0xb5>
 80999cb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80999d2:	00 
 80999d3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80999da:	00 
 80999db:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80999de:	89 04 24             	mov    %eax,(%esp)
 80999e1:	e8 10 05 00 00       	call   8099ef6 <_ZN6SBlockC1Ejj>
 80999e6:	8d 75 d0             	lea    -0x30(%ebp),%esi
 80999e9:	c7 04 24 58 10 00 00 	movl   $0x1058,(%esp)
 80999f0:	e8 5b aa 68 00       	call   8724450 <_Znwj>
 80999f5:	89 c3                	mov    %eax,%ebx
 80999f7:	89 d8                	mov    %ebx,%eax
 80999f9:	89 74 24 0c          	mov    %esi,0xc(%esp)
 80999fd:	c7 44 24 08 38 00 00 	movl   $0x38,0x8(%esp)
 8099a04:	00 
 8099a05:	8b 55 0c             	mov    0xc(%ebp),%edx
 8099a08:	89 54 24 04          	mov    %edx,0x4(%esp)
 8099a0c:	89 04 24             	mov    %eax,(%esp)
 8099a0f:	e8 58 fb 00 00       	call   80a956c <_ZN9CBlowFishC1EPhjRK6SBlock>
 8099a14:	eb 18                	jmp    8099a2e <_ZN16CNCryptoBlowFish10InitializeEPKhi+0x86>
 8099a16:	89 d6                	mov    %edx,%esi
 8099a18:	89 c7                	mov    %eax,%edi
 8099a1a:	89 1c 24             	mov    %ebx,(%esp)
 8099a1d:	e8 ce aa 68 00       	call   87244f0 <_ZdlPv>
 8099a22:	89 f8                	mov    %edi,%eax
 8099a24:	89 f2                	mov    %esi,%edx
 8099a26:	89 04 24             	mov    %eax,(%esp)
 8099a29:	e8 22 9d a4 00       	call   8ae3750 <_Unwind_Resume>
 8099a2e:	89 5d e0             	mov    %ebx,-0x20(%ebp)
 8099a31:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8099a35:	74 1c                	je     8099a53 <_ZN16CNCryptoBlowFish10InitializeEPKhi+0xab>
 8099a37:	8b 45 08             	mov    0x8(%ebp),%eax
 8099a3a:	8b 40 08             	mov    0x8(%eax),%eax
 8099a3d:	89 04 24             	mov    %eax,(%esp)
 8099a40:	e8 ab aa 68 00       	call   87244f0 <_ZdlPv>
 8099a45:	8b 45 08             	mov    0x8(%ebp),%eax
 8099a48:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8099a4b:	89 50 08             	mov    %edx,0x8(%eax)
 8099a4e:	e9 ca 00 00 00       	jmp    8099b1d <_ZN16CNCryptoBlowFish10InitializeEPKhi+0x175>
 8099a53:	b8 0d 00 00 70       	mov    $0x7000000d,%eax
 8099a58:	e9 c5 00 00 00       	jmp    8099b22 <_ZN16CNCryptoBlowFish10InitializeEPKhi+0x17a>
 8099a5d:	c7 44 24 08 38 00 00 	movl   $0x38,0x8(%esp)
 8099a64:	00 
 8099a65:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8099a6c:	00 
 8099a6d:	8d 45 98             	lea    -0x68(%ebp),%eax
 8099a70:	89 04 24             	mov    %eax,(%esp)
 8099a73:	e8 48 42 fe ff       	call   807dcc0 <memset@plt>
 8099a78:	8b 45 10             	mov    0x10(%ebp),%eax
 8099a7b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8099a7f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8099a82:	89 44 24 04          	mov    %eax,0x4(%esp)
 8099a86:	8d 45 98             	lea    -0x68(%ebp),%eax
 8099a89:	89 04 24             	mov    %eax,(%esp)
 8099a8c:	e8 0f 3e fe ff       	call   807d8a0 <memcpy@plt>
 8099a91:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8099a98:	00 
 8099a99:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8099aa0:	00 
 8099aa1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8099aa4:	89 04 24             	mov    %eax,(%esp)
 8099aa7:	e8 4a 04 00 00       	call   8099ef6 <_ZN6SBlockC1Ejj>
 8099aac:	8d 75 d8             	lea    -0x28(%ebp),%esi
 8099aaf:	c7 04 24 58 10 00 00 	movl   $0x1058,(%esp)
 8099ab6:	e8 95 a9 68 00       	call   8724450 <_Znwj>
 8099abb:	89 c3                	mov    %eax,%ebx
 8099abd:	89 d8                	mov    %ebx,%eax
 8099abf:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8099ac3:	c7 44 24 08 38 00 00 	movl   $0x38,0x8(%esp)
 8099aca:	00 
 8099acb:	8d 55 98             	lea    -0x68(%ebp),%edx
 8099ace:	89 54 24 04          	mov    %edx,0x4(%esp)
 8099ad2:	89 04 24             	mov    %eax,(%esp)
 8099ad5:	e8 92 fa 00 00       	call   80a956c <_ZN9CBlowFishC1EPhjRK6SBlock>
 8099ada:	eb 18                	jmp    8099af4 <_ZN16CNCryptoBlowFish10InitializeEPKhi+0x14c>
 8099adc:	89 d6                	mov    %edx,%esi
 8099ade:	89 c7                	mov    %eax,%edi
 8099ae0:	89 1c 24             	mov    %ebx,(%esp)
 8099ae3:	e8 08 aa 68 00       	call   87244f0 <_ZdlPv>
 8099ae8:	89 f8                	mov    %edi,%eax
 8099aea:	89 f2                	mov    %esi,%edx
 8099aec:	89 04 24             	mov    %eax,(%esp)
 8099aef:	e8 5c 9c a4 00       	call   8ae3750 <_Unwind_Resume>
 8099af4:	89 5d e4             	mov    %ebx,-0x1c(%ebp)
 8099af7:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8099afb:	74 19                	je     8099b16 <_ZN16CNCryptoBlowFish10InitializeEPKhi+0x16e>
 8099afd:	8b 45 08             	mov    0x8(%ebp),%eax
 8099b00:	8b 40 08             	mov    0x8(%eax),%eax
 8099b03:	89 04 24             	mov    %eax,(%esp)
 8099b06:	e8 e5 a9 68 00       	call   87244f0 <_ZdlPv>
 8099b0b:	8b 45 08             	mov    0x8(%ebp),%eax
 8099b0e:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8099b11:	89 50 08             	mov    %edx,0x8(%eax)
 8099b14:	eb 07                	jmp    8099b1d <_ZN16CNCryptoBlowFish10InitializeEPKhi+0x175>
 8099b16:	b8 0d 00 00 70       	mov    $0x7000000d,%eax
 8099b1b:	eb 05                	jmp    8099b22 <_ZN16CNCryptoBlowFish10InitializeEPKhi+0x17a>
 8099b1d:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 8099b22:	83 c4 6c             	add    $0x6c,%esp
 8099b25:	5b                   	pop    %ebx
 8099b26:	5e                   	pop    %esi
 8099b27:	5f                   	pop    %edi
 8099b28:	5d                   	pop    %ebp
 8099b29:	c3                   	ret

```

```c
// CNCryptoBlowFish::Initialize @ 0x80999a8

/* CNCryptoBlowFish::Initialize(unsigned char const*, int) */

undefined4 __thiscall
CNCryptoBlowFish::Initialize(CNCryptoBlowFish *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  CBlowFish *pCVar2;
  uchar local_6c [56];
  SBlock local_34 [8];
  SBlock local_2c [8];
  CBlowFish *local_24;
  CBlowFish *local_20;
  
  if (param_2 < 1) {
    uVar1 = 0x70000002;
  }
  else {
    if (param_2 < 0x38) {
      memset(local_6c,0,0x38);
      memcpy(local_6c,param_1,param_2);
      SBlock::SBlock(local_2c,0,0);
      pCVar2 = operator_new(0x1058);
                    /* try { // try from 08099ad5 to 08099ad9 has its CatchHandler @ 08099adc */
      CBlowFish::CBlowFish(pCVar2,local_6c,0x38,local_2c);
      if (pCVar2 == (CBlowFish *)0x0) {
        return 0x7000000d;
      }
      local_20 = pCVar2;
      operator_delete(*(void **)(this + 8));
      *(CBlowFish **)(this + 8) = local_20;
    }
    else {
      SBlock::SBlock(local_34,0,0);
      pCVar2 = operator_new(0x1058);
                    /* try { // try from 08099a0f to 08099a13 has its CatchHandler @ 08099a16 */
      CBlowFish::CBlowFish(pCVar2,param_1,0x38,local_34);
      if (pCVar2 == (CBlowFish *)0x0) {
        return 0x7000000d;
      }
      local_24 = pCVar2;
      operator_delete(*(void **)(this + 8));
      *(CBlowFish **)(this + 8) = local_24;
    }
    uVar1 = 0x6fffffff;
  }
  return uVar1;
}

```

---

## SetMode

```asm
// === 08099994 CNCryptoBlowFish::SetMode  [0x08099994-0x80999a7] ===
 8099994:	55                   	push   %ebp
 8099995:	89 e5                	mov    %esp,%ebp
 8099997:	8b 45 08             	mov    0x8(%ebp),%eax
 809999a:	8b 55 0c             	mov    0xc(%ebp),%edx
 809999d:	89 50 0c             	mov    %edx,0xc(%eax)
 80999a0:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80999a5:	5d                   	pop    %ebp
 80999a6:	c3                   	ret
 80999a7:	90                   	nop

```

```c
// CNCryptoBlowFish::SetMode @ 0x8099994

/* CNCryptoBlowFish::SetMode(CRYPTO_MODE_TYPE) */

undefined4 __thiscall CNCryptoBlowFish::SetMode(CNCryptoBlowFish *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0xc) = param_2;
  return 0x6fffffff;
}

```

---

## operator=

```asm
// === 0809998c CNCryptoBlowFish::operator=  [0x0809998c-0x8099993] ===
 809998c:	55                   	push   %ebp
 809998d:	89 e5                	mov    %esp,%ebp
 809998f:	8b 45 08             	mov    0x8(%ebp),%eax
 8099992:	5d                   	pop    %ebp
 8099993:	c3                   	ret

```

```c
// CNCryptoBlowFish::operator= @ 0x809998c

/* CNCryptoBlowFish::TEMPNAMEPLACEHOLDERVALUE(CNCryptoBlowFish const&) */

CNCryptoBlowFish * __thiscall
CNCryptoBlowFish::operator=(CNCryptoBlowFish *this,CNCryptoBlowFish *param_1)

{
  return this;
}

```

---

## ~CNCryptoBlowFish

```asm
// === 080998f8 CNCryptoBlowFish::~CNCryptoBlowFish  [0x080998f8-0x8099949] ===
 80998f8:	55                   	push   %ebp
 80998f9:	89 e5                	mov    %esp,%ebp
 80998fb:	83 ec 18             	sub    $0x18,%esp
 80998fe:	8b 45 08             	mov    0x8(%ebp),%eax
 8099901:	c7 00 e8 36 b1 08    	movl   $0x8b136e8,(%eax)
 8099907:	8b 45 08             	mov    0x8(%ebp),%eax
 809990a:	8b 40 08             	mov    0x8(%eax),%eax
 809990d:	85 c0                	test   %eax,%eax
 809990f:	74 18                	je     8099929 <_ZN16CNCryptoBlowFishD1Ev+0x31>
 8099911:	8b 45 08             	mov    0x8(%ebp),%eax
 8099914:	8b 40 08             	mov    0x8(%eax),%eax
 8099917:	89 04 24             	mov    %eax,(%esp)
 809991a:	e8 d1 ab 68 00       	call   87244f0 <_ZdlPv>
 809991f:	8b 45 08             	mov    0x8(%ebp),%eax
 8099922:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8099929:	8b 45 08             	mov    0x8(%ebp),%eax
 809992c:	89 04 24             	mov    %eax,(%esp)
 809992f:	e8 d4 45 00 00       	call   809df08 <_ZN12ICryptoGraphD1Ev>
 8099934:	b8 00 00 00 00       	mov    $0x0,%eax
 8099939:	84 c0                	test   %al,%al
 809993b:	74 0b                	je     8099948 <_ZN16CNCryptoBlowFishD1Ev+0x50>
 809993d:	8b 45 08             	mov    0x8(%ebp),%eax
 8099940:	89 04 24             	mov    %eax,(%esp)
 8099943:	e8 a8 ab 68 00       	call   87244f0 <_ZdlPv>
 8099948:	c9                   	leave
 8099949:	c3                   	ret

```

```c
// CNCryptoBlowFish::~CNCryptoBlowFish @ 0x80998f8

/* WARNING: Removing unreachable block (ram,0x0809993d) */
/* CNCryptoBlowFish::~CNCryptoBlowFish() */

void __thiscall CNCryptoBlowFish::~CNCryptoBlowFish(CNCryptoBlowFish *this)

{
  *(undefined ***)this = &PTR__CNCryptoBlowFish_08b136e8;
  if (*(int *)(this + 8) != 0) {
    operator_delete(*(void **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  ICryptoGraph::~ICryptoGraph((ICryptoGraph *)this);
  return;
}

```

---

## ~CNCryptoBlowFish_0809994a

```asm
// === 0809994a CNCryptoBlowFish::~CNCryptoBlowFish  [0x0809994a-0x8099967] ===
 809994a:	55                   	push   %ebp
 809994b:	89 e5                	mov    %esp,%ebp
 809994d:	83 ec 18             	sub    $0x18,%esp
 8099950:	8b 45 08             	mov    0x8(%ebp),%eax
 8099953:	89 04 24             	mov    %eax,(%esp)
 8099956:	e8 9d ff ff ff       	call   80998f8 <_ZN16CNCryptoBlowFishD1Ev>
 809995b:	8b 45 08             	mov    0x8(%ebp),%eax
 809995e:	89 04 24             	mov    %eax,(%esp)
 8099961:	e8 8a ab 68 00       	call   87244f0 <_ZdlPv>
 8099966:	c9                   	leave
 8099967:	c3                   	ret

```

```c
// CNCryptoBlowFish::~CNCryptoBlowFish @ 0x809994a

/* CNCryptoBlowFish::~CNCryptoBlowFish() */

void __thiscall CNCryptoBlowFish::~CNCryptoBlowFish(CNCryptoBlowFish *this)

{
  ~CNCryptoBlowFish(this);
  operator_delete(this);
  return;
}

```

