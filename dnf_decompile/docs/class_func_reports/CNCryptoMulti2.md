# CNCryptoMulti2

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 13

---

## CNCryptoMulti2

```asm
// === 0809aff8 CNCryptoMulti2::CNCryptoMulti2  [0x0809aff8-0x809b095] ===
 809aff8:	55                   	push   %ebp
 809aff9:	89 e5                	mov    %esp,%ebp
 809affb:	56                   	push   %esi
 809affc:	53                   	push   %ebx
 809affd:	83 ec 40             	sub    $0x40,%esp
 809b000:	8b 45 08             	mov    0x8(%ebp),%eax
 809b003:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 809b00a:	00 
 809b00b:	89 04 24             	mov    %eax,(%esp)
 809b00e:	e8 dd 2e 00 00       	call   809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>
 809b013:	8b 45 08             	mov    0x8(%ebp),%eax
 809b016:	c7 00 68 38 b1 08    	movl   $0x8b13868,(%eax)
 809b01c:	8b 45 08             	mov    0x8(%ebp),%eax
 809b01f:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 809b026:	c7 04 24 24 00 00 00 	movl   $0x24,(%esp)
 809b02d:	e8 1e 94 68 00       	call   8724450 <_Znwj>
 809b032:	89 45 f4             	mov    %eax,-0xc(%ebp)
 809b035:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 809b039:	74 53                	je     809b08e <_ZN14CNCryptoMulti2C1Ev+0x96>
 809b03b:	8b 45 08             	mov    0x8(%ebp),%eax
 809b03e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 809b041:	89 50 08             	mov    %edx,0x8(%eax)
 809b044:	c7 44 24 04 28 00 00 	movl   $0x28,0x4(%esp)
 809b04b:	00 
 809b04c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 809b04f:	89 04 24             	mov    %eax,(%esp)
 809b052:	e8 5b 36 00 00       	call   809e6b2 <_Z17GenerateRandomKeyPhi>
 809b057:	c7 44 24 08 28 00 00 	movl   $0x28,0x8(%esp)
 809b05e:	00 
 809b05f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 809b062:	89 44 24 04          	mov    %eax,0x4(%esp)
 809b066:	8b 45 08             	mov    0x8(%ebp),%eax
 809b069:	89 04 24             	mov    %eax,(%esp)
 809b06c:	e8 db 00 00 00       	call   809b14c <_ZN14CNCryptoMulti210InitializeEPKhi>
 809b071:	eb 1b                	jmp    809b08e <_ZN14CNCryptoMulti2C1Ev+0x96>
 809b073:	89 d3                	mov    %edx,%ebx
 809b075:	89 c6                	mov    %eax,%esi
 809b077:	8b 45 08             	mov    0x8(%ebp),%eax
 809b07a:	89 04 24             	mov    %eax,(%esp)
 809b07d:	e8 86 2e 00 00       	call   809df08 <_ZN12ICryptoGraphD1Ev>
 809b082:	89 f0                	mov    %esi,%eax
 809b084:	89 da                	mov    %ebx,%edx
 809b086:	89 04 24             	mov    %eax,(%esp)
 809b089:	e8 c2 86 a4 00       	call   8ae3750 <_Unwind_Resume>
 809b08e:	83 c4 40             	add    $0x40,%esp
 809b091:	5b                   	pop    %ebx
 809b092:	5e                   	pop    %esi
 809b093:	5d                   	pop    %ebp
 809b094:	c3                   	ret
 809b095:	90                   	nop

```

```c
// CNCryptoMulti2::CNCryptoMulti2 @ 0x809aff8

/* CNCryptoMulti2::CNCryptoMulti2() */

void __thiscall CNCryptoMulti2::CNCryptoMulti2(CNCryptoMulti2 *this)

{
  uchar local_38 [40];
  void *local_10;
  
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,0xc);
  *(undefined ***)this = &PTR__CNCryptoMulti2_08b13868;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 0809b02d to 0809b070 has its CatchHandler @ 0809b073 */
  local_10 = operator_new(0x24);
  if (local_10 != (void *)0x0) {
    *(void **)(this + 8) = local_10;
    GenerateRandomKey(local_38,0x28);
    Initialize(this,local_38,0x28);
  }
  return;
}

```

---

## CNCryptoMulti2_0809b108

```asm
// === 0809b108 CNCryptoMulti2::CNCryptoMulti2  [0x0809b108-0x809b12b] ===
 809b108:	55                   	push   %ebp
 809b109:	89 e5                	mov    %esp,%ebp
 809b10b:	83 ec 18             	sub    $0x18,%esp
 809b10e:	8b 45 08             	mov    0x8(%ebp),%eax
 809b111:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 809b118:	00 
 809b119:	89 04 24             	mov    %eax,(%esp)
 809b11c:	e8 cf 2d 00 00       	call   809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>
 809b121:	8b 45 08             	mov    0x8(%ebp),%eax
 809b124:	c7 00 68 38 b1 08    	movl   $0x8b13868,(%eax)
 809b12a:	c9                   	leave
 809b12b:	c3                   	ret

```

