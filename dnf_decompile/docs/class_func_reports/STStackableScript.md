# STStackableScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## Clear

```asm
// === 0899087a STStackableScript::Clear  [0x0899087a-0x8990ed4] ===
 899087a:	55                   	push   %ebp
 899087b:	89 e5                	mov    %esp,%ebp
 899087d:	83 ec 18             	sub    $0x18,%esp
 8990880:	8b 45 08             	mov    0x8(%ebp),%eax
 8990883:	89 04 24             	mov    %eax,(%esp)
 8990886:	e8 8d ce ff ff       	call   898d718 <_ZN12STItemScript5ClearEv>
 899088b:	8b 45 08             	mov    0x8(%ebp),%eax
 899088e:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8990895:	8b 45 08             	mov    0x8(%ebp),%eax
 8990898:	05 78 01 00 00       	add    $0x178,%eax
 899089d:	89 04 24             	mov    %eax,(%esp)
 89908a0:	e8 e9 2b 03 00       	call   89c348e <_ZN22Arad_STStackableScript11AradStClearEv>
 89908a5:	8b 45 08             	mov    0x8(%ebp),%eax
 89908a8:	05 9c 01 00 00       	add    $0x19c,%eax
 89908ad:	89 04 24             	mov    %eax,(%esp)
 89908b0:	e8 8f 5b 03 00       	call   89c6444 <_ZNSt6vectorI10CRabbitBoxSaIS0_EE5clearEv>
 89908b5:	8b 45 08             	mov    0x8(%ebp),%eax
 89908b8:	05 90 01 00 00       	add    $0x190,%eax
 89908bd:	89 04 24             	mov    %eax,(%esp)
 89908c0:	e8 a9 62 70 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 89908c5:	8b 45 08             	mov    0x8(%ebp),%eax
 89908c8:	c7 80 a8 01 00 00 00 	movl   $0x0,0x1a8(%eax)
 89908cf:	00 00 00 
 89908d2:	8b 45 08             	mov    0x8(%ebp),%eax
 89908d5:	c7 80 ac 01 00 00 00 	movl   $0x0,0x1ac(%eax)
 89908dc:	00 00 00 
 89908df:	8b 45 08             	mov    0x8(%ebp),%eax
 89908e2:	c7 80 b0 01 00 00 00 	movl   $0x0,0x1b0(%eax)
 89908e9:	00 00 00 
 89908ec:	8b 45 08             	mov    0x8(%ebp),%eax
 89908ef:	c7 80 b4 01 00 00 ff 	movl   $0xffffffff,0x1b4(%eax)
 89908f6:	ff ff ff 
 89908f9:	8b 45 08             	mov    0x8(%ebp),%eax
 89908fc:	c6 80 b8 01 00 00 00 	movb   $0x0,0x1b8(%eax)
 8990903:	8b 45 08             	mov    0x8(%ebp),%eax
 8990906:	05 d8 01 00 00       	add    $0x1d8,%eax
 899090b:	c7 44 24 04 80 5e e1 	movl   $0x8e15e80,0x4(%esp)
 8990912:	08 
 8990913:	89 04 24             	mov    %eax,(%esp)
 8990916:	e8 05 7e d7 ff       	call   8708720 <_ZNSsaSEPKc>
 899091b:	8b 45 08             	mov    0x8(%ebp),%eax
 899091e:	c7 80 dc 01 00 00 00 	movl   $0x0,0x1dc(%eax)
 8990925:	00 00 00 
 8990928:	8b 45 08             	mov    0x8(%ebp),%eax
 899092b:	c7 80 d4 01 00 00 00 	movl   $0x0,0x1d4(%eax)
 8990932:	00 00 00 
 8990935:	8b 45 08             	mov    0x8(%ebp),%eax
 8990938:	c7 80 e0 01 00 00 27 	movl   $0x27,0x1e0(%eax)
 899093f:	00 00 00 
 8990942:	8b 45 08             	mov    0x8(%ebp),%eax
 8990945:	c7 80 e4 01 00 00 00 	movl   $0x0,0x1e4(%eax)
 899094c:	00 00 00 
 899094f:	8b 45 08             	mov    0x8(%ebp),%eax
 8990952:	05 38 02 00 00       	add    $0x238,%eax
 8990957:	c7 44 24 04 80 5e e1 	movl   $0x8e15e80,0x4(%esp)
 899095e:	08 
 899095f:	89 04 24             	mov    %eax,(%esp)
 8990962:	e8 b9 7d d7 ff       	call   8708720 <_ZNSsaSEPKc>
 8990967:	8b 45 08             	mov    0x8(%ebp),%eax
 899096a:	c7 80 3c 02 00 00 01 	movl   $0x1,0x23c(%eax)
 8990971:	00 00 00 
 8990974:	8b 45 08             	mov    0x8(%ebp),%eax
 8990977:	c7 80 40 02 00 00 ff 	movl   $0xffffffff,0x240(%eax)
 899097e:	ff ff ff 
 8990981:	8b 45 08             	mov    0x8(%ebp),%eax
 8990984:	c6 80 b9 01 00 00 00 	movb   $0x0,0x1b9(%eax)
 899098b:	8b 45 08             	mov    0x8(%ebp),%eax
 899098e:	c6 80 ba 01 00 00 00 	movb   $0x0,0x1ba(%eax)
 8990995:	8b 45 08             	mov    0x8(%ebp),%eax
 8990998:	c6 80 bb 01 00 00 00 	movb   $0x0,0x1bb(%eax)
 899099f:	8b 45 08             	mov    0x8(%ebp),%eax
 89909a2:	05 4c 03 00 00       	add    $0x34c,%eax
 89909a7:	89 04 24             	mov    %eax,(%esp)
 89909aa:	e8 5b 29 03 00       	call   89c330a <_ZN18STStatChangeVector5clearEv>
 89909af:	8b 45 08             	mov    0x8(%ebp),%eax
 89909b2:	c6 80 bc 01 00 00 00 	movb   $0x0,0x1bc(%eax)
 89909b9:	8b 45 08             	mov    0x8(%ebp),%eax
 89909bc:	c6 80 bd 01 00 00 00 	movb   $0x0,0x1bd(%eax)
 89909c3:	8b 45 08             	mov    0x8(%ebp),%eax
 89909c6:	c6 80 be 01 00 00 00 	movb   $0x0,0x1be(%eax)
 89909cd:	8b 45 08             	mov    0x8(%ebp),%eax
 89909d0:	c6 80 bf 01 00 00 00 	movb   $0x0,0x1bf(%eax)
 89909d7:	8b 45 08             	mov    0x8(%ebp),%eax
 89909da:	c6 80 c0 01 00 00 00 	movb   $0x0,0x1c0(%eax)
 89909e1:	8b 45 08             	mov    0x8(%ebp),%eax
 89909e4:	ba 00 00 00 00       	mov    $0x0,%edx
 89909e9:	89 90 c4 01 00 00    	mov    %edx,0x1c4(%eax)
 89909ef:	8b 45 08             	mov    0x8(%ebp),%eax
 89909f2:	c6 80 c8 01 00 00 00 	movb   $0x0,0x1c8(%eax)
 89909f9:	8b 45 08             	mov    0x8(%ebp),%eax
 89909fc:	ba 00 00 00 00       	mov    $0x0,%edx
 8990a01:	89 90 cc 01 00 00    	mov    %edx,0x1cc(%eax)
 8990a07:	8b 45 08             	mov    0x8(%ebp),%eax
 8990a0a:	c6 80 d0 01 00 00 00 	movb   $0x0,0x1d0(%eax)
 8990a11:	8b 45 08             	mov    0x8(%ebp),%eax
 8990a14:	05 68 02 00 00       	add    $0x268,%eax
 8990a19:	89 04 24             	mov    %eax,(%esp)
 8990a1c:	e8 37 5c b8 ff       	call   8516658 <_ZNSt6vectorI22STStackablePackageDataSaIS0_EE5clearEv>
 8990a21:	8b 45 08             	mov    0x8(%ebp),%eax
 8990a24:	05 74 02 00 00       	add    $0x274,%eax
 8990a29:	89 04 24             	mov    %eax,(%esp)
 8990a2c:	e8 2f 5a 03 00       	call   89c6460 <_ZNSt6vectorIS_I22STStackablePackageDataSaIS0_EESaIS2_EE5clearEv>
 8990a31:	8b 45 08             	mov    0x8(%ebp),%eax
 8990a34:	05 80 02 00 00       	add    $0x280,%eax
 8990a39:	89 04 24             	mov    %eax,(%esp)
 8990a3c:	e8 35 26 03 00       	call   89c3076 <_ZN20stStackableBooster_t5clearEv>
 8990a41:	8b 45 08             	mov    0x8(%ebp),%eax
 8990a44:	c7 80 64 03 00 00 7f 	movl   $0x98967f,0x364(%eax)
 8990a4b:	96 98 00 
 8990a4e:	8b 45 08             	mov    0x8(%ebp),%eax
 8990a51:	05 bc 04 00 00       	add    $0x4bc,%eax
 8990a56:	89 04 24             	mov    %eax,(%esp)
 8990a59:	e8 d2 59 03 00       	call   89c6430 <_ZNSt3mapI16ENUM_MODULE_TYPEP22EquipmentParameterInfoSt4lessIS0_ESaISt4pairIKS0_S2_EEE5clearEv>
 8990a5e:	8b 45 08             	mov    0x8(%ebp),%eax
 8990a61:	05 68 03 00 00       	add    $0x368,%eax
 8990a66:	c7 44 24 04 80 5e e1 	movl   $0x8e15e80,0x4(%esp)
 8990a6d:	08 
 8990a6e:	89 04 24             	mov    %eax,(%esp)
 8990a71:	e8 aa 7c d7 ff       	call   8708720 <_ZNSsaSEPKc>
 8990a76:	8b 45 08             	mov    0x8(%ebp),%eax
 8990a79:	c7 80 6c 03 00 00 ff 	movl   $0xffffffff,0x36c(%eax)
 8990a80:	ff ff ff 
 8990a83:	8b 45 08             	mov    0x8(%ebp),%eax
 8990a86:	05 74 03 00 00       	add    $0x374,%eax
 8990a8b:	89 04 24             	mov    %eax,(%esp)
 8990a8e:	e8 af 98 7e ff       	call   817a342 <_ZNSt6vectorISt4pairIiiESaIS1_EE5clearEv>
 8990a93:	8b 45 08             	mov    0x8(%ebp),%eax
 8990a96:	66 c7 80 80 03 00 00 	movw   $0x0,0x380(%eax)
 8990a9d:	00 00 
 8990a9f:	8b 45 08             	mov    0x8(%ebp),%eax
 8990aa2:	c7 80 84 03 00 00 00 	movl   $0x0,0x384(%eax)
 8990aa9:	00 00 00 
 8990aac:	8b 45 08             	mov    0x8(%ebp),%eax
 8990aaf:	c6 80 88 03 00 00 01 	movb   $0x1,0x388(%eax)
 8990ab6:	8b 45 08             	mov    0x8(%ebp),%eax
 8990ab9:	c7 80 8c 03 00 00 ff 	movl   $0xffffffff,0x38c(%eax)
 8990ac0:	ff ff ff 
 8990ac3:	8b 45 08             	mov    0x8(%ebp),%eax
 8990ac6:	05 14 03 00 00       	add    $0x314,%eax
 8990acb:	89 04 24             	mov    %eax,(%esp)
 8990ace:	e8 13 27 03 00       	call   89c31e6 <_ZN15STSummonMonster5clearEv>
 8990ad3:	8b 45 08             	mov    0x8(%ebp),%eax
 8990ad6:	05 30 03 00 00       	add    $0x330,%eax
 8990adb:	89 04 24             	mov    %eax,(%esp)
 8990ade:	e8 69 27 03 00       	call   89c324c <_ZN11STSummonApc5clearEv>
 8990ae3:	8b 45 08             	mov    0x8(%ebp),%eax
 8990ae6:	c7 80 48 03 00 00 ff 	movl   $0xffffffff,0x348(%eax)
 8990aed:	ff ff ff 
 8990af0:	8b 45 08             	mov    0x8(%ebp),%eax
 8990af3:	c7 80 90 03 00 00 01 	movl   $0x1,0x390(%eax)
 8990afa:	00 00 00 
 8990afd:	8b 45 08             	mov    0x8(%ebp),%eax
 8990b00:	66 c7 80 94 03 00 00 	movw   $0x0,0x394(%eax)
 8990b07:	00 00 
 8990b09:	8b 45 08             	mov    0x8(%ebp),%eax
 8990b0c:	c6 80 96 03 00 00 00 	movb   $0x0,0x396(%eax)
 8990b13:	8b 45 08             	mov    0x8(%ebp),%eax
 8990b16:	66 c7 80 98 03 00 00 	movw   $0x0,0x398(%eax)
 8990b1d:	00 00 
 8990b1f:	8b 45 08             	mov    0x8(%ebp),%eax
 8990b22:	c6 80 38 04 00 00 00 	movb   $0x0,0x438(%eax)
 8990b29:	8b 45 08             	mov    0x8(%ebp),%eax
 8990b2c:	c7 80 3c 04 00 00 00 	movl   $0x0,0x43c(%eax)
 8990b33:	00 00 00 
 8990b36:	8b 45 08             	mov    0x8(%ebp),%eax
 8990b39:	c7 80 40 04 00 00 00 	movl   $0x0,0x440(%eax)
 8990b40:	00 00 00 
 8990b43:	8b 45 08             	mov    0x8(%ebp),%eax
 8990b46:	c6 80 9a 03 00 00 00 	movb   $0x0,0x39a(%eax)
 8990b4d:	8b 45 08             	mov    0x8(%ebp),%eax
 8990b50:	c6 80 9b 03 00 00 00 	movb   $0x0,0x39b(%eax)
 8990b57:	8b 45 08             	mov    0x8(%ebp),%eax
 8990b5a:	c7 80 9c 03 00 00 00 	movl   $0x0,0x39c(%eax)
 8990b61:	00 00 00 
 8990b64:	8b 45 08             	mov    0x8(%ebp),%eax
 8990b67:	c6 80 a0 03 00 00 00 	movb   $0x0,0x3a0(%eax)
 8990b6e:	8b 45 08             	mov    0x8(%ebp),%eax
 8990b71:	c6 80 a1 03 00 00 00 	movb   $0x0,0x3a1(%eax)
 8990b78:	8b 45 08             	mov    0x8(%ebp),%eax
 8990b7b:	05 a4 03 00 00       	add    $0x3a4,%eax
 8990b80:	89 04 24             	mov    %eax,(%esp)
 8990b83:	e8 56 61 73 ff       	call   80c6cde <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 8990b88:	8b 45 08             	mov    0x8(%ebp),%eax
 8990b8b:	c7 80 bc 03 00 00 00 	movl   $0x0,0x3bc(%eax)
 8990b92:	00 00 00 
 8990b95:	8b 45 08             	mov    0x8(%ebp),%eax
 8990b98:	05 c0 03 00 00       	add    $0x3c0,%eax
 8990b9d:	89 04 24             	mov    %eax,(%esp)
 8990ba0:	e8 9d 97 7e ff       	call   817a342 <_ZNSt6vectorISt4pairIiiESaIS1_EE5clearEv>
 8990ba5:	8b 45 08             	mov    0x8(%ebp),%eax
 8990ba8:	c7 80 cc 03 00 00 00 	movl   $0x0,0x3cc(%eax)
 8990baf:	00 00 00 
 8990bb2:	8b 45 08             	mov    0x8(%ebp),%eax
 8990bb5:	05 5c 02 00 00       	add    $0x25c,%eax
 8990bba:	89 04 24             	mov    %eax,(%esp)
 8990bbd:	e8 ac 5f 70 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 8990bc2:	8b 45 08             	mov    0x8(%ebp),%eax
 8990bc5:	c6 80 d0 03 00 00 00 	movb   $0x0,0x3d0(%eax)
 8990bcc:	8b 45 08             	mov    0x8(%ebp),%eax
 8990bcf:	c6 80 d1 03 00 00 01 	movb   $0x1,0x3d1(%eax)
 8990bd6:	8b 45 08             	mov    0x8(%ebp),%eax
 8990bd9:	05 d4 03 00 00       	add    $0x3d4,%eax
 8990bde:	89 04 24             	mov    %eax,(%esp)
 8990be1:	e8 5c 97 7e ff       	call   817a342 <_ZNSt6vectorISt4pairIiiESaIS1_EE5clearEv>
 8990be6:	8b 45 08             	mov    0x8(%ebp),%eax
 8990be9:	c7 80 e0 03 00 00 00 	movl   $0x0,0x3e0(%eax)
 8990bf0:	00 00 00 
 8990bf3:	8b 45 08             	mov    0x8(%ebp),%eax
 8990bf6:	c7 80 e4 03 00 00 00 	movl   $0x0,0x3e4(%eax)
 8990bfd:	00 00 00 
 8990c00:	8b 45 08             	mov    0x8(%ebp),%eax
 8990c03:	05 e8 03 00 00       	add    $0x3e8,%eax
 8990c08:	89 04 24             	mov    %eax,(%esp)
 8990c0b:	e8 6c 58 03 00       	call   89c647c <_ZNSt6vectorI17stLimitCubeResultSaIS0_EE5clearEv>
 8990c10:	8b 45 08             	mov    0x8(%ebp),%eax
 8990c13:	05 f4 03 00 00       	add    $0x3f4,%eax
 8990c18:	89 04 24             	mov    %eax,(%esp)
 8990c1b:	e8 8c 45 03 00       	call   89c51ac <_ZNSt3mapI21STEnchantSystemMapKey22STEnchantSystemMapDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE5clearEv>
 8990c20:	8b 45 08             	mov    0x8(%ebp),%eax
 8990c23:	c6 80 0c 04 00 00 ff 	movb   $0xff,0x40c(%eax)
 8990c2a:	8b 45 08             	mov    0x8(%ebp),%eax
 8990c2d:	05 0d 04 00 00       	add    $0x40d,%eax
 8990c32:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8990c39:	00 
 8990c3a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8990c41:	00 
 8990c42:	89 04 24             	mov    %eax,(%esp)
 8990c45:	e8 76 d0 6e ff       	call   807dcc0 <memset@plt>
 8990c4a:	8b 45 08             	mov    0x8(%ebp),%eax
 8990c4d:	c6 80 14 04 00 00 00 	movb   $0x0,0x414(%eax)
 8990c54:	8b 45 08             	mov    0x8(%ebp),%eax
 8990c57:	05 10 04 00 00       	add    $0x410,%eax
 8990c5c:	c7 44 24 04 80 5e e1 	movl   $0x8e15e80,0x4(%esp)
 8990c63:	08 
 8990c64:	89 04 24             	mov    %eax,(%esp)
 8990c67:	e8 b4 7a d7 ff       	call   8708720 <_ZNSsaSEPKc>
 8990c6c:	8b 45 08             	mov    0x8(%ebp),%eax
 8990c6f:	c7 80 18 04 00 00 00 	movl   $0x0,0x418(%eax)
 8990c76:	00 00 00 
 8990c79:	8b 45 08             	mov    0x8(%ebp),%eax
 8990c7c:	c7 80 44 04 00 00 0b 	movl   $0xb,0x444(%eax)
 8990c83:	00 00 00 
 8990c86:	8b 45 08             	mov    0x8(%ebp),%eax
 8990c89:	c7 80 48 04 00 00 00 	movl   $0x0,0x448(%eax)
 8990c90:	00 00 00 
 8990c93:	8b 45 08             	mov    0x8(%ebp),%eax
 8990c96:	c7 80 4c 04 00 00 ff 	movl   $0xffffffff,0x44c(%eax)
 8990c9d:	ff ff ff 
 8990ca0:	8b 45 08             	mov    0x8(%ebp),%eax
 8990ca3:	c7 80 50 04 00 00 ff 	movl   $0xffffffff,0x450(%eax)
 8990caa:	ff ff ff 
 8990cad:	8b 45 08             	mov    0x8(%ebp),%eax
 8990cb0:	c7 80 54 04 00 00 ff 	movl   $0xffffffff,0x454(%eax)
 8990cb7:	ff ff ff 
 8990cba:	8b 45 08             	mov    0x8(%ebp),%eax
 8990cbd:	c7 80 58 04 00 00 ff 	movl   $0xffffffff,0x458(%eax)
 8990cc4:	ff ff ff 
 8990cc7:	8b 45 08             	mov    0x8(%ebp),%eax
 8990cca:	c7 80 5c 04 00 00 ff 	movl   $0xffffffff,0x45c(%eax)
 8990cd1:	ff ff ff 
 8990cd4:	8b 45 08             	mov    0x8(%ebp),%eax
 8990cd7:	c7 80 60 04 00 00 ff 	movl   $0xffffffff,0x460(%eax)
 8990cde:	ff ff ff 
 8990ce1:	8b 45 08             	mov    0x8(%ebp),%eax
 8990ce4:	c7 80 64 04 00 00 ff 	movl   $0xffffffff,0x464(%eax)
 8990ceb:	ff ff ff 
 8990cee:	8b 45 08             	mov    0x8(%ebp),%eax
 8990cf1:	c7 80 68 04 00 00 ff 	movl   $0xffffffff,0x468(%eax)
 8990cf8:	ff ff ff 
 8990cfb:	8b 45 08             	mov    0x8(%ebp),%eax
 8990cfe:	c7 80 6c 04 00 00 00 	movl   $0x0,0x46c(%eax)
 8990d05:	00 00 00 
 8990d08:	8b 45 08             	mov    0x8(%ebp),%eax
 8990d0b:	c7 80 70 04 00 00 ff 	movl   $0xffffffff,0x470(%eax)
 8990d12:	ff ff ff 
 8990d15:	8b 45 08             	mov    0x8(%ebp),%eax
 8990d18:	c7 80 78 04 00 00 00 	movl   $0x0,0x478(%eax)
 8990d1f:	00 00 00 
 8990d22:	8b 45 08             	mov    0x8(%ebp),%eax
 8990d25:	c7 80 74 04 00 00 00 	movl   $0x0,0x474(%eax)
 8990d2c:	00 00 00 
 8990d2f:	8b 45 08             	mov    0x8(%ebp),%eax
 8990d32:	05 7c 04 00 00       	add    $0x47c,%eax
 8990d37:	89 04 24             	mov    %eax,(%esp)
 8990d3a:	e8 09 2e b8 ff       	call   8513b48 <_ZN22AvatarOptionChangeType5clearEv>
 8990d3f:	8b 45 08             	mov    0x8(%ebp),%eax
 8990d42:	05 80 04 00 00       	add    $0x480,%eax
 8990d47:	89 04 24             	mov    %eax,(%esp)
 8990d4a:	e8 07 97 74 ff       	call   80da456 <_ZNSt3setIiSt4lessIiESaIiEE5clearEv>
 8990d4f:	8b 45 08             	mov    0x8(%ebp),%eax
 8990d52:	05 98 04 00 00       	add    $0x498,%eax
 8990d57:	89 04 24             	mov    %eax,(%esp)
 8990d5a:	e8 f7 96 74 ff       	call   80da456 <_ZNSt3setIiSt4lessIiESaIiEE5clearEv>
 8990d5f:	8b 45 08             	mov    0x8(%ebp),%eax
 8990d62:	c6 80 b0 04 00 00 00 	movb   $0x0,0x4b0(%eax)
 8990d69:	8b 45 08             	mov    0x8(%ebp),%eax
 8990d6c:	c7 80 e8 01 00 00 00 	movl   $0x0,0x1e8(%eax)
 8990d73:	00 00 00 
 8990d76:	8b 45 08             	mov    0x8(%ebp),%eax
 8990d79:	05 ec 01 00 00       	add    $0x1ec,%eax
 8990d7e:	89 04 24             	mov    %eax,(%esp)
 8990d81:	e8 e8 5d 70 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 8990d86:	8b 45 08             	mov    0x8(%ebp),%eax
 8990d89:	05 f8 01 00 00       	add    $0x1f8,%eax
 8990d8e:	89 04 24             	mov    %eax,(%esp)
 8990d91:	e8 02 57 03 00       	call   89c6498 <_ZNSt6vectorIN15StackableAction11UsablePlaceESaIS1_EE5clearEv>
 8990d96:	8b 45 08             	mov    0x8(%ebp),%eax
 8990d99:	c6 80 04 02 00 00 00 	movb   $0x0,0x204(%eax)
 8990da0:	8b 45 08             	mov    0x8(%ebp),%eax
 8990da3:	05 14 02 00 00       	add    $0x214,%eax
 8990da8:	89 04 24             	mov    %eax,(%esp)
 8990dab:	e8 04 57 03 00       	call   89c64b4 <_ZNSt6vectorIN15StackableAction16UsableServerTypeESaIS1_EE5clearEv>
 8990db0:	8b 45 08             	mov    0x8(%ebp),%eax
 8990db3:	c6 80 05 02 00 00 00 	movb   $0x0,0x205(%eax)
 8990dba:	8b 45 08             	mov    0x8(%ebp),%eax
 8990dbd:	05 08 02 00 00       	add    $0x208,%eax
 8990dc2:	89 04 24             	mov    %eax,(%esp)
 8990dc5:	e8 06 57 03 00       	call   89c64d0 <_ZNSt6vectorI26STPassiveObjectInStackableSaIS0_EE5clearEv>
 8990dca:	8b 45 08             	mov    0x8(%ebp),%eax
 8990dcd:	c7 80 20 02 00 00 00 	movl   $0x0,0x220(%eax)
 8990dd4:	00 00 00 
 8990dd7:	8b 45 08             	mov    0x8(%ebp),%eax
 8990dda:	05 24 02 00 00       	add    $0x224,%eax
 8990ddf:	89 04 24             	mov    %eax,(%esp)
 8990de2:	e8 87 5d 70 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 8990de7:	8b 45 08             	mov    0x8(%ebp),%eax
 8990dea:	c7 80 b8 04 00 00 00 	movl   $0x0,0x4b8(%eax)
 8990df1:	00 00 00 
 8990df4:	8b 45 08             	mov    0x8(%ebp),%eax
 8990df7:	05 d8 01 00 00       	add    $0x1d8,%eax
 8990dfc:	c7 44 24 04 80 5e e1 	movl   $0x8e15e80,0x4(%esp)
 8990e03:	08 
 8990e04:	89 04 24             	mov    %eax,(%esp)
 8990e07:	e8 14 79 d7 ff       	call   8708720 <_ZNSsaSEPKc>
 8990e0c:	8b 45 08             	mov    0x8(%ebp),%eax
 8990e0f:	c7 80 dc 01 00 00 00 	movl   $0x0,0x1dc(%eax)
 8990e16:	00 00 00 
 8990e19:	8b 45 08             	mov    0x8(%ebp),%eax
 8990e1c:	c6 80 14 04 00 00 00 	movb   $0x0,0x414(%eax)
 8990e23:	8b 45 08             	mov    0x8(%ebp),%eax
 8990e26:	05 10 04 00 00       	add    $0x410,%eax
 8990e2b:	c7 44 24 04 80 5e e1 	movl   $0x8e15e80,0x4(%esp)
 8990e32:	08 
 8990e33:	89 04 24             	mov    %eax,(%esp)
 8990e36:	e8 e5 78 d7 ff       	call   8708720 <_ZNSsaSEPKc>
 8990e3b:	8b 45 08             	mov    0x8(%ebp),%eax
 8990e3e:	c7 80 18 04 00 00 00 	movl   $0x0,0x418(%eax)
 8990e45:	00 00 00 
 8990e48:	8b 45 08             	mov    0x8(%ebp),%eax
 8990e4b:	c7 80 70 03 00 00 ff 	movl   $0xffffffff,0x370(%eax)
 8990e52:	ff ff ff 
 8990e55:	8b 45 08             	mov    0x8(%ebp),%eax
 8990e58:	c7 80 ec 04 00 00 00 	movl   $0x0,0x4ec(%eax)
 8990e5f:	00 00 00 
 8990e62:	8b 45 08             	mov    0x8(%ebp),%eax
 8990e65:	c7 80 8c 01 00 00 00 	movl   $0x0,0x18c(%eax)
 8990e6c:	00 00 00 
 8990e6f:	8b 45 08             	mov    0x8(%ebp),%eax
 8990e72:	c7 80 f0 04 00 00 00 	movl   $0x0,0x4f0(%eax)
 8990e79:	00 00 00 
 8990e7c:	8b 45 08             	mov    0x8(%ebp),%eax
 8990e7f:	c7 80 f4 04 00 00 00 	movl   $0x0,0x4f4(%eax)
 8990e86:	00 00 00 
 8990e89:	8b 45 08             	mov    0x8(%ebp),%eax
 8990e8c:	c7 80 f8 04 00 00 00 	movl   $0x0,0x4f8(%eax)
 8990e93:	00 00 00 
 8990e96:	8b 45 08             	mov    0x8(%ebp),%eax
 8990e99:	05 fc 04 00 00       	add    $0x4fc,%eax
 8990e9e:	89 04 24             	mov    %eax,(%esp)
 8990ea1:	e8 c8 5c 70 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 8990ea6:	8b 45 08             	mov    0x8(%ebp),%eax
 8990ea9:	05 d4 04 00 00       	add    $0x4d4,%eax
 8990eae:	89 04 24             	mov    %eax,(%esp)
 8990eb1:	e8 a0 95 74 ff       	call   80da456 <_ZNSt3setIiSt4lessIiESaIiEE5clearEv>
 8990eb6:	8b 45 08             	mov    0x8(%ebp),%eax
 8990eb9:	c7 80 08 05 00 00 00 	movl   $0x0,0x508(%eax)
 8990ec0:	00 00 00 
 8990ec3:	8b 45 08             	mov    0x8(%ebp),%eax
 8990ec6:	05 0c 05 00 00       	add    $0x50c,%eax
 8990ecb:	89 04 24             	mov    %eax,(%esp)
 8990ece:	e8 83 95 74 ff       	call   80da456 <_ZNSt3setIiSt4lessIiESaIiEE5clearEv>
 8990ed3:	c9                   	leave
 8990ed4:	c3                   	ret

```

