# yaSSL__DES

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## DES

```asm
// === 08798790 yaSSL::DES::DES  [0x08798790-0x879883f] ===
 8798790:	55                   	push   %ebp
 8798791:	89 e5                	mov    %esp,%ebp
 8798793:	56                   	push   %esi
 8798794:	53                   	push   %ebx
 8798795:	e8 5e a6 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879879a:	81 c3 fe 43 bd 00    	add    $0xbd43fe,%ebx
 87987a0:	83 ec 10             	sub    $0x10,%esp
 87987a3:	8b 75 08             	mov    0x8(%ebp),%esi
 87987a6:	8b 83 3c fa ff ff    	mov    -0x5c4(%ebx),%eax
 87987ac:	83 c0 08             	add    $0x8,%eax
 87987af:	89 06                	mov    %eax,(%esi)
 87987b1:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87987b6:	c7 04 24 70 01 00 00 	movl   $0x170,(%esp)
 87987bd:	e8 de 84 fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87987c2:	8d 50 10             	lea    0x10(%eax),%edx
 87987c5:	89 50 08             	mov    %edx,0x8(%eax)
 87987c8:	8d 50 20             	lea    0x20(%eax),%edx
 87987cb:	89 50 0c             	mov    %edx,0xc(%eax)
 87987ce:	8b 93 70 ff ff ff    	mov    -0x90(%ebx),%edx
 87987d4:	8d 88 c8 00 00 00    	lea    0xc8(%eax),%ecx
 87987da:	89 88 c0 00 00 00    	mov    %ecx,0xc0(%eax)
 87987e0:	8d 88 d8 00 00 00    	lea    0xd8(%eax),%ecx
 87987e6:	c7 40 04 08 00 00 00 	movl   $0x8,0x4(%eax)
 87987ed:	c7 40 30 00 00 00 00 	movl   $0x0,0x30(%eax)
 87987f4:	83 c2 08             	add    $0x8,%edx
 87987f7:	c7 40 34 01 00 00 00 	movl   $0x1,0x34(%eax)
 87987fe:	89 10                	mov    %edx,(%eax)
 8798800:	c7 80 bc 00 00 00 08 	movl   $0x8,0xbc(%eax)
 8798807:	00 00 00 
 879880a:	89 88 c4 00 00 00    	mov    %ecx,0xc4(%eax)
 8798810:	c7 80 e8 00 00 00 01 	movl   $0x1,0xe8(%eax)
 8798817:	00 00 00 
 879881a:	c7 80 ec 00 00 00 01 	movl   $0x1,0xec(%eax)
 8798821:	00 00 00 
 8798824:	89 90 b8 00 00 00    	mov    %edx,0xb8(%eax)
 879882a:	89 46 04             	mov    %eax,0x4(%esi)
 879882d:	83 c4 10             	add    $0x10,%esp
 8798830:	5b                   	pop    %ebx
 8798831:	5e                   	pop    %esi
 8798832:	5d                   	pop    %ebp
 8798833:	c3                   	ret
 8798834:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 879883a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::DES::DES @ 0x8798790

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DES::DES() */

void __thiscall yaSSL::DES::DES(DES *this)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  *(undefined **)this = PTR_vtable_0936c5d4 + 8;
  puVar2 = operator_new(0x170,0);
  puVar2[2] = puVar2 + 4;
  puVar2[3] = puVar2 + 8;
  puVar1 = PTR_vtable_0936cb08;
  puVar2[0x30] = puVar2 + 0x32;
  puVar2[1] = 8;
  puVar2[0xc] = 0;
  puVar2[0xd] = 1;
  *puVar2 = puVar1 + 8;
  puVar2[0x2f] = 8;
  puVar2[0x31] = puVar2 + 0x36;
  puVar2[0x3a] = 1;
  puVar2[0x3b] = 1;
  puVar2[0x2e] = puVar1 + 8;
  *(undefined4 **)(this + 4) = puVar2;
  return;
}

```

---

## decrypt

