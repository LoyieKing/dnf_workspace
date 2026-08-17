# EncryptTool

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## createEncKey

```asm
// === 0848d5b0 EncryptTool::createEncKey  [0x0848d5b0-0x848d949] ===
 848d5b0:	55                   	push   %ebp
 848d5b1:	89 e5                	mov    %esp,%ebp
 848d5b3:	83 ec 38             	sub    $0x38,%esp
 848d5b6:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 848d5bd:	e8 8e 01 bf ff       	call   807d750 <time@plt>
 848d5c2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 848d5c5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 848d5c8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 848d5cb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 848d5ce:	89 c2                	mov    %eax,%edx
 848d5d0:	83 e2 0f             	and    $0xf,%edx
 848d5d3:	8b 45 08             	mov    0x8(%ebp),%eax
 848d5d6:	89 90 00 02 00 00    	mov    %edx,0x200(%eax)
 848d5dc:	8b 45 08             	mov    0x8(%ebp),%eax
 848d5df:	8b 80 00 02 00 00    	mov    0x200(%eax),%eax
 848d5e5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 848d5e8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 848d5eb:	89 04 24             	mov    %eax,(%esp)
 848d5ee:	e8 27 ff ff ff       	call   848d51a <_ZN10Encryption8SeedRandERj>
 848d5f3:	8b 45 08             	mov    0x8(%ebp),%eax
 848d5f6:	8b 88 00 02 00 00    	mov    0x200(%eax),%ecx
 848d5fc:	8b 45 08             	mov    0x8(%ebp),%eax
 848d5ff:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 848d603:	89 c2                	mov    %eax,%edx
 848d605:	8b 45 08             	mov    0x8(%ebp),%eax
 848d608:	8b 80 00 02 00 00    	mov    0x200(%eax),%eax
 848d60e:	8d 04 02             	lea    (%edx,%eax,1),%eax
 848d611:	83 c0 05             	add    $0x5,%eax
 848d614:	89 c2                	mov    %eax,%edx
 848d616:	8b 45 08             	mov    0x8(%ebp),%eax
 848d619:	c1 e1 05             	shl    $0x5,%ecx
 848d61c:	88 14 01             	mov    %dl,(%ecx,%eax,1)
 848d61f:	8b 45 08             	mov    0x8(%ebp),%eax
 848d622:	8b 88 00 02 00 00    	mov    0x200(%eax),%ecx
 848d628:	8b 45 08             	mov    0x8(%ebp),%eax
 848d62b:	0f b6 40 28          	movzbl 0x28(%eax),%eax
 848d62f:	89 c2                	mov    %eax,%edx
 848d631:	8b 45 08             	mov    0x8(%ebp),%eax
 848d634:	8b 80 00 02 00 00    	mov    0x200(%eax),%eax
 848d63a:	8d 04 02             	lea    (%edx,%eax,1),%eax
 848d63d:	83 c0 02             	add    $0x2,%eax
 848d640:	8b 55 08             	mov    0x8(%ebp),%edx
 848d643:	c1 e1 05             	shl    $0x5,%ecx
 848d646:	01 ca                	add    %ecx,%edx
 848d648:	83 c2 01             	add    $0x1,%edx
 848d64b:	88 02                	mov    %al,(%edx)
 848d64d:	8b 45 08             	mov    0x8(%ebp),%eax
 848d650:	8b 88 00 02 00 00    	mov    0x200(%eax),%ecx
 848d656:	8b 45 08             	mov    0x8(%ebp),%eax
 848d659:	0f b6 40 47          	movzbl 0x47(%eax),%eax
 848d65d:	89 c2                	mov    %eax,%edx
 848d65f:	8b 45 08             	mov    0x8(%ebp),%eax
 848d662:	8b 80 00 02 00 00    	mov    0x200(%eax),%eax
 848d668:	8d 04 02             	lea    (%edx,%eax,1),%eax
 848d66b:	83 c0 04             	add    $0x4,%eax
 848d66e:	89 c2                	mov    %eax,%edx
 848d670:	8b 45 08             	mov    0x8(%ebp),%eax
 848d673:	c1 e1 04             	shl    $0x4,%ecx
 848d676:	83 c1 01             	add    $0x1,%ecx
 848d679:	88 14 48             	mov    %dl,(%eax,%ecx,2)
 848d67c:	8b 45 08             	mov    0x8(%ebp),%eax
 848d67f:	8b 88 00 02 00 00    	mov    0x200(%eax),%ecx
 848d685:	8b 45 08             	mov    0x8(%ebp),%eax
 848d688:	0f b6 40 66          	movzbl 0x66(%eax),%eax
 848d68c:	89 c2                	mov    %eax,%edx
 848d68e:	8b 45 08             	mov    0x8(%ebp),%eax
 848d691:	8b 80 00 02 00 00    	mov    0x200(%eax),%eax
 848d697:	8d 04 02             	lea    (%edx,%eax,1),%eax
 848d69a:	83 c0 02             	add    $0x2,%eax
 848d69d:	8b 55 08             	mov    0x8(%ebp),%edx
 848d6a0:	c1 e1 05             	shl    $0x5,%ecx
 848d6a3:	01 ca                	add    %ecx,%edx
 848d6a5:	83 c2 03             	add    $0x3,%edx
 848d6a8:	88 02                	mov    %al,(%edx)
 848d6aa:	8b 45 08             	mov    0x8(%ebp),%eax
 848d6ad:	8b 88 00 02 00 00    	mov    0x200(%eax),%ecx
 848d6b3:	8b 45 08             	mov    0x8(%ebp),%eax
 848d6b6:	0f b6 80 85 00 00 00 	movzbl 0x85(%eax),%eax
 848d6bd:	89 c2                	mov    %eax,%edx
 848d6bf:	8b 45 08             	mov    0x8(%ebp),%eax
 848d6c2:	8b 80 00 02 00 00    	mov    0x200(%eax),%eax
 848d6c8:	8d 04 02             	lea    (%edx,%eax,1),%eax
 848d6cb:	89 c2                	mov    %eax,%edx
 848d6cd:	8b 45 08             	mov    0x8(%ebp),%eax
 848d6d0:	c1 e1 03             	shl    $0x3,%ecx
 848d6d3:	83 c1 01             	add    $0x1,%ecx
 848d6d6:	88 14 88             	mov    %dl,(%eax,%ecx,4)
 848d6d9:	8b 45 08             	mov    0x8(%ebp),%eax
 848d6dc:	8b 88 00 02 00 00    	mov    0x200(%eax),%ecx
 848d6e2:	8b 45 08             	mov    0x8(%ebp),%eax
 848d6e5:	0f b6 80 a4 00 00 00 	movzbl 0xa4(%eax),%eax
 848d6ec:	89 c2                	mov    %eax,%edx
 848d6ee:	8b 45 08             	mov    0x8(%ebp),%eax
 848d6f1:	8b 80 00 02 00 00    	mov    0x200(%eax),%eax
 848d6f7:	8d 04 02             	lea    (%edx,%eax,1),%eax
 848d6fa:	83 c0 07             	add    $0x7,%eax
 848d6fd:	8b 55 08             	mov    0x8(%ebp),%edx
 848d700:	c1 e1 05             	shl    $0x5,%ecx
 848d703:	01 ca                	add    %ecx,%edx
 848d705:	83 c2 05             	add    $0x5,%edx
 848d708:	88 02                	mov    %al,(%edx)
 848d70a:	8b 45 08             	mov    0x8(%ebp),%eax
 848d70d:	8b 88 00 02 00 00    	mov    0x200(%eax),%ecx
 848d713:	8b 45 08             	mov    0x8(%ebp),%eax
 848d716:	0f b6 80 c3 00 00 00 	movzbl 0xc3(%eax),%eax
 848d71d:	89 c2                	mov    %eax,%edx
 848d71f:	8b 45 08             	mov    0x8(%ebp),%eax
 848d722:	8b 80 00 02 00 00    	mov    0x200(%eax),%eax
 848d728:	8d 04 02             	lea    (%edx,%eax,1),%eax
 848d72b:	83 c0 02             	add    $0x2,%eax
 848d72e:	8b 55 08             	mov    0x8(%ebp),%edx
 848d731:	c1 e1 05             	shl    $0x5,%ecx
 848d734:	01 ca                	add    %ecx,%edx
 848d736:	83 c2 06             	add    $0x6,%edx
 848d739:	88 02                	mov    %al,(%edx)
 848d73b:	8b 45 08             	mov    0x8(%ebp),%eax
 848d73e:	8b 88 00 02 00 00    	mov    0x200(%eax),%ecx
 848d744:	8b 45 08             	mov    0x8(%ebp),%eax
 848d747:	0f b6 80 e2 00 00 00 	movzbl 0xe2(%eax),%eax
 848d74e:	89 c2                	mov    %eax,%edx
 848d750:	8b 45 08             	mov    0x8(%ebp),%eax
 848d753:	8b 80 00 02 00 00    	mov    0x200(%eax),%eax
 848d759:	8d 04 02             	lea    (%edx,%eax,1),%eax
 848d75c:	83 c0 06             	add    $0x6,%eax
 848d75f:	8b 55 08             	mov    0x8(%ebp),%edx
 848d762:	c1 e1 05             	shl    $0x5,%ecx
 848d765:	01 ca                	add    %ecx,%edx
 848d767:	83 c2 07             	add    $0x7,%edx
 848d76a:	88 02                	mov    %al,(%edx)
 848d76c:	8b 45 08             	mov    0x8(%ebp),%eax
 848d76f:	8b 88 00 02 00 00    	mov    0x200(%eax),%ecx
 848d775:	8b 45 08             	mov    0x8(%ebp),%eax
 848d778:	0f b6 80 01 01 00 00 	movzbl 0x101(%eax),%eax
 848d77f:	89 c2                	mov    %eax,%edx
 848d781:	8b 45 08             	mov    0x8(%ebp),%eax
 848d784:	8b 80 00 02 00 00    	mov    0x200(%eax),%eax
 848d78a:	8d 04 02             	lea    (%edx,%eax,1),%eax
 848d78d:	83 c0 03             	add    $0x3,%eax
 848d790:	89 c2                	mov    %eax,%edx
 848d792:	8b 45 08             	mov    0x8(%ebp),%eax
 848d795:	c1 e1 02             	shl    $0x2,%ecx
 848d798:	83 c1 01             	add    $0x1,%ecx
 848d79b:	88 14 c8             	mov    %dl,(%eax,%ecx,8)
 848d79e:	8b 45 08             	mov    0x8(%ebp),%eax
 848d7a1:	8b 88 00 02 00 00    	mov    0x200(%eax),%ecx
 848d7a7:	8b 45 08             	mov    0x8(%ebp),%eax
 848d7aa:	0f b6 80 20 01 00 00 	movzbl 0x120(%eax),%eax
 848d7b1:	89 c2                	mov    %eax,%edx
 848d7b3:	8b 45 08             	mov    0x8(%ebp),%eax
 848d7b6:	8b 80 00 02 00 00    	mov    0x200(%eax),%eax
 848d7bc:	8d 04 02             	lea    (%edx,%eax,1),%eax
 848d7bf:	83 c0 02             	add    $0x2,%eax
 848d7c2:	8b 55 08             	mov    0x8(%ebp),%edx
 848d7c5:	c1 e1 05             	shl    $0x5,%ecx
 848d7c8:	01 ca                	add    %ecx,%edx
 848d7ca:	83 c2 09             	add    $0x9,%edx
 848d7cd:	88 02                	mov    %al,(%edx)
 848d7cf:	8b 45 08             	mov    0x8(%ebp),%eax
 848d7d2:	8b 88 00 02 00 00    	mov    0x200(%eax),%ecx
 848d7d8:	8b 45 08             	mov    0x8(%ebp),%eax
 848d7db:	0f b6 80 45 01 00 00 	movzbl 0x145(%eax),%eax
 848d7e2:	89 c2                	mov    %eax,%edx
 848d7e4:	8b 45 08             	mov    0x8(%ebp),%eax
 848d7e7:	8b 80 00 02 00 00    	mov    0x200(%eax),%eax
 848d7ed:	8d 04 02             	lea    (%edx,%eax,1),%eax
 848d7f0:	83 c0 02             	add    $0x2,%eax
 848d7f3:	8b 55 08             	mov    0x8(%ebp),%edx
 848d7f6:	c1 e1 05             	shl    $0x5,%ecx
 848d7f9:	01 ca                	add    %ecx,%edx
 848d7fb:	83 c2 0a             	add    $0xa,%edx
 848d7fe:	88 02                	mov    %al,(%edx)
 848d800:	8b 45 08             	mov    0x8(%ebp),%eax
 848d803:	8b 88 00 02 00 00    	mov    0x200(%eax),%ecx
 848d809:	8b 45 08             	mov    0x8(%ebp),%eax
 848d80c:	0f b6 80 64 01 00 00 	movzbl 0x164(%eax),%eax
 848d813:	89 c2                	mov    %eax,%edx
 848d815:	8b 45 08             	mov    0x8(%ebp),%eax
 848d818:	8b 80 00 02 00 00    	mov    0x200(%eax),%eax
 848d81e:	8d 04 02             	lea    (%edx,%eax,1),%eax
 848d821:	8b 55 08             	mov    0x8(%ebp),%edx
 848d824:	c1 e1 05             	shl    $0x5,%ecx
 848d827:	01 ca                	add    %ecx,%edx
 848d829:	83 c2 0b             	add    $0xb,%edx
 848d82c:	88 02                	mov    %al,(%edx)
 848d82e:	8b 45 08             	mov    0x8(%ebp),%eax
 848d831:	8b 88 00 02 00 00    	mov    0x200(%eax),%ecx
 848d837:	8b 45 08             	mov    0x8(%ebp),%eax
 848d83a:	0f b6 80 83 01 00 00 	movzbl 0x183(%eax),%eax
 848d841:	89 c2                	mov    %eax,%edx
 848d843:	8b 45 08             	mov    0x8(%ebp),%eax
 848d846:	8b 80 00 02 00 00    	mov    0x200(%eax),%eax
 848d84c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 848d84f:	83 c0 07             	add    $0x7,%eax
 848d852:	8b 55 08             	mov    0x8(%ebp),%edx
 848d855:	c1 e1 05             	shl    $0x5,%ecx
 848d858:	01 ca                	add    %ecx,%edx
 848d85a:	83 c2 0c             	add    $0xc,%edx
 848d85d:	88 02                	mov    %al,(%edx)
 848d85f:	8b 45 08             	mov    0x8(%ebp),%eax
 848d862:	8b 88 00 02 00 00    	mov    0x200(%eax),%ecx
 848d868:	8b 45 08             	mov    0x8(%ebp),%eax
 848d86b:	0f b6 80 a2 01 00 00 	movzbl 0x1a2(%eax),%eax
 848d872:	89 c2                	mov    %eax,%edx
 848d874:	8b 45 08             	mov    0x8(%ebp),%eax
 848d877:	8b 80 00 02 00 00    	mov    0x200(%eax),%eax
 848d87d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 848d880:	83 c0 02             	add    $0x2,%eax
 848d883:	8b 55 08             	mov    0x8(%ebp),%edx
 848d886:	c1 e1 05             	shl    $0x5,%ecx
 848d889:	01 ca                	add    %ecx,%edx
 848d88b:	83 c2 0d             	add    $0xd,%edx
 848d88e:	88 02                	mov    %al,(%edx)
 848d890:	8b 45 08             	mov    0x8(%ebp),%eax
 848d893:	8b 88 00 02 00 00    	mov    0x200(%eax),%ecx
 848d899:	8b 45 08             	mov    0x8(%ebp),%eax
 848d89c:	0f b6 80 c1 01 00 00 	movzbl 0x1c1(%eax),%eax
 848d8a3:	89 c2                	mov    %eax,%edx
 848d8a5:	8b 45 08             	mov    0x8(%ebp),%eax
 848d8a8:	8b 80 00 02 00 00    	mov    0x200(%eax),%eax
 848d8ae:	8d 04 02             	lea    (%edx,%eax,1),%eax
 848d8b1:	83 c0 06             	add    $0x6,%eax
 848d8b4:	8b 55 08             	mov    0x8(%ebp),%edx
 848d8b7:	c1 e1 05             	shl    $0x5,%ecx
 848d8ba:	01 ca                	add    %ecx,%edx
 848d8bc:	83 c2 0e             	add    $0xe,%edx
 848d8bf:	88 02                	mov    %al,(%edx)
 848d8c1:	8b 45 08             	mov    0x8(%ebp),%eax
 848d8c4:	8b 88 00 02 00 00    	mov    0x200(%eax),%ecx
 848d8ca:	8b 45 08             	mov    0x8(%ebp),%eax
 848d8cd:	0f b6 80 e0 01 00 00 	movzbl 0x1e0(%eax),%eax
 848d8d4:	89 c2                	mov    %eax,%edx
 848d8d6:	8b 45 08             	mov    0x8(%ebp),%eax
 848d8d9:	8b 80 00 02 00 00    	mov    0x200(%eax),%eax
 848d8df:	8d 04 02             	lea    (%edx,%eax,1),%eax
 848d8e2:	83 c0 03             	add    $0x3,%eax
 848d8e5:	8b 55 08             	mov    0x8(%ebp),%edx
 848d8e8:	c1 e1 05             	shl    $0x5,%ecx
 848d8eb:	01 ca                	add    %ecx,%edx
 848d8ed:	83 c2 0f             	add    $0xf,%edx
 848d8f0:	88 02                	mov    %al,(%edx)
 848d8f2:	8b 45 08             	mov    0x8(%ebp),%eax
 848d8f5:	8b 80 00 02 00 00    	mov    0x200(%eax),%eax
 848d8fb:	c1 e0 05             	shl    $0x5,%eax
 848d8fe:	03 45 08             	add    0x8(%ebp),%eax
 848d901:	89 c2                	mov    %eax,%edx
 848d903:	8b 45 08             	mov    0x8(%ebp),%eax
 848d906:	8b 80 04 02 00 00    	mov    0x204(%eax),%eax
 848d90c:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 848d913:	00 
 848d914:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 848d91b:	00 
 848d91c:	c7 44 24 14 10 00 00 	movl   $0x10,0x14(%esp)
 848d923:	00 
 848d924:	c7 44 24 10 10 00 00 	movl   $0x10,0x10(%esp)
 848d92b:	00 
 848d92c:	c7 44 24 0c 20 2f b2 	movl   $0x8b22f20,0xc(%esp)
 848d933:	08 
 848d934:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 848d93b:	00 
 848d93c:	89 54 24 04          	mov    %edx,0x4(%esp)
 848d940:	89 04 24             	mov    %eax,(%esp)
 848d943:	e8 d8 88 c2 ff       	call   80b6220 <_ZN9CRijndael10InitializeEPKciS1_iiii>
 848d948:	c9                   	leave
 848d949:	c3                   	ret

```

