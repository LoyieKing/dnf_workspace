# yaSSL__CertificateVerify

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## Build

```asm
// === 0874bbf0 yaSSL::CertificateVerify::Build  [0x0874bbf0-0x874beaf] ===
 874bbf0:	55                   	push   %ebp
 874bbf1:	89 e5                	mov    %esp,%ebp
 874bbf3:	57                   	push   %edi
 874bbf4:	56                   	push   %esi
 874bbf5:	53                   	push   %ebx
 874bbf6:	e8 fd 71 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874bbfb:	81 c3 9d 0f c2 00    	add    $0xc20f9d,%ebx
 874bc01:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 874bc07:	8b 7d 08             	mov    0x8(%ebp),%edi
 874bc0a:	8b 45 0c             	mov    0xc(%ebp),%eax
 874bc0d:	8d 77 08             	lea    0x8(%edi),%esi
 874bc10:	89 04 24             	mov    %eax,(%esp)
 874bc13:	89 74 24 04          	mov    %esi,0x4(%esp)
 874bc17:	e8 84 12 05 00       	call   879cea0 <_ZN5yaSSL16build_certHashesERNS_3SSLERNS_6HashesE>
 874bc1c:	8b 55 0c             	mov    0xc(%ebp),%edx
 874bc1f:	89 14 24             	mov    %edx,(%esp)
 874bc22:	e8 39 24 00 00       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 874bc27:	89 04 24             	mov    %eax,(%esp)
 874bc2a:	e8 61 2b 00 00       	call   874e790 <_ZNK5yaSSL6Crypto15get_certManagerEv>
 874bc2f:	89 04 24             	mov    %eax,(%esp)
 874bc32:	89 45 94             	mov    %eax,-0x6c(%ebp)
 874bc35:	e8 96 b8 04 00       	call   87974d0 <_ZNK5yaSSL11CertManager11get_keyTypeEv>
 874bc3a:	8b 55 94             	mov    -0x6c(%ebp),%edx
 874bc3d:	83 f8 01             	cmp    $0x1,%eax
 874bc40:	0f 84 62 01 00 00    	je     874bda8 <_ZN5yaSSL17CertificateVerify5BuildERNS_3SSLE+0x1b8>
 874bc46:	89 14 24             	mov    %edx,(%esp)
 874bc49:	89 55 94             	mov    %edx,-0x6c(%ebp)
 874bc4c:	e8 3f bb 04 00       	call   8797790 <_ZNK5yaSSL11CertManager20get_privateKeyLengthEv>
 874bc51:	8b 55 94             	mov    -0x6c(%ebp),%edx
 874bc54:	89 14 24             	mov    %edx,(%esp)
 874bc57:	89 c6                	mov    %eax,%esi
 874bc59:	e8 92 bb 04 00       	call   87977f0 <_ZNK5yaSSL11CertManager14get_privateKeyEv>
 874bc5e:	8d 55 dc             	lea    -0x24(%ebp),%edx
 874bc61:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 874bc68:	00 
 874bc69:	89 74 24 08          	mov    %esi,0x8(%esp)
 874bc6d:	89 55 a0             	mov    %edx,-0x60(%ebp)
 874bc70:	89 14 24             	mov    %edx,(%esp)
 874bc73:	89 44 24 04          	mov    %eax,0x4(%esp)
 874bc77:	e8 e4 f8 04 00       	call   879b560 <_ZN5yaSSL3DSSC1EPKhjb>
 874bc7c:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874bc81:	c7 04 24 30 00 00 00 	movl   $0x30,(%esp)
 874bc88:	e8 c3 66 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 874bc8d:	85 c0                	test   %eax,%eax
 874bc8f:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 874bc92:	0f 84 00 02 00 00    	je     874be98 <_ZN5yaSSL17CertificateVerify5BuildERNS_3SSLE+0x2a8>
 874bc98:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874bc9d:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 874bca4:	e8 47 4c 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874bca9:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 874bcac:	89 c2                	mov    %eax,%edx
 874bcae:	83 c2 02             	add    $0x2,%edx
 874bcb1:	89 45 98             	mov    %eax,-0x68(%ebp)
 874bcb4:	89 d6                	mov    %edx,%esi
 874bcb6:	89 55 9c             	mov    %edx,-0x64(%ebp)
 874bcb9:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 874bcbc:	89 44 24 04          	mov    %eax,0x4(%esp)
 874bcc0:	c7 04 24 2e 00 00 00 	movl   $0x2e,(%esp)
 874bcc7:	e8 04 21 00 00       	call   874ddd0 <_ZN5yaSSL6c16toaEtPh>
 874bccc:	8b 55 98             	mov    -0x68(%ebp),%edx
 874bccf:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 874bcd3:	66 89 02             	mov    %ax,(%edx)
 874bcd6:	8b 45 0c             	mov    0xc(%ebp),%eax
 874bcd9:	89 04 24             	mov    %eax,(%esp)
 874bcdc:	e8 7f 23 00 00       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 874bce1:	89 04 24             	mov    %eax,(%esp)
 874bce4:	e8 97 2a 00 00       	call   874e780 <_ZNK5yaSSL6Crypto10get_randomEv>
 874bce9:	8b 55 9c             	mov    -0x64(%ebp),%edx
 874bcec:	c7 44 24 0c 14 00 00 	movl   $0x14,0xc(%esp)
 874bcf3:	00 
 874bcf4:	89 54 24 04          	mov    %edx,0x4(%esp)
 874bcf8:	89 44 24 10          	mov    %eax,0x10(%esp)
 874bcfc:	8d 47 18             	lea    0x18(%edi),%eax
 874bcff:	89 44 24 08          	mov    %eax,0x8(%esp)
 874bd03:	8b 45 a0             	mov    -0x60(%ebp),%eax
 874bd06:	89 04 24             	mov    %eax,(%esp)
 874bd09:	e8 12 eb 04 00       	call   879a820 <_ZN5yaSSL3DSS4signEPhPKhjRKNS_10RandomPoolE>
 874bd0e:	8b 55 9c             	mov    -0x64(%ebp),%edx
 874bd11:	8d 45 ac             	lea    -0x54(%ebp),%eax
 874bd14:	89 44 24 04          	mov    %eax,0x4(%esp)
 874bd18:	89 14 24             	mov    %edx,(%esp)
 874bd1b:	e8 80 97 00 00       	call   87554a0 <_ZN8TaoCrypt19EncodeDSA_SignatureEPKhPh>
 874bd20:	8b 45 ac             	mov    -0x54(%ebp),%eax
 874bd23:	89 06                	mov    %eax,(%esi)
 874bd25:	8b 45 b0             	mov    -0x50(%ebp),%eax
 874bd28:	89 46 04             	mov    %eax,0x4(%esi)
 874bd2b:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 874bd2e:	89 46 08             	mov    %eax,0x8(%esi)
 874bd31:	8b 45 b8             	mov    -0x48(%ebp),%eax
 874bd34:	89 46 0c             	mov    %eax,0xc(%esi)
 874bd37:	8b 45 bc             	mov    -0x44(%ebp),%eax
 874bd3a:	89 46 10             	mov    %eax,0x10(%esi)
 874bd3d:	8b 45 c0             	mov    -0x40(%ebp),%eax
 874bd40:	89 46 14             	mov    %eax,0x14(%esi)
 874bd43:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 874bd46:	89 46 18             	mov    %eax,0x18(%esi)
 874bd49:	8b 45 c8             	mov    -0x38(%ebp),%eax
 874bd4c:	89 46 1c             	mov    %eax,0x1c(%esi)
 874bd4f:	8b 45 cc             	mov    -0x34(%ebp),%eax
 874bd52:	89 46 20             	mov    %eax,0x20(%esi)
 874bd55:	8b 45 d0             	mov    -0x30(%ebp),%eax
 874bd58:	89 46 24             	mov    %eax,0x24(%esi)
 874bd5b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 874bd5e:	89 46 28             	mov    %eax,0x28(%esi)
 874bd61:	0f b7 45 d8          	movzwl -0x28(%ebp),%eax
 874bd65:	66 89 46 2c          	mov    %ax,0x2c(%esi)
 874bd69:	8b 45 a0             	mov    -0x60(%ebp),%eax
 874bd6c:	89 04 24             	mov    %eax,(%esp)
 874bd6f:	e8 cc fc 04 00       	call   879ba40 <_ZN5yaSSL3DSSD1Ev>
 874bd74:	b8 30 00 00 00       	mov    $0x30,%eax
 874bd79:	89 44 24 04          	mov    %eax,0x4(%esp)
 874bd7d:	89 3c 24             	mov    %edi,(%esp)
 874bd80:	e8 2b ad ff ff       	call   8746ab0 <_ZN5yaSSL13HandShakeBase10set_lengthEi>
 874bd85:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 874bd88:	89 57 2c             	mov    %edx,0x2c(%edi)
 874bd8b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874bd90:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 874bd97:	e8 54 4b 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874bd9c:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 874bda2:	5b                   	pop    %ebx
 874bda3:	5e                   	pop    %esi
 874bda4:	5f                   	pop    %edi
 874bda5:	5d                   	pop    %ebp
 874bda6:	c3                   	ret
 874bda7:	90                   	nop
 874bda8:	89 14 24             	mov    %edx,(%esp)
 874bdab:	e8 e0 b9 04 00       	call   8797790 <_ZNK5yaSSL11CertManager20get_privateKeyLengthEv>
 874bdb0:	8b 55 94             	mov    -0x6c(%ebp),%edx
 874bdb3:	89 14 24             	mov    %edx,(%esp)
 874bdb6:	89 45 90             	mov    %eax,-0x70(%ebp)
 874bdb9:	e8 32 ba 04 00       	call   87977f0 <_ZNK5yaSSL11CertManager14get_privateKeyEv>
 874bdbe:	8b 4d 90             	mov    -0x70(%ebp),%ecx
 874bdc1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 874bdc8:	00 
 874bdc9:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 874bdcd:	89 44 24 04          	mov    %eax,0x4(%esp)
 874bdd1:	8d 45 ac             	lea    -0x54(%ebp),%eax
 874bdd4:	89 45 a0             	mov    %eax,-0x60(%ebp)
 874bdd7:	89 04 24             	mov    %eax,(%esp)
 874bdda:	e8 81 f4 04 00       	call   879b260 <_ZN5yaSSL3RSAC1EPKhjb>
 874bddf:	8b 55 a0             	mov    -0x60(%ebp),%edx
 874bde2:	89 14 24             	mov    %edx,(%esp)
 874bde5:	e8 66 d0 04 00       	call   8798e50 <_ZNK5yaSSL3RSA16get_cipherLengthEv>
 874bdea:	66 89 45 9c          	mov    %ax,-0x64(%ebp)
 874bdee:	83 c0 02             	add    $0x2,%eax
 874bdf1:	0f b7 c0             	movzwl %ax,%eax
 874bdf4:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874bdf9:	89 45 98             	mov    %eax,-0x68(%ebp)
 874bdfc:	89 04 24             	mov    %eax,(%esp)
 874bdff:	e8 4c 65 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 874be04:	31 d2                	xor    %edx,%edx
 874be06:	b9 02 00 00 00       	mov    $0x2,%ecx
 874be0b:	85 c0                	test   %eax,%eax
 874be0d:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 874be10:	74 19                	je     874be2b <_ZN5yaSSL17CertificateVerify5BuildERNS_3SSLE+0x23b>
 874be12:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874be17:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 874be1e:	e8 cd 4a 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874be23:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 874be26:	89 d1                	mov    %edx,%ecx
 874be28:	83 c1 02             	add    $0x2,%ecx
 874be2b:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 874be2e:	89 44 24 04          	mov    %eax,0x4(%esp)
 874be32:	0f b7 45 9c          	movzwl -0x64(%ebp),%eax
 874be36:	89 4d 90             	mov    %ecx,-0x70(%ebp)
 874be39:	89 55 94             	mov    %edx,-0x6c(%ebp)
 874be3c:	89 04 24             	mov    %eax,(%esp)
 874be3f:	e8 8c 1f 00 00       	call   874ddd0 <_ZN5yaSSL6c16toaEtPh>
 874be44:	8b 55 94             	mov    -0x6c(%ebp),%edx
 874be47:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 874be4b:	66 89 02             	mov    %ax,(%edx)
 874be4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 874be51:	89 04 24             	mov    %eax,(%esp)
 874be54:	e8 07 22 00 00       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 874be59:	89 04 24             	mov    %eax,(%esp)
 874be5c:	e8 1f 29 00 00       	call   874e780 <_ZNK5yaSSL6Crypto10get_randomEv>
 874be61:	8b 4d 90             	mov    -0x70(%ebp),%ecx
 874be64:	8b 55 a0             	mov    -0x60(%ebp),%edx
 874be67:	c7 44 24 0c 24 00 00 	movl   $0x24,0xc(%esp)
 874be6e:	00 
 874be6f:	89 74 24 08          	mov    %esi,0x8(%esp)
 874be73:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 874be77:	89 14 24             	mov    %edx,(%esp)
 874be7a:	89 44 24 10          	mov    %eax,0x10(%esp)
 874be7e:	e8 3d f1 04 00       	call   879afc0 <_ZN5yaSSL3RSA4signEPhPKhjRKNS_10RandomPoolE>
 874be83:	8b 45 a0             	mov    -0x60(%ebp),%eax
 874be86:	89 04 24             	mov    %eax,(%esp)
 874be89:	e8 f2 f4 04 00       	call   879b380 <_ZN5yaSSL3RSAD1Ev>
 874be8e:	8b 45 98             	mov    -0x68(%ebp),%eax
 874be91:	e9 e3 fe ff ff       	jmp    874bd79 <_ZN5yaSSL17CertificateVerify5BuildERNS_3SSLE+0x189>
 874be96:	66 90                	xchg   %ax,%ax
 874be98:	be 02 00 00 00       	mov    $0x2,%esi
 874be9d:	c7 45 9c 02 00 00 00 	movl   $0x2,-0x64(%ebp)
 874bea4:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
 874beab:	e9 09 fe ff ff       	jmp    874bcb9 <_ZN5yaSSL17CertificateVerify5BuildERNS_3SSLE+0xc9>

```

