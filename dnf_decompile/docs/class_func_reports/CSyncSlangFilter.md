# CSyncSlangFilter

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 11

---

## AddSlang

```asm
// === 0862e72a CSyncSlangFilter::AddSlang  [0x0862e72a-0x862e89e] ===
 862e72a:	55                   	push   %ebp
 862e72b:	89 e5                	mov    %esp,%ebp
 862e72d:	57                   	push   %edi
 862e72e:	56                   	push   %esi
 862e72f:	53                   	push   %ebx
 862e730:	81 ec 3c 01 00 00    	sub    $0x13c,%esp
 862e736:	8d 95 d3 fe ff ff    	lea    -0x12d(%ebp),%edx
 862e73c:	bb 01 01 00 00       	mov    $0x101,%ebx
 862e741:	b8 00 00 00 00       	mov    $0x0,%eax
 862e746:	89 d1                	mov    %edx,%ecx
 862e748:	83 e1 01             	and    $0x1,%ecx
 862e74b:	85 c9                	test   %ecx,%ecx
 862e74d:	74 08                	je     862e757 <_ZN16CSyncSlangFilter8AddSlangERKSs+0x2d>
 862e74f:	88 02                	mov    %al,(%edx)
 862e751:	83 c2 01             	add    $0x1,%edx
 862e754:	83 eb 01             	sub    $0x1,%ebx
 862e757:	89 d1                	mov    %edx,%ecx
 862e759:	83 e1 02             	and    $0x2,%ecx
 862e75c:	85 c9                	test   %ecx,%ecx
 862e75e:	74 09                	je     862e769 <_ZN16CSyncSlangFilter8AddSlangERKSs+0x3f>
 862e760:	66 89 02             	mov    %ax,(%edx)
 862e763:	83 c2 02             	add    $0x2,%edx
 862e766:	83 eb 02             	sub    $0x2,%ebx
 862e769:	89 d9                	mov    %ebx,%ecx
 862e76b:	c1 e9 02             	shr    $0x2,%ecx
 862e76e:	89 d7                	mov    %edx,%edi
 862e770:	f3 ab                	rep stos %eax,%es:(%edi)
 862e772:	89 fa                	mov    %edi,%edx
 862e774:	89 d9                	mov    %ebx,%ecx
 862e776:	83 e1 02             	and    $0x2,%ecx
 862e779:	85 c9                	test   %ecx,%ecx
 862e77b:	74 06                	je     862e783 <_ZN16CSyncSlangFilter8AddSlangERKSs+0x59>
 862e77d:	66 89 02             	mov    %ax,(%edx)
 862e780:	83 c2 02             	add    $0x2,%edx
 862e783:	89 d9                	mov    %ebx,%ecx
 862e785:	83 e1 01             	and    $0x1,%ecx
 862e788:	85 c9                	test   %ecx,%ecx
 862e78a:	74 05                	je     862e791 <_ZN16CSyncSlangFilter8AddSlangERKSs+0x67>
 862e78c:	88 02                	mov    %al,(%edx)
 862e78e:	83 c2 01             	add    $0x1,%edx
 862e791:	8b 45 0c             	mov    0xc(%ebp),%eax
 862e794:	89 04 24             	mov    %eax,(%esp)
 862e797:	e8 54 7d 0d 00       	call   87064f0 <_ZNKSs5c_strEv>
 862e79c:	8d 95 d3 fe ff ff    	lea    -0x12d(%ebp),%edx
 862e7a2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 862e7a6:	c7 44 24 08 62 59 ce 	movl   $0x8ce5962,0x8(%esp)
 862e7ad:	08 
 862e7ae:	c7 44 24 04 00 01 00 	movl   $0x100,0x4(%esp)
 862e7b5:	00 
 862e7b6:	89 14 24             	mov    %edx,(%esp)
 862e7b9:	e8 5e e0 f5 ff       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 862e7be:	c6 45 d3 00          	movb   $0x0,-0x2d(%ebp)
 862e7c2:	8b 45 08             	mov    0x8(%ebp),%eax
 862e7c5:	8b 00                	mov    (%eax),%eax
 862e7c7:	8b 00                	mov    (%eax),%eax
 862e7c9:	89 45 d8             	mov    %eax,-0x28(%ebp)
 862e7cc:	0f b6 85 d3 fe ff ff 	movzbl -0x12d(%ebp),%eax
 862e7d3:	3c bb                	cmp    $0xbb,%al
 862e7d5:	75 24                	jne    862e7fb <_ZN16CSyncSlangFilter8AddSlangERKSs+0xd1>
 862e7d7:	0f b6 85 d4 fe ff ff 	movzbl -0x12c(%ebp),%eax
 862e7de:	3c d8                	cmp    $0xd8,%al
 862e7e0:	75 19                	jne    862e7fb <_ZN16CSyncSlangFilter8AddSlangERKSs+0xd1>
 862e7e2:	0f b6 85 d5 fe ff ff 	movzbl -0x12b(%ebp),%eax
 862e7e9:	3c c3                	cmp    $0xc3,%al
 862e7eb:	75 0e                	jne    862e7fb <_ZN16CSyncSlangFilter8AddSlangERKSs+0xd1>
 862e7ed:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 862e7f4:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 862e7fb:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 862e802:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 862e809:	eb 61                	jmp    862e86c <_ZN16CSyncSlangFilter8AddSlangERKSs+0x142>
 862e80b:	8b 45 08             	mov    0x8(%ebp),%eax
 862e80e:	83 c0 08             	add    $0x8,%eax
 862e811:	89 44 24 04          	mov    %eax,0x4(%esp)
 862e815:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 862e818:	89 04 24             	mov    %eax,(%esp)
 862e81b:	e8 16 47 c8 ff       	call   82b2f36 <_ZN10writeGuardI6rwLockEC1EPS0_>
 862e820:	8b 45 dc             	mov    -0x24(%ebp),%eax
 862e823:	0f b6 84 05 d3 fe ff 	movzbl -0x12d(%ebp,%eax,1),%eax
 862e82a:	ff 
 862e82b:	0f b6 c0             	movzbl %al,%eax
 862e82e:	89 44 24 04          	mov    %eax,0x4(%esp)
 862e832:	8b 45 d8             	mov    -0x28(%ebp),%eax
 862e835:	89 04 24             	mov    %eax,(%esp)
 862e838:	e8 1d 02 00 00       	call   862ea5a <_ZN9SlangNode8AddChildEj>
 862e83d:	89 45 d8             	mov    %eax,-0x28(%ebp)
 862e840:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 862e843:	89 04 24             	mov    %eax,(%esp)
 862e846:	e8 07 47 c8 ff       	call   82b2f52 <_ZN10writeGuardI6rwLockED1Ev>
 862e84b:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 862e84f:	eb 1b                	jmp    862e86c <_ZN16CSyncSlangFilter8AddSlangERKSs+0x142>
 862e851:	89 d3                	mov    %edx,%ebx
 862e853:	89 c6                	mov    %eax,%esi
 862e855:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 862e858:	89 04 24             	mov    %eax,(%esp)
 862e85b:	e8 f2 46 c8 ff       	call   82b2f52 <_ZN10writeGuardI6rwLockED1Ev>
 862e860:	89 f0                	mov    %esi,%eax
 862e862:	89 da                	mov    %ebx,%edx
 862e864:	89 04 24             	mov    %eax,(%esp)
 862e867:	e8 e4 4e 4b 00       	call   8ae3750 <_Unwind_Resume>
 862e86c:	8b 45 0c             	mov    0xc(%ebp),%eax
 862e86f:	89 04 24             	mov    %eax,(%esp)
 862e872:	e8 e9 7d 0d 00       	call   8706660 <_ZNKSs4sizeEv>
 862e877:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 862e87a:	0f 97 c0             	seta   %al
 862e87d:	84 c0                	test   %al,%al
 862e87f:	75 8a                	jne    862e80b <_ZN16CSyncSlangFilter8AddSlangERKSs+0xe1>
 862e881:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 862e888:	00 
 862e889:	8b 45 d8             	mov    -0x28(%ebp),%eax
 862e88c:	89 04 24             	mov    %eax,(%esp)
 862e88f:	e8 b4 02 00 00       	call   862eb48 <_ZN9SlangNode10SetEndNodeEb>
 862e894:	81 c4 3c 01 00 00    	add    $0x13c,%esp
 862e89a:	5b                   	pop    %ebx
 862e89b:	5e                   	pop    %esi
 862e89c:	5f                   	pop    %edi
 862e89d:	5d                   	pop    %ebp
 862e89e:	c3                   	ret

```

```c
// CSyncSlangFilter::AddSlang @ 0x862e72a

/* CSyncSlangFilter::AddSlang(std::string const&) */

void __thiscall CSyncSlangFilter::AddSlang(CSyncSlangFilter *this,string *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  char local_131;
  char local_130;
  char cStack_12f;
  undefined1 local_31;
  writeGuard<rwLock> local_30 [4];
  SlangNode *local_2c;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  pcVar3 = &local_131;
  uVar4 = 0x101;
  bVar5 = ((uint)pcVar3 & 1) != 0;
  if (bVar5) {
    local_131 = '\0';
    pcVar3 = &local_130;
    uVar4 = 0x100;
  }
  if (((uint)pcVar3 & 2) != 0) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3 = pcVar3 + 2;
    uVar4 = uVar4 - 2;
  }
  for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  if ((uVar4 & 2) != 0) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3 = pcVar3 + 2;
  }
  if (!bVar5) {
    *pcVar3 = '\0';
  }
  uVar1 = std::string::c_str((string *)param_1);
  OS_API::snprintf(&local_131,0x100,"%s",uVar1);
  local_31 = 0;
  local_2c = (SlangNode *)**(undefined4 **)this;
  if (((local_131 == -0x45) && (local_130 == -0x28)) && (cStack_12f == -0x3d)) {
    local_24 = 0;
    local_20 = 0;
  }
  local_28 = 0;
  while( true ) {
    uVar4 = std::string::size((string *)param_1);
    if (uVar4 <= local_28) break;
    writeGuard<rwLock>::writeGuard(local_30,(rwLock *)(this + 8));
                    /* try { // try from 0862e838 to 0862e83c has its CatchHandler @ 0862e851 */
    local_2c = (SlangNode *)SlangNode::AddChild((uint)local_2c);
    writeGuard<rwLock>::~writeGuard(local_30);
    local_28 = local_28 + 1;
  }
  SlangNode::SetEndNode(local_2c,true);
  return;
}

```

---

## AddSlangList

