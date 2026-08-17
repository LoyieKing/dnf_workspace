# TaoCrypt__DES_EDE2

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## ProcessAndXorBlock

```asm
// === 087a8190 TaoCrypt::DES_EDE2::ProcessAndXorBlock  [0x087a8190-0x87a836f] ===
 87a8190:	55                   	push   %ebp
 87a8191:	89 e5                	mov    %esp,%ebp
 87a8193:	57                   	push   %edi
 87a8194:	56                   	push   %esi
 87a8195:	53                   	push   %ebx
 87a8196:	83 ec 3c             	sub    $0x3c,%esp
 87a8199:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87a819c:	e8 57 ac f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a81a1:	81 c3 f7 49 bc 00    	add    $0xbc49f7,%ebx
 87a81a7:	8b 75 10             	mov    0x10(%ebp),%esi
 87a81aa:	8b 0f                	mov    (%edi),%ecx
 87a81ac:	89 c8                	mov    %ecx,%eax
 87a81ae:	c1 c8 08             	ror    $0x8,%eax
 87a81b1:	c1 c9 18             	ror    $0x18,%ecx
 87a81b4:	25 00 ff 00 ff       	and    $0xff00ff00,%eax
 87a81b9:	81 e1 ff 00 ff 00    	and    $0xff00ff,%ecx
 87a81bf:	09 c1                	or     %eax,%ecx
 87a81c1:	8b 47 04             	mov    0x4(%edi),%eax
 87a81c4:	89 c7                	mov    %eax,%edi
 87a81c6:	c1 cf 08             	ror    $0x8,%edi
 87a81c9:	c1 c8 18             	ror    $0x18,%eax
 87a81cc:	81 e7 00 ff 00 ff    	and    $0xff00ff00,%edi
 87a81d2:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 87a81d7:	09 f8                	or     %edi,%eax
 87a81d9:	c1 c8 1c             	ror    $0x1c,%eax
 87a81dc:	89 c7                	mov    %eax,%edi
 87a81de:	31 cf                	xor    %ecx,%edi
 87a81e0:	81 e7 f0 f0 f0 f0    	and    $0xf0f0f0f0,%edi
 87a81e6:	31 f8                	xor    %edi,%eax
 87a81e8:	31 f9                	xor    %edi,%ecx
 87a81ea:	c1 c8 14             	ror    $0x14,%eax
 87a81ed:	89 c7                	mov    %eax,%edi
 87a81ef:	31 cf                	xor    %ecx,%edi
 87a81f1:	66 31 ff             	xor    %di,%di
 87a81f4:	31 f8                	xor    %edi,%eax
 87a81f6:	31 f9                	xor    %edi,%ecx
 87a81f8:	c1 c8 12             	ror    $0x12,%eax
 87a81fb:	89 c7                	mov    %eax,%edi
 87a81fd:	31 cf                	xor    %ecx,%edi
 87a81ff:	81 e7 33 33 33 33    	and    $0x33333333,%edi
 87a8205:	31 f8                	xor    %edi,%eax
 87a8207:	31 f9                	xor    %edi,%ecx
 87a8209:	c1 c8 06             	ror    $0x6,%eax
 87a820c:	89 c7                	mov    %eax,%edi
 87a820e:	31 cf                	xor    %ecx,%edi
 87a8210:	81 e7 ff 00 ff 00    	and    $0xff00ff,%edi
 87a8216:	31 f8                	xor    %edi,%eax
 87a8218:	31 f9                	xor    %edi,%ecx
 87a821a:	c1 c8 17             	ror    $0x17,%eax
 87a821d:	89 c7                	mov    %eax,%edi
 87a821f:	31 cf                	xor    %ecx,%edi
 87a8221:	81 e7 aa aa aa aa    	and    $0xaaaaaaaa,%edi
 87a8227:	31 f9                	xor    %edi,%ecx
 87a8229:	31 f8                	xor    %edi,%eax
 87a822b:	c1 c9 1f             	ror    $0x1f,%ecx
 87a822e:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 87a8231:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87a8234:	8d 7d e4             	lea    -0x1c(%ebp),%edi
 87a8237:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87a823a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 87a823d:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a8241:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87a8245:	83 c1 38             	add    $0x38,%ecx
 87a8248:	89 0c 24             	mov    %ecx,(%esp)
 87a824b:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
 87a824e:	89 45 d0             	mov    %eax,-0x30(%ebp)
 87a8251:	e8 4a d9 ff ff       	call   87a5ba0 <_ZNK8TaoCrypt8BasicDES15RawProcessBlockERjS1_>
 87a8256:	8b 55 08             	mov    0x8(%ebp),%edx
 87a8259:	8b 45 d0             	mov    -0x30(%ebp),%eax
 87a825c:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87a8260:	81 c2 b8 00 00 00    	add    $0xb8,%edx
 87a8266:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a826a:	89 14 24             	mov    %edx,(%esp)
 87a826d:	e8 2e d9 ff ff       	call   87a5ba0 <_ZNK8TaoCrypt8BasicDES15RawProcessBlockERjS1_>
 87a8272:	8b 45 d0             	mov    -0x30(%ebp),%eax
 87a8275:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 87a8278:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87a827c:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a8280:	89 0c 24             	mov    %ecx,(%esp)
 87a8283:	e8 18 d9 ff ff       	call   87a5ba0 <_ZNK8TaoCrypt8BasicDES15RawProcessBlockERjS1_>
 87a8288:	8b 7d e0             	mov    -0x20(%ebp),%edi
 87a828b:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 87a828e:	d1 cf                	ror    $1,%edi
 87a8290:	89 f8                	mov    %edi,%eax
 87a8292:	31 c8                	xor    %ecx,%eax
 87a8294:	25 aa aa aa aa       	and    $0xaaaaaaaa,%eax
 87a8299:	31 c1                	xor    %eax,%ecx
 87a829b:	31 c7                	xor    %eax,%edi
 87a829d:	c1 c9 09             	ror    $0x9,%ecx
 87a82a0:	89 c8                	mov    %ecx,%eax
 87a82a2:	31 f8                	xor    %edi,%eax
 87a82a4:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 87a82a9:	31 c1                	xor    %eax,%ecx
 87a82ab:	31 c7                	xor    %eax,%edi
 87a82ad:	c1 c9 1a             	ror    $0x1a,%ecx
 87a82b0:	89 c8                	mov    %ecx,%eax
 87a82b2:	31 f8                	xor    %edi,%eax
 87a82b4:	25 33 33 33 33       	and    $0x33333333,%eax
 87a82b9:	31 c1                	xor    %eax,%ecx
 87a82bb:	31 c7                	xor    %eax,%edi
 87a82bd:	c1 c9 0e             	ror    $0xe,%ecx
 87a82c0:	89 c8                	mov    %ecx,%eax
 87a82c2:	31 f8                	xor    %edi,%eax
 87a82c4:	66 31 c0             	xor    %ax,%ax
 87a82c7:	31 c1                	xor    %eax,%ecx
 87a82c9:	31 c7                	xor    %eax,%edi
 87a82cb:	c1 c9 0c             	ror    $0xc,%ecx
 87a82ce:	89 c8                	mov    %ecx,%eax
 87a82d0:	31 f8                	xor    %edi,%eax
 87a82d2:	25 f0 f0 f0 f0       	and    $0xf0f0f0f0,%eax
 87a82d7:	31 c7                	xor    %eax,%edi
 87a82d9:	31 c1                	xor    %eax,%ecx
 87a82db:	c1 c9 04             	ror    $0x4,%ecx
 87a82de:	85 f6                	test   %esi,%esi
 87a82e0:	74 4e                	je     87a8330 <_ZNK8TaoCrypt8DES_EDE218ProcessAndXorBlockEPKhS2_Ph+0x1a0>
 87a82e2:	89 f8                	mov    %edi,%eax
 87a82e4:	8b 55 14             	mov    0x14(%ebp),%edx
 87a82e7:	c1 c8 18             	ror    $0x18,%eax
 87a82ea:	c1 cf 08             	ror    $0x8,%edi
 87a82ed:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 87a82f2:	81 e7 00 ff 00 ff    	and    $0xff00ff00,%edi
 87a82f8:	09 f8                	or     %edi,%eax
 87a82fa:	33 06                	xor    (%esi),%eax
 87a82fc:	89 02                	mov    %eax,(%edx)
 87a82fe:	89 d0                	mov    %edx,%eax
 87a8300:	83 c0 04             	add    $0x4,%eax
 87a8303:	83 fe fc             	cmp    $0xfffffffc,%esi
 87a8306:	74 47                	je     87a834f <_ZNK8TaoCrypt8DES_EDE218ProcessAndXorBlockEPKhS2_Ph+0x1bf>
 87a8308:	89 c8                	mov    %ecx,%eax
 87a830a:	c1 c8 18             	ror    $0x18,%eax
 87a830d:	c1 c9 08             	ror    $0x8,%ecx
 87a8310:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 87a8315:	81 e1 00 ff 00 ff    	and    $0xff00ff00,%ecx
 87a831b:	09 c8                	or     %ecx,%eax
 87a831d:	33 46 04             	xor    0x4(%esi),%eax
 87a8320:	89 42 04             	mov    %eax,0x4(%edx)
 87a8323:	83 c4 3c             	add    $0x3c,%esp
 87a8326:	5b                   	pop    %ebx
 87a8327:	5e                   	pop    %esi
 87a8328:	5f                   	pop    %edi
 87a8329:	5d                   	pop    %ebp
 87a832a:	c3                   	ret
 87a832b:	90                   	nop
 87a832c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87a8330:	89 f8                	mov    %edi,%eax
 87a8332:	8b 55 14             	mov    0x14(%ebp),%edx
 87a8335:	c1 c8 18             	ror    $0x18,%eax
 87a8338:	c1 cf 08             	ror    $0x8,%edi
 87a833b:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 87a8340:	81 e7 00 ff 00 ff    	and    $0xff00ff00,%edi
 87a8346:	09 f8                	or     %edi,%eax
 87a8348:	89 02                	mov    %eax,(%edx)
 87a834a:	89 d0                	mov    %edx,%eax
 87a834c:	83 c0 04             	add    $0x4,%eax
 87a834f:	89 ca                	mov    %ecx,%edx
 87a8351:	c1 ca 18             	ror    $0x18,%edx
 87a8354:	c1 c9 08             	ror    $0x8,%ecx
 87a8357:	81 e2 ff 00 ff 00    	and    $0xff00ff,%edx
 87a835d:	81 e1 00 ff 00 ff    	and    $0xff00ff00,%ecx
 87a8363:	09 ca                	or     %ecx,%edx
 87a8365:	89 10                	mov    %edx,(%eax)
 87a8367:	83 c4 3c             	add    $0x3c,%esp
 87a836a:	5b                   	pop    %ebx
 87a836b:	5e                   	pop    %esi
 87a836c:	5f                   	pop    %edi
 87a836d:	5d                   	pop    %ebp
 87a836e:	c3                   	ret
 87a836f:	90                   	nop

```

