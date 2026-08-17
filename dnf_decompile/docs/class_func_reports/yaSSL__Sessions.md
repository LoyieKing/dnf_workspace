# yaSSL__Sessions

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## Flush

```asm
// === 087530a0 yaSSL::Sessions::Flush  [0x087530a0-0x87531df] ===
 87530a0:	55                   	push   %ebp
 87530a1:	89 e5                	mov    %esp,%ebp
 87530a3:	57                   	push   %edi
 87530a4:	56                   	push   %esi
 87530a5:	53                   	push   %ebx
 87530a6:	e8 4d fd fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87530ab:	81 c3 ed 9a c1 00    	add    $0xc19aed,%ebx
 87530b1:	83 ec 2c             	sub    $0x2c,%esp
 87530b4:	8b 45 08             	mov    0x8(%ebp),%eax
 87530b7:	8b 30                	mov    (%eax),%esi
 87530b9:	e8 92 e6 04 00       	call   87a1750 <_ZN5yaSSL11lowResTimerEv>
 87530be:	85 f6                	test   %esi,%esi
 87530c0:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87530c3:	75 15                	jne    87530da <_ZN5yaSSL8Sessions5FlushEv+0x3a>
 87530c5:	e9 96 00 00 00       	jmp    8753160 <_ZN5yaSSL8Sessions5FlushEv+0xc0>
 87530ca:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87530d0:	85 ff                	test   %edi,%edi
 87530d2:	0f 84 88 00 00 00    	je     8753160 <_ZN5yaSSL8Sessions5FlushEv+0xc0>
 87530d8:	89 fe                	mov    %edi,%esi
 87530da:	8b 46 08             	mov    0x8(%esi),%eax
 87530dd:	8b 7e 04             	mov    0x4(%esi),%edi
 87530e0:	89 04 24             	mov    %eax,(%esp)
 87530e3:	e8 78 b2 ff ff       	call   874e360 <_ZNK5yaSSL11SSL_SESSION9GetBornOnEv>
 87530e8:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87530eb:	8b 46 08             	mov    0x8(%esi),%eax
 87530ee:	89 04 24             	mov    %eax,(%esp)
 87530f1:	e8 7a b2 ff ff       	call   874e370 <_ZNK5yaSSL11SSL_SESSION10GetTimeOutEv>
 87530f6:	03 45 e4             	add    -0x1c(%ebp),%eax
 87530f9:	39 45 e0             	cmp    %eax,-0x20(%ebp)
 87530fc:	76 d2                	jbe    87530d0 <_ZN5yaSSL8Sessions5FlushEv+0x30>
 87530fe:	8b 46 08             	mov    0x8(%esi),%eax
 8753101:	c7 46 08 00 00 00 00 	movl   $0x0,0x8(%esi)
 8753108:	85 c0                	test   %eax,%eax
 875310a:	74 0e                	je     875311a <_ZN5yaSSL8Sessions5FlushEv+0x7a>
 875310c:	89 04 24             	mov    %eax,(%esp)
 875310f:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8753112:	e8 c9 fc ff ff       	call   8752de0 <_ZN5yaSSL11SSL_SESSIOND1Ev>
 8753117:	8b 45 dc             	mov    -0x24(%ebp),%eax
 875311a:	89 04 24             	mov    %eax,(%esp)
 875311d:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8753122:	e8 f9 d6 ff ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 8753127:	8b 55 08             	mov    0x8(%ebp),%edx
 875312a:	8b 02                	mov    (%edx),%eax
 875312c:	39 f0                	cmp    %esi,%eax
 875312e:	74 48                	je     8753178 <_ZN5yaSSL8Sessions5FlushEv+0xd8>
 8753130:	39 72 04             	cmp    %esi,0x4(%edx)
 8753133:	74 73                	je     87531a8 <_ZN5yaSSL8Sessions5FlushEv+0x108>
 8753135:	8b 06                	mov    (%esi),%eax
 8753137:	8b 56 04             	mov    0x4(%esi),%edx
 875313a:	89 50 04             	mov    %edx,0x4(%eax)
 875313d:	8b 56 04             	mov    0x4(%esi),%edx
 8753140:	89 02                	mov    %eax,(%edx)
 8753142:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8753147:	89 34 24             	mov    %esi,(%esp)
 875314a:	e8 a1 d7 ff ff       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 875314f:	8b 45 08             	mov    0x8(%ebp),%eax
 8753152:	83 68 08 01          	subl   $0x1,0x8(%eax)
 8753156:	85 ff                	test   %edi,%edi
 8753158:	0f 85 7a ff ff ff    	jne    87530d8 <_ZN5yaSSL8Sessions5FlushEv+0x38>
 875315e:	66 90                	xchg   %ax,%ax
 8753160:	8b 55 08             	mov    0x8(%ebp),%edx
 8753163:	c7 42 14 00 00 00 00 	movl   $0x0,0x14(%edx)
 875316a:	83 c4 2c             	add    $0x2c,%esp
 875316d:	5b                   	pop    %ebx
 875316e:	5e                   	pop    %esi
 875316f:	5f                   	pop    %edi
 8753170:	5d                   	pop    %ebp
 8753171:	c3                   	ret
 8753172:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8753178:	3b 72 04             	cmp    0x4(%edx),%esi
 875317b:	74 50                	je     87531cd <_ZN5yaSSL8Sessions5FlushEv+0x12d>
 875317d:	8b 56 04             	mov    0x4(%esi),%edx
 8753180:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8753183:	89 11                	mov    %edx,(%ecx)
 8753185:	c7 02 00 00 00 00    	movl   $0x0,(%edx)
 875318b:	89 04 24             	mov    %eax,(%esp)
 875318e:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8753193:	e8 58 d7 ff ff       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 8753198:	8b 45 08             	mov    0x8(%ebp),%eax
 875319b:	83 68 08 01          	subl   $0x1,0x8(%eax)
 875319f:	e9 2c ff ff ff       	jmp    87530d0 <_ZN5yaSSL8Sessions5FlushEv+0x30>
 87531a4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87531a8:	8b 06                	mov    (%esi),%eax
 87531aa:	89 42 04             	mov    %eax,0x4(%edx)
 87531ad:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 87531b4:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87531b9:	89 34 24             	mov    %esi,(%esp)
 87531bc:	e8 2f d7 ff ff       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 87531c1:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87531c4:	83 69 08 01          	subl   $0x1,0x8(%ecx)
 87531c8:	e9 03 ff ff ff       	jmp    87530d0 <_ZN5yaSSL8Sessions5FlushEv+0x30>
 87531cd:	c7 42 04 00 00 00 00 	movl   $0x0,0x4(%edx)
 87531d4:	c7 02 00 00 00 00    	movl   $0x0,(%edx)
 87531da:	eb af                	jmp    875318b <_ZN5yaSSL8Sessions5FlushEv+0xeb>
 87531dc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::Sessions::Flush @ 0x87530a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Sessions::Flush() */

void __thiscall yaSSL::Sessions::Flush(Sessions *this)

{
  int *piVar1;
  SSL_SESSION *this_00;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  piVar1 = *(int **)this;
  uVar5 = lowResTimer();
  while (piVar4 = piVar1, piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[1];
    iVar6 = SSL_SESSION::GetBornOn((SSL_SESSION *)piVar4[2]);
    iVar7 = SSL_SESSION::GetTimeOut((SSL_SESSION *)piVar4[2]);
    if ((uint)(iVar7 + iVar6) < uVar5) {
      this_00 = (SSL_SESSION *)piVar4[2];
      piVar4[2] = 0;
      if (this_00 != (SSL_SESSION *)0x0) {
        SSL_SESSION::~SSL_SESSION(this_00);
      }
      operator_delete(this_00,0);
      piVar2 = *(int **)this;
      if (piVar2 == piVar4) {
        if (piVar4 == *(int **)(this + 4)) {
          *(undefined4 *)(this + 4) = 0;
          *(undefined4 *)this = 0;
        }
        else {
          puVar3 = (undefined4 *)piVar4[1];
          *(undefined4 **)this = puVar3;
          *puVar3 = 0;
        }
        operator_delete__(piVar2,0);
        *(int *)(this + 8) = *(int *)(this + 8) + -1;
      }
      else if (*(int **)(this + 4) == piVar4) {
        iVar6 = *piVar4;
        *(int *)(this + 4) = iVar6;
        *(undefined4 *)(iVar6 + 4) = 0;
        operator_delete__(piVar4,0);
        *(int *)(this + 8) = *(int *)(this + 8) + -1;
      }
      else {
        iVar6 = *piVar4;
        *(int *)(iVar6 + 4) = piVar4[1];
        *(int *)piVar4[1] = iVar6;
        operator_delete__(piVar4,0);
        *(int *)(this + 8) = *(int *)(this + 8) + -1;
      }
    }
  }
  *(undefined4 *)(this + 0x14) = 0;
  return;
}

```