```c
// CNCryptoMulti2::CNCryptoMulti2 @ 0x809b108

/* CNCryptoMulti2::CNCryptoMulti2(CNCryptoMulti2 const&) */

void __thiscall CNCryptoMulti2::CNCryptoMulti2(CNCryptoMulti2 *this,CNCryptoMulti2 *param_1)

{
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,0xc);
  *(undefined ***)this = &PTR__CNCryptoMulti2_08b13868;
  return;
}

```

---

## Decrypt

```asm
// === 0809b2cc CNCryptoMulti2::Decrypt  [0x0809b2cc-0x809b3a3] ===
 809b2cc:	55                   	push   %ebp
 809b2cd:	89 e5                	mov    %esp,%ebp
 809b2cf:	83 ec 38             	sub    $0x38,%esp
 809b2d2:	8b 45 08             	mov    0x8(%ebp),%eax
 809b2d5:	8b 40 08             	mov    0x8(%eax),%eax
 809b2d8:	85 c0                	test   %eax,%eax
 809b2da:	75 0a                	jne    809b2e6 <_ZN14CNCryptoMulti27DecryptEPhi+0x1a>
 809b2dc:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809b2e1:	e9 bb 00 00 00       	jmp    809b3a1 <_ZN14CNCryptoMulti27DecryptEPhi+0xd5>
 809b2e6:	8b 45 08             	mov    0x8(%ebp),%eax
 809b2e9:	8b 00                	mov    (%eax),%eax
 809b2eb:	83 c0 24             	add    $0x24,%eax
 809b2ee:	8b 10                	mov    (%eax),%edx
 809b2f0:	8b 45 08             	mov    0x8(%ebp),%eax
 809b2f3:	89 04 24             	mov    %eax,(%esp)
 809b2f6:	ff d2                	call   *%edx
 809b2f8:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809b2fb:	8b 55 10             	mov    0x10(%ebp),%edx
 809b2fe:	89 d0                	mov    %edx,%eax
 809b300:	c1 fa 1f             	sar    $0x1f,%edx
 809b303:	f7 7d e0             	idivl  -0x20(%ebp)
 809b306:	89 d0                	mov    %edx,%eax
 809b308:	85 c0                	test   %eax,%eax
 809b30a:	0f 95 c0             	setne  %al
 809b30d:	84 c0                	test   %al,%al
 809b30f:	74 0a                	je     809b31b <_ZN14CNCryptoMulti27DecryptEPhi+0x4f>
 809b311:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809b316:	e9 86 00 00 00       	jmp    809b3a1 <_ZN14CNCryptoMulti27DecryptEPhi+0xd5>
 809b31b:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 809b31f:	7f 07                	jg     809b328 <_ZN14CNCryptoMulti27DecryptEPhi+0x5c>
 809b321:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809b326:	eb 79                	jmp    809b3a1 <_ZN14CNCryptoMulti27DecryptEPhi+0xd5>
 809b328:	8b 45 08             	mov    0x8(%ebp),%eax
 809b32b:	8b 40 08             	mov    0x8(%eax),%eax
 809b32e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809b331:	8b 45 08             	mov    0x8(%ebp),%eax
 809b334:	8b 00                	mov    (%eax),%eax
 809b336:	83 c0 24             	add    $0x24,%eax
 809b339:	8b 10                	mov    (%eax),%edx
 809b33b:	8b 45 08             	mov    0x8(%ebp),%eax
 809b33e:	89 04 24             	mov    %eax,(%esp)
 809b341:	ff d2                	call   *%edx
 809b343:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809b346:	8b 45 10             	mov    0x10(%ebp),%eax
 809b349:	89 c2                	mov    %eax,%edx
 809b34b:	c1 fa 1f             	sar    $0x1f,%edx
 809b34e:	f7 7d e4             	idivl  -0x1c(%ebp)
 809b351:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809b354:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809b35b:	eb 32                	jmp    809b38f <_ZN14CNCryptoMulti27DecryptEPhi+0xc3>
 809b35d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809b360:	89 44 24 08          	mov    %eax,0x8(%esp)
 809b364:	8b 45 0c             	mov    0xc(%ebp),%eax
 809b367:	89 44 24 04          	mov    %eax,0x4(%esp)
 809b36b:	8b 45 0c             	mov    0xc(%ebp),%eax
 809b36e:	89 04 24             	mov    %eax,(%esp)
 809b371:	e8 13 9a 01 00       	call   80b4d89 <_Z18multi2_ecb_decryptPKhPhP13symmetric_key>
 809b376:	8b 45 08             	mov    0x8(%ebp),%eax
 809b379:	8b 00                	mov    (%eax),%eax
 809b37b:	83 c0 24             	add    $0x24,%eax
 809b37e:	8b 10                	mov    (%eax),%edx
 809b380:	8b 45 08             	mov    0x8(%ebp),%eax
 809b383:	89 04 24             	mov    %eax,(%esp)
 809b386:	ff d2                	call   *%edx
 809b388:	01 45 0c             	add    %eax,0xc(%ebp)
 809b38b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809b38f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809b392:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809b395:	0f 9c c0             	setl   %al
 809b398:	84 c0                	test   %al,%al
 809b39a:	75 c1                	jne    809b35d <_ZN14CNCryptoMulti27DecryptEPhi+0x91>
 809b39c:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809b3a1:	c9                   	leave
 809b3a2:	c3                   	ret
 809b3a3:	90                   	nop

```

