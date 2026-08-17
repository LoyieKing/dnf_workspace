# STItemScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## Clear

```asm
// === 0898d718 STItemScript::Clear  [0x0898d718-0x898db29] ===
 898d718:	55                   	push   %ebp
 898d719:	89 e5                	mov    %esp,%ebp
 898d71b:	83 ec 38             	sub    $0x38,%esp
 898d71e:	8b 45 08             	mov    0x8(%ebp),%eax
 898d721:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 898d727:	8b 45 08             	mov    0x8(%ebp),%eax
 898d72a:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
 898d731:	8b 45 08             	mov    0x8(%ebp),%eax
 898d734:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 898d73b:	8b 45 08             	mov    0x8(%ebp),%eax
 898d73e:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 898d745:	8b 45 08             	mov    0x8(%ebp),%eax
 898d748:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 898d74f:	8b 45 08             	mov    0x8(%ebp),%eax
 898d752:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 898d759:	8b 45 08             	mov    0x8(%ebp),%eax
 898d75c:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 898d763:	8b 45 08             	mov    0x8(%ebp),%eax
 898d766:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 898d76d:	8b 45 08             	mov    0x8(%ebp),%eax
 898d770:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 898d777:	8b 45 08             	mov    0x8(%ebp),%eax
 898d77a:	c7 40 24 ff ff ff ff 	movl   $0xffffffff,0x24(%eax)
 898d781:	8b 45 08             	mov    0x8(%ebp),%eax
 898d784:	c7 40 28 ff ff ff ff 	movl   $0xffffffff,0x28(%eax)
 898d78b:	8b 45 08             	mov    0x8(%ebp),%eax
 898d78e:	c7 40 2c 00 00 00 00 	movl   $0x0,0x2c(%eax)
 898d795:	8b 45 08             	mov    0x8(%ebp),%eax
 898d798:	c6 40 30 00          	movb   $0x0,0x30(%eax)
 898d79c:	8b 45 08             	mov    0x8(%ebp),%eax
 898d79f:	c6 40 31 00          	movb   $0x0,0x31(%eax)
 898d7a3:	8b 45 08             	mov    0x8(%ebp),%eax
 898d7a6:	c7 40 34 00 00 00 00 	movl   $0x0,0x34(%eax)
 898d7ad:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 898d7b4:	eb 0f                	jmp    898d7c5 <_ZN12STItemScript5ClearEv+0xad>
 898d7b6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 898d7b9:	8b 55 08             	mov    0x8(%ebp),%edx
 898d7bc:	c6 44 02 38 00       	movb   $0x0,0x38(%edx,%eax,1)
 898d7c1:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 898d7c5:	83 7d f4 0a          	cmpl   $0xa,-0xc(%ebp)
 898d7c9:	0f 9e c0             	setle  %al
 898d7cc:	84 c0                	test   %al,%al
 898d7ce:	75 e6                	jne    898d7b6 <_ZN12STItemScript5ClearEv+0x9e>
 898d7d0:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 898d7d7:	eb 28                	jmp    898d801 <_ZN12STItemScript5ClearEv+0xe9>
 898d7d9:	8b 45 08             	mov    0x8(%ebp),%eax
 898d7dc:	8d 48 44             	lea    0x44(%eax),%ecx
 898d7df:	8d 45 e0             	lea    -0x20(%ebp),%eax
 898d7e2:	8d 55 dc             	lea    -0x24(%ebp),%edx
 898d7e5:	89 54 24 08          	mov    %edx,0x8(%esp)
 898d7e9:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 898d7ed:	89 04 24             	mov    %eax,(%esp)
 898d7f0:	e8 d1 cd 74 ff       	call   80da5c6 <_ZNSt3setIiSt4lessIiESaIiEE6insertERKi>
 898d7f5:	83 ec 04             	sub    $0x4,%esp
 898d7f8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 898d7fb:	83 c0 01             	add    $0x1,%eax
 898d7fe:	89 45 dc             	mov    %eax,-0x24(%ebp)
 898d801:	8b 45 dc             	mov    -0x24(%ebp),%eax
 898d804:	83 f8 0a             	cmp    $0xa,%eax
 898d807:	0f 9e c0             	setle  %al
 898d80a:	84 c0                	test   %al,%al
 898d80c:	75 cb                	jne    898d7d9 <_ZN12STItemScript5ClearEv+0xc1>
 898d80e:	8b 45 08             	mov    0x8(%ebp),%eax
 898d811:	c7 40 5c 00 00 00 00 	movl   $0x0,0x5c(%eax)
 898d818:	8b 45 08             	mov    0x8(%ebp),%eax
 898d81b:	c7 40 60 00 00 00 00 	movl   $0x0,0x60(%eax)
 898d822:	8b 45 08             	mov    0x8(%ebp),%eax
 898d825:	c7 40 64 00 00 00 00 	movl   $0x0,0x64(%eax)
 898d82c:	8b 45 08             	mov    0x8(%ebp),%eax
 898d82f:	c7 40 68 00 00 00 00 	movl   $0x0,0x68(%eax)
 898d836:	8b 45 08             	mov    0x8(%ebp),%eax
 898d839:	83 c0 6c             	add    $0x6c,%eax
 898d83c:	c7 44 24 04 80 5e e1 	movl   $0x8e15e80,0x4(%esp)
 898d843:	08 
 898d844:	89 04 24             	mov    %eax,(%esp)
 898d847:	e8 d4 ae d7 ff       	call   8708720 <_ZNSsaSEPKc>
 898d84c:	8b 45 08             	mov    0x8(%ebp),%eax
 898d84f:	c7 40 70 00 00 00 00 	movl   $0x0,0x70(%eax)
 898d856:	8b 45 08             	mov    0x8(%ebp),%eax
 898d859:	83 c0 74             	add    $0x74,%eax
 898d85c:	c7 44 24 04 80 5e e1 	movl   $0x8e15e80,0x4(%esp)
 898d863:	08 
 898d864:	89 04 24             	mov    %eax,(%esp)
 898d867:	e8 b4 ae d7 ff       	call   8708720 <_ZNSsaSEPKc>
 898d86c:	8b 45 08             	mov    0x8(%ebp),%eax
 898d86f:	c7 40 78 00 00 00 00 	movl   $0x0,0x78(%eax)
 898d876:	8b 45 08             	mov    0x8(%ebp),%eax
 898d879:	05 84 00 00 00       	add    $0x84,%eax
 898d87e:	c7 44 24 04 80 5e e1 	movl   $0x8e15e80,0x4(%esp)
 898d885:	08 
 898d886:	89 04 24             	mov    %eax,(%esp)
 898d889:	e8 92 ae d7 ff       	call   8708720 <_ZNSsaSEPKc>
 898d88e:	8b 45 08             	mov    0x8(%ebp),%eax
 898d891:	05 88 00 00 00       	add    $0x88,%eax
 898d896:	89 04 24             	mov    %eax,(%esp)
 898d899:	e8 d0 92 70 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 898d89e:	8b 45 08             	mov    0x8(%ebp),%eax
 898d8a1:	05 94 00 00 00       	add    $0x94,%eax
 898d8a6:	89 04 24             	mov    %eax,(%esp)
 898d8a9:	e8 1a 3e 9b ff       	call   83416c8 <_ZNSt6vectorISsSaISsEE5clearEv>
 898d8ae:	8b 45 08             	mov    0x8(%ebp),%eax
 898d8b1:	c6 80 a0 00 00 00 00 	movb   $0x0,0xa0(%eax)
 898d8b8:	8b 45 08             	mov    0x8(%ebp),%eax
 898d8bb:	c7 80 a4 00 00 00 00 	movl   $0x0,0xa4(%eax)
 898d8c2:	00 00 00 
 898d8c5:	8b 45 08             	mov    0x8(%ebp),%eax
 898d8c8:	c7 80 a8 00 00 00 ff 	movl   $0xffffffff,0xa8(%eax)
 898d8cf:	ff ff ff 
 898d8d2:	8b 45 08             	mov    0x8(%ebp),%eax
 898d8d5:	05 ac 00 00 00       	add    $0xac,%eax
 898d8da:	c7 44 24 04 80 5e e1 	movl   $0x8e15e80,0x4(%esp)
 898d8e1:	08 
 898d8e2:	89 04 24             	mov    %eax,(%esp)
 898d8e5:	e8 36 ae d7 ff       	call   8708720 <_ZNSsaSEPKc>
 898d8ea:	8b 45 08             	mov    0x8(%ebp),%eax
 898d8ed:	05 b0 00 00 00       	add    $0xb0,%eax
 898d8f2:	c7 44 24 04 80 5e e1 	movl   $0x8e15e80,0x4(%esp)
 898d8f9:	08 
 898d8fa:	89 04 24             	mov    %eax,(%esp)
 898d8fd:	e8 1e ae d7 ff       	call   8708720 <_ZNSsaSEPKc>
 898d902:	8b 45 08             	mov    0x8(%ebp),%eax
 898d905:	05 b4 00 00 00       	add    $0xb4,%eax
 898d90a:	c7 44 24 04 80 5e e1 	movl   $0x8e15e80,0x4(%esp)
 898d911:	08 
 898d912:	89 04 24             	mov    %eax,(%esp)
 898d915:	e8 06 ae d7 ff       	call   8708720 <_ZNSsaSEPKc>
 898d91a:	8b 45 08             	mov    0x8(%ebp),%eax
 898d91d:	05 b8 00 00 00       	add    $0xb8,%eax
 898d922:	c7 44 24 04 80 5e e1 	movl   $0x8e15e80,0x4(%esp)
 898d929:	08 
 898d92a:	89 04 24             	mov    %eax,(%esp)
 898d92d:	e8 ee ad d7 ff       	call   8708720 <_ZNSsaSEPKc>
 898d932:	8b 45 08             	mov    0x8(%ebp),%eax
 898d935:	05 bc 00 00 00       	add    $0xbc,%eax
 898d93a:	c7 44 24 04 80 5e e1 	movl   $0x8e15e80,0x4(%esp)
 898d941:	08 
 898d942:	89 04 24             	mov    %eax,(%esp)
 898d945:	e8 d6 ad d7 ff       	call   8708720 <_ZNSsaSEPKc>
 898d94a:	8b 45 08             	mov    0x8(%ebp),%eax
 898d94d:	05 c0 00 00 00       	add    $0xc0,%eax
 898d952:	c7 44 24 04 80 5e e1 	movl   $0x8e15e80,0x4(%esp)
 898d959:	08 
 898d95a:	89 04 24             	mov    %eax,(%esp)
 898d95d:	e8 be ad d7 ff       	call   8708720 <_ZNSsaSEPKc>
 898d962:	8b 45 08             	mov    0x8(%ebp),%eax
 898d965:	c7 80 c4 00 00 00 ff 	movl   $0xffffffff,0xc4(%eax)
 898d96c:	ff ff ff 
 898d96f:	8b 45 08             	mov    0x8(%ebp),%eax
 898d972:	c7 80 c8 00 00 00 00 	movl   $0x0,0xc8(%eax)
 898d979:	00 00 00 
 898d97c:	8b 45 08             	mov    0x8(%ebp),%eax
 898d97f:	c7 80 cc 00 00 00 00 	movl   $0x0,0xcc(%eax)
 898d986:	00 00 00 
 898d989:	8b 45 08             	mov    0x8(%ebp),%eax
 898d98c:	c6 80 d0 00 00 00 00 	movb   $0x0,0xd0(%eax)
 898d993:	8b 45 08             	mov    0x8(%ebp),%eax
 898d996:	c6 80 da 00 00 00 00 	movb   $0x0,0xda(%eax)
 898d99d:	8b 45 08             	mov    0x8(%ebp),%eax
 898d9a0:	c6 80 d9 00 00 00 00 	movb   $0x0,0xd9(%eax)
 898d9a7:	8b 45 08             	mov    0x8(%ebp),%eax
 898d9aa:	c6 80 d1 00 00 00 00 	movb   $0x0,0xd1(%eax)
 898d9b1:	8b 45 08             	mov    0x8(%ebp),%eax
 898d9b4:	05 dc 00 00 00       	add    $0xdc,%eax
 898d9b9:	89 04 24             	mov    %eax,(%esp)
 898d9bc:	e8 95 ca 74 ff       	call   80da456 <_ZNSt3setIiSt4lessIiESaIiEE5clearEv>
 898d9c1:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 898d9c8:	8b 45 08             	mov    0x8(%ebp),%eax
 898d9cb:	8d 88 dc 00 00 00    	lea    0xdc(%eax),%ecx
 898d9d1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 898d9d4:	8d 55 f0             	lea    -0x10(%ebp),%edx
 898d9d7:	89 54 24 08          	mov    %edx,0x8(%esp)
 898d9db:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 898d9df:	89 04 24             	mov    %eax,(%esp)
 898d9e2:	e8 df cb 74 ff       	call   80da5c6 <_ZNSt3setIiSt4lessIiESaIiEE6insertERKi>
 898d9e7:	83 ec 04             	sub    $0x4,%esp
 898d9ea:	8b 45 08             	mov    0x8(%ebp),%eax
 898d9ed:	c7 80 f4 00 00 00 00 	movl   $0x0,0xf4(%eax)
 898d9f4:	00 00 00 
 898d9f7:	8b 45 08             	mov    0x8(%ebp),%eax
 898d9fa:	c7 80 f8 00 00 00 00 	movl   $0x0,0xf8(%eax)
 898da01:	00 00 00 
 898da04:	8b 45 08             	mov    0x8(%ebp),%eax
 898da07:	c6 80 fc 00 00 00 01 	movb   $0x1,0xfc(%eax)
 898da0e:	8b 45 08             	mov    0x8(%ebp),%eax
 898da11:	c7 80 00 01 00 00 00 	movl   $0x0,0x100(%eax)
 898da18:	00 00 00 
 898da1b:	8b 45 08             	mov    0x8(%ebp),%eax
 898da1e:	c6 80 04 01 00 00 01 	movb   $0x1,0x104(%eax)
 898da25:	8b 45 08             	mov    0x8(%ebp),%eax
 898da28:	c6 80 0e 01 00 00 00 	movb   $0x0,0x10e(%eax)
 898da2f:	8b 45 08             	mov    0x8(%ebp),%eax
 898da32:	c6 80 0f 01 00 00 00 	movb   $0x0,0x10f(%eax)
 898da39:	8b 45 08             	mov    0x8(%ebp),%eax
 898da3c:	05 10 01 00 00       	add    $0x110,%eax
 898da41:	89 04 24             	mov    %eax,(%esp)
 898da44:	e8 f9 c8 7e ff       	call   817a342 <_ZNSt6vectorISt4pairIiiESaIS1_EE5clearEv>
 898da49:	8b 45 08             	mov    0x8(%ebp),%eax
 898da4c:	05 1c 01 00 00       	add    $0x11c,%eax
 898da51:	89 04 24             	mov    %eax,(%esp)
 898da54:	e8 9f 79 03 00       	call   89c53f8 <_ZNSt3setIN12STItemScript18ENUM_ITEM_CATEGORYESt4lessIS1_ESaIS1_EE5clearEv>
 898da59:	8b 45 08             	mov    0x8(%ebp),%eax
 898da5c:	66 c7 80 34 01 00 00 	movw   $0x0,0x134(%eax)
 898da63:	00 00 
 898da65:	8b 45 08             	mov    0x8(%ebp),%eax
 898da68:	ba 00 00 00 00       	mov    $0x0,%edx
 898da6d:	89 90 50 01 00 00    	mov    %edx,0x150(%eax)
 898da73:	8b 45 08             	mov    0x8(%ebp),%eax
 898da76:	ba 00 00 00 00       	mov    $0x0,%edx
 898da7b:	89 90 54 01 00 00    	mov    %edx,0x154(%eax)
 898da81:	8b 45 08             	mov    0x8(%ebp),%eax
 898da84:	05 58 01 00 00       	add    $0x158,%eax
 898da89:	89 04 24             	mov    %eax,(%esp)
 898da8c:	e8 21 91 b8 ff       	call   8516bb2 <_ZNSt6vectorIN12STItemScript10SEXPERTJOB7SUSABLEESaIS2_EE5clearEv>
 898da91:	8b 45 08             	mov    0x8(%ebp),%eax
 898da94:	ba 00 00 00 00       	mov    $0x0,%edx
 898da99:	89 90 3c 01 00 00    	mov    %edx,0x13c(%eax)
 898da9f:	8b 45 08             	mov    0x8(%ebp),%eax
 898daa2:	ba 00 00 00 00       	mov    $0x0,%edx
 898daa7:	89 90 38 01 00 00    	mov    %edx,0x138(%eax)
 898daad:	8b 45 08             	mov    0x8(%ebp),%eax
 898dab0:	ba 00 00 00 00       	mov    $0x0,%edx
 898dab5:	89 90 40 01 00 00    	mov    %edx,0x140(%eax)
 898dabb:	8b 45 08             	mov    0x8(%ebp),%eax
 898dabe:	c7 80 44 01 00 00 00 	movl   $0x0,0x144(%eax)
 898dac5:	00 00 00 
 898dac8:	8b 45 08             	mov    0x8(%ebp),%eax
 898dacb:	ba 00 00 00 00       	mov    $0x0,%edx
 898dad0:	89 90 48 01 00 00    	mov    %edx,0x148(%eax)
 898dad6:	8b 45 08             	mov    0x8(%ebp),%eax
 898dad9:	ba 00 00 00 00       	mov    $0x0,%edx
 898dade:	89 90 4c 01 00 00    	mov    %edx,0x14c(%eax)
 898dae4:	8b 45 08             	mov    0x8(%ebp),%eax
 898dae7:	c7 80 d4 00 00 00 00 	movl   $0x0,0xd4(%eax)
 898daee:	00 00 00 
 898daf1:	8b 45 08             	mov    0x8(%ebp),%eax
 898daf4:	c7 80 80 00 00 00 00 	movl   $0x0,0x80(%eax)
 898dafb:	00 00 00 
 898dafe:	8b 45 08             	mov    0x8(%ebp),%eax
 898db01:	05 64 01 00 00       	add    $0x164,%eax
 898db06:	89 04 24             	mov    %eax,(%esp)
 898db09:	e8 00 60 b8 ff       	call   8513b0e <_ZN7DyeInfo5clearEv>
 898db0e:	8b 45 08             	mov    0x8(%ebp),%eax
 898db11:	05 74 01 00 00       	add    $0x174,%eax
 898db16:	89 04 24             	mov    %eax,(%esp)
 898db19:	e8 b2 b2 d7 ff       	call   8708dd0 <_ZNSs5clearEv>
 898db1e:	8b 45 08             	mov    0x8(%ebp),%eax
 898db21:	c6 80 d8 00 00 00 00 	movb   $0x0,0xd8(%eax)
 898db28:	c9                   	leave
 898db29:	c3                   	ret

```