---

## add

```asm
// === 087531e0 yaSSL::Sessions::add  [0x087531e0-0x87532ef] ===
 87531e0:	55                   	push   %ebp
 87531e1:	89 e5                	mov    %esp,%ebp
 87531e3:	83 ec 38             	sub    $0x38,%esp
 87531e6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87531e9:	e8 0a fc fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87531ee:	81 c3 aa 99 c1 00    	add    $0xc199aa,%ebx
 87531f4:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87531f7:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87531fa:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87531fd:	8b 75 08             	mov    0x8(%ebp),%esi
 8753200:	89 3c 24             	mov    %edi,(%esp)
 8753203:	e8 68 ae ff ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 8753208:	89 04 24             	mov    %eax,(%esp)
 875320b:	e8 50 b7 ff ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 8753210:	80 b8 2c 01 00 00 00 	cmpb   $0x0,0x12c(%eax)
 8753217:	75 4f                	jne    8753268 <_ZN5yaSSL8Sessions3addERKNS_3SSLE+0x88>
 8753219:	8b 46 14             	mov    0x14(%esi),%eax
 875321c:	3d 00 01 00 00       	cmp    $0x100,%eax
 8753221:	7f 0d                	jg     8753230 <_ZN5yaSSL8Sessions3addERKNS_3SSLE+0x50>
 8753223:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8753226:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8753229:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875322c:	89 ec                	mov    %ebp,%esp
 875322e:	5d                   	pop    %ebp
 875322f:	c3                   	ret
 8753230:	89 3c 24             	mov    %edi,(%esp)
 8753233:	e8 38 ae ff ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 8753238:	89 04 24             	mov    %eax,(%esp)
 875323b:	e8 c0 b7 ff ff       	call   874ea00 <_ZNK5yaSSL8Security10GetContextEv>
 8753240:	89 04 24             	mov    %eax,(%esp)
 8753243:	e8 e8 b2 ff ff       	call   874e530 <_ZNK5yaSSL7SSL_CTX23GetSessionCacheFlushOffEv>
 8753248:	84 c0                	test   %al,%al
 875324a:	75 d7                	jne    8753223 <_ZN5yaSSL8Sessions3addERKNS_3SSLE+0x43>
 875324c:	89 34 24             	mov    %esi,(%esp)
 875324f:	e8 4c fe ff ff       	call   87530a0 <_ZN5yaSSL8Sessions5FlushEv>
 8753254:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8753257:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875325a:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875325d:	89 ec                	mov    %ebp,%esp
 875325f:	5d                   	pop    %ebp
 8753260:	c3                   	ret
 8753261:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8753268:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875326d:	c7 04 24 64 00 00 00 	movl   $0x64,(%esp)
 8753274:	e8 27 da ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8753279:	89 7c 24 04          	mov    %edi,0x4(%esp)
 875327d:	89 c2                	mov    %eax,%edx
 875327f:	8d 46 0c             	lea    0xc(%esi),%eax
 8753282:	89 44 24 08          	mov    %eax,0x8(%esp)
 8753286:	89 14 24             	mov    %edx,(%esp)
 8753289:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 875328c:	e8 af f6 ff ff       	call   8752940 <_ZN5yaSSL11SSL_SESSIONC1ERKNS_3SSLERNS_10RandomPoolE>
 8753291:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8753296:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 875329d:	e8 ae f0 ff ff       	call   8752350 <_ZnajN5yaSSL5new_tE>
 87532a2:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 87532a8:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 87532af:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87532b2:	89 50 08             	mov    %edx,0x8(%eax)
 87532b5:	8b 56 04             	mov    0x4(%esi),%edx
 87532b8:	85 d2                	test   %edx,%edx
 87532ba:	74 24                	je     87532e0 <_ZN5yaSSL8Sessions3addERKNS_3SSLE+0x100>
 87532bc:	89 42 04             	mov    %eax,0x4(%edx)
 87532bf:	8b 56 04             	mov    0x4(%esi),%edx
 87532c2:	89 10                	mov    %edx,(%eax)
 87532c4:	89 46 04             	mov    %eax,0x4(%esi)
 87532c7:	8b 46 14             	mov    0x14(%esi),%eax
 87532ca:	83 46 08 01          	addl   $0x1,0x8(%esi)
 87532ce:	83 c0 01             	add    $0x1,%eax
 87532d1:	89 46 14             	mov    %eax,0x14(%esi)
 87532d4:	e9 43 ff ff ff       	jmp    875321c <_ZN5yaSSL8Sessions3addERKNS_3SSLE+0x3c>
 87532d9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87532e0:	89 06                	mov    %eax,(%esi)
 87532e2:	eb e0                	jmp    87532c4 <_ZN5yaSSL8Sessions3addERKNS_3SSLE+0xe4>
 87532e4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87532ea:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::Sessions::add @ 0x87531e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Sessions::add(yaSSL::SSL const&) */

void __thiscall yaSSL::Sessions::add(Sessions *this,SSL *param_1)

{
  char cVar1;
  Security *pSVar2;
  int iVar3;
  SSL_CTX *this_00;
  SSL_SESSION *this_01;
  undefined4 *puVar4;
  uint in_stack_ffffffc8;
  SSL *pSVar5;
  
  pSVar2 = (Security *)SSL::getSecurity(param_1);
  iVar3 = Security::get_connection(pSVar2);
  if (*(char *)(iVar3 + 300) == '\0') {
    iVar3 = *(int *)(this + 0x14);
  }
  else {
    this_01 = operator_new(100,in_stack_ffffffc8 & 0xffffff00);
    pSVar5 = param_1;
    SSL_SESSION::SSL_SESSION(this_01,param_1,(RandomPool *)(this + 0xc));
    puVar4 = operator_new__(0xc,(uint)pSVar5 & 0xffffff00);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = this_01;
    if (*(int *)(this + 4) == 0) {
      *(undefined4 **)this = puVar4;
    }
    else {
      *(undefined4 **)(*(int *)(this + 4) + 4) = puVar4;
      *puVar4 = *(undefined4 *)(this + 4);
    }
    *(undefined4 **)(this + 4) = puVar4;
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    iVar3 = *(int *)(this + 0x14) + 1;
    *(int *)(this + 0x14) = iVar3;
  }
  if (0x100 < iVar3) {
    pSVar2 = (Security *)SSL::getSecurity(param_1);
    this_00 = (SSL_CTX *)Security::GetContext(pSVar2);
    cVar1 = SSL_CTX::GetSessionCacheFlushOff(this_00);
    if (cVar1 == '\0') {
      Flush(this);
      return;
    }
  }
  return;
}

```

