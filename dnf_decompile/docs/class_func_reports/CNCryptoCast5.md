# CNCryptoCast5

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 13

---

## CNCryptoCast5

```asm
// === 08099f0c CNCryptoCast5::CNCryptoCast5  [0x08099f0c-0x8099fa9] ===
 8099f0c:	55                   	push   %ebp
 8099f0d:	89 e5                	mov    %esp,%ebp
 8099f0f:	56                   	push   %esi
 8099f10:	53                   	push   %ebx
 8099f11:	83 ec 30             	sub    $0x30,%esp
 8099f14:	8b 45 08             	mov    0x8(%ebp),%eax
 8099f17:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 8099f1e:	00 
 8099f1f:	89 04 24             	mov    %eax,(%esp)
 8099f22:	e8 c9 3f 00 00       	call   809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>
 8099f27:	8b 45 08             	mov    0x8(%ebp),%eax
 8099f2a:	c7 00 48 37 b1 08    	movl   $0x8b13748,(%eax)
 8099f30:	8b 45 08             	mov    0x8(%ebp),%eax
 8099f33:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8099f3a:	c7 04 24 84 00 00 00 	movl   $0x84,(%esp)
 8099f41:	e8 0a a5 68 00       	call   8724450 <_Znwj>
 8099f46:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8099f49:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8099f4d:	74 53                	je     8099fa2 <_ZN13CNCryptoCast5C1Ev+0x96>
 8099f4f:	8b 45 08             	mov    0x8(%ebp),%eax
 8099f52:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8099f55:	89 50 08             	mov    %edx,0x8(%eax)
 8099f58:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 8099f5f:	00 
 8099f60:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8099f63:	89 04 24             	mov    %eax,(%esp)
 8099f66:	e8 47 47 00 00       	call   809e6b2 <_Z17GenerateRandomKeyPhi>
 8099f6b:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8099f72:	00 
 8099f73:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8099f76:	89 44 24 04          	mov    %eax,0x4(%esp)
 8099f7a:	8b 45 08             	mov    0x8(%ebp),%eax
 8099f7d:	89 04 24             	mov    %eax,(%esp)
 8099f80:	e8 db 00 00 00       	call   809a060 <_ZN13CNCryptoCast510InitializeEPKhi>
 8099f85:	eb 1b                	jmp    8099fa2 <_ZN13CNCryptoCast5C1Ev+0x96>
 8099f87:	89 d3                	mov    %edx,%ebx
 8099f89:	89 c6                	mov    %eax,%esi
 8099f8b:	8b 45 08             	mov    0x8(%ebp),%eax
 8099f8e:	89 04 24             	mov    %eax,(%esp)
 8099f91:	e8 72 3f 00 00       	call   809df08 <_ZN12ICryptoGraphD1Ev>
 8099f96:	89 f0                	mov    %esi,%eax
 8099f98:	89 da                	mov    %ebx,%edx
 8099f9a:	89 04 24             	mov    %eax,(%esp)
 8099f9d:	e8 ae 97 a4 00       	call   8ae3750 <_Unwind_Resume>
 8099fa2:	83 c4 30             	add    $0x30,%esp
 8099fa5:	5b                   	pop    %ebx
 8099fa6:	5e                   	pop    %esi
 8099fa7:	5d                   	pop    %ebp
 8099fa8:	c3                   	ret
 8099fa9:	90                   	nop

```

```c
// CNCryptoCast5::CNCryptoCast5 @ 0x8099f0c

/* CNCryptoCast5::CNCryptoCast5() */

void __thiscall CNCryptoCast5::CNCryptoCast5(CNCryptoCast5 *this)

{
  uchar local_20 [16];
  void *local_10;
  
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,10);
  *(undefined ***)this = &PTR__CNCryptoCast5_08b13748;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 08099f41 to 08099f84 has its CatchHandler @ 08099f87 */
  local_10 = operator_new(0x84);
  if (local_10 != (void *)0x0) {
    *(void **)(this + 8) = local_10;
    GenerateRandomKey(local_20,0x10);
    Initialize(this,local_20,0x10);
  }
  return;
}

```

---

## CNCryptoCast5_0809a01c

```asm
// === 0809a01c CNCryptoCast5::CNCryptoCast5  [0x0809a01c-0x809a03f] ===
 809a01c:	55                   	push   %ebp
 809a01d:	89 e5                	mov    %esp,%ebp
 809a01f:	83 ec 18             	sub    $0x18,%esp
 809a022:	8b 45 08             	mov    0x8(%ebp),%eax
 809a025:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 809a02c:	00 
 809a02d:	89 04 24             	mov    %eax,(%esp)
 809a030:	e8 bb 3e 00 00       	call   809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>
 809a035:	8b 45 08             	mov    0x8(%ebp),%eax
 809a038:	c7 00 48 37 b1 08    	movl   $0x8b13748,(%eax)
 809a03e:	c9                   	leave
 809a03f:	c3                   	ret

```

```c
// CNCryptoCast5::CNCryptoCast5 @ 0x809a01c

/* CNCryptoCast5::CNCryptoCast5(CNCryptoCast5 const&) */

void __thiscall CNCryptoCast5::CNCryptoCast5(CNCryptoCast5 *this,CNCryptoCast5 *param_1)

{
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,10);
  *(undefined ***)this = &PTR__CNCryptoCast5_08b13748;
  return;
}

```