```c
// STItemScript::Clear @ 0x898d718

/* STItemScript::Clear() */

void __thiscall STItemScript::Clear(STItemScript *this)

{
  int local_28;
  int local_24 [2];
  int local_1c [2];
  undefined4 local_14;
  int local_10;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0xffffffff;
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  *(undefined4 *)(this + 0x2c) = 0;
  this[0x30] = (STItemScript)0x0;
  this[0x31] = (STItemScript)0x0;
  *(undefined4 *)(this + 0x34) = 0;
  for (local_10 = 0; local_10 < 0xb; local_10 = local_10 + 1) {
    this[local_10 + 0x38] = (STItemScript)0x0;
  }
  for (local_28 = 0; local_28 < 0xb; local_28 = local_28 + 1) {
    std::set<int,std::less<int>,std::allocator<int>>::insert(local_24);
  }
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  std::string::operator=((string *)(this + 0x6c),"");
  *(undefined4 *)(this + 0x70) = 0;
  std::string::operator=((string *)(this + 0x74),"");
  *(undefined4 *)(this + 0x78) = 0;
  std::string::operator=((string *)(this + 0x84),"");
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x88));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x94));
  this[0xa0] = (STItemScript)0x0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0xffffffff;
  std::string::operator=((string *)(this + 0xac),"");
  std::string::operator=((string *)(this + 0xb0),"");
  std::string::operator=((string *)(this + 0xb4),"");
  std::string::operator=((string *)(this + 0xb8),"");
  std::string::operator=((string *)(this + 0xbc),"");
  std::string::operator=((string *)(this + 0xc0),"");
  *(undefined4 *)(this + 0xc4) = 0xffffffff;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  this[0xd0] = (STItemScript)0x0;
  this[0xda] = (STItemScript)0x0;
  this[0xd9] = (STItemScript)0x0;
  this[0xd1] = (STItemScript)0x0;
  std::set<int,std::less<int>,std::allocator<int>>::clear
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0xdc));
  local_14 = 0;
  std::set<int,std::less<int>,std::allocator<int>>::insert(local_1c);
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  this[0xfc] = (STItemScript)0x1;
  *(undefined4 *)(this + 0x100) = 0;
  this[0x104] = (STItemScript)0x1;
  this[0x10e] = (STItemScript)0x0;
  this[0x10f] = (STItemScript)0x0;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x110));
  std::
  set<STItemScript::ENUM_ITEM_CATEGORY,std::less<STItemScript::ENUM_ITEM_CATEGORY>,std::allocator<STItemScript::ENUM_ITEM_CATEGORY>>
  ::clear((set<STItemScript::ENUM_ITEM_CATEGORY,std::less<STItemScript::ENUM_ITEM_CATEGORY>,std::allocator<STItemScript::ENUM_ITEM_CATEGORY>>
           *)(this + 0x11c));
  *(undefined2 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x154) = 0;
  std::vector<STItemScript::SEXPERTJOB::SUSABLE,std::allocator<STItemScript::SEXPERTJOB::SUSABLE>>::
  clear((vector<STItemScript::SEXPERTJOB::SUSABLE,std::allocator<STItemScript::SEXPERTJOB::SUSABLE>>
         *)(this + 0x158));
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  DyeInfo::clear((DyeInfo *)(this + 0x164));
  std::string::clear((string *)(this + 0x174));
  this[0xd8] = (STItemScript)0x0;
  return;
}

```