---

## lookup

```asm
// === 08752e60 yaSSL::Sessions::lookup  [0x08752e60-0x8752fdf] ===
 8752e60:	55                   	push   %ebp
 8752e61:	89 e5                	mov    %esp,%ebp
 8752e63:	57                   	push   %edi
 8752e64:	56                   	push   %esi
 8752e65:	53                   	push   %ebx
 8752e66:	83 ec 2c             	sub    $0x2c,%esp
 8752e69:	8b 45 08             	mov    0x8(%ebp),%eax
 8752e6c:	e8 87 ff fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8752e71:	81 c3 27 9d c1 00    	add    $0xc19d27,%ebx
 8752e77:	8b 10                	mov    (%eax),%edx
 8752e79:	85 d2                	test   %edx,%edx
 8752e7b:	74 26                	je     8752ea3 <_ZN5yaSSL8Sessions6lookupEPKhPNS_11SSL_SESSIONE+0x43>
 8752e7d:	8b 42 08             	mov    0x8(%edx),%eax
 8752e80:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 8752e83:	89 04 24             	mov    %eax,(%esp)
 8752e86:	e8 95 b4 ff ff       	call   874e320 <_ZNK5yaSSL11SSL_SESSION5GetIDEv>
 8752e8b:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8752e8e:	b9 20 00 00 00       	mov    $0x20,%ecx
 8752e93:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8752e96:	89 c6                	mov    %eax,%esi
 8752e98:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 8752e9a:	74 14                	je     8752eb0 <_ZN5yaSSL8Sessions6lookupEPKhPNS_11SSL_SESSIONE+0x50>
 8752e9c:	8b 52 04             	mov    0x4(%edx),%edx
 8752e9f:	85 d2                	test   %edx,%edx
 8752ea1:	75 da                	jne    8752e7d <_ZN5yaSSL8Sessions6lookupEPKhPNS_11SSL_SESSIONE+0x1d>
 8752ea3:	83 c4 2c             	add    $0x2c,%esp
 8752ea6:	31 c0                	xor    %eax,%eax
 8752ea8:	5b                   	pop    %ebx
 8752ea9:	5e                   	pop    %esi
 8752eaa:	5f                   	pop    %edi
 8752eab:	5d                   	pop    %ebp
 8752eac:	c3                   	ret
 8752ead:	8d 76 00             	lea    0x0(%esi),%esi
 8752eb0:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 8752eb3:	e8 98 e8 04 00       	call   87a1750 <_ZN5yaSSL11lowResTimerEv>
 8752eb8:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8752ebb:	89 c6                	mov    %eax,%esi
 8752ebd:	8b 42 08             	mov    0x8(%edx),%eax
 8752ec0:	89 04 24             	mov    %eax,(%esp)
 8752ec3:	e8 98 b4 ff ff       	call   874e360 <_ZNK5yaSSL11SSL_SESSION9GetBornOnEv>
 8752ec8:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8752ecb:	89 c7                	mov    %eax,%edi
 8752ecd:	8b 42 08             	mov    0x8(%edx),%eax
 8752ed0:	89 04 24             	mov    %eax,(%esp)
 8752ed3:	e8 98 b4 ff ff       	call   874e370 <_ZNK5yaSSL11SSL_SESSION10GetTimeOutEv>
 8752ed8:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8752edb:	8d 3c 38             	lea    (%eax,%edi,1),%edi
 8752ede:	39 fe                	cmp    %edi,%esi
 8752ee0:	77 2e                	ja     8752f10 <_ZN5yaSSL8Sessions6lookupEPKhPNS_11SSL_SESSIONE+0xb0>
 8752ee2:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8752ee5:	85 c9                	test   %ecx,%ecx
 8752ee7:	74 18                	je     8752f01 <_ZN5yaSSL8Sessions6lookupEPKhPNS_11SSL_SESSIONE+0xa1>
 8752ee9:	8b 42 08             	mov    0x8(%edx),%eax
 8752eec:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8752eef:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 8752ef2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8752ef6:	89 0c 24             	mov    %ecx,(%esp)
 8752ef9:	e8 22 f9 ff ff       	call   8752820 <_ZN5yaSSL11SSL_SESSIONaSERKS0_>
 8752efe:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8752f01:	8b 42 08             	mov    0x8(%edx),%eax
 8752f04:	83 c4 2c             	add    $0x2c,%esp
 8752f07:	5b                   	pop    %ebx
 8752f08:	5e                   	pop    %esi
 8752f09:	5f                   	pop    %edi
 8752f0a:	5d                   	pop    %ebp
 8752f0b:	c3                   	ret
 8752f0c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8752f10:	8b 72 08             	mov    0x8(%edx),%esi
 8752f13:	c7 42 08 00 00 00 00 	movl   $0x0,0x8(%edx)
 8752f1a:	85 f6                	test   %esi,%esi
 8752f1c:	74 0e                	je     8752f2c <_ZN5yaSSL8Sessions6lookupEPKhPNS_11SSL_SESSIONE+0xcc>
 8752f1e:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 8752f21:	89 34 24             	mov    %esi,(%esp)
 8752f24:	e8 b7 fe ff ff       	call   8752de0 <_ZN5yaSSL11SSL_SESSIOND1Ev>
 8752f29:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8752f2c:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 8752f2f:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8752f34:	89 34 24             	mov    %esi,(%esp)
 8752f37:	e8 e4 d8 ff ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 8752f3c:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8752f3f:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8752f42:	8b 01                	mov    (%ecx),%eax
 8752f44:	39 d0                	cmp    %edx,%eax
 8752f46:	74 2a                	je     8752f72 <_ZN5yaSSL8Sessions6lookupEPKhPNS_11SSL_SESSIONE+0x112>
 8752f48:	39 51 04             	cmp    %edx,0x4(%ecx)
 8752f4b:	74 53                	je     8752fa0 <_ZN5yaSSL8Sessions6lookupEPKhPNS_11SSL_SESSIONE+0x140>
 8752f4d:	8b 02                	mov    (%edx),%eax
 8752f4f:	8b 4a 04             	mov    0x4(%edx),%ecx
 8752f52:	89 48 04             	mov    %ecx,0x4(%eax)
 8752f55:	8b 4a 04             	mov    0x4(%edx),%ecx
 8752f58:	89 01                	mov    %eax,(%ecx)
 8752f5a:	89 14 24             	mov    %edx,(%esp)
 8752f5d:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8752f62:	e8 89 d9 ff ff       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 8752f67:	8b 55 08             	mov    0x8(%ebp),%edx
 8752f6a:	31 c0                	xor    %eax,%eax
 8752f6c:	83 6a 08 01          	subl   $0x1,0x8(%edx)
 8752f70:	eb 92                	jmp    8752f04 <_ZN5yaSSL8Sessions6lookupEPKhPNS_11SSL_SESSIONE+0xa4>
 8752f72:	3b 51 04             	cmp    0x4(%ecx),%edx
 8752f75:	74 50                	je     8752fc7 <_ZN5yaSSL8Sessions6lookupEPKhPNS_11SSL_SESSIONE+0x167>
 8752f77:	8b 52 04             	mov    0x4(%edx),%edx
 8752f7a:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8752f7d:	89 11                	mov    %edx,(%ecx)
 8752f7f:	c7 02 00 00 00 00    	movl   $0x0,(%edx)
 8752f85:	89 04 24             	mov    %eax,(%esp)
 8752f88:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8752f8d:	e8 5e d9 ff ff       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 8752f92:	8b 45 08             	mov    0x8(%ebp),%eax
 8752f95:	83 68 08 01          	subl   $0x1,0x8(%eax)
 8752f99:	31 c0                	xor    %eax,%eax
 8752f9b:	e9 64 ff ff ff       	jmp    8752f04 <_ZN5yaSSL8Sessions6lookupEPKhPNS_11SSL_SESSIONE+0xa4>
 8752fa0:	8b 02                	mov    (%edx),%eax
 8752fa2:	89 41 04             	mov    %eax,0x4(%ecx)
 8752fa5:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8752fac:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8752fb1:	89 14 24             	mov    %edx,(%esp)
 8752fb4:	e8 37 d9 ff ff       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 8752fb9:	8b 45 08             	mov    0x8(%ebp),%eax
 8752fbc:	83 68 08 01          	subl   $0x1,0x8(%eax)
 8752fc0:	31 c0                	xor    %eax,%eax
 8752fc2:	e9 3d ff ff ff       	jmp    8752f04 <_ZN5yaSSL8Sessions6lookupEPKhPNS_11SSL_SESSIONE+0xa4>
 8752fc7:	c7 41 04 00 00 00 00 	movl   $0x0,0x4(%ecx)
 8752fce:	c7 01 00 00 00 00    	movl   $0x0,(%ecx)
 8752fd4:	eb af                	jmp    8752f85 <_ZN5yaSSL8Sessions6lookupEPKhPNS_11SSL_SESSIONE+0x125>
 8752fd6:	8d 76 00             	lea    0x0(%esi),%esi
 8752fd9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::Sessions::lookup @ 0x8752e60

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Sessions::lookup(unsigned char const*, yaSSL::SSL_SESSION*) */

int __thiscall yaSSL::Sessions::lookup(Sessions *this,uchar *param_1,SSL_SESSION *param_2)

{
  int *piVar1;
  SSL_SESSION *this_00;
  int *piVar2;
  undefined4 *puVar3;
  uchar *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uchar *puVar8;
  undefined1 uVar9;
  byte bVar10;
  uint in_stack_ffffffc8;
  uint3 uVar11;
  
  bVar10 = 0;
  piVar1 = *(int **)this;
  do {
    uVar9 = piVar1 == (int *)0x0;
    if ((bool)uVar9) {
      return 0;
    }
    puVar4 = (uchar *)SSL_SESSION::GetID((SSL_SESSION *)piVar1[2]);
    iVar7 = 0x20;
    puVar8 = param_1;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      uVar9 = *puVar4 == *puVar8;
      puVar4 = puVar4 + (uint)bVar10 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
    } while ((bool)uVar9);
    if ((bool)uVar9) {
      uVar5 = lowResTimer();
      iVar7 = SSL_SESSION::GetBornOn((SSL_SESSION *)piVar1[2]);
      iVar6 = SSL_SESSION::GetTimeOut((SSL_SESSION *)piVar1[2]);
      if ((uint)(iVar6 + iVar7) < uVar5) {
        this_00 = (SSL_SESSION *)piVar1[2];
        piVar1[2] = 0;
        if (this_00 != (SSL_SESSION *)0x0) {
          SSL_SESSION::~SSL_SESSION(this_00);
        }
        in_stack_ffffffc8 = in_stack_ffffffc8 & 0xffffff00;
        operator_delete(this_00,in_stack_ffffffc8);
        piVar2 = *(int **)this;
        uVar11 = (uint3)(in_stack_ffffffc8 >> 8);
        if (piVar2 == piVar1) {
          if (piVar1 == *(int **)(this + 4)) {
            *(undefined4 *)(this + 4) = 0;
            *(undefined4 *)this = 0;
          }
          else {
            puVar3 = (undefined4 *)piVar1[1];
            *(undefined4 **)this = puVar3;
            *puVar3 = 0;
          }
          operator_delete__(piVar2,(uint)uVar11 << 8);
          *(int *)(this + 8) = *(int *)(this + 8) + -1;
          iVar7 = 0;
        }
        else if (*(int **)(this + 4) == piVar1) {
          iVar7 = *piVar1;
          *(int *)(this + 4) = iVar7;
          *(undefined4 *)(iVar7 + 4) = 0;
          operator_delete__(piVar1,(uint)uVar11 << 8);
          *(int *)(this + 8) = *(int *)(this + 8) + -1;
          iVar7 = 0;
        }
        else {
          iVar7 = *piVar1;
          *(int *)(iVar7 + 4) = piVar1[1];
          *(int *)piVar1[1] = iVar7;
          operator_delete__(piVar1,in_stack_ffffffc8 & 0xffffff00);
          iVar7 = 0;
          *(int *)(this + 8) = *(int *)(this + 8) + -1;
        }
      }
      else {
        if (param_2 != (SSL_SESSION *)0x0) {
          SSL_SESSION::operator=(param_2,(SSL_SESSION *)piVar1[2]);
        }
        iVar7 = piVar1[2];
      }
      return iVar7;
    }
    piVar1 = (int *)piVar1[1];
  } while( true );
}

```