```c
// EncryptTool::createEncKey @ 0x848d5b0

/* EncryptTool::createEncKey() */

void __thiscall EncryptTool::createEncKey(EncryptTool *this)

{
  uint local_14;
  uint local_10;
  
  local_10 = time((time_t *)0x0);
  *(uint *)(this + 0x200) = local_10 & 0xf;
  local_14 = *(uint *)(this + 0x200);
  Encryption::SeedRand(&local_14);
  this[*(int *)(this + 0x200) * 0x20] =
       (EncryptTool)((char)this[9] + (char)*(undefined4 *)(this + 0x200) + '\x05');
  this[*(int *)(this + 0x200) * 0x20 + 1] =
       (EncryptTool)((char)this[0x28] + (char)*(undefined4 *)(this + 0x200) + '\x02');
  this[(*(int *)(this + 0x200) * 0x10 + 1) * 2] =
       (EncryptTool)((char)this[0x47] + (char)*(undefined4 *)(this + 0x200) + '\x04');
  this[*(int *)(this + 0x200) * 0x20 + 3] =
       (EncryptTool)((char)this[0x66] + (char)*(undefined4 *)(this + 0x200) + '\x02');
  this[(*(int *)(this + 0x200) * 8 + 1) * 4] =
       (EncryptTool)((char)this[0x85] + (char)*(undefined4 *)(this + 0x200));
  this[*(int *)(this + 0x200) * 0x20 + 5] =
       (EncryptTool)((char)this[0xa4] + (char)*(undefined4 *)(this + 0x200) + '\a');
  this[*(int *)(this + 0x200) * 0x20 + 6] =
       (EncryptTool)((char)this[0xc3] + (char)*(undefined4 *)(this + 0x200) + '\x02');
  this[*(int *)(this + 0x200) * 0x20 + 7] =
       (EncryptTool)((char)this[0xe2] + (char)*(undefined4 *)(this + 0x200) + '\x06');
  this[(*(int *)(this + 0x200) * 4 + 1) * 8] =
       (EncryptTool)((char)this[0x101] + (char)*(undefined4 *)(this + 0x200) + '\x03');
  this[*(int *)(this + 0x200) * 0x20 + 9] =
       (EncryptTool)((char)this[0x120] + (char)*(undefined4 *)(this + 0x200) + '\x02');
  this[*(int *)(this + 0x200) * 0x20 + 10] =
       (EncryptTool)((char)this[0x145] + (char)*(undefined4 *)(this + 0x200) + '\x02');
  this[*(int *)(this + 0x200) * 0x20 + 0xb] =
       (EncryptTool)((char)this[0x164] + (char)*(undefined4 *)(this + 0x200));
  this[*(int *)(this + 0x200) * 0x20 + 0xc] =
       (EncryptTool)((char)this[0x183] + (char)*(undefined4 *)(this + 0x200) + '\a');
  this[*(int *)(this + 0x200) * 0x20 + 0xd] =
       (EncryptTool)((char)this[0x1a2] + (char)*(undefined4 *)(this + 0x200) + '\x02');
  this[*(int *)(this + 0x200) * 0x20 + 0xe] =
       (EncryptTool)((char)this[0x1c1] + (char)*(undefined4 *)(this + 0x200) + '\x06');
  this[*(int *)(this + 0x200) * 0x20 + 0xf] =
       (EncryptTool)((char)this[0x1e0] + (char)*(undefined4 *)(this + 0x200) + '\x03');
  CRijndael::Initialize
            (*(CRijndael **)(this + 0x204),(char *)(this + *(int *)(this + 0x200) * 0x20),0x20,
             CRijndael::sm_chain0,0x10,0x10,0,0);
  return;
}

```

