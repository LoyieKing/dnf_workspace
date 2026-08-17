# yaSSL__Alert

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## Alert

```asm
// === 08746b90 yaSSL::Alert::Alert  [0x08746b90-0x8746bbf] ===
 8746b90:	e8 2f da fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8746b95:	81 c1 03 60 c2 00    	add    $0xc26003,%ecx
 8746b9b:	55                   	push   %ebp
 8746b9c:	89 e5                	mov    %esp,%ebp
 8746b9e:	8b 45 08             	mov    0x8(%ebp),%eax
 8746ba1:	8b 91 20 fd ff ff    	mov    -0x2e0(%ecx),%edx
 8746ba7:	83 c2 08             	add    $0x8,%edx
 8746baa:	89 10                	mov    %edx,(%eax)
 8746bac:	8b 55 0c             	mov    0xc(%ebp),%edx
 8746baf:	89 50 04             	mov    %edx,0x4(%eax)
 8746bb2:	8b 55 10             	mov    0x10(%ebp),%edx
 8746bb5:	89 50 08             	mov    %edx,0x8(%eax)
 8746bb8:	5d                   	pop    %ebp
 8746bb9:	c3                   	ret
 8746bba:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::Alert::Alert @ 0x8746b90

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* yaSSL::Alert::Alert(yaSSL::AlertLevel, yaSSL::AlertDescription) */

void __thiscall yaSSL::Alert::Alert(Alert *this,undefined4 param_2,undefined4 param_3)

{
  *(undefined **)this = PTR_vtable_0936c8b8 + 8;
  *(undefined4 *)(this + 4) = param_2;
  *(undefined4 *)(this + 8) = param_3;
  return;
}

```

---

## Process