```c
// CNCryptoMulti2::Decrypt @ 0x809b2cc

/* CNCryptoMulti2::Decrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoMulti2::Decrypt(CNCryptoMulti2 *this,uchar *param_1,int param_2)

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
          multi2_ecb_decrypt(param_1,param_1,psVar1);
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

## Decrypt_0809b496

```asm
// === 0809b496 CNCryptoMulti2::Decrypt  [0x0809b496-0x809b587] ===
 809b496:	55                   	push   %ebp
 809b497:	89 e5                	mov    %esp,%ebp
 809b499:	83 ec 38             	sub    $0x38,%esp
 809b49c:	8b 45 08             	mov    0x8(%ebp),%eax
 809b49f:	8b 40 08             	mov    0x8(%eax),%eax
 809b4a2:	85 c0                	test   %eax,%eax
 809b4a4:	75 0a                	jne    809b4b0 <_ZN14CNCryptoMulti27DecryptEPKhiPhi+0x1a>
 809b4a6:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809b4ab:	e9 d5 00 00 00       	jmp    809b585 <_ZN14CNCryptoMulti27DecryptEPKhiPhi+0xef>
 809b4b0:	8b 45 08             	mov    0x8(%ebp),%eax
 809b4b3:	8b 00                	mov    (%eax),%eax
 809b4b5:	83 c0 24             	add    $0x24,%eax
 809b4b8:	8b 10                	mov    (%eax),%edx
 809b4ba:	8b 45 08             	mov    0x8(%ebp),%eax
 809b4bd:	89 04 24             	mov    %eax,(%esp)
 809b4c0:	ff d2                	call   *%edx
 809b4c2:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809b4c5:	8b 55 10             	mov    0x10(%ebp),%edx
 809b4c8:	89 d0                	mov    %edx,%eax
 809b4ca:	c1 fa 1f             	sar    $0x1f,%edx
 809b4cd:	f7 7d e0             	idivl  -0x20(%ebp)
 809b4d0:	89 d0                	mov    %edx,%eax
 809b4d2:	85 c0                	test   %eax,%eax
 809b4d4:	0f 95 c0             	setne  %al
 809b4d7:	84 c0                	test   %al,%al
 809b4d9:	74 0a                	je     809b4e5 <_ZN14CNCryptoMulti27DecryptEPKhiPhi+0x4f>
 809b4db:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809b4e0:	e9 a0 00 00 00       	jmp    809b585 <_ZN14CNCryptoMulti27DecryptEPKhiPhi+0xef>
 809b4e5:	8b 45 10             	mov    0x10(%ebp),%eax
 809b4e8:	3b 45 18             	cmp    0x18(%ebp),%eax
 809b4eb:	7e 0a                	jle    809b4f7 <_ZN14CNCryptoMulti27DecryptEPKhiPhi+0x61>
 809b4ed:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809b4f2:	e9 8e 00 00 00       	jmp    809b585 <_ZN14CNCryptoMulti27DecryptEPKhiPhi+0xef>
 809b4f7:	8b 45 08             	mov    0x8(%ebp),%eax
 809b4fa:	8b 40 08             	mov    0x8(%eax),%eax
 809b4fd:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809b500:	8b 45 08             	mov    0x8(%ebp),%eax
 809b503:	8b 00                	mov    (%eax),%eax
 809b505:	83 c0 24             	add    $0x24,%eax
 809b508:	8b 10                	mov    (%eax),%edx
 809b50a:	8b 45 08             	mov    0x8(%ebp),%eax
 809b50d:	89 04 24             	mov    %eax,(%esp)
 809b510:	ff d2                	call   *%edx
 809b512:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809b515:	8b 45 10             	mov    0x10(%ebp),%eax
 809b518:	89 c2                	mov    %eax,%edx
 809b51a:	c1 fa 1f             	sar    $0x1f,%edx
 809b51d:	f7 7d e4             	idivl  -0x1c(%ebp)
 809b520:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809b523:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809b52a:	eb 47                	jmp    809b573 <_ZN14CNCryptoMulti27DecryptEPKhiPhi+0xdd>
 809b52c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809b52f:	89 44 24 08          	mov    %eax,0x8(%esp)
 809b533:	8b 45 14             	mov    0x14(%ebp),%eax
 809b536:	89 44 24 04          	mov    %eax,0x4(%esp)
 809b53a:	8b 45 0c             	mov    0xc(%ebp),%eax
 809b53d:	89 04 24             	mov    %eax,(%esp)
 809b540:	e8 44 98 01 00       	call   80b4d89 <_Z18multi2_ecb_decryptPKhPhP13symmetric_key>
 809b545:	8b 45 08             	mov    0x8(%ebp),%eax
 809b548:	8b 00                	mov    (%eax),%eax
 809b54a:	83 c0 24             	add    $0x24,%eax
 809b54d:	8b 10                	mov    (%eax),%edx
 809b54f:	8b 45 08             	mov    0x8(%ebp),%eax
 809b552:	89 04 24             	mov    %eax,(%esp)
 809b555:	ff d2                	call   *%edx
 809b557:	01 45 0c             	add    %eax,0xc(%ebp)
 809b55a:	8b 45 08             	mov    0x8(%ebp),%eax
 809b55d:	8b 00                	mov    (%eax),%eax
 809b55f:	83 c0 24             	add    $0x24,%eax
 809b562:	8b 10                	mov    (%eax),%edx
 809b564:	8b 45 08             	mov    0x8(%ebp),%eax
 809b567:	89 04 24             	mov    %eax,(%esp)
 809b56a:	ff d2                	call   *%edx
 809b56c:	01 45 14             	add    %eax,0x14(%ebp)
 809b56f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809b573:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809b576:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809b579:	0f 9c c0             	setl   %al
 809b57c:	84 c0                	test   %al,%al
 809b57e:	75 ac                	jne    809b52c <_ZN14CNCryptoMulti27DecryptEPKhiPhi+0x96>
 809b580:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809b585:	c9                   	leave
 809b586:	c3                   	ret
 809b587:	90                   	nop