```c
// STStackableScript::Clear @ 0x899087a

/* STStackableScript::Clear() */

void __thiscall STStackableScript::Clear(STStackableScript *this)

{
  STItemScript::Clear((STItemScript *)this);
  *(undefined4 *)(this + 4) = 0;
  Arad_STStackableScript::AradStClear((Arad_STStackableScript *)(this + 0x178));
  std::vector<CRabbitBox,std::allocator<CRabbitBox>>::clear
            ((vector<CRabbitBox,std::allocator<CRabbitBox>> *)(this + 0x19c));
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 400));
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1b4) = 0xffffffff;
  this[0x1b8] = (STStackableScript)0x0;
  std::string::operator=((string *)(this + 0x1d8),"");
  *(undefined4 *)(this + 0x1dc) = 0;
  *(undefined4 *)(this + 0x1d4) = 0;
  *(undefined4 *)(this + 0x1e0) = 0x27;
  *(undefined4 *)(this + 0x1e4) = 0;
  std::string::operator=((string *)(this + 0x238),"");
  *(undefined4 *)(this + 0x23c) = 1;
  *(undefined4 *)(this + 0x240) = 0xffffffff;
  this[0x1b9] = (STStackableScript)0x0;
  this[0x1ba] = (STStackableScript)0x0;
  this[0x1bb] = (STStackableScript)0x0;
  STStatChangeVector::clear((STStatChangeVector *)(this + 0x34c));
  this[0x1bc] = (STStackableScript)0x0;
  this[0x1bd] = (STStackableScript)0x0;
  this[0x1be] = (STStackableScript)0x0;
  this[0x1bf] = (STStackableScript)0x0;
  this[0x1c0] = (STStackableScript)0x0;
  *(undefined4 *)(this + 0x1c4) = 0;
  this[0x1c8] = (STStackableScript)0x0;
  *(undefined4 *)(this + 0x1cc) = 0;
  this[0x1d0] = (STStackableScript)0x0;
  std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::clear
            ((vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)(this + 0x268)
            );
  std::
  vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
  ::clear((vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
           *)(this + 0x274));
  stStackableBooster_t::clear((stStackableBooster_t *)(this + 0x280));
  *(undefined4 *)(this + 0x364) = 9999999;
  std::
  map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
  ::clear((map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
           *)(this + 0x4bc));
  std::string::operator=((string *)(this + 0x368),"");
  *(undefined4 *)(this + 0x36c) = 0xffffffff;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x374));
  *(undefined2 *)(this + 0x380) = 0;
  *(undefined4 *)(this + 900) = 0;
  this[0x388] = (STStackableScript)0x1;
  *(undefined4 *)(this + 0x38c) = 0xffffffff;
  STSummonMonster::clear((STSummonMonster *)(this + 0x314));
  STSummonApc::clear((STSummonApc *)(this + 0x330));
  *(undefined4 *)(this + 0x348) = 0xffffffff;
  *(undefined4 *)(this + 0x390) = 1;
  *(undefined2 *)(this + 0x394) = 0;
  this[0x396] = (STStackableScript)0x0;
  *(undefined2 *)(this + 0x398) = 0;
  this[0x438] = (STStackableScript)0x0;
  *(undefined4 *)(this + 0x43c) = 0;
  *(undefined4 *)(this + 0x440) = 0;
  this[0x39a] = (STStackableScript)0x0;
  this[0x39b] = (STStackableScript)0x0;
  *(undefined4 *)(this + 0x39c) = 0;
  this[0x3a0] = (STStackableScript)0x0;
  this[0x3a1] = (STStackableScript)0x0;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x3a4))
  ;
  *(undefined4 *)(this + 0x3bc) = 0;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x3c0));
  *(undefined4 *)(this + 0x3cc) = 0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x25c));
  this[0x3d0] = (STStackableScript)0x0;
  this[0x3d1] = (STStackableScript)0x1;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x3d4));
  *(undefined4 *)(this + 0x3e0) = 0;
  *(undefined4 *)(this + 0x3e4) = 0;
  std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>::clear
            ((vector<stLimitCubeResult,std::allocator<stLimitCubeResult>> *)(this + 1000));
  std::
  map<STEnchantSystemMapKey,STEnchantSystemMapData,std::less<STEnchantSystemMapKey>,std::allocator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>>
  ::clear((map<STEnchantSystemMapKey,STEnchantSystemMapData,std::less<STEnchantSystemMapKey>,std::allocator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>>
           *)(this + 0x3f4));
  this[0x40c] = (STStackableScript)0xff;
  memset(this + 0x40d,0,2);
  this[0x414] = (STStackableScript)0x0;
  std::string::operator=((string *)(this + 0x410),"");
  *(undefined4 *)(this + 0x418) = 0;
  *(undefined4 *)(this + 0x444) = 0xb;
  *(undefined4 *)(this + 0x448) = 0;
  *(undefined4 *)(this + 0x44c) = 0xffffffff;
  *(undefined4 *)(this + 0x450) = 0xffffffff;
  *(undefined4 *)(this + 0x454) = 0xffffffff;
  *(undefined4 *)(this + 0x458) = 0xffffffff;
  *(undefined4 *)(this + 0x45c) = 0xffffffff;
  *(undefined4 *)(this + 0x460) = 0xffffffff;
  *(undefined4 *)(this + 0x464) = 0xffffffff;
  *(undefined4 *)(this + 0x468) = 0xffffffff;
  *(undefined4 *)(this + 0x46c) = 0;
  *(undefined4 *)(this + 0x470) = 0xffffffff;
  *(undefined4 *)(this + 0x478) = 0;
  *(undefined4 *)(this + 0x474) = 0;
  AvatarOptionChangeType::clear((AvatarOptionChangeType *)(this + 0x47c));
  std::set<int,std::less<int>,std::allocator<int>>::clear
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x480));
  std::set<int,std::less<int>,std::allocator<int>>::clear
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x498));
  this[0x4b0] = (STStackableScript)0x0;
  *(undefined4 *)(this + 0x1e8) = 0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x1ec));
  std::vector<StackableAction::UsablePlace,std::allocator<StackableAction::UsablePlace>>::clear
            ((vector<StackableAction::UsablePlace,std::allocator<StackableAction::UsablePlace>> *)
             (this + 0x1f8));
  this[0x204] = (STStackableScript)0x0;
  std::vector<StackableAction::UsableServerType,std::allocator<StackableAction::UsableServerType>>::
  clear((vector<StackableAction::UsableServerType,std::allocator<StackableAction::UsableServerType>>
         *)(this + 0x214));
  this[0x205] = (STStackableScript)0x0;
  std::vector<STPassiveObjectInStackable,std::allocator<STPassiveObjectInStackable>>::clear
            ((vector<STPassiveObjectInStackable,std::allocator<STPassiveObjectInStackable>> *)
             (this + 0x208));
  *(undefined4 *)(this + 0x220) = 0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x224));
  *(undefined4 *)(this + 0x4b8) = 0;
  std::string::operator=((string *)(this + 0x1d8),"");
  *(undefined4 *)(this + 0x1dc) = 0;
  this[0x414] = (STStackableScript)0x0;
  std::string::operator=((string *)(this + 0x410),"");
  *(undefined4 *)(this + 0x418) = 0;
  *(undefined4 *)(this + 0x370) = 0xffffffff;
  *(undefined4 *)(this + 0x4ec) = 0;
  *(undefined4 *)(this + 0x18c) = 0;
  *(undefined4 *)(this + 0x4f0) = 0;
  *(undefined4 *)(this + 0x4f4) = 0;
  *(undefined4 *)(this + 0x4f8) = 0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x4fc));
  std::set<int,std::less<int>,std::allocator<int>>::clear
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x4d4));
  *(undefined4 *)(this + 0x508) = 0;
  std::set<int,std::less<int>,std::allocator<int>>::clear
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x50c));
  return;
}

```

---

## STStackableScript