```c
// yaSSL::CertificateVerify::Build @ 0x874bbf0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertificateVerify::Build(yaSSL::SSL&) */

void __thiscall yaSSL::CertificateVerify::Build(CertificateVerify *this,SSL *param_1)

{
  ushort uVar1;
  Crypto *pCVar2;
  CertManager *this_00;
  int iVar3;
  uint uVar4;
  uchar *puVar5;
  RandomPool *pRVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined2 *local_6c;
  uchar *local_68;
  undefined2 *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  DSS local_28 [10];
  undefined2 local_1e [5];
  undefined4 uStack_14;
  
  uStack_14 = 0x874bbfb;
  build_certHashes(param_1,(Hashes *)(this + 8));
  pCVar2 = (Crypto *)SSL::getCrypto(param_1);
  this_00 = (CertManager *)Crypto::get_certManager(pCVar2);
  iVar3 = CertManager::get_keyType(this_00);
  if (iVar3 == 1) {
    uVar4 = CertManager::get_privateKeyLength(this_00);
    puVar5 = (uchar *)CertManager::get_privateKey(this_00);
    RSA::RSA((RSA *)&local_58,puVar5,uVar4,false);
    uVar1 = RSA::get_cipherLength((RSA *)&local_58);
    uVar4 = (uint)(ushort)(uVar1 + 2);
    uVar8 = (uint)puVar5 & 0xffffff00;
    local_60 = operator_new__(uVar4,uVar8);
    puVar5 = (uchar *)0x2;
    puVar7 = (undefined2 *)0x0;
    if (local_60 != (undefined2 *)0x0) {
      operator_delete__(0,uVar8 & 0xffffff00);
      puVar5 = (uchar *)(local_60 + 1);
      puVar7 = local_60;
    }
    c16toa(uVar1,(uchar *)local_1e);
    *puVar7 = local_1e[0];
    pCVar2 = (Crypto *)SSL::getCrypto(param_1);
    pRVar6 = (RandomPool *)Crypto::get_random(pCVar2);
    RSA::sign((RSA *)&local_58,puVar5,(uchar *)(this + 8),0x24,pRVar6);
    RSA::~RSA((RSA *)&local_58);
  }
  else {
    uVar4 = CertManager::get_privateKeyLength(this_00);
    puVar5 = (uchar *)CertManager::get_privateKey(this_00);
    DSS::DSS(local_28,puVar5,uVar4,false);
    uVar4 = (uint)puVar5 & 0xffffff00;
    local_60 = operator_new__(0x30,uVar4);
    if (local_60 == (undefined2 *)0x0) {
      local_68 = (uchar *)0x2;
      local_6c = (undefined2 *)0x0;
    }
    else {
      operator_delete__(0,uVar4 & 0xffffff00);
      local_68 = (uchar *)(local_60 + 1);
      local_6c = local_60;
    }
    c16toa(0x2e,(uchar *)local_1e);
    *local_6c = local_1e[0];
    pCVar2 = (Crypto *)SSL::getCrypto(param_1);
    pRVar6 = (RandomPool *)Crypto::get_random(pCVar2);
    DSS::sign(local_28,local_68,(uchar *)(this + 0x18),0x14,pRVar6);
    TaoCrypt::EncodeDSA_Signature(local_68,(uchar *)&local_58);
    *(undefined4 *)local_68 = local_58;
    *(undefined4 *)(local_68 + 4) = local_54;
    *(undefined4 *)(local_68 + 8) = local_50;
    *(undefined4 *)(local_68 + 0xc) = local_4c;
    *(undefined4 *)(local_68 + 0x10) = local_48;
    *(undefined4 *)(local_68 + 0x14) = local_44;
    *(undefined4 *)(local_68 + 0x18) = local_40;
    *(undefined4 *)(local_68 + 0x1c) = local_3c;
    *(undefined4 *)(local_68 + 0x20) = local_38;
    *(undefined4 *)(local_68 + 0x24) = local_34;
    *(undefined4 *)(local_68 + 0x28) = local_30;
    *(undefined2 *)(local_68 + 0x2c) = local_2c;
    DSS::~DSS(local_28);
    uVar4 = 0x30;
  }
  HandShakeBase::set_length((HandShakeBase *)this,uVar4);
  *(undefined2 **)(this + 0x2c) = local_60;
  operator_delete__(0,uVar4 & 0xffffff00);
  return;
}

```