---

## remove

```asm
// === 087535d0 yaSSL::Sessions::remove  [0x087535d0-0x87536ef] ===
 87535d0:	55                   	push   %ebp
 87535d1:	89 e5                	mov    %esp,%ebp
 87535d3:	57                   	push   %edi
 87535d4:	56                   	push   %esi
 87535d5:	53                   	push   %ebx
 87535d6:	83 ec 2c             	sub    $0x2c,%esp
 87535d9:	8b 45 08             	mov    0x8(%ebp),%eax
 87535dc:	e8 17 f8 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87535e1:	81 c3 b7 95 c1 00    	add    $0xc195b7,%ebx
 87535e7:	8b 10                	mov    (%eax),%edx
 87535e9:	85 d2                	test   %edx,%edx
 87535eb:	74 26                	je     8753613 <_ZN5yaSSL8Sessions6removeEPKh+0x43>
 87535ed:	8b 42 08             	mov    0x8(%edx),%eax
 87535f0:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 87535f3:	89 04 24             	mov    %eax,(%esp)
 87535f6:	e8 25 ad ff ff       	call   874e320 <_ZNK5yaSSL11SSL_SESSION5GetIDEv>
 87535fb:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87535fe:	b9 20 00 00 00       	mov    $0x20,%ecx
 8753603:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8753606:	89 c6                	mov    %eax,%esi
 8753608:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 875360a:	74 14                	je     8753620 <_ZN5yaSSL8Sessions6removeEPKh+0x50>
 875360c:	8b 52 04             	mov    0x4(%edx),%edx
 875360f:	85 d2                	test   %edx,%edx
 8753611:	75 da                	jne    87535ed <_ZN5yaSSL8Sessions6removeEPKh+0x1d>
 8753613:	83 c4 2c             	add    $0x2c,%esp
 8753616:	5b                   	pop    %ebx
 8753617:	5e                   	pop    %esi
 8753618:	5f                   	pop    %edi
 8753619:	5d                   	pop    %ebp
 875361a:	c3                   	ret
 875361b:	90                   	nop
 875361c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8753620:	8b 72 08             	mov    0x8(%edx),%esi
 8753623:	c7 42 08 00 00 00 00 	movl   $0x0,0x8(%edx)
 875362a:	85 f6                	test   %esi,%esi
 875362c:	74 0e                	je     875363c <_ZN5yaSSL8Sessions6removeEPKh+0x6c>
 875362e:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 8753631:	89 34 24             	mov    %esi,(%esp)
 8753634:	e8 a7 f7 ff ff       	call   8752de0 <_ZN5yaSSL11SSL_SESSIOND1Ev>
 8753639:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 875363c:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 875363f:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8753644:	89 34 24             	mov    %esi,(%esp)
 8753647:	e8 d4 d1 ff ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 875364c:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875364f:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8753652:	8b 01                	mov    (%ecx),%eax
 8753654:	39 d0                	cmp    %edx,%eax
 8753656:	74 2e                	je     8753686 <_ZN5yaSSL8Sessions6removeEPKh+0xb6>
 8753658:	3b 51 04             	cmp    0x4(%ecx),%edx
 875365b:	74 5b                	je     87536b8 <_ZN5yaSSL8Sessions6removeEPKh+0xe8>
 875365d:	8b 02                	mov    (%edx),%eax
 875365f:	8b 4a 04             	mov    0x4(%edx),%ecx
 8753662:	89 48 04             	mov    %ecx,0x4(%eax)
 8753665:	8b 4a 04             	mov    0x4(%edx),%ecx
 8753668:	89 01                	mov    %eax,(%ecx)
 875366a:	89 14 24             	mov    %edx,(%esp)
 875366d:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8753672:	e8 79 d2 ff ff       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 8753677:	8b 55 08             	mov    0x8(%ebp),%edx
 875367a:	83 6a 08 01          	subl   $0x1,0x8(%edx)
 875367e:	83 c4 2c             	add    $0x2c,%esp
 8753681:	5b                   	pop    %ebx
 8753682:	5e                   	pop    %esi
 8753683:	5f                   	pop    %edi
 8753684:	5d                   	pop    %ebp
 8753685:	c3                   	ret
 8753686:	3b 51 04             	cmp    0x4(%ecx),%edx
 8753689:	74 52                	je     87536dd <_ZN5yaSSL8Sessions6removeEPKh+0x10d>
 875368b:	8b 52 04             	mov    0x4(%edx),%edx
 875368e:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8753691:	89 11                	mov    %edx,(%ecx)
 8753693:	c7 02 00 00 00 00    	movl   $0x0,(%edx)
 8753699:	89 04 24             	mov    %eax,(%esp)
 875369c:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87536a1:	e8 4a d2 ff ff       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 87536a6:	8b 45 08             	mov    0x8(%ebp),%eax
 87536a9:	83 68 08 01          	subl   $0x1,0x8(%eax)
 87536ad:	e9 61 ff ff ff       	jmp    8753613 <_ZN5yaSSL8Sessions6removeEPKh+0x43>
 87536b2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87536b8:	8b 02                	mov    (%edx),%eax
 87536ba:	89 41 04             	mov    %eax,0x4(%ecx)
 87536bd:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 87536c4:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87536c9:	89 14 24             	mov    %edx,(%esp)
 87536cc:	e8 1f d2 ff ff       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 87536d1:	8b 45 08             	mov    0x8(%ebp),%eax
 87536d4:	83 68 08 01          	subl   $0x1,0x8(%eax)
 87536d8:	e9 36 ff ff ff       	jmp    8753613 <_ZN5yaSSL8Sessions6removeEPKh+0x43>
 87536dd:	c7 41 04 00 00 00 00 	movl   $0x0,0x4(%ecx)
 87536e4:	c7 01 00 00 00 00    	movl   $0x0,(%ecx)
 87536ea:	eb ad                	jmp    8753699 <_ZN5yaSSL8Sessions6removeEPKh+0xc9>
 87536ec:	90                   	nop
 87536ed:	90                   	nop
 87536ee:	90                   	nop
 87536ef:	90                   	nop

```