---

## Decrypt

```asm
// === 0809a1e0 CNCryptoCast5::Decrypt  [0x0809a1e0-0x809a2b7] ===
 809a1e0:	55                   	push   %ebp
 809a1e1:	89 e5                	mov    %esp,%ebp
 809a1e3:	83 ec 38             	sub    $0x38,%esp
 809a1e6:	8b 45 08             	mov    0x8(%ebp),%eax
 809a1e9:	8b 40 08             	mov    0x8(%eax),%eax
 809a1ec:	85 c0                	test   %eax,%eax
 809a1ee:	75 0a                	jne    809a1fa <_ZN13CNCryptoCast57DecryptEPhi+0x1a>
 809a1f0:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809a1f5:	e9 bb 00 00 00       	jmp    809a2b5 <_ZN13CNCryptoCast57DecryptEPhi+0xd5>
 809a1fa:	8b 45 08             	mov    0x8(%ebp),%eax
 809a1fd:	8b 00                	mov    (%eax),%eax
 809a1ff:	83 c0 24             	add    $0x24,%eax
 809a202:	8b 10                	mov    (%eax),%edx
 809a204:	8b 45 08             	mov    0x8(%ebp),%eax
 809a207:	89 04 24             	mov    %eax,(%esp)
 809a20a:	ff d2                	call   *%edx
 809a20c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809a20f:	8b 55 10             	mov    0x10(%ebp),%edx
 809a212:	89 d0                	mov    %edx,%eax
 809a214:	c1 fa 1f             	sar    $0x1f,%edx
 809a217:	f7 7d e0             	idivl  -0x20(%ebp)
 809a21a:	89 d0                	mov    %edx,%eax
 809a21c:	85 c0                	test   %eax,%eax
 809a21e:	0f 95 c0             	setne  %al
 809a221:	84 c0                	test   %al,%al
 809a223:	74 0a                	je     809a22f <_ZN13CNCryptoCast57DecryptEPhi+0x4f>
 809a225:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809a22a:	e9 86 00 00 00       	jmp    809a2b5 <_ZN13CNCryptoCast57DecryptEPhi+0xd5>
 809a22f:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 809a233:	7f 07                	jg     809a23c <_ZN13CNCryptoCast57DecryptEPhi+0x5c>
 809a235:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809a23a:	eb 79                	jmp    809a2b5 <_ZN13CNCryptoCast57DecryptEPhi+0xd5>
 809a23c:	8b 45 08             	mov    0x8(%ebp),%eax
 809a23f:	8b 40 08             	mov    0x8(%eax),%eax
 809a242:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809a245:	8b 45 08             	mov    0x8(%ebp),%eax
 809a248:	8b 00                	mov    (%eax),%eax
 809a24a:	83 c0 24             	add    $0x24,%eax
 809a24d:	8b 10                	mov    (%eax),%edx
 809a24f:	8b 45 08             	mov    0x8(%ebp),%eax
 809a252:	89 04 24             	mov    %eax,(%esp)
 809a255:	ff d2                	call   *%edx
 809a257:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809a25a:	8b 45 10             	mov    0x10(%ebp),%eax
 809a25d:	89 c2                	mov    %eax,%edx
 809a25f:	c1 fa 1f             	sar    $0x1f,%edx
 809a262:	f7 7d e4             	idivl  -0x1c(%ebp)
 809a265:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809a268:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809a26f:	eb 32                	jmp    809a2a3 <_ZN13CNCryptoCast57DecryptEPhi+0xc3>
 809a271:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809a274:	89 44 24 08          	mov    %eax,0x8(%esp)
 809a278:	8b 45 0c             	mov    0xc(%ebp),%eax
 809a27b:	89 44 24 04          	mov    %eax,0x4(%esp)
 809a27f:	8b 45 0c             	mov    0xc(%ebp),%eax
 809a282:	89 04 24             	mov    %eax,(%esp)
 809a285:	e8 bf 19 01 00       	call   80abc49 <_Z17cast5_ecb_decryptPKhPhP13symmetric_key>
 809a28a:	8b 45 08             	mov    0x8(%ebp),%eax
 809a28d:	8b 00                	mov    (%eax),%eax
 809a28f:	83 c0 24             	add    $0x24,%eax
 809a292:	8b 10                	mov    (%eax),%edx
 809a294:	8b 45 08             	mov    0x8(%ebp),%eax
 809a297:	89 04 24             	mov    %eax,(%esp)
 809a29a:	ff d2                	call   *%edx
 809a29c:	01 45 0c             	add    %eax,0xc(%ebp)
 809a29f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809a2a3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809a2a6:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809a2a9:	0f 9c c0             	setl   %al
 809a2ac:	84 c0                	test   %al,%al
 809a2ae:	75 c1                	jne    809a271 <_ZN13CNCryptoCast57DecryptEPhi+0x91>
 809a2b0:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809a2b5:	c9                   	leave
 809a2b6:	c3                   	ret
 809a2b7:	90                   	nop

```

