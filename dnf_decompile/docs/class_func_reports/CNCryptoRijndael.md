# CNCryptoRijndael

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 13

---

## CNCryptoRijndael

```asm
// === 0809bf08 CNCryptoRijndael::CNCryptoRijndael  [0x0809bf08-0x809c03d] ===
 809bf08:	55                   	push   %ebp
 809bf09:	89 e5                	mov    %esp,%ebp
 809bf0b:	57                   	push   %edi
 809bf0c:	56                   	push   %esi
 809bf0d:	53                   	push   %ebx
 809bf0e:	81 ec ac 00 00 00    	sub    $0xac,%esp
 809bf14:	8b 45 08             	mov    0x8(%ebp),%eax
 809bf17:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 809bf1e:	00 
 809bf1f:	89 04 24             	mov    %eax,(%esp)
 809bf22:	e8 c9 1f 00 00       	call   809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>
 809bf27:	8b 45 08             	mov    0x8(%ebp),%eax
 809bf2a:	c7 00 88 39 b1 08    	movl   $0x8b13988,(%eax)
 809bf30:	8b 45 08             	mov    0x8(%ebp),%eax
 809bf33:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 809bf3a:	c7 04 24 7c 04 00 00 	movl   $0x47c,(%esp)
 809bf41:	e8 0a 85 68 00       	call   8724450 <_Znwj>
 809bf46:	89 c3                	mov    %eax,%ebx
 809bf48:	89 d8                	mov    %ebx,%eax
 809bf4a:	89 04 24             	mov    %eax,(%esp)
 809bf4d:	e8 5a a1 01 00       	call   80b60ac <_ZN9CRijndaelC1Ev>
 809bf52:	eb 15                	jmp    809bf69 <_ZN16CNCryptoRijndaelC1Ev+0x61>
 809bf54:	89 d6                	mov    %edx,%esi
 809bf56:	89 c7                	mov    %eax,%edi
 809bf58:	89 1c 24             	mov    %ebx,(%esp)
 809bf5b:	e8 90 85 68 00       	call   87244f0 <_ZdlPv>
 809bf60:	89 f8                	mov    %edi,%eax
 809bf62:	89 f2                	mov    %esi,%edx
 809bf64:	e9 ae 00 00 00       	jmp    809c017 <_ZN16CNCryptoRijndaelC1Ev+0x10f>
 809bf69:	89 da                	mov    %ebx,%edx
 809bf6b:	8b 45 08             	mov    0x8(%ebp),%eax
 809bf6e:	89 50 08             	mov    %edx,0x8(%eax)
 809bf71:	8b 45 08             	mov    0x8(%ebp),%eax
 809bf74:	8b 40 08             	mov    0x8(%eax),%eax
 809bf77:	85 c0                	test   %eax,%eax
 809bf79:	0f 84 b3 00 00 00    	je     809c032 <_ZN16CNCryptoRijndaelC1Ev+0x12a>
 809bf7f:	c7 44 24 04 80 00 00 	movl   $0x80,0x4(%esp)
 809bf86:	00 
 809bf87:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 809bf8d:	89 04 24             	mov    %eax,(%esp)
 809bf90:	e8 de 24 00 00       	call   809e473 <_Z20GenerateRandomStringPci>
 809bf95:	8b 45 08             	mov    0x8(%ebp),%eax
 809bf98:	8b 40 08             	mov    0x8(%eax),%eax
 809bf9b:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 809bfa2:	00 
 809bfa3:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 809bfaa:	00 
 809bfab:	c7 44 24 14 10 00 00 	movl   $0x10,0x14(%esp)
 809bfb2:	00 
 809bfb3:	c7 44 24 10 10 00 00 	movl   $0x10,0x10(%esp)
 809bfba:	00 
 809bfbb:	c7 44 24 0c 20 2f b2 	movl   $0x8b22f20,0xc(%esp)
 809bfc2:	08 
 809bfc3:	c7 44 24 08 80 00 00 	movl   $0x80,0x8(%esp)
 809bfca:	00 
 809bfcb:	8d 95 68 ff ff ff    	lea    -0x98(%ebp),%edx
 809bfd1:	89 54 24 04          	mov    %edx,0x4(%esp)
 809bfd5:	89 04 24             	mov    %eax,(%esp)
 809bfd8:	e8 43 a2 01 00       	call   80b6220 <_ZN9CRijndael10InitializeEPKciS1_iiii>
 809bfdd:	3d ff ff ff 6f       	cmp    $0x6fffffff,%eax
 809bfe2:	0f 95 c0             	setne  %al
 809bfe5:	84 c0                	test   %al,%al
 809bfe7:	74 49                	je     809c032 <_ZN16CNCryptoRijndaelC1Ev+0x12a>
 809bfe9:	8b 45 08             	mov    0x8(%ebp),%eax
 809bfec:	8b 40 08             	mov    0x8(%eax),%eax
 809bfef:	85 c0                	test   %eax,%eax
 809bff1:	74 18                	je     809c00b <_ZN16CNCryptoRijndaelC1Ev+0x103>
 809bff3:	8b 45 08             	mov    0x8(%ebp),%eax
 809bff6:	8b 40 08             	mov    0x8(%eax),%eax
 809bff9:	8b 00                	mov    (%eax),%eax
 809bffb:	83 c0 04             	add    $0x4,%eax
 809bffe:	8b 10                	mov    (%eax),%edx
 809c000:	8b 45 08             	mov    0x8(%ebp),%eax
 809c003:	8b 40 08             	mov    0x8(%eax),%eax
 809c006:	89 04 24             	mov    %eax,(%esp)
 809c009:	ff d2                	call   *%edx
 809c00b:	8b 45 08             	mov    0x8(%ebp),%eax
 809c00e:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 809c015:	eb 1b                	jmp    809c032 <_ZN16CNCryptoRijndaelC1Ev+0x12a>
 809c017:	89 d3                	mov    %edx,%ebx
 809c019:	89 c6                	mov    %eax,%esi
 809c01b:	8b 45 08             	mov    0x8(%ebp),%eax
 809c01e:	89 04 24             	mov    %eax,(%esp)
 809c021:	e8 e2 1e 00 00       	call   809df08 <_ZN12ICryptoGraphD1Ev>
 809c026:	89 f0                	mov    %esi,%eax
 809c028:	89 da                	mov    %ebx,%edx
 809c02a:	89 04 24             	mov    %eax,(%esp)
 809c02d:	e8 1e 77 a4 00       	call   8ae3750 <_Unwind_Resume>
 809c032:	81 c4 ac 00 00 00    	add    $0xac,%esp
 809c038:	5b                   	pop    %ebx
 809c039:	5e                   	pop    %esi
 809c03a:	5f                   	pop    %edi
 809c03b:	5d                   	pop    %ebp
 809c03c:	c3                   	ret
 809c03d:	90                   	nop

```