```asm
// === 08749e40 yaSSL::Alert::Process  [0x08749e40-0x874a09f] ===
 8749e40:	55                   	push   %ebp
 8749e41:	89 e5                	mov    %esp,%ebp
 8749e43:	83 ec 78             	sub    $0x78,%esp
 8749e46:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8749e49:	8b 45 10             	mov    0x10(%ebp),%eax
 8749e4c:	e8 a7 8f fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8749e51:	81 c3 47 2d c2 00    	add    $0xc22d47,%ebx
 8749e57:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8749e5a:	8b 75 0c             	mov    0xc(%ebp),%esi
 8749e5d:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8749e60:	89 04 24             	mov    %eax,(%esp)
 8749e63:	e8 08 42 00 00       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 8749e68:	89 04 24             	mov    %eax,(%esp)
 8749e6b:	e8 e0 4b 00 00       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 8749e70:	80 78 28 00          	cmpb   $0x0,0x28(%eax)
 8749e74:	74 1a                	je     8749e90 <_ZN5yaSSL5Alert7ProcessERNS_12input_bufferERNS_3SSLE+0x50>
 8749e76:	8b 45 08             	mov    0x8(%ebp),%eax
 8749e79:	83 78 04 02          	cmpl   $0x2,0x4(%eax)
 8749e7d:	0f 84 35 01 00 00    	je     8749fb8 <_ZN5yaSSL5Alert7ProcessERNS_12input_bufferERNS_3SSLE+0x178>
 8749e83:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8749e86:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8749e89:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8749e8c:	89 ec                	mov    %ebp,%esp
 8749e8e:	5d                   	pop    %ebp
 8749e8f:	c3                   	ret
 8749e90:	8b 55 08             	mov    0x8(%ebp),%edx
 8749e93:	8b 02                	mov    (%edx),%eax
 8749e95:	89 14 24             	mov    %edx,(%esp)
 8749e98:	ff 50 10             	call   *0x10(%eax)
 8749e9b:	89 34 24             	mov    %esi,(%esp)
 8749e9e:	0f b7 c0             	movzwl %ax,%eax
 8749ea1:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8749ea4:	e8 87 ce 04 00       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 8749ea9:	89 34 24             	mov    %esi,(%esp)
 8749eac:	89 c7                	mov    %eax,%edi
 8749eae:	e8 ed ce 04 00       	call   8796da0 <_ZNK5yaSSL12input_buffer11get_currentEv>
 8749eb3:	2b 45 b0             	sub    -0x50(%ebp),%eax
 8749eb6:	01 c7                	add    %eax,%edi
 8749eb8:	8b 45 10             	mov    0x10(%ebp),%eax
 8749ebb:	89 04 24             	mov    %eax,(%esp)
 8749ebe:	e8 dd 4a 00 00       	call   874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>
 8749ec3:	84 c0                	test   %al,%al
 8749ec5:	0f 85 b5 00 00 00    	jne    8749f80 <_ZN5yaSSL5Alert7ProcessERNS_12input_bufferERNS_3SSLE+0x140>
 8749ecb:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8749ece:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 8749ed1:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8749ed8:	00 
 8749ed9:	c7 44 24 10 15 00 00 	movl   $0x15,0x10(%esp)
 8749ee0:	00 
 8749ee1:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8749ee5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8749ee9:	8b 45 10             	mov    0x10(%ebp),%eax
 8749eec:	89 55 ac             	mov    %edx,-0x54(%ebp)
 8749eef:	89 54 24 04          	mov    %edx,0x4(%esp)
 8749ef3:	89 04 24             	mov    %eax,(%esp)
 8749ef6:	e8 d5 36 05 00       	call   879d5d0 <_ZN5yaSSL4hmacERNS_3SSLEPhPKhjNS_11ContentTypeEb>
 8749efb:	8b 55 10             	mov    0x10(%ebp),%edx
 8749efe:	89 14 24             	mov    %edx,(%esp)
 8749f01:	e8 5a 41 00 00       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 8749f06:	89 04 24             	mov    %eax,(%esp)
 8749f09:	e8 42 48 00 00       	call   874e750 <_ZNK5yaSSL6Crypto10get_digestEv>
 8749f0e:	8b 10                	mov    (%eax),%edx
 8749f10:	89 04 24             	mov    %eax,(%esp)
 8749f13:	ff 52 0c             	call   *0xc(%edx)
 8749f16:	89 34 24             	mov    %esi,(%esp)
 8749f19:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8749f1c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8749f20:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8749f23:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8749f26:	89 44 24 04          	mov    %eax,0x4(%esp)
 8749f2a:	e8 11 d1 04 00       	call   8797040 <_ZN5yaSSL12input_buffer4readEPhj>
 8749f2f:	8b 55 10             	mov    0x10(%ebp),%edx
 8749f32:	89 14 24             	mov    %edx,(%esp)
 8749f35:	e8 36 41 00 00       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 8749f3a:	89 04 24             	mov    %eax,(%esp)
 8749f3d:	e8 0e 4b 00 00       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 8749f42:	83 78 08 01          	cmpl   $0x1,0x8(%eax)
 8749f46:	0f 84 c4 00 00 00    	je     874a010 <_ZN5yaSSL5Alert7ProcessERNS_12input_bufferERNS_3SSLE+0x1d0>
 8749f4c:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8749f4f:	8b 75 a8             	mov    -0x58(%ebp),%esi
 8749f52:	8b 7d ac             	mov    -0x54(%ebp),%edi
 8749f55:	39 c0                	cmp    %eax,%eax
 8749f57:	89 c1                	mov    %eax,%ecx
 8749f59:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 8749f5b:	0f 84 15 ff ff ff    	je     8749e76 <_ZN5yaSSL5Alert7ProcessERNS_12input_bufferERNS_3SSLE+0x36>
 8749f61:	8b 55 10             	mov    0x10(%ebp),%edx
 8749f64:	c7 44 24 04 70 00 00 	movl   $0x70,0x4(%esp)
 8749f6b:	00 
 8749f6c:	89 14 24             	mov    %edx,(%esp)
 8749f6f:	e8 5c 40 00 00       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 8749f74:	e9 0a ff ff ff       	jmp    8749e83 <_ZN5yaSSL5Alert7ProcessERNS_12input_bufferERNS_3SSLE+0x43>
 8749f79:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8749f80:	8b 55 b0             	mov    -0x50(%ebp),%edx
 8749f83:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8749f86:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8749f8d:	00 
 8749f8e:	c7 44 24 10 15 00 00 	movl   $0x15,0x10(%esp)
 8749f95:	00 
 8749f96:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8749f9a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8749f9e:	8b 55 10             	mov    0x10(%ebp),%edx
 8749fa1:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8749fa4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8749fa8:	89 14 24             	mov    %edx,(%esp)
 8749fab:	e8 c0 53 05 00       	call   879f370 <_ZN5yaSSL8TLS_hmacERNS_3SSLEPhPKhjNS_11ContentTypeEb>
 8749fb0:	e9 46 ff ff ff       	jmp    8749efb <_ZN5yaSSL5Alert7ProcessERNS_12input_bufferERNS_3SSLE+0xbb>
 8749fb5:	8d 76 00             	lea    0x0(%esi),%esi
 8749fb8:	8b 55 10             	mov    0x10(%ebp),%edx
 8749fbb:	89 14 24             	mov    %edx,(%esp)
 8749fbe:	e8 0d 43 00 00       	call   874e2d0 <_ZN5yaSSL3SSL9useStatesEv>
 8749fc3:	89 04 24             	mov    %eax,(%esp)
 8749fc6:	e8 35 3f 00 00       	call   874df00 <_ZN5yaSSL6States9useRecordEv>
 8749fcb:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8749fd1:	8b 45 10             	mov    0x10(%ebp),%eax
 8749fd4:	89 04 24             	mov    %eax,(%esp)
 8749fd7:	e8 f4 42 00 00       	call   874e2d0 <_ZN5yaSSL3SSL9useStatesEv>
 8749fdc:	89 04 24             	mov    %eax,(%esp)
 8749fdf:	e8 2c 3f 00 00       	call   874df10 <_ZN5yaSSL6States12useHandShakeEv>
 8749fe4:	8b 55 08             	mov    0x8(%ebp),%edx
 8749fe7:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8749fed:	8b 42 08             	mov    0x8(%edx),%eax
 8749ff0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8749ff4:	8b 45 10             	mov    0x10(%ebp),%eax
 8749ff7:	89 04 24             	mov    %eax,(%esp)
 8749ffa:	e8 d1 3f 00 00       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 8749fff:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 874a002:	8b 75 f8             	mov    -0x8(%ebp),%esi
 874a005:	8b 7d fc             	mov    -0x4(%ebp),%edi
 874a008:	89 ec                	mov    %ebp,%esp
 874a00a:	5d                   	pop    %ebp
 874a00b:	c3                   	ret
 874a00c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 874a010:	8b 45 10             	mov    0x10(%ebp),%eax
 874a013:	31 ff                	xor    %edi,%edi
 874a015:	89 04 24             	mov    %eax,(%esp)
 874a018:	e8 53 49 00 00       	call   874e970 <_ZNK5yaSSL3SSL9isTLSv1_1Ev>
 874a01d:	84 c0                	test   %al,%al
 874a01f:	75 4f                	jne    874a070 <_ZN5yaSSL5Alert7ProcessERNS_12input_bufferERNS_3SSLE+0x230>
 874a021:	8b 45 10             	mov    0x10(%ebp),%eax
 874a024:	89 04 24             	mov    %eax,(%esp)
 874a027:	e8 44 40 00 00       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 874a02c:	89 04 24             	mov    %eax,(%esp)
 874a02f:	e8 1c 4a 00 00       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 874a034:	0f b7 40 2a          	movzwl 0x2a(%eax),%eax
 874a038:	29 f8                	sub    %edi,%eax
 874a03a:	2b 45 b0             	sub    -0x50(%ebp),%eax
 874a03d:	2b 45 b4             	sub    -0x4c(%ebp),%eax
 874a040:	85 c0                	test   %eax,%eax
 874a042:	0f 8e 04 ff ff ff    	jle    8749f4c <_ZN5yaSSL5Alert7ProcessERNS_12input_bufferERNS_3SSLE+0x10c>
 874a048:	89 75 b0             	mov    %esi,-0x50(%ebp)
 874a04b:	31 ff                	xor    %edi,%edi
 874a04d:	89 c6                	mov    %eax,%esi
 874a04f:	90                   	nop
 874a050:	8b 55 b0             	mov    -0x50(%ebp),%edx
 874a053:	83 c7 01             	add    $0x1,%edi
 874a056:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 874a05d:	fe 
 874a05e:	89 14 24             	mov    %edx,(%esp)
 874a061:	e8 ba cd 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 874a066:	39 fe                	cmp    %edi,%esi
 874a068:	7f e6                	jg     874a050 <_ZN5yaSSL5Alert7ProcessERNS_12input_bufferERNS_3SSLE+0x210>
 874a06a:	e9 dd fe ff ff       	jmp    8749f4c <_ZN5yaSSL5Alert7ProcessERNS_12input_bufferERNS_3SSLE+0x10c>
 874a06f:	90                   	nop
 874a070:	8b 55 10             	mov    0x10(%ebp),%edx
 874a073:	89 14 24             	mov    %edx,(%esp)
 874a076:	e8 e5 3f 00 00       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 874a07b:	89 04 24             	mov    %eax,(%esp)
 874a07e:	e8 dd 46 00 00       	call   874e760 <_ZNK5yaSSL6Crypto10get_cipherEv>
 874a083:	89 c2                	mov    %eax,%edx
 874a085:	8b 00                	mov    (%eax),%eax
 874a087:	89 14 24             	mov    %edx,(%esp)
 874a08a:	ff 50 10             	call   *0x10(%eax)
 874a08d:	89 c7                	mov    %eax,%edi
 874a08f:	eb 90                	jmp    874a021 <_ZN5yaSSL5Alert7ProcessERNS_12input_bufferERNS_3SSLE+0x1e1>
 874a091:	90                   	nop
 874a092:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 874a099:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::Alert::Process @ 0x8749e40

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Alert::Process(yaSSL::input_buffer&, yaSSL::SSL&) */

void __thiscall yaSSL::Alert::Process(Alert *this,input_buffer *param_1,SSL *param_2)

{
  char cVar1;
  Security *pSVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  Crypto *pCVar6;
  int *piVar7;
  uint uVar8;
  States *pSVar9;
  undefined4 *puVar10;
  uchar *puVar11;
  bool bVar12;
  byte bVar13;
  uchar *local_58;
  uchar local_44 [20];
  uchar local_30 [32];
  
  bVar13 = 0;
  pSVar2 = (Security *)SSL::getSecurity(param_2);
  iVar3 = Security::get_parms(pSVar2);
  if (*(char *)(iVar3 + 0x28) == '\0') {
    uVar4 = (**(code **)(*(int *)this + 0x10))(this);
    uVar4 = uVar4 & 0xffff;
    iVar3 = input_buffer::get_buffer(param_1);
    iVar5 = input_buffer::get_current(param_1);
    iVar3 = iVar3 + (iVar5 - uVar4);
    cVar1 = SSL::isTLS(param_2);
    if (cVar1 == '\0') {
      hmac(param_2,local_30,iVar3,uVar4,0x15,1);
    }
    else {
      TLS_hmac(param_2,local_30,iVar3,uVar4,0x15,1);
    }
    local_58 = local_30;
    pCVar6 = (Crypto *)SSL::getCrypto(param_2);
    piVar7 = (int *)Crypto::get_digest(pCVar6);
    uVar8 = (**(code **)(*piVar7 + 0xc))(piVar7);
    input_buffer::read(param_1,local_44,uVar8);
    pSVar2 = (Security *)SSL::getSecurity(param_2);
    iVar3 = Security::get_parms(pSVar2);
    if (*(int *)(iVar3 + 8) == 1) {
      iVar3 = 0;
      cVar1 = SSL::isTLSv1_1(param_2);
      if (cVar1 != '\0') {
        pCVar6 = (Crypto *)SSL::getCrypto(param_2);
        piVar7 = (int *)Crypto::get_cipher(pCVar6);
        iVar3 = (**(code **)(*piVar7 + 0x10))(piVar7);
      }
      pSVar2 = (Security *)SSL::getSecurity(param_2);
      iVar5 = Security::get_parms(pSVar2);
      iVar3 = (((uint)*(ushort *)(iVar5 + 0x2a) - iVar3) - uVar4) - uVar8;
      if (0 < iVar3) {
        iVar5 = 0;
        do {
          iVar5 = iVar5 + 1;
          input_buffer::operator[]((uint)param_1);
        } while (iVar5 < iVar3);
      }
    }
    bVar12 = true;
    puVar11 = local_44;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      bVar12 = *puVar11 == *local_58;
      puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
      local_58 = local_58 + (uint)bVar13 * -2 + 1;
    } while (bVar12);
    if (!bVar12) {
      SSL::SetError(param_2,0x70);
      return;
    }
  }
  if (*(int *)(this + 4) != 2) {
    return;
  }
  pSVar9 = (States *)SSL::useStates(param_2);
  puVar10 = (undefined4 *)States::useRecord(pSVar9);
  *puVar10 = 0;
  pSVar9 = (States *)SSL::useStates(param_2);
  puVar10 = (undefined4 *)States::useHandShake(pSVar9);
  *puVar10 = 0;
  SSL::SetError(param_2,*(undefined4 *)(this + 8));
  return;
}

```