```asm
// === 0879b670 yaSSL::DES::decrypt  [0x0879b670-0x879b86f] ===
 879b670:	55                   	push   %ebp
 879b671:	89 e5                	mov    %esp,%ebp
 879b673:	57                   	push   %edi
 879b674:	56                   	push   %esi
 879b675:	53                   	push   %ebx
 879b676:	83 ec 4c             	sub    $0x4c,%esp
 879b679:	8b 45 08             	mov    0x8(%ebp),%eax
 879b67c:	e8 77 77 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879b681:	81 c3 17 15 bd 00    	add    $0xbd1517,%ebx
 879b687:	8b 7d 0c             	mov    0xc(%ebp),%edi
 879b68a:	8b 55 14             	mov    0x14(%ebp),%edx
 879b68d:	8b 40 04             	mov    0x4(%eax),%eax
 879b690:	89 c6                	mov    %eax,%esi
 879b692:	89 c1                	mov    %eax,%ecx
 879b694:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 879b697:	8b 80 ec 00 00 00    	mov    0xec(%eax),%eax
 879b69d:	81 c6 b8 00 00 00    	add    $0xb8,%esi
 879b6a3:	85 c0                	test   %eax,%eax
 879b6a5:	75 59                	jne    879b700 <_ZN5yaSSL3DES7decryptEPhPKhj+0x90>
 879b6a7:	89 d0                	mov    %edx,%eax
 879b6a9:	31 d2                	xor    %edx,%edx
 879b6ab:	f7 b1 bc 00 00 00    	divl   0xbc(%ecx)
 879b6b1:	85 c0                	test   %eax,%eax
 879b6b3:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 879b6b6:	74 40                	je     879b6f8 <_ZN5yaSSL3DES7decryptEPhPKhj+0x88>
 879b6b8:	89 f8                	mov    %edi,%eax
 879b6ba:	8b 4d 10             	mov    0x10(%ebp),%ecx
 879b6bd:	89 f7                	mov    %esi,%edi
 879b6bf:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 879b6c2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 879b6c8:	8b 17                	mov    (%edi),%edx
 879b6ca:	89 45 c8             	mov    %eax,-0x38(%ebp)
 879b6cd:	89 44 24 0c          	mov    %eax,0xc(%esp)
 879b6d1:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 879b6d5:	89 4d cc             	mov    %ecx,-0x34(%ebp)
 879b6d8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 879b6df:	00 
 879b6e0:	89 3c 24             	mov    %edi,(%esp)
 879b6e3:	ff 52 0c             	call   *0xc(%edx)
 879b6e6:	8b 57 04             	mov    0x4(%edi),%edx
 879b6e9:	8b 45 c8             	mov    -0x38(%ebp),%eax
 879b6ec:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 879b6ef:	01 d0                	add    %edx,%eax
 879b6f1:	01 d1                	add    %edx,%ecx
 879b6f3:	83 ee 01             	sub    $0x1,%esi
 879b6f6:	75 d0                	jne    879b6c8 <_ZN5yaSSL3DES7decryptEPhPKhj+0x58>
 879b6f8:	83 c4 4c             	add    $0x4c,%esp
 879b6fb:	5b                   	pop    %ebx
 879b6fc:	5e                   	pop    %esi
 879b6fd:	5f                   	pop    %edi
 879b6fe:	5d                   	pop    %ebp
 879b6ff:	c3                   	ret
 879b700:	83 f8 01             	cmp    $0x1,%eax
 879b703:	75 f3                	jne    879b6f8 <_ZN5yaSSL3DES7decryptEPhPKhj+0x88>
 879b705:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 879b708:	8b 81 e8 00 00 00    	mov    0xe8(%ecx),%eax
 879b70e:	85 c0                	test   %eax,%eax
 879b710:	75 7e                	jne    879b790 <_ZN5yaSSL3DES7decryptEPhPKhj+0x120>
 879b712:	89 d0                	mov    %edx,%eax
 879b714:	31 d2                	xor    %edx,%edx
 879b716:	f7 b1 bc 00 00 00    	divl   0xbc(%ecx)
 879b71c:	85 c0                	test   %eax,%eax
 879b71e:	89 45 d0             	mov    %eax,-0x30(%ebp)
 879b721:	74 d5                	je     879b6f8 <_ZN5yaSSL3DES7decryptEPhPKhj+0x88>
 879b723:	8b 81 bc 00 00 00    	mov    0xbc(%ecx),%eax
 879b729:	8b 4d 10             	mov    0x10(%ebp),%ecx
 879b72c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 879b730:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 879b734:	89 44 24 08          	mov    %eax,0x8(%esp)
 879b738:	8b 46 08             	mov    0x8(%esi),%eax
 879b73b:	89 4d cc             	mov    %ecx,-0x34(%ebp)
 879b73e:	89 04 24             	mov    %eax,(%esp)
 879b741:	e8 ca bc fc ff       	call   8767410 <_ZN8TaoCrypt6xorbufEPhPKhj>
 879b746:	8b 46 08             	mov    0x8(%esi),%eax
 879b749:	8b 16                	mov    (%esi),%edx
 879b74b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 879b752:	00 
 879b753:	89 34 24             	mov    %esi,(%esp)
 879b756:	89 44 24 0c          	mov    %eax,0xc(%esp)
 879b75a:	89 44 24 04          	mov    %eax,0x4(%esp)
 879b75e:	ff 52 0c             	call   *0xc(%edx)
 879b761:	8b 46 08             	mov    0x8(%esi),%eax
 879b764:	8b 56 04             	mov    0x4(%esi),%edx
 879b767:	89 3c 24             	mov    %edi,(%esp)
 879b76a:	89 44 24 04          	mov    %eax,0x4(%esp)
 879b76e:	89 54 24 08          	mov    %edx,0x8(%esp)
 879b772:	e8 29 21 8e ff       	call   807d8a0 <memcpy@plt>
 879b777:	8b 46 04             	mov    0x4(%esi),%eax
 879b77a:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 879b77d:	01 c7                	add    %eax,%edi
 879b77f:	01 c1                	add    %eax,%ecx
 879b781:	83 6d d0 01          	subl   $0x1,-0x30(%ebp)
 879b785:	75 a9                	jne    879b730 <_ZN5yaSSL3DES7decryptEPhPKhj+0xc0>
 879b787:	e9 6c ff ff ff       	jmp    879b6f8 <_ZN5yaSSL3DES7decryptEPhPKhj+0x88>
 879b78c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 879b790:	89 d0                	mov    %edx,%eax
 879b792:	31 d2                	xor    %edx,%edx
 879b794:	f7 b1 bc 00 00 00    	divl   0xbc(%ecx)
 879b79a:	85 c0                	test   %eax,%eax
 879b79c:	89 45 d0             	mov    %eax,-0x30(%ebp)
 879b79f:	0f 84 53 ff ff ff    	je     879b6f8 <_ZN5yaSSL3DES7decryptEPhPKhj+0x88>
 879b7a5:	8b 81 bc 00 00 00    	mov    0xbc(%ecx),%eax
 879b7ab:	8d 55 d8             	lea    -0x28(%ebp),%edx
 879b7ae:	8b 4d 10             	mov    0x10(%ebp),%ecx
 879b7b1:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 879b7b4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 879b7b8:	8b 56 0c             	mov    0xc(%esi),%edx
 879b7bb:	89 4d cc             	mov    %ecx,-0x34(%ebp)
 879b7be:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 879b7c2:	89 44 24 08          	mov    %eax,0x8(%esp)
 879b7c6:	89 14 24             	mov    %edx,(%esp)
 879b7c9:	e8 d2 20 8e ff       	call   807d8a0 <memcpy@plt>
 879b7ce:	8b 06                	mov    (%esi),%eax
 879b7d0:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 879b7d4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 879b7db:	00 
 879b7dc:	8b 56 0c             	mov    0xc(%esi),%edx
 879b7df:	89 34 24             	mov    %esi,(%esp)
 879b7e2:	89 54 24 04          	mov    %edx,0x4(%esp)
 879b7e6:	ff 50 0c             	call   *0xc(%eax)
 879b7e9:	8b 46 04             	mov    0x4(%esi),%eax
 879b7ec:	89 44 24 08          	mov    %eax,0x8(%esp)
 879b7f0:	8b 46 08             	mov    0x8(%esi),%eax
 879b7f3:	89 3c 24             	mov    %edi,(%esp)
 879b7f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 879b7fa:	e8 11 bc fc ff       	call   8767410 <_ZN8TaoCrypt6xorbufEPhPKhj>
 879b7ff:	8b 46 08             	mov    0x8(%esi),%eax
 879b802:	8b 56 04             	mov    0x4(%esi),%edx
 879b805:	89 44 24 04          	mov    %eax,0x4(%esp)
 879b809:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 879b80c:	89 54 24 08          	mov    %edx,0x8(%esp)
 879b810:	89 04 24             	mov    %eax,(%esp)
 879b813:	e8 88 20 8e ff       	call   807d8a0 <memcpy@plt>
 879b818:	8b 56 08             	mov    0x8(%esi),%edx
 879b81b:	8b 46 04             	mov    0x4(%esi),%eax
 879b81e:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 879b821:	8b 56 0c             	mov    0xc(%esi),%edx
 879b824:	89 44 24 08          	mov    %eax,0x8(%esp)
 879b828:	89 54 24 04          	mov    %edx,0x4(%esp)
 879b82c:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 879b82f:	89 14 24             	mov    %edx,(%esp)
 879b832:	e8 69 20 8e ff       	call   807d8a0 <memcpy@plt>
 879b837:	8b 56 04             	mov    0x4(%esi),%edx
 879b83a:	8b 46 0c             	mov    0xc(%esi),%eax
 879b83d:	89 54 24 08          	mov    %edx,0x8(%esp)
 879b841:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 879b844:	89 04 24             	mov    %eax,(%esp)
 879b847:	89 54 24 04          	mov    %edx,0x4(%esp)
 879b84b:	e8 50 20 8e ff       	call   807d8a0 <memcpy@plt>
 879b850:	8b 46 04             	mov    0x4(%esi),%eax
 879b853:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 879b856:	01 c7                	add    %eax,%edi
 879b858:	01 c1                	add    %eax,%ecx
 879b85a:	83 6d d0 01          	subl   $0x1,-0x30(%ebp)
 879b85e:	0f 85 54 ff ff ff    	jne    879b7b8 <_ZN5yaSSL3DES7decryptEPhPKhj+0x148>
 879b864:	e9 8f fe ff ff       	jmp    879b6f8 <_ZN5yaSSL3DES7decryptEPhPKhj+0x88>
 879b869:	90                   	nop
 879b86a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::DES::decrypt @ 0x879b670

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DES::decrypt(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall yaSSL::DES::decrypt(DES *this,uchar *param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  size_t __n;
  int *piVar3;
  uint local_34;
  undefined1 local_2c [28];
  
  iVar1 = *(int *)(this + 4);
  piVar3 = (int *)(iVar1 + 0xb8);
  if (*(int *)(iVar1 + 0xec) == 0) {
    for (uVar2 = param_3 / *(uint *)(iVar1 + 0xbc); uVar2 != 0; uVar2 = uVar2 - 1) {
      (**(code **)(*piVar3 + 0xc))(piVar3,param_2,0,param_1);
      param_1 = param_1 + *(int *)(iVar1 + 0xbc);
      param_2 = param_2 + *(int *)(iVar1 + 0xbc);
    }
  }
  else if (*(int *)(iVar1 + 0xec) == 1) {
    if (*(int *)(iVar1 + 0xe8) == 0) {
      local_34 = param_3 / *(uint *)(iVar1 + 0xbc);
      if (local_34 != 0) {
        uVar2 = *(uint *)(iVar1 + 0xbc);
        do {
          TaoCrypt::xorbuf(*(uchar **)(iVar1 + 0xc0),param_2,uVar2);
          (**(code **)(*piVar3 + 0xc))
                    (piVar3,*(undefined4 *)(iVar1 + 0xc0),0,*(undefined4 *)(iVar1 + 0xc0));
          memcpy(param_1,*(void **)(iVar1 + 0xc0),*(size_t *)(iVar1 + 0xbc));
          uVar2 = *(uint *)(iVar1 + 0xbc);
          param_1 = param_1 + uVar2;
          param_2 = param_2 + uVar2;
          local_34 = local_34 - 1;
        } while (local_34 != 0);
      }
    }
    else {
      local_34 = param_3 / *(uint *)(iVar1 + 0xbc);
      if (local_34 != 0) {
        __n = *(size_t *)(iVar1 + 0xbc);
        do {
          memcpy(*(void **)(iVar1 + 0xc4),param_2,__n);
          (**(code **)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(iVar1 + 0xc4),0,param_1);
          TaoCrypt::xorbuf(param_1,*(uchar **)(iVar1 + 0xc0),*(uint *)(iVar1 + 0xbc));
          memcpy(local_2c,*(void **)(iVar1 + 0xc0),*(size_t *)(iVar1 + 0xbc));
          memcpy(*(void **)(iVar1 + 0xc0),*(void **)(iVar1 + 0xc4),*(size_t *)(iVar1 + 0xbc));
          memcpy(*(void **)(iVar1 + 0xc4),local_2c,*(size_t *)(iVar1 + 0xbc));
          __n = *(size_t *)(iVar1 + 0xbc);
          param_1 = param_1 + __n;
          param_2 = param_2 + __n;
          local_34 = local_34 - 1;
        } while (local_34 != 0);
      }
    }
  }
  return;
}

```