```

```c
// CNCryptoMulti2::Decrypt @ 0x809b496

/* CNCryptoMulti2::Decrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoMulti2::Decrypt(CNCryptoMulti2 *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

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
          multi2_ecb_decrypt(param_1,param_3,psVar1);
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
// === 0809b1f4 CNCryptoMulti2::Encrypt  [0x0809b1f4-0x809b2cb] ===
 809b1f4:	55                   	push   %ebp
 809b1f5:	89 e5                	mov    %esp,%ebp
 809b1f7:	83 ec 38             	sub    $0x38,%esp
 809b1fa:	8b 45 08             	mov    0x8(%ebp),%eax
 809b1fd:	8b 40 08             	mov    0x8(%eax),%eax
 809b200:	85 c0                	test   %eax,%eax
 809b202:	75 0a                	jne    809b20e <_ZN14CNCryptoMulti27EncryptEPhi+0x1a>
 809b204:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809b209:	e9 bb 00 00 00       	jmp    809b2c9 <_ZN14CNCryptoMulti27EncryptEPhi+0xd5>
 809b20e:	8b 45 08             	mov    0x8(%ebp),%eax
 809b211:	8b 00                	mov    (%eax),%eax
 809b213:	83 c0 24             	add    $0x24,%eax
 809b216:	8b 10                	mov    (%eax),%edx
 809b218:	8b 45 08             	mov    0x8(%ebp),%eax
 809b21b:	89 04 24             	mov    %eax,(%esp)
 809b21e:	ff d2                	call   *%edx
 809b220:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809b223:	8b 55 10             	mov    0x10(%ebp),%edx
 809b226:	89 d0                	mov    %edx,%eax
 809b228:	c1 fa 1f             	sar    $0x1f,%edx
 809b22b:	f7 7d e0             	idivl  -0x20(%ebp)
 809b22e:	89 d0                	mov    %edx,%eax
 809b230:	85 c0                	test   %eax,%eax
 809b232:	0f 95 c0             	setne  %al
 809b235:	84 c0                	test   %al,%al
 809b237:	74 0a                	je     809b243 <_ZN14CNCryptoMulti27EncryptEPhi+0x4f>
 809b239:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809b23e:	e9 86 00 00 00       	jmp    809b2c9 <_ZN14CNCryptoMulti27EncryptEPhi+0xd5>
 809b243:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 809b247:	7f 07                	jg     809b250 <_ZN14CNCryptoMulti27EncryptEPhi+0x5c>
 809b249:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809b24e:	eb 79                	jmp    809b2c9 <_ZN14CNCryptoMulti27EncryptEPhi+0xd5>
 809b250:	8b 45 08             	mov    0x8(%ebp),%eax
 809b253:	8b 40 08             	mov    0x8(%eax),%eax
 809b256:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809b259:	8b 45 08             	mov    0x8(%ebp),%eax
 809b25c:	8b 00                	mov    (%eax),%eax
 809b25e:	83 c0 24             	add    $0x24,%eax
 809b261:	8b 10                	mov    (%eax),%edx
 809b263:	8b 45 08             	mov    0x8(%ebp),%eax
 809b266:	89 04 24             	mov    %eax,(%esp)
 809b269:	ff d2                	call   *%edx
 809b26b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809b26e:	8b 45 10             	mov    0x10(%ebp),%eax
 809b271:	89 c2                	mov    %eax,%edx
 809b273:	c1 fa 1f             	sar    $0x1f,%edx
 809b276:	f7 7d e4             	idivl  -0x1c(%ebp)
 809b279:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809b27c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809b283:	eb 32                	jmp    809b2b7 <_ZN14CNCryptoMulti27EncryptEPhi+0xc3>
 809b285:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809b288:	89 44 24 08          	mov    %eax,0x8(%esp)
 809b28c:	8b 45 0c             	mov    0xc(%ebp),%eax
 809b28f:	89 44 24 04          	mov    %eax,0x4(%esp)
 809b293:	8b 45 0c             	mov    0xc(%ebp),%eax
 809b296:	89 04 24             	mov    %eax,(%esp)
 809b299:	e8 d2 99 01 00       	call   80b4c70 <_Z18multi2_ecb_encryptPKhPhP13symmetric_key>
 809b29e:	8b 45 08             	mov    0x8(%ebp),%eax
 809b2a1:	8b 00                	mov    (%eax),%eax
 809b2a3:	83 c0 24             	add    $0x24,%eax
 809b2a6:	8b 10                	mov    (%eax),%edx
 809b2a8:	8b 45 08             	mov    0x8(%ebp),%eax
 809b2ab:	89 04 24             	mov    %eax,(%esp)
 809b2ae:	ff d2                	call   *%edx
 809b2b0:	01 45 0c             	add    %eax,0xc(%ebp)
 809b2b3:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809b2b7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809b2ba:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809b2bd:	0f 9c c0             	setl   %al
 809b2c0:	84 c0                	test   %al,%al
 809b2c2:	75 c1                	jne    809b285 <_ZN14CNCryptoMulti27EncryptEPhi+0x91>
 809b2c4:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809b2c9:	c9                   	leave
 809b2ca:	c3                   	ret
 809b2cb:	90                   	nop

```

```c
// CNCryptoMulti2::Encrypt @ 0x809b1f4

/* CNCryptoMulti2::Encrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoMulti2::Encrypt(CNCryptoMulti2 *this,uchar *param_1,int param_2)

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
          multi2_ecb_encrypt(param_1,param_1,psVar1);
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

## Encrypt_0809b3a4

```asm
// === 0809b3a4 CNCryptoMulti2::Encrypt  [0x0809b3a4-0x809b495] ===
 809b3a4:	55                   	push   %ebp
 809b3a5:	89 e5                	mov    %esp,%ebp
 809b3a7:	83 ec 38             	sub    $0x38,%esp
 809b3aa:	8b 45 08             	mov    0x8(%ebp),%eax
 809b3ad:	8b 40 08             	mov    0x8(%eax),%eax
 809b3b0:	85 c0                	test   %eax,%eax
 809b3b2:	75 0a                	jne    809b3be <_ZN14CNCryptoMulti27EncryptEPKhiPhi+0x1a>
 809b3b4:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809b3b9:	e9 d5 00 00 00       	jmp    809b493 <_ZN14CNCryptoMulti27EncryptEPKhiPhi+0xef>
 809b3be:	8b 45 08             	mov    0x8(%ebp),%eax
 809b3c1:	8b 00                	mov    (%eax),%eax
 809b3c3:	83 c0 24             	add    $0x24,%eax
 809b3c6:	8b 10                	mov    (%eax),%edx
 809b3c8:	8b 45 08             	mov    0x8(%ebp),%eax
 809b3cb:	89 04 24             	mov    %eax,(%esp)
 809b3ce:	ff d2                	call   *%edx
 809b3d0:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809b3d3:	8b 55 10             	mov    0x10(%ebp),%edx
 809b3d6:	89 d0                	mov    %edx,%eax
 809b3d8:	c1 fa 1f             	sar    $0x1f,%edx
 809b3db:	f7 7d e0             	idivl  -0x20(%ebp)
 809b3de:	89 d0                	mov    %edx,%eax
 809b3e0:	85 c0                	test   %eax,%eax
 809b3e2:	0f 95 c0             	setne  %al
 809b3e5:	84 c0                	test   %al,%al
 809b3e7:	74 0a                	je     809b3f3 <_ZN14CNCryptoMulti27EncryptEPKhiPhi+0x4f>
 809b3e9:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809b3ee:	e9 a0 00 00 00       	jmp    809b493 <_ZN14CNCryptoMulti27EncryptEPKhiPhi+0xef>
 809b3f3:	8b 45 10             	mov    0x10(%ebp),%eax
 809b3f6:	3b 45 18             	cmp    0x18(%ebp),%eax
 809b3f9:	7e 0a                	jle    809b405 <_ZN14CNCryptoMulti27EncryptEPKhiPhi+0x61>
 809b3fb:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809b400:	e9 8e 00 00 00       	jmp    809b493 <_ZN14CNCryptoMulti27EncryptEPKhiPhi+0xef>
 809b405:	8b 45 08             	mov    0x8(%ebp),%eax
 809b408:	8b 40 08             	mov    0x8(%eax),%eax
 809b40b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809b40e:	8b 45 08             	mov    0x8(%ebp),%eax
 809b411:	8b 00                	mov    (%eax),%eax
 809b413:	83 c0 24             	add    $0x24,%eax
 809b416:	8b 10                	mov    (%eax),%edx
 809b418:	8b 45 08             	mov    0x8(%ebp),%eax
 809b41b:	89 04 24             	mov    %eax,(%esp)
 809b41e:	ff d2                	call   *%edx
 809b420:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809b423:	8b 45 10             	mov    0x10(%ebp),%eax
 809b426:	89 c2                	mov    %eax,%edx
 809b428:	c1 fa 1f             	sar    $0x1f,%edx
 809b42b:	f7 7d e4             	idivl  -0x1c(%ebp)
 809b42e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809b431:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809b438:	eb 47                	jmp    809b481 <_ZN14CNCryptoMulti27EncryptEPKhiPhi+0xdd>
 809b43a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809b43d:	89 44 24 08          	mov    %eax,0x8(%esp)
 809b441:	8b 45 14             	mov    0x14(%ebp),%eax
 809b444:	89 44 24 04          	mov    %eax,0x4(%esp)
 809b448:	8b 45 0c             	mov    0xc(%ebp),%eax
 809b44b:	89 04 24             	mov    %eax,(%esp)
 809b44e:	e8 1d 98 01 00       	call   80b4c70 <_Z18multi2_ecb_encryptPKhPhP13symmetric_key>
 809b453:	8b 45 08             	mov    0x8(%ebp),%eax
 809b456:	8b 00                	mov    (%eax),%eax
 809b458:	83 c0 24             	add    $0x24,%eax
 809b45b:	8b 10                	mov    (%eax),%edx
 809b45d:	8b 45 08             	mov    0x8(%ebp),%eax
 809b460:	89 04 24             	mov    %eax,(%esp)
 809b463:	ff d2                	call   *%edx
 809b465:	01 45 0c             	add    %eax,0xc(%ebp)
 809b468:	8b 45 08             	mov    0x8(%ebp),%eax
 809b46b:	8b 00                	mov    (%eax),%eax
 809b46d:	83 c0 24             	add    $0x24,%eax
 809b470:	8b 10                	mov    (%eax),%edx
 809b472:	8b 45 08             	mov    0x8(%ebp),%eax
 809b475:	89 04 24             	mov    %eax,(%esp)
 809b478:	ff d2                	call   *%edx
 809b47a:	01 45 14             	add    %eax,0x14(%ebp)
 809b47d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809b481:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809b484:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809b487:	0f 9c c0             	setl   %al
 809b48a:	84 c0                	test   %al,%al
 809b48c:	75 ac                	jne    809b43a <_ZN14CNCryptoMulti27EncryptEPKhiPhi+0x96>
 809b48e:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809b493:	c9                   	leave
 809b494:	c3                   	ret
 809b495:	90                   	nop

```

```c
// CNCryptoMulti2::Encrypt @ 0x809b3a4

/* CNCryptoMulti2::Encrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoMulti2::Encrypt(CNCryptoMulti2 *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

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
          multi2_ecb_encrypt(param_1,param_3,psVar1);
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
// === 0809b588 CNCryptoMulti2::GetBlockSize  [0x0809b588-0x809b591] ===
 809b588:	55                   	push   %ebp
 809b589:	89 e5                	mov    %esp,%ebp
 809b58b:	b8 08 00 00 00       	mov    $0x8,%eax
 809b590:	5d                   	pop    %ebp
 809b591:	c3                   	ret

```

```c
// CNCryptoMulti2::GetBlockSize @ 0x809b588

/* CNCryptoMulti2::GetBlockSize() const */