---

## CertificateVerify

```asm
// === 08747070 yaSSL::CertificateVerify::CertificateVerify  [0x08747070-0x874709f] ===
 8747070:	e8 4f d5 fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8747075:	81 c1 23 5b c2 00    	add    $0xc25b23,%ecx
 874707b:	55                   	push   %ebp
 874707c:	89 e5                	mov    %esp,%ebp
 874707e:	8b 45 08             	mov    0x8(%ebp),%eax
 8747081:	8b 91 74 fa ff ff    	mov    -0x58c(%ecx),%edx
 8747087:	c7 40 2c 00 00 00 00 	movl   $0x0,0x2c(%eax)
 874708e:	83 c2 08             	add    $0x8,%edx
 8747091:	89 10                	mov    %edx,(%eax)
 8747093:	5d                   	pop    %ebp
 8747094:	c3                   	ret
 8747095:	90                   	nop
 8747096:	8d 76 00             	lea    0x0(%esi),%esi
 8747099:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::CertificateVerify::CertificateVerify @ 0x8747070

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* yaSSL::CertificateVerify::CertificateVerify() */

void __thiscall yaSSL::CertificateVerify::CertificateVerify(CertificateVerify *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0936c60c;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined **)this = puVar1 + 8;
  return;
}

```

---