```asm
// === 0862dccc CSyncSlangFilter::AddSlangList  [0x0862dccc-0x862dec5] ===
 862dccc:	55                   	push   %ebp
 862dccd:	89 e5                	mov    %esp,%ebp
 862dccf:	57                   	push   %edi
 862dcd0:	56                   	push   %esi
 862dcd1:	53                   	push   %ebx
 862dcd2:	83 ec 7c             	sub    $0x7c,%esp
 862dcd5:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 862dcda:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 862dce1:	00 
 862dce2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 862dce9:	00 
 862dcea:	89 04 24             	mov    %eax,(%esp)
 862dced:	e8 4c 75 dc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 862dcf2:	89 45 e0             	mov    %eax,-0x20(%ebp)
 862dcf5:	c7 44 24 04 00 59 ce 	movl   $0x8ce5900,0x4(%esp)
 862dcfc:	08 
 862dcfd:	8b 45 e0             	mov    -0x20(%ebp),%eax
 862dd00:	89 04 24             	mov    %eax,(%esp)
 862dd03:	e8 b8 64 dc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 862dd08:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 862dd0f:	00 
 862dd10:	8b 45 e0             	mov    -0x20(%ebp),%eax
 862dd13:	89 04 24             	mov    %eax,(%esp)
 862dd16:	e8 0b 66 dc ff       	call   83f4326 <_ZN5MySQL4execEb>
 862dd1b:	83 f0 01             	xor    $0x1,%eax
 862dd1e:	84 c0                	test   %al,%al
 862dd20:	74 0a                	je     862dd2c <_ZN16CSyncSlangFilter12AddSlangListEv+0x60>
 862dd22:	b8 00 00 00 00       	mov    $0x0,%eax
 862dd27:	e9 91 01 00 00       	jmp    862debd <_ZN16CSyncSlangFilter12AddSlangListEv+0x1f1>
 862dd2c:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 862dd33:	e9 67 01 00 00       	jmp    862de9f <_ZN16CSyncSlangFilter12AddSlangListEv+0x1d3>
 862dd38:	8b 45 e0             	mov    -0x20(%ebp),%eax
 862dd3b:	89 04 24             	mov    %eax,(%esp)
 862dd3e:	e8 79 67 dc ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 862dd43:	83 f0 01             	xor    $0x1,%eax
 862dd46:	84 c0                	test   %al,%al
 862dd48:	74 0a                	je     862dd54 <_ZN16CSyncSlangFilter12AddSlangListEv+0x88>
 862dd4a:	b8 00 00 00 00       	mov    $0x0,%eax
 862dd4f:	e9 69 01 00 00       	jmp    862debd <_ZN16CSyncSlangFilter12AddSlangListEv+0x1f1>
 862dd54:	8d 55 95             	lea    -0x6b(%ebp),%edx
 862dd57:	bb 33 00 00 00       	mov    $0x33,%ebx
 862dd5c:	b8 00 00 00 00       	mov    $0x0,%eax
 862dd61:	89 d1                	mov    %edx,%ecx
 862dd63:	83 e1 01             	and    $0x1,%ecx
 862dd66:	85 c9                	test   %ecx,%ecx
 862dd68:	74 08                	je     862dd72 <_ZN16CSyncSlangFilter12AddSlangListEv+0xa6>
 862dd6a:	88 02                	mov    %al,(%edx)
 862dd6c:	83 c2 01             	add    $0x1,%edx
 862dd6f:	83 eb 01             	sub    $0x1,%ebx
 862dd72:	89 d1                	mov    %edx,%ecx
 862dd74:	83 e1 02             	and    $0x2,%ecx
 862dd77:	85 c9                	test   %ecx,%ecx
 862dd79:	74 09                	je     862dd84 <_ZN16CSyncSlangFilter12AddSlangListEv+0xb8>
 862dd7b:	66 89 02             	mov    %ax,(%edx)
 862dd7e:	83 c2 02             	add    $0x2,%edx
 862dd81:	83 eb 02             	sub    $0x2,%ebx
 862dd84:	89 d9                	mov    %ebx,%ecx
 862dd86:	c1 e9 02             	shr    $0x2,%ecx
 862dd89:	89 d7                	mov    %edx,%edi
 862dd8b:	f3 ab                	rep stos %eax,%es:(%edi)
 862dd8d:	89 fa                	mov    %edi,%edx
 862dd8f:	89 d9                	mov    %ebx,%ecx
 862dd91:	83 e1 02             	and    $0x2,%ecx
 862dd94:	85 c9                	test   %ecx,%ecx
 862dd96:	74 06                	je     862dd9e <_ZN16CSyncSlangFilter12AddSlangListEv+0xd2>
 862dd98:	66 89 02             	mov    %ax,(%edx)
 862dd9b:	83 c2 02             	add    $0x2,%edx
 862dd9e:	89 d9                	mov    %ebx,%ecx
 862dda0:	83 e1 01             	and    $0x1,%ecx
 862dda3:	85 c9                	test   %ecx,%ecx
 862dda5:	74 05                	je     862ddac <_ZN16CSyncSlangFilter12AddSlangListEv+0xe0>
 862dda7:	88 02                	mov    %al,(%edx)
 862dda9:	83 c2 01             	add    $0x1,%edx
 862ddac:	c7 44 24 0c 33 00 00 	movl   $0x33,0xc(%esp)
 862ddb3:	00 
 862ddb4:	8d 45 95             	lea    -0x6b(%ebp),%eax
 862ddb7:	89 44 24 08          	mov    %eax,0x8(%esp)
 862ddbb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 862ddc2:	00 
 862ddc3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 862ddc6:	89 04 24             	mov    %eax,(%esp)
 862ddc9:	e8 1c f0 ab ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 862ddce:	83 f0 01             	xor    $0x1,%eax
 862ddd1:	84 c0                	test   %al,%al
 862ddd3:	74 40                	je     862de15 <_ZN16CSyncSlangFilter12AddSlangListEv+0x149>
 862ddd5:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 862dddc:	00 
 862dddd:	c7 44 24 08 bc 00 00 	movl   $0xbc,0x8(%esp)
 862dde4:	00 
 862dde5:	c7 44 24 04 e0 65 ce 	movl   $0x8ce65e0,0x4(%esp)
 862ddec:	08 
 862dded:	8d 45 cc             	lea    -0x34(%ebp),%eax
 862ddf0:	89 04 24             	mov    %eax,(%esp)
 862ddf3:	e8 20 19 f2 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 862ddf8:	c7 44 24 04 20 59 ce 	movl   $0x8ce5920,0x4(%esp)
 862ddff:	08 
 862de00:	8d 45 cc             	lea    -0x34(%ebp),%eax
 862de03:	89 04 24             	mov    %eax,(%esp)
 862de06:	e8 7d 19 f2 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 862de0b:	b8 00 00 00 00       	mov    $0x0,%eax
 862de10:	e9 a8 00 00 00       	jmp    862debd <_ZN16CSyncSlangFilter12AddSlangListEv+0x1f1>
 862de15:	8d 45 df             	lea    -0x21(%ebp),%eax
 862de18:	89 04 24             	mov    %eax,(%esp)
 862de1b:	e8 b0 22 0b 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 862de20:	8d 45 df             	lea    -0x21(%ebp),%eax
 862de23:	89 44 24 08          	mov    %eax,0x8(%esp)
 862de27:	8d 45 95             	lea    -0x6b(%ebp),%eax
 862de2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 862de2e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 862de31:	89 04 24             	mov    %eax,(%esp)
 862de34:	e8 f7 97 0d 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 862de39:	eb 1b                	jmp    862de56 <_ZN16CSyncSlangFilter12AddSlangListEv+0x18a>
 862de3b:	89 d3                	mov    %edx,%ebx
 862de3d:	89 c6                	mov    %eax,%esi
 862de3f:	8d 45 df             	lea    -0x21(%ebp),%eax
 862de42:	89 04 24             	mov    %eax,(%esp)
 862de45:	e8 a6 22 0b 00       	call   86e00f0 <_ZNSaIcED1Ev>
 862de4a:	89 f0                	mov    %esi,%eax
 862de4c:	89 da                	mov    %ebx,%edx
 862de4e:	89 04 24             	mov    %eax,(%esp)
 862de51:	e8 fa 58 4b 00       	call   8ae3750 <_Unwind_Resume>
 862de56:	8d 45 df             	lea    -0x21(%ebp),%eax
 862de59:	89 04 24             	mov    %eax,(%esp)
 862de5c:	e8 8f 22 0b 00       	call   86e00f0 <_ZNSaIcED1Ev>
 862de61:	8d 45 c8             	lea    -0x38(%ebp),%eax
 862de64:	89 44 24 04          	mov    %eax,0x4(%esp)
 862de68:	8b 45 08             	mov    0x8(%ebp),%eax
 862de6b:	89 04 24             	mov    %eax,(%esp)
 862de6e:	e8 b7 08 00 00       	call   862e72a <_ZN16CSyncSlangFilter8AddSlangERKSs>
 862de73:	eb 1b                	jmp    862de90 <_ZN16CSyncSlangFilter12AddSlangListEv+0x1c4>
 862de75:	89 d3                	mov    %edx,%ebx
 862de77:	89 c6                	mov    %eax,%esi
 862de79:	8d 45 c8             	lea    -0x38(%ebp),%eax
 862de7c:	89 04 24             	mov    %eax,(%esp)
 862de7f:	e8 5c 9d 0d 00       	call   8707be0 <_ZNSsD1Ev>
 862de84:	89 f0                	mov    %esi,%eax
 862de86:	89 da                	mov    %ebx,%edx
 862de88:	89 04 24             	mov    %eax,(%esp)
 862de8b:	e8 c0 58 4b 00       	call   8ae3750 <_Unwind_Resume>
 862de90:	8d 45 c8             	lea    -0x38(%ebp),%eax
 862de93:	89 04 24             	mov    %eax,(%esp)
 862de96:	e8 45 9d 0d 00       	call   8707be0 <_ZNSsD1Ev>
 862de9b:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 862de9f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 862dea2:	89 04 24             	mov    %eax,(%esp)
 862dea5:	e8 c2 44 ab ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 862deaa:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 862dead:	0f 97 c0             	seta   %al
 862deb0:	84 c0                	test   %al,%al
 862deb2:	0f 85 80 fe ff ff    	jne    862dd38 <_ZN16CSyncSlangFilter12AddSlangListEv+0x6c>
 862deb8:	b8 01 00 00 00       	mov    $0x1,%eax
 862debd:	83 c4 7c             	add    $0x7c,%esp
 862dec0:	5b                   	pop    %ebx
 862dec1:	5e                   	pop    %esi
 862dec2:	5f                   	pop    %edi
 862dec3:	5d                   	pop    %ebp
 862dec4:	c3                   	ret
 862dec5:	90                   	nop

```