```c
// TaoCrypt::DES_EDE2::ProcessAndXorBlock @ 0x87a8190

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DES_EDE2::ProcessAndXorBlock(unsigned char const*, unsigned char const*, unsigned
   char*) const */

void __thiscall
TaoCrypt::DES_EDE2::ProcessAndXorBlock(DES_EDE2 *this,uchar *param_1,uchar *param_2,uchar *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_24;
  uint local_20 [4];
  
  uVar3 = *(uint *)param_1;
  uVar2 = uVar3 >> 0x18 | (uVar3 & 0xff00) << 8 | uVar3 >> 8 & 0xff00ff00 | uVar3 << 0x18;
  uVar3 = *(uint *)(param_1 + 4);
  uVar1 = (uVar3 << 0x18) >> 0x1c |
          (uVar3 >> 0x18 | (uVar3 & 0xff00) << 8 | uVar3 >> 8 & 0xff00ff00 | uVar3 << 0x18) << 4;
  uVar3 = (uVar1 ^ uVar2) & 0xf0f0f0f0;
  uVar1 = uVar1 ^ uVar3;
  uVar2 = uVar2 ^ uVar3;
  uVar3 = uVar1 << 0xc;
  uVar4 = (uint)(ushort)((ushort)(uVar3 >> 0x10) ^ (ushort)(uVar2 >> 0x10)) << 0x10;
  uVar3 = (uVar1 >> 0x14 | uVar3) ^ uVar4;
  uVar2 = uVar2 ^ uVar4;
  uVar3 = uVar3 >> 0x12 | uVar3 << 0xe;
  uVar1 = (uVar3 ^ uVar2) & 0x33333333;
  uVar3 = uVar3 ^ uVar1;
  uVar2 = uVar2 ^ uVar1;
  uVar3 = uVar3 >> 6 | uVar3 << 0x1a;
  uVar1 = (uVar3 ^ uVar2) & 0xff00ff;
  uVar3 = uVar3 ^ uVar1;
  uVar2 = uVar2 ^ uVar1;
  local_24 = uVar3 >> 0x17 | uVar3 << 9;
  uVar3 = (local_24 ^ uVar2) & 0xaaaaaaaa;
  uVar2 = uVar2 ^ uVar3;
  local_24 = local_24 ^ uVar3;
  local_20[0] = uVar2 >> 0x1f | uVar2 << 1;
  BasicDES::RawProcessBlock((BasicDES *)(this + 0x38),local_20,&local_24);
  BasicDES::RawProcessBlock((BasicDES *)(this + 0xb8),&local_24,local_20);
  BasicDES::RawProcessBlock((BasicDES *)(this + 0x38),local_20,&local_24);
  uVar4 = local_24 >> 1 | (uint)((local_24 & 1) != 0) << 0x1f;
  uVar3 = (uVar4 ^ local_20[0]) & 0xaaaaaaaa;
  local_20[0] = local_20[0] ^ uVar3;
  uVar4 = uVar4 ^ uVar3;
  uVar3 = local_20[0] << 0x17;
  uVar2 = local_20[0] >> 9 | uVar3;
  uVar1 = (uVar2 ^ uVar4) & 0xff00ff;
  uVar4 = uVar4 ^ uVar1;
  uVar1 = uVar3 >> 0x1a | (uVar2 ^ uVar1) << 6;
  uVar3 = (uVar1 ^ uVar4) & 0x33333333;
  uVar1 = uVar1 ^ uVar3;
  uVar4 = uVar4 ^ uVar3;
  uVar3 = uVar1 >> 0xe;
  uVar2 = uVar3 | uVar1 << 0x12;
  uVar1 = (uint)(ushort)((ushort)(uVar2 >> 0x10) ^ (ushort)(uVar4 >> 0x10)) << 0x10;
  uVar4 = uVar4 ^ uVar1;
  uVar1 = (uVar2 ^ uVar1) >> 0xc;
  uVar2 = uVar1 | uVar3 << 0x14;
  uVar3 = (uVar2 ^ uVar4) & 0xf0f0f0f0;
  uVar4 = uVar4 ^ uVar3;
  uVar3 = (uVar2 ^ uVar3) >> 4;
  uVar1 = uVar3 | uVar1 << 0x1c;
  if (param_2 == (uchar *)0x0) {
    *(uint *)param_3 =
         uVar4 >> 0x18 | (uVar4 & 0xff00) << 8 | uVar4 >> 8 & 0xff00ff00 | uVar4 << 0x18;
  }
  else {
    *(uint *)param_3 =
         (uVar4 >> 0x18 | (uVar4 & 0xff00) << 8 | uVar4 >> 8 & 0xff00ff00 | uVar4 << 0x18) ^
         *(uint *)param_2;
    if (param_2 != (uchar *)0xfffffffc) {
      *(uint *)(param_3 + 4) =
           (uVar1 >> 0x18 | (uVar3 & 0xff00) << 8 | (uVar3 & 0xff0000) >> 8 | uVar3 << 0x18) ^
           *(uint *)(param_2 + 4);
      return;
    }
  }
  *(uint *)(param_3 + 4) =
       uVar1 >> 0x18 | (uVar3 & 0xff00) << 8 | (uVar3 & 0xff0000) >> 8 | uVar3 << 0x18;
  return;
}

```