---

## getKeyIndex

```asm
// === 0848d9a2 EncryptTool::getKeyIndex  [0x0848d9a2-0x848d9af] ===
 848d9a2:	55                   	push   %ebp
 848d9a3:	89 e5                	mov    %esp,%ebp
 848d9a5:	8b 45 08             	mov    0x8(%ebp),%eax
 848d9a8:	8b 80 00 02 00 00    	mov    0x200(%eax),%eax
 848d9ae:	5d                   	pop    %ebp
 848d9af:	c3                   	ret

```

```c
// EncryptTool::getKeyIndex @ 0x848d9a2

/* EncryptTool::getKeyIndex() */

undefined4 __thiscall EncryptTool::getKeyIndex(EncryptTool *this)

{
  return *(undefined4 *)(this + 0x200);
}

```

---

## setCryptKey

```asm
// === 0848d94a EncryptTool::setCryptKey  [0x0848d94a-0x848d9a1] ===
 848d94a:	55                   	push   %ebp
 848d94b:	89 e5                	mov    %esp,%ebp
 848d94d:	83 ec 28             	sub    $0x28,%esp
 848d950:	8b 45 0c             	mov    0xc(%ebp),%eax
 848d953:	c1 e0 05             	shl    $0x5,%eax
 848d956:	03 45 08             	add    0x8(%ebp),%eax
 848d959:	89 c2                	mov    %eax,%edx
 848d95b:	8b 45 08             	mov    0x8(%ebp),%eax
 848d95e:	8b 80 04 02 00 00    	mov    0x204(%eax),%eax
 848d964:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 848d96b:	00 
 848d96c:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 848d973:	00 
 848d974:	c7 44 24 14 10 00 00 	movl   $0x10,0x14(%esp)
 848d97b:	00 
 848d97c:	c7 44 24 10 10 00 00 	movl   $0x10,0x10(%esp)
 848d983:	00 
 848d984:	c7 44 24 0c 20 2f b2 	movl   $0x8b22f20,0xc(%esp)
 848d98b:	08 
 848d98c:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 848d993:	00 
 848d994:	89 54 24 04          	mov    %edx,0x4(%esp)
 848d998:	89 04 24             	mov    %eax,(%esp)
 848d99b:	e8 80 88 c2 ff       	call   80b6220 <_ZN9CRijndael10InitializeEPKciS1_iiii>
 848d9a0:	c9                   	leave
 848d9a1:	c3                   	ret

```