```c
// CSyncSlangFilter::AddSlangList @ 0x862dccc

/* CSyncSlangFilter::AddSlangList() */

undefined4 __thiscall CSyncSlangFilter::AddSlangList(CSyncSlangFilter *this)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  bool bVar6;
  byte bVar7;
  char local_6f;
  char local_6e [50];
  string local_3c;
  cMyTrace local_38 [19];
  allocator<char> local_25;
  MySQL *local_24;
  uint local_20;
  
  bVar7 = 0;
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  MySQL::set_query(local_24,"seLect slang from slang_list");
  cVar1 = MySQL::exec(local_24,true);
  if (cVar1 == '\x01') {
    local_20 = 0;
    while (uVar3 = MySQL::get_n_rows(local_24), local_20 < uVar3) {
      cVar1 = MySQL::fetch(local_24);
      if (cVar1 != '\x01') {
        return 0;
      }
      pcVar5 = &local_6f;
      uVar3 = 0x33;
      bVar6 = ((uint)pcVar5 & 1) != 0;
      if (bVar6) {
        local_6f = '\0';
        pcVar5 = local_6e;
        uVar3 = 0x32;
      }
      if (((uint)pcVar5 & 2) != 0) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5 = pcVar5 + 2;
        uVar3 = uVar3 - 2;
      }
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5[2] = '\0';
        pcVar5[3] = '\0';
        pcVar5 = pcVar5 + ((uint)bVar7 * -2 + 1) * 4;
      }
      if ((uVar3 & 2) != 0) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5 = pcVar5 + 2;
      }
      if (!bVar6) {
        *pcVar5 = '\0';
      }
      cVar1 = MySQL::get_str(local_24,0,&local_6f,0x33);
      if (cVar1 != '\x01') {
        cMyTrace::cMyTrace(local_38,"bool CSyncSlangFilter::AddSlangList()",0xbc,5);
        cMyTrace::operator()(local_38,"CSyncSlangFilter::AddSlangList");
        return 0;
      }
      std::allocator<char>::allocator();
                    /* try { // try from 0862de34 to 0862de38 has its CatchHandler @ 0862de3b */
      std::string::string((string *)&local_3c,&local_6f,(allocator *)&local_25);
      std::allocator<char>::~allocator(&local_25);
                    /* try { // try from 0862de6e to 0862de72 has its CatchHandler @ 0862de75 */
      AddSlang(this,&local_3c);
      std::string::~string((string *)&local_3c);
      local_20 = local_20 + 1;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## AddSlangListName

```asm
// === 0862dec6 CSyncSlangFilter::AddSlangListName  [0x0862dec6-0x862e0bf] ===
 862dec6:	55                   	push   %ebp
 862dec7:	89 e5                	mov    %esp,%ebp
 862dec9:	57                   	push   %edi
 862deca:	56                   	push   %esi
 862decb:	53                   	push   %ebx
 862decc:	83 ec 7c             	sub    $0x7c,%esp
 862decf:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 862ded4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 862dedb:	00 
 862dedc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 862dee3:	00 
 862dee4:	89 04 24             	mov    %eax,(%esp)
 862dee7:	e8 52 73 dc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 862deec:	89 45 e0             	mov    %eax,-0x20(%ebp)
 862deef:	c7 44 24 04 40 59 ce 	movl   $0x8ce5940,0x4(%esp)
 862def6:	08 
 862def7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 862defa:	89 04 24             	mov    %eax,(%esp)
 862defd:	e8 be 62 dc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 862df02:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 862df09:	00 
 862df0a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 862df0d:	89 04 24             	mov    %eax,(%esp)
 862df10:	e8 11 64 dc ff       	call   83f4326 <_ZN5MySQL4execEb>
 862df15:	83 f0 01             	xor    $0x1,%eax
 862df18:	84 c0                	test   %al,%al
 862df1a:	74 0a                	je     862df26 <_ZN16CSyncSlangFilter16AddSlangListNameEv+0x60>
 862df1c:	b8 00 00 00 00       	mov    $0x0,%eax
 862df21:	e9 91 01 00 00       	jmp    862e0b7 <_ZN16CSyncSlangFilter16AddSlangListNameEv+0x1f1>
 862df26:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 862df2d:	e9 67 01 00 00       	jmp    862e099 <_ZN16CSyncSlangFilter16AddSlangListNameEv+0x1d3>
 862df32:	8b 45 e0             	mov    -0x20(%ebp),%eax
 862df35:	89 04 24             	mov    %eax,(%esp)
 862df38:	e8 7f 65 dc ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 862df3d:	83 f0 01             	xor    $0x1,%eax
 862df40:	84 c0                	test   %al,%al
 862df42:	74 0a                	je     862df4e <_ZN16CSyncSlangFilter16AddSlangListNameEv+0x88>
 862df44:	b8 00 00 00 00       	mov    $0x0,%eax
 862df49:	e9 69 01 00 00       	jmp    862e0b7 <_ZN16CSyncSlangFilter16AddSlangListNameEv+0x1f1>
 862df4e:	8d 55 95             	lea    -0x6b(%ebp),%edx
 862df51:	bb 33 00 00 00       	mov    $0x33,%ebx
 862df56:	b8 00 00 00 00       	mov    $0x0,%eax
 862df5b:	89 d1                	mov    %edx,%ecx
 862df5d:	83 e1 01             	and    $0x1,%ecx
 862df60:	85 c9                	test   %ecx,%ecx
 862df62:	74 08                	je     862df6c <_ZN16CSyncSlangFilter16AddSlangListNameEv+0xa6>
 862df64:	88 02                	mov    %al,(%edx)
 862df66:	83 c2 01             	add    $0x1,%edx
 862df69:	83 eb 01             	sub    $0x1,%ebx
 862df6c:	89 d1                	mov    %edx,%ecx
 862df6e:	83 e1 02             	and    $0x2,%ecx
 862df71:	85 c9                	test   %ecx,%ecx
 862df73:	74 09                	je     862df7e <_ZN16CSyncSlangFilter16AddSlangListNameEv+0xb8>
 862df75:	66 89 02             	mov    %ax,(%edx)
 862df78:	83 c2 02             	add    $0x2,%edx
 862df7b:	83 eb 02             	sub    $0x2,%ebx
 862df7e:	89 d9                	mov    %ebx,%ecx
 862df80:	c1 e9 02             	shr    $0x2,%ecx
 862df83:	89 d7                	mov    %edx,%edi
 862df85:	f3 ab                	rep stos %eax,%es:(%edi)
 862df87:	89 fa                	mov    %edi,%edx
 862df89:	89 d9                	mov    %ebx,%ecx
 862df8b:	83 e1 02             	and    $0x2,%ecx
 862df8e:	85 c9                	test   %ecx,%ecx
 862df90:	74 06                	je     862df98 <_ZN16CSyncSlangFilter16AddSlangListNameEv+0xd2>
 862df92:	66 89 02             	mov    %ax,(%edx)
 862df95:	83 c2 02             	add    $0x2,%edx
 862df98:	89 d9                	mov    %ebx,%ecx
 862df9a:	83 e1 01             	and    $0x1,%ecx
 862df9d:	85 c9                	test   %ecx,%ecx
 862df9f:	74 05                	je     862dfa6 <_ZN16CSyncSlangFilter16AddSlangListNameEv+0xe0>
 862dfa1:	88 02                	mov    %al,(%edx)
 862dfa3:	83 c2 01             	add    $0x1,%edx
 862dfa6:	c7 44 24 0c 33 00 00 	movl   $0x33,0xc(%esp)
 862dfad:	00 
 862dfae:	8d 45 95             	lea    -0x6b(%ebp),%eax
 862dfb1:	89 44 24 08          	mov    %eax,0x8(%esp)
 862dfb5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 862dfbc:	00 
 862dfbd:	8b 45 e0             	mov    -0x20(%ebp),%eax
 862dfc0:	89 04 24             	mov    %eax,(%esp)
 862dfc3:	e8 22 ee ab ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 862dfc8:	83 f0 01             	xor    $0x1,%eax
 862dfcb:	84 c0                	test   %al,%al
 862dfcd:	74 40                	je     862e00f <_ZN16CSyncSlangFilter16AddSlangListNameEv+0x149>
 862dfcf:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 862dfd6:	00 
 862dfd7:	c7 44 24 08 d9 00 00 	movl   $0xd9,0x8(%esp)
 862dfde:	00 
 862dfdf:	c7 44 24 04 a0 65 ce 	movl   $0x8ce65a0,0x4(%esp)
 862dfe6:	08 
 862dfe7:	8d 45 cc             	lea    -0x34(%ebp),%eax
 862dfea:	89 04 24             	mov    %eax,(%esp)
 862dfed:	e8 26 17 f2 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 862dff2:	c7 44 24 04 20 59 ce 	movl   $0x8ce5920,0x4(%esp)
 862dff9:	08 
 862dffa:	8d 45 cc             	lea    -0x34(%ebp),%eax
 862dffd:	89 04 24             	mov    %eax,(%esp)
 862e000:	e8 83 17 f2 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 862e005:	b8 00 00 00 00       	mov    $0x0,%eax
 862e00a:	e9 a8 00 00 00       	jmp    862e0b7 <_ZN16CSyncSlangFilter16AddSlangListNameEv+0x1f1>
 862e00f:	8d 45 df             	lea    -0x21(%ebp),%eax
 862e012:	89 04 24             	mov    %eax,(%esp)
 862e015:	e8 b6 20 0b 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 862e01a:	8d 45 df             	lea    -0x21(%ebp),%eax
 862e01d:	89 44 24 08          	mov    %eax,0x8(%esp)
 862e021:	8d 45 95             	lea    -0x6b(%ebp),%eax
 862e024:	89 44 24 04          	mov    %eax,0x4(%esp)
 862e028:	8d 45 c8             	lea    -0x38(%ebp),%eax
 862e02b:	89 04 24             	mov    %eax,(%esp)
 862e02e:	e8 fd 95 0d 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 862e033:	eb 1b                	jmp    862e050 <_ZN16CSyncSlangFilter16AddSlangListNameEv+0x18a>
 862e035:	89 d3                	mov    %edx,%ebx
 862e037:	89 c6                	mov    %eax,%esi
 862e039:	8d 45 df             	lea    -0x21(%ebp),%eax
 862e03c:	89 04 24             	mov    %eax,(%esp)
 862e03f:	e8 ac 20 0b 00       	call   86e00f0 <_ZNSaIcED1Ev>
 862e044:	89 f0                	mov    %esi,%eax
 862e046:	89 da                	mov    %ebx,%edx
 862e048:	89 04 24             	mov    %eax,(%esp)
 862e04b:	e8 00 57 4b 00       	call   8ae3750 <_Unwind_Resume>
 862e050:	8d 45 df             	lea    -0x21(%ebp),%eax
 862e053:	89 04 24             	mov    %eax,(%esp)
 862e056:	e8 95 20 0b 00       	call   86e00f0 <_ZNSaIcED1Ev>
 862e05b:	8d 45 c8             	lea    -0x38(%ebp),%eax
 862e05e:	89 44 24 04          	mov    %eax,0x4(%esp)
 862e062:	8b 45 08             	mov    0x8(%ebp),%eax
 862e065:	89 04 24             	mov    %eax,(%esp)
 862e068:	e8 09 02 00 00       	call   862e276 <_ZN16CSyncSlangFilter12AddSlangNameERKSs>
 862e06d:	eb 1b                	jmp    862e08a <_ZN16CSyncSlangFilter16AddSlangListNameEv+0x1c4>
 862e06f:	89 d3                	mov    %edx,%ebx
 862e071:	89 c6                	mov    %eax,%esi
 862e073:	8d 45 c8             	lea    -0x38(%ebp),%eax
 862e076:	89 04 24             	mov    %eax,(%esp)
 862e079:	e8 62 9b 0d 00       	call   8707be0 <_ZNSsD1Ev>
 862e07e:	89 f0                	mov    %esi,%eax
 862e080:	89 da                	mov    %ebx,%edx
 862e082:	89 04 24             	mov    %eax,(%esp)
 862e085:	e8 c6 56 4b 00       	call   8ae3750 <_Unwind_Resume>
 862e08a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 862e08d:	89 04 24             	mov    %eax,(%esp)
 862e090:	e8 4b 9b 0d 00       	call   8707be0 <_ZNSsD1Ev>
 862e095:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 862e099:	8b 45 e0             	mov    -0x20(%ebp),%eax
 862e09c:	89 04 24             	mov    %eax,(%esp)
 862e09f:	e8 c8 42 ab ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 862e0a4:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 862e0a7:	0f 97 c0             	seta   %al
 862e0aa:	84 c0                	test   %al,%al
 862e0ac:	0f 85 80 fe ff ff    	jne    862df32 <_ZN16CSyncSlangFilter16AddSlangListNameEv+0x6c>
 862e0b2:	b8 01 00 00 00       	mov    $0x1,%eax
 862e0b7:	83 c4 7c             	add    $0x7c,%esp
 862e0ba:	5b                   	pop    %ebx
 862e0bb:	5e                   	pop    %esi
 862e0bc:	5f                   	pop    %edi
 862e0bd:	5d                   	pop    %ebp
 862e0be:	c3                   	ret
 862e0bf:	90                   	nop

```

```c
// CSyncSlangFilter::AddSlangListName @ 0x862dec6

/* CSyncSlangFilter::AddSlangListName() */