```c
// CNCryptoRijndael::CNCryptoRijndael @ 0x809bf08

/* CNCryptoRijndael::CNCryptoRijndael() */

void __thiscall CNCryptoRijndael::CNCryptoRijndael(CNCryptoRijndael *this)

{
  CRijndael *this_00;
  int iVar1;
  char local_9c [140];
  
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,1);
  *(undefined ***)this = &PTR__CNCryptoRijndael_08b13988;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 0809bf41 to 0809bf45 has its CatchHandler @ 0809c017 */
  this_00 = operator_new(0x47c);
                    /* try { // try from 0809bf4d to 0809bf51 has its CatchHandler @ 0809bf54 */
  CRijndael::CRijndael(this_00);
  *(CRijndael **)(this + 8) = this_00;
  if (*(int *)(this + 8) != 0) {
                    /* try { // try from 0809bf90 to 0809c00a has its CatchHandler @ 0809c017 */
    GenerateRandomString(local_9c,0x80);
    iVar1 = CRijndael::Initialize
                      (*(CRijndael **)(this + 8),local_9c,0x80,CRijndael::sm_chain0,0x10,0x10,0,0);
    if (iVar1 != 0x6fffffff) {
      if (*(int *)(this + 8) != 0) {
        (**(code **)(**(int **)(this + 8) + 4))(*(undefined4 *)(this + 8));
      }
      *(undefined4 *)(this + 8) = 0;
    }
  }
  return;
}

```

---

## CNCryptoRijndael_0809c0e6

```asm
// === 0809c0e6 CNCryptoRijndael::CNCryptoRijndael  [0x0809c0e6-0x809c109] ===
 809c0e6:	55                   	push   %ebp
 809c0e7:	89 e5                	mov    %esp,%ebp
 809c0e9:	83 ec 18             	sub    $0x18,%esp
 809c0ec:	8b 45 08             	mov    0x8(%ebp),%eax
 809c0ef:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 809c0f6:	00 
 809c0f7:	89 04 24             	mov    %eax,(%esp)
 809c0fa:	e8 f1 1d 00 00       	call   809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>
 809c0ff:	8b 45 08             	mov    0x8(%ebp),%eax
 809c102:	c7 00 88 39 b1 08    	movl   $0x8b13988,(%eax)
 809c108:	c9                   	leave
 809c109:	c3                   	ret

```

```c
// CNCryptoRijndael::CNCryptoRijndael @ 0x809c0e6

/* CNCryptoRijndael::CNCryptoRijndael(CNCryptoRijndael const&) */

void __thiscall CNCryptoRijndael::CNCryptoRijndael(CNCryptoRijndael *this,CNCryptoRijndael *param_1)

{
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,1);
  *(undefined ***)this = &PTR__CNCryptoRijndael_08b13988;
  return;
}

```

---

## Decrypt