---

## encrypt

```asm
// === 0879b870 yaSSL::DES::encrypt  [0x0879b870-0x879ba3f] ===
 879b870:	55                   	push   %ebp
 879b871:	89 e5                	mov    %esp,%ebp
 879b873:	57                   	push   %edi
 879b874:	56                   	push   %esi
 879b875:	53                   	push   %ebx
 879b876:	83 ec 4c             	sub    $0x4c,%esp
 879b879:	8b 55 08             	mov    0x8(%ebp),%edx
 879b87c:	e8 77 75 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879b881:	81 c3 17 13 bd 00    	add    $0xbd1317,%ebx
 879b887:	8b 7d 0c             	mov    0xc(%ebp),%edi
 879b88a:	8b 4d 10             	mov    0x10(%ebp),%ecx
 879b88d:	8b 45 14             	mov    0x14(%ebp),%eax
 879b890:	8b 72 04             	mov    0x4(%edx),%esi
 879b893:	8b 56 34             	mov    0x34(%esi),%edx
 879b896:	85 d2                	test   %edx,%edx
 879b898:	75 4e                	jne    879b8e8 <_ZN5yaSSL3DES7encryptEPhPKhj+0x78>
 879b89a:	31 d2                	xor    %edx,%edx
 879b89c:	f7 76 04             	divl   0x4(%esi)
 879b89f:	85 c0                	test   %eax,%eax
 879b8a1:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 879b8a4:	74 3a                	je     879b8e0 <_ZN5yaSSL3DES7encryptEPhPKhj+0x70>
 879b8a6:	89 f8                	mov    %edi,%eax
 879b8a8:	89 f7                	mov    %esi,%edi
 879b8aa:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 879b8ad:	8d 76 00             	lea    0x0(%esi),%esi
 879b8b0:	8b 17                	mov    (%edi),%edx
 879b8b2:	89 45 c8             	mov    %eax,-0x38(%ebp)
 879b8b5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 879b8b9:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 879b8bd:	89 4d cc             	mov    %ecx,-0x34(%ebp)
 879b8c0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 879b8c7:	00 
 879b8c8:	89 3c 24             	mov    %edi,(%esp)
 879b8cb:	ff 52 0c             	call   *0xc(%edx)
 879b8ce:	8b 57 04             	mov    0x4(%edi),%edx
 879b8d1:	8b 45 c8             	mov    -0x38(%ebp),%eax
 879b8d4:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 879b8d7:	01 d0                	add    %edx,%eax
 879b8d9:	01 d1                	add    %edx,%ecx
 879b8db:	83 ee 01             	sub    $0x1,%esi
 879b8de:	75 d0                	jne    879b8b0 <_ZN5yaSSL3DES7encryptEPhPKhj+0x40>
 879b8e0:	83 c4 4c             	add    $0x4c,%esp
 879b8e3:	5b                   	pop    %ebx
 879b8e4:	5e                   	pop    %esi
 879b8e5:	5f                   	pop    %edi
 879b8e6:	5d                   	pop    %ebp
 879b8e7:	c3                   	ret
 879b8e8:	83 fa 01             	cmp    $0x1,%edx
 879b8eb:	75 f3                	jne    879b8e0 <_ZN5yaSSL3DES7encryptEPhPKhj+0x70>
 879b8ed:	8b 56 30             	mov    0x30(%esi),%edx
 879b8f0:	85 d2                	test   %edx,%edx
 879b8f2:	75 74                	jne    879b968 <_ZN5yaSSL3DES7encryptEPhPKhj+0xf8>
 879b8f4:	31 d2                	xor    %edx,%edx
 879b8f6:	f7 76 04             	divl   0x4(%esi)
 879b8f9:	85 c0                	test   %eax,%eax
 879b8fb:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 879b8fe:	74 e0                	je     879b8e0 <_ZN5yaSSL3DES7encryptEPhPKhj+0x70>
 879b900:	8b 46 04             	mov    0x4(%esi),%eax
 879b903:	90                   	nop
 879b904:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 879b908:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 879b90c:	89 44 24 08          	mov    %eax,0x8(%esp)
 879b910:	8b 46 08             	mov    0x8(%esi),%eax
 879b913:	89 4d cc             	mov    %ecx,-0x34(%ebp)
 879b916:	89 04 24             	mov    %eax,(%esp)
 879b919:	e8 f2 ba fc ff       	call   8767410 <_ZN8TaoCrypt6xorbufEPhPKhj>
 879b91e:	8b 46 08             	mov    0x8(%esi),%eax
 879b921:	8b 16                	mov    (%esi),%edx
 879b923:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 879b92a:	00 
 879b92b:	89 34 24             	mov    %esi,(%esp)
 879b92e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 879b932:	89 44 24 04          	mov    %eax,0x4(%esp)
 879b936:	ff 52 0c             	call   *0xc(%edx)
 879b939:	8b 46 08             	mov    0x8(%esi),%eax
 879b93c:	8b 56 04             	mov    0x4(%esi),%edx
 879b93f:	89 3c 24             	mov    %edi,(%esp)
 879b942:	89 44 24 04          	mov    %eax,0x4(%esp)
 879b946:	89 54 24 08          	mov    %edx,0x8(%esp)
 879b94a:	e8 51 1f 8e ff       	call   807d8a0 <memcpy@plt>
 879b94f:	8b 46 04             	mov    0x4(%esi),%eax
 879b952:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 879b955:	01 c7                	add    %eax,%edi
 879b957:	01 c1                	add    %eax,%ecx
 879b959:	83 6d d4 01          	subl   $0x1,-0x2c(%ebp)
 879b95d:	75 a9                	jne    879b908 <_ZN5yaSSL3DES7encryptEPhPKhj+0x98>
 879b95f:	e9 7c ff ff ff       	jmp    879b8e0 <_ZN5yaSSL3DES7encryptEPhPKhj+0x70>
 879b964:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 879b968:	31 d2                	xor    %edx,%edx
 879b96a:	f7 76 04             	divl   0x4(%esi)
 879b96d:	85 c0                	test   %eax,%eax
 879b96f:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 879b972:	0f 84 68 ff ff ff    	je     879b8e0 <_ZN5yaSSL3DES7encryptEPhPKhj+0x70>
 879b978:	8b 46 04             	mov    0x4(%esi),%eax
 879b97b:	8d 55 d8             	lea    -0x28(%ebp),%edx
 879b97e:	89 55 d0             	mov    %edx,-0x30(%ebp)
 879b981:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 879b988:	8b 56 0c             	mov    0xc(%esi),%edx
 879b98b:	89 4d cc             	mov    %ecx,-0x34(%ebp)
 879b98e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 879b992:	89 44 24 08          	mov    %eax,0x8(%esp)
 879b996:	89 14 24             	mov    %edx,(%esp)
 879b999:	e8 02 1f 8e ff       	call   807d8a0 <memcpy@plt>
 879b99e:	8b 06                	mov    (%esi),%eax
 879b9a0:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 879b9a4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 879b9ab:	00 
 879b9ac:	8b 56 0c             	mov    0xc(%esi),%edx
 879b9af:	89 34 24             	mov    %esi,(%esp)
 879b9b2:	89 54 24 04          	mov    %edx,0x4(%esp)
 879b9b6:	ff 50 0c             	call   *0xc(%eax)
 879b9b9:	8b 46 04             	mov    0x4(%esi),%eax
 879b9bc:	89 44 24 08          	mov    %eax,0x8(%esp)
 879b9c0:	8b 46 08             	mov    0x8(%esi),%eax
 879b9c3:	89 3c 24             	mov    %edi,(%esp)
 879b9c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 879b9ca:	e8 41 ba fc ff       	call   8767410 <_ZN8TaoCrypt6xorbufEPhPKhj>
 879b9cf:	8b 46 08             	mov    0x8(%esi),%eax
 879b9d2:	8b 56 04             	mov    0x4(%esi),%edx
 879b9d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 879b9d9:	8b 45 d0             	mov    -0x30(%ebp),%eax
 879b9dc:	89 54 24 08          	mov    %edx,0x8(%esp)
 879b9e0:	89 04 24             	mov    %eax,(%esp)
 879b9e3:	e8 b8 1e 8e ff       	call   807d8a0 <memcpy@plt>
 879b9e8:	8b 56 08             	mov    0x8(%esi),%edx
 879b9eb:	8b 46 04             	mov    0x4(%esi),%eax
 879b9ee:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 879b9f1:	8b 56 0c             	mov    0xc(%esi),%edx
 879b9f4:	89 44 24 08          	mov    %eax,0x8(%esp)
 879b9f8:	89 54 24 04          	mov    %edx,0x4(%esp)
 879b9fc:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 879b9ff:	89 14 24             	mov    %edx,(%esp)
 879ba02:	e8 99 1e 8e ff       	call   807d8a0 <memcpy@plt>
 879ba07:	8b 56 04             	mov    0x4(%esi),%edx
 879ba0a:	8b 46 0c             	mov    0xc(%esi),%eax
 879ba0d:	89 54 24 08          	mov    %edx,0x8(%esp)
 879ba11:	8b 55 d0             	mov    -0x30(%ebp),%edx
 879ba14:	89 04 24             	mov    %eax,(%esp)
 879ba17:	89 54 24 04          	mov    %edx,0x4(%esp)
 879ba1b:	e8 80 1e 8e ff       	call   807d8a0 <memcpy@plt>
 879ba20:	8b 46 04             	mov    0x4(%esi),%eax
 879ba23:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 879ba26:	01 c7                	add    %eax,%edi
 879ba28:	01 c1                	add    %eax,%ecx
 879ba2a:	83 6d d4 01          	subl   $0x1,-0x2c(%ebp)
 879ba2e:	0f 85 54 ff ff ff    	jne    879b988 <_ZN5yaSSL3DES7encryptEPhPKhj+0x118>
 879ba34:	e9 a7 fe ff ff       	jmp    879b8e0 <_ZN5yaSSL3DES7encryptEPhPKhj+0x70>
 879ba39:	90                   	nop
 879ba3a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::DES::encrypt @ 0x879b870

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DES::encrypt(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall yaSSL::DES::encrypt(DES *this,uchar *param_1,uchar *param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  size_t __n;
  uint local_30;
  undefined1 local_2c [28];
  
  piVar1 = *(int **)(this + 4);
  if (piVar1[0xd] == 0) {
    for (uVar2 = param_3 / (uint)piVar1[1]; uVar2 != 0; uVar2 = uVar2 - 1) {
      (**(code **)(*piVar1 + 0xc))(piVar1,param_2,0,param_1);
      param_1 = param_1 + piVar1[1];
      param_2 = param_2 + piVar1[1];
    }
  }
  else if (piVar1[0xd] == 1) {
    if (piVar1[0xc] == 0) {
      local_30 = param_3 / (uint)piVar1[1];
      if (local_30 != 0) {
        uVar2 = piVar1[1];
        do {
          TaoCrypt::xorbuf((uchar *)piVar1[2],param_2,uVar2);
          (**(code **)(*piVar1 + 0xc))(piVar1,piVar1[2],0,piVar1[2]);
          memcpy(param_1,(void *)piVar1[2],piVar1[1]);
          uVar2 = piVar1[1];
          param_1 = param_1 + uVar2;
          param_2 = param_2 + uVar2;
          local_30 = local_30 - 1;
        } while (local_30 != 0);
      }
    }
    else {
      local_30 = param_3 / (uint)piVar1[1];
      if (local_30 != 0) {
        __n = piVar1[1];
        do {
          memcpy((void *)piVar1[3],param_2,__n);
          (**(code **)(*piVar1 + 0xc))(piVar1,piVar1[3],0,param_1);
          TaoCrypt::xorbuf(param_1,(uchar *)piVar1[2],piVar1[1]);
          memcpy(local_2c,(void *)piVar1[2],piVar1[1]);
          memcpy((void *)piVar1[2],(void *)piVar1[3],piVar1[1]);
          memcpy((void *)piVar1[3],local_2c,piVar1[1]);
          __n = piVar1[1];
          param_1 = param_1 + __n;
          param_2 = param_2 + __n;
          local_30 = local_30 - 1;
        } while (local_30 != 0);
      }
    }
  }
  return;
}

```