```c
// yaSSL::Sessions::remove @ 0x87535d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Sessions::remove(unsigned char const*) */

void __thiscall yaSSL::Sessions::remove(Sessions *this,uchar *param_1)

{
  int *piVar1;
  SSL_SESSION *this_00;
  int *piVar2;
  undefined4 *puVar3;
  uchar *puVar4;
  int iVar5;
  uchar *puVar6;
  undefined1 uVar7;
  byte bVar8;
  
  bVar8 = 0;
  piVar1 = *(int **)this;
  do {
    uVar7 = piVar1 == (int *)0x0;
    if ((bool)uVar7) {
      return;
    }
    puVar4 = (uchar *)SSL_SESSION::GetID((SSL_SESSION *)piVar1[2]);
    iVar5 = 0x20;
    puVar6 = param_1;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      uVar7 = *puVar4 == *puVar6;
      puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    } while ((bool)uVar7);
    if ((bool)uVar7) {
      this_00 = (SSL_SESSION *)piVar1[2];
      piVar1[2] = 0;
      if (this_00 != (SSL_SESSION *)0x0) {
        SSL_SESSION::~SSL_SESSION(this_00);
      }
      operator_delete(this_00,0);
      piVar2 = *(int **)this;
      if (piVar2 != piVar1) {
        if (piVar1 == *(int **)(this + 4)) {
          iVar5 = *piVar1;
          *(int *)(this + 4) = iVar5;
          *(undefined4 *)(iVar5 + 4) = 0;
          operator_delete__(piVar1,0);
          *(int *)(this + 8) = *(int *)(this + 8) + -1;
          return;
        }
        iVar5 = *piVar1;
        *(int *)(iVar5 + 4) = piVar1[1];
        *(int *)piVar1[1] = iVar5;
        operator_delete__(piVar1,0);
        *(int *)(this + 8) = *(int *)(this + 8) + -1;
        return;
      }
      if (piVar1 == *(int **)(this + 4)) {
        *(undefined4 *)(this + 4) = 0;
        *(undefined4 *)this = 0;
      }
      else {
        puVar3 = (undefined4 *)piVar1[1];
        *(undefined4 **)this = puVar3;
        *puVar3 = 0;
      }
      operator_delete__(piVar2,0);
      *(int *)(this + 8) = *(int *)(this + 8) + -1;
      return;
    }
    piVar1 = (int *)piVar1[1];
  } while( true );
}

```