```c
// CNCryptoCast5::Decrypt @ 0x809a1e0

/* CNCryptoCast5::Decrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoCast5::Decrypt(CNCryptoCast5 *this,uchar *param_1,int param_2)

{
  symmetric_key *psVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_10;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 0x7000000c;
  }
  else {
    iVar3 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar3 == 0) {
      if (param_2 < 1) {
        uVar2 = 0x7000000a;
      }
      else {
        psVar1 = *(symmetric_key **)(this + 8);
        iVar3 = (**(code **)(*(int *)this + 0x24))(this);
        for (local_10 = 0; local_10 < param_2 / iVar3; local_10 = local_10 + 1) {
          cast5_ecb_decrypt(param_1,param_1,psVar1);
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_1 = param_1 + iVar4;
        }
        uVar2 = 0x6fffffff;
      }
    }
    else {
      uVar2 = 0x70000006;
    }
  }
  return uVar2;
}

```

---

## Decrypt_0809a3aa

```asm
// === 0809a3aa CNCryptoCast5::Decrypt  [0x0809a3aa-0x809a49b] ===
 809a3aa:	55                   	push   %ebp
 809a3ab:	89 e5                	mov    %esp,%ebp
 809a3ad:	83 ec 38             	sub    $0x38,%esp
 809a3b0:	8b 45 08             	mov    0x8(%ebp),%eax
 809a3b3:	8b 40 08             	mov    0x8(%eax),%eax
 809a3b6:	85 c0                	test   %eax,%eax
 809a3b8:	75 0a                	jne    809a3c4 <_ZN13CNCryptoCast57DecryptEPKhiPhi+0x1a>
 809a3ba:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809a3bf:	e9 d5 00 00 00       	jmp    809a499 <_ZN13CNCryptoCast57DecryptEPKhiPhi+0xef>
 809a3c4:	8b 45 08             	mov    0x8(%ebp),%eax
 809a3c7:	8b 00                	mov    (%eax),%eax
 809a3c9:	83 c0 24             	add    $0x24,%eax
 809a3cc:	8b 10                	mov    (%eax),%edx
 809a3ce:	8b 45 08             	mov    0x8(%ebp),%eax
 809a3d1:	89 04 24             	mov    %eax,(%esp)
 809a3d4:	ff d2                	call   *%edx
 809a3d6:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809a3d9:	8b 55 10             	mov    0x10(%ebp),%edx
 809a3dc:	89 d0                	mov    %edx,%eax
 809a3de:	c1 fa 1f             	sar    $0x1f,%edx
 809a3e1:	f7 7d e0             	idivl  -0x20(%ebp)
 809a3e4:	89 d0                	mov    %edx,%eax
 809a3e6:	85 c0                	test   %eax,%eax
 809a3e8:	0f 95 c0             	setne  %al
 809a3eb:	84 c0                	test   %al,%al
 809a3ed:	74 0a                	je     809a3f9 <_ZN13CNCryptoCast57DecryptEPKhiPhi+0x4f>
 809a3ef:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809a3f4:	e9 a0 00 00 00       	jmp    809a499 <_ZN13CNCryptoCast57DecryptEPKhiPhi+0xef>
 809a3f9:	8b 45 10             	mov    0x10(%ebp),%eax
 809a3fc:	3b 45 18             	cmp    0x18(%ebp),%eax
 809a3ff:	7e 0a                	jle    809a40b <_ZN13CNCryptoCast57DecryptEPKhiPhi+0x61>
 809a401:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809a406:	e9 8e 00 00 00       	jmp    809a499 <_ZN13CNCryptoCast57DecryptEPKhiPhi+0xef>
 809a40b:	8b 45 08             	mov    0x8(%ebp),%eax
 809a40e:	8b 40 08             	mov    0x8(%eax),%eax
 809a411:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809a414:	8b 45 08             	mov    0x8(%ebp),%eax
 809a417:	8b 00                	mov    (%eax),%eax
 809a419:	83 c0 24             	add    $0x24,%eax
 809a41c:	8b 10                	mov    (%eax),%edx
 809a41e:	8b 45 08             	mov    0x8(%ebp),%eax
 809a421:	89 04 24             	mov    %eax,(%esp)
 809a424:	ff d2                	call   *%edx
 809a426:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809a429:	8b 45 10             	mov    0x10(%ebp),%eax
 809a42c:	89 c2                	mov    %eax,%edx
 809a42e:	c1 fa 1f             	sar    $0x1f,%edx
 809a431:	f7 7d e4             	idivl  -0x1c(%ebp)
 809a434:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809a437:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809a43e:	eb 47                	jmp    809a487 <_ZN13CNCryptoCast57DecryptEPKhiPhi+0xdd>
 809a440:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809a443:	89 44 24 08          	mov    %eax,0x8(%esp)
 809a447:	8b 45 14             	mov    0x14(%ebp),%eax
 809a44a:	89 44 24 04          	mov    %eax,0x4(%esp)
 809a44e:	8b 45 0c             	mov    0xc(%ebp),%eax
 809a451:	89 04 24             	mov    %eax,(%esp)
 809a454:	e8 f0 17 01 00       	call   80abc49 <_Z17cast5_ecb_decryptPKhPhP13symmetric_key>
 809a459:	8b 45 08             	mov    0x8(%ebp),%eax
 809a45c:	8b 00                	mov    (%eax),%eax
 809a45e:	83 c0 24             	add    $0x24,%eax
 809a461:	8b 10                	mov    (%eax),%edx
 809a463:	8b 45 08             	mov    0x8(%ebp),%eax
 809a466:	89 04 24             	mov    %eax,(%esp)
 809a469:	ff d2                	call   *%edx
 809a46b:	01 45 0c             	add    %eax,0xc(%ebp)
 809a46e:	8b 45 08             	mov    0x8(%ebp),%eax
 809a471:	8b 00                	mov    (%eax),%eax
 809a473:	83 c0 24             	add    $0x24,%eax
 809a476:	8b 10                	mov    (%eax),%edx
 809a478:	8b 45 08             	mov    0x8(%ebp),%eax
 809a47b:	89 04 24             	mov    %eax,(%esp)
 809a47e:	ff d2                	call   *%edx
 809a480:	01 45 14             	add    %eax,0x14(%ebp)
 809a483:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809a487:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809a48a:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809a48d:	0f 9c c0             	setl   %al
 809a490:	84 c0                	test   %al,%al
 809a492:	75 ac                	jne    809a440 <_ZN13CNCryptoCast57DecryptEPKhiPhi+0x96>
 809a494:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809a499:	c9                   	leave
 809a49a:	c3                   	ret
 809a49b:	90                   	nop

```