```asm
// === 0898f218 STStackableScript::STStackableScript  [0x0898f218-0x898f8e5] ===
 898f218:	55                   	push   %ebp
 898f219:	89 e5                	mov    %esp,%ebp
 898f21b:	56                   	push   %esi
 898f21c:	53                   	push   %ebx
 898f21d:	83 ec 10             	sub    $0x10,%esp
 898f220:	8b 45 08             	mov    0x8(%ebp),%eax
 898f223:	89 04 24             	mov    %eax,(%esp)
 898f226:	e8 9b e1 ff ff       	call   898d3c6 <_ZN12STItemScriptC1Ev>
 898f22b:	8b 45 08             	mov    0x8(%ebp),%eax
 898f22e:	05 78 01 00 00       	add    $0x178,%eax
 898f233:	89 04 24             	mov    %eax,(%esp)
 898f236:	e8 bf 41 03 00       	call   89c33fa <_ZN22Arad_STStackableScriptC1Ev>
 898f23b:	8b 45 08             	mov    0x8(%ebp),%eax
 898f23e:	05 90 01 00 00       	add    $0x190,%eax
 898f243:	89 04 24             	mov    %eax,(%esp)
 898f246:	e8 61 ef 6f ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 898f24b:	8b 45 08             	mov    0x8(%ebp),%eax
 898f24e:	05 9c 01 00 00       	add    $0x19c,%eax
 898f253:	89 04 24             	mov    %eax,(%esp)
 898f256:	e8 bb 97 b8 ff       	call   8518a16 <_ZNSt6vectorI10CRabbitBoxSaIS0_EEC1Ev>
 898f25b:	8b 45 08             	mov    0x8(%ebp),%eax
 898f25e:	05 b9 01 00 00       	add    $0x1b9,%eax
 898f263:	89 04 24             	mov    %eax,(%esp)
 898f266:	e8 05 d5 ff ff       	call   898c770 <_ZN21CountinuousItemOptionC1Ev>
 898f26b:	8b 45 08             	mov    0x8(%ebp),%eax
 898f26e:	05 bc 01 00 00       	add    $0x1bc,%eax
 898f273:	89 04 24             	mov    %eax,(%esp)
 898f276:	e8 f5 d4 ff ff       	call   898c770 <_ZN21CountinuousItemOptionC1Ev>
 898f27b:	8b 45 08             	mov    0x8(%ebp),%eax
 898f27e:	05 d8 01 00 00       	add    $0x1d8,%eax
 898f283:	89 04 24             	mov    %eax,(%esp)
 898f286:	e8 45 73 d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898f28b:	8b 45 08             	mov    0x8(%ebp),%eax
 898f28e:	05 ec 01 00 00       	add    $0x1ec,%eax
 898f293:	89 04 24             	mov    %eax,(%esp)
 898f296:	e8 11 ef 6f ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 898f29b:	8b 45 08             	mov    0x8(%ebp),%eax
 898f29e:	05 f8 01 00 00       	add    $0x1f8,%eax
 898f2a3:	89 04 24             	mov    %eax,(%esp)
 898f2a6:	e8 f7 97 b8 ff       	call   8518aa2 <_ZNSt6vectorIN15StackableAction11UsablePlaceESaIS1_EEC1Ev>
 898f2ab:	8b 45 08             	mov    0x8(%ebp),%eax
 898f2ae:	05 08 02 00 00       	add    $0x208,%eax
 898f2b3:	89 04 24             	mov    %eax,(%esp)
 898f2b6:	e8 2b 68 03 00       	call   89c5ae6 <_ZNSt6vectorI26STPassiveObjectInStackableSaIS0_EEC1Ev>
 898f2bb:	8b 45 08             	mov    0x8(%ebp),%eax
 898f2be:	05 14 02 00 00       	add    $0x214,%eax
 898f2c3:	89 04 24             	mov    %eax,(%esp)
 898f2c6:	e8 eb 97 b8 ff       	call   8518ab6 <_ZNSt6vectorIN15StackableAction16UsableServerTypeESaIS1_EEC1Ev>
 898f2cb:	8b 45 08             	mov    0x8(%ebp),%eax
 898f2ce:	05 24 02 00 00       	add    $0x224,%eax
 898f2d3:	89 04 24             	mov    %eax,(%esp)
 898f2d6:	e8 d1 ee 6f ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 898f2db:	8b 45 08             	mov    0x8(%ebp),%eax
 898f2de:	05 30 02 00 00       	add    $0x230,%eax
 898f2e3:	89 04 24             	mov    %eax,(%esp)
 898f2e6:	e8 e5 72 d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898f2eb:	8b 45 08             	mov    0x8(%ebp),%eax
 898f2ee:	05 34 02 00 00       	add    $0x234,%eax
 898f2f3:	89 04 24             	mov    %eax,(%esp)
 898f2f6:	e8 d5 72 d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898f2fb:	8b 45 08             	mov    0x8(%ebp),%eax
 898f2fe:	05 38 02 00 00       	add    $0x238,%eax
 898f303:	89 04 24             	mov    %eax,(%esp)
 898f306:	e8 c5 72 d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898f30b:	8b 45 08             	mov    0x8(%ebp),%eax
 898f30e:	05 44 02 00 00       	add    $0x244,%eax
 898f313:	89 04 24             	mov    %eax,(%esp)
 898f316:	e8 23 26 9f ff       	call   838193e <_ZNSt6vectorIS_IiSaIiEESaIS1_EEC1Ev>
 898f31b:	8b 45 08             	mov    0x8(%ebp),%eax
 898f31e:	05 50 02 00 00       	add    $0x250,%eax
 898f323:	89 04 24             	mov    %eax,(%esp)
 898f326:	e8 81 ee 6f ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 898f32b:	8b 45 08             	mov    0x8(%ebp),%eax
 898f32e:	05 5c 02 00 00       	add    $0x25c,%eax
 898f333:	89 04 24             	mov    %eax,(%esp)
 898f336:	e8 71 ee 6f ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 898f33b:	8b 45 08             	mov    0x8(%ebp),%eax
 898f33e:	05 68 02 00 00       	add    $0x268,%eax
 898f343:	89 04 24             	mov    %eax,(%esp)
 898f346:	e8 df 96 b8 ff       	call   8518a2a <_ZNSt6vectorI22STStackablePackageDataSaIS0_EEC1Ev>
 898f34b:	8b 45 08             	mov    0x8(%ebp),%eax
 898f34e:	05 74 02 00 00       	add    $0x274,%eax
 898f353:	89 04 24             	mov    %eax,(%esp)
 898f356:	e8 e3 96 b8 ff       	call   8518a3e <_ZNSt6vectorIS_I22STStackablePackageDataSaIS0_EESaIS2_EEC1Ev>
 898f35b:	8b 45 08             	mov    0x8(%ebp),%eax
 898f35e:	05 80 02 00 00       	add    $0x280,%eax
 898f363:	89 04 24             	mov    %eax,(%esp)
 898f366:	e8 6b 63 b8 ff       	call   85156d6 <_ZN20stStackableBooster_tC1Ev>
 898f36b:	8b 45 08             	mov    0x8(%ebp),%eax
 898f36e:	05 a4 02 00 00       	add    $0x2a4,%eax
 898f373:	89 04 24             	mov    %eax,(%esp)
 898f376:	e8 af 96 b8 ff       	call   8518a2a <_ZNSt6vectorI22STStackablePackageDataSaIS0_EEC1Ev>
 898f37b:	8b 45 08             	mov    0x8(%ebp),%eax
 898f37e:	05 b0 02 00 00       	add    $0x2b0,%eax
 898f383:	89 04 24             	mov    %eax,(%esp)
 898f386:	e8 0d 3d 03 00       	call   89c3098 <_ZN10STRecoveryC1Ev>
 898f38b:	8b 45 08             	mov    0x8(%ebp),%eax
 898f38e:	05 c4 02 00 00       	add    $0x2c4,%eax
 898f393:	89 04 24             	mov    %eax,(%esp)
 898f396:	e8 fd 3c 03 00       	call   89c3098 <_ZN10STRecoveryC1Ev>
 898f39b:	8b 45 08             	mov    0x8(%ebp),%eax
 898f39e:	05 d8 02 00 00       	add    $0x2d8,%eax
 898f3a3:	89 04 24             	mov    %eax,(%esp)
 898f3a6:	e8 31 3d 03 00       	call   89c30dc <_ZN16STStatusRecoveryC1Ev>
 898f3ab:	8b 45 08             	mov    0x8(%ebp),%eax
 898f3ae:	05 ec 02 00 00       	add    $0x2ec,%eax
 898f3b3:	89 04 24             	mov    %eax,(%esp)
 898f3b6:	e8 69 3d 03 00       	call   89c3124 <_ZN16STStatusGenerateC1Ev>
 898f3bb:	8b 45 08             	mov    0x8(%ebp),%eax
 898f3be:	05 04 03 00 00       	add    $0x304,%eax
 898f3c3:	89 04 24             	mov    %eax,(%esp)
 898f3c6:	e8 c9 3d 03 00       	call   89c3194 <_ZN6STBuffC1Ev>
 898f3cb:	8b 45 08             	mov    0x8(%ebp),%eax
 898f3ce:	05 14 03 00 00       	add    $0x314,%eax
 898f3d3:	89 04 24             	mov    %eax,(%esp)
 898f3d6:	e8 f7 3d 03 00       	call   89c31d2 <_ZN15STSummonMonsterC1Ev>
 898f3db:	8b 45 08             	mov    0x8(%ebp),%eax
 898f3de:	05 30 03 00 00       	add    $0x330,%eax
 898f3e3:	89 04 24             	mov    %eax,(%esp)
 898f3e6:	e8 4d 3e 03 00       	call   89c3238 <_ZN11STSummonApcC1Ev>
 898f3eb:	8b 45 08             	mov    0x8(%ebp),%eax
 898f3ee:	05 4c 03 00 00       	add    $0x34c,%eax
 898f3f3:	89 04 24             	mov    %eax,(%esp)
 898f3f6:	e8 cd 3e 03 00       	call   89c32c8 <_ZN18STStatChangeVectorC1Ev>
 898f3fb:	8b 45 08             	mov    0x8(%ebp),%eax
 898f3fe:	05 68 03 00 00       	add    $0x368,%eax
 898f403:	89 04 24             	mov    %eax,(%esp)
 898f406:	e8 c5 71 d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898f40b:	8b 45 08             	mov    0x8(%ebp),%eax
 898f40e:	05 74 03 00 00       	add    $0x374,%eax
 898f413:	89 04 24             	mov    %eax,(%esp)
 898f416:	e8 bb 55 7a ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 898f41b:	8b 45 08             	mov    0x8(%ebp),%eax
 898f41e:	05 a4 03 00 00       	add    $0x3a4,%eax
 898f423:	89 04 24             	mov    %eax,(%esp)
 898f426:	e8 39 78 73 ff       	call   80c6c64 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 898f42b:	8b 45 08             	mov    0x8(%ebp),%eax
 898f42e:	05 c0 03 00 00       	add    $0x3c0,%eax
 898f433:	89 04 24             	mov    %eax,(%esp)
 898f436:	e8 9b 55 7a ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 898f43b:	8b 45 08             	mov    0x8(%ebp),%eax
 898f43e:	05 d4 03 00 00       	add    $0x3d4,%eax
 898f443:	89 04 24             	mov    %eax,(%esp)
 898f446:	e8 d1 62 b8 ff       	call   851571c <_ZN15stLimitCubeInfoC1Ev>
 898f44b:	8b 45 08             	mov    0x8(%ebp),%eax
 898f44e:	05 f4 03 00 00       	add    $0x3f4,%eax
 898f453:	89 04 24             	mov    %eax,(%esp)
 898f456:	e8 41 67 b8 ff       	call   8515b9c <_ZNSt3mapI21STEnchantSystemMapKey22STEnchantSystemMapDataSt4lessIS0_ESaISt4pairIKS0_S1_EEEC1Ev>
 898f45b:	8b 45 08             	mov    0x8(%ebp),%eax
 898f45e:	05 10 04 00 00       	add    $0x410,%eax
 898f463:	89 04 24             	mov    %eax,(%esp)
 898f466:	e8 65 71 d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898f46b:	8b 45 08             	mov    0x8(%ebp),%eax
 898f46e:	05 1c 04 00 00       	add    $0x41c,%eax
 898f473:	89 04 24             	mov    %eax,(%esp)
 898f476:	e8 07 47 b8 ff       	call   8513b82 <_ZN17BoosterSelectInfoC1Ev>
 898f47b:	8b 45 08             	mov    0x8(%ebp),%eax
 898f47e:	05 3c 04 00 00       	add    $0x43c,%eax
 898f483:	89 04 24             	mov    %eax,(%esp)
 898f486:	e8 03 68 82 ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 898f48b:	8b 45 08             	mov    0x8(%ebp),%eax
 898f48e:	05 7c 04 00 00       	add    $0x47c,%eax
 898f493:	89 04 24             	mov    %eax,(%esp)
 898f496:	e8 d3 46 b8 ff       	call   8513b6e <_ZN22AvatarOptionChangeTypeC1Ev>
 898f49b:	8b 45 08             	mov    0x8(%ebp),%eax
 898f49e:	05 80 04 00 00       	add    $0x480,%eax
 898f4a3:	89 04 24             	mov    %eax,(%esp)
 898f4a6:	e8 31 af 74 ff       	call   80da3dc <_ZNSt3setIiSt4lessIiESaIiEEC1Ev>
 898f4ab:	8b 45 08             	mov    0x8(%ebp),%eax
 898f4ae:	05 98 04 00 00       	add    $0x498,%eax
 898f4b3:	89 04 24             	mov    %eax,(%esp)
 898f4b6:	e8 21 af 74 ff       	call   80da3dc <_ZNSt3setIiSt4lessIiESaIiEEC1Ev>
 898f4bb:	8b 45 08             	mov    0x8(%ebp),%eax
 898f4be:	05 b4 04 00 00       	add    $0x4b4,%eax
 898f4c3:	89 04 24             	mov    %eax,(%esp)
 898f4c6:	e8 05 71 d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898f4cb:	8b 45 08             	mov    0x8(%ebp),%eax
 898f4ce:	05 bc 04 00 00       	add    $0x4bc,%eax
 898f4d3:	89 04 24             	mov    %eax,(%esp)
 898f4d6:	e8 7d 66 03 00       	call   89c5b58 <_ZNSt3mapI16ENUM_MODULE_TYPEP22EquipmentParameterInfoSt4lessIS0_ESaISt4pairIKS0_S2_EEEC1Ev>
 898f4db:	8b 45 08             	mov    0x8(%ebp),%eax
 898f4de:	05 d4 04 00 00       	add    $0x4d4,%eax
 898f4e3:	89 04 24             	mov    %eax,(%esp)
 898f4e6:	e8 f1 ae 74 ff       	call   80da3dc <_ZNSt3setIiSt4lessIiESaIiEEC1Ev>
 898f4eb:	8b 45 08             	mov    0x8(%ebp),%eax
 898f4ee:	05 fc 04 00 00       	add    $0x4fc,%eax
 898f4f3:	89 04 24             	mov    %eax,(%esp)
 898f4f6:	e8 b1 ec 6f ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 898f4fb:	8b 45 08             	mov    0x8(%ebp),%eax
 898f4fe:	05 0c 05 00 00       	add    $0x50c,%eax
 898f503:	89 04 24             	mov    %eax,(%esp)
 898f506:	e8 d1 ae 74 ff       	call   80da3dc <_ZNSt3setIiSt4lessIiESaIiEEC1Ev>
 898f50b:	8b 45 08             	mov    0x8(%ebp),%eax
 898f50e:	89 04 24             	mov    %eax,(%esp)
 898f511:	e8 64 13 00 00       	call   899087a <_ZN17STStackableScript5ClearEv>
 898f516:	e9 c3 03 00 00       	jmp    898f8de <_ZN17STStackableScriptC1Ev+0x6c6>
 898f51b:	89 d3                	mov    %edx,%ebx
 898f51d:	89 c6                	mov    %eax,%esi
 898f51f:	8b 45 08             	mov    0x8(%ebp),%eax
 898f522:	05 0c 05 00 00       	add    $0x50c,%eax
 898f527:	89 04 24             	mov    %eax,(%esp)
 898f52a:	e8 05 aa 74 ff       	call   80d9f34 <_ZNSt3setIiSt4lessIiESaIiEED1Ev>
 898f52f:	89 f0                	mov    %esi,%eax
 898f531:	89 da                	mov    %ebx,%edx
 898f533:	eb 00                	jmp    898f535 <_ZN17STStackableScriptC1Ev+0x31d>
 898f535:	89 d3                	mov    %edx,%ebx
 898f537:	89 c6                	mov    %eax,%esi
 898f539:	8b 45 08             	mov    0x8(%ebp),%eax
 898f53c:	05 fc 04 00 00       	add    $0x4fc,%eax
 898f541:	89 04 24             	mov    %eax,(%esp)
 898f544:	e8 91 48 6f ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 898f549:	89 f0                	mov    %esi,%eax
 898f54b:	89 da                	mov    %ebx,%edx
 898f54d:	eb 00                	jmp    898f54f <_ZN17STStackableScriptC1Ev+0x337>
 898f54f:	89 d3                	mov    %edx,%ebx
 898f551:	89 c6                	mov    %eax,%esi
 898f553:	8b 45 08             	mov    0x8(%ebp),%eax
 898f556:	05 d4 04 00 00       	add    $0x4d4,%eax
 898f55b:	89 04 24             	mov    %eax,(%esp)
 898f55e:	e8 d1 a9 74 ff       	call   80d9f34 <_ZNSt3setIiSt4lessIiESaIiEED1Ev>
 898f563:	89 f0                	mov    %esi,%eax
 898f565:	89 da                	mov    %ebx,%edx
 898f567:	eb 00                	jmp    898f569 <_ZN17STStackableScriptC1Ev+0x351>
 898f569:	89 d3                	mov    %edx,%ebx
 898f56b:	89 c6                	mov    %eax,%esi
 898f56d:	8b 45 08             	mov    0x8(%ebp),%eax
 898f570:	05 bc 04 00 00       	add    $0x4bc,%eax
 898f575:	89 04 24             	mov    %eax,(%esp)
 898f578:	e8 65 45 03 00       	call   89c3ae2 <_ZNSt3mapI16ENUM_MODULE_TYPEP22EquipmentParameterInfoSt4lessIS0_ESaISt4pairIKS0_S2_EEED1Ev>
 898f57d:	89 f0                	mov    %esi,%eax
 898f57f:	89 da                	mov    %ebx,%edx
 898f581:	eb 00                	jmp    898f583 <_ZN17STStackableScriptC1Ev+0x36b>
 898f583:	89 d3                	mov    %edx,%ebx
 898f585:	89 c6                	mov    %eax,%esi
 898f587:	8b 45 08             	mov    0x8(%ebp),%eax
 898f58a:	05 b4 04 00 00       	add    $0x4b4,%eax
 898f58f:	89 04 24             	mov    %eax,(%esp)
 898f592:	e8 49 86 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898f597:	89 f0                	mov    %esi,%eax
 898f599:	89 da                	mov    %ebx,%edx
 898f59b:	eb 00                	jmp    898f59d <_ZN17STStackableScriptC1Ev+0x385>
 898f59d:	89 d3                	mov    %edx,%ebx
 898f59f:	89 c6                	mov    %eax,%esi
 898f5a1:	8b 45 08             	mov    0x8(%ebp),%eax
 898f5a4:	05 98 04 00 00       	add    $0x498,%eax
 898f5a9:	89 04 24             	mov    %eax,(%esp)
 898f5ac:	e8 83 a9 74 ff       	call   80d9f34 <_ZNSt3setIiSt4lessIiESaIiEED1Ev>
 898f5b1:	89 f0                	mov    %esi,%eax
 898f5b3:	89 da                	mov    %ebx,%edx
 898f5b5:	eb 00                	jmp    898f5b7 <_ZN17STStackableScriptC1Ev+0x39f>
 898f5b7:	89 d3                	mov    %edx,%ebx
 898f5b9:	89 c6                	mov    %eax,%esi
 898f5bb:	8b 45 08             	mov    0x8(%ebp),%eax
 898f5be:	05 80 04 00 00       	add    $0x480,%eax
 898f5c3:	89 04 24             	mov    %eax,(%esp)
 898f5c6:	e8 69 a9 74 ff       	call   80d9f34 <_ZNSt3setIiSt4lessIiESaIiEED1Ev>
 898f5cb:	89 f0                	mov    %esi,%eax
 898f5cd:	89 da                	mov    %ebx,%edx
 898f5cf:	eb 00                	jmp    898f5d1 <_ZN17STStackableScriptC1Ev+0x3b9>
 898f5d1:	89 d3                	mov    %edx,%ebx
 898f5d3:	89 c6                	mov    %eax,%esi
 898f5d5:	8b 45 08             	mov    0x8(%ebp),%eax
 898f5d8:	05 1c 04 00 00       	add    $0x41c,%eax
 898f5dd:	89 04 24             	mov    %eax,(%esp)
 898f5e0:	e8 73 50 b8 ff       	call   8514658 <_ZN17BoosterSelectInfoD1Ev>
 898f5e5:	89 f0                	mov    %esi,%eax
 898f5e7:	89 da                	mov    %ebx,%edx
 898f5e9:	eb 00                	jmp    898f5eb <_ZN17STStackableScriptC1Ev+0x3d3>
 898f5eb:	89 d3                	mov    %edx,%ebx
 898f5ed:	89 c6                	mov    %eax,%esi
 898f5ef:	8b 45 08             	mov    0x8(%ebp),%eax
 898f5f2:	05 10 04 00 00       	add    $0x410,%eax
 898f5f7:	89 04 24             	mov    %eax,(%esp)
 898f5fa:	e8 e1 85 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898f5ff:	89 f0                	mov    %esi,%eax
 898f601:	89 da                	mov    %ebx,%edx
 898f603:	eb 00                	jmp    898f605 <_ZN17STStackableScriptC1Ev+0x3ed>
 898f605:	89 d3                	mov    %edx,%ebx
 898f607:	89 c6                	mov    %eax,%esi
 898f609:	8b 45 08             	mov    0x8(%ebp),%eax
 898f60c:	05 f4 03 00 00       	add    $0x3f4,%eax
 898f611:	89 04 24             	mov    %eax,(%esp)
 898f614:	e8 1b 45 b8 ff       	call   8513b34 <_ZNSt3mapI21STEnchantSystemMapKey22STEnchantSystemMapDataSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 898f619:	89 f0                	mov    %esi,%eax
 898f61b:	89 da                	mov    %ebx,%edx
 898f61d:	eb 00                	jmp    898f61f <_ZN17STStackableScriptC1Ev+0x407>
 898f61f:	89 d3                	mov    %edx,%ebx
 898f621:	89 c6                	mov    %eax,%esi
 898f623:	8b 45 08             	mov    0x8(%ebp),%eax
 898f626:	05 d4 03 00 00       	add    $0x3d4,%eax
 898f62b:	89 04 24             	mov    %eax,(%esp)
 898f62e:	e8 3b 50 b8 ff       	call   851466e <_ZN15stLimitCubeInfoD1Ev>
 898f633:	89 f0                	mov    %esi,%eax
 898f635:	89 da                	mov    %ebx,%edx
 898f637:	eb 00                	jmp    898f639 <_ZN17STStackableScriptC1Ev+0x421>
 898f639:	89 d3                	mov    %edx,%ebx
 898f63b:	89 c6                	mov    %eax,%esi
 898f63d:	8b 45 08             	mov    0x8(%ebp),%eax
 898f640:	05 c0 03 00 00       	add    $0x3c0,%eax
 898f645:	89 04 24             	mov    %eax,(%esp)
 898f648:	e8 9d 53 7a ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 898f64d:	89 f0                	mov    %esi,%eax
 898f64f:	89 da                	mov    %ebx,%edx
 898f651:	eb 00                	jmp    898f653 <_ZN17STStackableScriptC1Ev+0x43b>
 898f653:	89 d3                	mov    %edx,%ebx
 898f655:	89 c6                	mov    %eax,%esi
 898f657:	8b 45 08             	mov    0x8(%ebp),%eax
 898f65a:	05 a4 03 00 00       	add    $0x3a4,%eax
 898f65f:	89 04 24             	mov    %eax,(%esp)
 898f662:	e8 5f 74 73 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 898f667:	89 f0                	mov    %esi,%eax
 898f669:	89 da                	mov    %ebx,%edx
 898f66b:	eb 00                	jmp    898f66d <_ZN17STStackableScriptC1Ev+0x455>
 898f66d:	89 d3                	mov    %edx,%ebx
 898f66f:	89 c6                	mov    %eax,%esi
 898f671:	8b 45 08             	mov    0x8(%ebp),%eax
 898f674:	05 74 03 00 00       	add    $0x374,%eax
 898f679:	89 04 24             	mov    %eax,(%esp)
 898f67c:	e8 69 53 7a ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 898f681:	89 f0                	mov    %esi,%eax
 898f683:	89 da                	mov    %ebx,%edx
 898f685:	eb 00                	jmp    898f687 <_ZN17STStackableScriptC1Ev+0x46f>
 898f687:	89 d3                	mov    %edx,%ebx
 898f689:	89 c6                	mov    %eax,%esi
 898f68b:	8b 45 08             	mov    0x8(%ebp),%eax
 898f68e:	05 68 03 00 00       	add    $0x368,%eax
 898f693:	89 04 24             	mov    %eax,(%esp)
 898f696:	e8 45 85 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898f69b:	89 f0                	mov    %esi,%eax
 898f69d:	89 da                	mov    %ebx,%edx
 898f69f:	eb 00                	jmp    898f6a1 <_ZN17STStackableScriptC1Ev+0x489>
 898f6a1:	89 d3                	mov    %edx,%ebx
 898f6a3:	89 c6                	mov    %eax,%esi
 898f6a5:	8b 45 08             	mov    0x8(%ebp),%eax
 898f6a8:	05 4c 03 00 00       	add    $0x34c,%eax
 898f6ad:	89 04 24             	mov    %eax,(%esp)
 898f6b0:	e8 19 44 03 00       	call   89c3ace <_ZN18STStatChangeVectorD1Ev>
 898f6b5:	89 f0                	mov    %esi,%eax
 898f6b7:	89 da                	mov    %ebx,%edx
 898f6b9:	eb 00                	jmp    898f6bb <_ZN17STStackableScriptC1Ev+0x4a3>
 898f6bb:	89 d3                	mov    %edx,%ebx
 898f6bd:	89 c6                	mov    %eax,%esi
 898f6bf:	8b 45 08             	mov    0x8(%ebp),%eax
 898f6c2:	05 ec 02 00 00       	add    $0x2ec,%eax
 898f6c7:	89 04 24             	mov    %eax,(%esp)
 898f6ca:	e8 eb 43 03 00       	call   89c3aba <_ZN16STStatusGenerateD1Ev>
 898f6cf:	89 f0                	mov    %esi,%eax
 898f6d1:	89 da                	mov    %ebx,%edx
 898f6d3:	eb 00                	jmp    898f6d5 <_ZN17STStackableScriptC1Ev+0x4bd>
 898f6d5:	89 d3                	mov    %edx,%ebx
 898f6d7:	89 c6                	mov    %eax,%esi
 898f6d9:	8b 45 08             	mov    0x8(%ebp),%eax
 898f6dc:	05 a4 02 00 00       	add    $0x2a4,%eax
 898f6e1:	89 04 24             	mov    %eax,(%esp)
 898f6e4:	e8 5b e8 8e ff       	call   827df44 <_ZNSt6vectorI22STStackablePackageDataSaIS0_EED1Ev>
 898f6e9:	89 f0                	mov    %esi,%eax
 898f6eb:	89 da                	mov    %ebx,%edx
 898f6ed:	eb 00                	jmp    898f6ef <_ZN17STStackableScriptC1Ev+0x4d7>
 898f6ef:	89 d3                	mov    %edx,%ebx
 898f6f1:	89 c6                	mov    %eax,%esi
 898f6f3:	8b 45 08             	mov    0x8(%ebp),%eax
 898f6f6:	05 80 02 00 00       	add    $0x280,%eax
 898f6fb:	89 04 24             	mov    %eax,(%esp)
 898f6fe:	e8 0f 4f b8 ff       	call   8514612 <_ZN20stStackableBooster_tD1Ev>
 898f703:	89 f0                	mov    %esi,%eax
 898f705:	89 da                	mov    %ebx,%edx
 898f707:	eb 00                	jmp    898f709 <_ZN17STStackableScriptC1Ev+0x4f1>
 898f709:	89 d3                	mov    %edx,%ebx
 898f70b:	89 c6                	mov    %eax,%esi
 898f70d:	8b 45 08             	mov    0x8(%ebp),%eax
 898f710:	05 74 02 00 00       	add    $0x274,%eax
 898f715:	89 04 24             	mov    %eax,(%esp)
 898f718:	e8 4b 82 9f ff       	call   8387968 <_ZNSt6vectorIS_I22STStackablePackageDataSaIS0_EESaIS2_EED1Ev>
 898f71d:	89 f0                	mov    %esi,%eax
 898f71f:	89 da                	mov    %ebx,%edx
 898f721:	eb 00                	jmp    898f723 <_ZN17STStackableScriptC1Ev+0x50b>
 898f723:	89 d3                	mov    %edx,%ebx
 898f725:	89 c6                	mov    %eax,%esi
 898f727:	8b 45 08             	mov    0x8(%ebp),%eax
 898f72a:	05 68 02 00 00       	add    $0x268,%eax
 898f72f:	89 04 24             	mov    %eax,(%esp)
 898f732:	e8 0d e8 8e ff       	call   827df44 <_ZNSt6vectorI22STStackablePackageDataSaIS0_EED1Ev>
 898f737:	89 f0                	mov    %esi,%eax
 898f739:	89 da                	mov    %ebx,%edx
 898f73b:	eb 00                	jmp    898f73d <_ZN17STStackableScriptC1Ev+0x525>
 898f73d:	89 d3                	mov    %edx,%ebx
 898f73f:	89 c6                	mov    %eax,%esi
 898f741:	8b 45 08             	mov    0x8(%ebp),%eax
 898f744:	05 5c 02 00 00       	add    $0x25c,%eax
 898f749:	89 04 24             	mov    %eax,(%esp)
 898f74c:	e8 89 46 6f ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 898f751:	89 f0                	mov    %esi,%eax
 898f753:	89 da                	mov    %ebx,%edx
 898f755:	eb 00                	jmp    898f757 <_ZN17STStackableScriptC1Ev+0x53f>
 898f757:	89 d3                	mov    %edx,%ebx
 898f759:	89 c6                	mov    %eax,%esi
 898f75b:	8b 45 08             	mov    0x8(%ebp),%eax
 898f75e:	05 50 02 00 00       	add    $0x250,%eax
 898f763:	89 04 24             	mov    %eax,(%esp)
 898f766:	e8 6f 46 6f ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 898f76b:	89 f0                	mov    %esi,%eax
 898f76d:	89 da                	mov    %ebx,%edx
 898f76f:	eb 00                	jmp    898f771 <_ZN17STStackableScriptC1Ev+0x559>
 898f771:	89 d3                	mov    %edx,%ebx
 898f773:	89 c6                	mov    %eax,%esi
 898f775:	8b 45 08             	mov    0x8(%ebp),%eax
 898f778:	05 44 02 00 00       	add    $0x244,%eax
 898f77d:	89 04 24             	mov    %eax,(%esp)
 898f780:	e8 cd 21 9f ff       	call   8381952 <_ZNSt6vectorIS_IiSaIiEESaIS1_EED1Ev>
 898f785:	89 f0                	mov    %esi,%eax
 898f787:	89 da                	mov    %ebx,%edx
 898f789:	eb 00                	jmp    898f78b <_ZN17STStackableScriptC1Ev+0x573>
 898f78b:	89 d3                	mov    %edx,%ebx
 898f78d:	89 c6                	mov    %eax,%esi
 898f78f:	8b 45 08             	mov    0x8(%ebp),%eax
 898f792:	05 38 02 00 00       	add    $0x238,%eax
 898f797:	89 04 24             	mov    %eax,(%esp)
 898f79a:	e8 41 84 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898f79f:	89 f0                	mov    %esi,%eax
 898f7a1:	89 da                	mov    %ebx,%edx
 898f7a3:	eb 00                	jmp    898f7a5 <_ZN17STStackableScriptC1Ev+0x58d>
 898f7a5:	89 d3                	mov    %edx,%ebx
 898f7a7:	89 c6                	mov    %eax,%esi
 898f7a9:	8b 45 08             	mov    0x8(%ebp),%eax
 898f7ac:	05 34 02 00 00       	add    $0x234,%eax
 898f7b1:	89 04 24             	mov    %eax,(%esp)
 898f7b4:	e8 27 84 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898f7b9:	89 f0                	mov    %esi,%eax
 898f7bb:	89 da                	mov    %ebx,%edx
 898f7bd:	eb 00                	jmp    898f7bf <_ZN17STStackableScriptC1Ev+0x5a7>
 898f7bf:	89 d3                	mov    %edx,%ebx
 898f7c1:	89 c6                	mov    %eax,%esi
 898f7c3:	8b 45 08             	mov    0x8(%ebp),%eax
 898f7c6:	05 30 02 00 00       	add    $0x230,%eax
 898f7cb:	89 04 24             	mov    %eax,(%esp)
 898f7ce:	e8 0d 84 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898f7d3:	89 f0                	mov    %esi,%eax
 898f7d5:	89 da                	mov    %ebx,%edx
 898f7d7:	eb 00                	jmp    898f7d9 <_ZN17STStackableScriptC1Ev+0x5c1>
 898f7d9:	89 d3                	mov    %edx,%ebx
 898f7db:	89 c6                	mov    %eax,%esi
 898f7dd:	8b 45 08             	mov    0x8(%ebp),%eax
 898f7e0:	05 24 02 00 00       	add    $0x224,%eax
 898f7e5:	89 04 24             	mov    %eax,(%esp)
 898f7e8:	e8 ed 45 6f ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 898f7ed:	89 f0                	mov    %esi,%eax
 898f7ef:	89 da                	mov    %ebx,%edx
 898f7f1:	eb 00                	jmp    898f7f3 <_ZN17STStackableScriptC1Ev+0x5db>
 898f7f3:	89 d3                	mov    %edx,%ebx
 898f7f5:	89 c6                	mov    %eax,%esi
 898f7f7:	8b 45 08             	mov    0x8(%ebp),%eax
 898f7fa:	05 14 02 00 00       	add    $0x214,%eax
 898f7ff:	89 04 24             	mov    %eax,(%esp)
 898f802:	e8 cd 67 b8 ff       	call   8515fd4 <_ZNSt6vectorIN15StackableAction16UsableServerTypeESaIS1_EED1Ev>
 898f807:	89 f0                	mov    %esi,%eax
 898f809:	89 da                	mov    %ebx,%edx
 898f80b:	eb 00                	jmp    898f80d <_ZN17STStackableScriptC1Ev+0x5f5>
 898f80d:	89 d3                	mov    %edx,%ebx
 898f80f:	89 c6                	mov    %eax,%esi
 898f811:	8b 45 08             	mov    0x8(%ebp),%eax
 898f814:	05 08 02 00 00       	add    $0x208,%eax
 898f819:	89 04 24             	mov    %eax,(%esp)
 898f81c:	e8 d9 62 03 00       	call   89c5afa <_ZNSt6vectorI26STPassiveObjectInStackableSaIS0_EED1Ev>
 898f821:	89 f0                	mov    %esi,%eax
 898f823:	89 da                	mov    %ebx,%edx
 898f825:	eb 00                	jmp    898f827 <_ZN17STStackableScriptC1Ev+0x60f>
 898f827:	89 d3                	mov    %edx,%ebx
 898f829:	89 c6                	mov    %eax,%esi
 898f82b:	8b 45 08             	mov    0x8(%ebp),%eax
 898f82e:	05 f8 01 00 00       	add    $0x1f8,%eax
 898f833:	89 04 24             	mov    %eax,(%esp)
 898f836:	e8 3b 67 b8 ff       	call   8515f76 <_ZNSt6vectorIN15StackableAction11UsablePlaceESaIS1_EED1Ev>
 898f83b:	89 f0                	mov    %esi,%eax
 898f83d:	89 da                	mov    %ebx,%edx
 898f83f:	eb 00                	jmp    898f841 <_ZN17STStackableScriptC1Ev+0x629>
 898f841:	89 d3                	mov    %edx,%ebx
 898f843:	89 c6                	mov    %eax,%esi
 898f845:	8b 45 08             	mov    0x8(%ebp),%eax
 898f848:	05 ec 01 00 00       	add    $0x1ec,%eax
 898f84d:	89 04 24             	mov    %eax,(%esp)
 898f850:	e8 85 45 6f ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 898f855:	89 f0                	mov    %esi,%eax
 898f857:	89 da                	mov    %ebx,%edx
 898f859:	eb 00                	jmp    898f85b <_ZN17STStackableScriptC1Ev+0x643>
 898f85b:	89 d3                	mov    %edx,%ebx
 898f85d:	89 c6                	mov    %eax,%esi
 898f85f:	8b 45 08             	mov    0x8(%ebp),%eax
 898f862:	05 d8 01 00 00       	add    $0x1d8,%eax
 898f867:	89 04 24             	mov    %eax,(%esp)
 898f86a:	e8 71 83 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898f86f:	89 f0                	mov    %esi,%eax
 898f871:	89 da                	mov    %ebx,%edx
 898f873:	eb 00                	jmp    898f875 <_ZN17STStackableScriptC1Ev+0x65d>
 898f875:	89 d3                	mov    %edx,%ebx
 898f877:	89 c6                	mov    %eax,%esi
 898f879:	8b 45 08             	mov    0x8(%ebp),%eax
 898f87c:	05 9c 01 00 00       	add    $0x19c,%eax
 898f881:	89 04 24             	mov    %eax,(%esp)
 898f884:	e8 6d 65 b8 ff       	call   8515df6 <_ZNSt6vectorI10CRabbitBoxSaIS0_EED1Ev>
 898f889:	89 f0                	mov    %esi,%eax
 898f88b:	89 da                	mov    %ebx,%edx
 898f88d:	eb 00                	jmp    898f88f <_ZN17STStackableScriptC1Ev+0x677>
 898f88f:	89 d3                	mov    %edx,%ebx
 898f891:	89 c6                	mov    %eax,%esi
 898f893:	8b 45 08             	mov    0x8(%ebp),%eax
 898f896:	05 90 01 00 00       	add    $0x190,%eax
 898f89b:	89 04 24             	mov    %eax,(%esp)
 898f89e:	e8 37 45 6f ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 898f8a3:	89 f0                	mov    %esi,%eax
 898f8a5:	89 da                	mov    %ebx,%edx
 898f8a7:	eb 00                	jmp    898f8a9 <_ZN17STStackableScriptC1Ev+0x691>
 898f8a9:	89 d3                	mov    %edx,%ebx
 898f8ab:	89 c6                	mov    %eax,%esi
 898f8ad:	8b 45 08             	mov    0x8(%ebp),%eax
 898f8b0:	05 78 01 00 00       	add    $0x178,%eax
 898f8b5:	89 04 24             	mov    %eax,(%esp)
 898f8b8:	e8 89 41 03 00       	call   89c3a46 <_ZN22Arad_STStackableScriptD1Ev>
 898f8bd:	89 f0                	mov    %esi,%eax
 898f8bf:	89 da                	mov    %ebx,%edx
 898f8c1:	eb 00                	jmp    898f8c3 <_ZN17STStackableScriptC1Ev+0x6ab>
 898f8c3:	89 d3                	mov    %edx,%ebx
 898f8c5:	89 c6                	mov    %eax,%esi
 898f8c7:	8b 45 08             	mov    0x8(%ebp),%eax
 898f8ca:	89 04 24             	mov    %eax,(%esp)
 898f8cd:	e8 1e 3e 03 00       	call   89c36f0 <_ZN12STItemScriptD1Ev>
 898f8d2:	89 f0                	mov    %esi,%eax
 898f8d4:	89 da                	mov    %ebx,%edx
 898f8d6:	89 04 24             	mov    %eax,(%esp)
 898f8d9:	e8 72 3e 15 00       	call   8ae3750 <_Unwind_Resume>
 898f8de:	83 c4 10             	add    $0x10,%esp
 898f8e1:	5b                   	pop    %ebx
 898f8e2:	5e                   	pop    %esi
 898f8e3:	5d                   	pop    %ebp
 898f8e4:	c3                   	ret
 898f8e5:	90                   	nop

```