undefined4 __thiscall CSyncSlangFilter::AddSlangListName(CSyncSlangFilter *this)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  bool bVar6;
  byte bVar7;
  char local_6f;
  char local_6e [50];
  string local_3c;
  cMyTrace local_38 [19];
  allocator<char> local_25;
  MySQL *local_24;
  uint local_20;
  
  bVar7 = 0;
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  MySQL::set_query(local_24,"seLect slang from slang_list_name");
  cVar1 = MySQL::exec(local_24,true);
  if (cVar1 == '\x01') {
    local_20 = 0;
    while (uVar3 = MySQL::get_n_rows(local_24), local_20 < uVar3) {
      cVar1 = MySQL::fetch(local_24);
      if (cVar1 != '\x01') {
        return 0;
      }
      pcVar5 = &local_6f;
      uVar3 = 0x33;
      bVar6 = ((uint)pcVar5 & 1) != 0;
      if (bVar6) {
        local_6f = '\0';
        pcVar5 = local_6e;
        uVar3 = 0x32;
      }
      if (((uint)pcVar5 & 2) != 0) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5 = pcVar5 + 2;
        uVar3 = uVar3 - 2;
      }
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5[2] = '\0';
        pcVar5[3] = '\0';
        pcVar5 = pcVar5 + ((uint)bVar7 * -2 + 1) * 4;
      }
      if ((uVar3 & 2) != 0) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5 = pcVar5 + 2;
      }
      if (!bVar6) {
        *pcVar5 = '\0';
      }
      cVar1 = MySQL::get_str(local_24,0,&local_6f,0x33);
      if (cVar1 != '\x01') {
        cMyTrace::cMyTrace(local_38,"bool CSyncSlangFilter::AddSlangListName()",0xd9,5);
        cMyTrace::operator()(local_38,"CSyncSlangFilter::AddSlangList");
        return 0;
      }
      std::allocator<char>::allocator();
                    /* try { // try from 0862e02e to 0862e032 has its CatchHandler @ 0862e035 */
      std::string::string((string *)&local_3c,&local_6f,(allocator *)&local_25);
      std::allocator<char>::~allocator(&local_25);
                    /* try { // try from 0862e068 to 0862e06c has its CatchHandler @ 0862e06f */
      AddSlangName(this,&local_3c);
      std::string::~string((string *)&local_3c);
      local_20 = local_20 + 1;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## AddSlangName

```asm
// === 0862e276 CSyncSlangFilter::AddSlangName  [0x0862e276-0x862e3bd] ===
 862e276:	55                   	push   %ebp
 862e277:	89 e5                	mov    %esp,%ebp
 862e279:	57                   	push   %edi
 862e27a:	56                   	push   %esi
 862e27b:	53                   	push   %ebx
 862e27c:	81 ec 2c 01 00 00    	sub    $0x12c,%esp
 862e282:	8d 95 db fe ff ff    	lea    -0x125(%ebp),%edx
 862e288:	bb 01 01 00 00       	mov    $0x101,%ebx
 862e28d:	b8 00 00 00 00       	mov    $0x0,%eax
 862e292:	89 d1                	mov    %edx,%ecx
 862e294:	83 e1 01             	and    $0x1,%ecx
 862e297:	85 c9                	test   %ecx,%ecx
 862e299:	74 08                	je     862e2a3 <_ZN16CSyncSlangFilter12AddSlangNameERKSs+0x2d>
 862e29b:	88 02                	mov    %al,(%edx)
 862e29d:	83 c2 01             	add    $0x1,%edx
 862e2a0:	83 eb 01             	sub    $0x1,%ebx
 862e2a3:	89 d1                	mov    %edx,%ecx
 862e2a5:	83 e1 02             	and    $0x2,%ecx
 862e2a8:	85 c9                	test   %ecx,%ecx
 862e2aa:	74 09                	je     862e2b5 <_ZN16CSyncSlangFilter12AddSlangNameERKSs+0x3f>
 862e2ac:	66 89 02             	mov    %ax,(%edx)
 862e2af:	83 c2 02             	add    $0x2,%edx
 862e2b2:	83 eb 02             	sub    $0x2,%ebx
 862e2b5:	89 d9                	mov    %ebx,%ecx
 862e2b7:	c1 e9 02             	shr    $0x2,%ecx
 862e2ba:	89 d7                	mov    %edx,%edi
 862e2bc:	f3 ab                	rep stos %eax,%es:(%edi)
 862e2be:	89 fa                	mov    %edi,%edx
 862e2c0:	89 d9                	mov    %ebx,%ecx
 862e2c2:	83 e1 02             	and    $0x2,%ecx
 862e2c5:	85 c9                	test   %ecx,%ecx
 862e2c7:	74 06                	je     862e2cf <_ZN16CSyncSlangFilter12AddSlangNameERKSs+0x59>
 862e2c9:	66 89 02             	mov    %ax,(%edx)
 862e2cc:	83 c2 02             	add    $0x2,%edx
 862e2cf:	89 d9                	mov    %ebx,%ecx
 862e2d1:	83 e1 01             	and    $0x1,%ecx
 862e2d4:	85 c9                	test   %ecx,%ecx
 862e2d6:	74 05                	je     862e2dd <_ZN16CSyncSlangFilter12AddSlangNameERKSs+0x67>
 862e2d8:	88 02                	mov    %al,(%edx)
 862e2da:	83 c2 01             	add    $0x1,%edx
 862e2dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 862e2e0:	89 04 24             	mov    %eax,(%esp)
 862e2e3:	e8 08 82 0d 00       	call   87064f0 <_ZNKSs5c_strEv>
 862e2e8:	8d 95 db fe ff ff    	lea    -0x125(%ebp),%edx
 862e2ee:	89 44 24 0c          	mov    %eax,0xc(%esp)
 862e2f2:	c7 44 24 08 62 59 ce 	movl   $0x8ce5962,0x8(%esp)
 862e2f9:	08 
 862e2fa:	c7 44 24 04 00 01 00 	movl   $0x100,0x4(%esp)
 862e301:	00 
 862e302:	89 14 24             	mov    %edx,(%esp)
 862e305:	e8 12 e5 f5 ff       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 862e30a:	c6 45 db 00          	movb   $0x0,-0x25(%ebp)
 862e30e:	8b 45 08             	mov    0x8(%ebp),%eax
 862e311:	8b 40 04             	mov    0x4(%eax),%eax
 862e314:	8b 00                	mov    (%eax),%eax
 862e316:	89 45 e0             	mov    %eax,-0x20(%ebp)
 862e319:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 862e320:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 862e327:	eb 61                	jmp    862e38a <_ZN16CSyncSlangFilter12AddSlangNameERKSs+0x114>
 862e329:	8b 45 08             	mov    0x8(%ebp),%eax
 862e32c:	83 c0 08             	add    $0x8,%eax
 862e32f:	89 44 24 04          	mov    %eax,0x4(%esp)
 862e333:	8d 45 dc             	lea    -0x24(%ebp),%eax
 862e336:	89 04 24             	mov    %eax,(%esp)
 862e339:	e8 f8 4b c8 ff       	call   82b2f36 <_ZN10writeGuardI6rwLockEC1EPS0_>
 862e33e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 862e341:	0f b6 84 05 db fe ff 	movzbl -0x125(%ebp,%eax,1),%eax
 862e348:	ff 
 862e349:	0f b6 c0             	movzbl %al,%eax
 862e34c:	89 44 24 04          	mov    %eax,0x4(%esp)
 862e350:	8b 45 e0             	mov    -0x20(%ebp),%eax
 862e353:	89 04 24             	mov    %eax,(%esp)
 862e356:	e8 ff 06 00 00       	call   862ea5a <_ZN9SlangNode8AddChildEj>
 862e35b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 862e35e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 862e361:	89 04 24             	mov    %eax,(%esp)
 862e364:	e8 e9 4b c8 ff       	call   82b2f52 <_ZN10writeGuardI6rwLockED1Ev>
 862e369:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 862e36d:	eb 1b                	jmp    862e38a <_ZN16CSyncSlangFilter12AddSlangNameERKSs+0x114>
 862e36f:	89 d3                	mov    %edx,%ebx
 862e371:	89 c6                	mov    %eax,%esi
 862e373:	8d 45 dc             	lea    -0x24(%ebp),%eax
 862e376:	89 04 24             	mov    %eax,(%esp)
 862e379:	e8 d4 4b c8 ff       	call   82b2f52 <_ZN10writeGuardI6rwLockED1Ev>
 862e37e:	89 f0                	mov    %esi,%eax
 862e380:	89 da                	mov    %ebx,%edx
 862e382:	89 04 24             	mov    %eax,(%esp)
 862e385:	e8 c6 53 4b 00       	call   8ae3750 <_Unwind_Resume>
 862e38a:	8b 45 0c             	mov    0xc(%ebp),%eax
 862e38d:	89 04 24             	mov    %eax,(%esp)
 862e390:	e8 cb 82 0d 00       	call   8706660 <_ZNKSs4sizeEv>
 862e395:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 862e398:	0f 97 c0             	seta   %al
 862e39b:	84 c0                	test   %al,%al
 862e39d:	75 8a                	jne    862e329 <_ZN16CSyncSlangFilter12AddSlangNameERKSs+0xb3>
 862e39f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 862e3a6:	00 
 862e3a7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 862e3aa:	89 04 24             	mov    %eax,(%esp)
 862e3ad:	e8 96 07 00 00       	call   862eb48 <_ZN9SlangNode10SetEndNodeEb>
 862e3b2:	81 c4 2c 01 00 00    	add    $0x12c,%esp
 862e3b8:	5b                   	pop    %ebx
 862e3b9:	5e                   	pop    %esi
 862e3ba:	5f                   	pop    %edi
 862e3bb:	5d                   	pop    %ebp
 862e3bc:	c3                   	ret
 862e3bd:	90                   	nop

```

```c
// CSyncSlangFilter::AddSlangName @ 0x862e276

/* CSyncSlangFilter::AddSlangName(std::string const&) */

void __thiscall CSyncSlangFilter::AddSlangName(CSyncSlangFilter *this,string *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  char local_129;
  char local_128 [255];
  undefined1 local_29;
  writeGuard<rwLock> local_28 [4];
  SlangNode *local_24;
  uint local_20;
  
  pcVar3 = &local_129;
  uVar4 = 0x101;
  bVar5 = ((uint)pcVar3 & 1) != 0;
  if (bVar5) {
    local_129 = '\0';
    pcVar3 = local_128;
    uVar4 = 0x100;
  }
  if (((uint)pcVar3 & 2) != 0) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3 = pcVar3 + 2;
    uVar4 = uVar4 - 2;
  }
  for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  if ((uVar4 & 2) != 0) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3 = pcVar3 + 2;
  }
  if (!bVar5) {
    *pcVar3 = '\0';
  }
  uVar1 = std::string::c_str((string *)param_1);
  OS_API::snprintf(&local_129,0x100,"%s",uVar1);
  local_29 = 0;
  local_24 = (SlangNode *)**(undefined4 **)(this + 4);
  local_20 = 0;
  while( true ) {
    uVar4 = std::string::size((string *)param_1);
    if (uVar4 <= local_20) break;
    writeGuard<rwLock>::writeGuard(local_28,(rwLock *)(this + 8));
                    /* try { // try from 0862e356 to 0862e35a has its CatchHandler @ 0862e36f */
    local_24 = (SlangNode *)SlangNode::AddChild((uint)local_24);
    writeGuard<rwLock>::~writeGuard(local_28);
    local_20 = local_20 + 1;
  }
  SlangNode::SetEndNode(local_24,true);
  return;
}

```

---

## CSyncSlangFilter