```asm
// === 0809c268 CNCryptoRijndael::Decrypt  [0x0809c268-0x809c2e7] ===
 809c268:	55                   	push   %ebp
 809c269:	89 e5                	mov    %esp,%ebp
 809c26b:	56                   	push   %esi
 809c26c:	53                   	push   %ebx
 809c26d:	83 ec 20             	sub    $0x20,%esp
 809c270:	8b 45 08             	mov    0x8(%ebp),%eax
 809c273:	8b 40 08             	mov    0x8(%eax),%eax
 809c276:	85 c0                	test   %eax,%eax
 809c278:	75 07                	jne    809c281 <_ZN16CNCryptoRijndael7DecryptEPhi+0x19>
 809c27a:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809c27f:	eb 5f                	jmp    809c2e0 <_ZN16CNCryptoRijndael7DecryptEPhi+0x78>
 809c281:	8b 45 08             	mov    0x8(%ebp),%eax
 809c284:	8b 00                	mov    (%eax),%eax
 809c286:	83 c0 24             	add    $0x24,%eax
 809c289:	8b 10                	mov    (%eax),%edx
 809c28b:	8b 45 08             	mov    0x8(%ebp),%eax
 809c28e:	89 04 24             	mov    %eax,(%esp)
 809c291:	ff d2                	call   *%edx
 809c293:	89 45 f4             	mov    %eax,-0xc(%ebp)
 809c296:	8b 55 10             	mov    0x10(%ebp),%edx
 809c299:	89 d0                	mov    %edx,%eax
 809c29b:	c1 fa 1f             	sar    $0x1f,%edx
 809c29e:	f7 7d f4             	idivl  -0xc(%ebp)
 809c2a1:	89 d0                	mov    %edx,%eax
 809c2a3:	85 c0                	test   %eax,%eax
 809c2a5:	0f 95 c0             	setne  %al
 809c2a8:	84 c0                	test   %al,%al
 809c2aa:	74 07                	je     809c2b3 <_ZN16CNCryptoRijndael7DecryptEPhi+0x4b>
 809c2ac:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809c2b1:	eb 2d                	jmp    809c2e0 <_ZN16CNCryptoRijndael7DecryptEPhi+0x78>
 809c2b3:	8b 45 08             	mov    0x8(%ebp),%eax
 809c2b6:	8b 40 08             	mov    0x8(%eax),%eax
 809c2b9:	8b 00                	mov    (%eax),%eax
 809c2bb:	83 c0 10             	add    $0x10,%eax
 809c2be:	8b 30                	mov    (%eax),%esi
 809c2c0:	8b 5d 10             	mov    0x10(%ebp),%ebx
 809c2c3:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 809c2c6:	8b 55 0c             	mov    0xc(%ebp),%edx
 809c2c9:	8b 45 08             	mov    0x8(%ebp),%eax
 809c2cc:	8b 40 08             	mov    0x8(%eax),%eax
 809c2cf:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 809c2d3:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 809c2d7:	89 54 24 04          	mov    %edx,0x4(%esp)
 809c2db:	89 04 24             	mov    %eax,(%esp)
 809c2de:	ff d6                	call   *%esi
 809c2e0:	83 c4 20             	add    $0x20,%esp
 809c2e3:	5b                   	pop    %ebx
 809c2e4:	5e                   	pop    %esi
 809c2e5:	5d                   	pop    %ebp
 809c2e6:	c3                   	ret
 809c2e7:	90                   	nop

```

```c
// CNCryptoRijndael::Decrypt @ 0x809c268

/* CNCryptoRijndael::Decrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoRijndael::Decrypt(CNCryptoRijndael *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x7000000c;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar2 == 0) {
      uVar1 = (**(code **)(**(int **)(this + 8) + 0x10))
                        (*(undefined4 *)(this + 8),param_1,param_1,param_2);
    }
    else {
      uVar1 = 0x70000006;
    }
  }
  return uVar1;
}

```

---

## Decrypt_0809c376