undefined4 CNCryptoMulti2::GetBlockSize(void)

{
  return 8;
}

```

---

## GetKeySize

```asm
// === 0809b592 CNCryptoMulti2::GetKeySize  [0x0809b592-0x809b59b] ===
 809b592:	55                   	push   %ebp
 809b593:	89 e5                	mov    %esp,%ebp
 809b595:	b8 28 00 00 00       	mov    $0x28,%eax
 809b59a:	5d                   	pop    %ebp
 809b59b:	c3                   	ret

```

```c
// CNCryptoMulti2::GetKeySize @ 0x809b592

/* CNCryptoMulti2::GetKeySize() const */

undefined4 CNCryptoMulti2::GetKeySize(void)

{
  return 0x28;
}

```

---

## Initialize

```asm
// === 0809b14c CNCryptoMulti2::Initialize  [0x0809b14c-0x809b1f3] ===
 809b14c:	55                   	push   %ebp
 809b14d:	89 e5                	mov    %esp,%ebp
 809b14f:	83 ec 28             	sub    $0x28,%esp
 809b152:	8b 45 08             	mov    0x8(%ebp),%eax
 809b155:	8b 40 08             	mov    0x8(%eax),%eax
 809b158:	85 c0                	test   %eax,%eax
 809b15a:	75 0a                	jne    809b166 <_ZN14CNCryptoMulti210InitializeEPKhi+0x1a>
 809b15c:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809b161:	e9 8b 00 00 00       	jmp    809b1f1 <_ZN14CNCryptoMulti210InitializeEPKhi+0xa5>
 809b166:	8b 45 08             	mov    0x8(%ebp),%eax
 809b169:	8b 00                	mov    (%eax),%eax
 809b16b:	83 c0 20             	add    $0x20,%eax
 809b16e:	8b 10                	mov    (%eax),%edx
 809b170:	8b 45 08             	mov    0x8(%ebp),%eax
 809b173:	89 04 24             	mov    %eax,(%esp)
 809b176:	ff d2                	call   *%edx
 809b178:	3b 45 10             	cmp    0x10(%ebp),%eax
 809b17b:	0f 9f c0             	setg   %al
 809b17e:	84 c0                	test   %al,%al
 809b180:	74 07                	je     809b189 <_ZN14CNCryptoMulti210InitializeEPKhi+0x3d>
 809b182:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809b187:	eb 68                	jmp    809b1f1 <_ZN14CNCryptoMulti210InitializeEPKhi+0xa5>
 809b189:	8b 45 08             	mov    0x8(%ebp),%eax
 809b18c:	8b 40 08             	mov    0x8(%eax),%eax
 809b18f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809b192:	8b 45 08             	mov    0x8(%ebp),%eax
 809b195:	8b 00                	mov    (%eax),%eax
 809b197:	83 c0 20             	add    $0x20,%eax
 809b19a:	8b 10                	mov    (%eax),%edx
 809b19c:	8b 45 08             	mov    0x8(%ebp),%eax
 809b19f:	89 04 24             	mov    %eax,(%esp)
 809b1a2:	ff d2                	call   *%edx
 809b1a4:	8b 55 f0             	mov    -0x10(%ebp),%edx
 809b1a7:	89 54 24 0c          	mov    %edx,0xc(%esp)
 809b1ab:	c7 44 24 08 80 00 00 	movl   $0x80,0x8(%esp)
 809b1b2:	00 
 809b1b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 809b1b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 809b1ba:	89 04 24             	mov    %eax,(%esp)
 809b1bd:	e8 3c 99 01 00       	call   80b4afe <_Z12multi2_setupPKhiiP13symmetric_key>
 809b1c2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 809b1c5:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 809b1c9:	75 07                	jne    809b1d2 <_ZN14CNCryptoMulti210InitializeEPKhi+0x86>
 809b1cb:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809b1d0:	eb 1f                	jmp    809b1f1 <_ZN14CNCryptoMulti210InitializeEPKhi+0xa5>
 809b1d2:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 809b1d6:	75 07                	jne    809b1df <_ZN14CNCryptoMulti210InitializeEPKhi+0x93>
 809b1d8:	b8 02 00 00 70       	mov    $0x70000002,%eax
 809b1dd:	eb 12                	jmp    809b1f1 <_ZN14CNCryptoMulti210InitializeEPKhi+0xa5>
 809b1df:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 809b1e3:	75 07                	jne    809b1ec <_ZN14CNCryptoMulti210InitializeEPKhi+0xa0>
 809b1e5:	b8 1a 00 00 70       	mov    $0x7000001a,%eax
 809b1ea:	eb 05                	jmp    809b1f1 <_ZN14CNCryptoMulti210InitializeEPKhi+0xa5>
 809b1ec:	b8 00 00 00 70       	mov    $0x70000000,%eax
 809b1f1:	c9                   	leave
 809b1f2:	c3                   	ret
 809b1f3:	90                   	nop