```asm
// === 0862dba4 CSyncSlangFilter::CSyncSlangFilter  [0x0862dba4-0x862dc35] ===
 862dba4:	55                   	push   %ebp
 862dba5:	89 e5                	mov    %esp,%ebp
 862dba7:	57                   	push   %edi
 862dba8:	56                   	push   %esi
 862dba9:	53                   	push   %ebx
 862dbaa:	83 ec 1c             	sub    $0x1c,%esp
 862dbad:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 862dbb4:	e8 97 68 0f 00       	call   8724450 <_Znwj>
 862dbb9:	89 c3                	mov    %eax,%ebx
 862dbbb:	89 d8                	mov    %ebx,%eax
 862dbbd:	89 04 24             	mov    %eax,(%esp)
 862dbc0:	e8 9b 0f 00 00       	call   862eb60 <_ZN16CSyncSlangFilter4IMPLC1Ev>
 862dbc5:	eb 18                	jmp    862dbdf <_ZN16CSyncSlangFilterC1Ev+0x3b>
 862dbc7:	89 d6                	mov    %edx,%esi
 862dbc9:	89 c7                	mov    %eax,%edi
 862dbcb:	89 1c 24             	mov    %ebx,(%esp)
 862dbce:	e8 1d 69 0f 00       	call   87244f0 <_ZdlPv>
 862dbd3:	89 f8                	mov    %edi,%eax
 862dbd5:	89 f2                	mov    %esi,%edx
 862dbd7:	89 04 24             	mov    %eax,(%esp)
 862dbda:	e8 71 5b 4b 00       	call   8ae3750 <_Unwind_Resume>
 862dbdf:	89 da                	mov    %ebx,%edx
 862dbe1:	8b 45 08             	mov    0x8(%ebp),%eax
 862dbe4:	89 10                	mov    %edx,(%eax)
 862dbe6:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 862dbed:	e8 5e 68 0f 00       	call   8724450 <_Znwj>
 862dbf2:	89 c3                	mov    %eax,%ebx
 862dbf4:	89 d8                	mov    %ebx,%eax
 862dbf6:	89 04 24             	mov    %eax,(%esp)
 862dbf9:	e8 62 0f 00 00       	call   862eb60 <_ZN16CSyncSlangFilter4IMPLC1Ev>
 862dbfe:	eb 18                	jmp    862dc18 <_ZN16CSyncSlangFilterC1Ev+0x74>
 862dc00:	89 d6                	mov    %edx,%esi
 862dc02:	89 c7                	mov    %eax,%edi
 862dc04:	89 1c 24             	mov    %ebx,(%esp)
 862dc07:	e8 e4 68 0f 00       	call   87244f0 <_ZdlPv>
 862dc0c:	89 f8                	mov    %edi,%eax
 862dc0e:	89 f2                	mov    %esi,%edx
 862dc10:	89 04 24             	mov    %eax,(%esp)
 862dc13:	e8 38 5b 4b 00       	call   8ae3750 <_Unwind_Resume>
 862dc18:	89 da                	mov    %ebx,%edx
 862dc1a:	8b 45 08             	mov    0x8(%ebp),%eax
 862dc1d:	89 50 04             	mov    %edx,0x4(%eax)
 862dc20:	8b 45 08             	mov    0x8(%ebp),%eax
 862dc23:	83 c0 08             	add    $0x8,%eax
 862dc26:	89 04 24             	mov    %eax,(%esp)
 862dc29:	e8 1a 60 c7 ff       	call   82a3c48 <_ZN6rwLockC1Ev>
 862dc2e:	83 c4 1c             	add    $0x1c,%esp
 862dc31:	5b                   	pop    %ebx
 862dc32:	5e                   	pop    %esi
 862dc33:	5f                   	pop    %edi
 862dc34:	5d                   	pop    %ebp
 862dc35:	c3                   	ret

```

```c
// CSyncSlangFilter::CSyncSlangFilter @ 0x862dba4

/* CSyncSlangFilter::CSyncSlangFilter() */

void __thiscall CSyncSlangFilter::CSyncSlangFilter(CSyncSlangFilter *this)

{
  IMPL *pIVar1;
  
  pIVar1 = operator_new(4);
                    /* try { // try from 0862dbc0 to 0862dbc4 has its CatchHandler @ 0862dbc7 */
  IMPL::IMPL(pIVar1);
  *(IMPL **)this = pIVar1;
  pIVar1 = operator_new(4);
                    /* try { // try from 0862dbf9 to 0862dbfd has its CatchHandler @ 0862dc00 */
  IMPL::IMPL(pIVar1);
  *(IMPL **)(this + 4) = pIVar1;
  rwLock::rwLock((rwLock *)(this + 8));
  return;
}

```

---

## Filter

```asm
// === 0862e46c CSyncSlangFilter::Filter  [0x0862e46c-0x862e621] ===
 862e46c:	55                   	push   %ebp
 862e46d:	89 e5                	mov    %esp,%ebp
 862e46f:	57                   	push   %edi
 862e470:	56                   	push   %esi
 862e471:	53                   	push   %ebx
 862e472:	83 ec 3c             	sub    $0x3c,%esp
 862e475:	8b 5d 08             	mov    0x8(%ebp),%ebx
 862e478:	89 d8                	mov    %ebx,%eax
 862e47a:	8b 55 10             	mov    0x10(%ebp),%edx
 862e47d:	89 54 24 04          	mov    %edx,0x4(%esp)
 862e481:	89 04 24             	mov    %eax,(%esp)
 862e484:	e8 27 95 0d 00       	call   87079b0 <_ZNSsC1ERKSs>
 862e489:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 862e490:	e9 46 01 00 00       	jmp    862e5db <_ZN16CSyncSlangFilter6FilterERKSs+0x16f>
 862e495:	8b 45 0c             	mov    0xc(%ebp),%eax
 862e498:	83 c0 08             	add    $0x8,%eax
 862e49b:	89 44 24 04          	mov    %eax,0x4(%esp)
 862e49f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 862e4a2:	89 04 24             	mov    %eax,(%esp)
 862e4a5:	e8 92 48 c8 ff       	call   82b2d3c <_ZN9readGuardI6rwLockEC1EPS0_>
 862e4aa:	8b 45 10             	mov    0x10(%ebp),%eax
 862e4ad:	89 04 24             	mov    %eax,(%esp)
 862e4b0:	e8 ab 81 0d 00       	call   8706660 <_ZNKSs4sizeEv>
 862e4b5:	89 c2                	mov    %eax,%edx
 862e4b7:	2b 55 e0             	sub    -0x20(%ebp),%edx
 862e4ba:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 862e4bd:	89 54 24 0c          	mov    %edx,0xc(%esp)
 862e4c1:	8b 55 e0             	mov    -0x20(%ebp),%edx
 862e4c4:	89 54 24 08          	mov    %edx,0x8(%esp)
 862e4c8:	8b 55 10             	mov    0x10(%ebp),%edx
 862e4cb:	89 54 24 04          	mov    %edx,0x4(%esp)
 862e4cf:	89 04 24             	mov    %eax,(%esp)
 862e4d2:	e8 a9 93 0d 00       	call   8707880 <_ZNKSs6substrEjj>
 862e4d7:	83 ec 04             	sub    $0x4,%esp
 862e4da:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 862e4dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 862e4e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 862e4e4:	89 04 24             	mov    %eax,(%esp)
 862e4e7:	e8 d2 fe ff ff       	call   862e3be <_ZNK16CSyncSlangFilter5matchERKSs>
 862e4ec:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 862e4ef:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 862e4f2:	89 04 24             	mov    %eax,(%esp)
 862e4f5:	e8 e6 96 0d 00       	call   8707be0 <_ZNSsD1Ev>
 862e4fa:	eb 18                	jmp    862e514 <_ZN16CSyncSlangFilter6FilterERKSs+0xa8>
 862e4fc:	89 d6                	mov    %edx,%esi
 862e4fe:	89 c7                	mov    %eax,%edi
 862e500:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 862e503:	89 04 24             	mov    %eax,(%esp)
 862e506:	e8 d5 96 0d 00       	call   8707be0 <_ZNSsD1Ev>
 862e50b:	89 f8                	mov    %edi,%eax
 862e50d:	89 f2                	mov    %esi,%edx
 862e50f:	e9 a7 00 00 00       	jmp    862e5bb <_ZN16CSyncSlangFilter6FilterERKSs+0x14f>
 862e514:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 862e518:	0f 84 97 00 00 00    	je     862e5b5 <_ZN16CSyncSlangFilter6FilterERKSs+0x149>
 862e51e:	8d 45 df             	lea    -0x21(%ebp),%eax
 862e521:	89 04 24             	mov    %eax,(%esp)
 862e524:	e8 a7 1b 0b 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 862e529:	8d 45 df             	lea    -0x21(%ebp),%eax
 862e52c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 862e530:	c7 44 24 08 2a 00 00 	movl   $0x2a,0x8(%esp)
 862e537:	00 
 862e538:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 862e53b:	89 44 24 04          	mov    %eax,0x4(%esp)
 862e53f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 862e542:	89 04 24             	mov    %eax,(%esp)
 862e545:	e8 76 95 0d 00       	call   8707ac0 <_ZNSsC1EjcRKSaIcE>
 862e54a:	89 d8                	mov    %ebx,%eax
 862e54c:	8d 55 d8             	lea    -0x28(%ebp),%edx
 862e54f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 862e553:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 862e556:	89 54 24 08          	mov    %edx,0x8(%esp)
 862e55a:	8b 55 e0             	mov    -0x20(%ebp),%edx
 862e55d:	89 54 24 04          	mov    %edx,0x4(%esp)
 862e561:	89 04 24             	mov    %eax,(%esp)
 862e564:	e8 b7 ae 0d 00       	call   8709420 <_ZNSs7replaceEjjRKSs>
 862e569:	eb 15                	jmp    862e580 <_ZN16CSyncSlangFilter6FilterERKSs+0x114>
 862e56b:	89 d6                	mov    %edx,%esi
 862e56d:	89 c7                	mov    %eax,%edi
 862e56f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 862e572:	89 04 24             	mov    %eax,(%esp)
 862e575:	e8 66 96 0d 00       	call   8707be0 <_ZNSsD1Ev>
 862e57a:	89 f8                	mov    %edi,%eax
 862e57c:	89 f2                	mov    %esi,%edx
 862e57e:	eb 0d                	jmp    862e58d <_ZN16CSyncSlangFilter6FilterERKSs+0x121>
 862e580:	8d 45 d8             	lea    -0x28(%ebp),%eax
 862e583:	89 04 24             	mov    %eax,(%esp)
 862e586:	e8 55 96 0d 00       	call   8707be0 <_ZNSsD1Ev>
 862e58b:	eb 15                	jmp    862e5a2 <_ZN16CSyncSlangFilter6FilterERKSs+0x136>
 862e58d:	89 d6                	mov    %edx,%esi
 862e58f:	89 c7                	mov    %eax,%edi
 862e591:	8d 45 df             	lea    -0x21(%ebp),%eax
 862e594:	89 04 24             	mov    %eax,(%esp)
 862e597:	e8 54 1b 0b 00       	call   86e00f0 <_ZNSaIcED1Ev>
 862e59c:	89 f8                	mov    %edi,%eax
 862e59e:	89 f2                	mov    %esi,%edx
 862e5a0:	eb 19                	jmp    862e5bb <_ZN16CSyncSlangFilter6FilterERKSs+0x14f>
 862e5a2:	8d 45 df             	lea    -0x21(%ebp),%eax
 862e5a5:	89 04 24             	mov    %eax,(%esp)
 862e5a8:	e8 43 1b 0b 00       	call   86e00f0 <_ZNSaIcED1Ev>
 862e5ad:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 862e5b0:	01 45 e0             	add    %eax,-0x20(%ebp)
 862e5b3:	eb 1b                	jmp    862e5d0 <_ZN16CSyncSlangFilter6FilterERKSs+0x164>
 862e5b5:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 862e5b9:	eb 15                	jmp    862e5d0 <_ZN16CSyncSlangFilter6FilterERKSs+0x164>
 862e5bb:	89 d6                	mov    %edx,%esi
 862e5bd:	89 c7                	mov    %eax,%edi
 862e5bf:	8d 45 d0             	lea    -0x30(%ebp),%eax
 862e5c2:	89 04 24             	mov    %eax,(%esp)
 862e5c5:	e8 8e 47 c8 ff       	call   82b2d58 <_ZN9readGuardI6rwLockED1Ev>
 862e5ca:	89 f8                	mov    %edi,%eax
 862e5cc:	89 f2                	mov    %esi,%edx
 862e5ce:	eb 26                	jmp    862e5f6 <_ZN16CSyncSlangFilter6FilterERKSs+0x18a>
 862e5d0:	8d 45 d0             	lea    -0x30(%ebp),%eax
 862e5d3:	89 04 24             	mov    %eax,(%esp)
 862e5d6:	e8 7d 47 c8 ff       	call   82b2d58 <_ZN9readGuardI6rwLockED1Ev>
 862e5db:	8b 45 10             	mov    0x10(%ebp),%eax
 862e5de:	89 04 24             	mov    %eax,(%esp)
 862e5e1:	e8 7a 80 0d 00       	call   8706660 <_ZNKSs4sizeEv>
 862e5e6:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 862e5e9:	0f 97 c0             	seta   %al
 862e5ec:	84 c0                	test   %al,%al
 862e5ee:	0f 85 a1 fe ff ff    	jne    862e495 <_ZN16CSyncSlangFilter6FilterERKSs+0x29>
 862e5f4:	eb 1a                	jmp    862e610 <_ZN16CSyncSlangFilter6FilterERKSs+0x1a4>
 862e5f6:	89 d6                	mov    %edx,%esi
 862e5f8:	89 c7                	mov    %eax,%edi
 862e5fa:	89 d8                	mov    %ebx,%eax
 862e5fc:	89 04 24             	mov    %eax,(%esp)
 862e5ff:	e8 dc 95 0d 00       	call   8707be0 <_ZNSsD1Ev>
 862e604:	89 f8                	mov    %edi,%eax
 862e606:	89 f2                	mov    %esi,%edx
 862e608:	89 04 24             	mov    %eax,(%esp)
 862e60b:	e8 40 51 4b 00       	call   8ae3750 <_Unwind_Resume>
 862e610:	89 d8                	mov    %ebx,%eax
 862e612:	89 d8                	mov    %ebx,%eax
 862e614:	8d 65 f4             	lea    -0xc(%ebp),%esp
 862e617:	83 c4 00             	add    $0x0,%esp
 862e61a:	5b                   	pop    %ebx
 862e61b:	5e                   	pop    %esi
 862e61c:	5f                   	pop    %edi
 862e61d:	5d                   	pop    %ebp
 862e61e:	c2 04 00             	ret    $0x4
 862e621:	90                   	nop

```