```asm
// === 0809c376 CNCryptoRijndael::Decrypt  [0x0809c376-0x809c403] ===
 809c376:	55                   	push   %ebp
 809c377:	89 e5                	mov    %esp,%ebp
 809c379:	56                   	push   %esi
 809c37a:	53                   	push   %ebx
 809c37b:	83 ec 20             	sub    $0x20,%esp
 809c37e:	8b 45 08             	mov    0x8(%ebp),%eax
 809c381:	8b 40 08             	mov    0x8(%eax),%eax
 809c384:	85 c0                	test   %eax,%eax
 809c386:	75 07                	jne    809c38f <_ZN16CNCryptoRijndael7DecryptEPKhiPhi+0x19>
 809c388:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809c38d:	eb 6e                	jmp    809c3fd <_ZN16CNCryptoRijndael7DecryptEPKhiPhi+0x87>
 809c38f:	8b 45 10             	mov    0x10(%ebp),%eax
 809c392:	3b 45 18             	cmp    0x18(%ebp),%eax
 809c395:	7e 07                	jle    809c39e <_ZN16CNCryptoRijndael7DecryptEPKhiPhi+0x28>
 809c397:	b8 0b 00 00 70       	mov    $0x7000000b,%eax
 809c39c:	eb 5f                	jmp    809c3fd <_ZN16CNCryptoRijndael7DecryptEPKhiPhi+0x87>
 809c39e:	8b 45 08             	mov    0x8(%ebp),%eax
 809c3a1:	8b 00                	mov    (%eax),%eax
 809c3a3:	83 c0 24             	add    $0x24,%eax
 809c3a6:	8b 10                	mov    (%eax),%edx
 809c3a8:	8b 45 08             	mov    0x8(%ebp),%eax
 809c3ab:	89 04 24             	mov    %eax,(%esp)
 809c3ae:	ff d2                	call   *%edx
 809c3b0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 809c3b3:	8b 55 10             	mov    0x10(%ebp),%edx
 809c3b6:	89 d0                	mov    %edx,%eax
 809c3b8:	c1 fa 1f             	sar    $0x1f,%edx
 809c3bb:	f7 7d f4             	idivl  -0xc(%ebp)
 809c3be:	89 d0                	mov    %edx,%eax
 809c3c0:	85 c0                	test   %eax,%eax
 809c3c2:	0f 95 c0             	setne  %al
 809c3c5:	84 c0                	test   %al,%al
 809c3c7:	74 07                	je     809c3d0 <_ZN16CNCryptoRijndael7DecryptEPKhiPhi+0x5a>
 809c3c9:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809c3ce:	eb 2d                	jmp    809c3fd <_ZN16CNCryptoRijndael7DecryptEPKhiPhi+0x87>
 809c3d0:	8b 45 08             	mov    0x8(%ebp),%eax
 809c3d3:	8b 40 08             	mov    0x8(%eax),%eax
 809c3d6:	8b 00                	mov    (%eax),%eax
 809c3d8:	83 c0 10             	add    $0x10,%eax
 809c3db:	8b 30                	mov    (%eax),%esi
 809c3dd:	8b 5d 10             	mov    0x10(%ebp),%ebx
 809c3e0:	8b 4d 14             	mov    0x14(%ebp),%ecx
 809c3e3:	8b 55 0c             	mov    0xc(%ebp),%edx
 809c3e6:	8b 45 08             	mov    0x8(%ebp),%eax
 809c3e9:	8b 40 08             	mov    0x8(%eax),%eax
 809c3ec:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 809c3f0:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 809c3f4:	89 54 24 04          	mov    %edx,0x4(%esp)
 809c3f8:	89 04 24             	mov    %eax,(%esp)
 809c3fb:	ff d6                	call   *%esi
 809c3fd:	83 c4 20             	add    $0x20,%esp
 809c400:	5b                   	pop    %ebx
 809c401:	5e                   	pop    %esi
 809c402:	5d                   	pop    %ebp
 809c403:	c3                   	ret

```

```c
// CNCryptoRijndael::Decrypt @ 0x809c376

/* CNCryptoRijndael::Decrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoRijndael::Decrypt
          (CNCryptoRijndael *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x7000000c;
  }
  else if (param_4 < param_2) {
    uVar1 = 0x7000000b;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar2 == 0) {
      uVar1 = (**(code **)(**(int **)(this + 8) + 0x10))
                        (*(undefined4 *)(this + 8),param_1,param_3,param_2);
    }
    else {
      uVar1 = 0x70000006;
    }
  }
  return uVar1;
}

```

---

## Encrypt

```asm
// === 0809c1e8 CNCryptoRijndael::Encrypt  [0x0809c1e8-0x809c267] ===
 809c1e8:	55                   	push   %ebp
 809c1e9:	89 e5                	mov    %esp,%ebp
 809c1eb:	56                   	push   %esi
 809c1ec:	53                   	push   %ebx
 809c1ed:	83 ec 20             	sub    $0x20,%esp
 809c1f0:	8b 45 08             	mov    0x8(%ebp),%eax
 809c1f3:	8b 40 08             	mov    0x8(%eax),%eax
 809c1f6:	85 c0                	test   %eax,%eax
 809c1f8:	75 07                	jne    809c201 <_ZN16CNCryptoRijndael7EncryptEPhi+0x19>
 809c1fa:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809c1ff:	eb 5f                	jmp    809c260 <_ZN16CNCryptoRijndael7EncryptEPhi+0x78>
 809c201:	8b 45 08             	mov    0x8(%ebp),%eax
 809c204:	8b 00                	mov    (%eax),%eax
 809c206:	83 c0 24             	add    $0x24,%eax
 809c209:	8b 10                	mov    (%eax),%edx
 809c20b:	8b 45 08             	mov    0x8(%ebp),%eax
 809c20e:	89 04 24             	mov    %eax,(%esp)
 809c211:	ff d2                	call   *%edx
 809c213:	89 45 f4             	mov    %eax,-0xc(%ebp)
 809c216:	8b 55 10             	mov    0x10(%ebp),%edx
 809c219:	89 d0                	mov    %edx,%eax
 809c21b:	c1 fa 1f             	sar    $0x1f,%edx
 809c21e:	f7 7d f4             	idivl  -0xc(%ebp)
 809c221:	89 d0                	mov    %edx,%eax
 809c223:	85 c0                	test   %eax,%eax
 809c225:	0f 95 c0             	setne  %al
 809c228:	84 c0                	test   %al,%al
 809c22a:	74 07                	je     809c233 <_ZN16CNCryptoRijndael7EncryptEPhi+0x4b>
 809c22c:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809c231:	eb 2d                	jmp    809c260 <_ZN16CNCryptoRijndael7EncryptEPhi+0x78>
 809c233:	8b 45 08             	mov    0x8(%ebp),%eax
 809c236:	8b 40 08             	mov    0x8(%eax),%eax
 809c239:	8b 00                	mov    (%eax),%eax
 809c23b:	83 c0 0c             	add    $0xc,%eax
 809c23e:	8b 30                	mov    (%eax),%esi
 809c240:	8b 5d 10             	mov    0x10(%ebp),%ebx
 809c243:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 809c246:	8b 55 0c             	mov    0xc(%ebp),%edx
 809c249:	8b 45 08             	mov    0x8(%ebp),%eax
 809c24c:	8b 40 08             	mov    0x8(%eax),%eax
 809c24f:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 809c253:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 809c257:	89 54 24 04          	mov    %edx,0x4(%esp)
 809c25b:	89 04 24             	mov    %eax,(%esp)
 809c25e:	ff d6                	call   *%esi
 809c260:	83 c4 20             	add    $0x20,%esp
 809c263:	5b                   	pop    %ebx
 809c264:	5e                   	pop    %esi
 809c265:	5d                   	pop    %ebp
 809c266:	c3                   	ret
 809c267:	90                   	nop

```