```c
// EncryptTool::setCryptKey @ 0x848d94a

/* EncryptTool::setCryptKey(int) */

void __thiscall EncryptTool::setCryptKey(EncryptTool *this,int param_1)

{
  CRijndael::Initialize
            (*(CRijndael **)(this + 0x204),(char *)(this + param_1 * 0x20),0x20,CRijndael::sm_chain0
             ,0x10,0x10,0,0);
  return;
}

```

---

## wrapEncrypt

```asm
// === 0848d9b0 EncryptTool::wrapEncrypt  [0x0848d9b0-0x848da6f] ===
 848d9b0:	55                   	push   %ebp
 848d9b1:	89 e5                	mov    %esp,%ebp
 848d9b3:	83 ec 28             	sub    $0x28,%esp
 848d9b6:	8b 45 08             	mov    0x8(%ebp),%eax
 848d9b9:	8b 80 04 02 00 00    	mov    0x204(%eax),%eax
 848d9bf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 848d9c6:	00 
 848d9c7:	89 04 24             	mov    %eax,(%esp)
 848d9ca:	e8 47 6a c2 ff       	call   80b4416 <_ZN7IMethod12GetBlockSizeEPj>
 848d9cf:	89 45 f0             	mov    %eax,-0x10(%ebp)
 848d9d2:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 848d9d9:	8b 45 10             	mov    0x10(%ebp),%eax
 848d9dc:	89 c2                	mov    %eax,%edx
 848d9de:	c1 fa 1f             	sar    $0x1f,%edx
 848d9e1:	f7 7d f0             	idivl  -0x10(%ebp)
 848d9e4:	89 d0                	mov    %edx,%eax
 848d9e6:	85 c0                	test   %eax,%eax
 848d9e8:	74 17                	je     848da01 <_ZN11EncryptTool11wrapEncryptEPciS0_+0x51>
 848d9ea:	8b 45 10             	mov    0x10(%ebp),%eax
 848d9ed:	89 c2                	mov    %eax,%edx
 848d9ef:	c1 fa 1f             	sar    $0x1f,%edx
 848d9f2:	f7 7d f0             	idivl  -0x10(%ebp)
 848d9f5:	83 c0 01             	add    $0x1,%eax
 848d9f8:	0f af 45 f0          	imul   -0x10(%ebp),%eax
 848d9fc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 848d9ff:	eb 06                	jmp    848da07 <_ZN11EncryptTool11wrapEncryptEPciS0_+0x57>
 848da01:	8b 45 10             	mov    0x10(%ebp),%eax
 848da04:	89 45 f4             	mov    %eax,-0xc(%ebp)
 848da07:	8b 45 08             	mov    0x8(%ebp),%eax
 848da0a:	8b 80 04 02 00 00    	mov    0x204(%eax),%eax
 848da10:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 848da17:	00 
 848da18:	8b 55 10             	mov    0x10(%ebp),%edx
 848da1b:	89 54 24 08          	mov    %edx,0x8(%esp)
 848da1f:	8b 55 0c             	mov    0xc(%ebp),%edx
 848da22:	89 54 24 04          	mov    %edx,0x4(%esp)
 848da26:	89 04 24             	mov    %eax,(%esp)
 848da29:	e8 78 6a c2 ff       	call   80b44a6 <_ZN7IMethod3PadEPciPj>
 848da2e:	8b 45 08             	mov    0x8(%ebp),%eax
 848da31:	8b 80 04 02 00 00    	mov    0x204(%eax),%eax
 848da37:	8b 00                	mov    (%eax),%eax
 848da39:	83 c0 0c             	add    $0xc,%eax
 848da3c:	8b 08                	mov    (%eax),%ecx
 848da3e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 848da41:	8b 45 08             	mov    0x8(%ebp),%eax
 848da44:	8b 80 04 02 00 00    	mov    0x204(%eax),%eax
 848da4a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 848da4e:	8b 55 14             	mov    0x14(%ebp),%edx
 848da51:	89 54 24 08          	mov    %edx,0x8(%esp)
 848da55:	8b 55 0c             	mov    0xc(%ebp),%edx
 848da58:	89 54 24 04          	mov    %edx,0x4(%esp)
 848da5c:	89 04 24             	mov    %eax,(%esp)
 848da5f:	ff d1                	call   *%ecx
 848da61:	8b 45 f4             	mov    -0xc(%ebp),%eax
 848da64:	03 45 14             	add    0x14(%ebp),%eax
 848da67:	c6 00 00             	movb   $0x0,(%eax)
 848da6a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 848da6d:	c9                   	leave
 848da6e:	c3                   	ret
 848da6f:	90                   	nop

```

```c
// EncryptTool::wrapEncrypt @ 0x848d9b0

/* EncryptTool::wrapEncrypt(char*, int, char*) */

int __thiscall EncryptTool::wrapEncrypt(EncryptTool *this,char *param_1,int param_2,char *param_3)

{
  int local_10;
  
  local_10 = IMethod::GetBlockSize(*(IMethod **)(this + 0x204),(uint *)0x0);
  if (param_2 % local_10 == 0) {
    local_10 = param_2;
  }
  else {
    local_10 = (param_2 / local_10 + 1) * local_10;
  }
  IMethod::Pad(*(IMethod **)(this + 0x204),param_1,param_2,(uint *)0x0);
  (**(code **)(**(int **)(this + 0x204) + 0xc))
            (*(undefined4 *)(this + 0x204),param_1,param_3,local_10);
  param_3[local_10] = '\0';
  return local_10;
}

```