```c
// CNCryptoCast5::Decrypt @ 0x809a3aa

/* CNCryptoCast5::Decrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoCast5::Decrypt(CNCryptoCast5 *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  symmetric_key *psVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_10;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 0x7000000c;
  }
  else {
    iVar3 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar3 == 0) {
      if (param_4 < param_2) {
        uVar2 = 0x7000000a;
      }
      else {
        psVar1 = *(symmetric_key **)(this + 8);
        iVar3 = (**(code **)(*(int *)this + 0x24))(this);
        for (local_10 = 0; local_10 < param_2 / iVar3; local_10 = local_10 + 1) {
          cast5_ecb_decrypt(param_1,param_3,psVar1);
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_1 = param_1 + iVar4;
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_3 = param_3 + iVar4;
        }
        uVar2 = 0x6fffffff;
      }
    }
    else {
      uVar2 = 0x7000000a;
    }
  }
  return uVar2;
}

```

---

## Encrypt

```asm
// === 0809a108 CNCryptoCast5::Encrypt  [0x0809a108-0x809a1df] ===
 809a108:	55                   	push   %ebp
 809a109:	89 e5                	mov    %esp,%ebp
 809a10b:	83 ec 38             	sub    $0x38,%esp
 809a10e:	8b 45 08             	mov    0x8(%ebp),%eax
 809a111:	8b 40 08             	mov    0x8(%eax),%eax
 809a114:	85 c0                	test   %eax,%eax
 809a116:	75 0a                	jne    809a122 <_ZN13CNCryptoCast57EncryptEPhi+0x1a>
 809a118:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809a11d:	e9 bb 00 00 00       	jmp    809a1dd <_ZN13CNCryptoCast57EncryptEPhi+0xd5>
 809a122:	8b 45 08             	mov    0x8(%ebp),%eax
 809a125:	8b 00                	mov    (%eax),%eax
 809a127:	83 c0 24             	add    $0x24,%eax
 809a12a:	8b 10                	mov    (%eax),%edx
 809a12c:	8b 45 08             	mov    0x8(%ebp),%eax
 809a12f:	89 04 24             	mov    %eax,(%esp)
 809a132:	ff d2                	call   *%edx
 809a134:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809a137:	8b 55 10             	mov    0x10(%ebp),%edx
 809a13a:	89 d0                	mov    %edx,%eax
 809a13c:	c1 fa 1f             	sar    $0x1f,%edx
 809a13f:	f7 7d e0             	idivl  -0x20(%ebp)
 809a142:	89 d0                	mov    %edx,%eax
 809a144:	85 c0                	test   %eax,%eax
 809a146:	0f 95 c0             	setne  %al
 809a149:	84 c0                	test   %al,%al
 809a14b:	74 0a                	je     809a157 <_ZN13CNCryptoCast57EncryptEPhi+0x4f>
 809a14d:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809a152:	e9 86 00 00 00       	jmp    809a1dd <_ZN13CNCryptoCast57EncryptEPhi+0xd5>
 809a157:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 809a15b:	7f 07                	jg     809a164 <_ZN13CNCryptoCast57EncryptEPhi+0x5c>
 809a15d:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809a162:	eb 79                	jmp    809a1dd <_ZN13CNCryptoCast57EncryptEPhi+0xd5>
 809a164:	8b 45 08             	mov    0x8(%ebp),%eax
 809a167:	8b 40 08             	mov    0x8(%eax),%eax
 809a16a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809a16d:	8b 45 08             	mov    0x8(%ebp),%eax
 809a170:	8b 00                	mov    (%eax),%eax
 809a172:	83 c0 24             	add    $0x24,%eax
 809a175:	8b 10                	mov    (%eax),%edx
 809a177:	8b 45 08             	mov    0x8(%ebp),%eax
 809a17a:	89 04 24             	mov    %eax,(%esp)
 809a17d:	ff d2                	call   *%edx
 809a17f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809a182:	8b 45 10             	mov    0x10(%ebp),%eax
 809a185:	89 c2                	mov    %eax,%edx
 809a187:	c1 fa 1f             	sar    $0x1f,%edx
 809a18a:	f7 7d e4             	idivl  -0x1c(%ebp)
 809a18d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809a190:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809a197:	eb 32                	jmp    809a1cb <_ZN13CNCryptoCast57EncryptEPhi+0xc3>
 809a199:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809a19c:	89 44 24 08          	mov    %eax,0x8(%esp)
 809a1a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 809a1a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 809a1a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 809a1aa:	89 04 24             	mov    %eax,(%esp)
 809a1ad:	e8 38 17 01 00       	call   80ab8ea <_Z17cast5_ecb_encryptPKhPhP13symmetric_key>
 809a1b2:	8b 45 08             	mov    0x8(%ebp),%eax
 809a1b5:	8b 00                	mov    (%eax),%eax
 809a1b7:	83 c0 24             	add    $0x24,%eax
 809a1ba:	8b 10                	mov    (%eax),%edx
 809a1bc:	8b 45 08             	mov    0x8(%ebp),%eax
 809a1bf:	89 04 24             	mov    %eax,(%esp)
 809a1c2:	ff d2                	call   *%edx
 809a1c4:	01 45 0c             	add    %eax,0xc(%ebp)
 809a1c7:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809a1cb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809a1ce:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809a1d1:	0f 9c c0             	setl   %al
 809a1d4:	84 c0                	test   %al,%al
 809a1d6:	75 c1                	jne    809a199 <_ZN13CNCryptoCast57EncryptEPhi+0x91>
 809a1d8:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809a1dd:	c9                   	leave
 809a1de:	c3                   	ret
 809a1df:	90                   	nop

```