```

```c
// CNCryptoMulti2::Initialize @ 0x809b14c

/* CNCryptoMulti2::Initialize(unsigned char const*, int) */

undefined4 __thiscall CNCryptoMulti2::Initialize(CNCryptoMulti2 *this,uchar *param_1,int param_2)

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
      iVar3 = multi2_setup(param_1,iVar3,0x80,psVar1);
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
// === 0809b134 CNCryptoMulti2::SetMode  [0x0809b134-0x809b14b] ===
 809b134:	55                   	push   %ebp
 809b135:	89 e5                	mov    %esp,%ebp
 809b137:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 809b13b:	75 07                	jne    809b144 <_ZN14CNCryptoMulti27SetModeE16CRYPTO_MODE_TYPE+0x10>
 809b13d:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809b142:	eb 05                	jmp    809b149 <_ZN14CNCryptoMulti27SetModeE16CRYPTO_MODE_TYPE+0x15>
 809b144:	b8 17 00 00 70       	mov    $0x70000017,%eax
 809b149:	5d                   	pop    %ebp
 809b14a:	c3                   	ret
 809b14b:	90                   	nop

```

```c
// CNCryptoMulti2::SetMode @ 0x809b134

/* CNCryptoMulti2::SetMode(CRYPTO_MODE_TYPE) */