## Process

```asm
// === 08748720 yaSSL::CertificateVerify::Process  [0x08748720-0x87488bf] ===
 8748720:	55                   	push   %ebp
 8748721:	89 e5                	mov    %esp,%ebp
 8748723:	57                   	push   %edi
 8748724:	56                   	push   %esi
 8748725:	53                   	push   %ebx
 8748726:	e8 cd a6 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874872b:	81 c3 6d 44 c2 00    	add    $0xc2446d,%ebx
 8748731:	83 ec 6c             	sub    $0x6c,%esp
 8748734:	8b 45 10             	mov    0x10(%ebp),%eax
 8748737:	8b 7d 08             	mov    0x8(%ebp),%edi
 874873a:	89 04 24             	mov    %eax,(%esp)
 874873d:	e8 4e 59 00 00       	call   874e090 <_ZNK5yaSSL3SSL9getHashesEv>
 8748742:	89 04 24             	mov    %eax,(%esp)
 8748745:	e8 16 61 00 00       	call   874e860 <_ZNK5yaSSL9sslHashes14get_certVerifyEv>
 874874a:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 874874d:	8b 45 10             	mov    0x10(%ebp),%eax
 8748750:	89 04 24             	mov    %eax,(%esp)
 8748753:	e8 08 59 00 00       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 8748758:	89 04 24             	mov    %eax,(%esp)
 874875b:	e8 30 60 00 00       	call   874e790 <_ZNK5yaSSL6Crypto15get_certManagerEv>
 8748760:	89 c6                	mov    %eax,%esi
 8748762:	89 04 24             	mov    %eax,(%esp)
 8748765:	e8 56 ed 04 00       	call   87974c0 <_ZNK5yaSSL11CertManager15get_peerKeyTypeEv>
 874876a:	83 f8 01             	cmp    $0x1,%eax
 874876d:	0f 84 9d 00 00 00    	je     8748810 <_ZN5yaSSL17CertificateVerify7ProcessERNS_12input_bufferERNS_3SSLE+0xf0>
 8748773:	89 3c 24             	mov    %edi,(%esp)
 8748776:	e8 25 e3 ff ff       	call   8746aa0 <_ZNK5yaSSL13HandShakeBase10get_lengthEv>
 874877b:	8d 55 b8             	lea    -0x48(%ebp),%edx
 874877e:	89 55 b0             	mov    %edx,-0x50(%ebp)
 8748781:	89 44 24 08          	mov    %eax,0x8(%esp)
 8748785:	8b 47 2c             	mov    0x2c(%edi),%eax
 8748788:	89 14 24             	mov    %edx,(%esp)
 874878b:	89 44 24 04          	mov    %eax,0x4(%esp)
 874878f:	e8 8c c9 00 00       	call   8755120 <_ZN8TaoCrypt19DecodeDSA_SignatureEPhPKhj>
 8748794:	89 34 24             	mov    %esi,(%esp)
 8748797:	e8 24 f0 04 00       	call   87977c0 <_ZNK5yaSSL11CertManager17get_peerKeyLengthEv>
 874879c:	89 34 24             	mov    %esi,(%esp)
 874879f:	8d 75 e0             	lea    -0x20(%ebp),%esi
 87487a2:	89 45 ac             	mov    %eax,-0x54(%ebp)
 87487a5:	e8 76 f0 04 00       	call   8797820 <_ZNK5yaSSL11CertManager11get_peerKeyEv>
 87487aa:	8b 4d ac             	mov    -0x54(%ebp),%ecx
 87487ad:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 87487b4:	00 
 87487b5:	89 34 24             	mov    %esi,(%esp)
 87487b8:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87487bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 87487c0:	e8 9b 2d 05 00       	call   879b560 <_ZN5yaSSL3DSSC1EPKhjb>
 87487c5:	89 3c 24             	mov    %edi,(%esp)
 87487c8:	e8 d3 e2 ff ff       	call   8746aa0 <_ZNK5yaSSL13HandShakeBase10get_lengthEv>
 87487cd:	8b 55 b0             	mov    -0x50(%ebp),%edx
 87487d0:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 87487d7:	00 
 87487d8:	89 34 24             	mov    %esi,(%esp)
 87487db:	89 54 24 0c          	mov    %edx,0xc(%esp)
 87487df:	89 44 24 10          	mov    %eax,0x10(%esp)
 87487e3:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 87487e6:	83 c0 10             	add    $0x10,%eax
 87487e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 87487ed:	e8 de 20 05 00       	call   879a8d0 <_ZN5yaSSL3DSS6verifyEPKhjS2_j>
 87487f2:	84 c0                	test   %al,%al
 87487f4:	0f 84 86 00 00 00    	je     8748880 <_ZN5yaSSL17CertificateVerify7ProcessERNS_12input_bufferERNS_3SSLE+0x160>
 87487fa:	89 34 24             	mov    %esi,(%esp)
 87487fd:	e8 3e 32 05 00       	call   879ba40 <_ZN5yaSSL3DSSD1Ev>
 8748802:	83 c4 6c             	add    $0x6c,%esp
 8748805:	5b                   	pop    %ebx
 8748806:	5e                   	pop    %esi
 8748807:	5f                   	pop    %edi
 8748808:	5d                   	pop    %ebp
 8748809:	c3                   	ret
 874880a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8748810:	89 34 24             	mov    %esi,(%esp)
 8748813:	e8 a8 ef 04 00       	call   87977c0 <_ZNK5yaSSL11CertManager17get_peerKeyLengthEv>
 8748818:	89 34 24             	mov    %esi,(%esp)
 874881b:	8d 75 b8             	lea    -0x48(%ebp),%esi
 874881e:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8748821:	e8 fa ef 04 00       	call   8797820 <_ZNK5yaSSL11CertManager11get_peerKeyEv>
 8748826:	8b 55 b0             	mov    -0x50(%ebp),%edx
 8748829:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8748830:	00 
 8748831:	89 34 24             	mov    %esi,(%esp)
 8748834:	89 54 24 08          	mov    %edx,0x8(%esp)
 8748838:	89 44 24 04          	mov    %eax,0x4(%esp)
 874883c:	e8 1f 2a 05 00       	call   879b260 <_ZN5yaSSL3RSAC1EPKhjb>
 8748841:	89 3c 24             	mov    %edi,(%esp)
 8748844:	e8 57 e2 ff ff       	call   8746aa0 <_ZNK5yaSSL13HandShakeBase10get_lengthEv>
 8748849:	89 44 24 10          	mov    %eax,0x10(%esp)
 874884d:	8b 47 2c             	mov    0x2c(%edi),%eax
 8748850:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 8748857:	00 
 8748858:	89 34 24             	mov    %esi,(%esp)
 874885b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 874885f:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8748862:	89 44 24 04          	mov    %eax,0x4(%esp)
 8748866:	e8 65 1f 05 00       	call   879a7d0 <_ZN5yaSSL3RSA6verifyEPKhjS2_j>
 874886b:	84 c0                	test   %al,%al
 874886d:	74 29                	je     8748898 <_ZN5yaSSL17CertificateVerify7ProcessERNS_12input_bufferERNS_3SSLE+0x178>
 874886f:	89 34 24             	mov    %esi,(%esp)
 8748872:	e8 09 2b 05 00       	call   879b380 <_ZN5yaSSL3RSAD1Ev>
 8748877:	83 c4 6c             	add    $0x6c,%esp
 874887a:	5b                   	pop    %ebx
 874887b:	5e                   	pop    %esi
 874887c:	5f                   	pop    %edi
 874887d:	5d                   	pop    %ebp
 874887e:	c3                   	ret
 874887f:	90                   	nop
 8748880:	8b 45 10             	mov    0x10(%ebp),%eax
 8748883:	c7 44 24 04 70 00 00 	movl   $0x70,0x4(%esp)
 874888a:	00 
 874888b:	89 04 24             	mov    %eax,(%esp)
 874888e:	e8 3d 57 00 00       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 8748893:	e9 62 ff ff ff       	jmp    87487fa <_ZN5yaSSL17CertificateVerify7ProcessERNS_12input_bufferERNS_3SSLE+0xda>
 8748898:	8b 45 10             	mov    0x10(%ebp),%eax
 874889b:	c7 44 24 04 70 00 00 	movl   $0x70,0x4(%esp)
 87488a2:	00 
 87488a3:	89 04 24             	mov    %eax,(%esp)
 87488a6:	e8 25 57 00 00       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 87488ab:	89 34 24             	mov    %esi,(%esp)
 87488ae:	e8 cd 2a 05 00       	call   879b380 <_ZN5yaSSL3RSAD1Ev>
 87488b3:	eb c2                	jmp    8748877 <_ZN5yaSSL17CertificateVerify7ProcessERNS_12input_bufferERNS_3SSLE+0x157>
 87488b5:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87488b9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::CertificateVerify::Process @ 0x8748720

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertificateVerify::Process(yaSSL::input_buffer&, yaSSL::SSL&) */

void __thiscall
yaSSL::CertificateVerify::Process(CertificateVerify *this,input_buffer *param_1,SSL *param_2)

{
  char cVar1;
  sslHashes *this_00;
  uint uVar2;
  Crypto *this_01;
  CertManager *this_02;
  int iVar3;
  uint uVar4;
  uchar *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  RSA *pRVar8;
  RSA local_4c [40];
  DSS local_24 [16];
  undefined4 uStack_14;
  
  uStack_14 = 0x874872b;
  this_00 = (sslHashes *)SSL::getHashes(param_2);
  uVar2 = sslHashes::get_certVerify(this_00);
  this_01 = (Crypto *)SSL::getCrypto(param_2);
  this_02 = (CertManager *)Crypto::get_certManager(this_01);
  iVar3 = CertManager::get_peerKeyType(this_02);
  if (iVar3 != 1) {
    uVar4 = HandShakeBase::get_length((HandShakeBase *)this);
    pRVar8 = local_4c;
    TaoCrypt::DecodeDSA_Signature((uchar *)pRVar8,*(uchar **)(this + 0x2c),uVar4);
    uVar4 = CertManager::get_peerKeyLength(this_02);
    puVar5 = (uchar *)CertManager::get_peerKey(this_02);
    DSS::DSS(local_24,puVar5,uVar4,true);
    uVar6 = HandShakeBase::get_length((HandShakeBase *)this);
    uVar7 = 0x14;
    cVar1 = DSS::verify((uchar *)local_24,uVar2 + 0x10,(uchar *)0x14,(uint)pRVar8);
    if (cVar1 == '\0') {
      SSL::SetError(param_2,0x70,uVar7,pRVar8,uVar6);
    }
    DSS::~DSS(local_24);
    return;
  }
  uVar4 = CertManager::get_peerKeyLength(this_02);
  puVar5 = (uchar *)CertManager::get_peerKey(this_02);
  RSA::RSA(local_4c,puVar5,uVar4,true);
  uVar6 = HandShakeBase::get_length((HandShakeBase *)this);
  uVar4 = *(uint *)(this + 0x2c);
  uVar7 = 0x24;
  cVar1 = RSA::verify((uchar *)local_4c,uVar2,(uchar *)0x24,uVar4);
  if (cVar1 == '\0') {
    SSL::SetError(param_2,0x70,uVar7,uVar4,uVar6);
    RSA::~RSA(local_4c);
  }
  else {
    RSA::~RSA(local_4c);
  }
  return;
}

```