```c
// CNCryptoCast5::Encrypt @ 0x809a108

/* CNCryptoCast5::Encrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoCast5::Encrypt(CNCryptoCast5 *this,uchar *param_1,int param_2)

{
  symmetric_key *psVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_10;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 0x7000000c;
  }
  else {
    iVar3 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar3 == 0) {
      if (param_2 < 1) {
        uVar2 = 0x7000000a;
      }
      else {
        psVar1 = *(symmetric_key **)(this + 8);
        iVar3 = (**(code **)(*(int *)this + 0x24))(this);
        for (local_10 = 0; local_10 < param_2 / iVar3; local_10 = local_10 + 1) {
          cast5_ecb_encrypt(param_1,param_1,psVar1);
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_1 = param_1 + iVar4;
        }
        uVar2 = 0x6fffffff;
      }
    }
    else {
      uVar2 = 0x70000006;
    }
  }
  return uVar2;
}

```

---

## Encrypt_0809a2b8

```asm
// === 0809a2b8 CNCryptoCast5::Encrypt  [0x0809a2b8-0x809a3a9] ===
 809a2b8:	55                   	push   %ebp
 809a2b9:	89 e5                	mov    %esp,%ebp
 809a2bb:	83 ec 38             	sub    $0x38,%esp
 809a2be:	8b 45 08             	mov    0x8(%ebp),%eax
 809a2c1:	8b 40 08             	mov    0x8(%eax),%eax
 809a2c4:	85 c0                	test   %eax,%eax
 809a2c6:	75 0a                	jne    809a2d2 <_ZN13CNCryptoCast57EncryptEPKhiPhi+0x1a>
 809a2c8:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809a2cd:	e9 d5 00 00 00       	jmp    809a3a7 <_ZN13CNCryptoCast57EncryptEPKhiPhi+0xef>
 809a2d2:	8b 45 08             	mov    0x8(%ebp),%eax
 809a2d5:	8b 00                	mov    (%eax),%eax
 809a2d7:	83 c0 24             	add    $0x24,%eax
 809a2da:	8b 10                	mov    (%eax),%edx
 809a2dc:	8b 45 08             	mov    0x8(%ebp),%eax
 809a2df:	89 04 24             	mov    %eax,(%esp)
 809a2e2:	ff d2                	call   *%edx
 809a2e4:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809a2e7:	8b 55 10             	mov    0x10(%ebp),%edx
 809a2ea:	89 d0                	mov    %edx,%eax
 809a2ec:	c1 fa 1f             	sar    $0x1f,%edx
 809a2ef:	f7 7d e0             	idivl  -0x20(%ebp)
 809a2f2:	89 d0                	mov    %edx,%eax
 809a2f4:	85 c0                	test   %eax,%eax
 809a2f6:	0f 95 c0             	setne  %al
 809a2f9:	84 c0                	test   %al,%al
 809a2fb:	74 0a                	je     809a307 <_ZN13CNCryptoCast57EncryptEPKhiPhi+0x4f>
 809a2fd:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809a302:	e9 a0 00 00 00       	jmp    809a3a7 <_ZN13CNCryptoCast57EncryptEPKhiPhi+0xef>
 809a307:	8b 45 10             	mov    0x10(%ebp),%eax
 809a30a:	3b 45 18             	cmp    0x18(%ebp),%eax
 809a30d:	7e 0a                	jle    809a319 <_ZN13CNCryptoCast57EncryptEPKhiPhi+0x61>
 809a30f:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809a314:	e9 8e 00 00 00       	jmp    809a3a7 <_ZN13CNCryptoCast57EncryptEPKhiPhi+0xef>
 809a319:	8b 45 08             	mov    0x8(%ebp),%eax
 809a31c:	8b 40 08             	mov    0x8(%eax),%eax
 809a31f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809a322:	8b 45 08             	mov    0x8(%ebp),%eax
 809a325:	8b 00                	mov    (%eax),%eax
 809a327:	83 c0 24             	add    $0x24,%eax
 809a32a:	8b 10                	mov    (%eax),%edx
 809a32c:	8b 45 08             	mov    0x8(%ebp),%eax
 809a32f:	89 04 24             	mov    %eax,(%esp)
 809a332:	ff d2                	call   *%edx
 809a334:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809a337:	8b 45 10             	mov    0x10(%ebp),%eax
 809a33a:	89 c2                	mov    %eax,%edx
 809a33c:	c1 fa 1f             	sar    $0x1f,%edx
 809a33f:	f7 7d e4             	idivl  -0x1c(%ebp)
 809a342:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809a345:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809a34c:	eb 47                	jmp    809a395 <_ZN13CNCryptoCast57EncryptEPKhiPhi+0xdd>
 809a34e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809a351:	89 44 24 08          	mov    %eax,0x8(%esp)
 809a355:	8b 45 14             	mov    0x14(%ebp),%eax
 809a358:	89 44 24 04          	mov    %eax,0x4(%esp)
 809a35c:	8b 45 0c             	mov    0xc(%ebp),%eax
 809a35f:	89 04 24             	mov    %eax,(%esp)
 809a362:	e8 83 15 01 00       	call   80ab8ea <_Z17cast5_ecb_encryptPKhPhP13symmetric_key>
 809a367:	8b 45 08             	mov    0x8(%ebp),%eax
 809a36a:	8b 00                	mov    (%eax),%eax
 809a36c:	83 c0 24             	add    $0x24,%eax
 809a36f:	8b 10                	mov    (%eax),%edx
 809a371:	8b 45 08             	mov    0x8(%ebp),%eax
 809a374:	89 04 24             	mov    %eax,(%esp)
 809a377:	ff d2                	call   *%edx
 809a379:	01 45 0c             	add    %eax,0xc(%ebp)
 809a37c:	8b 45 08             	mov    0x8(%ebp),%eax
 809a37f:	8b 00                	mov    (%eax),%eax
 809a381:	83 c0 24             	add    $0x24,%eax
 809a384:	8b 10                	mov    (%eax),%edx
 809a386:	8b 45 08             	mov    0x8(%ebp),%eax
 809a389:	89 04 24             	mov    %eax,(%esp)
 809a38c:	ff d2                	call   *%edx
 809a38e:	01 45 14             	add    %eax,0x14(%ebp)
 809a391:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809a395:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809a398:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809a39b:	0f 9c c0             	setl   %al
 809a39e:	84 c0                	test   %al,%al
 809a3a0:	75 ac                	jne    809a34e <_ZN13CNCryptoCast57EncryptEPKhiPhi+0x96>
 809a3a2:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809a3a7:	c9                   	leave
 809a3a8:	c3                   	ret
 809a3a9:	90                   	nop

```