---

## ~Sessions

```asm
// === 087532f0 yaSSL::Sessions::~Sessions  [0x087532f0-0x875337f] ===
 87532f0:	55                   	push   %ebp
 87532f1:	89 e5                	mov    %esp,%ebp
 87532f3:	57                   	push   %edi
 87532f4:	56                   	push   %esi
 87532f5:	53                   	push   %ebx
 87532f6:	83 ec 1c             	sub    $0x1c,%esp
 87532f9:	8b 45 08             	mov    0x8(%ebp),%eax
 87532fc:	e8 f7 fa fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8753301:	81 c3 97 98 c1 00    	add    $0xc19897,%ebx
 8753307:	8b 30                	mov    (%eax),%esi
 8753309:	85 f6                	test   %esi,%esi
 875330b:	74 2d                	je     875333a <_ZN5yaSSL8SessionsD1Ev+0x4a>
 875330d:	8d 76 00             	lea    0x0(%esi),%esi
 8753310:	8b 7e 08             	mov    0x8(%esi),%edi
 8753313:	c7 46 08 00 00 00 00 	movl   $0x0,0x8(%esi)
 875331a:	85 ff                	test   %edi,%edi
 875331c:	74 08                	je     8753326 <_ZN5yaSSL8SessionsD1Ev+0x36>
 875331e:	89 3c 24             	mov    %edi,(%esp)
 8753321:	e8 ba fa ff ff       	call   8752de0 <_ZN5yaSSL11SSL_SESSIOND1Ev>
 8753326:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875332b:	89 3c 24             	mov    %edi,(%esp)
 875332e:	e8 ed d4 ff ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 8753333:	8b 76 04             	mov    0x4(%esi),%esi
 8753336:	85 f6                	test   %esi,%esi
 8753338:	75 d6                	jne    8753310 <_ZN5yaSSL8SessionsD1Ev+0x20>
 875333a:	8b 45 08             	mov    0x8(%ebp),%eax
 875333d:	83 c0 0c             	add    $0xc,%eax
 8753340:	89 04 24             	mov    %eax,(%esp)
 8753343:	e8 b8 5c 04 00       	call   8799000 <_ZN5yaSSL10RandomPoolD1Ev>
 8753348:	8b 55 08             	mov    0x8(%ebp),%edx
 875334b:	8b 02                	mov    (%edx),%eax
 875334d:	85 c0                	test   %eax,%eax
 875334f:	75 09                	jne    875335a <_ZN5yaSSL8SessionsD1Ev+0x6a>
 8753351:	eb 1b                	jmp    875336e <_ZN5yaSSL8SessionsD1Ev+0x7e>
 8753353:	90                   	nop
 8753354:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8753358:	89 f0                	mov    %esi,%eax
 875335a:	8b 70 04             	mov    0x4(%eax),%esi
 875335d:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8753362:	89 04 24             	mov    %eax,(%esp)
 8753365:	e8 86 d5 ff ff       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 875336a:	85 f6                	test   %esi,%esi
 875336c:	75 ea                	jne    8753358 <_ZN5yaSSL8SessionsD1Ev+0x68>
 875336e:	83 c4 1c             	add    $0x1c,%esp
 8753371:	5b                   	pop    %ebx
 8753372:	5e                   	pop    %esi
 8753373:	5f                   	pop    %edi
 8753374:	5d                   	pop    %ebp
 8753375:	c3                   	ret
 8753376:	8d 76 00             	lea    0x0(%esi),%esi
 8753379:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::Sessions::~Sessions @ 0x87532f0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Sessions::~Sessions() */

void __thiscall yaSSL::Sessions::~Sessions(Sessions *this)

{
  int iVar1;
  SSL_SESSION *this_00;
  int iVar2;
  
  for (iVar1 = *(int *)this; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    this_00 = *(SSL_SESSION **)(iVar1 + 8);
    *(undefined4 *)(iVar1 + 8) = 0;
    if (this_00 != (SSL_SESSION *)0x0) {
      SSL_SESSION::~SSL_SESSION(this_00);
    }
    operator_delete(this_00,0);
  }
  RandomPool::~RandomPool((RandomPool *)(this + 0xc));
  iVar1 = *(int *)this;
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    operator_delete__(iVar1,0);
    iVar1 = iVar2;
  }
  return;
}

```