---

## STItemScript

```asm
// === 0898d3c6 STItemScript::STItemScript  [0x0898d3c6-0x898d717] ===
 898d3c6:	55                   	push   %ebp
 898d3c7:	89 e5                	mov    %esp,%ebp
 898d3c9:	56                   	push   %esi
 898d3ca:	53                   	push   %ebx
 898d3cb:	83 ec 10             	sub    $0x10,%esp
 898d3ce:	8b 45 08             	mov    0x8(%ebp),%eax
 898d3d1:	83 c0 28             	add    $0x28,%eax
 898d3d4:	89 04 24             	mov    %eax,(%esp)
 898d3d7:	e8 b2 88 82 ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 898d3dc:	8b 45 08             	mov    0x8(%ebp),%eax
 898d3df:	83 c0 44             	add    $0x44,%eax
 898d3e2:	89 04 24             	mov    %eax,(%esp)
 898d3e5:	e8 f2 cf 74 ff       	call   80da3dc <_ZNSt3setIiSt4lessIiESaIiEEC1Ev>
 898d3ea:	8b 45 08             	mov    0x8(%ebp),%eax
 898d3ed:	83 c0 6c             	add    $0x6c,%eax
 898d3f0:	89 04 24             	mov    %eax,(%esp)
 898d3f3:	e8 d8 91 d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898d3f8:	8b 45 08             	mov    0x8(%ebp),%eax
 898d3fb:	83 c0 74             	add    $0x74,%eax
 898d3fe:	89 04 24             	mov    %eax,(%esp)
 898d401:	e8 ca 91 d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898d406:	8b 45 08             	mov    0x8(%ebp),%eax
 898d409:	83 c0 7c             	add    $0x7c,%eax
 898d40c:	89 04 24             	mov    %eax,(%esp)
 898d40f:	e8 bc 91 d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898d414:	8b 45 08             	mov    0x8(%ebp),%eax
 898d417:	05 84 00 00 00       	add    $0x84,%eax
 898d41c:	89 04 24             	mov    %eax,(%esp)
 898d41f:	e8 ac 91 d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898d424:	8b 45 08             	mov    0x8(%ebp),%eax
 898d427:	05 88 00 00 00       	add    $0x88,%eax
 898d42c:	89 04 24             	mov    %eax,(%esp)
 898d42f:	e8 78 0d 70 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 898d434:	8b 45 08             	mov    0x8(%ebp),%eax
 898d437:	05 94 00 00 00       	add    $0x94,%eax
 898d43c:	89 04 24             	mov    %eax,(%esp)
 898d43f:	e8 1c fb 73 ff       	call   80ccf60 <_ZNSt6vectorISsSaISsEEC1Ev>
 898d444:	8b 45 08             	mov    0x8(%ebp),%eax
 898d447:	05 ac 00 00 00       	add    $0xac,%eax
 898d44c:	89 04 24             	mov    %eax,(%esp)
 898d44f:	e8 7c 91 d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898d454:	8b 45 08             	mov    0x8(%ebp),%eax
 898d457:	05 b0 00 00 00       	add    $0xb0,%eax
 898d45c:	89 04 24             	mov    %eax,(%esp)
 898d45f:	e8 6c 91 d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898d464:	8b 45 08             	mov    0x8(%ebp),%eax
 898d467:	05 b4 00 00 00       	add    $0xb4,%eax
 898d46c:	89 04 24             	mov    %eax,(%esp)
 898d46f:	e8 5c 91 d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898d474:	8b 45 08             	mov    0x8(%ebp),%eax
 898d477:	05 b8 00 00 00       	add    $0xb8,%eax
 898d47c:	89 04 24             	mov    %eax,(%esp)
 898d47f:	e8 4c 91 d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898d484:	8b 45 08             	mov    0x8(%ebp),%eax
 898d487:	05 bc 00 00 00       	add    $0xbc,%eax
 898d48c:	89 04 24             	mov    %eax,(%esp)
 898d48f:	e8 3c 91 d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898d494:	8b 45 08             	mov    0x8(%ebp),%eax
 898d497:	05 c0 00 00 00       	add    $0xc0,%eax
 898d49c:	89 04 24             	mov    %eax,(%esp)
 898d49f:	e8 2c 91 d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898d4a4:	8b 45 08             	mov    0x8(%ebp),%eax
 898d4a7:	05 dc 00 00 00       	add    $0xdc,%eax
 898d4ac:	89 04 24             	mov    %eax,(%esp)
 898d4af:	e8 28 cf 74 ff       	call   80da3dc <_ZNSt3setIiSt4lessIiESaIiEEC1Ev>
 898d4b4:	8b 45 08             	mov    0x8(%ebp),%eax
 898d4b7:	05 05 01 00 00       	add    $0x105,%eax
 898d4bc:	89 04 24             	mov    %eax,(%esp)
 898d4bf:	e8 4c 65 b8 ff       	call   8513a10 <_ZN20STSpecialMonsterDropC1Ev>
 898d4c4:	8b 45 08             	mov    0x8(%ebp),%eax
 898d4c7:	05 10 01 00 00       	add    $0x110,%eax
 898d4cc:	89 04 24             	mov    %eax,(%esp)
 898d4cf:	e8 02 75 7a ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 898d4d4:	8b 45 08             	mov    0x8(%ebp),%eax
 898d4d7:	05 1c 01 00 00       	add    $0x11c,%eax
 898d4dc:	89 04 24             	mov    %eax,(%esp)
 898d4df:	e8 e2 b4 b8 ff       	call   85189c6 <_ZNSt3setIN12STItemScript18ENUM_ITEM_CATEGORYESt4lessIS1_ESaIS1_EEC1Ev>
 898d4e4:	8b 45 08             	mov    0x8(%ebp),%eax
 898d4e7:	05 38 01 00 00       	add    $0x138,%eax
 898d4ec:	89 04 24             	mov    %eax,(%esp)
 898d4ef:	e8 b6 61 03 00       	call   89c36aa <_ZN12STItemScript10SEXPERTJOBC1Ev>
 898d4f4:	8b 45 08             	mov    0x8(%ebp),%eax
 898d4f7:	05 64 01 00 00       	add    $0x164,%eax
 898d4fc:	89 04 24             	mov    %eax,(%esp)
 898d4ff:	e8 c2 65 b8 ff       	call   8513ac6 <_ZN7DyeInfoC1Ev>
 898d504:	8b 45 08             	mov    0x8(%ebp),%eax
 898d507:	05 74 01 00 00       	add    $0x174,%eax
 898d50c:	89 04 24             	mov    %eax,(%esp)
 898d50f:	e8 bc 90 d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898d514:	8b 45 08             	mov    0x8(%ebp),%eax
 898d517:	89 04 24             	mov    %eax,(%esp)
 898d51a:	e8 f9 01 00 00       	call   898d718 <_ZN12STItemScript5ClearEv>
 898d51f:	e9 ec 01 00 00       	jmp    898d710 <_ZN12STItemScriptC1Ev+0x34a>
 898d524:	89 d3                	mov    %edx,%ebx
 898d526:	89 c6                	mov    %eax,%esi
 898d528:	8b 45 08             	mov    0x8(%ebp),%eax
 898d52b:	05 74 01 00 00       	add    $0x174,%eax
 898d530:	89 04 24             	mov    %eax,(%esp)
 898d533:	e8 a8 a6 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898d538:	89 f0                	mov    %esi,%eax
 898d53a:	89 da                	mov    %ebx,%edx
 898d53c:	eb 00                	jmp    898d53e <_ZN12STItemScriptC1Ev+0x178>
 898d53e:	89 d3                	mov    %edx,%ebx
 898d540:	89 c6                	mov    %eax,%esi
 898d542:	8b 45 08             	mov    0x8(%ebp),%eax
 898d545:	05 64 01 00 00       	add    $0x164,%eax
 898d54a:	89 04 24             	mov    %eax,(%esp)
 898d54d:	e8 72 6c b8 ff       	call   85141c4 <_ZN7DyeInfoD1Ev>
 898d552:	89 f0                	mov    %esi,%eax
 898d554:	89 da                	mov    %ebx,%edx
 898d556:	eb 00                	jmp    898d558 <_ZN12STItemScriptC1Ev+0x192>
 898d558:	89 d3                	mov    %edx,%ebx
 898d55a:	89 c6                	mov    %eax,%esi
 898d55c:	8b 45 08             	mov    0x8(%ebp),%eax
 898d55f:	05 38 01 00 00       	add    $0x138,%eax
 898d564:	89 04 24             	mov    %eax,(%esp)
 898d567:	e8 6e 61 03 00       	call   89c36da <_ZN12STItemScript10SEXPERTJOBD1Ev>
 898d56c:	89 f0                	mov    %esi,%eax
 898d56e:	89 da                	mov    %ebx,%edx
 898d570:	eb 00                	jmp    898d572 <_ZN12STItemScriptC1Ev+0x1ac>
 898d572:	89 d3                	mov    %edx,%ebx
 898d574:	89 c6                	mov    %eax,%esi
 898d576:	8b 45 08             	mov    0x8(%ebp),%eax
 898d579:	05 1c 01 00 00       	add    $0x11c,%eax
 898d57e:	89 04 24             	mov    %eax,(%esp)
 898d581:	e8 54 6c b8 ff       	call   85141da <_ZNSt3setIN12STItemScript18ENUM_ITEM_CATEGORYESt4lessIS1_ESaIS1_EED1Ev>
 898d586:	89 f0                	mov    %esi,%eax
 898d588:	89 da                	mov    %ebx,%edx
 898d58a:	eb 00                	jmp    898d58c <_ZN12STItemScriptC1Ev+0x1c6>
 898d58c:	89 d3                	mov    %edx,%ebx
 898d58e:	89 c6                	mov    %eax,%esi
 898d590:	8b 45 08             	mov    0x8(%ebp),%eax
 898d593:	05 10 01 00 00       	add    $0x110,%eax
 898d598:	89 04 24             	mov    %eax,(%esp)
 898d59b:	e8 4a 74 7a ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 898d5a0:	89 f0                	mov    %esi,%eax
 898d5a2:	89 da                	mov    %ebx,%edx
 898d5a4:	eb 00                	jmp    898d5a6 <_ZN12STItemScriptC1Ev+0x1e0>
 898d5a6:	89 d3                	mov    %edx,%ebx
 898d5a8:	89 c6                	mov    %eax,%esi
 898d5aa:	8b 45 08             	mov    0x8(%ebp),%eax
 898d5ad:	05 dc 00 00 00       	add    $0xdc,%eax
 898d5b2:	89 04 24             	mov    %eax,(%esp)
 898d5b5:	e8 7a c9 74 ff       	call   80d9f34 <_ZNSt3setIiSt4lessIiESaIiEED1Ev>
 898d5ba:	89 f0                	mov    %esi,%eax
 898d5bc:	89 da                	mov    %ebx,%edx
 898d5be:	eb 00                	jmp    898d5c0 <_ZN12STItemScriptC1Ev+0x1fa>
 898d5c0:	89 d3                	mov    %edx,%ebx
 898d5c2:	89 c6                	mov    %eax,%esi
 898d5c4:	8b 45 08             	mov    0x8(%ebp),%eax
 898d5c7:	05 c0 00 00 00       	add    $0xc0,%eax
 898d5cc:	89 04 24             	mov    %eax,(%esp)
 898d5cf:	e8 0c a6 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898d5d4:	89 f0                	mov    %esi,%eax
 898d5d6:	89 da                	mov    %ebx,%edx
 898d5d8:	eb 00                	jmp    898d5da <_ZN12STItemScriptC1Ev+0x214>
 898d5da:	89 d3                	mov    %edx,%ebx
 898d5dc:	89 c6                	mov    %eax,%esi
 898d5de:	8b 45 08             	mov    0x8(%ebp),%eax
 898d5e1:	05 bc 00 00 00       	add    $0xbc,%eax
 898d5e6:	89 04 24             	mov    %eax,(%esp)
 898d5e9:	e8 f2 a5 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898d5ee:	89 f0                	mov    %esi,%eax
 898d5f0:	89 da                	mov    %ebx,%edx
 898d5f2:	eb 00                	jmp    898d5f4 <_ZN12STItemScriptC1Ev+0x22e>
 898d5f4:	89 d3                	mov    %edx,%ebx
 898d5f6:	89 c6                	mov    %eax,%esi
 898d5f8:	8b 45 08             	mov    0x8(%ebp),%eax
 898d5fb:	05 b8 00 00 00       	add    $0xb8,%eax
 898d600:	89 04 24             	mov    %eax,(%esp)
 898d603:	e8 d8 a5 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898d608:	89 f0                	mov    %esi,%eax
 898d60a:	89 da                	mov    %ebx,%edx
 898d60c:	eb 00                	jmp    898d60e <_ZN12STItemScriptC1Ev+0x248>
 898d60e:	89 d3                	mov    %edx,%ebx
 898d610:	89 c6                	mov    %eax,%esi
 898d612:	8b 45 08             	mov    0x8(%ebp),%eax
 898d615:	05 b4 00 00 00       	add    $0xb4,%eax
 898d61a:	89 04 24             	mov    %eax,(%esp)
 898d61d:	e8 be a5 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898d622:	89 f0                	mov    %esi,%eax
 898d624:	89 da                	mov    %ebx,%edx
 898d626:	eb 00                	jmp    898d628 <_ZN12STItemScriptC1Ev+0x262>
 898d628:	89 d3                	mov    %edx,%ebx
 898d62a:	89 c6                	mov    %eax,%esi
 898d62c:	8b 45 08             	mov    0x8(%ebp),%eax
 898d62f:	05 b0 00 00 00       	add    $0xb0,%eax
 898d634:	89 04 24             	mov    %eax,(%esp)
 898d637:	e8 a4 a5 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898d63c:	89 f0                	mov    %esi,%eax
 898d63e:	89 da                	mov    %ebx,%edx
 898d640:	eb 00                	jmp    898d642 <_ZN12STItemScriptC1Ev+0x27c>
 898d642:	89 d3                	mov    %edx,%ebx
 898d644:	89 c6                	mov    %eax,%esi
 898d646:	8b 45 08             	mov    0x8(%ebp),%eax
 898d649:	05 ac 00 00 00       	add    $0xac,%eax
 898d64e:	89 04 24             	mov    %eax,(%esp)
 898d651:	e8 8a a5 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898d656:	89 f0                	mov    %esi,%eax
 898d658:	89 da                	mov    %ebx,%edx
 898d65a:	eb 00                	jmp    898d65c <_ZN12STItemScriptC1Ev+0x296>
 898d65c:	89 d3                	mov    %edx,%ebx
 898d65e:	89 c6                	mov    %eax,%esi
 898d660:	8b 45 08             	mov    0x8(%ebp),%eax
 898d663:	05 94 00 00 00       	add    $0x94,%eax
 898d668:	89 04 24             	mov    %eax,(%esp)
 898d66b:	e8 04 f9 73 ff       	call   80ccf74 <_ZNSt6vectorISsSaISsEED1Ev>
 898d670:	89 f0                	mov    %esi,%eax
 898d672:	89 da                	mov    %ebx,%edx
 898d674:	eb 00                	jmp    898d676 <_ZN12STItemScriptC1Ev+0x2b0>
 898d676:	89 d3                	mov    %edx,%ebx
 898d678:	89 c6                	mov    %eax,%esi
 898d67a:	8b 45 08             	mov    0x8(%ebp),%eax
 898d67d:	05 88 00 00 00       	add    $0x88,%eax
 898d682:	89 04 24             	mov    %eax,(%esp)
 898d685:	e8 50 67 6f ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 898d68a:	89 f0                	mov    %esi,%eax
 898d68c:	89 da                	mov    %ebx,%edx
 898d68e:	eb 00                	jmp    898d690 <_ZN12STItemScriptC1Ev+0x2ca>
 898d690:	89 d3                	mov    %edx,%ebx
 898d692:	89 c6                	mov    %eax,%esi
 898d694:	8b 45 08             	mov    0x8(%ebp),%eax
 898d697:	05 84 00 00 00       	add    $0x84,%eax
 898d69c:	89 04 24             	mov    %eax,(%esp)
 898d69f:	e8 3c a5 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898d6a4:	89 f0                	mov    %esi,%eax
 898d6a6:	89 da                	mov    %ebx,%edx
 898d6a8:	eb 00                	jmp    898d6aa <_ZN12STItemScriptC1Ev+0x2e4>
 898d6aa:	89 d3                	mov    %edx,%ebx
 898d6ac:	89 c6                	mov    %eax,%esi
 898d6ae:	8b 45 08             	mov    0x8(%ebp),%eax
 898d6b1:	83 c0 7c             	add    $0x7c,%eax
 898d6b4:	89 04 24             	mov    %eax,(%esp)
 898d6b7:	e8 24 a5 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898d6bc:	89 f0                	mov    %esi,%eax
 898d6be:	89 da                	mov    %ebx,%edx
 898d6c0:	eb 00                	jmp    898d6c2 <_ZN12STItemScriptC1Ev+0x2fc>
 898d6c2:	89 d3                	mov    %edx,%ebx
 898d6c4:	89 c6                	mov    %eax,%esi
 898d6c6:	8b 45 08             	mov    0x8(%ebp),%eax
 898d6c9:	83 c0 74             	add    $0x74,%eax
 898d6cc:	89 04 24             	mov    %eax,(%esp)
 898d6cf:	e8 0c a5 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898d6d4:	89 f0                	mov    %esi,%eax
 898d6d6:	89 da                	mov    %ebx,%edx
 898d6d8:	eb 00                	jmp    898d6da <_ZN12STItemScriptC1Ev+0x314>
 898d6da:	89 d3                	mov    %edx,%ebx
 898d6dc:	89 c6                	mov    %eax,%esi
 898d6de:	8b 45 08             	mov    0x8(%ebp),%eax
 898d6e1:	83 c0 6c             	add    $0x6c,%eax
 898d6e4:	89 04 24             	mov    %eax,(%esp)
 898d6e7:	e8 f4 a4 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898d6ec:	89 f0                	mov    %esi,%eax
 898d6ee:	89 da                	mov    %ebx,%edx
 898d6f0:	eb 00                	jmp    898d6f2 <_ZN12STItemScriptC1Ev+0x32c>
 898d6f2:	89 d3                	mov    %edx,%ebx
 898d6f4:	89 c6                	mov    %eax,%esi
 898d6f6:	8b 45 08             	mov    0x8(%ebp),%eax
 898d6f9:	83 c0 44             	add    $0x44,%eax
 898d6fc:	89 04 24             	mov    %eax,(%esp)
 898d6ff:	e8 30 c8 74 ff       	call   80d9f34 <_ZNSt3setIiSt4lessIiESaIiEED1Ev>
 898d704:	89 f0                	mov    %esi,%eax
 898d706:	89 da                	mov    %ebx,%edx
 898d708:	89 04 24             	mov    %eax,(%esp)
 898d70b:	e8 40 60 15 00       	call   8ae3750 <_Unwind_Resume>
 898d710:	83 c4 10             	add    $0x10,%esp
 898d713:	5b                   	pop    %ebx
 898d714:	5e                   	pop    %esi
 898d715:	5d                   	pop    %ebp
 898d716:	c3                   	ret
 898d717:	90                   	nop

```