```c
// CNCryptoRijndael::Encrypt @ 0x809c1e8

/* CNCryptoRijndael::Encrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoRijndael::Encrypt(CNCryptoRijndael *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x7000000c;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar2 == 0) {
      uVar1 = (**(code **)(**(int **)(this + 8) + 0xc))
                        (*(undefined4 *)(this + 8),param_1,param_1,param_2);
    }
    else {
      uVar1 = 0x70000006;
    }
  }
  return uVar1;
}

```

---

## Encrypt_0809c2e8

```asm
// === 0809c2e8 CNCryptoRijndael::Encrypt  [0x0809c2e8-0x809c375] ===
 809c2e8:	55                   	push   %ebp
 809c2e9:	89 e5                	mov    %esp,%ebp
 809c2eb:	56                   	push   %esi
 809c2ec:	53                   	push   %ebx
 809c2ed:	83 ec 20             	sub    $0x20,%esp
 809c2f0:	8b 45 08             	mov    0x8(%ebp),%eax
 809c2f3:	8b 40 08             	mov    0x8(%eax),%eax
 809c2f6:	85 c0                	test   %eax,%eax
 809c2f8:	75 07                	jne    809c301 <_ZN16CNCryptoRijndael7EncryptEPKhiPhi+0x19>
 809c2fa:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809c2ff:	eb 6e                	jmp    809c36f <_ZN16CNCryptoRijndael7EncryptEPKhiPhi+0x87>
 809c301:	8b 45 10             	mov    0x10(%ebp),%eax
 809c304:	3b 45 18             	cmp    0x18(%ebp),%eax
 809c307:	7e 07                	jle    809c310 <_ZN16CNCryptoRijndael7EncryptEPKhiPhi+0x28>
 809c309:	b8 0b 00 00 70       	mov    $0x7000000b,%eax
 809c30e:	eb 5f                	jmp    809c36f <_ZN16CNCryptoRijndael7EncryptEPKhiPhi+0x87>
 809c310:	8b 45 08             	mov    0x8(%ebp),%eax
 809c313:	8b 00                	mov    (%eax),%eax
 809c315:	83 c0 24             	add    $0x24,%eax
 809c318:	8b 10                	mov    (%eax),%edx
 809c31a:	8b 45 08             	mov    0x8(%ebp),%eax
 809c31d:	89 04 24             	mov    %eax,(%esp)
 809c320:	ff d2                	call   *%edx
 809c322:	89 45 f4             	mov    %eax,-0xc(%ebp)
 809c325:	8b 55 10             	mov    0x10(%ebp),%edx
 809c328:	89 d0                	mov    %edx,%eax
 809c32a:	c1 fa 1f             	sar    $0x1f,%edx
 809c32d:	f7 7d f4             	idivl  -0xc(%ebp)
 809c330:	89 d0                	mov    %edx,%eax
 809c332:	85 c0                	test   %eax,%eax
 809c334:	0f 95 c0             	setne  %al
 809c337:	84 c0                	test   %al,%al
 809c339:	74 07                	je     809c342 <_ZN16CNCryptoRijndael7EncryptEPKhiPhi+0x5a>
 809c33b:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809c340:	eb 2d                	jmp    809c36f <_ZN16CNCryptoRijndael7EncryptEPKhiPhi+0x87>
 809c342:	8b 45 08             	mov    0x8(%ebp),%eax
 809c345:	8b 40 08             	mov    0x8(%eax),%eax
 809c348:	8b 00                	mov    (%eax),%eax
 809c34a:	83 c0 0c             	add    $0xc,%eax
 809c34d:	8b 30                	mov    (%eax),%esi
 809c34f:	8b 5d 10             	mov    0x10(%ebp),%ebx
 809c352:	8b 4d 14             	mov    0x14(%ebp),%ecx
 809c355:	8b 55 0c             	mov    0xc(%ebp),%edx
 809c358:	8b 45 08             	mov    0x8(%ebp),%eax
 809c35b:	8b 40 08             	mov    0x8(%eax),%eax
 809c35e:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 809c362:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 809c366:	89 54 24 04          	mov    %edx,0x4(%esp)
 809c36a:	89 04 24             	mov    %eax,(%esp)
 809c36d:	ff d6                	call   *%esi
 809c36f:	83 c4 20             	add    $0x20,%esp
 809c372:	5b                   	pop    %ebx
 809c373:	5e                   	pop    %esi
 809c374:	5d                   	pop    %ebp
 809c375:	c3                   	ret

```