---

## get

```asm
// === 087484d0 yaSSL::CertificateVerify::get  [0x087484d0-0x87484ff] ===
 87484d0:	55                   	push   %ebp
 87484d1:	89 e5                	mov    %esp,%ebp
 87484d3:	53                   	push   %ebx
 87484d4:	83 ec 14             	sub    $0x14,%esp
 87484d7:	8b 45 08             	mov    0x8(%ebp),%eax
 87484da:	e8 19 a9 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87484df:	81 c3 b9 46 c2 00    	add    $0xc246b9,%ebx
 87484e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 87484e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 87484ec:	89 04 24             	mov    %eax,(%esp)
 87484ef:	e8 8c ff ff ff       	call   8748480 <_ZN5yaSSLlsERNS_13output_bufferERKNS_17CertificateVerifyE>
 87484f4:	83 c4 14             	add    $0x14,%esp
 87484f7:	5b                   	pop    %ebx
 87484f8:	5d                   	pop    %ebp
 87484f9:	c3                   	ret
 87484fa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::CertificateVerify::get @ 0x87484d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertificateVerify::get(yaSSL::output_buffer&) const */

void __thiscall yaSSL::CertificateVerify::get(CertificateVerify *this,output_buffer *param_1)

{
  yaSSL::operator<<(param_1,this);
  return;
}

```