```c
// STItemScript::STItemScript @ 0x898d3c6

/* STItemScript::STItemScript() */

void __thiscall STItemScript::STItemScript(STItemScript *this)

{
  std::pair<int,int>::pair((pair<int,int> *)(this + 0x28));
  std::set<int,std::less<int>,std::allocator<int>>::set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x44));
                    /* try { // try from 0898d3f3 to 0898d3f7 has its CatchHandler @ 0898d6f2 */
  std::string::string((string *)(this + 0x6c));
                    /* try { // try from 0898d401 to 0898d405 has its CatchHandler @ 0898d6da */
  std::string::string((string *)(this + 0x74));
                    /* try { // try from 0898d40f to 0898d413 has its CatchHandler @ 0898d6c2 */
  std::string::string((string *)(this + 0x7c));
                    /* try { // try from 0898d41f to 0898d423 has its CatchHandler @ 0898d6aa */
  std::string::string((string *)(this + 0x84));
                    /* try { // try from 0898d42f to 0898d433 has its CatchHandler @ 0898d690 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x88));
                    /* try { // try from 0898d43f to 0898d443 has its CatchHandler @ 0898d676 */
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x94));
                    /* try { // try from 0898d44f to 0898d453 has its CatchHandler @ 0898d65c */
  std::string::string((string *)(this + 0xac));
                    /* try { // try from 0898d45f to 0898d463 has its CatchHandler @ 0898d642 */
  std::string::string((string *)(this + 0xb0));
                    /* try { // try from 0898d46f to 0898d473 has its CatchHandler @ 0898d628 */
  std::string::string((string *)(this + 0xb4));
                    /* try { // try from 0898d47f to 0898d483 has its CatchHandler @ 0898d60e */
  std::string::string((string *)(this + 0xb8));
                    /* try { // try from 0898d48f to 0898d493 has its CatchHandler @ 0898d5f4 */
  std::string::string((string *)(this + 0xbc));
                    /* try { // try from 0898d49f to 0898d4a3 has its CatchHandler @ 0898d5da */
  std::string::string((string *)(this + 0xc0));
                    /* try { // try from 0898d4af to 0898d4b3 has its CatchHandler @ 0898d5c0 */
  std::set<int,std::less<int>,std::allocator<int>>::set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0xdc));
  STSpecialMonsterDrop::STSpecialMonsterDrop((STSpecialMonsterDrop *)(this + 0x105));
                    /* try { // try from 0898d4cf to 0898d4d3 has its CatchHandler @ 0898d5a6 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x110));
                    /* try { // try from 0898d4df to 0898d4e3 has its CatchHandler @ 0898d58c */
  std::
  set<STItemScript::ENUM_ITEM_CATEGORY,std::less<STItemScript::ENUM_ITEM_CATEGORY>,std::allocator<STItemScript::ENUM_ITEM_CATEGORY>>
  ::set((set<STItemScript::ENUM_ITEM_CATEGORY,std::less<STItemScript::ENUM_ITEM_CATEGORY>,std::allocator<STItemScript::ENUM_ITEM_CATEGORY>>
         *)(this + 0x11c));
                    /* try { // try from 0898d4ef to 0898d4f3 has its CatchHandler @ 0898d572 */
  SEXPERTJOB::SEXPERTJOB((SEXPERTJOB *)(this + 0x138));
                    /* try { // try from 0898d4ff to 0898d503 has its CatchHandler @ 0898d558 */
  DyeInfo::DyeInfo((DyeInfo *)(this + 0x164));
                    /* try { // try from 0898d50f to 0898d513 has its CatchHandler @ 0898d53e */
  std::string::string((string *)(this + 0x174));
                    /* try { // try from 0898d51a to 0898d51e has its CatchHandler @ 0898d524 */
  Clear(this);
  return;
}

```