---

## get

```asm
// === 08749030 yaSSL::Alert::get  [0x08749030-0x874905f] ===
 8749030:	55                   	push   %ebp
 8749031:	89 e5                	mov    %esp,%ebp
 8749033:	53                   	push   %ebx
 8749034:	83 ec 14             	sub    $0x14,%esp
 8749037:	8b 45 08             	mov    0x8(%ebp),%eax
 874903a:	e8 b9 9d fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874903f:	81 c3 59 3b c2 00    	add    $0xc23b59,%ebx
 8749045:	89 44 24 04          	mov    %eax,0x4(%esp)
 8749049:	8b 45 0c             	mov    0xc(%ebp),%eax
 874904c:	89 04 24             	mov    %eax,(%esp)
 874904f:	e8 7c ff ff ff       	call   8748fd0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_5AlertE>
 8749054:	83 c4 14             	add    $0x14,%esp
 8749057:	5b                   	pop    %ebx
 8749058:	5d                   	pop    %ebp
 8749059:	c3                   	ret
 874905a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::Alert::get @ 0x8749030

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Alert::get(yaSSL::output_buffer&) const */

void __thiscall yaSSL::Alert::get(Alert *this,output_buffer *param_1)

{
  yaSSL::operator<<(param_1,this);
  return;
}

```