```c
// CSyncSlangFilter::Filter @ 0x862e46c

/* CSyncSlangFilter::Filter(std::string const&) */

string * CSyncSlangFilter::Filter(string *param_1)

{
  uint uVar1;
  CSyncSlangFilter *in_stack_00000008;
  string *in_stack_0000000c;
  readGuard<rwLock> local_34 [4];
  string local_30;
  string local_2c [7];
  allocator<char> local_25;
  uint local_24;
  uint local_20;
  
  std::string::string((string *)param_1,in_stack_0000000c);
  local_24 = 0;
  while( true ) {
                    /* try { // try from 0862e5e1 to 0862e5e5 has its CatchHandler @ 0862e5f6 */
    uVar1 = std::string::size(in_stack_0000000c);
    if (uVar1 <= local_24) break;
    readGuard<rwLock>::readGuard(local_34,(rwLock *)(in_stack_00000008 + 8));
                    /* try { // try from 0862e4b0 to 0862e4d6 has its CatchHandler @ 0862e5bb */
    std::string::size(in_stack_0000000c);
    std::string::substr((uint)&local_30,(uint)in_stack_0000000c);
                    /* try { // try from 0862e4e7 to 0862e4eb has its CatchHandler @ 0862e4fc */
    local_20 = match(in_stack_00000008,&local_30);
                    /* try { // try from 0862e4f5 to 0862e4f9 has its CatchHandler @ 0862e5bb */
    std::string::~string((string *)&local_30);
    if (local_20 == 0) {
      local_24 = local_24 + 1;
    }
    else {
      std::allocator<char>::allocator();
                    /* try { // try from 0862e545 to 0862e549 has its CatchHandler @ 0862e58d */
      std::string::string(local_2c,local_20,'*',(allocator *)&local_25);
                    /* try { // try from 0862e564 to 0862e568 has its CatchHandler @ 0862e56b */
      std::string::replace((string *)param_1,local_24,local_20,local_2c);
                    /* try { // try from 0862e586 to 0862e58a has its CatchHandler @ 0862e58d */
      std::string::~string(local_2c);
      std::allocator<char>::~allocator(&local_25);
      local_24 = local_24 + local_20;
    }
    readGuard<rwLock>::~readGuard(local_34);
  }
  return param_1;
}

```

---

## HasSlang

```asm
// === 0862e622 CSyncSlangFilter::HasSlang  [0x0862e622-0x862e729] ===
 862e622:	55                   	push   %ebp
 862e623:	89 e5                	mov    %esp,%ebp
 862e625:	56                   	push   %esi
 862e626:	53                   	push   %ebx
 862e627:	83 ec 20             	sub    $0x20,%esp
 862e62a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 862e631:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 862e638:	e9 c3 00 00 00       	jmp    862e700 <_ZN16CSyncSlangFilter8HasSlangERKSs+0xde>
 862e63d:	8b 45 08             	mov    0x8(%ebp),%eax
 862e640:	83 c0 08             	add    $0x8,%eax
 862e643:	89 44 24 04          	mov    %eax,0x4(%esp)
 862e647:	8d 45 ec             	lea    -0x14(%ebp),%eax
 862e64a:	89 04 24             	mov    %eax,(%esp)
 862e64d:	e8 ea 46 c8 ff       	call   82b2d3c <_ZN9readGuardI6rwLockEC1EPS0_>
 862e652:	8b 45 0c             	mov    0xc(%ebp),%eax
 862e655:	89 04 24             	mov    %eax,(%esp)
 862e658:	e8 03 80 0d 00       	call   8706660 <_ZNKSs4sizeEv>
 862e65d:	89 c2                	mov    %eax,%edx
 862e65f:	2b 55 f4             	sub    -0xc(%ebp),%edx
 862e662:	8d 45 f0             	lea    -0x10(%ebp),%eax
 862e665:	89 54 24 0c          	mov    %edx,0xc(%esp)
 862e669:	8b 55 f4             	mov    -0xc(%ebp),%edx
 862e66c:	89 54 24 08          	mov    %edx,0x8(%esp)
 862e670:	8b 55 0c             	mov    0xc(%ebp),%edx
 862e673:	89 54 24 04          	mov    %edx,0x4(%esp)
 862e677:	89 04 24             	mov    %eax,(%esp)
 862e67a:	e8 01 92 0d 00       	call   8707880 <_ZNKSs6substrEjj>
 862e67f:	83 ec 04             	sub    $0x4,%esp
 862e682:	8d 45 f0             	lea    -0x10(%ebp),%eax
 862e685:	89 44 24 04          	mov    %eax,0x4(%esp)
 862e689:	8b 45 08             	mov    0x8(%ebp),%eax
 862e68c:	89 04 24             	mov    %eax,(%esp)
 862e68f:	e8 2a fd ff ff       	call   862e3be <_ZNK16CSyncSlangFilter5matchERKSs>
 862e694:	85 c0                	test   %eax,%eax
 862e696:	0f 95 c3             	setne  %bl
 862e699:	8d 45 f0             	lea    -0x10(%ebp),%eax
 862e69c:	89 04 24             	mov    %eax,(%esp)
 862e69f:	e8 3c 95 0d 00       	call   8707be0 <_ZNSsD1Ev>
 862e6a4:	eb 15                	jmp    862e6bb <_ZN16CSyncSlangFilter8HasSlangERKSs+0x99>
 862e6a6:	89 d3                	mov    %edx,%ebx
 862e6a8:	89 c6                	mov    %eax,%esi
 862e6aa:	8d 45 f0             	lea    -0x10(%ebp),%eax
 862e6ad:	89 04 24             	mov    %eax,(%esp)
 862e6b0:	e8 2b 95 0d 00       	call   8707be0 <_ZNSsD1Ev>
 862e6b5:	89 f0                	mov    %esi,%eax
 862e6b7:	89 da                	mov    %ebx,%edx
 862e6b9:	eb 17                	jmp    862e6d2 <_ZN16CSyncSlangFilter8HasSlangERKSs+0xb0>
 862e6bb:	84 db                	test   %bl,%bl
 862e6bd:	74 0c                	je     862e6cb <_ZN16CSyncSlangFilter8HasSlangERKSs+0xa9>
 862e6bf:	be 01 00 00 00       	mov    $0x1,%esi
 862e6c4:	bb 00 00 00 00       	mov    $0x0,%ebx
 862e6c9:	eb 22                	jmp    862e6ed <_ZN16CSyncSlangFilter8HasSlangERKSs+0xcb>
 862e6cb:	bb 01 00 00 00       	mov    $0x1,%ebx
 862e6d0:	eb 1b                	jmp    862e6ed <_ZN16CSyncSlangFilter8HasSlangERKSs+0xcb>
 862e6d2:	89 d3                	mov    %edx,%ebx
 862e6d4:	89 c6                	mov    %eax,%esi
 862e6d6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 862e6d9:	89 04 24             	mov    %eax,(%esp)
 862e6dc:	e8 77 46 c8 ff       	call   82b2d58 <_ZN9readGuardI6rwLockED1Ev>
 862e6e1:	89 f0                	mov    %esi,%eax
 862e6e3:	89 da                	mov    %ebx,%edx
 862e6e5:	89 04 24             	mov    %eax,(%esp)
 862e6e8:	e8 63 50 4b 00       	call   8ae3750 <_Unwind_Resume>
 862e6ed:	8d 45 ec             	lea    -0x14(%ebp),%eax
 862e6f0:	89 04 24             	mov    %eax,(%esp)
 862e6f3:	e8 60 46 c8 ff       	call   82b2d58 <_ZN9readGuardI6rwLockED1Ev>
 862e6f8:	85 db                	test   %ebx,%ebx
 862e6fa:	74 22                	je     862e71e <_ZN16CSyncSlangFilter8HasSlangERKSs+0xfc>
 862e6fc:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 862e700:	8b 45 0c             	mov    0xc(%ebp),%eax
 862e703:	89 04 24             	mov    %eax,(%esp)
 862e706:	e8 55 7f 0d 00       	call   8706660 <_ZNKSs4sizeEv>
 862e70b:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 862e70e:	0f 97 c0             	seta   %al
 862e711:	84 c0                	test   %al,%al
 862e713:	0f 85 24 ff ff ff    	jne    862e63d <_ZN16CSyncSlangFilter8HasSlangERKSs+0x1b>
 862e719:	be 00 00 00 00       	mov    $0x0,%esi
 862e71e:	89 f0                	mov    %esi,%eax
 862e720:	8d 65 f8             	lea    -0x8(%ebp),%esp
 862e723:	83 c4 00             	add    $0x0,%esp
 862e726:	5b                   	pop    %ebx
 862e727:	5e                   	pop    %esi
 862e728:	5d                   	pop    %ebp
 862e729:	c3                   	ret

```

```c
// CSyncSlangFilter::HasSlang @ 0x862e622

/* CSyncSlangFilter::HasSlang(std::string const&) */

undefined4 __thiscall CSyncSlangFilter::HasSlang(CSyncSlangFilter *this,string *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 unaff_ESI;
  readGuard<rwLock> local_18 [4];
  string local_14;
  uint local_10;
  
  local_10 = 0;
  while( true ) {
    uVar2 = std::string::size((string *)param_1);
    if (uVar2 <= local_10) {
      return 0;
    }
    readGuard<rwLock>::readGuard(local_18,(rwLock *)(this + 8));
                    /* try { // try from 0862e658 to 0862e67e has its CatchHandler @ 0862e6d2 */
    std::string::size((string *)param_1);
    std::string::substr((uint)&local_14,(uint)param_1);
                    /* try { // try from 0862e68f to 0862e693 has its CatchHandler @ 0862e6a6 */
    iVar1 = match(this,&local_14);
                    /* try { // try from 0862e69f to 0862e6a3 has its CatchHandler @ 0862e6d2 */
    std::string::~string((string *)&local_14);
    if (iVar1 != 0) {
      unaff_ESI = 1;
    }
    readGuard<rwLock>::~readGuard(local_18);
    if (iVar1 != 0) break;
    local_10 = local_10 + 1;
  }
  return unaff_ESI;
}

```

