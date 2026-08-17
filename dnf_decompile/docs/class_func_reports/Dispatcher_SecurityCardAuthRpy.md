# Dispatcher_SecurityCardAuthRpy

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 0826314c Dispatcher_SecurityCardAuthRpy::check_error  [0x0826314c-0x826320f] ===
 826314c:	55                   	push   %ebp
 826314d:	89 e5                	mov    %esp,%ebp
 826314f:	83 ec 48             	sub    $0x48,%esp
 8263152:	8b 45 10             	mov    0x10(%ebp),%eax
 8263155:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8263158:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826315b:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 826315f:	84 c0                	test   %al,%al
 8263161:	74 16                	je     8263179 <_ZN30Dispatcher_SecurityCardAuthRpy11check_errorEP5CUserR8MSG_BASE+0x2d>
 8263163:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8263166:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 826316a:	3c 0d                	cmp    $0xd,%al
 826316c:	77 0b                	ja     8263179 <_ZN30Dispatcher_SecurityCardAuthRpy11check_errorEP5CUserR8MSG_BASE+0x2d>
 826316e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8263171:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 8263175:	3c 05                	cmp    $0x5,%al
 8263177:	75 3d                	jne    82631b6 <_ZN30Dispatcher_SecurityCardAuthRpy11check_errorEP5CUserR8MSG_BASE+0x6a>
 8263179:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8263180:	00 
 8263181:	c7 44 24 08 4c 01 00 	movl   $0x14c,0x8(%esp)
 8263188:	00 
 8263189:	c7 44 24 04 c0 c9 be 	movl   $0x8bec9c0,0x4(%esp)
 8263190:	08 
 8263191:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8263194:	89 04 24             	mov    %eax,(%esp)
 8263197:	e8 7c c5 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 826319c:	c7 44 24 04 5c b1 be 	movl   $0x8beb15c,0x4(%esp)
 82631a3:	08 
 82631a4:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82631a7:	89 04 24             	mov    %eax,(%esp)
 82631aa:	e8 d9 c5 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82631af:	b8 4d 01 00 00       	mov    $0x14d,%eax
 82631b4:	eb 57                	jmp    826320d <_ZN30Dispatcher_SecurityCardAuthRpy11check_errorEP5CUserR8MSG_BASE+0xc1>
 82631b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82631b9:	89 04 24             	mov    %eax,(%esp)
 82631bc:	e8 cb 71 e7 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82631c1:	83 f8 01             	cmp    $0x1,%eax
 82631c4:	0f 9e c0             	setle  %al
 82631c7:	84 c0                	test   %al,%al
 82631c9:	74 3d                	je     8263208 <_ZN30Dispatcher_SecurityCardAuthRpy11check_errorEP5CUserR8MSG_BASE+0xbc>
 82631cb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82631d2:	00 
 82631d3:	c7 44 24 08 54 01 00 	movl   $0x154,0x8(%esp)
 82631da:	00 
 82631db:	c7 44 24 04 c0 c9 be 	movl   $0x8bec9c0,0x4(%esp)
 82631e2:	08 
 82631e3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82631e6:	89 04 24             	mov    %eax,(%esp)
 82631e9:	e8 2a c5 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82631ee:	c7 44 24 04 84 b1 be 	movl   $0x8beb184,0x4(%esp)
 82631f5:	08 
 82631f6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82631f9:	89 04 24             	mov    %eax,(%esp)
 82631fc:	e8 87 c5 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8263201:	b8 55 01 00 00       	mov    $0x155,%eax
 8263206:	eb 05                	jmp    826320d <_ZN30Dispatcher_SecurityCardAuthRpy11check_errorEP5CUserR8MSG_BASE+0xc1>
 8263208:	b8 00 00 00 00       	mov    $0x0,%eax
 826320d:	c9                   	leave
 826320e:	c3                   	ret
 826320f:	90                   	nop

```

```c
// Dispatcher_SecurityCardAuthRpy::check_error @ 0x826314c