---

## set_decryptKey

```asm
// === 08799450 yaSSL::DES::set_decryptKey  [0x08799450-0x87994bf] ===
 8799450:	55                   	push   %ebp
 8799451:	89 e5                	mov    %esp,%ebp
 8799453:	83 ec 18             	sub    $0x18,%esp
 8799456:	8b 45 08             	mov    0x8(%ebp),%eax
 8799459:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 879945c:	e8 97 99 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8799461:	81 c3 37 37 bd 00    	add    $0xbd3737,%ebx
 8799467:	89 75 fc             	mov    %esi,-0x4(%ebp)
 879946a:	8b 70 04             	mov    0x4(%eax),%esi
 879946d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8799470:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8799477:	00 
 8799478:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 879947f:	00 
 8799480:	89 44 24 04          	mov    %eax,0x4(%esp)
 8799484:	8d 86 f0 00 00 00    	lea    0xf0(%esi),%eax
 879948a:	89 04 24             	mov    %eax,(%esp)
 879948d:	e8 7e e5 00 00       	call   87a7a10 <_ZN8TaoCrypt8BasicDES6SetKeyEPKhjNS_9CipherDirE>
 8799492:	8b 96 bc 00 00 00    	mov    0xbc(%esi),%edx
 8799498:	8b 86 c0 00 00 00    	mov    0xc0(%esi),%eax
 879949e:	89 54 24 08          	mov    %edx,0x8(%esp)
 87994a2:	8b 55 10             	mov    0x10(%ebp),%edx
 87994a5:	89 04 24             	mov    %eax,(%esp)
 87994a8:	89 54 24 04          	mov    %edx,0x4(%esp)
 87994ac:	e8 ef 43 8e ff       	call   807d8a0 <memcpy@plt>
 87994b1:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87994b4:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87994b7:	89 ec                	mov    %ebp,%esp
 87994b9:	5d                   	pop    %ebp
 87994ba:	c3                   	ret
 87994bb:	90                   	nop
 87994bc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::DES::set_decryptKey @ 0x8799450

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DES::set_decryptKey(unsigned char const*, unsigned char const*) */

void __thiscall yaSSL::DES::set_decryptKey(DES *this,uchar *param_1,uchar *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 4);
  TaoCrypt::BasicDES::SetKey((BasicDES *)(iVar1 + 0xf0),param_1,8,1);
  memcpy(*(void **)(iVar1 + 0xc0),param_2,*(size_t *)(iVar1 + 0xbc));
  return;
}

```