---

## get_type

```asm
// === 087470a0 yaSSL::CertificateVerify::get_type  [0x087470a0-0x87470af] ===
 87470a0:	55                   	push   %ebp
 87470a1:	b8 0f 00 00 00       	mov    $0xf,%eax
 87470a6:	89 e5                	mov    %esp,%ebp
 87470a8:	5d                   	pop    %ebp
 87470a9:	c3                   	ret
 87470aa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::CertificateVerify::get_type @ 0x87470a0

/* yaSSL::CertificateVerify::get_type() const */

undefined4 yaSSL::CertificateVerify::get_type(void)

{
  return 0xf;
}

```

---

## set

```asm
// === 08748960 yaSSL::CertificateVerify::set  [0x08748960-0x874898f] ===
 8748960:	55                   	push   %ebp
 8748961:	89 e5                	mov    %esp,%ebp
 8748963:	53                   	push   %ebx
 8748964:	83 ec 14             	sub    $0x14,%esp
 8748967:	8b 45 08             	mov    0x8(%ebp),%eax
 874896a:	e8 89 a4 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874896f:	81 c3 29 42 c2 00    	add    $0xc24229,%ebx
 8748975:	89 44 24 04          	mov    %eax,0x4(%esp)
 8748979:	8b 45 0c             	mov    0xc(%ebp),%eax
 874897c:	89 04 24             	mov    %eax,(%esp)
 874897f:	e8 3c ff ff ff       	call   87488c0 <_ZN5yaSSLrsERNS_12input_bufferERNS_17CertificateVerifyE>
 8748984:	83 c4 14             	add    $0x14,%esp
 8748987:	5b                   	pop    %ebx
 8748988:	5d                   	pop    %ebp
 8748989:	c3                   	ret
 874898a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::CertificateVerify::set @ 0x8748960

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertificateVerify::set(yaSSL::input_buffer&) */

void __thiscall yaSSL::CertificateVerify::set(CertificateVerify *this,input_buffer *param_1)

{
  yaSSL::operator>>(param_1,this);
  return;
}

```