```c
// CNCryptoRijndael::Encrypt @ 0x809c2e8

/* CNCryptoRijndael::Encrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoRijndael::Encrypt
          (CNCryptoRijndael *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x7000000c;
  }
  else if (param_4 < param_2) {
    uVar1 = 0x7000000b;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar2 == 0) {
      uVar1 = (**(code **)(**(int **)(this + 8) + 0xc))
                        (*(undefined4 *)(this + 8),param_1,param_3,param_2);
    }
    else {
      uVar1 = 0x70000006;
    }
  }
  return uVar1;
}

```

---

## GetBlockSize

```asm
// === 0809c40e CNCryptoRijndael::GetBlockSize  [0x0809c40e-0x809c417] ===
 809c40e:	55                   	push   %ebp
 809c40f:	89 e5                	mov    %esp,%ebp
 809c411:	b8 10 00 00 00       	mov    $0x10,%eax
 809c416:	5d                   	pop    %ebp
 809c417:	c3                   	ret

```

```c
// CNCryptoRijndael::GetBlockSize @ 0x809c40e

/* CNCryptoRijndael::GetBlockSize() const */

undefined4 CNCryptoRijndael::GetBlockSize(void)

{
  return 0x10;
}

```

---

## GetKeySize

```asm
// === 0809c404 CNCryptoRijndael::GetKeySize  [0x0809c404-0x809c40d] ===
 809c404:	55                   	push   %ebp
 809c405:	89 e5                	mov    %esp,%ebp
 809c407:	b8 10 00 00 00       	mov    $0x10,%eax
 809c40c:	5d                   	pop    %ebp
 809c40d:	c3                   	ret

```

```c
// CNCryptoRijndael::GetKeySize @ 0x809c404

/* CNCryptoRijndael::GetKeySize() const */

undefined4 CNCryptoRijndael::GetKeySize(void)

{
  return 0x10;
}

```

---

## Initialize

```asm
// === 0809c18a CNCryptoRijndael::Initialize  [0x0809c18a-0x809c1e7] ===
 809c18a:	55                   	push   %ebp
 809c18b:	89 e5                	mov    %esp,%ebp
 809c18d:	83 ec 28             	sub    $0x28,%esp
 809c190:	8b 45 08             	mov    0x8(%ebp),%eax
 809c193:	8b 40 08             	mov    0x8(%eax),%eax
 809c196:	85 c0                	test   %eax,%eax
 809c198:	75 07                	jne    809c1a1 <_ZN16CNCryptoRijndael10InitializeEPKhi+0x17>
 809c19a:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809c19f:	eb 44                	jmp    809c1e5 <_ZN16CNCryptoRijndael10InitializeEPKhi+0x5b>
 809c1a1:	8b 55 0c             	mov    0xc(%ebp),%edx
 809c1a4:	8b 45 08             	mov    0x8(%ebp),%eax
 809c1a7:	8b 40 08             	mov    0x8(%eax),%eax
 809c1aa:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 809c1b1:	00 
 809c1b2:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 809c1b9:	00 
 809c1ba:	c7 44 24 14 10 00 00 	movl   $0x10,0x14(%esp)
 809c1c1:	00 
 809c1c2:	c7 44 24 10 10 00 00 	movl   $0x10,0x10(%esp)
 809c1c9:	00 
 809c1ca:	c7 44 24 0c 20 2f b2 	movl   $0x8b22f20,0xc(%esp)
 809c1d1:	08 
 809c1d2:	8b 4d 10             	mov    0x10(%ebp),%ecx
 809c1d5:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 809c1d9:	89 54 24 04          	mov    %edx,0x4(%esp)
 809c1dd:	89 04 24             	mov    %eax,(%esp)
 809c1e0:	e8 3b a0 01 00       	call   80b6220 <_ZN9CRijndael10InitializeEPKciS1_iiii>
 809c1e5:	c9                   	leave
 809c1e6:	c3                   	ret
 809c1e7:	90                   	nop

```

```c
// CNCryptoRijndael::Initialize @ 0x809c18a

/* CNCryptoRijndael::Initialize(unsigned char const*, int) */

undefined4 __thiscall
CNCryptoRijndael::Initialize(CNCryptoRijndael *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x7000000c;
  }
  else {
    uVar1 = CRijndael::Initialize
                      (*(CRijndael **)(this + 8),(char *)param_1,param_2,CRijndael::sm_chain0,0x10,
                       0x10,0,0);
  }
  return uVar1;
}

```

---

## SetMode