---

## set_encryptKey

```asm
// === 087994c0 yaSSL::DES::set_encryptKey  [0x087994c0-0x879952f] ===
 87994c0:	55                   	push   %ebp
 87994c1:	89 e5                	mov    %esp,%ebp
 87994c3:	83 ec 18             	sub    $0x18,%esp
 87994c6:	8b 45 08             	mov    0x8(%ebp),%eax
 87994c9:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87994cc:	e8 27 99 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87994d1:	81 c3 c7 36 bd 00    	add    $0xbd36c7,%ebx
 87994d7:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87994da:	8b 70 04             	mov    0x4(%eax),%esi
 87994dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 87994e0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87994e7:	00 
 87994e8:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 87994ef:	00 
 87994f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 87994f4:	8d 46 38             	lea    0x38(%esi),%eax
 87994f7:	89 04 24             	mov    %eax,(%esp)
 87994fa:	e8 11 e5 00 00       	call   87a7a10 <_ZN8TaoCrypt8BasicDES6SetKeyEPKhjNS_9CipherDirE>
 87994ff:	8b 56 04             	mov    0x4(%esi),%edx
 8799502:	8b 46 08             	mov    0x8(%esi),%eax
 8799505:	89 54 24 08          	mov    %edx,0x8(%esp)
 8799509:	8b 55 10             	mov    0x10(%ebp),%edx
 879950c:	89 04 24             	mov    %eax,(%esp)
 879950f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8799513:	e8 88 43 8e ff       	call   807d8a0 <memcpy@plt>
 8799518:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 879951b:	8b 75 fc             	mov    -0x4(%ebp),%esi
 879951e:	89 ec                	mov    %ebp,%esp
 8799520:	5d                   	pop    %ebp
 8799521:	c3                   	ret
 8799522:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8799529:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::DES::set_encryptKey @ 0x87994c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DES::set_encryptKey(unsigned char const*, unsigned char const*) */

void __thiscall yaSSL::DES::set_encryptKey(DES *this,uchar *param_1,uchar *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 4);
  TaoCrypt::BasicDES::SetKey((BasicDES *)(iVar1 + 0x38),param_1,8,0);
  memcpy(*(void **)(iVar1 + 8),param_2,*(size_t *)(iVar1 + 4));
  return;
}

```