---

## get_length

```asm
// === 08746bd0 yaSSL::Alert::get_length  [0x08746bd0-0x8746bdf] ===
 8746bd0:	55                   	push   %ebp
 8746bd1:	b8 02 00 00 00       	mov    $0x2,%eax
 8746bd6:	89 e5                	mov    %esp,%ebp
 8746bd8:	5d                   	pop    %ebp
 8746bd9:	c3                   	ret
 8746bda:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::Alert::get_length @ 0x8746bd0

/* yaSSL::Alert::get_length() const */

undefined4 yaSSL::Alert::get_length(void)

{
  return 2;
}

```

---

## get_type

```asm
// === 08746bc0 yaSSL::Alert::get_type  [0x08746bc0-0x8746bcf] ===
 8746bc0:	55                   	push   %ebp
 8746bc1:	b8 15 00 00 00       	mov    $0x15,%eax
 8746bc6:	89 e5                	mov    %esp,%ebp
 8746bc8:	5d                   	pop    %ebp
 8746bc9:	c3                   	ret
 8746bca:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::Alert::get_type @ 0x8746bc0

/* yaSSL::Alert::get_type() const */

undefined4 yaSSL::Alert::get_type(void)

{
  return 0x15;
}

```

---

## set

```asm
// === 08747e80 yaSSL::Alert::set  [0x08747e80-0x8747eaf] ===
 8747e80:	55                   	push   %ebp
 8747e81:	89 e5                	mov    %esp,%ebp
 8747e83:	53                   	push   %ebx
 8747e84:	83 ec 14             	sub    $0x14,%esp
 8747e87:	8b 45 08             	mov    0x8(%ebp),%eax
 8747e8a:	e8 69 af fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8747e8f:	81 c3 09 4d c2 00    	add    $0xc24d09,%ebx
 8747e95:	89 44 24 04          	mov    %eax,0x4(%esp)
 8747e99:	8b 45 0c             	mov    0xc(%ebp),%eax
 8747e9c:	89 04 24             	mov    %eax,(%esp)
 8747e9f:	e8 7c ff ff ff       	call   8747e20 <_ZN5yaSSLrsERNS_12input_bufferERNS_5AlertE>
 8747ea4:	83 c4 14             	add    $0x14,%esp
 8747ea7:	5b                   	pop    %ebx
 8747ea8:	5d                   	pop    %ebp
 8747ea9:	c3                   	ret
 8747eaa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::Alert::set @ 0x8747e80

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Alert::set(yaSSL::input_buffer&) */

void __thiscall yaSSL::Alert::set(Alert *this,input_buffer *param_1)

{
  yaSSL::operator>>(param_1,this);
  return;
}

```