```c
// STStackableScript::STStackableScript @ 0x898f218

/* STStackableScript::STStackableScript() */

void __thiscall STStackableScript::STStackableScript(STStackableScript *this)

{
  STItemScript::STItemScript((STItemScript *)this);
                    /* try { // try from 0898f236 to 0898f23a has its CatchHandler @ 0898f8c3 */
  Arad_STStackableScript::Arad_STStackableScript((Arad_STStackableScript *)(this + 0x178));
                    /* try { // try from 0898f246 to 0898f24a has its CatchHandler @ 0898f8a9 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 400));
                    /* try { // try from 0898f256 to 0898f25a has its CatchHandler @ 0898f88f */
  std::vector<CRabbitBox,std::allocator<CRabbitBox>>::vector
            ((vector<CRabbitBox,std::allocator<CRabbitBox>> *)(this + 0x19c));
  CountinuousItemOption::CountinuousItemOption((CountinuousItemOption *)(this + 0x1b9));
  CountinuousItemOption::CountinuousItemOption((CountinuousItemOption *)(this + 0x1bc));
                    /* try { // try from 0898f286 to 0898f28a has its CatchHandler @ 0898f875 */
  std::string::string((string *)(this + 0x1d8));
                    /* try { // try from 0898f296 to 0898f29a has its CatchHandler @ 0898f85b */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x1ec));
                    /* try { // try from 0898f2a6 to 0898f2aa has its CatchHandler @ 0898f841 */
  std::vector<StackableAction::UsablePlace,std::allocator<StackableAction::UsablePlace>>::vector
            ((vector<StackableAction::UsablePlace,std::allocator<StackableAction::UsablePlace>> *)
             (this + 0x1f8));
                    /* try { // try from 0898f2b6 to 0898f2ba has its CatchHandler @ 0898f827 */
  std::vector<STPassiveObjectInStackable,std::allocator<STPassiveObjectInStackable>>::vector
            ((vector<STPassiveObjectInStackable,std::allocator<STPassiveObjectInStackable>> *)
             (this + 0x208));
                    /* try { // try from 0898f2c6 to 0898f2ca has its CatchHandler @ 0898f80d */
  std::vector<StackableAction::UsableServerType,std::allocator<StackableAction::UsableServerType>>::
  vector((vector<StackableAction::UsableServerType,std::allocator<StackableAction::UsableServerType>>
          *)(this + 0x214));
                    /* try { // try from 0898f2d6 to 0898f2da has its CatchHandler @ 0898f7f3 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x224));
                    /* try { // try from 0898f2e6 to 0898f2ea has its CatchHandler @ 0898f7d9 */
  std::string::string((string *)(this + 0x230));
                    /* try { // try from 0898f2f6 to 0898f2fa has its CatchHandler @ 0898f7bf */
  std::string::string((string *)(this + 0x234));
                    /* try { // try from 0898f306 to 0898f30a has its CatchHandler @ 0898f7a5 */
  std::string::string((string *)(this + 0x238));
                    /* try { // try from 0898f316 to 0898f31a has its CatchHandler @ 0898f78b */
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::vector((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
            *)(this + 0x244));
                    /* try { // try from 0898f326 to 0898f32a has its CatchHandler @ 0898f771 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x250));
                    /* try { // try from 0898f336 to 0898f33a has its CatchHandler @ 0898f757 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x25c));
                    /* try { // try from 0898f346 to 0898f34a has its CatchHandler @ 0898f73d */
  std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::vector
            ((vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)(this + 0x268)
            );
                    /* try { // try from 0898f356 to 0898f35a has its CatchHandler @ 0898f723 */
  std::
  vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
  ::vector((vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
            *)(this + 0x274));
                    /* try { // try from 0898f366 to 0898f36a has its CatchHandler @ 0898f709 */
  stStackableBooster_t::stStackableBooster_t((stStackableBooster_t *)(this + 0x280));
                    /* try { // try from 0898f376 to 0898f37a has its CatchHandler @ 0898f6ef */
  std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::vector
            ((vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)(this + 0x2a4)
            );
  STRecovery::STRecovery((STRecovery *)(this + 0x2b0));
  STRecovery::STRecovery((STRecovery *)(this + 0x2c4));
  STStatusRecovery::STStatusRecovery((STStatusRecovery *)(this + 0x2d8));
                    /* try { // try from 0898f3b6 to 0898f3ba has its CatchHandler @ 0898f6d5 */
  STStatusGenerate::STStatusGenerate((STStatusGenerate *)(this + 0x2ec));
  STBuff::STBuff((STBuff *)(this + 0x304));
  STSummonMonster::STSummonMonster((STSummonMonster *)(this + 0x314));
  STSummonApc::STSummonApc((STSummonApc *)(this + 0x330));
                    /* try { // try from 0898f3f6 to 0898f3fa has its CatchHandler @ 0898f6bb */
  STStatChangeVector::STStatChangeVector((STStatChangeVector *)(this + 0x34c));
                    /* try { // try from 0898f406 to 0898f40a has its CatchHandler @ 0898f6a1 */
  std::string::string((string *)(this + 0x368));
                    /* try { // try from 0898f416 to 0898f41a has its CatchHandler @ 0898f687 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x374));
                    /* try { // try from 0898f426 to 0898f42a has its CatchHandler @ 0898f66d */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x3a4))
  ;
                    /* try { // try from 0898f436 to 0898f43a has its CatchHandler @ 0898f653 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x3c0));
                    /* try { // try from 0898f446 to 0898f44a has its CatchHandler @ 0898f639 */
  stLimitCubeInfo::stLimitCubeInfo((stLimitCubeInfo *)(this + 0x3d4));
                    /* try { // try from 0898f456 to 0898f45a has its CatchHandler @ 0898f61f */
  std::
  map<STEnchantSystemMapKey,STEnchantSystemMapData,std::less<STEnchantSystemMapKey>,std::allocator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>>
  ::map((map<STEnchantSystemMapKey,STEnchantSystemMapData,std::less<STEnchantSystemMapKey>,std::allocator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>>
         *)(this + 0x3f4));
                    /* try { // try from 0898f466 to 0898f46a has its CatchHandler @ 0898f605 */
  std::string::string((string *)(this + 0x410));
                    /* try { // try from 0898f476 to 0898f47a has its CatchHandler @ 0898f5eb */
  BoosterSelectInfo::BoosterSelectInfo((BoosterSelectInfo *)(this + 0x41c));
  std::pair<int,int>::pair((pair<int,int> *)(this + 0x43c));
  AvatarOptionChangeType::AvatarOptionChangeType((AvatarOptionChangeType *)(this + 0x47c));
                    /* try { // try from 0898f4a6 to 0898f4aa has its CatchHandler @ 0898f5d1 */
  std::set<int,std::less<int>,std::allocator<int>>::set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x480));
                    /* try { // try from 0898f4b6 to 0898f4ba has its CatchHandler @ 0898f5b7 */
  std::set<int,std::less<int>,std::allocator<int>>::set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x498));
                    /* try { // try from 0898f4c6 to 0898f4ca has its CatchHandler @ 0898f59d */
  std::string::string((string *)(this + 0x4b4));
                    /* try { // try from 0898f4d6 to 0898f4da has its CatchHandler @ 0898f583 */
  std::
  map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
  ::map((map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
         *)(this + 0x4bc));
                    /* try { // try from 0898f4e6 to 0898f4ea has its CatchHandler @ 0898f569 */
  std::set<int,std::less<int>,std::allocator<int>>::set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x4d4));
                    /* try { // try from 0898f4f6 to 0898f4fa has its CatchHandler @ 0898f54f */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x4fc));
                    /* try { // try from 0898f506 to 0898f50a has its CatchHandler @ 0898f535 */
  std::set<int,std::less<int>,std::allocator<int>>::set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x50c));
                    /* try { // try from 0898f511 to 0898f515 has its CatchHandler @ 0898f51b */
  Clear(this);
  return;
}

```

---

## STStackableScript_0898f8e6