```c
// CNCryptoCast5::Encrypt @ 0x809a2b8

/* CNCryptoCast5::Encrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoCast5::Encrypt(CNCryptoCast5 *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  symmetric_key *psVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_10;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 0x7000000c;
  }
  else {
    iVar3 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar3 == 0) {
      if (param_4 < param_2) {
        uVar2 = 0x7000000a;
      }
      else {
        psVar1 = *(symmetric_key **)(this + 8);
        iVar3 = (**(code **)(*(int *)this + 0x24))(this);
        for (local_10 = 0; local_10 < param_2 / iVar3; local_10 = local_10 + 1) {
          cast5_ecb_encrypt(param_1,param_3,psVar1);
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_1 = param_1 + iVar4;
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_3 = param_3 + iVar4;
        }
        uVar2 = 0x6fffffff;
      }
    }
    else {
      uVar2 = 0x70000006;
    }
  }
  return uVar2;
}

```

---

## GetBlockSize

```asm
// === 0809a49c CNCryptoCast5::GetBlockSize  [0x0809a49c-0x809a4a5] ===
 809a49c:	55                   	push   %ebp
 809a49d:	89 e5                	mov    %esp,%ebp
 809a49f:	b8 08 00 00 00       	mov    $0x8,%eax
 809a4a4:	5d                   	pop    %ebp
 809a4a5:	c3                   	ret

```

```c
// CNCryptoCast5::GetBlockSize @ 0x809a49c

/* CNCryptoCast5::GetBlockSize() const */

undefined4 CNCryptoCast5::GetBlockSize(void)

{
  return 8;
}

```

---

## GetKeySize

```asm
// === 0809a4a6 CNCryptoCast5::GetKeySize  [0x0809a4a6-0x809a4af] ===
 809a4a6:	55                   	push   %ebp
 809a4a7:	89 e5                	mov    %esp,%ebp
 809a4a9:	b8 10 00 00 00       	mov    $0x10,%eax
 809a4ae:	5d                   	pop    %ebp
 809a4af:	c3                   	ret

```

```c
// CNCryptoCast5::GetKeySize @ 0x809a4a6

/* CNCryptoCast5::GetKeySize() const */

undefined4 CNCryptoCast5::GetKeySize(void)

{
  return 0x10;
}

```

---

## Initialize