---

## ~CertificateVerify

```asm
// === 0874b8c0 yaSSL::CertificateVerify::~CertificateVerify  [0x0874b8c0-0x874b90f] ===
 874b8c0:	55                   	push   %ebp
 874b8c1:	89 e5                	mov    %esp,%ebp
 874b8c3:	83 ec 18             	sub    $0x18,%esp
 874b8c6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 874b8c9:	e8 2a 75 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874b8ce:	81 c3 ca 12 c2 00    	add    $0xc212ca,%ebx
 874b8d4:	89 75 fc             	mov    %esi,-0x4(%ebp)
 874b8d7:	8b 75 08             	mov    0x8(%ebp),%esi
 874b8da:	8b 83 74 fa ff ff    	mov    -0x58c(%ebx),%eax
 874b8e0:	83 c0 08             	add    $0x8,%eax
 874b8e3:	89 06                	mov    %eax,(%esi)
 874b8e5:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874b8ea:	8b 46 2c             	mov    0x2c(%esi),%eax
 874b8ed:	89 04 24             	mov    %eax,(%esp)
 874b8f0:	e8 fb 4f 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874b8f5:	8b 83 4c fa ff ff    	mov    -0x5b4(%ebx),%eax
 874b8fb:	83 c0 08             	add    $0x8,%eax
 874b8fe:	89 06                	mov    %eax,(%esi)
 874b900:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 874b903:	8b 75 fc             	mov    -0x4(%ebp),%esi
 874b906:	89 ec                	mov    %ebp,%esp
 874b908:	5d                   	pop    %ebp
 874b909:	c3                   	ret
 874b90a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::CertificateVerify::~CertificateVerify @ 0x874b8c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertificateVerify::~CertificateVerify() */

void __thiscall yaSSL::CertificateVerify::~CertificateVerify(CertificateVerify *this)

{
  *(undefined **)this = PTR_vtable_0936c60c + 8;
  operator_delete__(*(undefined4 *)(this + 0x2c),0);
  *(undefined **)this = PTR_vtable_0936c5e4 + 8;
  return;
}

```