```asm
// === 0898f8e6 STStackableScript::STStackableScript  [0x0898f8e6-0x899013b] ===
 898f8e6:	55                   	push   %ebp
 898f8e7:	89 e5                	mov    %esp,%ebp
 898f8e9:	57                   	push   %edi
 898f8ea:	56                   	push   %esi
 898f8eb:	53                   	push   %ebx
 898f8ec:	83 ec 4c             	sub    $0x4c,%esp
 898f8ef:	8b 45 08             	mov    0x8(%ebp),%eax
 898f8f2:	89 04 24             	mov    %eax,(%esp)
 898f8f5:	e8 cc da ff ff       	call   898d3c6 <_ZN12STItemScriptC1Ev>
 898f8fa:	8b 45 08             	mov    0x8(%ebp),%eax
 898f8fd:	05 78 01 00 00       	add    $0x178,%eax
 898f902:	89 04 24             	mov    %eax,(%esp)
 898f905:	e8 f0 3a 03 00       	call   89c33fa <_ZN22Arad_STStackableScriptC1Ev>
 898f90a:	8b 45 08             	mov    0x8(%ebp),%eax
 898f90d:	05 90 01 00 00       	add    $0x190,%eax
 898f912:	89 04 24             	mov    %eax,(%esp)
 898f915:	e8 92 e8 6f ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 898f91a:	8b 45 08             	mov    0x8(%ebp),%eax
 898f91d:	05 9c 01 00 00       	add    $0x19c,%eax
 898f922:	89 04 24             	mov    %eax,(%esp)
 898f925:	e8 ec 90 b8 ff       	call   8518a16 <_ZNSt6vectorI10CRabbitBoxSaIS0_EEC1Ev>
 898f92a:	8b 45 08             	mov    0x8(%ebp),%eax
 898f92d:	05 b9 01 00 00       	add    $0x1b9,%eax
 898f932:	89 04 24             	mov    %eax,(%esp)
 898f935:	e8 36 ce ff ff       	call   898c770 <_ZN21CountinuousItemOptionC1Ev>
 898f93a:	8b 45 08             	mov    0x8(%ebp),%eax
 898f93d:	05 bc 01 00 00       	add    $0x1bc,%eax
 898f942:	89 04 24             	mov    %eax,(%esp)
 898f945:	e8 26 ce ff ff       	call   898c770 <_ZN21CountinuousItemOptionC1Ev>
 898f94a:	8b 45 08             	mov    0x8(%ebp),%eax
 898f94d:	05 d8 01 00 00       	add    $0x1d8,%eax
 898f952:	89 04 24             	mov    %eax,(%esp)
 898f955:	e8 76 6c d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898f95a:	8b 45 08             	mov    0x8(%ebp),%eax
 898f95d:	05 ec 01 00 00       	add    $0x1ec,%eax
 898f962:	89 04 24             	mov    %eax,(%esp)
 898f965:	e8 42 e8 6f ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 898f96a:	8b 45 08             	mov    0x8(%ebp),%eax
 898f96d:	05 f8 01 00 00       	add    $0x1f8,%eax
 898f972:	89 04 24             	mov    %eax,(%esp)
 898f975:	e8 28 91 b8 ff       	call   8518aa2 <_ZNSt6vectorIN15StackableAction11UsablePlaceESaIS1_EEC1Ev>
 898f97a:	8b 45 08             	mov    0x8(%ebp),%eax
 898f97d:	05 08 02 00 00       	add    $0x208,%eax
 898f982:	89 04 24             	mov    %eax,(%esp)
 898f985:	e8 5c 61 03 00       	call   89c5ae6 <_ZNSt6vectorI26STPassiveObjectInStackableSaIS0_EEC1Ev>
 898f98a:	8b 45 08             	mov    0x8(%ebp),%eax
 898f98d:	05 14 02 00 00       	add    $0x214,%eax
 898f992:	89 04 24             	mov    %eax,(%esp)
 898f995:	e8 1c 91 b8 ff       	call   8518ab6 <_ZNSt6vectorIN15StackableAction16UsableServerTypeESaIS1_EEC1Ev>
 898f99a:	8b 45 08             	mov    0x8(%ebp),%eax
 898f99d:	05 24 02 00 00       	add    $0x224,%eax
 898f9a2:	89 04 24             	mov    %eax,(%esp)
 898f9a5:	e8 02 e8 6f ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 898f9aa:	8b 45 08             	mov    0x8(%ebp),%eax
 898f9ad:	05 30 02 00 00       	add    $0x230,%eax
 898f9b2:	89 04 24             	mov    %eax,(%esp)
 898f9b5:	e8 16 6c d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898f9ba:	8b 45 08             	mov    0x8(%ebp),%eax
 898f9bd:	05 34 02 00 00       	add    $0x234,%eax
 898f9c2:	89 04 24             	mov    %eax,(%esp)
 898f9c5:	e8 06 6c d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898f9ca:	8b 45 08             	mov    0x8(%ebp),%eax
 898f9cd:	05 38 02 00 00       	add    $0x238,%eax
 898f9d2:	89 04 24             	mov    %eax,(%esp)
 898f9d5:	e8 f6 6b d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898f9da:	8b 45 08             	mov    0x8(%ebp),%eax
 898f9dd:	05 44 02 00 00       	add    $0x244,%eax
 898f9e2:	89 04 24             	mov    %eax,(%esp)
 898f9e5:	e8 54 1f 9f ff       	call   838193e <_ZNSt6vectorIS_IiSaIiEESaIS1_EEC1Ev>
 898f9ea:	8b 45 08             	mov    0x8(%ebp),%eax
 898f9ed:	05 50 02 00 00       	add    $0x250,%eax
 898f9f2:	89 04 24             	mov    %eax,(%esp)
 898f9f5:	e8 b2 e7 6f ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 898f9fa:	8b 45 08             	mov    0x8(%ebp),%eax
 898f9fd:	05 5c 02 00 00       	add    $0x25c,%eax
 898fa02:	89 04 24             	mov    %eax,(%esp)
 898fa05:	e8 a2 e7 6f ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 898fa0a:	8b 45 08             	mov    0x8(%ebp),%eax
 898fa0d:	05 68 02 00 00       	add    $0x268,%eax
 898fa12:	89 04 24             	mov    %eax,(%esp)
 898fa15:	e8 10 90 b8 ff       	call   8518a2a <_ZNSt6vectorI22STStackablePackageDataSaIS0_EEC1Ev>
 898fa1a:	8b 45 08             	mov    0x8(%ebp),%eax
 898fa1d:	05 74 02 00 00       	add    $0x274,%eax
 898fa22:	89 04 24             	mov    %eax,(%esp)
 898fa25:	e8 14 90 b8 ff       	call   8518a3e <_ZNSt6vectorIS_I22STStackablePackageDataSaIS0_EESaIS2_EEC1Ev>
 898fa2a:	8b 45 08             	mov    0x8(%ebp),%eax
 898fa2d:	05 80 02 00 00       	add    $0x280,%eax
 898fa32:	89 04 24             	mov    %eax,(%esp)
 898fa35:	e8 9c 5c b8 ff       	call   85156d6 <_ZN20stStackableBooster_tC1Ev>
 898fa3a:	8b 45 08             	mov    0x8(%ebp),%eax
 898fa3d:	05 a4 02 00 00       	add    $0x2a4,%eax
 898fa42:	89 04 24             	mov    %eax,(%esp)
 898fa45:	e8 e0 8f b8 ff       	call   8518a2a <_ZNSt6vectorI22STStackablePackageDataSaIS0_EEC1Ev>
 898fa4a:	8b 45 08             	mov    0x8(%ebp),%eax
 898fa4d:	05 b0 02 00 00       	add    $0x2b0,%eax
 898fa52:	89 04 24             	mov    %eax,(%esp)
 898fa55:	e8 3e 36 03 00       	call   89c3098 <_ZN10STRecoveryC1Ev>
 898fa5a:	8b 45 08             	mov    0x8(%ebp),%eax
 898fa5d:	05 c4 02 00 00       	add    $0x2c4,%eax
 898fa62:	89 04 24             	mov    %eax,(%esp)
 898fa65:	e8 2e 36 03 00       	call   89c3098 <_ZN10STRecoveryC1Ev>
 898fa6a:	8b 45 08             	mov    0x8(%ebp),%eax
 898fa6d:	05 d8 02 00 00       	add    $0x2d8,%eax
 898fa72:	89 04 24             	mov    %eax,(%esp)
 898fa75:	e8 62 36 03 00       	call   89c30dc <_ZN16STStatusRecoveryC1Ev>
 898fa7a:	8b 45 08             	mov    0x8(%ebp),%eax
 898fa7d:	05 ec 02 00 00       	add    $0x2ec,%eax
 898fa82:	89 04 24             	mov    %eax,(%esp)
 898fa85:	e8 9a 36 03 00       	call   89c3124 <_ZN16STStatusGenerateC1Ev>
 898fa8a:	8b 45 08             	mov    0x8(%ebp),%eax
 898fa8d:	05 04 03 00 00       	add    $0x304,%eax
 898fa92:	89 04 24             	mov    %eax,(%esp)
 898fa95:	e8 fa 36 03 00       	call   89c3194 <_ZN6STBuffC1Ev>
 898fa9a:	8b 45 08             	mov    0x8(%ebp),%eax
 898fa9d:	05 14 03 00 00       	add    $0x314,%eax
 898faa2:	89 04 24             	mov    %eax,(%esp)
 898faa5:	e8 28 37 03 00       	call   89c31d2 <_ZN15STSummonMonsterC1Ev>
 898faaa:	8b 45 08             	mov    0x8(%ebp),%eax
 898faad:	05 30 03 00 00       	add    $0x330,%eax
 898fab2:	89 04 24             	mov    %eax,(%esp)
 898fab5:	e8 7e 37 03 00       	call   89c3238 <_ZN11STSummonApcC1Ev>
 898faba:	8b 45 08             	mov    0x8(%ebp),%eax
 898fabd:	05 4c 03 00 00       	add    $0x34c,%eax
 898fac2:	89 04 24             	mov    %eax,(%esp)
 898fac5:	e8 fe 37 03 00       	call   89c32c8 <_ZN18STStatChangeVectorC1Ev>
 898faca:	8b 45 08             	mov    0x8(%ebp),%eax
 898facd:	05 68 03 00 00       	add    $0x368,%eax
 898fad2:	89 04 24             	mov    %eax,(%esp)
 898fad5:	e8 f6 6a d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898fada:	8b 45 08             	mov    0x8(%ebp),%eax
 898fadd:	05 74 03 00 00       	add    $0x374,%eax
 898fae2:	89 04 24             	mov    %eax,(%esp)
 898fae5:	e8 ec 4e 7a ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 898faea:	8b 45 08             	mov    0x8(%ebp),%eax
 898faed:	05 a4 03 00 00       	add    $0x3a4,%eax
 898faf2:	89 04 24             	mov    %eax,(%esp)
 898faf5:	e8 6a 71 73 ff       	call   80c6c64 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 898fafa:	8b 45 08             	mov    0x8(%ebp),%eax
 898fafd:	05 c0 03 00 00       	add    $0x3c0,%eax
 898fb02:	89 04 24             	mov    %eax,(%esp)
 898fb05:	e8 cc 4e 7a ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 898fb0a:	8b 45 08             	mov    0x8(%ebp),%eax
 898fb0d:	05 d4 03 00 00       	add    $0x3d4,%eax
 898fb12:	89 04 24             	mov    %eax,(%esp)
 898fb15:	e8 02 5c b8 ff       	call   851571c <_ZN15stLimitCubeInfoC1Ev>
 898fb1a:	8b 45 08             	mov    0x8(%ebp),%eax
 898fb1d:	05 f4 03 00 00       	add    $0x3f4,%eax
 898fb22:	89 04 24             	mov    %eax,(%esp)
 898fb25:	e8 72 60 b8 ff       	call   8515b9c <_ZNSt3mapI21STEnchantSystemMapKey22STEnchantSystemMapDataSt4lessIS0_ESaISt4pairIKS0_S1_EEEC1Ev>
 898fb2a:	8b 45 08             	mov    0x8(%ebp),%eax
 898fb2d:	05 10 04 00 00       	add    $0x410,%eax
 898fb32:	89 04 24             	mov    %eax,(%esp)
 898fb35:	e8 96 6a d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898fb3a:	8b 45 08             	mov    0x8(%ebp),%eax
 898fb3d:	05 1c 04 00 00       	add    $0x41c,%eax
 898fb42:	89 04 24             	mov    %eax,(%esp)
 898fb45:	e8 38 40 b8 ff       	call   8513b82 <_ZN17BoosterSelectInfoC1Ev>
 898fb4a:	8b 45 08             	mov    0x8(%ebp),%eax
 898fb4d:	05 3c 04 00 00       	add    $0x43c,%eax
 898fb52:	89 04 24             	mov    %eax,(%esp)
 898fb55:	e8 34 61 82 ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 898fb5a:	8b 45 08             	mov    0x8(%ebp),%eax
 898fb5d:	05 7c 04 00 00       	add    $0x47c,%eax
 898fb62:	89 04 24             	mov    %eax,(%esp)
 898fb65:	e8 04 40 b8 ff       	call   8513b6e <_ZN22AvatarOptionChangeTypeC1Ev>
 898fb6a:	8b 45 08             	mov    0x8(%ebp),%eax
 898fb6d:	05 80 04 00 00       	add    $0x480,%eax
 898fb72:	89 04 24             	mov    %eax,(%esp)
 898fb75:	e8 62 a8 74 ff       	call   80da3dc <_ZNSt3setIiSt4lessIiESaIiEEC1Ev>
 898fb7a:	8b 45 08             	mov    0x8(%ebp),%eax
 898fb7d:	05 98 04 00 00       	add    $0x498,%eax
 898fb82:	89 04 24             	mov    %eax,(%esp)
 898fb85:	e8 52 a8 74 ff       	call   80da3dc <_ZNSt3setIiSt4lessIiESaIiEEC1Ev>
 898fb8a:	8b 45 08             	mov    0x8(%ebp),%eax
 898fb8d:	05 b4 04 00 00       	add    $0x4b4,%eax
 898fb92:	89 04 24             	mov    %eax,(%esp)
 898fb95:	e8 36 6a d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898fb9a:	8b 45 08             	mov    0x8(%ebp),%eax
 898fb9d:	05 bc 04 00 00       	add    $0x4bc,%eax
 898fba2:	89 04 24             	mov    %eax,(%esp)
 898fba5:	e8 ae 5f 03 00       	call   89c5b58 <_ZNSt3mapI16ENUM_MODULE_TYPEP22EquipmentParameterInfoSt4lessIS0_ESaISt4pairIKS0_S2_EEEC1Ev>
 898fbaa:	8b 45 08             	mov    0x8(%ebp),%eax
 898fbad:	05 d4 04 00 00       	add    $0x4d4,%eax
 898fbb2:	89 04 24             	mov    %eax,(%esp)
 898fbb5:	e8 22 a8 74 ff       	call   80da3dc <_ZNSt3setIiSt4lessIiESaIiEEC1Ev>
 898fbba:	8b 45 08             	mov    0x8(%ebp),%eax
 898fbbd:	05 fc 04 00 00       	add    $0x4fc,%eax
 898fbc2:	89 04 24             	mov    %eax,(%esp)
 898fbc5:	e8 e2 e5 6f ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 898fbca:	8b 45 08             	mov    0x8(%ebp),%eax
 898fbcd:	05 0c 05 00 00       	add    $0x50c,%eax
 898fbd2:	89 04 24             	mov    %eax,(%esp)
 898fbd5:	e8 02 a8 74 ff       	call   80da3dc <_ZNSt3setIiSt4lessIiESaIiEEC1Ev>
 898fbda:	8b 45 0c             	mov    0xc(%ebp),%eax
 898fbdd:	89 44 24 04          	mov    %eax,0x4(%esp)
 898fbe1:	8b 45 08             	mov    0x8(%ebp),%eax
 898fbe4:	89 04 24             	mov    %eax,(%esp)
 898fbe7:	e8 a2 45 03 00       	call   89c418e <_ZN17STStackableScriptaSERKS_>
 898fbec:	8b 45 0c             	mov    0xc(%ebp),%eax
 898fbef:	05 bc 04 00 00       	add    $0x4bc,%eax
 898fbf4:	89 04 24             	mov    %eax,(%esp)
 898fbf7:	e8 2e 67 03 00       	call   89c632a <_ZNKSt3mapI16ENUM_MODULE_TYPEP22EquipmentParameterInfoSt4lessIS0_ESaISt4pairIKS0_S2_EEE5emptyEv>
 898fbfc:	83 f0 01             	xor    $0x1,%eax
 898fbff:	84 c0                	test   %al,%al
 898fc01:	0f 84 29 05 00 00    	je     8990130 <_ZN17STStackableScriptC1ERS_+0x84a>
 898fc07:	8b 45 0c             	mov    0xc(%ebp),%eax
 898fc0a:	8d 90 bc 04 00 00    	lea    0x4bc(%eax),%edx
 898fc10:	8d 45 c8             	lea    -0x38(%ebp),%eax
 898fc13:	89 54 24 04          	mov    %edx,0x4(%esp)
 898fc17:	89 04 24             	mov    %eax,(%esp)
 898fc1a:	e8 1f 67 03 00       	call   89c633e <_ZNSt3mapI16ENUM_MODULE_TYPEP22EquipmentParameterInfoSt4lessIS0_ESaISt4pairIKS0_S2_EEE5beginEv>
 898fc1f:	83 ec 04             	sub    $0x4,%esp
 898fc22:	e9 0c 01 00 00       	jmp    898fd33 <_ZN17STStackableScriptC1ERS_+0x44d>
 898fc27:	8b 45 08             	mov    0x8(%ebp),%eax
 898fc2a:	8d 90 bc 04 00 00    	lea    0x4bc(%eax),%edx
 898fc30:	8d 45 d0             	lea    -0x30(%ebp),%eax
 898fc33:	89 54 24 04          	mov    %edx,0x4(%esp)
 898fc37:	89 04 24             	mov    %eax,(%esp)
 898fc3a:	e8 7b a0 c9 ff       	call   8629cba <_ZNSt3mapI16ENUM_MODULE_TYPEP22EquipmentParameterInfoSt4lessIS0_ESaISt4pairIKS0_S2_EEE3endEv>
 898fc3f:	83 ec 04             	sub    $0x4,%esp
 898fc42:	8d 45 c8             	lea    -0x38(%ebp),%eax
 898fc45:	89 04 24             	mov    %eax,(%esp)
 898fc48:	e8 49 67 03 00       	call   89c6396 <_ZNKSt17_Rb_tree_iteratorISt4pairIK16ENUM_MODULE_TYPEP22EquipmentParameterInfoEEptEv>
 898fc4d:	89 c2                	mov    %eax,%edx
 898fc4f:	8b 45 08             	mov    0x8(%ebp),%eax
 898fc52:	8d 88 bc 04 00 00    	lea    0x4bc(%eax),%ecx
 898fc58:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 898fc5b:	89 54 24 08          	mov    %edx,0x8(%esp)
 898fc5f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 898fc63:	89 04 24             	mov    %eax,(%esp)
 898fc66:	e8 39 67 03 00       	call   89c63a4 <_ZNSt3mapI16ENUM_MODULE_TYPEP22EquipmentParameterInfoSt4lessIS0_ESaISt4pairIKS0_S2_EEE4findERS6_>
 898fc6b:	83 ec 04             	sub    $0x4,%esp
 898fc6e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 898fc71:	89 44 24 04          	mov    %eax,0x4(%esp)
 898fc75:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 898fc78:	89 04 24             	mov    %eax,(%esp)
 898fc7b:	e8 e4 66 03 00       	call   89c6364 <_ZNKSt17_Rb_tree_iteratorISt4pairIK16ENUM_MODULE_TYPEP22EquipmentParameterInfoEEneERKS6_>
 898fc80:	84 c0                	test   %al,%al
 898fc82:	0f 84 a0 00 00 00    	je     898fd28 <_ZN17STStackableScriptC1ERS_+0x442>
 898fc88:	8d 45 c0             	lea    -0x40(%ebp),%eax
 898fc8b:	89 04 24             	mov    %eax,(%esp)
 898fc8e:	e8 3d 67 03 00       	call   89c63d0 <_ZNSt4pairI16ENUM_MODULE_TYPEP22EquipmentParameterInfoEC1Ev>
 898fc93:	8d 45 c8             	lea    -0x38(%ebp),%eax
 898fc96:	89 04 24             	mov    %eax,(%esp)
 898fc99:	e8 f8 66 03 00       	call   89c6396 <_ZNKSt17_Rb_tree_iteratorISt4pairIK16ENUM_MODULE_TYPEP22EquipmentParameterInfoEEptEv>
 898fc9e:	8b 00                	mov    (%eax),%eax
 898fca0:	89 45 c0             	mov    %eax,-0x40(%ebp)
 898fca3:	c7 04 24 80 04 00 00 	movl   $0x480,(%esp)
 898fcaa:	e8 a1 47 d9 ff       	call   8724450 <_Znwj>
 898fcaf:	89 c3                	mov    %eax,%ebx
 898fcb1:	89 d8                	mov    %ebx,%eax
 898fcb3:	89 04 24             	mov    %eax,(%esp)
 898fcb6:	e8 2d a0 f8 ff       	call   8919ce8 <_ZN22EquipmentParameterInfoC1Ev>
 898fcbb:	eb 15                	jmp    898fcd2 <_ZN17STStackableScriptC1ERS_+0x3ec>
 898fcbd:	89 d6                	mov    %edx,%esi
 898fcbf:	89 c7                	mov    %eax,%edi
 898fcc1:	89 1c 24             	mov    %ebx,(%esp)
 898fcc4:	e8 27 48 d9 ff       	call   87244f0 <_ZdlPv>
 898fcc9:	89 f8                	mov    %edi,%eax
 898fccb:	89 f2                	mov    %esi,%edx
 898fccd:	e9 9b 00 00 00       	jmp    898fd6d <_ZN17STStackableScriptC1ERS_+0x487>
 898fcd2:	89 d8                	mov    %ebx,%eax
 898fcd4:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 898fcd7:	8d 45 c8             	lea    -0x38(%ebp),%eax
 898fcda:	89 04 24             	mov    %eax,(%esp)
 898fcdd:	e8 b4 66 03 00       	call   89c6396 <_ZNKSt17_Rb_tree_iteratorISt4pairIK16ENUM_MODULE_TYPEP22EquipmentParameterInfoEEptEv>
 898fce2:	8b 50 04             	mov    0x4(%eax),%edx
 898fce5:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 898fce8:	89 54 24 04          	mov    %edx,0x4(%esp)
 898fcec:	89 04 24             	mov    %eax,(%esp)
 898fcef:	e8 d6 65 9d ff       	call   83662ca <_ZN22EquipmentParameterInfoaSERKS_>
 898fcf4:	8d 45 c0             	lea    -0x40(%ebp),%eax
 898fcf7:	89 44 24 04          	mov    %eax,0x4(%esp)
 898fcfb:	8d 45 e0             	lea    -0x20(%ebp),%eax
 898fcfe:	89 04 24             	mov    %eax,(%esp)
 898fd01:	e8 e2 66 03 00       	call   89c63e8 <_ZNSt4pairIK16ENUM_MODULE_TYPEP22EquipmentParameterInfoEC1IS0_S3_EERKS_IT_T0_E>
 898fd06:	8b 45 08             	mov    0x8(%ebp),%eax
 898fd09:	8d 88 bc 04 00 00    	lea    0x4bc(%eax),%ecx
 898fd0f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 898fd12:	8d 55 e0             	lea    -0x20(%ebp),%edx
 898fd15:	89 54 24 08          	mov    %edx,0x8(%esp)
 898fd19:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 898fd1d:	89 04 24             	mov    %eax,(%esp)
 898fd20:	e8 df 66 03 00       	call   89c6404 <_ZNSt3mapI16ENUM_MODULE_TYPEP22EquipmentParameterInfoSt4lessIS0_ESaISt4pairIKS0_S2_EEE6insertERKS7_>
 898fd25:	83 ec 04             	sub    $0x4,%esp
 898fd28:	8d 45 c8             	lea    -0x38(%ebp),%eax
 898fd2b:	89 04 24             	mov    %eax,(%esp)
 898fd2e:	e8 45 66 03 00       	call   89c6378 <_ZNSt17_Rb_tree_iteratorISt4pairIK16ENUM_MODULE_TYPEP22EquipmentParameterInfoEEppEv>
 898fd33:	8b 45 0c             	mov    0xc(%ebp),%eax
 898fd36:	8d 90 bc 04 00 00    	lea    0x4bc(%eax),%edx
 898fd3c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 898fd3f:	89 54 24 04          	mov    %edx,0x4(%esp)
 898fd43:	89 04 24             	mov    %eax,(%esp)
 898fd46:	e8 6f 9f c9 ff       	call   8629cba <_ZNSt3mapI16ENUM_MODULE_TYPEP22EquipmentParameterInfoSt4lessIS0_ESaISt4pairIKS0_S2_EEE3endEv>
 898fd4b:	83 ec 04             	sub    $0x4,%esp
 898fd4e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 898fd51:	89 44 24 04          	mov    %eax,0x4(%esp)
 898fd55:	8d 45 c8             	lea    -0x38(%ebp),%eax
 898fd58:	89 04 24             	mov    %eax,(%esp)
 898fd5b:	e8 04 66 03 00       	call   89c6364 <_ZNKSt17_Rb_tree_iteratorISt4pairIK16ENUM_MODULE_TYPEP22EquipmentParameterInfoEEneERKS6_>
 898fd60:	84 c0                	test   %al,%al
 898fd62:	0f 85 bf fe ff ff    	jne    898fc27 <_ZN17STStackableScriptC1ERS_+0x341>
 898fd68:	e9 c3 03 00 00       	jmp    8990130 <_ZN17STStackableScriptC1ERS_+0x84a>
 898fd6d:	89 d3                	mov    %edx,%ebx
 898fd6f:	89 c6                	mov    %eax,%esi
 898fd71:	8b 45 08             	mov    0x8(%ebp),%eax
 898fd74:	05 0c 05 00 00       	add    $0x50c,%eax
 898fd79:	89 04 24             	mov    %eax,(%esp)
 898fd7c:	e8 b3 a1 74 ff       	call   80d9f34 <_ZNSt3setIiSt4lessIiESaIiEED1Ev>
 898fd81:	89 f0                	mov    %esi,%eax
 898fd83:	89 da                	mov    %ebx,%edx
 898fd85:	eb 00                	jmp    898fd87 <_ZN17STStackableScriptC1ERS_+0x4a1>
 898fd87:	89 d3                	mov    %edx,%ebx
 898fd89:	89 c6                	mov    %eax,%esi
 898fd8b:	8b 45 08             	mov    0x8(%ebp),%eax
 898fd8e:	05 fc 04 00 00       	add    $0x4fc,%eax
 898fd93:	89 04 24             	mov    %eax,(%esp)
 898fd96:	e8 3f 40 6f ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 898fd9b:	89 f0                	mov    %esi,%eax
 898fd9d:	89 da                	mov    %ebx,%edx
 898fd9f:	eb 00                	jmp    898fda1 <_ZN17STStackableScriptC1ERS_+0x4bb>
 898fda1:	89 d3                	mov    %edx,%ebx
 898fda3:	89 c6                	mov    %eax,%esi
 898fda5:	8b 45 08             	mov    0x8(%ebp),%eax
 898fda8:	05 d4 04 00 00       	add    $0x4d4,%eax
 898fdad:	89 04 24             	mov    %eax,(%esp)
 898fdb0:	e8 7f a1 74 ff       	call   80d9f34 <_ZNSt3setIiSt4lessIiESaIiEED1Ev>
 898fdb5:	89 f0                	mov    %esi,%eax
 898fdb7:	89 da                	mov    %ebx,%edx
 898fdb9:	eb 00                	jmp    898fdbb <_ZN17STStackableScriptC1ERS_+0x4d5>
 898fdbb:	89 d3                	mov    %edx,%ebx
 898fdbd:	89 c6                	mov    %eax,%esi
 898fdbf:	8b 45 08             	mov    0x8(%ebp),%eax
 898fdc2:	05 bc 04 00 00       	add    $0x4bc,%eax
 898fdc7:	89 04 24             	mov    %eax,(%esp)
 898fdca:	e8 13 3d 03 00       	call   89c3ae2 <_ZNSt3mapI16ENUM_MODULE_TYPEP22EquipmentParameterInfoSt4lessIS0_ESaISt4pairIKS0_S2_EEED1Ev>
 898fdcf:	89 f0                	mov    %esi,%eax
 898fdd1:	89 da                	mov    %ebx,%edx
 898fdd3:	eb 00                	jmp    898fdd5 <_ZN17STStackableScriptC1ERS_+0x4ef>
 898fdd5:	89 d3                	mov    %edx,%ebx
 898fdd7:	89 c6                	mov    %eax,%esi
 898fdd9:	8b 45 08             	mov    0x8(%ebp),%eax
 898fddc:	05 b4 04 00 00       	add    $0x4b4,%eax
 898fde1:	89 04 24             	mov    %eax,(%esp)
 898fde4:	e8 f7 7d d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898fde9:	89 f0                	mov    %esi,%eax
 898fdeb:	89 da                	mov    %ebx,%edx
 898fded:	eb 00                	jmp    898fdef <_ZN17STStackableScriptC1ERS_+0x509>
 898fdef:	89 d3                	mov    %edx,%ebx
 898fdf1:	89 c6                	mov    %eax,%esi
 898fdf3:	8b 45 08             	mov    0x8(%ebp),%eax
 898fdf6:	05 98 04 00 00       	add    $0x498,%eax
 898fdfb:	89 04 24             	mov    %eax,(%esp)
 898fdfe:	e8 31 a1 74 ff       	call   80d9f34 <_ZNSt3setIiSt4lessIiESaIiEED1Ev>
 898fe03:	89 f0                	mov    %esi,%eax
 898fe05:	89 da                	mov    %ebx,%edx
 898fe07:	eb 00                	jmp    898fe09 <_ZN17STStackableScriptC1ERS_+0x523>
 898fe09:	89 d3                	mov    %edx,%ebx
 898fe0b:	89 c6                	mov    %eax,%esi
 898fe0d:	8b 45 08             	mov    0x8(%ebp),%eax
 898fe10:	05 80 04 00 00       	add    $0x480,%eax
 898fe15:	89 04 24             	mov    %eax,(%esp)
 898fe18:	e8 17 a1 74 ff       	call   80d9f34 <_ZNSt3setIiSt4lessIiESaIiEED1Ev>
 898fe1d:	89 f0                	mov    %esi,%eax
 898fe1f:	89 da                	mov    %ebx,%edx
 898fe21:	eb 00                	jmp    898fe23 <_ZN17STStackableScriptC1ERS_+0x53d>
 898fe23:	89 d3                	mov    %edx,%ebx
 898fe25:	89 c6                	mov    %eax,%esi
 898fe27:	8b 45 08             	mov    0x8(%ebp),%eax
 898fe2a:	05 1c 04 00 00       	add    $0x41c,%eax
 898fe2f:	89 04 24             	mov    %eax,(%esp)
 898fe32:	e8 21 48 b8 ff       	call   8514658 <_ZN17BoosterSelectInfoD1Ev>
 898fe37:	89 f0                	mov    %esi,%eax
 898fe39:	89 da                	mov    %ebx,%edx
 898fe3b:	eb 00                	jmp    898fe3d <_ZN17STStackableScriptC1ERS_+0x557>
 898fe3d:	89 d3                	mov    %edx,%ebx
 898fe3f:	89 c6                	mov    %eax,%esi
 898fe41:	8b 45 08             	mov    0x8(%ebp),%eax
 898fe44:	05 10 04 00 00       	add    $0x410,%eax
 898fe49:	89 04 24             	mov    %eax,(%esp)
 898fe4c:	e8 8f 7d d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898fe51:	89 f0                	mov    %esi,%eax
 898fe53:	89 da                	mov    %ebx,%edx
 898fe55:	eb 00                	jmp    898fe57 <_ZN17STStackableScriptC1ERS_+0x571>
 898fe57:	89 d3                	mov    %edx,%ebx
 898fe59:	89 c6                	mov    %eax,%esi
 898fe5b:	8b 45 08             	mov    0x8(%ebp),%eax
 898fe5e:	05 f4 03 00 00       	add    $0x3f4,%eax
 898fe63:	89 04 24             	mov    %eax,(%esp)
 898fe66:	e8 c9 3c b8 ff       	call   8513b34 <_ZNSt3mapI21STEnchantSystemMapKey22STEnchantSystemMapDataSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 898fe6b:	89 f0                	mov    %esi,%eax
 898fe6d:	89 da                	mov    %ebx,%edx
 898fe6f:	eb 00                	jmp    898fe71 <_ZN17STStackableScriptC1ERS_+0x58b>
 898fe71:	89 d3                	mov    %edx,%ebx
 898fe73:	89 c6                	mov    %eax,%esi
 898fe75:	8b 45 08             	mov    0x8(%ebp),%eax
 898fe78:	05 d4 03 00 00       	add    $0x3d4,%eax
 898fe7d:	89 04 24             	mov    %eax,(%esp)
 898fe80:	e8 e9 47 b8 ff       	call   851466e <_ZN15stLimitCubeInfoD1Ev>
 898fe85:	89 f0                	mov    %esi,%eax
 898fe87:	89 da                	mov    %ebx,%edx
 898fe89:	eb 00                	jmp    898fe8b <_ZN17STStackableScriptC1ERS_+0x5a5>
 898fe8b:	89 d3                	mov    %edx,%ebx
 898fe8d:	89 c6                	mov    %eax,%esi
 898fe8f:	8b 45 08             	mov    0x8(%ebp),%eax
 898fe92:	05 c0 03 00 00       	add    $0x3c0,%eax
 898fe97:	89 04 24             	mov    %eax,(%esp)
 898fe9a:	e8 4b 4b 7a ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 898fe9f:	89 f0                	mov    %esi,%eax
 898fea1:	89 da                	mov    %ebx,%edx
 898fea3:	eb 00                	jmp    898fea5 <_ZN17STStackableScriptC1ERS_+0x5bf>
 898fea5:	89 d3                	mov    %edx,%ebx
 898fea7:	89 c6                	mov    %eax,%esi
 898fea9:	8b 45 08             	mov    0x8(%ebp),%eax
 898feac:	05 a4 03 00 00       	add    $0x3a4,%eax
 898feb1:	89 04 24             	mov    %eax,(%esp)
 898feb4:	e8 0d 6c 73 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 898feb9:	89 f0                	mov    %esi,%eax
 898febb:	89 da                	mov    %ebx,%edx
 898febd:	eb 00                	jmp    898febf <_ZN17STStackableScriptC1ERS_+0x5d9>
 898febf:	89 d3                	mov    %edx,%ebx
 898fec1:	89 c6                	mov    %eax,%esi
 898fec3:	8b 45 08             	mov    0x8(%ebp),%eax
 898fec6:	05 74 03 00 00       	add    $0x374,%eax
 898fecb:	89 04 24             	mov    %eax,(%esp)
 898fece:	e8 17 4b 7a ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 898fed3:	89 f0                	mov    %esi,%eax
 898fed5:	89 da                	mov    %ebx,%edx
 898fed7:	eb 00                	jmp    898fed9 <_ZN17STStackableScriptC1ERS_+0x5f3>
 898fed9:	89 d3                	mov    %edx,%ebx
 898fedb:	89 c6                	mov    %eax,%esi
 898fedd:	8b 45 08             	mov    0x8(%ebp),%eax
 898fee0:	05 68 03 00 00       	add    $0x368,%eax
 898fee5:	89 04 24             	mov    %eax,(%esp)
 898fee8:	e8 f3 7c d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898feed:	89 f0                	mov    %esi,%eax
 898feef:	89 da                	mov    %ebx,%edx
 898fef1:	eb 00                	jmp    898fef3 <_ZN17STStackableScriptC1ERS_+0x60d>
 898fef3:	89 d3                	mov    %edx,%ebx
 898fef5:	89 c6                	mov    %eax,%esi
 898fef7:	8b 45 08             	mov    0x8(%ebp),%eax
 898fefa:	05 4c 03 00 00       	add    $0x34c,%eax
 898feff:	89 04 24             	mov    %eax,(%esp)
 898ff02:	e8 c7 3b 03 00       	call   89c3ace <_ZN18STStatChangeVectorD1Ev>
 898ff07:	89 f0                	mov    %esi,%eax
 898ff09:	89 da                	mov    %ebx,%edx
 898ff0b:	eb 00                	jmp    898ff0d <_ZN17STStackableScriptC1ERS_+0x627>
 898ff0d:	89 d3                	mov    %edx,%ebx
 898ff0f:	89 c6                	mov    %eax,%esi
 898ff11:	8b 45 08             	mov    0x8(%ebp),%eax
 898ff14:	05 ec 02 00 00       	add    $0x2ec,%eax
 898ff19:	89 04 24             	mov    %eax,(%esp)
 898ff1c:	e8 99 3b 03 00       	call   89c3aba <_ZN16STStatusGenerateD1Ev>
 898ff21:	89 f0                	mov    %esi,%eax
 898ff23:	89 da                	mov    %ebx,%edx
 898ff25:	eb 00                	jmp    898ff27 <_ZN17STStackableScriptC1ERS_+0x641>
 898ff27:	89 d3                	mov    %edx,%ebx
 898ff29:	89 c6                	mov    %eax,%esi
 898ff2b:	8b 45 08             	mov    0x8(%ebp),%eax
 898ff2e:	05 a4 02 00 00       	add    $0x2a4,%eax
 898ff33:	89 04 24             	mov    %eax,(%esp)
 898ff36:	e8 09 e0 8e ff       	call   827df44 <_ZNSt6vectorI22STStackablePackageDataSaIS0_EED1Ev>
 898ff3b:	89 f0                	mov    %esi,%eax
 898ff3d:	89 da                	mov    %ebx,%edx
 898ff3f:	eb 00                	jmp    898ff41 <_ZN17STStackableScriptC1ERS_+0x65b>
 898ff41:	89 d3                	mov    %edx,%ebx
 898ff43:	89 c6                	mov    %eax,%esi
 898ff45:	8b 45 08             	mov    0x8(%ebp),%eax
 898ff48:	05 80 02 00 00       	add    $0x280,%eax
 898ff4d:	89 04 24             	mov    %eax,(%esp)
 898ff50:	e8 bd 46 b8 ff       	call   8514612 <_ZN20stStackableBooster_tD1Ev>
 898ff55:	89 f0                	mov    %esi,%eax
 898ff57:	89 da                	mov    %ebx,%edx
 898ff59:	eb 00                	jmp    898ff5b <_ZN17STStackableScriptC1ERS_+0x675>
 898ff5b:	89 d3                	mov    %edx,%ebx
 898ff5d:	89 c6                	mov    %eax,%esi
 898ff5f:	8b 45 08             	mov    0x8(%ebp),%eax
 898ff62:	05 74 02 00 00       	add    $0x274,%eax
 898ff67:	89 04 24             	mov    %eax,(%esp)
 898ff6a:	e8 f9 79 9f ff       	call   8387968 <_ZNSt6vectorIS_I22STStackablePackageDataSaIS0_EESaIS2_EED1Ev>
 898ff6f:	89 f0                	mov    %esi,%eax
 898ff71:	89 da                	mov    %ebx,%edx
 898ff73:	eb 00                	jmp    898ff75 <_ZN17STStackableScriptC1ERS_+0x68f>
 898ff75:	89 d3                	mov    %edx,%ebx
 898ff77:	89 c6                	mov    %eax,%esi
 898ff79:	8b 45 08             	mov    0x8(%ebp),%eax
 898ff7c:	05 68 02 00 00       	add    $0x268,%eax
 898ff81:	89 04 24             	mov    %eax,(%esp)
 898ff84:	e8 bb df 8e ff       	call   827df44 <_ZNSt6vectorI22STStackablePackageDataSaIS0_EED1Ev>
 898ff89:	89 f0                	mov    %esi,%eax
 898ff8b:	89 da                	mov    %ebx,%edx
 898ff8d:	eb 00                	jmp    898ff8f <_ZN17STStackableScriptC1ERS_+0x6a9>
 898ff8f:	89 d3                	mov    %edx,%ebx
 898ff91:	89 c6                	mov    %eax,%esi
 898ff93:	8b 45 08             	mov    0x8(%ebp),%eax
 898ff96:	05 5c 02 00 00       	add    $0x25c,%eax
 898ff9b:	89 04 24             	mov    %eax,(%esp)
 898ff9e:	e8 37 3e 6f ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 898ffa3:	89 f0                	mov    %esi,%eax
 898ffa5:	89 da                	mov    %ebx,%edx
 898ffa7:	eb 00                	jmp    898ffa9 <_ZN17STStackableScriptC1ERS_+0x6c3>
 898ffa9:	89 d3                	mov    %edx,%ebx
 898ffab:	89 c6                	mov    %eax,%esi
 898ffad:	8b 45 08             	mov    0x8(%ebp),%eax
 898ffb0:	05 50 02 00 00       	add    $0x250,%eax
 898ffb5:	89 04 24             	mov    %eax,(%esp)
 898ffb8:	e8 1d 3e 6f ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 898ffbd:	89 f0                	mov    %esi,%eax
 898ffbf:	89 da                	mov    %ebx,%edx
 898ffc1:	eb 00                	jmp    898ffc3 <_ZN17STStackableScriptC1ERS_+0x6dd>
 898ffc3:	89 d3                	mov    %edx,%ebx
 898ffc5:	89 c6                	mov    %eax,%esi
 898ffc7:	8b 45 08             	mov    0x8(%ebp),%eax
 898ffca:	05 44 02 00 00       	add    $0x244,%eax
 898ffcf:	89 04 24             	mov    %eax,(%esp)
 898ffd2:	e8 7b 19 9f ff       	call   8381952 <_ZNSt6vectorIS_IiSaIiEESaIS1_EED1Ev>
 898ffd7:	89 f0                	mov    %esi,%eax
 898ffd9:	89 da                	mov    %ebx,%edx
 898ffdb:	eb 00                	jmp    898ffdd <_ZN17STStackableScriptC1ERS_+0x6f7>
 898ffdd:	89 d3                	mov    %edx,%ebx
 898ffdf:	89 c6                	mov    %eax,%esi
 898ffe1:	8b 45 08             	mov    0x8(%ebp),%eax
 898ffe4:	05 38 02 00 00       	add    $0x238,%eax
 898ffe9:	89 04 24             	mov    %eax,(%esp)
 898ffec:	e8 ef 7b d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898fff1:	89 f0                	mov    %esi,%eax
 898fff3:	89 da                	mov    %ebx,%edx
 898fff5:	eb 00                	jmp    898fff7 <_ZN17STStackableScriptC1ERS_+0x711>
 898fff7:	89 d3                	mov    %edx,%ebx
 898fff9:	89 c6                	mov    %eax,%esi
 898fffb:	8b 45 08             	mov    0x8(%ebp),%eax
 898fffe:	05 34 02 00 00       	add    $0x234,%eax
 8990003:	89 04 24             	mov    %eax,(%esp)
 8990006:	e8 d5 7b d7 ff       	call   8707be0 <_ZNSsD1Ev>
 899000b:	89 f0                	mov    %esi,%eax
 899000d:	89 da                	mov    %ebx,%edx
 899000f:	eb 00                	jmp    8990011 <_ZN17STStackableScriptC1ERS_+0x72b>
 8990011:	89 d3                	mov    %edx,%ebx
 8990013:	89 c6                	mov    %eax,%esi
 8990015:	8b 45 08             	mov    0x8(%ebp),%eax
 8990018:	05 30 02 00 00       	add    $0x230,%eax
 899001d:	89 04 24             	mov    %eax,(%esp)
 8990020:	e8 bb 7b d7 ff       	call   8707be0 <_ZNSsD1Ev>
 8990025:	89 f0                	mov    %esi,%eax
 8990027:	89 da                	mov    %ebx,%edx
 8990029:	eb 00                	jmp    899002b <_ZN17STStackableScriptC1ERS_+0x745>
 899002b:	89 d3                	mov    %edx,%ebx
 899002d:	89 c6                	mov    %eax,%esi
 899002f:	8b 45 08             	mov    0x8(%ebp),%eax
 8990032:	05 24 02 00 00       	add    $0x224,%eax
 8990037:	89 04 24             	mov    %eax,(%esp)
 899003a:	e8 9b 3d 6f ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 899003f:	89 f0                	mov    %esi,%eax
 8990041:	89 da                	mov    %ebx,%edx
 8990043:	eb 00                	jmp    8990045 <_ZN17STStackableScriptC1ERS_+0x75f>
 8990045:	89 d3                	mov    %edx,%ebx
 8990047:	89 c6                	mov    %eax,%esi
 8990049:	8b 45 08             	mov    0x8(%ebp),%eax
 899004c:	05 14 02 00 00       	add    $0x214,%eax
 8990051:	89 04 24             	mov    %eax,(%esp)
 8990054:	e8 7b 5f b8 ff       	call   8515fd4 <_ZNSt6vectorIN15StackableAction16UsableServerTypeESaIS1_EED1Ev>
 8990059:	89 f0                	mov    %esi,%eax
 899005b:	89 da                	mov    %ebx,%edx
 899005d:	eb 00                	jmp    899005f <_ZN17STStackableScriptC1ERS_+0x779>
 899005f:	89 d3                	mov    %edx,%ebx
 8990061:	89 c6                	mov    %eax,%esi
 8990063:	8b 45 08             	mov    0x8(%ebp),%eax
 8990066:	05 08 02 00 00       	add    $0x208,%eax
 899006b:	89 04 24             	mov    %eax,(%esp)
 899006e:	e8 87 5a 03 00       	call   89c5afa <_ZNSt6vectorI26STPassiveObjectInStackableSaIS0_EED1Ev>
 8990073:	89 f0                	mov    %esi,%eax
 8990075:	89 da                	mov    %ebx,%edx
 8990077:	eb 00                	jmp    8990079 <_ZN17STStackableScriptC1ERS_+0x793>
 8990079:	89 d3                	mov    %edx,%ebx
 899007b:	89 c6                	mov    %eax,%esi
 899007d:	8b 45 08             	mov    0x8(%ebp),%eax
 8990080:	05 f8 01 00 00       	add    $0x1f8,%eax
 8990085:	89 04 24             	mov    %eax,(%esp)
 8990088:	e8 e9 5e b8 ff       	call   8515f76 <_ZNSt6vectorIN15StackableAction11UsablePlaceESaIS1_EED1Ev>
 899008d:	89 f0                	mov    %esi,%eax
 899008f:	89 da                	mov    %ebx,%edx
 8990091:	eb 00                	jmp    8990093 <_ZN17STStackableScriptC1ERS_+0x7ad>
 8990093:	89 d3                	mov    %edx,%ebx
 8990095:	89 c6                	mov    %eax,%esi
 8990097:	8b 45 08             	mov    0x8(%ebp),%eax
 899009a:	05 ec 01 00 00       	add    $0x1ec,%eax
 899009f:	89 04 24             	mov    %eax,(%esp)
 89900a2:	e8 33 3d 6f ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 89900a7:	89 f0                	mov    %esi,%eax
 89900a9:	89 da                	mov    %ebx,%edx
 89900ab:	eb 00                	jmp    89900ad <_ZN17STStackableScriptC1ERS_+0x7c7>
 89900ad:	89 d3                	mov    %edx,%ebx
 89900af:	89 c6                	mov    %eax,%esi
 89900b1:	8b 45 08             	mov    0x8(%ebp),%eax
 89900b4:	05 d8 01 00 00       	add    $0x1d8,%eax
 89900b9:	89 04 24             	mov    %eax,(%esp)
 89900bc:	e8 1f 7b d7 ff       	call   8707be0 <_ZNSsD1Ev>
 89900c1:	89 f0                	mov    %esi,%eax
 89900c3:	89 da                	mov    %ebx,%edx
 89900c5:	eb 00                	jmp    89900c7 <_ZN17STStackableScriptC1ERS_+0x7e1>
 89900c7:	89 d3                	mov    %edx,%ebx
 89900c9:	89 c6                	mov    %eax,%esi
 89900cb:	8b 45 08             	mov    0x8(%ebp),%eax
 89900ce:	05 9c 01 00 00       	add    $0x19c,%eax
 89900d3:	89 04 24             	mov    %eax,(%esp)
 89900d6:	e8 1b 5d b8 ff       	call   8515df6 <_ZNSt6vectorI10CRabbitBoxSaIS0_EED1Ev>
 89900db:	89 f0                	mov    %esi,%eax
 89900dd:	89 da                	mov    %ebx,%edx
 89900df:	eb 00                	jmp    89900e1 <_ZN17STStackableScriptC1ERS_+0x7fb>
 89900e1:	89 d3                	mov    %edx,%ebx
 89900e3:	89 c6                	mov    %eax,%esi
 89900e5:	8b 45 08             	mov    0x8(%ebp),%eax
 89900e8:	05 90 01 00 00       	add    $0x190,%eax
 89900ed:	89 04 24             	mov    %eax,(%esp)
 89900f0:	e8 e5 3c 6f ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 89900f5:	89 f0                	mov    %esi,%eax
 89900f7:	89 da                	mov    %ebx,%edx
 89900f9:	eb 00                	jmp    89900fb <_ZN17STStackableScriptC1ERS_+0x815>
 89900fb:	89 d3                	mov    %edx,%ebx
 89900fd:	89 c6                	mov    %eax,%esi
 89900ff:	8b 45 08             	mov    0x8(%ebp),%eax
 8990102:	05 78 01 00 00       	add    $0x178,%eax
 8990107:	89 04 24             	mov    %eax,(%esp)
 899010a:	e8 37 39 03 00       	call   89c3a46 <_ZN22Arad_STStackableScriptD1Ev>
 899010f:	89 f0                	mov    %esi,%eax
 8990111:	89 da                	mov    %ebx,%edx
 8990113:	eb 00                	jmp    8990115 <_ZN17STStackableScriptC1ERS_+0x82f>
 8990115:	89 d3                	mov    %edx,%ebx
 8990117:	89 c6                	mov    %eax,%esi
 8990119:	8b 45 08             	mov    0x8(%ebp),%eax
 899011c:	89 04 24             	mov    %eax,(%esp)
 899011f:	e8 cc 35 03 00       	call   89c36f0 <_ZN12STItemScriptD1Ev>
 8990124:	89 f0                	mov    %esi,%eax
 8990126:	89 da                	mov    %ebx,%edx
 8990128:	89 04 24             	mov    %eax,(%esp)
 899012b:	e8 20 36 15 00       	call   8ae3750 <_Unwind_Resume>
 8990130:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8990133:	83 c4 00             	add    $0x0,%esp
 8990136:	5b                   	pop    %ebx
 8990137:	5e                   	pop    %esi
 8990138:	5f                   	pop    %edi
 8990139:	5d                   	pop    %ebp
 899013a:	c3                   	ret
 899013b:	90                   	nop

```