```asm
// === 0809a060 CNCryptoCast5::Initialize  [0x0809a060-0x809a107] ===
 809a060:	55                   	push   %ebp
 809a061:	89 e5                	mov    %esp,%ebp
 809a063:	83 ec 28             	sub    $0x28,%esp
 809a066:	8b 45 08             	mov    0x8(%ebp),%eax
 809a069:	8b 40 08             	mov    0x8(%eax),%eax
 809a06c:	85 c0                	test   %eax,%eax
 809a06e:	75 0a                	jne    809a07a <_ZN13CNCryptoCast510InitializeEPKhi+0x1a>
 809a070:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809a075:	e9 8b 00 00 00       	jmp    809a105 <_ZN13CNCryptoCast510InitializeEPKhi+0xa5>
 809a07a:	8b 45 08             	mov    0x8(%ebp),%eax
 809a07d:	8b 00                	mov    (%eax),%eax
 809a07f:	83 c0 20             	add    $0x20,%eax
 809a082:	8b 10                	mov    (%eax),%edx
 809a084:	8b 45 08             	mov    0x8(%ebp),%eax
 809a087:	89 04 24             	mov    %eax,(%esp)
 809a08a:	ff d2                	call   *%edx
 809a08c:	3b 45 10             	cmp    0x10(%ebp),%eax
 809a08f:	0f 9f c0             	setg   %al
 809a092:	84 c0                	test   %al,%al
 809a094:	74 07                	je     809a09d <_ZN13CNCryptoCast510InitializeEPKhi+0x3d>
 809a096:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809a09b:	eb 68                	jmp    809a105 <_ZN13CNCryptoCast510InitializeEPKhi+0xa5>
 809a09d:	8b 45 08             	mov    0x8(%ebp),%eax
 809a0a0:	8b 40 08             	mov    0x8(%eax),%eax
 809a0a3:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809a0a6:	8b 45 08             	mov    0x8(%ebp),%eax
 809a0a9:	8b 00                	mov    (%eax),%eax
 809a0ab:	83 c0 20             	add    $0x20,%eax
 809a0ae:	8b 10                	mov    (%eax),%edx
 809a0b0:	8b 45 08             	mov    0x8(%ebp),%eax
 809a0b3:	89 04 24             	mov    %eax,(%esp)
 809a0b6:	ff d2                	call   *%edx
 809a0b8:	8b 55 f0             	mov    -0x10(%ebp),%edx
 809a0bb:	89 54 24 0c          	mov    %edx,0xc(%esp)
 809a0bf:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 809a0c6:	00 
 809a0c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 809a0cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 809a0ce:	89 04 24             	mov    %eax,(%esp)
 809a0d1:	e8 63 13 01 00       	call   80ab439 <_Z11cast5_setupPKhiiP13symmetric_key>
 809a0d6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 809a0d9:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 809a0dd:	75 07                	jne    809a0e6 <_ZN13CNCryptoCast510InitializeEPKhi+0x86>
 809a0df:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809a0e4:	eb 1f                	jmp    809a105 <_ZN13CNCryptoCast510InitializeEPKhi+0xa5>
 809a0e6:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 809a0ea:	75 07                	jne    809a0f3 <_ZN13CNCryptoCast510InitializeEPKhi+0x93>
 809a0ec:	b8 02 00 00 70       	mov    $0x70000002,%eax
 809a0f1:	eb 12                	jmp    809a105 <_ZN13CNCryptoCast510InitializeEPKhi+0xa5>
 809a0f3:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 809a0f7:	75 07                	jne    809a100 <_ZN13CNCryptoCast510InitializeEPKhi+0xa0>
 809a0f9:	b8 1a 00 00 70       	mov    $0x7000001a,%eax
 809a0fe:	eb 05                	jmp    809a105 <_ZN13CNCryptoCast510InitializeEPKhi+0xa5>
 809a100:	b8 00 00 00 70       	mov    $0x70000000,%eax
 809a105:	c9                   	leave
 809a106:	c3                   	ret
 809a107:	90                   	nop

```

```c
// CNCryptoCast5::Initialize @ 0x809a060

/* CNCryptoCast5::Initialize(unsigned char const*, int) */

undefined4 __thiscall CNCryptoCast5::Initialize(CNCryptoCast5 *this,uchar *param_1,int param_2)

{
  symmetric_key *psVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 0x7000000c;
  }
  else {
    iVar3 = (**(code **)(*(int *)this + 0x20))(this);
    if (param_2 < iVar3) {
      uVar2 = 0x7000000a;
    }
    else {
      psVar1 = *(symmetric_key **)(this + 8);
      iVar3 = (**(code **)(*(int *)this + 0x20))(this);
      iVar3 = cast5_setup(param_1,iVar3,0x10,psVar1);
      if (iVar3 == 0) {
        uVar2 = 0x6fffffff;
      }
      else if (iVar3 == 3) {
        uVar2 = 0x70000002;
      }
      else if (iVar3 == 4) {
        uVar2 = 0x7000001a;
      }
      else {
        uVar2 = 0x70000000;
      }
    }
  }
  return uVar2;
}

```

---

## SetMode