---

## ~CertificateVerify_0874b910

```asm
// === 0874b910 yaSSL::CertificateVerify::~CertificateVerify  [0x0874b910-0x874b93f] ===
 874b910:	55                   	push   %ebp
 874b911:	89 e5                	mov    %esp,%ebp
 874b913:	53                   	push   %ebx
 874b914:	e8 df 74 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874b919:	81 c3 7f 12 c2 00    	add    $0xc2127f,%ebx
 874b91f:	83 ec 14             	sub    $0x14,%esp
 874b922:	8b 45 08             	mov    0x8(%ebp),%eax
 874b925:	89 04 24             	mov    %eax,(%esp)
 874b928:	e8 93 ff ff ff       	call   874b8c0 <_ZN5yaSSL17CertificateVerifyD1Ev>
 874b92d:	83 c4 14             	add    $0x14,%esp
 874b930:	5b                   	pop    %ebx
 874b931:	5d                   	pop    %ebp
 874b932:	c3                   	ret
 874b933:	90                   	nop
 874b934:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874b93a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::CertificateVerify::~CertificateVerify @ 0x874b910

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertificateVerify::~CertificateVerify() */

void __thiscall yaSSL::CertificateVerify::~CertificateVerify(CertificateVerify *this)

{
  ~CertificateVerify(this);
  return;
}

```