```c
// STStackableScript::STStackableScript @ 0x898f8e6

/* STStackableScript::STStackableScript(STStackableScript&) */

void __thiscall
STStackableScript::STStackableScript(STStackableScript *this,STStackableScript *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  EquipmentParameterInfo *this_00;
  int iVar3;
  undefined4 local_44;
  EquipmentParameterInfo *local_40;
  map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
  local_3c [4];
  map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
  local_38 [4];
  map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
  local_34 [4];
  _Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>> local_30 [4];
  pair local_2c [8];
  pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*> local_24 [20];
  
  STItemScript::STItemScript((STItemScript *)this);
                    /* try { // try from 0898f905 to 0898f909 has its CatchHandler @ 08990115 */
  Arad_STStackableScript::Arad_STStackableScript((Arad_STStackableScript *)(this + 0x178));
                    /* try { // try from 0898f915 to 0898f919 has its CatchHandler @ 089900fb */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 400));
                    /* try { // try from 0898f925 to 0898f929 has its CatchHandler @ 089900e1 */
  std::vector<CRabbitBox,std::allocator<CRabbitBox>>::vector
            ((vector<CRabbitBox,std::allocator<CRabbitBox>> *)(this + 0x19c));
  CountinuousItemOption::CountinuousItemOption((CountinuousItemOption *)(this + 0x1b9));
  CountinuousItemOption::CountinuousItemOption((CountinuousItemOption *)(this + 0x1bc));
                    /* try { // try from 0898f955 to 0898f959 has its CatchHandler @ 089900c7 */
  std::string::string((string *)(this + 0x1d8));
                    /* try { // try from 0898f965 to 0898f969 has its CatchHandler @ 089900ad */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x1ec));
                    /* try { // try from 0898f975 to 0898f979 has its CatchHandler @ 08990093 */
  std::vector<StackableAction::UsablePlace,std::allocator<StackableAction::UsablePlace>>::vector
            ((vector<StackableAction::UsablePlace,std::allocator<StackableAction::UsablePlace>> *)
             (this + 0x1f8));
                    /* try { // try from 0898f985 to 0898f989 has its CatchHandler @ 08990079 */
  std::vector<STPassiveObjectInStackable,std::allocator<STPassiveObjectInStackable>>::vector
            ((vector<STPassiveObjectInStackable,std::allocator<STPassiveObjectInStackable>> *)
             (this + 0x208));
                    /* try { // try from 0898f995 to 0898f999 has its CatchHandler @ 0899005f */
  std::vector<StackableAction::UsableServerType,std::allocator<StackableAction::UsableServerType>>::
  vector((vector<StackableAction::UsableServerType,std::allocator<StackableAction::UsableServerType>>
          *)(this + 0x214));
                    /* try { // try from 0898f9a5 to 0898f9a9 has its CatchHandler @ 08990045 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x224));
                    /* try { // try from 0898f9b5 to 0898f9b9 has its CatchHandler @ 0899002b */
  std::string::string((string *)(this + 0x230));
                    /* try { // try from 0898f9c5 to 0898f9c9 has its CatchHandler @ 08990011 */
  std::string::string((string *)(this + 0x234));
                    /* try { // try from 0898f9d5 to 0898f9d9 has its CatchHandler @ 0898fff7 */
  std::string::string((string *)(this + 0x238));
                    /* try { // try from 0898f9e5 to 0898f9e9 has its CatchHandler @ 0898ffdd */
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::vector((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
            *)(this + 0x244));
                    /* try { // try from 0898f9f5 to 0898f9f9 has its CatchHandler @ 0898ffc3 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x250));
                    /* try { // try from 0898fa05 to 0898fa09 has its CatchHandler @ 0898ffa9 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x25c));
                    /* try { // try from 0898fa15 to 0898fa19 has its CatchHandler @ 0898ff8f */
  std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::vector
            ((vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)(this + 0x268)
            );
                    /* try { // try from 0898fa25 to 0898fa29 has its CatchHandler @ 0898ff75 */
  std::
  vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
  ::vector((vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
            *)(this + 0x274));
                    /* try { // try from 0898fa35 to 0898fa39 has its CatchHandler @ 0898ff5b */
  stStackableBooster_t::stStackableBooster_t((stStackableBooster_t *)(this + 0x280));
                    /* try { // try from 0898fa45 to 0898fa49 has its CatchHandler @ 0898ff41 */
  std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::vector
            ((vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)(this + 0x2a4)
            );
  STRecovery::STRecovery((STRecovery *)(this + 0x2b0));
  STRecovery::STRecovery((STRecovery *)(this + 0x2c4));
  STStatusRecovery::STStatusRecovery((STStatusRecovery *)(this + 0x2d8));
                    /* try { // try from 0898fa85 to 0898fa89 has its CatchHandler @ 0898ff27 */
  STStatusGenerate::STStatusGenerate((STStatusGenerate *)(this + 0x2ec));
  STBuff::STBuff((STBuff *)(this + 0x304));
  STSummonMonster::STSummonMonster((STSummonMonster *)(this + 0x314));
  STSummonApc::STSummonApc((STSummonApc *)(this + 0x330));
                    /* try { // try from 0898fac5 to 0898fac9 has its CatchHandler @ 0898ff0d */
  STStatChangeVector::STStatChangeVector((STStatChangeVector *)(this + 0x34c));
                    /* try { // try from 0898fad5 to 0898fad9 has its CatchHandler @ 0898fef3 */
  std::string::string((string *)(this + 0x368));
                    /* try { // try from 0898fae5 to 0898fae9 has its CatchHandler @ 0898fed9 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x374));
                    /* try { // try from 0898faf5 to 0898faf9 has its CatchHandler @ 0898febf */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x3a4))
  ;
                    /* try { // try from 0898fb05 to 0898fb09 has its CatchHandler @ 0898fea5 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x3c0));
                    /* try { // try from 0898fb15 to 0898fb19 has its CatchHandler @ 0898fe8b */
  stLimitCubeInfo::stLimitCubeInfo((stLimitCubeInfo *)(this + 0x3d4));
                    /* try { // try from 0898fb25 to 0898fb29 has its CatchHandler @ 0898fe71 */
  std::
  map<STEnchantSystemMapKey,STEnchantSystemMapData,std::less<STEnchantSystemMapKey>,std::allocator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>>
  ::map((map<STEnchantSystemMapKey,STEnchantSystemMapData,std::less<STEnchantSystemMapKey>,std::allocator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>>
         *)(this + 0x3f4));
                    /* try { // try from 0898fb35 to 0898fb39 has its CatchHandler @ 0898fe57 */
  std::string::string((string *)(this + 0x410));
                    /* try { // try from 0898fb45 to 0898fb49 has its CatchHandler @ 0898fe3d */
  BoosterSelectInfo::BoosterSelectInfo((BoosterSelectInfo *)(this + 0x41c));
  std::pair<int,int>::pair((pair<int,int> *)(this + 0x43c));
  AvatarOptionChangeType::AvatarOptionChangeType((AvatarOptionChangeType *)(this + 0x47c));
                    /* try { // try from 0898fb75 to 0898fb79 has its CatchHandler @ 0898fe23 */
  std::set<int,std::less<int>,std::allocator<int>>::set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x480));
                    /* try { // try from 0898fb85 to 0898fb89 has its CatchHandler @ 0898fe09 */
  std::set<int,std::less<int>,std::allocator<int>>::set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x498));
                    /* try { // try from 0898fb95 to 0898fb99 has its CatchHandler @ 0898fdef */
  std::string::string((string *)(this + 0x4b4));
                    /* try { // try from 0898fba5 to 0898fba9 has its CatchHandler @ 0898fdd5 */
  std::
  map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
  ::map((map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
         *)(this + 0x4bc));
                    /* try { // try from 0898fbb5 to 0898fbb9 has its CatchHandler @ 0898fdbb */
  std::set<int,std::less<int>,std::allocator<int>>::set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x4d4));
                    /* try { // try from 0898fbc5 to 0898fbc9 has its CatchHandler @ 0898fda1 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x4fc));
                    /* try { // try from 0898fbd5 to 0898fbd9 has its CatchHandler @ 0898fd87 */
  std::set<int,std::less<int>,std::allocator<int>>::set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x50c));
                    /* try { // try from 0898fbe7 to 0898fcae has its CatchHandler @ 0898fd6d */
  operator=(this,param_1);
  cVar1 = std::
          map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
          ::empty((map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
                   *)(param_1 + 0x4bc));
  if (cVar1 != '\x01') {
    std::
    map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
    ::begin(local_3c);
    while( true ) {
      std::
      map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
      ::end(local_38);
      cVar1 = std::_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>::
              operator!=((_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>
                          *)local_3c,(_Rb_tree_iterator *)local_38);
      if (cVar1 == '\0') break;
      std::
      map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
      ::end(local_34);
      std::_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>::operator->
                ((_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>> *)
                 local_3c);
      std::
      map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
      ::find(local_30);
      cVar1 = std::_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>::
              operator!=(local_30,(_Rb_tree_iterator *)local_34);
      if (cVar1 != '\0') {
        std::pair<ENUM_MODULE_TYPE,EquipmentParameterInfo*>::pair
                  ((pair<ENUM_MODULE_TYPE,EquipmentParameterInfo*> *)&local_44);
        puVar2 = (undefined4 *)
                 std::_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>::
                 operator->((_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>
                             *)local_3c);
        local_44 = *puVar2;
        this_00 = operator_new(0x480);
                    /* try { // try from 0898fcb6 to 0898fcba has its CatchHandler @ 0898fcbd */
        EquipmentParameterInfo::EquipmentParameterInfo(this_00);
        local_40 = this_00;
        iVar3 = std::_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>::
                operator->((_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>
                            *)local_3c);
                    /* try { // try from 0898fcef to 0898fd4a has its CatchHandler @ 0898fd6d */
        EquipmentParameterInfo::operator=(local_40,*(EquipmentParameterInfo **)(iVar3 + 4));
        std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>::
        pair<ENUM_MODULE_TYPE,EquipmentParameterInfo*>(local_24,(pair *)&local_44);
        std::
        map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
        ::insert(local_2c);
      }
      std::_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>::operator++
                ((_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>> *)
                 local_3c);
    }
  }
  return;
}

```

---

## ~STStackableScript