---

## ~DES

```asm
// === 087989e0 yaSSL::DES::~DES  [0x087989e0-0x8798a3f] ===
 87989e0:	55                   	push   %ebp
 87989e1:	89 e5                	mov    %esp,%ebp
 87989e3:	83 ec 18             	sub    $0x18,%esp
 87989e6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87989e9:	e8 0a a4 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87989ee:	81 c3 aa 41 bd 00    	add    $0xbd41aa,%ebx
 87989f4:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87989f7:	8b 75 08             	mov    0x8(%ebp),%esi
 87989fa:	8b 83 3c fa ff ff    	mov    -0x5c4(%ebx),%eax
 8798a00:	83 c0 08             	add    $0x8,%eax
 8798a03:	89 06                	mov    %eax,(%esi)
 8798a05:	8b 46 04             	mov    0x4(%esi),%eax
 8798a08:	85 c0                	test   %eax,%eax
 8798a0a:	74 11                	je     8798a1d <_ZN5yaSSL3DESD1Ev+0x3d>
 8798a0c:	8b 93 8c fb ff ff    	mov    -0x474(%ebx),%edx
 8798a12:	83 c2 08             	add    $0x8,%edx
 8798a15:	89 90 b8 00 00 00    	mov    %edx,0xb8(%eax)
 8798a1b:	89 10                	mov    %edx,(%eax)
 8798a1d:	89 04 24             	mov    %eax,(%esp)
 8798a20:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8798a25:	e8 f6 7d fb ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 8798a2a:	8b 83 e0 fa ff ff    	mov    -0x520(%ebx),%eax
 8798a30:	83 c0 08             	add    $0x8,%eax
 8798a33:	89 06                	mov    %eax,(%esi)
 8798a35:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8798a38:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8798a3b:	89 ec                	mov    %ebp,%esp
 8798a3d:	5d                   	pop    %ebp
 8798a3e:	c3                   	ret
 8798a3f:	90                   	nop

```