```asm
// === 0809c112 CNCryptoRijndael::SetMode  [0x0809c112-0x809c189] ===
 809c112:	55                   	push   %ebp
 809c113:	89 e5                	mov    %esp,%ebp
 809c115:	83 ec 18             	sub    $0x18,%esp
 809c118:	8b 45 08             	mov    0x8(%ebp),%eax
 809c11b:	8b 40 08             	mov    0x8(%eax),%eax
 809c11e:	85 c0                	test   %eax,%eax
 809c120:	75 07                	jne    809c129 <_ZN16CNCryptoRijndael7SetModeE16CRYPTO_MODE_TYPE+0x17>
 809c122:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809c127:	eb 5e                	jmp    809c187 <_ZN16CNCryptoRijndael7SetModeE16CRYPTO_MODE_TYPE+0x75>
 809c129:	8b 45 0c             	mov    0xc(%ebp),%eax
 809c12c:	83 f8 01             	cmp    $0x1,%eax
 809c12f:	74 21                	je     809c152 <_ZN16CNCryptoRijndael7SetModeE16CRYPTO_MODE_TYPE+0x40>
 809c131:	83 f8 03             	cmp    $0x3,%eax
 809c134:	74 34                	je     809c16a <_ZN16CNCryptoRijndael7SetModeE16CRYPTO_MODE_TYPE+0x58>
 809c136:	85 c0                	test   %eax,%eax
 809c138:	75 48                	jne    809c182 <_ZN16CNCryptoRijndael7SetModeE16CRYPTO_MODE_TYPE+0x70>
 809c13a:	8b 45 08             	mov    0x8(%ebp),%eax
 809c13d:	8b 40 08             	mov    0x8(%eax),%eax
 809c140:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 809c147:	00 
 809c148:	89 04 24             	mov    %eax,(%esp)
 809c14b:	e8 1e 82 01 00       	call   80b436e <_ZN7IMethod7SetModeEi>
 809c150:	eb 35                	jmp    809c187 <_ZN16CNCryptoRijndael7SetModeE16CRYPTO_MODE_TYPE+0x75>
 809c152:	8b 45 08             	mov    0x8(%ebp),%eax
 809c155:	8b 40 08             	mov    0x8(%eax),%eax
 809c158:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 809c15f:	00 
 809c160:	89 04 24             	mov    %eax,(%esp)
 809c163:	e8 06 82 01 00       	call   80b436e <_ZN7IMethod7SetModeEi>
 809c168:	eb 1d                	jmp    809c187 <_ZN16CNCryptoRijndael7SetModeE16CRYPTO_MODE_TYPE+0x75>
 809c16a:	8b 45 08             	mov    0x8(%ebp),%eax
 809c16d:	8b 40 08             	mov    0x8(%eax),%eax
 809c170:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 809c177:	00 
 809c178:	89 04 24             	mov    %eax,(%esp)
 809c17b:	e8 ee 81 01 00       	call   80b436e <_ZN7IMethod7SetModeEi>
 809c180:	eb 05                	jmp    809c187 <_ZN16CNCryptoRijndael7SetModeE16CRYPTO_MODE_TYPE+0x75>
 809c182:	b8 17 00 00 70       	mov    $0x70000017,%eax
 809c187:	c9                   	leave
 809c188:	c3                   	ret
 809c189:	90                   	nop

```

```c
// CNCryptoRijndael::SetMode @ 0x809c112

/* CNCryptoRijndael::SetMode(CRYPTO_MODE_TYPE) */

undefined4 __thiscall CNCryptoRijndael::SetMode(CNCryptoRijndael *this,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x7000000c;
  }
  else if (param_2 == 1) {
    uVar1 = IMethod::SetMode(*(IMethod **)(this + 8),1);
  }
  else if (param_2 == 3) {
    uVar1 = IMethod::SetMode(*(IMethod **)(this + 8),2);
  }
  else if (param_2 == 0) {
    uVar1 = IMethod::SetMode(*(IMethod **)(this + 8),0);
  }
  else {
    uVar1 = 0x70000017;
  }
  return uVar1;
}

```

---

## operator=

```asm
// === 0809c10a CNCryptoRijndael::operator=  [0x0809c10a-0x809c111] ===
 809c10a:	55                   	push   %ebp
 809c10b:	89 e5                	mov    %esp,%ebp
 809c10d:	8b 45 08             	mov    0x8(%ebp),%eax
 809c110:	5d                   	pop    %ebp
 809c111:	c3                   	ret

```

```c
// CNCryptoRijndael::operator= @ 0x809c10a

/* CNCryptoRijndael::TEMPNAMEPLACEHOLDERVALUE(CNCryptoRijndael const&) */

CNCryptoRijndael * __thiscall
CNCryptoRijndael::operator=(CNCryptoRijndael *this,CNCryptoRijndael *param_1)

{
  return this;
}

```

---

## ~CNCryptoRijndael