/* Dispatcher_SecurityCardAuthRpy::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SecurityCardAuthRpy::check_error
          (Dispatcher_SecurityCardAuthRpy *this,CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  MSG_BASE *local_10;
  
  local_10 = param_2;
  if (((param_2[0xe] == (MSG_BASE)0x0) || (0xd < (byte)param_2[0xe])) ||
     (param_2[0xe] == (MSG_BASE)0x5)) {
    cMyTrace::cMyTrace(local_30,"int Dispatcher_SecurityCardAuthRpy::check_error(CUser*, MSG_BASE&)"
                       ,0x14c,0);
    cMyTrace::operator()(local_30,"ERROR [TRACE AUTH RPY] : crypto_type2");
    uVar1 = 0x14d;
  }
  else {
    iVar2 = CUser::get_state(param_1);
    if (iVar2 < 2) {
      cMyTrace::cMyTrace(local_20,
                         "int Dispatcher_SecurityCardAuthRpy::check_error(CUser*, MSG_BASE&)",0x154,
                         0);
      cMyTrace::operator()(local_20,"ERROR [TRACE AUTH RPY] : get_state()<LOGIN");
      uVar1 = 0x155;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

```

---

## process

```asm
// === 082627ca Dispatcher_SecurityCardAuthRpy::process  [0x082627ca-0x8262f4d] ===
 82627ca:	55                   	push   %ebp
 82627cb:	89 e5                	mov    %esp,%ebp
 82627cd:	57                   	push   %edi
 82627ce:	56                   	push   %esi
 82627cf:	53                   	push   %ebx
 82627d0:	81 ec 8c 10 00 00    	sub    $0x108c,%esp
 82627d6:	8b 45 10             	mov    0x10(%ebp),%eax
 82627d9:	89 44 24 08          	mov    %eax,0x8(%esp)
 82627dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 82627e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 82627e4:	8b 45 08             	mov    0x8(%ebp),%eax
 82627e7:	89 04 24             	mov    %eax,(%esp)
 82627ea:	e8 5d 09 00 00       	call   826314c <_ZN30Dispatcher_SecurityCardAuthRpy11check_errorEP5CUserR8MSG_BASE>
 82627ef:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 82627f2:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 82627f6:	7e 0a                	jle    8262802 <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x38>
 82627f8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 82627fd:	e9 41 07 00 00       	jmp    8262f43 <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x779>
 8262802:	8b 45 14             	mov    0x14(%ebp),%eax
 8262805:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8262808:	8b 45 10             	mov    0x10(%ebp),%eax
 826280b:	89 45 dc             	mov    %eax,-0x24(%ebp)
 826280e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8262811:	c6 40 04 00          	movb   $0x0,0x4(%eax)
 8262815:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8262818:	c6 40 05 00          	movb   $0x0,0x5(%eax)
 826281c:	8d 9d 9c ef ff ff    	lea    -0x1064(%ebp),%ebx
 8262822:	b8 00 00 00 00       	mov    $0x0,%eax
 8262827:	ba 00 04 00 00       	mov    $0x400,%edx
 826282c:	89 df                	mov    %ebx,%edi
 826282e:	89 d1                	mov    %edx,%ecx
 8262830:	f3 ab                	rep stos %eax,%es:(%edi)
 8262832:	c7 45 b0 00 10 00 00 	movl   $0x1000,-0x50(%ebp)
 8262839:	8b 45 0c             	mov    0xc(%ebp),%eax
 826283c:	89 04 24             	mov    %eax,(%esp)
 826283f:	e8 dc d4 fc ff       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 8262844:	89 04 24             	mov    %eax,(%esp)
 8262847:	e8 c2 c6 fc ff       	call   822ef0e <_ZNK8WongWork13CSecurityCard10isActivateEv>
 826284c:	84 c0                	test   %al,%al
 826284e:	74 12                	je     8262862 <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x98>
 8262850:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8262853:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 8262857:	84 c0                	test   %al,%al
 8262859:	75 07                	jne    8262862 <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x98>
 826285b:	b8 01 00 00 00       	mov    $0x1,%eax
 8262860:	eb 05                	jmp    8262867 <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x9d>
 8262862:	b8 00 00 00 00       	mov    $0x0,%eax
 8262867:	84 c0                	test   %al,%al
 8262869:	74 70                	je     82628db <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x111>
 826286b:	8d 85 9c ef ff ff    	lea    -0x1064(%ebp),%eax
 8262871:	89 85 90 ef ff ff    	mov    %eax,-0x1070(%ebp)
 8262877:	8b 45 dc             	mov    -0x24(%ebp),%eax
 826287a:	8b b8 0f 10 00 00    	mov    0x100f(%eax),%edi
 8262880:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8262883:	83 c0 0f             	add    $0xf,%eax
 8262886:	89 c6                	mov    %eax,%esi
 8262888:	8b 45 dc             	mov    -0x24(%ebp),%eax
 826288b:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 826288f:	0f b6 d8             	movzbl %al,%ebx
 8262892:	8b 45 0c             	mov    0xc(%ebp),%eax
 8262895:	89 04 24             	mov    %eax,(%esp)
 8262898:	e8 91 d4 fc ff       	call   822fd2e <_ZN5CUser6getPadEv>
 826289d:	89 04 24             	mov    %eax,(%esp)
 82628a0:	e8 a7 6f 33 00       	call   859984c <_ZN8Sanicova4CPad20GetSelectedCipherIdxEv>
 82628a5:	0f b7 c0             	movzwl %ax,%eax
 82628a8:	c1 e0 04             	shl    $0x4,%eax
 82628ab:	8b 80 80 be 40 09    	mov    0x940be80(%eax),%eax
 82628b1:	8d 55 b0             	lea    -0x50(%ebp),%edx
 82628b4:	89 54 24 14          	mov    %edx,0x14(%esp)
 82628b8:	8b 95 90 ef ff ff    	mov    -0x1070(%ebp),%edx
 82628be:	89 54 24 10          	mov    %edx,0x10(%esp)
 82628c2:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 82628c6:	89 74 24 08          	mov    %esi,0x8(%esp)
 82628ca:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82628ce:	89 04 24             	mov    %eax,(%esp)
 82628d1:	e8 48 4c e3 ff       	call   809751e <_ZN6Cipher7DecryptEiPKhiPhPi>
 82628d6:	e9 18 01 00 00       	jmp    82629f3 <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x229>
 82628db:	8b 45 0c             	mov    0xc(%ebp),%eax
 82628de:	89 04 24             	mov    %eax,(%esp)
 82628e1:	e8 48 d4 fc ff       	call   822fd2e <_ZN5CUser6getPadEv>
 82628e6:	89 04 24             	mov    %eax,(%esp)
 82628e9:	e8 ec c6 fc ff       	call   822efda <_ZNK8Sanicova4CPad10isActivateEv>
 82628ee:	84 c0                	test   %al,%al
 82628f0:	74 12                	je     8262904 <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x13a>
 82628f2:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82628f5:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 82628f9:	3c 01                	cmp    $0x1,%al
 82628fb:	75 07                	jne    8262904 <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x13a>
 82628fd:	b8 01 00 00 00       	mov    $0x1,%eax
 8262902:	eb 05                	jmp    8262909 <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x13f>
 8262904:	b8 00 00 00 00       	mov    $0x0,%eax
 8262909:	84 c0                	test   %al,%al
 826290b:	0f 84 b9 00 00 00    	je     82629ca <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x200>
 8262911:	8d 8d 9c ef ff ff    	lea    -0x1064(%ebp),%ecx
 8262917:	89 8d 94 ef ff ff    	mov    %ecx,-0x106c(%ebp)
 826291d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8262920:	8b b8 0f 10 00 00    	mov    0x100f(%eax),%edi
 8262926:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8262929:	83 c0 0f             	add    $0xf,%eax
 826292c:	89 c6                	mov    %eax,%esi
 826292e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8262931:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 8262935:	0f b6 d8             	movzbl %al,%ebx
 8262938:	8b 45 0c             	mov    0xc(%ebp),%eax
 826293b:	89 04 24             	mov    %eax,(%esp)
 826293e:	e8 eb d3 fc ff       	call   822fd2e <_ZN5CUser6getPadEv>
 8262943:	89 04 24             	mov    %eax,(%esp)
 8262946:	e8 01 6f 33 00       	call   859984c <_ZN8Sanicova4CPad20GetSelectedCipherIdxEv>
 826294b:	0f b7 c0             	movzwl %ax,%eax
 826294e:	c1 e0 04             	shl    $0x4,%eax
 8262951:	8b 80 80 be 40 09    	mov    0x940be80(%eax),%eax
 8262957:	8d 55 b0             	lea    -0x50(%ebp),%edx
 826295a:	89 54 24 14          	mov    %edx,0x14(%esp)
 826295e:	8b 95 94 ef ff ff    	mov    -0x106c(%ebp),%edx
 8262964:	89 54 24 10          	mov    %edx,0x10(%esp)
 8262968:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 826296c:	89 74 24 08          	mov    %esi,0x8(%esp)
 8262970:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8262974:	89 04 24             	mov    %eax,(%esp)
 8262977:	e8 a2 4b e3 ff       	call   809751e <_ZN6Cipher7DecryptEiPKhiPhPi>
 826297c:	83 f0 01             	xor    $0x1,%eax
 826297f:	84 c0                	test   %al,%al
 8262981:	74 70                	je     82629f3 <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x229>
 8262983:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8262986:	c6 40 05 01          	movb   $0x1,0x5(%eax)
 826298a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8262991:	00 
 8262992:	c7 44 24 08 71 00 00 	movl   $0x71,0x8(%esp)
 8262999:	00 
 826299a:	c7 44 24 04 20 ca be 	movl   $0x8beca20,0x4(%esp)
 82629a1:	08 
 82629a2:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82629a5:	89 04 24             	mov    %eax,(%esp)
 82629a8:	e8 6b cd 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82629ad:	c7 44 24 04 e0 b0 be 	movl   $0x8beb0e0,0x4(%esp)
 82629b4:	08 
 82629b5:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82629b8:	89 04 24             	mov    %eax,(%esp)
 82629bb:	e8 c8 cd 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82629c0:	b8 00 00 00 00       	mov    $0x0,%eax
 82629c5:	e9 79 05 00 00       	jmp    8262f43 <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x779>
 82629ca:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82629d1:	00 
 82629d2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82629d9:	00 
 82629da:	c7 44 24 04 20 ca be 	movl   $0x8beca20,0x4(%esp)
 82629e1:	08 
 82629e2:	c7 04 24 76 00 00 00 	movl   $0x76,(%esp)
 82629e9:	e8 e9 de 32 00       	call   85908d7 <_Z8LineFunciPKcij>
 82629ee:	e9 50 05 00 00       	jmp    8262f43 <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x779>
 82629f3:	8d 85 9c ef ff ff    	lea    -0x1064(%ebp),%eax
 82629f9:	0f b6 00             	movzbl (%eax),%eax
 82629fc:	88 45 e2             	mov    %al,-0x1e(%ebp)
 82629ff:	8d 85 9c ef ff ff    	lea    -0x1064(%ebp),%eax
 8262a05:	83 c0 01             	add    $0x1,%eax
 8262a08:	0f b6 00             	movzbl (%eax),%eax
 8262a0b:	88 45 e3             	mov    %al,-0x1d(%ebp)
 8262a0e:	8d 85 9c ef ff ff    	lea    -0x1064(%ebp),%eax
 8262a14:	83 c0 02             	add    $0x2,%eax
 8262a17:	0f b6 00             	movzbl (%eax),%eax
 8262a1a:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8262a1d:	8d 85 9c ef ff ff    	lea    -0x1064(%ebp),%eax
 8262a23:	83 c0 03             	add    $0x3,%eax
 8262a26:	0f b6 00             	movzbl (%eax),%eax
 8262a29:	88 45 e5             	mov    %al,-0x1b(%ebp)
 8262a2c:	8d 85 9c ef ff ff    	lea    -0x1064(%ebp),%eax
 8262a32:	83 c0 04             	add    $0x4,%eax
 8262a35:	0f b6 00             	movzbl (%eax),%eax
 8262a38:	88 45 e6             	mov    %al,-0x1a(%ebp)
 8262a3b:	8d 85 9c ef ff ff    	lea    -0x1064(%ebp),%eax
 8262a41:	83 c0 05             	add    $0x5,%eax
 8262a44:	0f b6 00             	movzbl (%eax),%eax
 8262a47:	88 45 e7             	mov    %al,-0x19(%ebp)
 8262a4a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8262a4d:	89 04 24             	mov    %eax,(%esp)
 8262a50:	e8 cb d2 fc ff       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 8262a55:	89 04 24             	mov    %eax,(%esp)
 8262a58:	e8 b1 c4 fc ff       	call   822ef0e <_ZNK8WongWork13CSecurityCard10isActivateEv>
 8262a5d:	84 c0                	test   %al,%al
 8262a5f:	74 12                	je     8262a73 <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x2a9>
 8262a61:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8262a64:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 8262a68:	84 c0                	test   %al,%al
 8262a6a:	75 07                	jne    8262a73 <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x2a9>
 8262a6c:	b8 01 00 00 00       	mov    $0x1,%eax
 8262a71:	eb 05                	jmp    8262a78 <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x2ae>
 8262a73:	b8 00 00 00 00       	mov    $0x0,%eax
 8262a78:	84 c0                	test   %al,%al
 8262a7a:	0f 84 4e 03 00 00    	je     8262dce <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x604>
 8262a80:	8b 45 0c             	mov    0xc(%ebp),%eax
 8262a83:	89 04 24             	mov    %eax,(%esp)
 8262a86:	e8 95 d2 fc ff       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 8262a8b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8262a92:	00 
 8262a93:	89 04 24             	mov    %eax,(%esp)
 8262a96:	e8 c9 c4 fc ff       	call   822ef64 <_ZN8WongWork13CSecurityCard15setRequestStateENS0_18ENUM_REQUEST_STATEE>
 8262a9b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8262a9e:	89 04 24             	mov    %eax,(%esp)
 8262aa1:	e8 7a d2 fc ff       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 8262aa6:	89 04 24             	mov    %eax,(%esp)
 8262aa9:	e8 78 c4 fc ff       	call   822ef26 <_ZN8WongWork13CSecurityCard10getFailCntEv>
 8262aae:	83 f8 02             	cmp    $0x2,%eax
 8262ab1:	0f 97 c0             	seta   %al
 8262ab4:	84 c0                	test   %al,%al
 8262ab6:	74 11                	je     8262ac9 <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x2ff>
 8262ab8:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8262abb:	c6 40 05 7a          	movb   $0x7a,0x5(%eax)
 8262abf:	b8 00 00 00 00       	mov    $0x0,%eax
 8262ac4:	e9 7a 04 00 00       	jmp    8262f43 <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x779>
 8262ac9:	0f b6 75 e3          	movzbl -0x1d(%ebp),%esi
 8262acd:	0f b6 5d e2          	movzbl -0x1e(%ebp),%ebx
 8262ad1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8262ad4:	89 04 24             	mov    %eax,(%esp)
 8262ad7:	e8 44 d2 fc ff       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 8262adc:	89 74 24 08          	mov    %esi,0x8(%esp)
 8262ae0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8262ae4:	89 04 24             	mov    %eax,(%esp)
 8262ae7:	e8 7e b4 39 00       	call   85fdf6a <_ZNK8WongWork13CSecurityCard11checkAnswerEhh>
 8262aec:	83 f0 01             	xor    $0x1,%eax
 8262aef:	84 c0                	test   %al,%al
 8262af1:	0f 84 45 01 00 00    	je     8262c3c <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x472>
 8262af7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8262afa:	05 00 97 07 00       	add    $0x79700,%eax
 8262aff:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8262b06:	00 
 8262b07:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8262b0e:	00 
 8262b0f:	89 04 24             	mov    %eax,(%esp)
 8262b12:	e8 85 1c 42 00       	call   868479c <_ZN15cUserHistoryLog11SecuServiceE22ENUM_SECU_SERVICE_TYPE24ENUM_SECU_SERVICE_ACTION>
 8262b17:	8b 45 0c             	mov    0xc(%ebp),%eax
 8262b1a:	89 04 24             	mov    %eax,(%esp)
 8262b1d:	e8 fe d1 fc ff       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 8262b22:	89 04 24             	mov    %eax,(%esp)
 8262b25:	e8 84 27 00 00       	call   82652ae <_ZN8WongWork13CSecurityCard10incFailCntEv>
 8262b2a:	83 f8 02             	cmp    $0x2,%eax
 8262b2d:	0f 97 c0             	seta   %al
 8262b30:	84 c0                	test   %al,%al
 8262b32:	74 66                	je     8262b9a <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x3d0>
 8262b34:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8262b37:	c6 40 05 7a          	movb   $0x7a,0x5(%eax)
 8262b3b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8262b3e:	89 04 24             	mov    %eax,(%esp)
 8262b41:	e8 ba dc fc ff       	call   8230800 <_ZN5CUser8getHadesEv>
 8262b46:	c7 44 24 08 17 00 00 	movl   $0x17,0x8(%esp)
 8262b4d:	00 
 8262b4e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8262b55:	00 
 8262b56:	89 04 24             	mov    %eax,(%esp)
 8262b59:	e8 4a 6a 25 00       	call   84b95a8 <_ZN8XNuclear6CHades14ChangeSecurityENS_19ENUM_HADES_SECURITYEj>
 8262b5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8262b61:	89 04 24             	mov    %eax,(%esp)
 8262b64:	e8 f1 6d e9 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 8262b69:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8262b70:	00 
 8262b71:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8262b78:	00 
 8262b79:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8262b80:	00 
 8262b81:	c7 44 24 08 43 03 00 	movl   $0x343,0x8(%esp)
 8262b88:	00 
 8262b89:	8b 55 0c             	mov    0xc(%ebp),%edx
 8262b8c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8262b90:	89 04 24             	mov    %eax,(%esp)
 8262b93:	e8 e6 60 e9 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 8262b98:	eb 6c                	jmp    8262c06 <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x43c>
 8262b9a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8262b9d:	c6 40 05 79          	movb   $0x79,0x5(%eax)
 8262ba1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8262ba4:	89 04 24             	mov    %eax,(%esp)
 8262ba7:	e8 74 d1 fc ff       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 8262bac:	89 04 24             	mov    %eax,(%esp)
 8262baf:	e8 72 c3 fc ff       	call   822ef26 <_ZN8WongWork13CSecurityCard10getFailCntEv>
 8262bb4:	83 f8 01             	cmp    $0x1,%eax
 8262bb7:	0f 94 c0             	sete   %al
 8262bba:	84 c0                	test   %al,%al
 8262bbc:	74 25                	je     8262be3 <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x419>
 8262bbe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8262bc1:	89 04 24             	mov    %eax,(%esp)
 8262bc4:	e8 37 dc fc ff       	call   8230800 <_ZN5CUser8getHadesEv>
 8262bc9:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 8262bd0:	00 
 8262bd1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8262bd8:	00 
 8262bd9:	89 04 24             	mov    %eax,(%esp)
 8262bdc:	e8 c7 69 25 00       	call   84b95a8 <_ZN8XNuclear6CHades14ChangeSecurityENS_19ENUM_HADES_SECURITYEj>
 8262be1:	eb 23                	jmp    8262c06 <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x43c>
 8262be3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8262be6:	89 04 24             	mov    %eax,(%esp)
 8262be9:	e8 12 dc fc ff       	call   8230800 <_ZN5CUser8getHadesEv>
 8262bee:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 8262bf5:	00 
 8262bf6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8262bfd:	00 
 8262bfe:	89 04 24             	mov    %eax,(%esp)
 8262c01:	e8 a2 69 25 00       	call   84b95a8 <_ZN8XNuclear6CHades14ChangeSecurityENS_19ENUM_HADES_SECURITYEj>
 8262c06:	8b 45 0c             	mov    0xc(%ebp),%eax
 8262c09:	89 04 24             	mov    %eax,(%esp)
 8262c0c:	e8 0f d1 fc ff       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 8262c11:	89 04 24             	mov    %eax,(%esp)
 8262c14:	e8 0d c3 fc ff       	call   822ef26 <_ZN8WongWork13CSecurityCard10getFailCntEv>
 8262c19:	89 c3                	mov    %eax,%ebx
 8262c1b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8262c1e:	89 04 24             	mov    %eax,(%esp)
 8262c21:	e8 48 77 e7 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8262c26:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8262c2a:	89 04 24             	mov    %eax,(%esp)
 8262c2d:	e8 78 93 1c 00       	call   842bfaa <_ZN28DB_SecurityCardUpdateFailCnt11makeRequestEjj>
 8262c32:	b8 00 00 00 00       	mov    $0x0,%eax
 8262c37:	e9 07 03 00 00       	jmp    8262f43 <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x779>
 8262c3c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8262c3f:	05 00 97 07 00       	add    $0x79700,%eax
 8262c44:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8262c4b:	00 
 8262c4c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8262c53:	00 
 8262c54:	89 04 24             	mov    %eax,(%esp)
 8262c57:	e8 40 1b 42 00       	call   868479c <_ZN15cUserHistoryLog11SecuServiceE22ENUM_SECU_SERVICE_TYPE24ENUM_SECU_SERVICE_ACTION>
 8262c5c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8262c5f:	89 04 24             	mov    %eax,(%esp)
 8262c62:	e8 99 db fc ff       	call   8230800 <_ZN5CUser8getHadesEv>
 8262c67:	c7 44 24 08 19 00 00 	movl   $0x19,0x8(%esp)
 8262c6e:	00 
 8262c6f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8262c76:	00 
 8262c77:	89 04 24             	mov    %eax,(%esp)
 8262c7a:	e8 29 69 25 00       	call   84b95a8 <_ZN8XNuclear6CHades14ChangeSecurityENS_19ENUM_HADES_SECURITYEj>
 8262c7f:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8262c82:	89 04 24             	mov    %eax,(%esp)
 8262c85:	e8 c2 b0 32 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8262c8a:	c7 44 24 08 a7 00 00 	movl   $0xa7,0x8(%esp)
 8262c91:	00 
 8262c92:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8262c99:	00 
 8262c9a:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8262c9d:	89 04 24             	mov    %eax,(%esp)
 8262ca0:	e8 57 8c e6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8262ca5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8262cac:	00 
 8262cad:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8262cb0:	89 04 24             	mov    %eax,(%esp)
 8262cb3:	e8 68 8c e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8262cb8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8262cbb:	89 04 24             	mov    %eax,(%esp)
 8262cbe:	e8 5d d0 fc ff       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 8262cc3:	89 04 24             	mov    %eax,(%esp)
 8262cc6:	e8 bf 25 00 00       	call   826528a <_ZN8WongWork13CSecurityCard10getCertCntEv>
 8262ccb:	83 f8 3b             	cmp    $0x3b,%eax
 8262cce:	7e 07                	jle    8262cd7 <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x50d>
 8262cd0:	b8 01 00 00 00       	mov    $0x1,%eax
 8262cd5:	eb 05                	jmp    8262cdc <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x512>
 8262cd7:	b8 00 00 00 00       	mov    $0x0,%eax
 8262cdc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8262ce0:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8262ce3:	89 04 24             	mov    %eax,(%esp)
 8262ce6:	e8 35 8c e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8262ceb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8262cf2:	00 
 8262cf3:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8262cf6:	89 04 24             	mov    %eax,(%esp)
 8262cf9:	e8 5a 8c e6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8262cfe:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8262d01:	89 44 24 04          	mov    %eax,0x4(%esp)
 8262d05:	8b 45 0c             	mov    0xc(%ebp),%eax
 8262d08:	89 04 24             	mov    %eax,(%esp)
 8262d0b:	e8 aa 58 3e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8262d10:	8b 45 0c             	mov    0xc(%ebp),%eax
 8262d13:	89 04 24             	mov    %eax,(%esp)
 8262d16:	e8 53 76 e7 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8262d1b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8262d22:	00 
 8262d23:	89 04 24             	mov    %eax,(%esp)
 8262d26:	e8 7f 92 1c 00       	call   842bfaa <_ZN28DB_SecurityCardUpdateFailCnt11makeRequestEjj>
 8262d2b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8262d2e:	89 04 24             	mov    %eax,(%esp)
 8262d31:	e8 ea cf fc ff       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 8262d36:	89 04 24             	mov    %eax,(%esp)
 8262d39:	e8 0e c2 fc ff       	call   822ef4c <_ZN8WongWork13CSecurityCard12getCancelCntEv>
 8262d3e:	85 c0                	test   %eax,%eax
 8262d40:	0f 95 c0             	setne  %al
 8262d43:	84 c0                	test   %al,%al
 8262d45:	74 1b                	je     8262d62 <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x598>
 8262d47:	8b 45 0c             	mov    0xc(%ebp),%eax
 8262d4a:	89 04 24             	mov    %eax,(%esp)
 8262d4d:	e8 1c 76 e7 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8262d52:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8262d59:	00 
 8262d5a:	89 04 24             	mov    %eax,(%esp)
 8262d5d:	e8 b0 93 1c 00       	call   842c112 <_ZN30DB_SecurityCardUpdateCancelCnt11makeRequestEjj>
 8262d62:	8b 45 0c             	mov    0xc(%ebp),%eax
 8262d65:	89 04 24             	mov    %eax,(%esp)
 8262d68:	e8 01 76 e7 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8262d6d:	89 04 24             	mov    %eax,(%esp)
 8262d70:	e8 13 36 1d 00       	call   8436388 <_ZN25DB_SecurityCardAddCertCnt11makeRequestEj>
 8262d75:	8b 45 0c             	mov    0xc(%ebp),%eax
 8262d78:	89 04 24             	mov    %eax,(%esp)
 8262d7b:	e8 a0 cf fc ff       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 8262d80:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8262d87:	00 
 8262d88:	89 04 24             	mov    %eax,(%esp)
 8262d8b:	e8 06 25 00 00       	call   8265296 <_ZN8WongWork13CSecurityCard12setCertifiedEb>
 8262d90:	8b 45 0c             	mov    0xc(%ebp),%eax
 8262d93:	89 04 24             	mov    %eax,(%esp)
 8262d96:	e8 85 cf fc ff       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 8262d9b:	89 04 24             	mov    %eax,(%esp)
 8262d9e:	e8 25 25 00 00       	call   82652c8 <_ZN8WongWork13CSecurityCard12resetFailCntEv>
 8262da3:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8262da6:	89 04 24             	mov    %eax,(%esp)
 8262da9:	e8 d2 b0 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8262dae:	e9 84 01 00 00       	jmp    8262f37 <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x76d>
 8262db3:	89 d3                	mov    %edx,%ebx
 8262db5:	89 c6                	mov    %eax,%esi
 8262db7:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8262dba:	89 04 24             	mov    %eax,(%esp)
 8262dbd:	e8 be b0 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8262dc2:	89 f0                	mov    %esi,%eax
 8262dc4:	89 da                	mov    %ebx,%edx
 8262dc6:	89 04 24             	mov    %eax,(%esp)
 8262dc9:	e8 82 09 88 00       	call   8ae3750 <_Unwind_Resume>
 8262dce:	8b 45 0c             	mov    0xc(%ebp),%eax
 8262dd1:	89 04 24             	mov    %eax,(%esp)
 8262dd4:	e8 55 cf fc ff       	call   822fd2e <_ZN5CUser6getPadEv>
 8262dd9:	89 04 24             	mov    %eax,(%esp)
 8262ddc:	e8 f9 c1 fc ff       	call   822efda <_ZNK8Sanicova4CPad10isActivateEv>
 8262de1:	84 c0                	test   %al,%al
 8262de3:	74 12                	je     8262df7 <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x62d>
 8262de5:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8262de8:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 8262dec:	3c 01                	cmp    $0x1,%al
 8262dee:	75 07                	jne    8262df7 <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x62d>
 8262df0:	b8 01 00 00 00       	mov    $0x1,%eax
 8262df5:	eb 05                	jmp    8262dfc <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x632>
 8262df7:	b8 00 00 00 00       	mov    $0x0,%eax
 8262dfc:	84 c0                	test   %al,%al
 8262dfe:	0f 84 d7 00 00 00    	je     8262edb <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x711>
 8262e04:	8b 45 0c             	mov    0xc(%ebp),%eax
 8262e07:	89 04 24             	mov    %eax,(%esp)
 8262e0a:	e8 1f cf fc ff       	call   822fd2e <_ZN5CUser6getPadEv>
 8262e0f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8262e16:	00 
 8262e17:	89 04 24             	mov    %eax,(%esp)
 8262e1a:	e8 ad c1 fc ff       	call   822efcc <_ZN8Sanicova4CPad15setRequestStateENS0_18ENUM_REQUEST_STATEE>
 8262e1f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8262e22:	89 04 24             	mov    %eax,(%esp)
 8262e25:	e8 04 cf fc ff       	call   822fd2e <_ZN5CUser6getPadEv>
 8262e2a:	89 04 24             	mov    %eax,(%esp)
 8262e2d:	e8 5c c1 fc ff       	call   822ef8e <_ZN8Sanicova4CPad10getFailCntEv>
 8262e32:	83 f8 02             	cmp    $0x2,%eax
 8262e35:	0f 9f c0             	setg   %al
 8262e38:	84 c0                	test   %al,%al
 8262e3a:	74 11                	je     8262e4d <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x683>
 8262e3c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8262e3f:	c6 40 05 88          	movb   $0x88,0x5(%eax)
 8262e43:	b8 00 00 00 00       	mov    $0x0,%eax
 8262e48:	e9 f6 00 00 00       	jmp    8262f43 <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x779>
 8262e4d:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
 8262e54:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 8262e5b:	0f b6 45 e2          	movzbl -0x1e(%ebp),%eax
 8262e5f:	88 45 9c             	mov    %al,-0x64(%ebp)
 8262e62:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 8262e66:	88 45 9d             	mov    %al,-0x63(%ebp)
 8262e69:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 8262e6d:	88 45 9e             	mov    %al,-0x62(%ebp)
 8262e70:	0f b6 45 e5          	movzbl -0x1b(%ebp),%eax
 8262e74:	88 45 9f             	mov    %al,-0x61(%ebp)
 8262e77:	0f b6 45 e6          	movzbl -0x1a(%ebp),%eax
 8262e7b:	88 45 a0             	mov    %al,-0x60(%ebp)
 8262e7e:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 8262e82:	88 45 a1             	mov    %al,-0x5f(%ebp)
 8262e85:	c6 45 a2 00          	movb   $0x0,-0x5e(%ebp)
 8262e89:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8262e8c:	8d 48 05             	lea    0x5(%eax),%ecx
 8262e8f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8262e92:	8d 50 04             	lea    0x4(%eax),%edx
 8262e95:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8262e98:	0f b6 80 13 10 00 00 	movzbl 0x1013(%eax),%eax
 8262e9f:	0f be c0             	movsbl %al,%eax
 8262ea2:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8262ea6:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8262eaa:	89 44 24 08          	mov    %eax,0x8(%esp)
 8262eae:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8262eb1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8262eb5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8262eb8:	89 04 24             	mov    %eax,(%esp)
 8262ebb:	e8 06 05 00 00       	call   82633c6 <_ZN24Dispatcher_MouseRegister15doPassPadReplayEP5CUserPccRbRh>
 8262ec0:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8262ec3:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 8262ec7:	84 c0                	test   %al,%al
 8262ec9:	74 09                	je     8262ed4 <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x70a>
 8262ecb:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8262ece:	c6 40 05 01          	movb   $0x1,0x5(%eax)
 8262ed2:	eb 63                	jmp    8262f37 <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x76d>
 8262ed4:	b8 00 00 00 00       	mov    $0x0,%eax
 8262ed9:	eb 68                	jmp    8262f43 <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x779>
 8262edb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8262ee2:	00 
 8262ee3:	c7 44 24 08 0b 01 00 	movl   $0x10b,0x8(%esp)
 8262eea:	00 
 8262eeb:	c7 44 24 04 20 ca be 	movl   $0x8beca20,0x4(%esp)
 8262ef2:	08 
 8262ef3:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8262ef6:	89 04 24             	mov    %eax,(%esp)
 8262ef9:	e8 1a c8 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8262efe:	c7 44 24 04 30 b1 be 	movl   $0x8beb130,0x4(%esp)
 8262f05:	08 
 8262f06:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8262f09:	89 04 24             	mov    %eax,(%esp)
 8262f0c:	e8 77 c8 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8262f11:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8262f18:	00 
 8262f19:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8262f20:	00 
 8262f21:	c7 44 24 04 20 ca be 	movl   $0x8beca20,0x4(%esp)
 8262f28:	08 
 8262f29:	c7 04 24 0c 01 00 00 	movl   $0x10c,(%esp)
 8262f30:	e8 a2 d9 32 00       	call   85908d7 <_Z8LineFunciPKcij>
 8262f35:	eb 0c                	jmp    8262f43 <_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase+0x779>
 8262f37:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8262f3a:	c6 40 04 01          	movb   $0x1,0x4(%eax)
 8262f3e:	b8 00 00 00 00       	mov    $0x0,%eax
 8262f43:	81 c4 8c 10 00 00    	add    $0x108c,%esp
 8262f49:	5b                   	pop    %ebx
 8262f4a:	5e                   	pop    %esi
 8262f4b:	5f                   	pop    %edi
 8262f4c:	5d                   	pop    %ebp
 8262f4d:	c3                   	ret

```

```c
// Dispatcher_SecurityCardAuthRpy::process @ 0x82627ca

/* Dispatcher_SecurityCardAuthRpy::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_SecurityCardAuthRpy::process
          (Dispatcher_SecurityCardAuthRpy *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  MSG_BASE MVar1;
  bool bVar2;
  uchar uVar3;
  uchar uVar4;
  char cVar5;
  CSecurityCard *pCVar6;
  MSG_BASE *pMVar7;
  CPad *pCVar8;
  uint uVar9;
  undefined4 uVar10;
  CHackAnalyzer *pCVar11;
  uint uVar12;
  int iVar13;
  uchar *puVar14;
  byte bVar15;
  uchar local_1068;
  uchar local_1067;
  undefined1 local_1066;
  undefined1 local_1065;
  undefined1 local_1064;
  undefined1 local_1063;
  uchar local_68;
  uchar uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined4 local_64;
  PacketGuard local_60 [12];
  int local_54;
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  int local_30;
  ParamBase *local_2c;
  MSG_BASE *local_28;
  uchar local_22;
  uchar local_21;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  
  bVar15 = 0;
  local_30 = check_error(this,param_1,param_2);
  if (0 < local_30) {
    return 0xffffffff;
  }
  local_2c = param_3;
  local_28 = param_2;
  param_3[4] = (ParamBase)0x0;
  param_3[5] = (ParamBase)0x0;
  puVar14 = &local_1068;
  for (iVar13 = 0x400; iVar13 != 0; iVar13 = iVar13 + -1) {
    puVar14[0] = '\0';
    puVar14[1] = '\0';
    puVar14[2] = '\0';
    puVar14[3] = '\0';
    puVar14 = puVar14 + ((uint)bVar15 * -2 + 1) * 4;
  }
  local_54 = 0x1000;
  pCVar6 = (CSecurityCard *)CUser::getSecurityCard(param_1);
  cVar5 = WongWork::CSecurityCard::isActivate(pCVar6);
  if ((cVar5 == '\0') || (local_28[0xd] != (MSG_BASE)0x0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    iVar13 = *(int *)(local_28 + 0x100f);
    pMVar7 = local_28 + 0xf;
    MVar1 = local_28[0xe];
    pCVar8 = (CPad *)CUser::getPad(param_1);
    uVar9 = Sanicova::CPad::GetSelectedCipherIdx(pCVar8);
    Cipher::Decrypt((Cipher *)(&GlobalData::s_secu_cipher_keystring_manager_)[(uVar9 & 0xffff) * 4],
                    (uint)(byte)MVar1,(uchar *)pMVar7,iVar13,&local_1068,&local_54);
  }
  else {
    pCVar8 = (CPad *)CUser::getPad(param_1);
    cVar5 = Sanicova::CPad::isActivate(pCVar8);
    if ((cVar5 == '\0') || (local_28[0xd] != (MSG_BASE)0x1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      uVar10 = LineFunc(0x76,
                        "virtual int Dispatcher_SecurityCardAuthRpy::process(CUser*, MSG_BASE&, ParamBase&)"
                        ,0,0);
      return uVar10;
    }
    iVar13 = *(int *)(local_28 + 0x100f);
    pMVar7 = local_28 + 0xf;
    MVar1 = local_28[0xe];
    pCVar8 = (CPad *)CUser::getPad(param_1);
    uVar9 = Sanicova::CPad::GetSelectedCipherIdx(pCVar8);
    cVar5 = Cipher::Decrypt((Cipher *)
                            (&GlobalData::s_secu_cipher_keystring_manager_)[(uVar9 & 0xffff) * 4],
                            (uint)(byte)MVar1,(uchar *)pMVar7,iVar13,&local_1068,&local_54);
    if (cVar5 != '\x01') {
      local_2c[5] = (ParamBase)0x1;
      cMyTrace::cMyTrace(local_50,
                         "virtual int Dispatcher_SecurityCardAuthRpy::process(CUser*, MSG_BASE&, ParamBase&)"
                         ,0x71,0);
      cMyTrace::operator()
                (local_50,
                 "ERROR [TRACE AUTH RPY] : ENUM_CMDPACKET_SECURITY_CARD_AUTH_RPY,ENUM_ERROR_ETC");
      return 0;
    }
  }
  local_22 = local_1068;
  local_21 = local_1067;
  local_20 = local_1066;
  local_1f = local_1065;
  local_1e = local_1064;
  local_1d = local_1063;
  pCVar6 = (CSecurityCard *)CUser::getSecurityCard(param_1);
  cVar5 = WongWork::CSecurityCard::isActivate(pCVar6);
  if ((cVar5 == '\0') || (local_28[0xd] != (MSG_BASE)0x0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    pCVar6 = (CSecurityCard *)CUser::getSecurityCard(param_1);
    WongWork::CSecurityCard::setRequestState(pCVar6,0);
    pCVar6 = (CSecurityCard *)CUser::getSecurityCard(param_1);
    uVar9 = WongWork::CSecurityCard::getFailCnt(pCVar6);
    uVar4 = local_21;
    uVar3 = local_22;
    if (2 < uVar9) {
      local_2c[5] = (ParamBase)0x7a;
      return 0;
    }
    pCVar6 = (CSecurityCard *)CUser::getSecurityCard(param_1);
    cVar5 = WongWork::CSecurityCard::checkAnswer(pCVar6,uVar3,uVar4);
    if (cVar5 != '\x01') {
      cUserHistoryLog::SecuService((cUserHistoryLog *)(param_1 + 0x79700),1,0);
      pCVar6 = (CSecurityCard *)CUser::getSecurityCard(param_1);
      uVar9 = WongWork::CSecurityCard::incFailCnt(pCVar6);
      if (uVar9 < 3) {
        local_2c[5] = (ParamBase)0x79;
        pCVar6 = (CSecurityCard *)CUser::getSecurityCard(param_1);
        iVar13 = WongWork::CSecurityCard::getFailCnt(pCVar6);
        if (iVar13 == 1) {
          uVar10 = CUser::getHades(param_1);
          XNuclear::CHades::ChangeSecurity(uVar10,1,0x15);
        }
        else {
          uVar10 = CUser::getHades(param_1);
          XNuclear::CHades::ChangeSecurity(uVar10,1,0x16);
        }
      }
      else {
        local_2c[5] = (ParamBase)0x7a;
        uVar10 = CUser::getHades(param_1);
        XNuclear::CHades::ChangeSecurity(uVar10,1,0x17);
        pCVar11 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar11,param_1,0x343,1,0,0);
      }
      pCVar6 = (CSecurityCard *)CUser::getSecurityCard(param_1);
      uVar9 = WongWork::CSecurityCard::getFailCnt(pCVar6);
      uVar12 = CUser::get_acc_id(param_1);
      DB_SecurityCardUpdateFailCnt::makeRequest(uVar12,uVar9);
      return 0;
    }
    cUserHistoryLog::SecuService((cUserHistoryLog *)(param_1 + 0x79700),1,1);
    uVar10 = CUser::getHades(param_1);
    XNuclear::CHades::ChangeSecurity(uVar10,1,0x19);
    PacketGuard::PacketGuard(local_60);
                    /* try { // try from 08262ca0 to 08262d74 has its CatchHandler @ 08262db3 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_60,1,0xa7);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,1);
    pCVar6 = (CSecurityCard *)CUser::getSecurityCard(param_1);
    iVar13 = WongWork::CSecurityCard::getCertCnt(pCVar6);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,(uint)(0x3b < iVar13));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_60,true);
    CUser::Send(param_1,local_60);
    uVar9 = CUser::get_acc_id(param_1);
    DB_SecurityCardUpdateFailCnt::makeRequest(uVar9,0);
    pCVar6 = (CSecurityCard *)CUser::getSecurityCard(param_1);
    iVar13 = WongWork::CSecurityCard::getCancelCnt(pCVar6);
    if (iVar13 != 0) {
      uVar9 = CUser::get_acc_id(param_1);
      DB_SecurityCardUpdateCancelCnt::makeRequest(uVar9,0);
    }
    uVar9 = CUser::get_acc_id(param_1);
    DB_SecurityCardAddCertCnt::makeRequest(uVar9);
    pCVar6 = (CSecurityCard *)CUser::getSecurityCard(param_1);
    WongWork::CSecurityCard::setCertified(pCVar6,true);
    pCVar6 = (CSecurityCard *)CUser::getSecurityCard(param_1);
    WongWork::CSecurityCard::resetFailCnt(pCVar6);
    PacketGuard::~PacketGuard(local_60);
  }
  else {
    pCVar8 = (CPad *)CUser::getPad(param_1);
    cVar5 = Sanicova::CPad::isActivate(pCVar8);
    if ((cVar5 == '\0') || (local_28[0xd] != (MSG_BASE)0x1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      cMyTrace::cMyTrace(local_40,
                         "virtual int Dispatcher_SecurityCardAuthRpy::process(CUser*, MSG_BASE&, ParamBase&)"
                         ,0x10b,0);
      cMyTrace::operator()(local_40,"ERROR [TRACE AUTH RPY] : None Secu Service");
      uVar10 = LineFunc(0x10c,
                        "virtual int Dispatcher_SecurityCardAuthRpy::process(CUser*, MSG_BASE&, ParamBase&)"
                        ,0,0);
      return uVar10;
    }
    pCVar8 = (CPad *)CUser::getPad(param_1);
    Sanicova::CPad::setRequestState(pCVar8,0);
    pCVar8 = (CPad *)CUser::getPad(param_1);
    iVar13 = Sanicova::CPad::getFailCnt(pCVar8);
    if (2 < iVar13) {
      local_2c[5] = (ParamBase)0x88;
      return 0;
    }
    _local_68 = CONCAT13(local_1f,CONCAT12(local_20,CONCAT11(local_21,local_22)));
    local_64 = (uint)CONCAT11(local_1d,local_1e);
    Dispatcher_MouseRegister::doPassPadReplay
              (param_1,(char *)&local_68,(char)local_28[0x1013],(bool *)(local_2c + 4),
               (uchar *)(local_2c + 5));
    if (local_2c[4] == (ParamBase)0x0) {
      return 0;
    }
    local_2c[5] = (ParamBase)0x1;
  }
  local_2c[4] = (ParamBase)0x1;
  return 0;
}

```

---

## read

```asm
// === 08262658 Dispatcher_SecurityCardAuthRpy::read  [0x08262658-0x82627c9] ===
 8262658:	55                   	push   %ebp
 8262659:	89 e5                	mov    %esp,%ebp
 826265b:	83 ec 18             	sub    $0x18,%esp
 826265e:	8b 45 10             	mov    0x10(%ebp),%eax
 8262661:	83 c0 0d             	add    $0xd,%eax
 8262664:	89 44 24 04          	mov    %eax,0x4(%esp)
 8262668:	8b 45 0c             	mov    0xc(%ebp),%eax
 826266b:	89 04 24             	mov    %eax,(%esp)
 826266e:	e8 fd a8 32 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8262673:	83 f0 01             	xor    $0x1,%eax
 8262676:	84 c0                	test   %al,%al
 8262678:	74 29                	je     82626a3 <_ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE+0x4b>
 826267a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8262681:	00 
 8262682:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8262689:	00 
 826268a:	c7 44 24 04 80 ca be 	movl   $0x8beca80,0x4(%esp)
 8262691:	08 
 8262692:	c7 04 24 2b 00 00 00 	movl   $0x2b,(%esp)
 8262699:	e8 39 e2 32 00       	call   85908d7 <_Z8LineFunciPKcij>
 826269e:	e9 24 01 00 00       	jmp    82627c7 <_ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE+0x16f>
 82626a3:	8b 45 10             	mov    0x10(%ebp),%eax
 82626a6:	83 c0 0e             	add    $0xe,%eax
 82626a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 82626ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 82626b0:	89 04 24             	mov    %eax,(%esp)
 82626b3:	e8 b8 a8 32 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 82626b8:	83 f0 01             	xor    $0x1,%eax
 82626bb:	84 c0                	test   %al,%al
 82626bd:	74 29                	je     82626e8 <_ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE+0x90>
 82626bf:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82626c6:	00 
 82626c7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82626ce:	00 
 82626cf:	c7 44 24 04 80 ca be 	movl   $0x8beca80,0x4(%esp)
 82626d6:	08 
 82626d7:	c7 04 24 2e 00 00 00 	movl   $0x2e,(%esp)
 82626de:	e8 f4 e1 32 00       	call   85908d7 <_Z8LineFunciPKcij>
 82626e3:	e9 df 00 00 00       	jmp    82627c7 <_ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE+0x16f>
 82626e8:	8b 45 10             	mov    0x10(%ebp),%eax
 82626eb:	05 0f 10 00 00       	add    $0x100f,%eax
 82626f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 82626f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82626f7:	89 04 24             	mov    %eax,(%esp)
 82626fa:	e8 f1 a9 32 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 82626ff:	83 f0 01             	xor    $0x1,%eax
 8262702:	84 c0                	test   %al,%al
 8262704:	74 29                	je     826272f <_ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE+0xd7>
 8262706:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 826270d:	00 
 826270e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8262715:	00 
 8262716:	c7 44 24 04 80 ca be 	movl   $0x8beca80,0x4(%esp)
 826271d:	08 
 826271e:	c7 04 24 32 00 00 00 	movl   $0x32,(%esp)
 8262725:	e8 ad e1 32 00       	call   85908d7 <_Z8LineFunciPKcij>
 826272a:	e9 98 00 00 00       	jmp    82627c7 <_ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE+0x16f>
 826272f:	8b 45 10             	mov    0x10(%ebp),%eax
 8262732:	8b 80 0f 10 00 00    	mov    0x100f(%eax),%eax
 8262738:	8b 55 10             	mov    0x10(%ebp),%edx
 826273b:	83 c2 0f             	add    $0xf,%edx
 826273e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8262742:	89 54 24 04          	mov    %edx,0x4(%esp)
 8262746:	8b 45 0c             	mov    0xc(%ebp),%eax
 8262749:	89 04 24             	mov    %eax,(%esp)
 826274c:	e8 61 ac 32 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 8262751:	83 f0 01             	xor    $0x1,%eax
 8262754:	84 c0                	test   %al,%al
 8262756:	74 26                	je     826277e <_ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE+0x126>
 8262758:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 826275f:	00 
 8262760:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8262767:	00 
 8262768:	c7 44 24 04 80 ca be 	movl   $0x8beca80,0x4(%esp)
 826276f:	08 
 8262770:	c7 04 24 35 00 00 00 	movl   $0x35,(%esp)
 8262777:	e8 5b e1 32 00       	call   85908d7 <_Z8LineFunciPKcij>
 826277c:	eb 49                	jmp    82627c7 <_ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE+0x16f>
 826277e:	8b 45 10             	mov    0x10(%ebp),%eax
 8262781:	05 13 10 00 00       	add    $0x1013,%eax
 8262786:	89 44 24 04          	mov    %eax,0x4(%esp)
 826278a:	8b 45 0c             	mov    0xc(%ebp),%eax
 826278d:	89 04 24             	mov    %eax,(%esp)
 8262790:	e8 db a7 32 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8262795:	83 f0 01             	xor    $0x1,%eax
 8262798:	84 c0                	test   %al,%al
 826279a:	74 26                	je     82627c2 <_ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE+0x16a>
 826279c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82627a3:	00 
 82627a4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82627ab:	00 
 82627ac:	c7 44 24 04 80 ca be 	movl   $0x8beca80,0x4(%esp)
 82627b3:	08 
 82627b4:	c7 04 24 3a 00 00 00 	movl   $0x3a,(%esp)
 82627bb:	e8 17 e1 32 00       	call   85908d7 <_Z8LineFunciPKcij>
 82627c0:	eb 05                	jmp    82627c7 <_ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE+0x16f>
 82627c2:	b8 00 00 00 00       	mov    $0x0,%eax
 82627c7:	c9                   	leave
 82627c8:	c3                   	ret
 82627c9:	90                   	nop

```

```c
// Dispatcher_SecurityCardAuthRpy::read @ 0x8262658

/* Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SecurityCardAuthRpy::read
          (Dispatcher_SecurityCardAuthRpy *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x100f));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_binary(param_1,(char *)(param_2 + 0xf),*(int *)(param_2 + 0x100f));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x1013));
          if (cVar1 == '\x01') {
            uVar2 = 0;
          }
          else {
            uVar2 = LineFunc(0x3a,
                             "virtual int Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)"
                             ,0,0);
          }
        }
        else {
          uVar2 = LineFunc(0x35,
                           "virtual int Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x32,
                         "virtual int Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)",0
                         ,0);
      }
    }
    else {
      uVar2 = LineFunc(0x2e,
                       "virtual int Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)",0,0
                      );
    }
  }
  else {
    uVar2 = LineFunc(0x2b,"virtual int Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)",
                     0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 08262f4e Dispatcher_SecurityCardAuthRpy::send  [0x08262f4e-0x826314b] ===
 8262f4e:	55                   	push   %ebp
 8262f4f:	89 e5                	mov    %esp,%ebp
 8262f51:	56                   	push   %esi
 8262f52:	53                   	push   %ebx
 8262f53:	83 ec 40             	sub    $0x40,%esp
 8262f56:	8b 45 10             	mov    0x10(%ebp),%eax
 8262f59:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8262f5c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8262f5f:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 8262f63:	84 c0                	test   %al,%al
 8262f65:	0f 84 fe 00 00 00    	je     8263069 <_ZN30Dispatcher_SecurityCardAuthRpy4sendEP5CUserR9ParamBase+0x11b>
 8262f6b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8262f6e:	89 04 24             	mov    %eax,(%esp)
 8262f71:	e8 c8 ce fc ff       	call   822fe3e <_ZN5CUser13GetTradeSpaceEv>
 8262f76:	89 c3                	mov    %eax,%ebx
 8262f78:	e8 11 92 e6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8262f7d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8262f81:	89 04 24             	mov    %eax,(%esp)
 8262f84:	e8 01 1e 03 00       	call   8294d8a <_ZN12CGameManager13GetTradeSpaceEi>
 8262f89:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8262f8c:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8262f90:	74 19                	je     8262fab <_ZN30Dispatcher_SecurityCardAuthRpy4sendEP5CUserR9ParamBase+0x5d>
 8262f92:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8262f95:	89 04 24             	mov    %eax,(%esp)
 8262f98:	e8 fd 13 fd ff       	call   823439a <_ZN11CTradeSpace8is_emptyEv>
 8262f9d:	83 f0 01             	xor    $0x1,%eax
 8262fa0:	84 c0                	test   %al,%al
 8262fa2:	74 07                	je     8262fab <_ZN30Dispatcher_SecurityCardAuthRpy4sendEP5CUserR9ParamBase+0x5d>
 8262fa4:	b8 01 00 00 00       	mov    $0x1,%eax
 8262fa9:	eb 05                	jmp    8262fb0 <_ZN30Dispatcher_SecurityCardAuthRpy4sendEP5CUserR9ParamBase+0x62>
 8262fab:	b8 00 00 00 00       	mov    $0x0,%eax
 8262fb0:	84 c0                	test   %al,%al
 8262fb2:	0f 84 8c 01 00 00    	je     8263144 <_ZN30Dispatcher_SecurityCardAuthRpy4sendEP5CUserR9ParamBase+0x1f6>
 8262fb8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8262fbb:	89 04 24             	mov    %eax,(%esp)
 8262fbe:	e8 89 ad 32 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8262fc3:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8262fc6:	89 04 24             	mov    %eax,(%esp)
 8262fc9:	e8 18 89 e6 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 8262fce:	c7 44 24 08 b0 00 00 	movl   $0xb0,0x8(%esp)
 8262fd5:	00 
 8262fd6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8262fdd:	00 
 8262fde:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8262fe1:	89 04 24             	mov    %eax,(%esp)
 8262fe4:	e8 13 89 e6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8262fe9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8262ff0:	00 
 8262ff1:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8262ff4:	89 04 24             	mov    %eax,(%esp)
 8262ff7:	e8 24 89 e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8262ffc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8263003:	00 
 8263004:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8263007:	89 04 24             	mov    %eax,(%esp)
 826300a:	e8 49 89 e6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 826300f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8263012:	89 44 24 04          	mov    %eax,0x4(%esp)
 8263016:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8263019:	89 04 24             	mov    %eax,(%esp)
 826301c:	e8 51 6a 2c 00       	call   8529a72 <_ZN11CTradeSpace15GetOppositeUserEP5CUser>
 8263021:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8263024:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8263028:	74 2f                	je     8263059 <_ZN30Dispatcher_SecurityCardAuthRpy4sendEP5CUserR9ParamBase+0x10b>
 826302a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 826302d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8263031:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8263034:	89 04 24             	mov    %eax,(%esp)
 8263037:	e8 7e 55 3e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 826303c:	eb 1b                	jmp    8263059 <_ZN30Dispatcher_SecurityCardAuthRpy4sendEP5CUserR9ParamBase+0x10b>
 826303e:	89 d3                	mov    %edx,%ebx
 8263040:	89 c6                	mov    %eax,%esi
 8263042:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8263045:	89 04 24             	mov    %eax,(%esp)
 8263048:	e8 33 ae 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 826304d:	89 f0                	mov    %esi,%eax
 826304f:	89 da                	mov    %ebx,%edx
 8263051:	89 04 24             	mov    %eax,(%esp)
 8263054:	e8 f7 06 88 00       	call   8ae3750 <_Unwind_Resume>
 8263059:	8d 45 e0             	lea    -0x20(%ebp),%eax
 826305c:	89 04 24             	mov    %eax,(%esp)
 826305f:	e8 1c ae 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8263064:	e9 db 00 00 00       	jmp    8263144 <_ZN30Dispatcher_SecurityCardAuthRpy4sendEP5CUserR9ParamBase+0x1f6>
 8263069:	8b 45 ec             	mov    -0x14(%ebp),%eax
 826306c:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 8263070:	84 c0                	test   %al,%al
 8263072:	0f 84 cc 00 00 00    	je     8263144 <_ZN30Dispatcher_SecurityCardAuthRpy4sendEP5CUserR9ParamBase+0x1f6>
 8263078:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 826307b:	89 04 24             	mov    %eax,(%esp)
 826307e:	e8 c9 ac 32 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8263083:	c7 44 24 08 a7 00 00 	movl   $0xa7,0x8(%esp)
 826308a:	00 
 826308b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8263092:	00 
 8263093:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8263096:	89 04 24             	mov    %eax,(%esp)
 8263099:	e8 5e 88 e6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 826309e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82630a5:	00 
 82630a6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82630a9:	89 04 24             	mov    %eax,(%esp)
 82630ac:	e8 6f 88 e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82630b1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82630b4:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 82630b8:	0f b6 c0             	movzbl %al,%eax
 82630bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 82630bf:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82630c2:	89 04 24             	mov    %eax,(%esp)
 82630c5:	e8 56 88 e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82630ca:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82630cd:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 82630d1:	3c 87                	cmp    $0x87,%al
 82630d3:	75 22                	jne    82630f7 <_ZN30Dispatcher_SecurityCardAuthRpy4sendEP5CUserR9ParamBase+0x1a9>
 82630d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82630d8:	89 04 24             	mov    %eax,(%esp)
 82630db:	e8 4e cc fc ff       	call   822fd2e <_ZN5CUser6getPadEv>
 82630e0:	89 04 24             	mov    %eax,(%esp)
 82630e3:	e8 a6 be fc ff       	call   822ef8e <_ZN8Sanicova4CPad10getFailCntEv>
 82630e8:	89 44 24 04          	mov    %eax,0x4(%esp)
 82630ec:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82630ef:	89 04 24             	mov    %eax,(%esp)
 82630f2:	e8 29 88 e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82630f7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82630fe:	00 
 82630ff:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8263102:	89 04 24             	mov    %eax,(%esp)
 8263105:	e8 4e 88 e6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 826310a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 826310d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8263111:	8b 45 0c             	mov    0xc(%ebp),%eax
 8263114:	89 04 24             	mov    %eax,(%esp)
 8263117:	e8 9e 54 3e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 826311c:	eb 1b                	jmp    8263139 <_ZN30Dispatcher_SecurityCardAuthRpy4sendEP5CUserR9ParamBase+0x1eb>
 826311e:	89 d3                	mov    %edx,%ebx
 8263120:	89 c6                	mov    %eax,%esi
 8263122:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8263125:	89 04 24             	mov    %eax,(%esp)
 8263128:	e8 53 ad 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 826312d:	89 f0                	mov    %esi,%eax
 826312f:	89 da                	mov    %ebx,%edx
 8263131:	89 04 24             	mov    %eax,(%esp)
 8263134:	e8 17 06 88 00       	call   8ae3750 <_Unwind_Resume>
 8263139:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 826313c:	89 04 24             	mov    %eax,(%esp)
 826313f:	e8 3c ad 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8263144:	83 c4 40             	add    $0x40,%esp
 8263147:	5b                   	pop    %ebx
 8263148:	5e                   	pop    %esi
 8263149:	5d                   	pop    %ebp
 826314a:	c3                   	ret
 826314b:	90                   	nop

```

```c
// Dispatcher_SecurityCardAuthRpy::send @ 0x8262f4e

/* Dispatcher_SecurityCardAuthRpy::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_SecurityCardAuthRpy::send
          (Dispatcher_SecurityCardAuthRpy *this,CUser *param_1,ParamBase *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CGameManager *this_00;
  CPad *this_01;
  PacketGuard local_30 [12];
  PacketGuard local_24 [12];
  ParamBase *local_18;
  CTradeSpace *local_14;
  CUser *local_10;
  
  local_18 = param_2;
  if (param_2[4] != (ParamBase)0x0) {
    iVar3 = CUser::GetTradeSpace(param_1);
    this_00 = (CGameManager *)G_CGameManager();
    local_14 = (CTradeSpace *)CGameManager::GetTradeSpace(this_00,iVar3);
    if ((local_14 == (CTradeSpace *)0x0) ||
       (cVar2 = CTradeSpace::is_empty(local_14), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      PacketGuard::PacketGuard(local_24);
                    /* try { // try from 08262fc9 to 0826303b has its CatchHandler @ 0826303e */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_24);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0xb0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
      local_10 = (CUser *)CTradeSpace::GetOppositeUser(local_14,param_1);
      if (local_10 != (CUser *)0x0) {
        CUser::Send(local_10,local_24);
      }
      PacketGuard::~PacketGuard(local_24);
    }
    return;
  }
  if (param_2[5] == (ParamBase)0x0) {
    return;
  }
  PacketGuard::PacketGuard(local_30);
                    /* try { // try from 08263099 to 0826311b has its CatchHandler @ 0826311e */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0xa7);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(uint)(byte)local_18[5]);
  if (local_18[5] == (ParamBase)0x87) {
    this_01 = (CPad *)CUser::getPad(param_1);
    iVar3 = Sanicova::CPad::getFailCnt(this_01);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,iVar3);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
  CUser::Send(param_1,local_30);
  PacketGuard::~PacketGuard(local_30);
  return;
}

```