```asm
// === 0899013c STStackableScript::~STStackableScript  [0x0899013c-0x8990879] ===
 899013c:	55                   	push   %ebp
 899013d:	89 e5                	mov    %esp,%ebp
 899013f:	56                   	push   %esi
 8990140:	53                   	push   %ebx
 8990141:	83 ec 20             	sub    $0x20,%esp
 8990144:	8b 45 08             	mov    0x8(%ebp),%eax
 8990147:	05 bc 04 00 00       	add    $0x4bc,%eax
 899014c:	89 04 24             	mov    %eax,(%esp)
 899014f:	e8 d6 61 03 00       	call   89c632a <_ZNKSt3mapI16ENUM_MODULE_TYPEP22EquipmentParameterInfoSt4lessIS0_ESaISt4pairIKS0_S2_EEE5emptyEv>
 8990154:	83 f0 01             	xor    $0x1,%eax
 8990157:	84 c0                	test   %al,%al
 8990159:	0f 84 d4 00 00 00    	je     8990233 <_ZN17STStackableScriptD1Ev+0xf7>
 899015f:	8b 45 08             	mov    0x8(%ebp),%eax
 8990162:	8d 90 bc 04 00 00    	lea    0x4bc(%eax),%edx
 8990168:	8d 45 f0             	lea    -0x10(%ebp),%eax
 899016b:	89 54 24 04          	mov    %edx,0x4(%esp)
 899016f:	89 04 24             	mov    %eax,(%esp)
 8990172:	e8 c7 61 03 00       	call   89c633e <_ZNSt3mapI16ENUM_MODULE_TYPEP22EquipmentParameterInfoSt4lessIS0_ESaISt4pairIKS0_S2_EEE5beginEv>
 8990177:	83 ec 04             	sub    $0x4,%esp
 899017a:	eb 56                	jmp    89901d2 <_ZN17STStackableScriptD1Ev+0x96>
 899017c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 899017f:	89 04 24             	mov    %eax,(%esp)
 8990182:	e8 0f 62 03 00       	call   89c6396 <_ZNKSt17_Rb_tree_iteratorISt4pairIK16ENUM_MODULE_TYPEP22EquipmentParameterInfoEEptEv>
 8990187:	8b 40 04             	mov    0x4(%eax),%eax
 899018a:	85 c0                	test   %eax,%eax
 899018c:	0f 95 c0             	setne  %al
 899018f:	84 c0                	test   %al,%al
 8990191:	74 22                	je     89901b5 <_ZN17STStackableScriptD1Ev+0x79>
 8990193:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8990196:	89 04 24             	mov    %eax,(%esp)
 8990199:	e8 f8 61 03 00       	call   89c6396 <_ZNKSt17_Rb_tree_iteratorISt4pairIK16ENUM_MODULE_TYPEP22EquipmentParameterInfoEEptEv>
 899019e:	8b 58 04             	mov    0x4(%eax),%ebx
 89901a1:	85 db                	test   %ebx,%ebx
 89901a3:	74 10                	je     89901b5 <_ZN17STStackableScriptD1Ev+0x79>
 89901a5:	89 1c 24             	mov    %ebx,(%esp)
 89901a8:	e8 19 a3 f8 ff       	call   891a4c6 <_ZN22EquipmentParameterInfoD1Ev>
 89901ad:	89 1c 24             	mov    %ebx,(%esp)
 89901b0:	e8 3b 43 d9 ff       	call   87244f0 <_ZdlPv>
 89901b5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 89901b8:	89 04 24             	mov    %eax,(%esp)
 89901bb:	e8 d6 61 03 00       	call   89c6396 <_ZNKSt17_Rb_tree_iteratorISt4pairIK16ENUM_MODULE_TYPEP22EquipmentParameterInfoEEptEv>
 89901c0:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 89901c7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 89901ca:	89 04 24             	mov    %eax,(%esp)
 89901cd:	e8 a6 61 03 00       	call   89c6378 <_ZNSt17_Rb_tree_iteratorISt4pairIK16ENUM_MODULE_TYPEP22EquipmentParameterInfoEEppEv>
 89901d2:	8b 45 08             	mov    0x8(%ebp),%eax
 89901d5:	8d 90 bc 04 00 00    	lea    0x4bc(%eax),%edx
 89901db:	8d 45 f4             	lea    -0xc(%ebp),%eax
 89901de:	89 54 24 04          	mov    %edx,0x4(%esp)
 89901e2:	89 04 24             	mov    %eax,(%esp)
 89901e5:	e8 d0 9a c9 ff       	call   8629cba <_ZNSt3mapI16ENUM_MODULE_TYPEP22EquipmentParameterInfoSt4lessIS0_ESaISt4pairIKS0_S2_EEE3endEv>
 89901ea:	83 ec 04             	sub    $0x4,%esp
 89901ed:	8d 45 f4             	lea    -0xc(%ebp),%eax
 89901f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 89901f4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 89901f7:	89 04 24             	mov    %eax,(%esp)
 89901fa:	e8 65 61 03 00       	call   89c6364 <_ZNKSt17_Rb_tree_iteratorISt4pairIK16ENUM_MODULE_TYPEP22EquipmentParameterInfoEEneERKS6_>
 89901ff:	84 c0                	test   %al,%al
 8990201:	0f 85 75 ff ff ff    	jne    899017c <_ZN17STStackableScriptD1Ev+0x40>
 8990207:	8b 45 08             	mov    0x8(%ebp),%eax
 899020a:	05 bc 04 00 00       	add    $0x4bc,%eax
 899020f:	89 04 24             	mov    %eax,(%esp)
 8990212:	e8 19 62 03 00       	call   89c6430 <_ZNSt3mapI16ENUM_MODULE_TYPEP22EquipmentParameterInfoSt4lessIS0_ESaISt4pairIKS0_S2_EEE5clearEv>
 8990217:	eb 1a                	jmp    8990233 <_ZN17STStackableScriptD1Ev+0xf7>
 8990219:	89 d3                	mov    %edx,%ebx
 899021b:	89 c6                	mov    %eax,%esi
 899021d:	8b 45 08             	mov    0x8(%ebp),%eax
 8990220:	05 0c 05 00 00       	add    $0x50c,%eax
 8990225:	89 04 24             	mov    %eax,(%esp)
 8990228:	e8 07 9d 74 ff       	call   80d9f34 <_ZNSt3setIiSt4lessIiESaIiEED1Ev>
 899022d:	89 f0                	mov    %esi,%eax
 899022f:	89 da                	mov    %ebx,%edx
 8990231:	eb 12                	jmp    8990245 <_ZN17STStackableScriptD1Ev+0x109>
 8990233:	8b 45 08             	mov    0x8(%ebp),%eax
 8990236:	05 0c 05 00 00       	add    $0x50c,%eax
 899023b:	89 04 24             	mov    %eax,(%esp)
 899023e:	e8 f1 9c 74 ff       	call   80d9f34 <_ZNSt3setIiSt4lessIiESaIiEED1Ev>
 8990243:	eb 1a                	jmp    899025f <_ZN17STStackableScriptD1Ev+0x123>
 8990245:	89 d3                	mov    %edx,%ebx
 8990247:	89 c6                	mov    %eax,%esi
 8990249:	8b 45 08             	mov    0x8(%ebp),%eax
 899024c:	05 fc 04 00 00       	add    $0x4fc,%eax
 8990251:	89 04 24             	mov    %eax,(%esp)
 8990254:	e8 81 3b 6f ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8990259:	89 f0                	mov    %esi,%eax
 899025b:	89 da                	mov    %ebx,%edx
 899025d:	eb 12                	jmp    8990271 <_ZN17STStackableScriptD1Ev+0x135>
 899025f:	8b 45 08             	mov    0x8(%ebp),%eax
 8990262:	05 fc 04 00 00       	add    $0x4fc,%eax
 8990267:	89 04 24             	mov    %eax,(%esp)
 899026a:	e8 6b 3b 6f ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 899026f:	eb 1a                	jmp    899028b <_ZN17STStackableScriptD1Ev+0x14f>
 8990271:	89 d3                	mov    %edx,%ebx
 8990273:	89 c6                	mov    %eax,%esi
 8990275:	8b 45 08             	mov    0x8(%ebp),%eax
 8990278:	05 d4 04 00 00       	add    $0x4d4,%eax
 899027d:	89 04 24             	mov    %eax,(%esp)
 8990280:	e8 af 9c 74 ff       	call   80d9f34 <_ZNSt3setIiSt4lessIiESaIiEED1Ev>
 8990285:	89 f0                	mov    %esi,%eax
 8990287:	89 da                	mov    %ebx,%edx
 8990289:	eb 12                	jmp    899029d <_ZN17STStackableScriptD1Ev+0x161>
 899028b:	8b 45 08             	mov    0x8(%ebp),%eax
 899028e:	05 d4 04 00 00       	add    $0x4d4,%eax
 8990293:	89 04 24             	mov    %eax,(%esp)
 8990296:	e8 99 9c 74 ff       	call   80d9f34 <_ZNSt3setIiSt4lessIiESaIiEED1Ev>
 899029b:	eb 1a                	jmp    89902b7 <_ZN17STStackableScriptD1Ev+0x17b>
 899029d:	89 d3                	mov    %edx,%ebx
 899029f:	89 c6                	mov    %eax,%esi
 89902a1:	8b 45 08             	mov    0x8(%ebp),%eax
 89902a4:	05 bc 04 00 00       	add    $0x4bc,%eax
 89902a9:	89 04 24             	mov    %eax,(%esp)
 89902ac:	e8 31 38 03 00       	call   89c3ae2 <_ZNSt3mapI16ENUM_MODULE_TYPEP22EquipmentParameterInfoSt4lessIS0_ESaISt4pairIKS0_S2_EEED1Ev>
 89902b1:	89 f0                	mov    %esi,%eax
 89902b3:	89 da                	mov    %ebx,%edx
 89902b5:	eb 12                	jmp    89902c9 <_ZN17STStackableScriptD1Ev+0x18d>
 89902b7:	8b 45 08             	mov    0x8(%ebp),%eax
 89902ba:	05 bc 04 00 00       	add    $0x4bc,%eax
 89902bf:	89 04 24             	mov    %eax,(%esp)
 89902c2:	e8 1b 38 03 00       	call   89c3ae2 <_ZNSt3mapI16ENUM_MODULE_TYPEP22EquipmentParameterInfoSt4lessIS0_ESaISt4pairIKS0_S2_EEED1Ev>
 89902c7:	eb 1a                	jmp    89902e3 <_ZN17STStackableScriptD1Ev+0x1a7>
 89902c9:	89 d3                	mov    %edx,%ebx
 89902cb:	89 c6                	mov    %eax,%esi
 89902cd:	8b 45 08             	mov    0x8(%ebp),%eax
 89902d0:	05 b4 04 00 00       	add    $0x4b4,%eax
 89902d5:	89 04 24             	mov    %eax,(%esp)
 89902d8:	e8 03 79 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 89902dd:	89 f0                	mov    %esi,%eax
 89902df:	89 da                	mov    %ebx,%edx
 89902e1:	eb 12                	jmp    89902f5 <_ZN17STStackableScriptD1Ev+0x1b9>
 89902e3:	8b 45 08             	mov    0x8(%ebp),%eax
 89902e6:	05 b4 04 00 00       	add    $0x4b4,%eax
 89902eb:	89 04 24             	mov    %eax,(%esp)
 89902ee:	e8 ed 78 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 89902f3:	eb 1a                	jmp    899030f <_ZN17STStackableScriptD1Ev+0x1d3>
 89902f5:	89 d3                	mov    %edx,%ebx
 89902f7:	89 c6                	mov    %eax,%esi
 89902f9:	8b 45 08             	mov    0x8(%ebp),%eax
 89902fc:	05 98 04 00 00       	add    $0x498,%eax
 8990301:	89 04 24             	mov    %eax,(%esp)
 8990304:	e8 2b 9c 74 ff       	call   80d9f34 <_ZNSt3setIiSt4lessIiESaIiEED1Ev>
 8990309:	89 f0                	mov    %esi,%eax
 899030b:	89 da                	mov    %ebx,%edx
 899030d:	eb 12                	jmp    8990321 <_ZN17STStackableScriptD1Ev+0x1e5>
 899030f:	8b 45 08             	mov    0x8(%ebp),%eax
 8990312:	05 98 04 00 00       	add    $0x498,%eax
 8990317:	89 04 24             	mov    %eax,(%esp)
 899031a:	e8 15 9c 74 ff       	call   80d9f34 <_ZNSt3setIiSt4lessIiESaIiEED1Ev>
 899031f:	eb 1a                	jmp    899033b <_ZN17STStackableScriptD1Ev+0x1ff>
 8990321:	89 d3                	mov    %edx,%ebx
 8990323:	89 c6                	mov    %eax,%esi
 8990325:	8b 45 08             	mov    0x8(%ebp),%eax
 8990328:	05 80 04 00 00       	add    $0x480,%eax
 899032d:	89 04 24             	mov    %eax,(%esp)
 8990330:	e8 ff 9b 74 ff       	call   80d9f34 <_ZNSt3setIiSt4lessIiESaIiEED1Ev>
 8990335:	89 f0                	mov    %esi,%eax
 8990337:	89 da                	mov    %ebx,%edx
 8990339:	eb 12                	jmp    899034d <_ZN17STStackableScriptD1Ev+0x211>
 899033b:	8b 45 08             	mov    0x8(%ebp),%eax
 899033e:	05 80 04 00 00       	add    $0x480,%eax
 8990343:	89 04 24             	mov    %eax,(%esp)
 8990346:	e8 e9 9b 74 ff       	call   80d9f34 <_ZNSt3setIiSt4lessIiESaIiEED1Ev>
 899034b:	eb 1a                	jmp    8990367 <_ZN17STStackableScriptD1Ev+0x22b>
 899034d:	89 d3                	mov    %edx,%ebx
 899034f:	89 c6                	mov    %eax,%esi
 8990351:	8b 45 08             	mov    0x8(%ebp),%eax
 8990354:	05 1c 04 00 00       	add    $0x41c,%eax
 8990359:	89 04 24             	mov    %eax,(%esp)
 899035c:	e8 f7 42 b8 ff       	call   8514658 <_ZN17BoosterSelectInfoD1Ev>
 8990361:	89 f0                	mov    %esi,%eax
 8990363:	89 da                	mov    %ebx,%edx
 8990365:	eb 12                	jmp    8990379 <_ZN17STStackableScriptD1Ev+0x23d>
 8990367:	8b 45 08             	mov    0x8(%ebp),%eax
 899036a:	05 1c 04 00 00       	add    $0x41c,%eax
 899036f:	89 04 24             	mov    %eax,(%esp)
 8990372:	e8 e1 42 b8 ff       	call   8514658 <_ZN17BoosterSelectInfoD1Ev>
 8990377:	eb 1a                	jmp    8990393 <_ZN17STStackableScriptD1Ev+0x257>
 8990379:	89 d3                	mov    %edx,%ebx
 899037b:	89 c6                	mov    %eax,%esi
 899037d:	8b 45 08             	mov    0x8(%ebp),%eax
 8990380:	05 10 04 00 00       	add    $0x410,%eax
 8990385:	89 04 24             	mov    %eax,(%esp)
 8990388:	e8 53 78 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 899038d:	89 f0                	mov    %esi,%eax
 899038f:	89 da                	mov    %ebx,%edx
 8990391:	eb 12                	jmp    89903a5 <_ZN17STStackableScriptD1Ev+0x269>
 8990393:	8b 45 08             	mov    0x8(%ebp),%eax
 8990396:	05 10 04 00 00       	add    $0x410,%eax
 899039b:	89 04 24             	mov    %eax,(%esp)
 899039e:	e8 3d 78 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 89903a3:	eb 1a                	jmp    89903bf <_ZN17STStackableScriptD1Ev+0x283>
 89903a5:	89 d3                	mov    %edx,%ebx
 89903a7:	89 c6                	mov    %eax,%esi
 89903a9:	8b 45 08             	mov    0x8(%ebp),%eax
 89903ac:	05 f4 03 00 00       	add    $0x3f4,%eax
 89903b1:	89 04 24             	mov    %eax,(%esp)
 89903b4:	e8 7b 37 b8 ff       	call   8513b34 <_ZNSt3mapI21STEnchantSystemMapKey22STEnchantSystemMapDataSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 89903b9:	89 f0                	mov    %esi,%eax
 89903bb:	89 da                	mov    %ebx,%edx
 89903bd:	eb 12                	jmp    89903d1 <_ZN17STStackableScriptD1Ev+0x295>
 89903bf:	8b 45 08             	mov    0x8(%ebp),%eax
 89903c2:	05 f4 03 00 00       	add    $0x3f4,%eax
 89903c7:	89 04 24             	mov    %eax,(%esp)
 89903ca:	e8 65 37 b8 ff       	call   8513b34 <_ZNSt3mapI21STEnchantSystemMapKey22STEnchantSystemMapDataSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 89903cf:	eb 1a                	jmp    89903eb <_ZN17STStackableScriptD1Ev+0x2af>
 89903d1:	89 d3                	mov    %edx,%ebx
 89903d3:	89 c6                	mov    %eax,%esi
 89903d5:	8b 45 08             	mov    0x8(%ebp),%eax
 89903d8:	05 d4 03 00 00       	add    $0x3d4,%eax
 89903dd:	89 04 24             	mov    %eax,(%esp)
 89903e0:	e8 89 42 b8 ff       	call   851466e <_ZN15stLimitCubeInfoD1Ev>
 89903e5:	89 f0                	mov    %esi,%eax
 89903e7:	89 da                	mov    %ebx,%edx
 89903e9:	eb 12                	jmp    89903fd <_ZN17STStackableScriptD1Ev+0x2c1>
 89903eb:	8b 45 08             	mov    0x8(%ebp),%eax
 89903ee:	05 d4 03 00 00       	add    $0x3d4,%eax
 89903f3:	89 04 24             	mov    %eax,(%esp)
 89903f6:	e8 73 42 b8 ff       	call   851466e <_ZN15stLimitCubeInfoD1Ev>
 89903fb:	eb 1a                	jmp    8990417 <_ZN17STStackableScriptD1Ev+0x2db>
 89903fd:	89 d3                	mov    %edx,%ebx
 89903ff:	89 c6                	mov    %eax,%esi
 8990401:	8b 45 08             	mov    0x8(%ebp),%eax
 8990404:	05 c0 03 00 00       	add    $0x3c0,%eax
 8990409:	89 04 24             	mov    %eax,(%esp)
 899040c:	e8 d9 45 7a ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8990411:	89 f0                	mov    %esi,%eax
 8990413:	89 da                	mov    %ebx,%edx
 8990415:	eb 12                	jmp    8990429 <_ZN17STStackableScriptD1Ev+0x2ed>
 8990417:	8b 45 08             	mov    0x8(%ebp),%eax
 899041a:	05 c0 03 00 00       	add    $0x3c0,%eax
 899041f:	89 04 24             	mov    %eax,(%esp)
 8990422:	e8 c3 45 7a ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8990427:	eb 1a                	jmp    8990443 <_ZN17STStackableScriptD1Ev+0x307>
 8990429:	89 d3                	mov    %edx,%ebx
 899042b:	89 c6                	mov    %eax,%esi
 899042d:	8b 45 08             	mov    0x8(%ebp),%eax
 8990430:	05 a4 03 00 00       	add    $0x3a4,%eax
 8990435:	89 04 24             	mov    %eax,(%esp)
 8990438:	e8 89 66 73 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 899043d:	89 f0                	mov    %esi,%eax
 899043f:	89 da                	mov    %ebx,%edx
 8990441:	eb 12                	jmp    8990455 <_ZN17STStackableScriptD1Ev+0x319>
 8990443:	8b 45 08             	mov    0x8(%ebp),%eax
 8990446:	05 a4 03 00 00       	add    $0x3a4,%eax
 899044b:	89 04 24             	mov    %eax,(%esp)
 899044e:	e8 73 66 73 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8990453:	eb 1a                	jmp    899046f <_ZN17STStackableScriptD1Ev+0x333>
 8990455:	89 d3                	mov    %edx,%ebx
 8990457:	89 c6                	mov    %eax,%esi
 8990459:	8b 45 08             	mov    0x8(%ebp),%eax
 899045c:	05 74 03 00 00       	add    $0x374,%eax
 8990461:	89 04 24             	mov    %eax,(%esp)
 8990464:	e8 81 45 7a ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8990469:	89 f0                	mov    %esi,%eax
 899046b:	89 da                	mov    %ebx,%edx
 899046d:	eb 12                	jmp    8990481 <_ZN17STStackableScriptD1Ev+0x345>
 899046f:	8b 45 08             	mov    0x8(%ebp),%eax
 8990472:	05 74 03 00 00       	add    $0x374,%eax
 8990477:	89 04 24             	mov    %eax,(%esp)
 899047a:	e8 6b 45 7a ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 899047f:	eb 1a                	jmp    899049b <_ZN17STStackableScriptD1Ev+0x35f>
 8990481:	89 d3                	mov    %edx,%ebx
 8990483:	89 c6                	mov    %eax,%esi
 8990485:	8b 45 08             	mov    0x8(%ebp),%eax
 8990488:	05 68 03 00 00       	add    $0x368,%eax
 899048d:	89 04 24             	mov    %eax,(%esp)
 8990490:	e8 4b 77 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 8990495:	89 f0                	mov    %esi,%eax
 8990497:	89 da                	mov    %ebx,%edx
 8990499:	eb 12                	jmp    89904ad <_ZN17STStackableScriptD1Ev+0x371>
 899049b:	8b 45 08             	mov    0x8(%ebp),%eax
 899049e:	05 68 03 00 00       	add    $0x368,%eax
 89904a3:	89 04 24             	mov    %eax,(%esp)
 89904a6:	e8 35 77 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 89904ab:	eb 1a                	jmp    89904c7 <_ZN17STStackableScriptD1Ev+0x38b>
 89904ad:	89 d3                	mov    %edx,%ebx
 89904af:	89 c6                	mov    %eax,%esi
 89904b1:	8b 45 08             	mov    0x8(%ebp),%eax
 89904b4:	05 4c 03 00 00       	add    $0x34c,%eax
 89904b9:	89 04 24             	mov    %eax,(%esp)
 89904bc:	e8 0d 36 03 00       	call   89c3ace <_ZN18STStatChangeVectorD1Ev>
 89904c1:	89 f0                	mov    %esi,%eax
 89904c3:	89 da                	mov    %ebx,%edx
 89904c5:	eb 12                	jmp    89904d9 <_ZN17STStackableScriptD1Ev+0x39d>
 89904c7:	8b 45 08             	mov    0x8(%ebp),%eax
 89904ca:	05 4c 03 00 00       	add    $0x34c,%eax
 89904cf:	89 04 24             	mov    %eax,(%esp)
 89904d2:	e8 f7 35 03 00       	call   89c3ace <_ZN18STStatChangeVectorD1Ev>
 89904d7:	eb 1a                	jmp    89904f3 <_ZN17STStackableScriptD1Ev+0x3b7>
 89904d9:	89 d3                	mov    %edx,%ebx
 89904db:	89 c6                	mov    %eax,%esi
 89904dd:	8b 45 08             	mov    0x8(%ebp),%eax
 89904e0:	05 ec 02 00 00       	add    $0x2ec,%eax
 89904e5:	89 04 24             	mov    %eax,(%esp)
 89904e8:	e8 cd 35 03 00       	call   89c3aba <_ZN16STStatusGenerateD1Ev>
 89904ed:	89 f0                	mov    %esi,%eax
 89904ef:	89 da                	mov    %ebx,%edx
 89904f1:	eb 12                	jmp    8990505 <_ZN17STStackableScriptD1Ev+0x3c9>
 89904f3:	8b 45 08             	mov    0x8(%ebp),%eax
 89904f6:	05 ec 02 00 00       	add    $0x2ec,%eax
 89904fb:	89 04 24             	mov    %eax,(%esp)
 89904fe:	e8 b7 35 03 00       	call   89c3aba <_ZN16STStatusGenerateD1Ev>
 8990503:	eb 1a                	jmp    899051f <_ZN17STStackableScriptD1Ev+0x3e3>
 8990505:	89 d3                	mov    %edx,%ebx
 8990507:	89 c6                	mov    %eax,%esi
 8990509:	8b 45 08             	mov    0x8(%ebp),%eax
 899050c:	05 a4 02 00 00       	add    $0x2a4,%eax
 8990511:	89 04 24             	mov    %eax,(%esp)
 8990514:	e8 2b da 8e ff       	call   827df44 <_ZNSt6vectorI22STStackablePackageDataSaIS0_EED1Ev>
 8990519:	89 f0                	mov    %esi,%eax
 899051b:	89 da                	mov    %ebx,%edx
 899051d:	eb 12                	jmp    8990531 <_ZN17STStackableScriptD1Ev+0x3f5>
 899051f:	8b 45 08             	mov    0x8(%ebp),%eax
 8990522:	05 a4 02 00 00       	add    $0x2a4,%eax
 8990527:	89 04 24             	mov    %eax,(%esp)
 899052a:	e8 15 da 8e ff       	call   827df44 <_ZNSt6vectorI22STStackablePackageDataSaIS0_EED1Ev>
 899052f:	eb 1a                	jmp    899054b <_ZN17STStackableScriptD1Ev+0x40f>
 8990531:	89 d3                	mov    %edx,%ebx
 8990533:	89 c6                	mov    %eax,%esi
 8990535:	8b 45 08             	mov    0x8(%ebp),%eax
 8990538:	05 80 02 00 00       	add    $0x280,%eax
 899053d:	89 04 24             	mov    %eax,(%esp)
 8990540:	e8 cd 40 b8 ff       	call   8514612 <_ZN20stStackableBooster_tD1Ev>
 8990545:	89 f0                	mov    %esi,%eax
 8990547:	89 da                	mov    %ebx,%edx
 8990549:	eb 12                	jmp    899055d <_ZN17STStackableScriptD1Ev+0x421>
 899054b:	8b 45 08             	mov    0x8(%ebp),%eax
 899054e:	05 80 02 00 00       	add    $0x280,%eax
 8990553:	89 04 24             	mov    %eax,(%esp)
 8990556:	e8 b7 40 b8 ff       	call   8514612 <_ZN20stStackableBooster_tD1Ev>
 899055b:	eb 1a                	jmp    8990577 <_ZN17STStackableScriptD1Ev+0x43b>
 899055d:	89 d3                	mov    %edx,%ebx
 899055f:	89 c6                	mov    %eax,%esi
 8990561:	8b 45 08             	mov    0x8(%ebp),%eax
 8990564:	05 74 02 00 00       	add    $0x274,%eax
 8990569:	89 04 24             	mov    %eax,(%esp)
 899056c:	e8 f7 73 9f ff       	call   8387968 <_ZNSt6vectorIS_I22STStackablePackageDataSaIS0_EESaIS2_EED1Ev>
 8990571:	89 f0                	mov    %esi,%eax
 8990573:	89 da                	mov    %ebx,%edx
 8990575:	eb 12                	jmp    8990589 <_ZN17STStackableScriptD1Ev+0x44d>
 8990577:	8b 45 08             	mov    0x8(%ebp),%eax
 899057a:	05 74 02 00 00       	add    $0x274,%eax
 899057f:	89 04 24             	mov    %eax,(%esp)
 8990582:	e8 e1 73 9f ff       	call   8387968 <_ZNSt6vectorIS_I22STStackablePackageDataSaIS0_EESaIS2_EED1Ev>
 8990587:	eb 1a                	jmp    89905a3 <_ZN17STStackableScriptD1Ev+0x467>
 8990589:	89 d3                	mov    %edx,%ebx
 899058b:	89 c6                	mov    %eax,%esi
 899058d:	8b 45 08             	mov    0x8(%ebp),%eax
 8990590:	05 68 02 00 00       	add    $0x268,%eax
 8990595:	89 04 24             	mov    %eax,(%esp)
 8990598:	e8 a7 d9 8e ff       	call   827df44 <_ZNSt6vectorI22STStackablePackageDataSaIS0_EED1Ev>
 899059d:	89 f0                	mov    %esi,%eax
 899059f:	89 da                	mov    %ebx,%edx
 89905a1:	eb 12                	jmp    89905b5 <_ZN17STStackableScriptD1Ev+0x479>
 89905a3:	8b 45 08             	mov    0x8(%ebp),%eax
 89905a6:	05 68 02 00 00       	add    $0x268,%eax
 89905ab:	89 04 24             	mov    %eax,(%esp)
 89905ae:	e8 91 d9 8e ff       	call   827df44 <_ZNSt6vectorI22STStackablePackageDataSaIS0_EED1Ev>
 89905b3:	eb 1a                	jmp    89905cf <_ZN17STStackableScriptD1Ev+0x493>
 89905b5:	89 d3                	mov    %edx,%ebx
 89905b7:	89 c6                	mov    %eax,%esi
 89905b9:	8b 45 08             	mov    0x8(%ebp),%eax
 89905bc:	05 5c 02 00 00       	add    $0x25c,%eax
 89905c1:	89 04 24             	mov    %eax,(%esp)
 89905c4:	e8 11 38 6f ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 89905c9:	89 f0                	mov    %esi,%eax
 89905cb:	89 da                	mov    %ebx,%edx
 89905cd:	eb 12                	jmp    89905e1 <_ZN17STStackableScriptD1Ev+0x4a5>
 89905cf:	8b 45 08             	mov    0x8(%ebp),%eax
 89905d2:	05 5c 02 00 00       	add    $0x25c,%eax
 89905d7:	89 04 24             	mov    %eax,(%esp)
 89905da:	e8 fb 37 6f ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 89905df:	eb 1a                	jmp    89905fb <_ZN17STStackableScriptD1Ev+0x4bf>
 89905e1:	89 d3                	mov    %edx,%ebx
 89905e3:	89 c6                	mov    %eax,%esi
 89905e5:	8b 45 08             	mov    0x8(%ebp),%eax
 89905e8:	05 50 02 00 00       	add    $0x250,%eax
 89905ed:	89 04 24             	mov    %eax,(%esp)
 89905f0:	e8 e5 37 6f ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 89905f5:	89 f0                	mov    %esi,%eax
 89905f7:	89 da                	mov    %ebx,%edx
 89905f9:	eb 12                	jmp    899060d <_ZN17STStackableScriptD1Ev+0x4d1>
 89905fb:	8b 45 08             	mov    0x8(%ebp),%eax
 89905fe:	05 50 02 00 00       	add    $0x250,%eax
 8990603:	89 04 24             	mov    %eax,(%esp)
 8990606:	e8 cf 37 6f ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 899060b:	eb 1a                	jmp    8990627 <_ZN17STStackableScriptD1Ev+0x4eb>
 899060d:	89 d3                	mov    %edx,%ebx
 899060f:	89 c6                	mov    %eax,%esi
 8990611:	8b 45 08             	mov    0x8(%ebp),%eax
 8990614:	05 44 02 00 00       	add    $0x244,%eax
 8990619:	89 04 24             	mov    %eax,(%esp)
 899061c:	e8 31 13 9f ff       	call   8381952 <_ZNSt6vectorIS_IiSaIiEESaIS1_EED1Ev>
 8990621:	89 f0                	mov    %esi,%eax
 8990623:	89 da                	mov    %ebx,%edx
 8990625:	eb 12                	jmp    8990639 <_ZN17STStackableScriptD1Ev+0x4fd>
 8990627:	8b 45 08             	mov    0x8(%ebp),%eax
 899062a:	05 44 02 00 00       	add    $0x244,%eax
 899062f:	89 04 24             	mov    %eax,(%esp)
 8990632:	e8 1b 13 9f ff       	call   8381952 <_ZNSt6vectorIS_IiSaIiEESaIS1_EED1Ev>
 8990637:	eb 1a                	jmp    8990653 <_ZN17STStackableScriptD1Ev+0x517>
 8990639:	89 d3                	mov    %edx,%ebx
 899063b:	89 c6                	mov    %eax,%esi
 899063d:	8b 45 08             	mov    0x8(%ebp),%eax
 8990640:	05 38 02 00 00       	add    $0x238,%eax
 8990645:	89 04 24             	mov    %eax,(%esp)
 8990648:	e8 93 75 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 899064d:	89 f0                	mov    %esi,%eax
 899064f:	89 da                	mov    %ebx,%edx
 8990651:	eb 12                	jmp    8990665 <_ZN17STStackableScriptD1Ev+0x529>
 8990653:	8b 45 08             	mov    0x8(%ebp),%eax
 8990656:	05 38 02 00 00       	add    $0x238,%eax
 899065b:	89 04 24             	mov    %eax,(%esp)
 899065e:	e8 7d 75 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 8990663:	eb 1a                	jmp    899067f <_ZN17STStackableScriptD1Ev+0x543>
 8990665:	89 d3                	mov    %edx,%ebx
 8990667:	89 c6                	mov    %eax,%esi
 8990669:	8b 45 08             	mov    0x8(%ebp),%eax
 899066c:	05 34 02 00 00       	add    $0x234,%eax
 8990671:	89 04 24             	mov    %eax,(%esp)
 8990674:	e8 67 75 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 8990679:	89 f0                	mov    %esi,%eax
 899067b:	89 da                	mov    %ebx,%edx
 899067d:	eb 12                	jmp    8990691 <_ZN17STStackableScriptD1Ev+0x555>
 899067f:	8b 45 08             	mov    0x8(%ebp),%eax
 8990682:	05 34 02 00 00       	add    $0x234,%eax
 8990687:	89 04 24             	mov    %eax,(%esp)
 899068a:	e8 51 75 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 899068f:	eb 1a                	jmp    89906ab <_ZN17STStackableScriptD1Ev+0x56f>
 8990691:	89 d3                	mov    %edx,%ebx
 8990693:	89 c6                	mov    %eax,%esi
 8990695:	8b 45 08             	mov    0x8(%ebp),%eax
 8990698:	05 30 02 00 00       	add    $0x230,%eax
 899069d:	89 04 24             	mov    %eax,(%esp)
 89906a0:	e8 3b 75 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 89906a5:	89 f0                	mov    %esi,%eax
 89906a7:	89 da                	mov    %ebx,%edx
 89906a9:	eb 12                	jmp    89906bd <_ZN17STStackableScriptD1Ev+0x581>
 89906ab:	8b 45 08             	mov    0x8(%ebp),%eax
 89906ae:	05 30 02 00 00       	add    $0x230,%eax
 89906b3:	89 04 24             	mov    %eax,(%esp)
 89906b6:	e8 25 75 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 89906bb:	eb 1a                	jmp    89906d7 <_ZN17STStackableScriptD1Ev+0x59b>
 89906bd:	89 d3                	mov    %edx,%ebx
 89906bf:	89 c6                	mov    %eax,%esi
 89906c1:	8b 45 08             	mov    0x8(%ebp),%eax
 89906c4:	05 24 02 00 00       	add    $0x224,%eax
 89906c9:	89 04 24             	mov    %eax,(%esp)
 89906cc:	e8 09 37 6f ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 89906d1:	89 f0                	mov    %esi,%eax
 89906d3:	89 da                	mov    %ebx,%edx
 89906d5:	eb 12                	jmp    89906e9 <_ZN17STStackableScriptD1Ev+0x5ad>
 89906d7:	8b 45 08             	mov    0x8(%ebp),%eax
 89906da:	05 24 02 00 00       	add    $0x224,%eax
 89906df:	89 04 24             	mov    %eax,(%esp)
 89906e2:	e8 f3 36 6f ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 89906e7:	eb 1a                	jmp    8990703 <_ZN17STStackableScriptD1Ev+0x5c7>
 89906e9:	89 d3                	mov    %edx,%ebx
 89906eb:	89 c6                	mov    %eax,%esi
 89906ed:	8b 45 08             	mov    0x8(%ebp),%eax
 89906f0:	05 14 02 00 00       	add    $0x214,%eax
 89906f5:	89 04 24             	mov    %eax,(%esp)
 89906f8:	e8 d7 58 b8 ff       	call   8515fd4 <_ZNSt6vectorIN15StackableAction16UsableServerTypeESaIS1_EED1Ev>
 89906fd:	89 f0                	mov    %esi,%eax
 89906ff:	89 da                	mov    %ebx,%edx
 8990701:	eb 12                	jmp    8990715 <_ZN17STStackableScriptD1Ev+0x5d9>
 8990703:	8b 45 08             	mov    0x8(%ebp),%eax
 8990706:	05 14 02 00 00       	add    $0x214,%eax
 899070b:	89 04 24             	mov    %eax,(%esp)
 899070e:	e8 c1 58 b8 ff       	call   8515fd4 <_ZNSt6vectorIN15StackableAction16UsableServerTypeESaIS1_EED1Ev>
 8990713:	eb 1a                	jmp    899072f <_ZN17STStackableScriptD1Ev+0x5f3>
 8990715:	89 d3                	mov    %edx,%ebx
 8990717:	89 c6                	mov    %eax,%esi
 8990719:	8b 45 08             	mov    0x8(%ebp),%eax
 899071c:	05 08 02 00 00       	add    $0x208,%eax
 8990721:	89 04 24             	mov    %eax,(%esp)
 8990724:	e8 d1 53 03 00       	call   89c5afa <_ZNSt6vectorI26STPassiveObjectInStackableSaIS0_EED1Ev>
 8990729:	89 f0                	mov    %esi,%eax
 899072b:	89 da                	mov    %ebx,%edx
 899072d:	eb 12                	jmp    8990741 <_ZN17STStackableScriptD1Ev+0x605>
 899072f:	8b 45 08             	mov    0x8(%ebp),%eax
 8990732:	05 08 02 00 00       	add    $0x208,%eax
 8990737:	89 04 24             	mov    %eax,(%esp)
 899073a:	e8 bb 53 03 00       	call   89c5afa <_ZNSt6vectorI26STPassiveObjectInStackableSaIS0_EED1Ev>
 899073f:	eb 1a                	jmp    899075b <_ZN17STStackableScriptD1Ev+0x61f>
 8990741:	89 d3                	mov    %edx,%ebx
 8990743:	89 c6                	mov    %eax,%esi
 8990745:	8b 45 08             	mov    0x8(%ebp),%eax
 8990748:	05 f8 01 00 00       	add    $0x1f8,%eax
 899074d:	89 04 24             	mov    %eax,(%esp)
 8990750:	e8 21 58 b8 ff       	call   8515f76 <_ZNSt6vectorIN15StackableAction11UsablePlaceESaIS1_EED1Ev>
 8990755:	89 f0                	mov    %esi,%eax
 8990757:	89 da                	mov    %ebx,%edx
 8990759:	eb 12                	jmp    899076d <_ZN17STStackableScriptD1Ev+0x631>
 899075b:	8b 45 08             	mov    0x8(%ebp),%eax
 899075e:	05 f8 01 00 00       	add    $0x1f8,%eax
 8990763:	89 04 24             	mov    %eax,(%esp)
 8990766:	e8 0b 58 b8 ff       	call   8515f76 <_ZNSt6vectorIN15StackableAction11UsablePlaceESaIS1_EED1Ev>
 899076b:	eb 1a                	jmp    8990787 <_ZN17STStackableScriptD1Ev+0x64b>
 899076d:	89 d3                	mov    %edx,%ebx
 899076f:	89 c6                	mov    %eax,%esi
 8990771:	8b 45 08             	mov    0x8(%ebp),%eax
 8990774:	05 ec 01 00 00       	add    $0x1ec,%eax
 8990779:	89 04 24             	mov    %eax,(%esp)
 899077c:	e8 59 36 6f ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8990781:	89 f0                	mov    %esi,%eax
 8990783:	89 da                	mov    %ebx,%edx
 8990785:	eb 12                	jmp    8990799 <_ZN17STStackableScriptD1Ev+0x65d>
 8990787:	8b 45 08             	mov    0x8(%ebp),%eax
 899078a:	05 ec 01 00 00       	add    $0x1ec,%eax
 899078f:	89 04 24             	mov    %eax,(%esp)
 8990792:	e8 43 36 6f ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8990797:	eb 1a                	jmp    89907b3 <_ZN17STStackableScriptD1Ev+0x677>
 8990799:	89 d3                	mov    %edx,%ebx
 899079b:	89 c6                	mov    %eax,%esi
 899079d:	8b 45 08             	mov    0x8(%ebp),%eax
 89907a0:	05 d8 01 00 00       	add    $0x1d8,%eax
 89907a5:	89 04 24             	mov    %eax,(%esp)
 89907a8:	e8 33 74 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 89907ad:	89 f0                	mov    %esi,%eax
 89907af:	89 da                	mov    %ebx,%edx
 89907b1:	eb 12                	jmp    89907c5 <_ZN17STStackableScriptD1Ev+0x689>
 89907b3:	8b 45 08             	mov    0x8(%ebp),%eax
 89907b6:	05 d8 01 00 00       	add    $0x1d8,%eax
 89907bb:	89 04 24             	mov    %eax,(%esp)
 89907be:	e8 1d 74 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 89907c3:	eb 1a                	jmp    89907df <_ZN17STStackableScriptD1Ev+0x6a3>
 89907c5:	89 d3                	mov    %edx,%ebx
 89907c7:	89 c6                	mov    %eax,%esi
 89907c9:	8b 45 08             	mov    0x8(%ebp),%eax
 89907cc:	05 9c 01 00 00       	add    $0x19c,%eax
 89907d1:	89 04 24             	mov    %eax,(%esp)
 89907d4:	e8 1d 56 b8 ff       	call   8515df6 <_ZNSt6vectorI10CRabbitBoxSaIS0_EED1Ev>
 89907d9:	89 f0                	mov    %esi,%eax
 89907db:	89 da                	mov    %ebx,%edx
 89907dd:	eb 12                	jmp    89907f1 <_ZN17STStackableScriptD1Ev+0x6b5>
 89907df:	8b 45 08             	mov    0x8(%ebp),%eax
 89907e2:	05 9c 01 00 00       	add    $0x19c,%eax
 89907e7:	89 04 24             	mov    %eax,(%esp)
 89907ea:	e8 07 56 b8 ff       	call   8515df6 <_ZNSt6vectorI10CRabbitBoxSaIS0_EED1Ev>
 89907ef:	eb 1a                	jmp    899080b <_ZN17STStackableScriptD1Ev+0x6cf>
 89907f1:	89 d3                	mov    %edx,%ebx
 89907f3:	89 c6                	mov    %eax,%esi
 89907f5:	8b 45 08             	mov    0x8(%ebp),%eax
 89907f8:	05 90 01 00 00       	add    $0x190,%eax
 89907fd:	89 04 24             	mov    %eax,(%esp)
 8990800:	e8 d5 35 6f ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8990805:	89 f0                	mov    %esi,%eax
 8990807:	89 da                	mov    %ebx,%edx
 8990809:	eb 12                	jmp    899081d <_ZN17STStackableScriptD1Ev+0x6e1>
 899080b:	8b 45 08             	mov    0x8(%ebp),%eax
 899080e:	05 90 01 00 00       	add    $0x190,%eax
 8990813:	89 04 24             	mov    %eax,(%esp)
 8990816:	e8 bf 35 6f ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 899081b:	eb 1a                	jmp    8990837 <_ZN17STStackableScriptD1Ev+0x6fb>
 899081d:	89 d3                	mov    %edx,%ebx
 899081f:	89 c6                	mov    %eax,%esi
 8990821:	8b 45 08             	mov    0x8(%ebp),%eax
 8990824:	05 78 01 00 00       	add    $0x178,%eax
 8990829:	89 04 24             	mov    %eax,(%esp)
 899082c:	e8 15 32 03 00       	call   89c3a46 <_ZN22Arad_STStackableScriptD1Ev>
 8990831:	89 f0                	mov    %esi,%eax
 8990833:	89 da                	mov    %ebx,%edx
 8990835:	eb 12                	jmp    8990849 <_ZN17STStackableScriptD1Ev+0x70d>
 8990837:	8b 45 08             	mov    0x8(%ebp),%eax
 899083a:	05 78 01 00 00       	add    $0x178,%eax
 899083f:	89 04 24             	mov    %eax,(%esp)
 8990842:	e8 ff 31 03 00       	call   89c3a46 <_ZN22Arad_STStackableScriptD1Ev>
 8990847:	eb 1b                	jmp    8990864 <_ZN17STStackableScriptD1Ev+0x728>
 8990849:	89 d3                	mov    %edx,%ebx
 899084b:	89 c6                	mov    %eax,%esi
 899084d:	8b 45 08             	mov    0x8(%ebp),%eax
 8990850:	89 04 24             	mov    %eax,(%esp)
 8990853:	e8 98 2e 03 00       	call   89c36f0 <_ZN12STItemScriptD1Ev>
 8990858:	89 f0                	mov    %esi,%eax
 899085a:	89 da                	mov    %ebx,%edx
 899085c:	89 04 24             	mov    %eax,(%esp)
 899085f:	e8 ec 2e 15 00       	call   8ae3750 <_Unwind_Resume>
 8990864:	8b 45 08             	mov    0x8(%ebp),%eax
 8990867:	89 04 24             	mov    %eax,(%esp)
 899086a:	e8 81 2e 03 00       	call   89c36f0 <_ZN12STItemScriptD1Ev>
 899086f:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8990872:	83 c4 00             	add    $0x0,%esp
 8990875:	5b                   	pop    %ebx
 8990876:	5e                   	pop    %esi
 8990877:	5d                   	pop    %ebp
 8990878:	c3                   	ret
 8990879:	90                   	nop

```