---

## SetKey

```asm
// === 087a7d70 TaoCrypt::DES_EDE2::SetKey  [0x087a7d70-0x87a7def] ===
 87a7d70:	55                   	push   %ebp
 87a7d71:	89 e5                	mov    %esp,%ebp
 87a7d73:	83 ec 38             	sub    $0x38,%esp
 87a7d76:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87a7d79:	8b 45 10             	mov    0x10(%ebp),%eax
 87a7d7c:	e8 77 b0 f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a7d81:	81 c3 17 4e bc 00    	add    $0xbc4e17,%ebx
 87a7d87:	8b 55 14             	mov    0x14(%ebp),%edx
 87a7d8a:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87a7d8d:	8b 75 08             	mov    0x8(%ebp),%esi
 87a7d90:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87a7d93:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87a7d96:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a7d9a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 87a7d9e:	8d 4e 38             	lea    0x38(%esi),%ecx
 87a7da1:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87a7da5:	89 0c 24             	mov    %ecx,(%esp)
 87a7da8:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87a7dab:	89 55 e0             	mov    %edx,-0x20(%ebp)
 87a7dae:	e8 5d fc ff ff       	call   87a7a10 <_ZN8TaoCrypt8BasicDES6SetKeyEPKhjNS_9CipherDirE>
 87a7db3:	8b 55 e0             	mov    -0x20(%ebp),%edx
 87a7db6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87a7db9:	85 d2                	test   %edx,%edx
 87a7dbb:	0f 94 c2             	sete   %dl
 87a7dbe:	83 c7 08             	add    $0x8,%edi
 87a7dc1:	0f b6 d2             	movzbl %dl,%edx
 87a7dc4:	81 c6 b8 00 00 00    	add    $0xb8,%esi
 87a7dca:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87a7dce:	89 34 24             	mov    %esi,(%esp)
 87a7dd1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 87a7dd5:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a7dd9:	e8 32 fc ff ff       	call   87a7a10 <_ZN8TaoCrypt8BasicDES6SetKeyEPKhjNS_9CipherDirE>
 87a7dde:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87a7de1:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87a7de4:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87a7de7:	89 ec                	mov    %ebp,%esp
 87a7de9:	5d                   	pop    %ebp
 87a7dea:	c3                   	ret
 87a7deb:	90                   	nop
 87a7dec:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::DES_EDE2::SetKey @ 0x87a7d70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DES_EDE2::SetKey(unsigned char const*, unsigned int, TaoCrypt::CipherDir) */

void __thiscall
TaoCrypt::DES_EDE2::SetKey(DES_EDE2 *this,int param_1,undefined4 param_2,int param_4)

{
  BasicDES::SetKey((BasicDES *)(this + 0x38),param_1,param_2,param_4);
  BasicDES::SetKey((BasicDES *)(this + 0xb8),param_1 + 8,param_2,param_4 == 0);
  return;
}

```