---

## hasCategory

```asm
// === 0898db2a STItemScript::hasCategory  [0x0898db2a-0x898db81] ===
 898db2a:	55                   	push   %ebp
 898db2b:	89 e5                	mov    %esp,%ebp
 898db2d:	83 ec 28             	sub    $0x28,%esp
 898db30:	8b 45 08             	mov    0x8(%ebp),%eax
 898db33:	8d 88 1c 01 00 00    	lea    0x11c(%eax),%ecx
 898db39:	8d 45 f0             	lea    -0x10(%ebp),%eax
 898db3c:	8d 55 0c             	lea    0xc(%ebp),%edx
 898db3f:	89 54 24 08          	mov    %edx,0x8(%esp)
 898db43:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 898db47:	89 04 24             	mov    %eax,(%esp)
 898db4a:	e8 75 80 8a ff       	call   8235bc4 <_ZNKSt3setIN12STItemScript18ENUM_ITEM_CATEGORYESt4lessIS1_ESaIS1_EE4findERKS1_>
 898db4f:	83 ec 04             	sub    $0x4,%esp
 898db52:	8b 45 08             	mov    0x8(%ebp),%eax
 898db55:	8d 90 1c 01 00 00    	lea    0x11c(%eax),%edx
 898db5b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 898db5e:	89 54 24 04          	mov    %edx,0x4(%esp)
 898db62:	89 04 24             	mov    %eax,(%esp)
 898db65:	e8 86 80 8a ff       	call   8235bf0 <_ZNKSt3setIN12STItemScript18ENUM_ITEM_CATEGORYESt4lessIS1_ESaIS1_EE3endEv>
 898db6a:	83 ec 04             	sub    $0x4,%esp
 898db6d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 898db70:	89 44 24 04          	mov    %eax,0x4(%esp)
 898db74:	8d 45 f0             	lea    -0x10(%ebp),%eax
 898db77:	89 04 24             	mov    %eax,(%esp)
 898db7a:	e8 97 80 8a ff       	call   8235c16 <_ZNKSt23_Rb_tree_const_iteratorIN12STItemScript18ENUM_ITEM_CATEGORYEEneERKS2_>
 898db7f:	c9                   	leave
 898db80:	c3                   	ret
 898db81:	90                   	nop

```

```c
// STItemScript::hasCategory @ 0x898db2a

/* STItemScript::hasCategory(STItemScript::ENUM_ITEM_CATEGORY) const */

void STItemScript::hasCategory(void)

{
  _Rb_tree_const_iterator<STItemScript::ENUM_ITEM_CATEGORY> local_14 [4];
  set<STItemScript::ENUM_ITEM_CATEGORY,std::less<STItemScript::ENUM_ITEM_CATEGORY>,std::allocator<STItemScript::ENUM_ITEM_CATEGORY>>
  local_10 [12];
  
  std::
  set<STItemScript::ENUM_ITEM_CATEGORY,std::less<STItemScript::ENUM_ITEM_CATEGORY>,std::allocator<STItemScript::ENUM_ITEM_CATEGORY>>
  ::find(local_14);
  std::
  set<STItemScript::ENUM_ITEM_CATEGORY,std::less<STItemScript::ENUM_ITEM_CATEGORY>,std::allocator<STItemScript::ENUM_ITEM_CATEGORY>>
  ::end(local_10);
  std::_Rb_tree_const_iterator<STItemScript::ENUM_ITEM_CATEGORY>::operator!=
            (local_14,(_Rb_tree_const_iterator *)local_10);
  return;
}

```