```asm
// === 0809c03e CNCryptoRijndael::~CNCryptoRijndael  [0x0809c03e-0x809c0c7] ===
 809c03e:	55                   	push   %ebp
 809c03f:	89 e5                	mov    %esp,%ebp
 809c041:	56                   	push   %esi
 809c042:	53                   	push   %ebx
 809c043:	83 ec 10             	sub    $0x10,%esp
 809c046:	8b 45 08             	mov    0x8(%ebp),%eax
 809c049:	c7 00 88 39 b1 08    	movl   $0x8b13988,(%eax)
 809c04f:	8b 45 08             	mov    0x8(%ebp),%eax
 809c052:	8b 40 08             	mov    0x8(%eax),%eax
 809c055:	85 c0                	test   %eax,%eax
 809c057:	74 49                	je     809c0a2 <_ZN16CNCryptoRijndaelD1Ev+0x64>
 809c059:	8b 45 08             	mov    0x8(%ebp),%eax
 809c05c:	8b 40 08             	mov    0x8(%eax),%eax
 809c05f:	85 c0                	test   %eax,%eax
 809c061:	74 18                	je     809c07b <_ZN16CNCryptoRijndaelD1Ev+0x3d>
 809c063:	8b 45 08             	mov    0x8(%ebp),%eax
 809c066:	8b 40 08             	mov    0x8(%eax),%eax
 809c069:	8b 00                	mov    (%eax),%eax
 809c06b:	83 c0 04             	add    $0x4,%eax
 809c06e:	8b 10                	mov    (%eax),%edx
 809c070:	8b 45 08             	mov    0x8(%ebp),%eax
 809c073:	8b 40 08             	mov    0x8(%eax),%eax
 809c076:	89 04 24             	mov    %eax,(%esp)
 809c079:	ff d2                	call   *%edx
 809c07b:	8b 45 08             	mov    0x8(%ebp),%eax
 809c07e:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 809c085:	eb 1b                	jmp    809c0a2 <_ZN16CNCryptoRijndaelD1Ev+0x64>
 809c087:	89 d3                	mov    %edx,%ebx
 809c089:	89 c6                	mov    %eax,%esi
 809c08b:	8b 45 08             	mov    0x8(%ebp),%eax
 809c08e:	89 04 24             	mov    %eax,(%esp)
 809c091:	e8 72 1e 00 00       	call   809df08 <_ZN12ICryptoGraphD1Ev>
 809c096:	89 f0                	mov    %esi,%eax
 809c098:	89 da                	mov    %ebx,%edx
 809c09a:	89 04 24             	mov    %eax,(%esp)
 809c09d:	e8 ae 76 a4 00       	call   8ae3750 <_Unwind_Resume>
 809c0a2:	8b 45 08             	mov    0x8(%ebp),%eax
 809c0a5:	89 04 24             	mov    %eax,(%esp)
 809c0a8:	e8 5b 1e 00 00       	call   809df08 <_ZN12ICryptoGraphD1Ev>
 809c0ad:	b8 00 00 00 00       	mov    $0x0,%eax
 809c0b2:	84 c0                	test   %al,%al
 809c0b4:	74 0b                	je     809c0c1 <_ZN16CNCryptoRijndaelD1Ev+0x83>
 809c0b6:	8b 45 08             	mov    0x8(%ebp),%eax
 809c0b9:	89 04 24             	mov    %eax,(%esp)
 809c0bc:	e8 2f 84 68 00       	call   87244f0 <_ZdlPv>
 809c0c1:	83 c4 10             	add    $0x10,%esp
 809c0c4:	5b                   	pop    %ebx
 809c0c5:	5e                   	pop    %esi
 809c0c6:	5d                   	pop    %ebp
 809c0c7:	c3                   	ret

```

```c
// CNCryptoRijndael::~CNCryptoRijndael @ 0x809c03e

/* WARNING: Removing unreachable block (ram,0x0809c0b6) */
/* CNCryptoRijndael::~CNCryptoRijndael() */

void __thiscall CNCryptoRijndael::~CNCryptoRijndael(CNCryptoRijndael *this)

{
  *(undefined ***)this = &PTR__CNCryptoRijndael_08b13988;
  if (*(int *)(this + 8) != 0) {
    if (*(int *)(this + 8) != 0) {
                    /* try { // try from 0809c079 to 0809c07a has its CatchHandler @ 0809c087 */
      (**(code **)(**(int **)(this + 8) + 4))(*(undefined4 *)(this + 8));
    }
    *(undefined4 *)(this + 8) = 0;
  }
  ICryptoGraph::~ICryptoGraph((ICryptoGraph *)this);
  return;
}

```

---

## ~CNCryptoRijndael_0809c0c8

```asm
// === 0809c0c8 CNCryptoRijndael::~CNCryptoRijndael  [0x0809c0c8-0x809c0e5] ===
 809c0c8:	55                   	push   %ebp
 809c0c9:	89 e5                	mov    %esp,%ebp
 809c0cb:	83 ec 18             	sub    $0x18,%esp
 809c0ce:	8b 45 08             	mov    0x8(%ebp),%eax
 809c0d1:	89 04 24             	mov    %eax,(%esp)
 809c0d4:	e8 65 ff ff ff       	call   809c03e <_ZN16CNCryptoRijndaelD1Ev>
 809c0d9:	8b 45 08             	mov    0x8(%ebp),%eax
 809c0dc:	89 04 24             	mov    %eax,(%esp)
 809c0df:	e8 0c 84 68 00       	call   87244f0 <_ZdlPv>
 809c0e4:	c9                   	leave
 809c0e5:	c3                   	ret

```

```c
// CNCryptoRijndael::~CNCryptoRijndael @ 0x809c0c8

/* CNCryptoRijndael::~CNCryptoRijndael() */

void __thiscall CNCryptoRijndael::~CNCryptoRijndael(CNCryptoRijndael *this)

{
  ~CNCryptoRijndael(this);
  operator_delete(this);
  return;
}

```