```asm
// === 0809a048 CNCryptoCast5::SetMode  [0x0809a048-0x809a05f] ===
 809a048:	55                   	push   %ebp
 809a049:	89 e5                	mov    %esp,%ebp
 809a04b:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 809a04f:	75 07                	jne    809a058 <_ZN13CNCryptoCast57SetModeE16CRYPTO_MODE_TYPE+0x10>
 809a051:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809a056:	eb 05                	jmp    809a05d <_ZN13CNCryptoCast57SetModeE16CRYPTO_MODE_TYPE+0x15>
 809a058:	b8 17 00 00 70       	mov    $0x70000017,%eax
 809a05d:	5d                   	pop    %ebp
 809a05e:	c3                   	ret
 809a05f:	90                   	nop

```

```c
// CNCryptoCast5::SetMode @ 0x809a048

/* CNCryptoCast5::SetMode(CRYPTO_MODE_TYPE) */

undefined4 __thiscall CNCryptoCast5::SetMode(undefined4 this,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0x6fffffff;
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
// === 0809a040 CNCryptoCast5::operator=  [0x0809a040-0x809a047] ===
 809a040:	55                   	push   %ebp
 809a041:	89 e5                	mov    %esp,%ebp
 809a043:	8b 45 08             	mov    0x8(%ebp),%eax
 809a046:	5d                   	pop    %ebp
 809a047:	c3                   	ret

```

```c
// CNCryptoCast5::operator= @ 0x809a040

/* CNCryptoCast5::TEMPNAMEPLACEHOLDERVALUE(CNCryptoCast5 const&) */

CNCryptoCast5 * __thiscall CNCryptoCast5::operator=(CNCryptoCast5 *this,CNCryptoCast5 *param_1)

{
  return this;
}

```

---

## ~CNCryptoCast5

```asm
// === 08099faa CNCryptoCast5::~CNCryptoCast5  [0x08099faa-0x8099ffd] ===
 8099faa:	55                   	push   %ebp
 8099fab:	89 e5                	mov    %esp,%ebp
 8099fad:	83 ec 28             	sub    $0x28,%esp
 8099fb0:	8b 45 08             	mov    0x8(%ebp),%eax
 8099fb3:	c7 00 48 37 b1 08    	movl   $0x8b13748,(%eax)
 8099fb9:	8b 45 08             	mov    0x8(%ebp),%eax
 8099fbc:	8b 40 08             	mov    0x8(%eax),%eax
 8099fbf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8099fc2:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8099fc6:	74 15                	je     8099fdd <_ZN13CNCryptoCast5D1Ev+0x33>
 8099fc8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8099fcb:	89 04 24             	mov    %eax,(%esp)
 8099fce:	e8 1d a5 68 00       	call   87244f0 <_ZdlPv>
 8099fd3:	8b 45 08             	mov    0x8(%ebp),%eax
 8099fd6:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8099fdd:	8b 45 08             	mov    0x8(%ebp),%eax
 8099fe0:	89 04 24             	mov    %eax,(%esp)
 8099fe3:	e8 20 3f 00 00       	call   809df08 <_ZN12ICryptoGraphD1Ev>
 8099fe8:	b8 00 00 00 00       	mov    $0x0,%eax
 8099fed:	84 c0                	test   %al,%al
 8099fef:	74 0b                	je     8099ffc <_ZN13CNCryptoCast5D1Ev+0x52>
 8099ff1:	8b 45 08             	mov    0x8(%ebp),%eax
 8099ff4:	89 04 24             	mov    %eax,(%esp)
 8099ff7:	e8 f4 a4 68 00       	call   87244f0 <_ZdlPv>
 8099ffc:	c9                   	leave
 8099ffd:	c3                   	ret

```

```c
// CNCryptoCast5::~CNCryptoCast5 @ 0x8099faa

/* WARNING: Removing unreachable block (ram,0x08099ff1) */
/* CNCryptoCast5::~CNCryptoCast5() */

void __thiscall CNCryptoCast5::~CNCryptoCast5(CNCryptoCast5 *this)

{
  *(undefined ***)this = &PTR__CNCryptoCast5_08b13748;
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete(*(void **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  ICryptoGraph::~ICryptoGraph((ICryptoGraph *)this);
  return;
}

```

---

## ~CNCryptoCast5_08099ffe

```asm
// === 08099ffe CNCryptoCast5::~CNCryptoCast5  [0x08099ffe-0x809a01b] ===
 8099ffe:	55                   	push   %ebp
 8099fff:	89 e5                	mov    %esp,%ebp
 809a001:	83 ec 18             	sub    $0x18,%esp
 809a004:	8b 45 08             	mov    0x8(%ebp),%eax
 809a007:	89 04 24             	mov    %eax,(%esp)
 809a00a:	e8 9b ff ff ff       	call   8099faa <_ZN13CNCryptoCast5D1Ev>
 809a00f:	8b 45 08             	mov    0x8(%ebp),%eax
 809a012:	89 04 24             	mov    %eax,(%esp)
 809a015:	e8 d6 a4 68 00       	call   87244f0 <_ZdlPv>
 809a01a:	c9                   	leave
 809a01b:	c3                   	ret

```

```c
// CNCryptoCast5::~CNCryptoCast5 @ 0x8099ffe

/* CNCryptoCast5::~CNCryptoCast5() */

void __thiscall CNCryptoCast5::~CNCryptoCast5(CNCryptoCast5 *this)

{
  ~CNCryptoCast5(this);
  operator_delete(this);
  return;
}

```