```c
// STStackableScript::~STStackableScript @ 0x899013c

/* STStackableScript::~STStackableScript() */

void __thiscall STStackableScript::~STStackableScript(STStackableScript *this)

{
  EquipmentParameterInfo *this_00;
  char cVar1;
  int iVar2;
  map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
  local_14 [4];
  map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
  local_10 [4];
  
                    /* try { // try from 0899014f to 08990216 has its CatchHandler @ 08990219 */
  cVar1 = std::
          map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
          ::empty((map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
                   *)(this + 0x4bc));
  if (cVar1 != '\x01') {
    std::
    map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
    ::begin(local_14);
    while( true ) {
      std::
      map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
      ::end(local_10);
      cVar1 = std::_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>::
              operator!=((_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>
                          *)local_14,(_Rb_tree_iterator *)local_10);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>::
              operator->((_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>
                          *)local_14);
      if (*(int *)(iVar2 + 4) != 0) {
        iVar2 = std::_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>::
                operator->((_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>
                            *)local_14);
        this_00 = *(EquipmentParameterInfo **)(iVar2 + 4);
        if (this_00 != (EquipmentParameterInfo *)0x0) {
          EquipmentParameterInfo::~EquipmentParameterInfo(this_00);
          operator_delete(this_00);
        }
      }
      iVar2 = std::_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>::
              operator->((_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>
                          *)local_14);
      *(undefined4 *)(iVar2 + 4) = 0;
      std::_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>::operator++
                ((_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>> *)
                 local_14);
    }
    std::
    map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
    ::clear((map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
             *)(this + 0x4bc));
  }
                    /* try { // try from 0899023e to 08990242 has its CatchHandler @ 08990245 */
  std::set<int,std::less<int>,std::allocator<int>>::~set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x50c));
                    /* try { // try from 0899026a to 0899026e has its CatchHandler @ 08990271 */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x4fc));
                    /* try { // try from 08990296 to 0899029a has its CatchHandler @ 0899029d */
  std::set<int,std::less<int>,std::allocator<int>>::~set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x4d4));
                    /* try { // try from 089902c2 to 089902c6 has its CatchHandler @ 089902c9 */
  std::
  map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
  ::~map((map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
          *)(this + 0x4bc));
                    /* try { // try from 089902ee to 089902f2 has its CatchHandler @ 089902f5 */
  std::string::~string((string *)(this + 0x4b4));
                    /* try { // try from 0899031a to 0899031e has its CatchHandler @ 08990321 */
  std::set<int,std::less<int>,std::allocator<int>>::~set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x498));
                    /* try { // try from 08990346 to 0899034a has its CatchHandler @ 0899034d */
  std::set<int,std::less<int>,std::allocator<int>>::~set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x480));
                    /* try { // try from 08990372 to 08990376 has its CatchHandler @ 08990379 */
  BoosterSelectInfo::~BoosterSelectInfo((BoosterSelectInfo *)(this + 0x41c));
                    /* try { // try from 0899039e to 089903a2 has its CatchHandler @ 089903a5 */
  std::string::~string((string *)(this + 0x410));
                    /* try { // try from 089903ca to 089903ce has its CatchHandler @ 089903d1 */
  std::
  map<STEnchantSystemMapKey,STEnchantSystemMapData,std::less<STEnchantSystemMapKey>,std::allocator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>>
  ::~map((map<STEnchantSystemMapKey,STEnchantSystemMapData,std::less<STEnchantSystemMapKey>,std::allocator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>>
          *)(this + 0x3f4));
                    /* try { // try from 089903f6 to 089903fa has its CatchHandler @ 089903fd */
  stLimitCubeInfo::~stLimitCubeInfo((stLimitCubeInfo *)(this + 0x3d4));
                    /* try { // try from 08990422 to 08990426 has its CatchHandler @ 08990429 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x3c0));
                    /* try { // try from 0899044e to 08990452 has its CatchHandler @ 08990455 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x3a4))
  ;
                    /* try { // try from 0899047a to 0899047e has its CatchHandler @ 08990481 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x374));
                    /* try { // try from 089904a6 to 089904aa has its CatchHandler @ 089904ad */
  std::string::~string((string *)(this + 0x368));
                    /* try { // try from 089904d2 to 089904d6 has its CatchHandler @ 089904d9 */
  STStatChangeVector::~STStatChangeVector((STStatChangeVector *)(this + 0x34c));
                    /* try { // try from 089904fe to 08990502 has its CatchHandler @ 08990505 */
  STStatusGenerate::~STStatusGenerate((STStatusGenerate *)(this + 0x2ec));
                    /* try { // try from 0899052a to 0899052e has its CatchHandler @ 08990531 */
  std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::~vector
            ((vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)(this + 0x2a4)
            );
                    /* try { // try from 08990556 to 0899055a has its CatchHandler @ 0899055d */
  stStackableBooster_t::~stStackableBooster_t((stStackableBooster_t *)(this + 0x280));
                    /* try { // try from 08990582 to 08990586 has its CatchHandler @ 08990589 */
  std::
  vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
  ::~vector((vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
             *)(this + 0x274));
                    /* try { // try from 089905ae to 089905b2 has its CatchHandler @ 089905b5 */
  std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::~vector
            ((vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)(this + 0x268)
            );
                    /* try { // try from 089905da to 089905de has its CatchHandler @ 089905e1 */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x25c));
                    /* try { // try from 08990606 to 0899060a has its CatchHandler @ 0899060d */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x250));
                    /* try { // try from 08990632 to 08990636 has its CatchHandler @ 08990639 */
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::~vector((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
             *)(this + 0x244));
                    /* try { // try from 0899065e to 08990662 has its CatchHandler @ 08990665 */
  std::string::~string((string *)(this + 0x238));
                    /* try { // try from 0899068a to 0899068e has its CatchHandler @ 08990691 */
  std::string::~string((string *)(this + 0x234));
                    /* try { // try from 089906b6 to 089906ba has its CatchHandler @ 089906bd */
  std::string::~string((string *)(this + 0x230));
                    /* try { // try from 089906e2 to 089906e6 has its CatchHandler @ 089906e9 */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x224));
                    /* try { // try from 0899070e to 08990712 has its CatchHandler @ 08990715 */
  std::vector<StackableAction::UsableServerType,std::allocator<StackableAction::UsableServerType>>::
  ~vector((vector<StackableAction::UsableServerType,std::allocator<StackableAction::UsableServerType>>
           *)(this + 0x214));
                    /* try { // try from 0899073a to 0899073e has its CatchHandler @ 08990741 */
  std::vector<STPassiveObjectInStackable,std::allocator<STPassiveObjectInStackable>>::~vector
            ((vector<STPassiveObjectInStackable,std::allocator<STPassiveObjectInStackable>> *)
             (this + 0x208));
                    /* try { // try from 08990766 to 0899076a has its CatchHandler @ 0899076d */
  std::vector<StackableAction::UsablePlace,std::allocator<StackableAction::UsablePlace>>::~vector
            ((vector<StackableAction::UsablePlace,std::allocator<StackableAction::UsablePlace>> *)
             (this + 0x1f8));
                    /* try { // try from 08990792 to 08990796 has its CatchHandler @ 08990799 */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x1ec));
                    /* try { // try from 089907be to 089907c2 has its CatchHandler @ 089907c5 */
  std::string::~string((string *)(this + 0x1d8));
                    /* try { // try from 089907ea to 089907ee has its CatchHandler @ 089907f1 */
  std::vector<CRabbitBox,std::allocator<CRabbitBox>>::~vector
            ((vector<CRabbitBox,std::allocator<CRabbitBox>> *)(this + 0x19c));
                    /* try { // try from 08990816 to 0899081a has its CatchHandler @ 0899081d */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 400));
                    /* try { // try from 08990842 to 08990846 has its CatchHandler @ 08990849 */
  Arad_STStackableScript::~Arad_STStackableScript((Arad_STStackableScript *)(this + 0x178));
  STItemScript::~STItemScript((STItemScript *)this);
  return;
}

```