---

## HasSlangName

```asm
// === 0862e16e CSyncSlangFilter::HasSlangName  [0x0862e16e-0x862e275] ===
 862e16e:	55                   	push   %ebp
 862e16f:	89 e5                	mov    %esp,%ebp
 862e171:	56                   	push   %esi
 862e172:	53                   	push   %ebx
 862e173:	83 ec 20             	sub    $0x20,%esp
 862e176:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 862e17d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 862e184:	e9 c3 00 00 00       	jmp    862e24c <_ZN16CSyncSlangFilter12HasSlangNameERKSs+0xde>
 862e189:	8b 45 08             	mov    0x8(%ebp),%eax
 862e18c:	83 c0 08             	add    $0x8,%eax
 862e18f:	89 44 24 04          	mov    %eax,0x4(%esp)
 862e193:	8d 45 ec             	lea    -0x14(%ebp),%eax
 862e196:	89 04 24             	mov    %eax,(%esp)
 862e199:	e8 9e 4b c8 ff       	call   82b2d3c <_ZN9readGuardI6rwLockEC1EPS0_>
 862e19e:	8b 45 0c             	mov    0xc(%ebp),%eax
 862e1a1:	89 04 24             	mov    %eax,(%esp)
 862e1a4:	e8 b7 84 0d 00       	call   8706660 <_ZNKSs4sizeEv>
 862e1a9:	89 c2                	mov    %eax,%edx
 862e1ab:	2b 55 f4             	sub    -0xc(%ebp),%edx
 862e1ae:	8d 45 f0             	lea    -0x10(%ebp),%eax
 862e1b1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 862e1b5:	8b 55 f4             	mov    -0xc(%ebp),%edx
 862e1b8:	89 54 24 08          	mov    %edx,0x8(%esp)
 862e1bc:	8b 55 0c             	mov    0xc(%ebp),%edx
 862e1bf:	89 54 24 04          	mov    %edx,0x4(%esp)
 862e1c3:	89 04 24             	mov    %eax,(%esp)
 862e1c6:	e8 b5 96 0d 00       	call   8707880 <_ZNKSs6substrEjj>
 862e1cb:	83 ec 04             	sub    $0x4,%esp
 862e1ce:	8d 45 f0             	lea    -0x10(%ebp),%eax
 862e1d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 862e1d5:	8b 45 08             	mov    0x8(%ebp),%eax
 862e1d8:	89 04 24             	mov    %eax,(%esp)
 862e1db:	e8 e0 fe ff ff       	call   862e0c0 <_ZNK16CSyncSlangFilter9MatchNameERKSs>
 862e1e0:	85 c0                	test   %eax,%eax
 862e1e2:	0f 95 c3             	setne  %bl
 862e1e5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 862e1e8:	89 04 24             	mov    %eax,(%esp)
 862e1eb:	e8 f0 99 0d 00       	call   8707be0 <_ZNSsD1Ev>
 862e1f0:	eb 15                	jmp    862e207 <_ZN16CSyncSlangFilter12HasSlangNameERKSs+0x99>
 862e1f2:	89 d3                	mov    %edx,%ebx
 862e1f4:	89 c6                	mov    %eax,%esi
 862e1f6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 862e1f9:	89 04 24             	mov    %eax,(%esp)
 862e1fc:	e8 df 99 0d 00       	call   8707be0 <_ZNSsD1Ev>
 862e201:	89 f0                	mov    %esi,%eax
 862e203:	89 da                	mov    %ebx,%edx
 862e205:	eb 17                	jmp    862e21e <_ZN16CSyncSlangFilter12HasSlangNameERKSs+0xb0>
 862e207:	84 db                	test   %bl,%bl
 862e209:	74 0c                	je     862e217 <_ZN16CSyncSlangFilter12HasSlangNameERKSs+0xa9>
 862e20b:	be 01 00 00 00       	mov    $0x1,%esi
 862e210:	bb 00 00 00 00       	mov    $0x0,%ebx
 862e215:	eb 22                	jmp    862e239 <_ZN16CSyncSlangFilter12HasSlangNameERKSs+0xcb>
 862e217:	bb 01 00 00 00       	mov    $0x1,%ebx
 862e21c:	eb 1b                	jmp    862e239 <_ZN16CSyncSlangFilter12HasSlangNameERKSs+0xcb>
 862e21e:	89 d3                	mov    %edx,%ebx
 862e220:	89 c6                	mov    %eax,%esi
 862e222:	8d 45 ec             	lea    -0x14(%ebp),%eax
 862e225:	89 04 24             	mov    %eax,(%esp)
 862e228:	e8 2b 4b c8 ff       	call   82b2d58 <_ZN9readGuardI6rwLockED1Ev>
 862e22d:	89 f0                	mov    %esi,%eax
 862e22f:	89 da                	mov    %ebx,%edx
 862e231:	89 04 24             	mov    %eax,(%esp)
 862e234:	e8 17 55 4b 00       	call   8ae3750 <_Unwind_Resume>
 862e239:	8d 45 ec             	lea    -0x14(%ebp),%eax
 862e23c:	89 04 24             	mov    %eax,(%esp)
 862e23f:	e8 14 4b c8 ff       	call   82b2d58 <_ZN9readGuardI6rwLockED1Ev>
 862e244:	85 db                	test   %ebx,%ebx
 862e246:	74 22                	je     862e26a <_ZN16CSyncSlangFilter12HasSlangNameERKSs+0xfc>
 862e248:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 862e24c:	8b 45 0c             	mov    0xc(%ebp),%eax
 862e24f:	89 04 24             	mov    %eax,(%esp)
 862e252:	e8 09 84 0d 00       	call   8706660 <_ZNKSs4sizeEv>
 862e257:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 862e25a:	0f 97 c0             	seta   %al
 862e25d:	84 c0                	test   %al,%al
 862e25f:	0f 85 24 ff ff ff    	jne    862e189 <_ZN16CSyncSlangFilter12HasSlangNameERKSs+0x1b>
 862e265:	be 00 00 00 00       	mov    $0x0,%esi
 862e26a:	89 f0                	mov    %esi,%eax
 862e26c:	8d 65 f8             	lea    -0x8(%ebp),%esp
 862e26f:	83 c4 00             	add    $0x0,%esp
 862e272:	5b                   	pop    %ebx
 862e273:	5e                   	pop    %esi
 862e274:	5d                   	pop    %ebp
 862e275:	c3                   	ret

```

```c
// CSyncSlangFilter::HasSlangName @ 0x862e16e

/* CSyncSlangFilter::HasSlangName(std::string const&) */

undefined4 __thiscall CSyncSlangFilter::HasSlangName(CSyncSlangFilter *this,string *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 unaff_ESI;
  readGuard<rwLock> local_18 [4];
  string local_14;
  uint local_10;
  
  local_10 = 0;
  while( true ) {
    uVar2 = std::string::size((string *)param_1);
    if (uVar2 <= local_10) {
      return 0;
    }
    readGuard<rwLock>::readGuard(local_18,(rwLock *)(this + 8));
                    /* try { // try from 0862e1a4 to 0862e1ca has its CatchHandler @ 0862e21e */
    std::string::size((string *)param_1);
    std::string::substr((uint)&local_14,(uint)param_1);
                    /* try { // try from 0862e1db to 0862e1df has its CatchHandler @ 0862e1f2 */
    iVar1 = MatchName(this,&local_14);
                    /* try { // try from 0862e1eb to 0862e1ef has its CatchHandler @ 0862e21e */
    std::string::~string((string *)&local_14);
    if (iVar1 != 0) {
      unaff_ESI = 1;
    }
    readGuard<rwLock>::~readGuard(local_18);
    if (iVar1 != 0) break;
    local_10 = local_10 + 1;
  }
  return unaff_ESI;
}

```

---

## MatchName

```asm
// === 0862e0c0 CSyncSlangFilter::MatchName  [0x0862e0c0-0x862e16d] ===
 862e0c0:	55                   	push   %ebp
 862e0c1:	89 e5                	mov    %esp,%ebp
 862e0c3:	83 ec 28             	sub    $0x28,%esp
 862e0c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 862e0c9:	89 04 24             	mov    %eax,(%esp)
 862e0cc:	e8 cf 85 0d 00       	call   87066a0 <_ZNKSs5emptyEv>
 862e0d1:	84 c0                	test   %al,%al
 862e0d3:	74 0a                	je     862e0df <_ZNK16CSyncSlangFilter9MatchNameERKSs+0x1f>
 862e0d5:	b8 00 00 00 00       	mov    $0x0,%eax
 862e0da:	e9 8d 00 00 00       	jmp    862e16c <_ZNK16CSyncSlangFilter9MatchNameERKSs+0xac>
 862e0df:	8b 45 08             	mov    0x8(%ebp),%eax
 862e0e2:	8b 40 04             	mov    0x4(%eax),%eax
 862e0e5:	8b 00                	mov    (%eax),%eax
 862e0e7:	89 45 ec             	mov    %eax,-0x14(%ebp)
 862e0ea:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 862e0f1:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 862e0f8:	eb 58                	jmp    862e152 <_ZNK16CSyncSlangFilter9MatchNameERKSs+0x92>
 862e0fa:	8b 45 f0             	mov    -0x10(%ebp),%eax
 862e0fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 862e101:	8b 45 0c             	mov    0xc(%ebp),%eax
 862e104:	89 04 24             	mov    %eax,(%esp)
 862e107:	e8 b4 85 0d 00       	call   87066c0 <_ZNKSsixEj>
 862e10c:	0f b6 00             	movzbl (%eax),%eax
 862e10f:	0f b6 c0             	movzbl %al,%eax
 862e112:	89 45 f4             	mov    %eax,-0xc(%ebp)
 862e115:	8b 45 f4             	mov    -0xc(%ebp),%eax
 862e118:	89 44 24 04          	mov    %eax,0x4(%esp)
 862e11c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 862e11f:	89 04 24             	mov    %eax,(%esp)
 862e122:	e8 cf 08 00 00       	call   862e9f6 <_ZNK9SlangNode9FindChildEj>
 862e127:	89 45 ec             	mov    %eax,-0x14(%ebp)
 862e12a:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 862e12e:	75 07                	jne    862e137 <_ZNK16CSyncSlangFilter9MatchNameERKSs+0x77>
 862e130:	b8 00 00 00 00       	mov    $0x0,%eax
 862e135:	eb 35                	jmp    862e16c <_ZNK16CSyncSlangFilter9MatchNameERKSs+0xac>
 862e137:	8b 45 ec             	mov    -0x14(%ebp),%eax
 862e13a:	89 04 24             	mov    %eax,(%esp)
 862e13d:	e8 fa 09 00 00       	call   862eb3c <_ZNK9SlangNode9IsEndNodeEv>
 862e142:	84 c0                	test   %al,%al
 862e144:	74 08                	je     862e14e <_ZNK16CSyncSlangFilter9MatchNameERKSs+0x8e>
 862e146:	8b 45 f0             	mov    -0x10(%ebp),%eax
 862e149:	83 c0 01             	add    $0x1,%eax
 862e14c:	eb 1e                	jmp    862e16c <_ZNK16CSyncSlangFilter9MatchNameERKSs+0xac>
 862e14e:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 862e152:	8b 45 0c             	mov    0xc(%ebp),%eax
 862e155:	89 04 24             	mov    %eax,(%esp)
 862e158:	e8 03 85 0d 00       	call   8706660 <_ZNKSs4sizeEv>
 862e15d:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 862e160:	0f 97 c0             	seta   %al
 862e163:	84 c0                	test   %al,%al
 862e165:	75 93                	jne    862e0fa <_ZNK16CSyncSlangFilter9MatchNameERKSs+0x3a>
 862e167:	b8 00 00 00 00       	mov    $0x0,%eax
 862e16c:	c9                   	leave
 862e16d:	c3                   	ret

```