undefined4 __thiscall CNCryptoMulti2::SetMode(undefined4 this,int param_2)

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
// === 0809b12c CNCryptoMulti2::operator=  [0x0809b12c-0x809b133] ===
 809b12c:	55                   	push   %ebp
 809b12d:	89 e5                	mov    %esp,%ebp
 809b12f:	8b 45 08             	mov    0x8(%ebp),%eax
 809b132:	5d                   	pop    %ebp
 809b133:	c3                   	ret

```

```c
// CNCryptoMulti2::operator= @ 0x809b12c

/* CNCryptoMulti2::TEMPNAMEPLACEHOLDERVALUE(CNCryptoMulti2 const&) */

CNCryptoMulti2 * __thiscall CNCryptoMulti2::operator=(CNCryptoMulti2 *this,CNCryptoMulti2 *param_1)

{
  return this;
}

```

---

## ~CNCryptoMulti2

```asm
// === 0809b096 CNCryptoMulti2::~CNCryptoMulti2  [0x0809b096-0x809b0e9] ===
 809b096:	55                   	push   %ebp
 809b097:	89 e5                	mov    %esp,%ebp
 809b099:	83 ec 28             	sub    $0x28,%esp
 809b09c:	8b 45 08             	mov    0x8(%ebp),%eax
 809b09f:	c7 00 68 38 b1 08    	movl   $0x8b13868,(%eax)
 809b0a5:	8b 45 08             	mov    0x8(%ebp),%eax
 809b0a8:	8b 40 08             	mov    0x8(%eax),%eax
 809b0ab:	89 45 f4             	mov    %eax,-0xc(%ebp)
 809b0ae:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 809b0b2:	74 15                	je     809b0c9 <_ZN14CNCryptoMulti2D1Ev+0x33>
 809b0b4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809b0b7:	89 04 24             	mov    %eax,(%esp)
 809b0ba:	e8 31 94 68 00       	call   87244f0 <_ZdlPv>
 809b0bf:	8b 45 08             	mov    0x8(%ebp),%eax
 809b0c2:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 809b0c9:	8b 45 08             	mov    0x8(%ebp),%eax
 809b0cc:	89 04 24             	mov    %eax,(%esp)
 809b0cf:	e8 34 2e 00 00       	call   809df08 <_ZN12ICryptoGraphD1Ev>
 809b0d4:	b8 00 00 00 00       	mov    $0x0,%eax
 809b0d9:	84 c0                	test   %al,%al
 809b0db:	74 0b                	je     809b0e8 <_ZN14CNCryptoMulti2D1Ev+0x52>
 809b0dd:	8b 45 08             	mov    0x8(%ebp),%eax
 809b0e0:	89 04 24             	mov    %eax,(%esp)
 809b0e3:	e8 08 94 68 00       	call   87244f0 <_ZdlPv>
 809b0e8:	c9                   	leave
 809b0e9:	c3                   	ret