```c
// yaSSL::DES::~DES @ 0x87989e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DES::~DES() */

void __thiscall yaSSL::DES::~DES(DES *this)

{
  undefined4 *puVar1;
  undefined *puVar2;
  
  *(undefined **)this = PTR_vtable_0936c5d4 + 8;
  puVar1 = *(undefined4 **)(this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = PTR_vtable_0936c724 + 8;
    puVar1[0x2e] = puVar2;
    *puVar1 = puVar2;
  }
  operator_delete(puVar1,0);
  *(undefined **)this = PTR_vtable_0936c678 + 8;
  return;
}

```

---

## ~DES_08798a40

```asm
// === 08798a40 yaSSL::DES::~DES  [0x08798a40-0x8798a6f] ===
 8798a40:	55                   	push   %ebp
 8798a41:	89 e5                	mov    %esp,%ebp
 8798a43:	53                   	push   %ebx
 8798a44:	e8 af a3 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8798a49:	81 c3 4f 41 bd 00    	add    $0xbd414f,%ebx
 8798a4f:	83 ec 14             	sub    $0x14,%esp
 8798a52:	8b 45 08             	mov    0x8(%ebp),%eax
 8798a55:	89 04 24             	mov    %eax,(%esp)
 8798a58:	e8 83 ff ff ff       	call   87989e0 <_ZN5yaSSL3DESD1Ev>
 8798a5d:	83 c4 14             	add    $0x14,%esp
 8798a60:	5b                   	pop    %ebx
 8798a61:	5d                   	pop    %ebp
 8798a62:	c3                   	ret
 8798a63:	90                   	nop
 8798a64:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8798a6a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::DES::~DES @ 0x8798a40

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DES::~DES() */

void __thiscall yaSSL::DES::~DES(DES *this)

{
  ~DES(this);
  return;
}

```