```c
// CSyncSlangFilter::MatchName @ 0x862e0c0

/* CSyncSlangFilter::MatchName(std::string const&) const */

int __thiscall CSyncSlangFilter::MatchName(CSyncSlangFilter *this,string *param_1)

{
  char cVar1;
  uint uVar2;
  SlangNode *local_18;
  uint local_14;
  
  cVar1 = std::string::empty((string *)param_1);
  if (cVar1 == '\0') {
    local_18 = (SlangNode *)**(undefined4 **)(this + 4);
    for (local_14 = 0; uVar2 = std::string::size((string *)param_1), local_14 < uVar2;
        local_14 = local_14 + 1) {
      std::string::operator[]((string *)param_1,local_14);
      local_18 = (SlangNode *)SlangNode::FindChild((uint)local_18);
      if (local_18 == (SlangNode *)0x0) {
        return 0;
      }
      cVar1 = SlangNode::IsEndNode(local_18);
      if (cVar1 != '\0') {
        return local_14 + 1;
      }
    }
  }
  return 0;
}

```

---

## match

```asm
// === 0862e3be CSyncSlangFilter::match  [0x0862e3be-0x862e46b] ===
 862e3be:	55                   	push   %ebp
 862e3bf:	89 e5                	mov    %esp,%ebp
 862e3c1:	83 ec 28             	sub    $0x28,%esp
 862e3c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 862e3c7:	89 04 24             	mov    %eax,(%esp)
 862e3ca:	e8 d1 82 0d 00       	call   87066a0 <_ZNKSs5emptyEv>
 862e3cf:	84 c0                	test   %al,%al
 862e3d1:	74 0a                	je     862e3dd <_ZNK16CSyncSlangFilter5matchERKSs+0x1f>
 862e3d3:	b8 00 00 00 00       	mov    $0x0,%eax
 862e3d8:	e9 8c 00 00 00       	jmp    862e469 <_ZNK16CSyncSlangFilter5matchERKSs+0xab>
 862e3dd:	8b 45 08             	mov    0x8(%ebp),%eax
 862e3e0:	8b 00                	mov    (%eax),%eax
 862e3e2:	8b 00                	mov    (%eax),%eax
 862e3e4:	89 45 ec             	mov    %eax,-0x14(%ebp)
 862e3e7:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 862e3ee:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 862e3f5:	eb 58                	jmp    862e44f <_ZNK16CSyncSlangFilter5matchERKSs+0x91>
 862e3f7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 862e3fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 862e3fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 862e401:	89 04 24             	mov    %eax,(%esp)
 862e404:	e8 b7 82 0d 00       	call   87066c0 <_ZNKSsixEj>
 862e409:	0f b6 00             	movzbl (%eax),%eax
 862e40c:	0f b6 c0             	movzbl %al,%eax
 862e40f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 862e412:	8b 45 f4             	mov    -0xc(%ebp),%eax
 862e415:	89 44 24 04          	mov    %eax,0x4(%esp)
 862e419:	8b 45 ec             	mov    -0x14(%ebp),%eax
 862e41c:	89 04 24             	mov    %eax,(%esp)
 862e41f:	e8 d2 05 00 00       	call   862e9f6 <_ZNK9SlangNode9FindChildEj>
 862e424:	89 45 ec             	mov    %eax,-0x14(%ebp)
 862e427:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 862e42b:	75 07                	jne    862e434 <_ZNK16CSyncSlangFilter5matchERKSs+0x76>
 862e42d:	b8 00 00 00 00       	mov    $0x0,%eax
 862e432:	eb 35                	jmp    862e469 <_ZNK16CSyncSlangFilter5matchERKSs+0xab>
 862e434:	8b 45 ec             	mov    -0x14(%ebp),%eax
 862e437:	89 04 24             	mov    %eax,(%esp)
 862e43a:	e8 fd 06 00 00       	call   862eb3c <_ZNK9SlangNode9IsEndNodeEv>
 862e43f:	84 c0                	test   %al,%al
 862e441:	74 08                	je     862e44b <_ZNK16CSyncSlangFilter5matchERKSs+0x8d>
 862e443:	8b 45 f0             	mov    -0x10(%ebp),%eax
 862e446:	83 c0 01             	add    $0x1,%eax
 862e449:	eb 1e                	jmp    862e469 <_ZNK16CSyncSlangFilter5matchERKSs+0xab>
 862e44b:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 862e44f:	8b 45 0c             	mov    0xc(%ebp),%eax
 862e452:	89 04 24             	mov    %eax,(%esp)
 862e455:	e8 06 82 0d 00       	call   8706660 <_ZNKSs4sizeEv>
 862e45a:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 862e45d:	0f 97 c0             	seta   %al
 862e460:	84 c0                	test   %al,%al
 862e462:	75 93                	jne    862e3f7 <_ZNK16CSyncSlangFilter5matchERKSs+0x39>
 862e464:	b8 00 00 00 00       	mov    $0x0,%eax
 862e469:	c9                   	leave
 862e46a:	c3                   	ret
 862e46b:	90                   	nop

```

```c
// CSyncSlangFilter::match @ 0x862e3be

/* CSyncSlangFilter::match(std::string const&) const */

int __thiscall CSyncSlangFilter::match(CSyncSlangFilter *this,string *param_1)

{
  char cVar1;
  uint uVar2;
  SlangNode *local_18;
  uint local_14;
  
  cVar1 = std::string::empty((string *)param_1);
  if (cVar1 == '\0') {
    local_18 = (SlangNode *)**(undefined4 **)this;
    for (local_14 = 0; uVar2 = std::string::size((string *)param_1), local_14 < uVar2;
        local_14 = local_14 + 1) {
      std::string::operator[]((string *)param_1,local_14);
      local_18 = (SlangNode *)SlangNode::FindChild((uint)local_18);
      if (local_18 == (SlangNode *)0x0) {
        return 0;
      }
      cVar1 = SlangNode::IsEndNode(local_18);
      if (cVar1 != '\0') {
        return local_14 + 1;
      }
    }
  }
  return 0;
}

```

---

## ~CSyncSlangFilter

```asm
// === 0862dc36 CSyncSlangFilter::~CSyncSlangFilter  [0x0862dc36-0x862dccb] ===
 862dc36:	55                   	push   %ebp
 862dc37:	89 e5                	mov    %esp,%ebp
 862dc39:	56                   	push   %esi
 862dc3a:	53                   	push   %ebx
 862dc3b:	83 ec 10             	sub    $0x10,%esp
 862dc3e:	8b 45 08             	mov    0x8(%ebp),%eax
 862dc41:	8b 00                	mov    (%eax),%eax
 862dc43:	85 c0                	test   %eax,%eax
 862dc45:	74 22                	je     862dc69 <_ZN16CSyncSlangFilterD1Ev+0x33>
 862dc47:	8b 45 08             	mov    0x8(%ebp),%eax
 862dc4a:	8b 18                	mov    (%eax),%ebx
 862dc4c:	85 db                	test   %ebx,%ebx
 862dc4e:	74 10                	je     862dc60 <_ZN16CSyncSlangFilterD1Ev+0x2a>
 862dc50:	89 1c 24             	mov    %ebx,(%esp)
 862dc53:	e8 52 0f 00 00       	call   862ebaa <_ZN16CSyncSlangFilter4IMPLD1Ev>
 862dc58:	89 1c 24             	mov    %ebx,(%esp)
 862dc5b:	e8 90 68 0f 00       	call   87244f0 <_ZdlPv>
 862dc60:	8b 45 08             	mov    0x8(%ebp),%eax
 862dc63:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 862dc69:	8b 45 08             	mov    0x8(%ebp),%eax
 862dc6c:	8b 40 04             	mov    0x4(%eax),%eax
 862dc6f:	85 c0                	test   %eax,%eax
 862dc71:	74 44                	je     862dcb7 <_ZN16CSyncSlangFilterD1Ev+0x81>
 862dc73:	8b 45 08             	mov    0x8(%ebp),%eax
 862dc76:	8b 58 04             	mov    0x4(%eax),%ebx
 862dc79:	85 db                	test   %ebx,%ebx
 862dc7b:	74 10                	je     862dc8d <_ZN16CSyncSlangFilterD1Ev+0x57>
 862dc7d:	89 1c 24             	mov    %ebx,(%esp)
 862dc80:	e8 25 0f 00 00       	call   862ebaa <_ZN16CSyncSlangFilter4IMPLD1Ev>
 862dc85:	89 1c 24             	mov    %ebx,(%esp)
 862dc88:	e8 63 68 0f 00       	call   87244f0 <_ZdlPv>
 862dc8d:	8b 45 08             	mov    0x8(%ebp),%eax
 862dc90:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 862dc97:	eb 1e                	jmp    862dcb7 <_ZN16CSyncSlangFilterD1Ev+0x81>
 862dc99:	89 d3                	mov    %edx,%ebx
 862dc9b:	89 c6                	mov    %eax,%esi
 862dc9d:	8b 45 08             	mov    0x8(%ebp),%eax
 862dca0:	83 c0 08             	add    $0x8,%eax
 862dca3:	89 04 24             	mov    %eax,(%esp)
 862dca6:	e8 b9 5f c7 ff       	call   82a3c64 <_ZN6rwLockD1Ev>
 862dcab:	89 f0                	mov    %esi,%eax
 862dcad:	89 da                	mov    %ebx,%edx
 862dcaf:	89 04 24             	mov    %eax,(%esp)
 862dcb2:	e8 99 5a 4b 00       	call   8ae3750 <_Unwind_Resume>
 862dcb7:	8b 45 08             	mov    0x8(%ebp),%eax
 862dcba:	83 c0 08             	add    $0x8,%eax
 862dcbd:	89 04 24             	mov    %eax,(%esp)
 862dcc0:	e8 9f 5f c7 ff       	call   82a3c64 <_ZN6rwLockD1Ev>
 862dcc5:	83 c4 10             	add    $0x10,%esp
 862dcc8:	5b                   	pop    %ebx
 862dcc9:	5e                   	pop    %esi
 862dcca:	5d                   	pop    %ebp
 862dccb:	c3                   	ret

```

```c
// CSyncSlangFilter::~CSyncSlangFilter @ 0x862dc36

/* CSyncSlangFilter::~CSyncSlangFilter() */

void __thiscall CSyncSlangFilter::~CSyncSlangFilter(CSyncSlangFilter *this)

{
  IMPL *pIVar1;
  
  if (*(int *)this != 0) {
    pIVar1 = *(IMPL **)this;
    if (pIVar1 != (IMPL *)0x0) {
                    /* try { // try from 0862dc53 to 0862dc84 has its CatchHandler @ 0862dc99 */
      IMPL::~IMPL(pIVar1);
      operator_delete(pIVar1);
    }
    *(undefined4 *)this = 0;
  }
  if (*(int *)(this + 4) != 0) {
    pIVar1 = *(IMPL **)(this + 4);
    if (pIVar1 != (IMPL *)0x0) {
      IMPL::~IMPL(pIVar1);
      operator_delete(pIVar1);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  rwLock::~rwLock((rwLock *)(this + 8));
  return;
}

```