```

```c
// CNCryptoMulti2::~CNCryptoMulti2 @ 0x809b096

/* WARNING: Removing unreachable block (ram,0x0809b0dd) */
/* CNCryptoMulti2::~CNCryptoMulti2() */

void __thiscall CNCryptoMulti2::~CNCryptoMulti2(CNCryptoMulti2 *this)

{
  *(undefined ***)this = &PTR__CNCryptoMulti2_08b13868;
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete(*(void **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  ICryptoGraph::~ICryptoGraph((ICryptoGraph *)this);
  return;
}

```

---

## ~CNCryptoMulti2_0809b0ea

```asm
// === 0809b0ea CNCryptoMulti2::~CNCryptoMulti2  [0x0809b0ea-0x809b107] ===
 809b0ea:	55                   	push   %ebp
 809b0eb:	89 e5                	mov    %esp,%ebp
 809b0ed:	83 ec 18             	sub    $0x18,%esp
 809b0f0:	8b 45 08             	mov    0x8(%ebp),%eax
 809b0f3:	89 04 24             	mov    %eax,(%esp)
 809b0f6:	e8 9b ff ff ff       	call   809b096 <_ZN14CNCryptoMulti2D1Ev>
 809b0fb:	8b 45 08             	mov    0x8(%ebp),%eax
 809b0fe:	89 04 24             	mov    %eax,(%esp)
 809b101:	e8 ea 93 68 00       	call   87244f0 <_ZdlPv>
 809b106:	c9                   	leave
 809b107:	c3                   	ret

```

```c
// CNCryptoMulti2::~CNCryptoMulti2 @ 0x809b0ea

/* CNCryptoMulti2::~CNCryptoMulti2() */

void __thiscall CNCryptoMulti2::~CNCryptoMulti2(CNCryptoMulti2 *this)

{
  ~CNCryptoMulti2(this);
  operator_delete(this);
  return;
}

```

