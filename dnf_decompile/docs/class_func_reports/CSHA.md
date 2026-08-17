# CSHA

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## AddData

```asm
// === 080bb708 CSHA::AddData  [0x080bb708-0x80bb85d] ===
 80bb708:	55                   	push   %ebp
 80bb709:	89 e5                	mov    %esp,%ebp
 80bb70b:	83 ec 28             	sub    $0x28,%esp
 80bb70e:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 80bb712:	7f 0a                	jg     80bb71e <_ZN4CSHA7AddDataEPKci+0x16>
 80bb714:	b8 07 00 00 70       	mov    $0x70000007,%eax
 80bb719:	e9 3d 01 00 00       	jmp    80bb85b <_ZN4CSHA7AddDataEPKci+0x153>
 80bb71e:	8b 45 08             	mov    0x8(%ebp),%eax
 80bb721:	8b 40 20             	mov    0x20(%eax),%eax
 80bb724:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80bb727:	8b 45 10             	mov    0x10(%ebp),%eax
 80bb72a:	c1 e0 03             	shl    $0x3,%eax
 80bb72d:	89 c2                	mov    %eax,%edx
 80bb72f:	03 55 f0             	add    -0x10(%ebp),%edx
 80bb732:	8b 45 08             	mov    0x8(%ebp),%eax
 80bb735:	89 50 20             	mov    %edx,0x20(%eax)
 80bb738:	8b 45 08             	mov    0x8(%ebp),%eax
 80bb73b:	8b 40 20             	mov    0x20(%eax),%eax
 80bb73e:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 80bb741:	0f 92 c0             	setb   %al
 80bb744:	84 c0                	test   %al,%al
 80bb746:	74 0f                	je     80bb757 <_ZN4CSHA7AddDataEPKci+0x4f>
 80bb748:	8b 45 08             	mov    0x8(%ebp),%eax
 80bb74b:	8b 40 24             	mov    0x24(%eax),%eax
 80bb74e:	8d 50 01             	lea    0x1(%eax),%edx
 80bb751:	8b 45 08             	mov    0x8(%ebp),%eax
 80bb754:	89 50 24             	mov    %edx,0x24(%eax)
 80bb757:	8b 45 08             	mov    0x8(%ebp),%eax
 80bb75a:	8b 50 24             	mov    0x24(%eax),%edx
 80bb75d:	8b 45 10             	mov    0x10(%ebp),%eax
 80bb760:	c1 f8 1d             	sar    $0x1d,%eax
 80bb763:	01 c2                	add    %eax,%edx
 80bb765:	8b 45 08             	mov    0x8(%ebp),%eax
 80bb768:	89 50 24             	mov    %edx,0x24(%eax)
 80bb76b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bb76e:	c1 e8 03             	shr    $0x3,%eax
 80bb771:	83 e0 3f             	and    $0x3f,%eax
 80bb774:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80bb777:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 80bb77b:	0f 84 a7 00 00 00    	je     80bb828 <_ZN4CSHA7AddDataEPKci+0x120>
 80bb781:	8b 45 08             	mov    0x8(%ebp),%eax
 80bb784:	83 c0 28             	add    $0x28,%eax
 80bb787:	03 45 f0             	add    -0x10(%ebp),%eax
 80bb78a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bb78d:	b8 40 00 00 00       	mov    $0x40,%eax
 80bb792:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80bb795:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80bb798:	8b 45 10             	mov    0x10(%ebp),%eax
 80bb79b:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 80bb79e:	73 23                	jae    80bb7c3 <_ZN4CSHA7AddDataEPKci+0xbb>
 80bb7a0:	8b 45 10             	mov    0x10(%ebp),%eax
 80bb7a3:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bb7a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 80bb7aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bb7ae:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bb7b1:	89 04 24             	mov    %eax,(%esp)
 80bb7b4:	e8 e7 20 fc ff       	call   807d8a0 <memcpy@plt>
 80bb7b9:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80bb7be:	e9 98 00 00 00       	jmp    80bb85b <_ZN4CSHA7AddDataEPKci+0x153>
 80bb7c3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bb7c6:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bb7ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 80bb7cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bb7d1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bb7d4:	89 04 24             	mov    %eax,(%esp)
 80bb7d7:	e8 c4 20 fc ff       	call   807d8a0 <memcpy@plt>
 80bb7dc:	8b 45 08             	mov    0x8(%ebp),%eax
 80bb7df:	89 04 24             	mov    %eax,(%esp)
 80bb7e2:	e8 fd 01 00 00       	call   80bb9e4 <_ZN4CSHA9TransformEv>
 80bb7e7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bb7ea:	01 45 0c             	add    %eax,0xc(%ebp)
 80bb7ed:	8b 45 10             	mov    0x10(%ebp),%eax
 80bb7f0:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80bb7f3:	89 45 10             	mov    %eax,0x10(%ebp)
 80bb7f6:	eb 30                	jmp    80bb828 <_ZN4CSHA7AddDataEPKci+0x120>
 80bb7f8:	8b 45 08             	mov    0x8(%ebp),%eax
 80bb7fb:	8d 50 28             	lea    0x28(%eax),%edx
 80bb7fe:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 80bb805:	00 
 80bb806:	8b 45 0c             	mov    0xc(%ebp),%eax
 80bb809:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bb80d:	89 14 24             	mov    %edx,(%esp)
 80bb810:	e8 8b 20 fc ff       	call   807d8a0 <memcpy@plt>
 80bb815:	8b 45 08             	mov    0x8(%ebp),%eax
 80bb818:	89 04 24             	mov    %eax,(%esp)
 80bb81b:	e8 c4 01 00 00       	call   80bb9e4 <_ZN4CSHA9TransformEv>
 80bb820:	83 45 0c 40          	addl   $0x40,0xc(%ebp)
 80bb824:	83 6d 10 40          	subl   $0x40,0x10(%ebp)
 80bb828:	83 7d 10 3f          	cmpl   $0x3f,0x10(%ebp)
 80bb82c:	0f 9f c0             	setg   %al
 80bb82f:	84 c0                	test   %al,%al
 80bb831:	75 c5                	jne    80bb7f8 <_ZN4CSHA7AddDataEPKci+0xf0>
 80bb833:	8b 45 10             	mov    0x10(%ebp),%eax
 80bb836:	8b 55 08             	mov    0x8(%ebp),%edx
 80bb839:	83 c2 28             	add    $0x28,%edx
 80bb83c:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bb840:	8b 45 0c             	mov    0xc(%ebp),%eax
 80bb843:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bb847:	89 14 24             	mov    %edx,(%esp)
 80bb84a:	e8 51 20 fc ff       	call   807d8a0 <memcpy@plt>
 80bb84f:	8b 45 08             	mov    0x8(%ebp),%eax
 80bb852:	c6 40 68 01          	movb   $0x1,0x68(%eax)
 80bb856:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80bb85b:	c9                   	leave
 80bb85c:	c3                   	ret
 80bb85d:	90                   	nop

```

```c
// CSHA::AddData @ 0x80bb708

/* CSHA::AddData(char const*, int) */

undefined4 __thiscall CSHA::AddData(CSHA *this,char *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint __n;
  
  if (param_2 < 1) {
    uVar1 = 0x70000007;
  }
  else {
    uVar2 = *(uint *)(this + 0x20);
    *(uint *)(this + 0x20) = param_2 * 8 + uVar2;
    if (*(uint *)(this + 0x20) < uVar2) {
      *(int *)(this + 0x24) = *(int *)(this + 0x24) + 1;
    }
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + (param_2 >> 0x1d);
    uVar2 = uVar2 >> 3 & 0x3f;
    if (uVar2 != 0) {
      __n = 0x40 - uVar2;
      if ((uint)param_2 < __n) {
        memcpy(this + uVar2 + 0x28,param_1,param_2);
        return 0x6fffffff;
      }
      memcpy(this + uVar2 + 0x28,param_1,__n);
      Transform(this);
      param_1 = param_1 + __n;
      param_2 = param_2 - __n;
    }
    for (; 0x3f < param_2; param_2 = param_2 + -0x40) {
      memcpy(this + 0x28,param_1,0x40);
      Transform(this);
      param_1 = param_1 + 0x40;
    }
    memcpy(this + 0x28,param_1,param_2);
    this[0x68] = (CSHA)0x1;
    uVar1 = 0x6fffffff;
  }
  return uVar1;
}

```

---

## CSHA

```asm
// === 080bb69c CSHA::CSHA  [0x080bb69c-0x80bb707] ===
 80bb69c:	55                   	push   %ebp
 80bb69d:	89 e5                	mov    %esp,%ebp
 80bb69f:	83 ec 28             	sub    $0x28,%esp
 80bb6a2:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80bb6a9:	eb 17                	jmp    80bb6c2 <_ZN4CSHAC1Ev+0x26>
 80bb6ab:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80bb6ae:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bb6b1:	8b 0c 85 e0 30 b2 08 	mov    0x8b230e0(,%eax,4),%ecx
 80bb6b8:	8b 45 08             	mov    0x8(%ebp),%eax
 80bb6bb:	89 0c 90             	mov    %ecx,(%eax,%edx,4)
 80bb6be:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80bb6c2:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 80bb6c6:	0f 9e c0             	setle  %al
 80bb6c9:	84 c0                	test   %al,%al
 80bb6cb:	75 de                	jne    80bb6ab <_ZN4CSHAC1Ev+0xf>
 80bb6cd:	8b 45 08             	mov    0x8(%ebp),%eax
 80bb6d0:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 80bb6d7:	8b 45 08             	mov    0x8(%ebp),%eax
 80bb6da:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
 80bb6e1:	8b 45 08             	mov    0x8(%ebp),%eax
 80bb6e4:	83 c0 28             	add    $0x28,%eax
 80bb6e7:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 80bb6ee:	00 
 80bb6ef:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80bb6f6:	00 
 80bb6f7:	89 04 24             	mov    %eax,(%esp)
 80bb6fa:	e8 c1 25 fc ff       	call   807dcc0 <memset@plt>
 80bb6ff:	8b 45 08             	mov    0x8(%ebp),%eax
 80bb702:	c6 40 68 00          	movb   $0x0,0x68(%eax)
 80bb706:	c9                   	leave
 80bb707:	c3                   	ret

```

```c
// CSHA::CSHA @ 0x80bb69c

/* CSHA::CSHA() */

void __thiscall CSHA::CSHA(CSHA *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    *(undefined4 *)(this + local_10 * 4) = *(undefined4 *)(sm_H256 + local_10 * 4);
  }
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  memset(this + 0x28,0,0x40);
  this[0x68] = (CSHA)0x0;
  return;
}

```

---

## FinalDigest

```asm
// === 080bb85e CSHA::FinalDigest  [0x080bb85e-0x80bb995] ===
 80bb85e:	55                   	push   %ebp
 80bb85f:	89 e5                	mov    %esp,%ebp
 80bb861:	83 ec 28             	sub    $0x28,%esp
 80bb864:	8b 45 08             	mov    0x8(%ebp),%eax
 80bb867:	0f b6 40 68          	movzbl 0x68(%eax),%eax
 80bb86b:	83 f0 01             	xor    $0x1,%eax
 80bb86e:	84 c0                	test   %al,%al
 80bb870:	74 0a                	je     80bb87c <_ZN4CSHA11FinalDigestEPc+0x1e>
 80bb872:	b8 08 00 00 70       	mov    $0x70000008,%eax
 80bb877:	e9 17 01 00 00       	jmp    80bb993 <_ZN4CSHA11FinalDigestEPc+0x135>
 80bb87c:	8b 45 08             	mov    0x8(%ebp),%eax
 80bb87f:	8b 40 20             	mov    0x20(%eax),%eax
 80bb882:	c1 e8 03             	shr    $0x3,%eax
 80bb885:	83 e0 3f             	and    $0x3f,%eax
 80bb888:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80bb88b:	8b 45 08             	mov    0x8(%ebp),%eax
 80bb88e:	83 c0 28             	add    $0x28,%eax
 80bb891:	03 45 ec             	add    -0x14(%ebp),%eax
 80bb894:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80bb897:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bb89a:	c6 00 80             	movb   $0x80,(%eax)
 80bb89d:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 80bb8a1:	b8 3f 00 00 00       	mov    $0x3f,%eax
 80bb8a6:	2b 45 ec             	sub    -0x14(%ebp),%eax
 80bb8a9:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80bb8ac:	83 7d ec 07          	cmpl   $0x7,-0x14(%ebp)
 80bb8b0:	77 45                	ja     80bb8f7 <_ZN4CSHA11FinalDigestEPc+0x99>
 80bb8b2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bb8b5:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bb8b9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80bb8c0:	00 
 80bb8c1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bb8c4:	89 04 24             	mov    %eax,(%esp)
 80bb8c7:	e8 f4 23 fc ff       	call   807dcc0 <memset@plt>
 80bb8cc:	8b 45 08             	mov    0x8(%ebp),%eax
 80bb8cf:	89 04 24             	mov    %eax,(%esp)
 80bb8d2:	e8 0d 01 00 00       	call   80bb9e4 <_ZN4CSHA9TransformEv>
 80bb8d7:	8b 45 08             	mov    0x8(%ebp),%eax
 80bb8da:	83 c0 28             	add    $0x28,%eax
 80bb8dd:	c7 44 24 08 38 00 00 	movl   $0x38,0x8(%esp)
 80bb8e4:	00 
 80bb8e5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80bb8ec:	00 
 80bb8ed:	89 04 24             	mov    %eax,(%esp)
 80bb8f0:	e8 cb 23 fc ff       	call   807dcc0 <memset@plt>
 80bb8f5:	eb 1d                	jmp    80bb914 <_ZN4CSHA11FinalDigestEPc+0xb6>
 80bb8f7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bb8fa:	83 e8 08             	sub    $0x8,%eax
 80bb8fd:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bb901:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80bb908:	00 
 80bb909:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bb90c:	89 04 24             	mov    %eax,(%esp)
 80bb90f:	e8 ac 23 fc ff       	call   807dcc0 <memset@plt>
 80bb914:	8b 45 08             	mov    0x8(%ebp),%eax
 80bb917:	8d 50 60             	lea    0x60(%eax),%edx
 80bb91a:	8b 45 08             	mov    0x8(%ebp),%eax
 80bb91d:	83 c0 24             	add    $0x24,%eax
 80bb920:	89 54 24 04          	mov    %edx,0x4(%esp)
 80bb924:	89 04 24             	mov    %eax,(%esp)
 80bb927:	e8 fe 1f 00 00       	call   80bd92a <_ZN4CSHA10Word2BytesERKjPh>
 80bb92c:	8b 45 08             	mov    0x8(%ebp),%eax
 80bb92f:	8d 50 64             	lea    0x64(%eax),%edx
 80bb932:	8b 45 08             	mov    0x8(%ebp),%eax
 80bb935:	83 c0 20             	add    $0x20,%eax
 80bb938:	89 54 24 04          	mov    %edx,0x4(%esp)
 80bb93c:	89 04 24             	mov    %eax,(%esp)
 80bb93f:	e8 e6 1f 00 00       	call   80bd92a <_ZN4CSHA10Word2BytesERKjPh>
 80bb944:	8b 45 08             	mov    0x8(%ebp),%eax
 80bb947:	89 04 24             	mov    %eax,(%esp)
 80bb94a:	e8 95 00 00 00       	call   80bb9e4 <_ZN4CSHA9TransformEv>
 80bb94f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80bb956:	eb 20                	jmp    80bb978 <_ZN4CSHA11FinalDigestEPc+0x11a>
 80bb958:	8b 55 0c             	mov    0xc(%ebp),%edx
 80bb95b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bb95e:	c1 e0 02             	shl    $0x2,%eax
 80bb961:	03 45 08             	add    0x8(%ebp),%eax
 80bb964:	89 54 24 04          	mov    %edx,0x4(%esp)
 80bb968:	89 04 24             	mov    %eax,(%esp)
 80bb96b:	e8 ba 1f 00 00       	call   80bd92a <_ZN4CSHA10Word2BytesERKjPh>
 80bb970:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80bb974:	83 45 0c 04          	addl   $0x4,0xc(%ebp)
 80bb978:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 80bb97c:	0f 9e c0             	setle  %al
 80bb97f:	84 c0                	test   %al,%al
 80bb981:	75 d5                	jne    80bb958 <_ZN4CSHA11FinalDigestEPc+0xfa>
 80bb983:	8b 45 08             	mov    0x8(%ebp),%eax
 80bb986:	89 04 24             	mov    %eax,(%esp)
 80bb989:	e8 08 00 00 00       	call   80bb996 <_ZN4CSHA5ResetEv>
 80bb98e:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80bb993:	c9                   	leave
 80bb994:	c3                   	ret
 80bb995:	90                   	nop

```

```c
// CSHA::FinalDigest @ 0x80bb85e

/* CSHA::FinalDigest(char*) */

undefined4 __thiscall CSHA::FinalDigest(CSHA *this,char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  CSHA *pCVar4;
  int local_10;
  
  if (this[0x68] == (CSHA)0x1) {
    uVar3 = *(uint *)(this + 0x20) >> 3 & 0x3f;
    pCVar4 = this + uVar3 + 0x28;
    *pCVar4 = (CSHA)0x80;
    iVar1 = -uVar3;
    uVar3 = iVar1 + 0x3f;
    if (uVar3 < 8) {
      memset(pCVar4 + 1,0,uVar3);
      Transform(this);
      memset(this + 0x28,0,0x38);
    }
    else {
      memset(pCVar4 + 1,0,iVar1 + 0x37);
    }
    Word2Bytes((uint *)(this + 0x24),(uchar *)(this + 0x60));
    Word2Bytes((uint *)(this + 0x20),(uchar *)(this + 100));
    Transform(this);
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      Word2Bytes((uint *)(this + local_10 * 4),(uchar *)param_1);
      param_1 = param_1 + 4;
    }
    Reset(this);
    uVar2 = 0x6fffffff;
  }
  else {
    uVar2 = 0x70000008;
  }
  return uVar2;
}

```

---

## Reset

```asm
// === 080bb996 CSHA::Reset  [0x080bb996-0x80bb9e3] ===
 80bb996:	55                   	push   %ebp
 80bb997:	89 e5                	mov    %esp,%ebp
 80bb999:	83 ec 10             	sub    $0x10,%esp
 80bb99c:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 80bb9a3:	eb 17                	jmp    80bb9bc <_ZN4CSHA5ResetEv+0x26>
 80bb9a5:	8b 55 fc             	mov    -0x4(%ebp),%edx
 80bb9a8:	8b 45 fc             	mov    -0x4(%ebp),%eax
 80bb9ab:	8b 0c 85 e0 30 b2 08 	mov    0x8b230e0(,%eax,4),%ecx
 80bb9b2:	8b 45 08             	mov    0x8(%ebp),%eax
 80bb9b5:	89 0c 90             	mov    %ecx,(%eax,%edx,4)
 80bb9b8:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 80bb9bc:	83 7d fc 07          	cmpl   $0x7,-0x4(%ebp)
 80bb9c0:	0f 9e c0             	setle  %al
 80bb9c3:	84 c0                	test   %al,%al
 80bb9c5:	75 de                	jne    80bb9a5 <_ZN4CSHA5ResetEv+0xf>
 80bb9c7:	8b 45 08             	mov    0x8(%ebp),%eax
 80bb9ca:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 80bb9d1:	8b 45 08             	mov    0x8(%ebp),%eax
 80bb9d4:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
 80bb9db:	8b 45 08             	mov    0x8(%ebp),%eax
 80bb9de:	c6 40 68 00          	movb   $0x0,0x68(%eax)
 80bb9e2:	c9                   	leave
 80bb9e3:	c3                   	ret

```

```c
// CSHA::Reset @ 0x80bb996

/* CSHA::Reset() */

void __thiscall CSHA::Reset(CSHA *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    *(undefined4 *)(this + local_8 * 4) = *(undefined4 *)(sm_H256 + local_8 * 4);
  }
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  this[0x68] = (CSHA)0x0;
  return;
}

```

---

## Transform

```asm
// === 080bb9e4 CSHA::Transform  [0x080bb9e4-0x80bd977] ===
 80bb9e4:	55                   	push   %ebp
 80bb9e5:	89 e5                	mov    %esp,%ebp
 80bb9e7:	56                   	push   %esi
 80bb9e8:	53                   	push   %ebx
 80bb9e9:	81 ec 40 01 00 00    	sub    $0x140,%esp
 80bb9ef:	8b 45 08             	mov    0x8(%ebp),%eax
 80bb9f2:	83 c0 28             	add    $0x28,%eax
 80bb9f5:	89 45 cc             	mov    %eax,-0x34(%ebp)
 80bb9f8:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 80bb9ff:	eb 25                	jmp    80bba26 <_ZN4CSHA9TransformEv+0x42>
 80bba01:	8b 55 d0             	mov    -0x30(%ebp),%edx
 80bba04:	8d 85 cc fe ff ff    	lea    -0x134(%ebp),%eax
 80bba0a:	c1 e2 02             	shl    $0x2,%edx
 80bba0d:	01 d0                	add    %edx,%eax
 80bba0f:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bba13:	8b 45 cc             	mov    -0x34(%ebp),%eax
 80bba16:	89 04 24             	mov    %eax,(%esp)
 80bba19:	e8 c6 1e 00 00       	call   80bd8e4 <_ZN4CSHA10Bytes2WordEPKhRj>
 80bba1e:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 80bba22:	83 45 cc 04          	addl   $0x4,-0x34(%ebp)
 80bba26:	83 7d d0 0f          	cmpl   $0xf,-0x30(%ebp)
 80bba2a:	0f 9e c0             	setle  %al
 80bba2d:	84 c0                	test   %al,%al
 80bba2f:	75 d0                	jne    80bba01 <_ZN4CSHA9TransformEv+0x1d>
 80bba31:	c7 45 d0 10 00 00 00 	movl   $0x10,-0x30(%ebp)
 80bba38:	eb 5b                	jmp    80bba95 <_ZN4CSHA9TransformEv+0xb1>
 80bba3a:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 80bba3d:	8b 45 d0             	mov    -0x30(%ebp),%eax
 80bba40:	83 e8 02             	sub    $0x2,%eax
 80bba43:	8b 84 85 cc fe ff ff 	mov    -0x134(%ebp,%eax,4),%eax
 80bba4a:	89 04 24             	mov    %eax,(%esp)
 80bba4d:	e8 74 1e 00 00       	call   80bd8c6 <_ZN4CSHA4sig1Ej>
 80bba52:	8b 55 d0             	mov    -0x30(%ebp),%edx
 80bba55:	83 ea 07             	sub    $0x7,%edx
 80bba58:	8b 94 95 cc fe ff ff 	mov    -0x134(%ebp,%edx,4),%edx
 80bba5f:	8d 34 10             	lea    (%eax,%edx,1),%esi
 80bba62:	8b 45 d0             	mov    -0x30(%ebp),%eax
 80bba65:	83 e8 0f             	sub    $0xf,%eax
 80bba68:	8b 84 85 cc fe ff ff 	mov    -0x134(%ebp,%eax,4),%eax
 80bba6f:	89 04 24             	mov    %eax,(%esp)
 80bba72:	e8 31 1e 00 00       	call   80bd8a8 <_ZN4CSHA4sig0Ej>
 80bba77:	8d 14 06             	lea    (%esi,%eax,1),%edx
 80bba7a:	8b 45 d0             	mov    -0x30(%ebp),%eax
 80bba7d:	83 e8 10             	sub    $0x10,%eax
 80bba80:	8b 84 85 cc fe ff ff 	mov    -0x134(%ebp,%eax,4),%eax
 80bba87:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bba8a:	89 84 9d cc fe ff ff 	mov    %eax,-0x134(%ebp,%ebx,4)
 80bba91:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 80bba95:	83 7d d0 3f          	cmpl   $0x3f,-0x30(%ebp)
 80bba99:	0f 9e c0             	setle  %al
 80bba9c:	84 c0                	test   %al,%al
 80bba9e:	75 9a                	jne    80bba3a <_ZN4CSHA9TransformEv+0x56>
 80bbaa0:	8b 45 08             	mov    0x8(%ebp),%eax
 80bbaa3:	8b 00                	mov    (%eax),%eax
 80bbaa5:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 80bbaa8:	8b 45 08             	mov    0x8(%ebp),%eax
 80bbaab:	8b 40 04             	mov    0x4(%eax),%eax
 80bbaae:	89 45 d8             	mov    %eax,-0x28(%ebp)
 80bbab1:	8b 45 08             	mov    0x8(%ebp),%eax
 80bbab4:	8b 40 08             	mov    0x8(%eax),%eax
 80bbab7:	89 45 dc             	mov    %eax,-0x24(%ebp)
 80bbaba:	8b 45 08             	mov    0x8(%ebp),%eax
 80bbabd:	8b 40 0c             	mov    0xc(%eax),%eax
 80bbac0:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80bbac3:	8b 45 08             	mov    0x8(%ebp),%eax
 80bbac6:	8b 40 10             	mov    0x10(%eax),%eax
 80bbac9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80bbacc:	8b 45 08             	mov    0x8(%ebp),%eax
 80bbacf:	8b 40 14             	mov    0x14(%eax),%eax
 80bbad2:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80bbad5:	8b 45 08             	mov    0x8(%ebp),%eax
 80bbad8:	8b 40 18             	mov    0x18(%eax),%eax
 80bbadb:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80bbade:	8b 45 08             	mov    0x8(%ebp),%eax
 80bbae1:	8b 40 1c             	mov    0x1c(%eax),%eax
 80bbae4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80bbae7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bbaea:	89 04 24             	mov    %eax,(%esp)
 80bbaed:	e8 98 1d 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bbaf2:	89 c3                	mov    %eax,%ebx
 80bbaf4:	03 5d f0             	add    -0x10(%ebp),%ebx
 80bbaf7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bbafa:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bbafe:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bbb01:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bbb05:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bbb08:	89 04 24             	mov    %eax,(%esp)
 80bbb0b:	e8 2e 1d 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bbb10:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bbb13:	a1 e0 2f b2 08       	mov    0x8b22fe0,%eax
 80bbb18:	01 c2                	add    %eax,%edx
 80bbb1a:	8b 85 cc fe ff ff    	mov    -0x134(%ebp),%eax
 80bbb20:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bbb23:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bbb26:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bbb29:	89 04 24             	mov    %eax,(%esp)
 80bbb2c:	e8 3b 1d 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bbb31:	89 c3                	mov    %eax,%ebx
 80bbb33:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bbb36:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bbb39:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bbb3d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bbb40:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bbb44:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bbb47:	89 04 24             	mov    %eax,(%esp)
 80bbb4a:	e8 03 1d 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bbb4f:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bbb52:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80bbb55:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bbb58:	01 45 e0             	add    %eax,-0x20(%ebp)
 80bbb5b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bbb5e:	89 04 24             	mov    %eax,(%esp)
 80bbb61:	e8 24 1d 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bbb66:	89 c3                	mov    %eax,%ebx
 80bbb68:	03 5d ec             	add    -0x14(%ebp),%ebx
 80bbb6b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bbb6e:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bbb72:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bbb75:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bbb79:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bbb7c:	89 04 24             	mov    %eax,(%esp)
 80bbb7f:	e8 ba 1c 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bbb84:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bbb87:	a1 e4 2f b2 08       	mov    0x8b22fe4,%eax
 80bbb8c:	01 c2                	add    %eax,%edx
 80bbb8e:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 80bbb94:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bbb97:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bbb9a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bbb9d:	89 04 24             	mov    %eax,(%esp)
 80bbba0:	e8 c7 1c 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bbba5:	89 c3                	mov    %eax,%ebx
 80bbba7:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bbbaa:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bbbad:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bbbb1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bbbb4:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bbbb8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bbbbb:	89 04 24             	mov    %eax,(%esp)
 80bbbbe:	e8 8f 1c 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bbbc3:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bbbc6:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80bbbc9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bbbcc:	01 45 dc             	add    %eax,-0x24(%ebp)
 80bbbcf:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bbbd2:	89 04 24             	mov    %eax,(%esp)
 80bbbd5:	e8 b0 1c 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bbbda:	89 c3                	mov    %eax,%ebx
 80bbbdc:	03 5d e8             	add    -0x18(%ebp),%ebx
 80bbbdf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bbbe2:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bbbe6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bbbe9:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bbbed:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bbbf0:	89 04 24             	mov    %eax,(%esp)
 80bbbf3:	e8 46 1c 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bbbf8:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bbbfb:	a1 e8 2f b2 08       	mov    0x8b22fe8,%eax
 80bbc00:	01 c2                	add    %eax,%edx
 80bbc02:	8b 85 d4 fe ff ff    	mov    -0x12c(%ebp),%eax
 80bbc08:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bbc0b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bbc0e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bbc11:	89 04 24             	mov    %eax,(%esp)
 80bbc14:	e8 53 1c 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bbc19:	89 c3                	mov    %eax,%ebx
 80bbc1b:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bbc1e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bbc21:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bbc25:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bbc28:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bbc2c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bbc2f:	89 04 24             	mov    %eax,(%esp)
 80bbc32:	e8 1b 1c 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bbc37:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bbc3a:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80bbc3d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bbc40:	01 45 d8             	add    %eax,-0x28(%ebp)
 80bbc43:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bbc46:	89 04 24             	mov    %eax,(%esp)
 80bbc49:	e8 3c 1c 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bbc4e:	89 c3                	mov    %eax,%ebx
 80bbc50:	03 5d e4             	add    -0x1c(%ebp),%ebx
 80bbc53:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bbc56:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bbc5a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bbc5d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bbc61:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bbc64:	89 04 24             	mov    %eax,(%esp)
 80bbc67:	e8 d2 1b 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bbc6c:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bbc6f:	a1 ec 2f b2 08       	mov    0x8b22fec,%eax
 80bbc74:	01 c2                	add    %eax,%edx
 80bbc76:	8b 85 d8 fe ff ff    	mov    -0x128(%ebp),%eax
 80bbc7c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bbc7f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bbc82:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bbc85:	89 04 24             	mov    %eax,(%esp)
 80bbc88:	e8 df 1b 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bbc8d:	89 c3                	mov    %eax,%ebx
 80bbc8f:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bbc92:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bbc95:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bbc99:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bbc9c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bbca0:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bbca3:	89 04 24             	mov    %eax,(%esp)
 80bbca6:	e8 a7 1b 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bbcab:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bbcae:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80bbcb1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bbcb4:	01 45 d4             	add    %eax,-0x2c(%ebp)
 80bbcb7:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bbcba:	89 04 24             	mov    %eax,(%esp)
 80bbcbd:	e8 c8 1b 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bbcc2:	89 c3                	mov    %eax,%ebx
 80bbcc4:	03 5d e0             	add    -0x20(%ebp),%ebx
 80bbcc7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bbcca:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bbcce:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bbcd1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bbcd5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bbcd8:	89 04 24             	mov    %eax,(%esp)
 80bbcdb:	e8 5e 1b 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bbce0:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bbce3:	a1 f0 2f b2 08       	mov    0x8b22ff0,%eax
 80bbce8:	01 c2                	add    %eax,%edx
 80bbcea:	8b 85 dc fe ff ff    	mov    -0x124(%ebp),%eax
 80bbcf0:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bbcf3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bbcf6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bbcf9:	89 04 24             	mov    %eax,(%esp)
 80bbcfc:	e8 6b 1b 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bbd01:	89 c3                	mov    %eax,%ebx
 80bbd03:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bbd06:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bbd09:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bbd0d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bbd10:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bbd14:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bbd17:	89 04 24             	mov    %eax,(%esp)
 80bbd1a:	e8 33 1b 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bbd1f:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bbd22:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80bbd25:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bbd28:	01 45 f0             	add    %eax,-0x10(%ebp)
 80bbd2b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bbd2e:	89 04 24             	mov    %eax,(%esp)
 80bbd31:	e8 54 1b 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bbd36:	89 c3                	mov    %eax,%ebx
 80bbd38:	03 5d dc             	add    -0x24(%ebp),%ebx
 80bbd3b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bbd3e:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bbd42:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bbd45:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bbd49:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bbd4c:	89 04 24             	mov    %eax,(%esp)
 80bbd4f:	e8 ea 1a 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bbd54:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bbd57:	a1 f4 2f b2 08       	mov    0x8b22ff4,%eax
 80bbd5c:	01 c2                	add    %eax,%edx
 80bbd5e:	8b 85 e0 fe ff ff    	mov    -0x120(%ebp),%eax
 80bbd64:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bbd67:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bbd6a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bbd6d:	89 04 24             	mov    %eax,(%esp)
 80bbd70:	e8 f7 1a 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bbd75:	89 c3                	mov    %eax,%ebx
 80bbd77:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bbd7a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bbd7d:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bbd81:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bbd84:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bbd88:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bbd8b:	89 04 24             	mov    %eax,(%esp)
 80bbd8e:	e8 bf 1a 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bbd93:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bbd96:	89 45 dc             	mov    %eax,-0x24(%ebp)
 80bbd99:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bbd9c:	01 45 ec             	add    %eax,-0x14(%ebp)
 80bbd9f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bbda2:	89 04 24             	mov    %eax,(%esp)
 80bbda5:	e8 e0 1a 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bbdaa:	89 c3                	mov    %eax,%ebx
 80bbdac:	03 5d d8             	add    -0x28(%ebp),%ebx
 80bbdaf:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bbdb2:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bbdb6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bbdb9:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bbdbd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bbdc0:	89 04 24             	mov    %eax,(%esp)
 80bbdc3:	e8 76 1a 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bbdc8:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bbdcb:	a1 f8 2f b2 08       	mov    0x8b22ff8,%eax
 80bbdd0:	01 c2                	add    %eax,%edx
 80bbdd2:	8b 85 e4 fe ff ff    	mov    -0x11c(%ebp),%eax
 80bbdd8:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bbddb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bbdde:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bbde1:	89 04 24             	mov    %eax,(%esp)
 80bbde4:	e8 83 1a 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bbde9:	89 c3                	mov    %eax,%ebx
 80bbdeb:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bbdee:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bbdf1:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bbdf5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bbdf8:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bbdfc:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bbdff:	89 04 24             	mov    %eax,(%esp)
 80bbe02:	e8 4b 1a 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bbe07:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bbe0a:	89 45 d8             	mov    %eax,-0x28(%ebp)
 80bbe0d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bbe10:	01 45 e8             	add    %eax,-0x18(%ebp)
 80bbe13:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bbe16:	89 04 24             	mov    %eax,(%esp)
 80bbe19:	e8 6c 1a 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bbe1e:	89 c3                	mov    %eax,%ebx
 80bbe20:	03 5d d4             	add    -0x2c(%ebp),%ebx
 80bbe23:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bbe26:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bbe2a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bbe2d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bbe31:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bbe34:	89 04 24             	mov    %eax,(%esp)
 80bbe37:	e8 02 1a 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bbe3c:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bbe3f:	a1 fc 2f b2 08       	mov    0x8b22ffc,%eax
 80bbe44:	01 c2                	add    %eax,%edx
 80bbe46:	8b 85 e8 fe ff ff    	mov    -0x118(%ebp),%eax
 80bbe4c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bbe4f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bbe52:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bbe55:	89 04 24             	mov    %eax,(%esp)
 80bbe58:	e8 0f 1a 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bbe5d:	89 c3                	mov    %eax,%ebx
 80bbe5f:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bbe62:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bbe65:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bbe69:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bbe6c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bbe70:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bbe73:	89 04 24             	mov    %eax,(%esp)
 80bbe76:	e8 d7 19 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bbe7b:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bbe7e:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 80bbe81:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bbe84:	01 45 e4             	add    %eax,-0x1c(%ebp)
 80bbe87:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bbe8a:	89 04 24             	mov    %eax,(%esp)
 80bbe8d:	e8 f8 19 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bbe92:	89 c3                	mov    %eax,%ebx
 80bbe94:	03 5d f0             	add    -0x10(%ebp),%ebx
 80bbe97:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bbe9a:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bbe9e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bbea1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bbea5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bbea8:	89 04 24             	mov    %eax,(%esp)
 80bbeab:	e8 8e 19 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bbeb0:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bbeb3:	a1 00 30 b2 08       	mov    0x8b23000,%eax
 80bbeb8:	01 c2                	add    %eax,%edx
 80bbeba:	8b 85 ec fe ff ff    	mov    -0x114(%ebp),%eax
 80bbec0:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bbec3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bbec6:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bbec9:	89 04 24             	mov    %eax,(%esp)
 80bbecc:	e8 9b 19 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bbed1:	89 c3                	mov    %eax,%ebx
 80bbed3:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bbed6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bbed9:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bbedd:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bbee0:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bbee4:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bbee7:	89 04 24             	mov    %eax,(%esp)
 80bbeea:	e8 63 19 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bbeef:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bbef2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80bbef5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bbef8:	01 45 e0             	add    %eax,-0x20(%ebp)
 80bbefb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bbefe:	89 04 24             	mov    %eax,(%esp)
 80bbf01:	e8 84 19 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bbf06:	89 c3                	mov    %eax,%ebx
 80bbf08:	03 5d ec             	add    -0x14(%ebp),%ebx
 80bbf0b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bbf0e:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bbf12:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bbf15:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bbf19:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bbf1c:	89 04 24             	mov    %eax,(%esp)
 80bbf1f:	e8 1a 19 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bbf24:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bbf27:	a1 04 30 b2 08       	mov    0x8b23004,%eax
 80bbf2c:	01 c2                	add    %eax,%edx
 80bbf2e:	8b 85 f0 fe ff ff    	mov    -0x110(%ebp),%eax
 80bbf34:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bbf37:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bbf3a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bbf3d:	89 04 24             	mov    %eax,(%esp)
 80bbf40:	e8 27 19 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bbf45:	89 c3                	mov    %eax,%ebx
 80bbf47:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bbf4a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bbf4d:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bbf51:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bbf54:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bbf58:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bbf5b:	89 04 24             	mov    %eax,(%esp)
 80bbf5e:	e8 ef 18 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bbf63:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bbf66:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80bbf69:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bbf6c:	01 45 dc             	add    %eax,-0x24(%ebp)
 80bbf6f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bbf72:	89 04 24             	mov    %eax,(%esp)
 80bbf75:	e8 10 19 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bbf7a:	89 c3                	mov    %eax,%ebx
 80bbf7c:	03 5d e8             	add    -0x18(%ebp),%ebx
 80bbf7f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bbf82:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bbf86:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bbf89:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bbf8d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bbf90:	89 04 24             	mov    %eax,(%esp)
 80bbf93:	e8 a6 18 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bbf98:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bbf9b:	a1 08 30 b2 08       	mov    0x8b23008,%eax
 80bbfa0:	01 c2                	add    %eax,%edx
 80bbfa2:	8b 85 f4 fe ff ff    	mov    -0x10c(%ebp),%eax
 80bbfa8:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bbfab:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bbfae:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bbfb1:	89 04 24             	mov    %eax,(%esp)
 80bbfb4:	e8 b3 18 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bbfb9:	89 c3                	mov    %eax,%ebx
 80bbfbb:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bbfbe:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bbfc1:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bbfc5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bbfc8:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bbfcc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bbfcf:	89 04 24             	mov    %eax,(%esp)
 80bbfd2:	e8 7b 18 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bbfd7:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bbfda:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80bbfdd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bbfe0:	01 45 d8             	add    %eax,-0x28(%ebp)
 80bbfe3:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bbfe6:	89 04 24             	mov    %eax,(%esp)
 80bbfe9:	e8 9c 18 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bbfee:	89 c3                	mov    %eax,%ebx
 80bbff0:	03 5d e4             	add    -0x1c(%ebp),%ebx
 80bbff3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bbff6:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bbffa:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bbffd:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc001:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bc004:	89 04 24             	mov    %eax,(%esp)
 80bc007:	e8 32 18 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bc00c:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bc00f:	a1 0c 30 b2 08       	mov    0x8b2300c,%eax
 80bc014:	01 c2                	add    %eax,%edx
 80bc016:	8b 85 f8 fe ff ff    	mov    -0x108(%ebp),%eax
 80bc01c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bc01f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bc022:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bc025:	89 04 24             	mov    %eax,(%esp)
 80bc028:	e8 3f 18 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bc02d:	89 c3                	mov    %eax,%ebx
 80bc02f:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bc032:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bc035:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc039:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bc03c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc040:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bc043:	89 04 24             	mov    %eax,(%esp)
 80bc046:	e8 07 18 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bc04b:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bc04e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80bc051:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bc054:	01 45 d4             	add    %eax,-0x2c(%ebp)
 80bc057:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bc05a:	89 04 24             	mov    %eax,(%esp)
 80bc05d:	e8 28 18 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bc062:	89 c3                	mov    %eax,%ebx
 80bc064:	03 5d e0             	add    -0x20(%ebp),%ebx
 80bc067:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bc06a:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc06e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bc071:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc075:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bc078:	89 04 24             	mov    %eax,(%esp)
 80bc07b:	e8 be 17 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bc080:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bc083:	a1 10 30 b2 08       	mov    0x8b23010,%eax
 80bc088:	01 c2                	add    %eax,%edx
 80bc08a:	8b 85 fc fe ff ff    	mov    -0x104(%ebp),%eax
 80bc090:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bc093:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bc096:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bc099:	89 04 24             	mov    %eax,(%esp)
 80bc09c:	e8 cb 17 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bc0a1:	89 c3                	mov    %eax,%ebx
 80bc0a3:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bc0a6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bc0a9:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc0ad:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bc0b0:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc0b4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bc0b7:	89 04 24             	mov    %eax,(%esp)
 80bc0ba:	e8 93 17 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bc0bf:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bc0c2:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80bc0c5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bc0c8:	01 45 f0             	add    %eax,-0x10(%ebp)
 80bc0cb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bc0ce:	89 04 24             	mov    %eax,(%esp)
 80bc0d1:	e8 b4 17 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bc0d6:	89 c3                	mov    %eax,%ebx
 80bc0d8:	03 5d dc             	add    -0x24(%ebp),%ebx
 80bc0db:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bc0de:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc0e2:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bc0e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc0e9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bc0ec:	89 04 24             	mov    %eax,(%esp)
 80bc0ef:	e8 4a 17 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bc0f4:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bc0f7:	a1 14 30 b2 08       	mov    0x8b23014,%eax
 80bc0fc:	01 c2                	add    %eax,%edx
 80bc0fe:	8b 85 00 ff ff ff    	mov    -0x100(%ebp),%eax
 80bc104:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bc107:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bc10a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bc10d:	89 04 24             	mov    %eax,(%esp)
 80bc110:	e8 57 17 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bc115:	89 c3                	mov    %eax,%ebx
 80bc117:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bc11a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bc11d:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc121:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bc124:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc128:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bc12b:	89 04 24             	mov    %eax,(%esp)
 80bc12e:	e8 1f 17 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bc133:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bc136:	89 45 dc             	mov    %eax,-0x24(%ebp)
 80bc139:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bc13c:	01 45 ec             	add    %eax,-0x14(%ebp)
 80bc13f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bc142:	89 04 24             	mov    %eax,(%esp)
 80bc145:	e8 40 17 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bc14a:	89 c3                	mov    %eax,%ebx
 80bc14c:	03 5d d8             	add    -0x28(%ebp),%ebx
 80bc14f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bc152:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc156:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bc159:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc15d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bc160:	89 04 24             	mov    %eax,(%esp)
 80bc163:	e8 d6 16 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bc168:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bc16b:	a1 18 30 b2 08       	mov    0x8b23018,%eax
 80bc170:	01 c2                	add    %eax,%edx
 80bc172:	8b 85 04 ff ff ff    	mov    -0xfc(%ebp),%eax
 80bc178:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bc17b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bc17e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bc181:	89 04 24             	mov    %eax,(%esp)
 80bc184:	e8 e3 16 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bc189:	89 c3                	mov    %eax,%ebx
 80bc18b:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bc18e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bc191:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc195:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bc198:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc19c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bc19f:	89 04 24             	mov    %eax,(%esp)
 80bc1a2:	e8 ab 16 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bc1a7:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bc1aa:	89 45 d8             	mov    %eax,-0x28(%ebp)
 80bc1ad:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bc1b0:	01 45 e8             	add    %eax,-0x18(%ebp)
 80bc1b3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bc1b6:	89 04 24             	mov    %eax,(%esp)
 80bc1b9:	e8 cc 16 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bc1be:	89 c3                	mov    %eax,%ebx
 80bc1c0:	03 5d d4             	add    -0x2c(%ebp),%ebx
 80bc1c3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bc1c6:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc1ca:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bc1cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc1d1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bc1d4:	89 04 24             	mov    %eax,(%esp)
 80bc1d7:	e8 62 16 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bc1dc:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bc1df:	a1 1c 30 b2 08       	mov    0x8b2301c,%eax
 80bc1e4:	01 c2                	add    %eax,%edx
 80bc1e6:	8b 85 08 ff ff ff    	mov    -0xf8(%ebp),%eax
 80bc1ec:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bc1ef:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bc1f2:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bc1f5:	89 04 24             	mov    %eax,(%esp)
 80bc1f8:	e8 6f 16 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bc1fd:	89 c3                	mov    %eax,%ebx
 80bc1ff:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bc202:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bc205:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc209:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bc20c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc210:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bc213:	89 04 24             	mov    %eax,(%esp)
 80bc216:	e8 37 16 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bc21b:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bc21e:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 80bc221:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bc224:	01 45 e4             	add    %eax,-0x1c(%ebp)
 80bc227:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bc22a:	89 04 24             	mov    %eax,(%esp)
 80bc22d:	e8 58 16 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bc232:	89 c3                	mov    %eax,%ebx
 80bc234:	03 5d f0             	add    -0x10(%ebp),%ebx
 80bc237:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bc23a:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc23e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bc241:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc245:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bc248:	89 04 24             	mov    %eax,(%esp)
 80bc24b:	e8 ee 15 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bc250:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bc253:	a1 20 30 b2 08       	mov    0x8b23020,%eax
 80bc258:	01 c2                	add    %eax,%edx
 80bc25a:	8b 85 0c ff ff ff    	mov    -0xf4(%ebp),%eax
 80bc260:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bc263:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bc266:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bc269:	89 04 24             	mov    %eax,(%esp)
 80bc26c:	e8 fb 15 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bc271:	89 c3                	mov    %eax,%ebx
 80bc273:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bc276:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bc279:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc27d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bc280:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc284:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bc287:	89 04 24             	mov    %eax,(%esp)
 80bc28a:	e8 c3 15 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bc28f:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bc292:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80bc295:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bc298:	01 45 e0             	add    %eax,-0x20(%ebp)
 80bc29b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bc29e:	89 04 24             	mov    %eax,(%esp)
 80bc2a1:	e8 e4 15 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bc2a6:	89 c3                	mov    %eax,%ebx
 80bc2a8:	03 5d ec             	add    -0x14(%ebp),%ebx
 80bc2ab:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bc2ae:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc2b2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bc2b5:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc2b9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bc2bc:	89 04 24             	mov    %eax,(%esp)
 80bc2bf:	e8 7a 15 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bc2c4:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bc2c7:	a1 24 30 b2 08       	mov    0x8b23024,%eax
 80bc2cc:	01 c2                	add    %eax,%edx
 80bc2ce:	8b 85 10 ff ff ff    	mov    -0xf0(%ebp),%eax
 80bc2d4:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bc2d7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bc2da:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bc2dd:	89 04 24             	mov    %eax,(%esp)
 80bc2e0:	e8 87 15 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bc2e5:	89 c3                	mov    %eax,%ebx
 80bc2e7:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bc2ea:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bc2ed:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc2f1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bc2f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc2f8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bc2fb:	89 04 24             	mov    %eax,(%esp)
 80bc2fe:	e8 4f 15 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bc303:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bc306:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80bc309:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bc30c:	01 45 dc             	add    %eax,-0x24(%ebp)
 80bc30f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bc312:	89 04 24             	mov    %eax,(%esp)
 80bc315:	e8 70 15 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bc31a:	89 c3                	mov    %eax,%ebx
 80bc31c:	03 5d e8             	add    -0x18(%ebp),%ebx
 80bc31f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bc322:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc326:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bc329:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc32d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bc330:	89 04 24             	mov    %eax,(%esp)
 80bc333:	e8 06 15 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bc338:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bc33b:	a1 28 30 b2 08       	mov    0x8b23028,%eax
 80bc340:	01 c2                	add    %eax,%edx
 80bc342:	8b 85 14 ff ff ff    	mov    -0xec(%ebp),%eax
 80bc348:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bc34b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bc34e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bc351:	89 04 24             	mov    %eax,(%esp)
 80bc354:	e8 13 15 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bc359:	89 c3                	mov    %eax,%ebx
 80bc35b:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bc35e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bc361:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc365:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bc368:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc36c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bc36f:	89 04 24             	mov    %eax,(%esp)
 80bc372:	e8 db 14 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bc377:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bc37a:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80bc37d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bc380:	01 45 d8             	add    %eax,-0x28(%ebp)
 80bc383:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bc386:	89 04 24             	mov    %eax,(%esp)
 80bc389:	e8 fc 14 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bc38e:	89 c3                	mov    %eax,%ebx
 80bc390:	03 5d e4             	add    -0x1c(%ebp),%ebx
 80bc393:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bc396:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc39a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bc39d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc3a1:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bc3a4:	89 04 24             	mov    %eax,(%esp)
 80bc3a7:	e8 92 14 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bc3ac:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bc3af:	a1 2c 30 b2 08       	mov    0x8b2302c,%eax
 80bc3b4:	01 c2                	add    %eax,%edx
 80bc3b6:	8b 85 18 ff ff ff    	mov    -0xe8(%ebp),%eax
 80bc3bc:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bc3bf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bc3c2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bc3c5:	89 04 24             	mov    %eax,(%esp)
 80bc3c8:	e8 9f 14 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bc3cd:	89 c3                	mov    %eax,%ebx
 80bc3cf:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bc3d2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bc3d5:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc3d9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bc3dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc3e0:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bc3e3:	89 04 24             	mov    %eax,(%esp)
 80bc3e6:	e8 67 14 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bc3eb:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bc3ee:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80bc3f1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bc3f4:	01 45 d4             	add    %eax,-0x2c(%ebp)
 80bc3f7:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bc3fa:	89 04 24             	mov    %eax,(%esp)
 80bc3fd:	e8 88 14 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bc402:	89 c3                	mov    %eax,%ebx
 80bc404:	03 5d e0             	add    -0x20(%ebp),%ebx
 80bc407:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bc40a:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc40e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bc411:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc415:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bc418:	89 04 24             	mov    %eax,(%esp)
 80bc41b:	e8 1e 14 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bc420:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bc423:	a1 30 30 b2 08       	mov    0x8b23030,%eax
 80bc428:	01 c2                	add    %eax,%edx
 80bc42a:	8b 85 1c ff ff ff    	mov    -0xe4(%ebp),%eax
 80bc430:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bc433:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bc436:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bc439:	89 04 24             	mov    %eax,(%esp)
 80bc43c:	e8 2b 14 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bc441:	89 c3                	mov    %eax,%ebx
 80bc443:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bc446:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bc449:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc44d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bc450:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc454:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bc457:	89 04 24             	mov    %eax,(%esp)
 80bc45a:	e8 f3 13 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bc45f:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bc462:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80bc465:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bc468:	01 45 f0             	add    %eax,-0x10(%ebp)
 80bc46b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bc46e:	89 04 24             	mov    %eax,(%esp)
 80bc471:	e8 14 14 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bc476:	89 c3                	mov    %eax,%ebx
 80bc478:	03 5d dc             	add    -0x24(%ebp),%ebx
 80bc47b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bc47e:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc482:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bc485:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc489:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bc48c:	89 04 24             	mov    %eax,(%esp)
 80bc48f:	e8 aa 13 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bc494:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bc497:	a1 34 30 b2 08       	mov    0x8b23034,%eax
 80bc49c:	01 c2                	add    %eax,%edx
 80bc49e:	8b 85 20 ff ff ff    	mov    -0xe0(%ebp),%eax
 80bc4a4:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bc4a7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bc4aa:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bc4ad:	89 04 24             	mov    %eax,(%esp)
 80bc4b0:	e8 b7 13 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bc4b5:	89 c3                	mov    %eax,%ebx
 80bc4b7:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bc4ba:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bc4bd:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc4c1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bc4c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc4c8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bc4cb:	89 04 24             	mov    %eax,(%esp)
 80bc4ce:	e8 7f 13 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bc4d3:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bc4d6:	89 45 dc             	mov    %eax,-0x24(%ebp)
 80bc4d9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bc4dc:	01 45 ec             	add    %eax,-0x14(%ebp)
 80bc4df:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bc4e2:	89 04 24             	mov    %eax,(%esp)
 80bc4e5:	e8 a0 13 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bc4ea:	89 c3                	mov    %eax,%ebx
 80bc4ec:	03 5d d8             	add    -0x28(%ebp),%ebx
 80bc4ef:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bc4f2:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc4f6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bc4f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc4fd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bc500:	89 04 24             	mov    %eax,(%esp)
 80bc503:	e8 36 13 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bc508:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bc50b:	a1 38 30 b2 08       	mov    0x8b23038,%eax
 80bc510:	01 c2                	add    %eax,%edx
 80bc512:	8b 85 24 ff ff ff    	mov    -0xdc(%ebp),%eax
 80bc518:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bc51b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bc51e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bc521:	89 04 24             	mov    %eax,(%esp)
 80bc524:	e8 43 13 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bc529:	89 c3                	mov    %eax,%ebx
 80bc52b:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bc52e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bc531:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc535:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bc538:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc53c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bc53f:	89 04 24             	mov    %eax,(%esp)
 80bc542:	e8 0b 13 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bc547:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bc54a:	89 45 d8             	mov    %eax,-0x28(%ebp)
 80bc54d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bc550:	01 45 e8             	add    %eax,-0x18(%ebp)
 80bc553:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bc556:	89 04 24             	mov    %eax,(%esp)
 80bc559:	e8 2c 13 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bc55e:	89 c3                	mov    %eax,%ebx
 80bc560:	03 5d d4             	add    -0x2c(%ebp),%ebx
 80bc563:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bc566:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc56a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bc56d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc571:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bc574:	89 04 24             	mov    %eax,(%esp)
 80bc577:	e8 c2 12 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bc57c:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bc57f:	a1 3c 30 b2 08       	mov    0x8b2303c,%eax
 80bc584:	01 c2                	add    %eax,%edx
 80bc586:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
 80bc58c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bc58f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bc592:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bc595:	89 04 24             	mov    %eax,(%esp)
 80bc598:	e8 cf 12 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bc59d:	89 c3                	mov    %eax,%ebx
 80bc59f:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bc5a2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bc5a5:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc5a9:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bc5ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc5b0:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bc5b3:	89 04 24             	mov    %eax,(%esp)
 80bc5b6:	e8 97 12 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bc5bb:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bc5be:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 80bc5c1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bc5c4:	01 45 e4             	add    %eax,-0x1c(%ebp)
 80bc5c7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bc5ca:	89 04 24             	mov    %eax,(%esp)
 80bc5cd:	e8 b8 12 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bc5d2:	89 c3                	mov    %eax,%ebx
 80bc5d4:	03 5d f0             	add    -0x10(%ebp),%ebx
 80bc5d7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bc5da:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc5de:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bc5e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc5e5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bc5e8:	89 04 24             	mov    %eax,(%esp)
 80bc5eb:	e8 4e 12 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bc5f0:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bc5f3:	a1 40 30 b2 08       	mov    0x8b23040,%eax
 80bc5f8:	01 c2                	add    %eax,%edx
 80bc5fa:	8b 85 2c ff ff ff    	mov    -0xd4(%ebp),%eax
 80bc600:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bc603:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bc606:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bc609:	89 04 24             	mov    %eax,(%esp)
 80bc60c:	e8 5b 12 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bc611:	89 c3                	mov    %eax,%ebx
 80bc613:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bc616:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bc619:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc61d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bc620:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc624:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bc627:	89 04 24             	mov    %eax,(%esp)
 80bc62a:	e8 23 12 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bc62f:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bc632:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80bc635:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bc638:	01 45 e0             	add    %eax,-0x20(%ebp)
 80bc63b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bc63e:	89 04 24             	mov    %eax,(%esp)
 80bc641:	e8 44 12 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bc646:	89 c3                	mov    %eax,%ebx
 80bc648:	03 5d ec             	add    -0x14(%ebp),%ebx
 80bc64b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bc64e:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc652:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bc655:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc659:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bc65c:	89 04 24             	mov    %eax,(%esp)
 80bc65f:	e8 da 11 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bc664:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bc667:	a1 44 30 b2 08       	mov    0x8b23044,%eax
 80bc66c:	01 c2                	add    %eax,%edx
 80bc66e:	8b 85 30 ff ff ff    	mov    -0xd0(%ebp),%eax
 80bc674:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bc677:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bc67a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bc67d:	89 04 24             	mov    %eax,(%esp)
 80bc680:	e8 e7 11 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bc685:	89 c3                	mov    %eax,%ebx
 80bc687:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bc68a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bc68d:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc691:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bc694:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc698:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bc69b:	89 04 24             	mov    %eax,(%esp)
 80bc69e:	e8 af 11 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bc6a3:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bc6a6:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80bc6a9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bc6ac:	01 45 dc             	add    %eax,-0x24(%ebp)
 80bc6af:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bc6b2:	89 04 24             	mov    %eax,(%esp)
 80bc6b5:	e8 d0 11 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bc6ba:	89 c3                	mov    %eax,%ebx
 80bc6bc:	03 5d e8             	add    -0x18(%ebp),%ebx
 80bc6bf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bc6c2:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc6c6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bc6c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc6cd:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bc6d0:	89 04 24             	mov    %eax,(%esp)
 80bc6d3:	e8 66 11 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bc6d8:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bc6db:	a1 48 30 b2 08       	mov    0x8b23048,%eax
 80bc6e0:	01 c2                	add    %eax,%edx
 80bc6e2:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 80bc6e8:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bc6eb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bc6ee:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bc6f1:	89 04 24             	mov    %eax,(%esp)
 80bc6f4:	e8 73 11 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bc6f9:	89 c3                	mov    %eax,%ebx
 80bc6fb:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bc6fe:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bc701:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc705:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bc708:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc70c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bc70f:	89 04 24             	mov    %eax,(%esp)
 80bc712:	e8 3b 11 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bc717:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bc71a:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80bc71d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bc720:	01 45 d8             	add    %eax,-0x28(%ebp)
 80bc723:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bc726:	89 04 24             	mov    %eax,(%esp)
 80bc729:	e8 5c 11 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bc72e:	89 c3                	mov    %eax,%ebx
 80bc730:	03 5d e4             	add    -0x1c(%ebp),%ebx
 80bc733:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bc736:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc73a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bc73d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc741:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bc744:	89 04 24             	mov    %eax,(%esp)
 80bc747:	e8 f2 10 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bc74c:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bc74f:	a1 4c 30 b2 08       	mov    0x8b2304c,%eax
 80bc754:	01 c2                	add    %eax,%edx
 80bc756:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 80bc75c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bc75f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bc762:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bc765:	89 04 24             	mov    %eax,(%esp)
 80bc768:	e8 ff 10 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bc76d:	89 c3                	mov    %eax,%ebx
 80bc76f:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bc772:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bc775:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc779:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bc77c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc780:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bc783:	89 04 24             	mov    %eax,(%esp)
 80bc786:	e8 c7 10 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bc78b:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bc78e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80bc791:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bc794:	01 45 d4             	add    %eax,-0x2c(%ebp)
 80bc797:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bc79a:	89 04 24             	mov    %eax,(%esp)
 80bc79d:	e8 e8 10 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bc7a2:	89 c3                	mov    %eax,%ebx
 80bc7a4:	03 5d e0             	add    -0x20(%ebp),%ebx
 80bc7a7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bc7aa:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc7ae:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bc7b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc7b5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bc7b8:	89 04 24             	mov    %eax,(%esp)
 80bc7bb:	e8 7e 10 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bc7c0:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bc7c3:	a1 50 30 b2 08       	mov    0x8b23050,%eax
 80bc7c8:	01 c2                	add    %eax,%edx
 80bc7ca:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
 80bc7d0:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bc7d3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bc7d6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bc7d9:	89 04 24             	mov    %eax,(%esp)
 80bc7dc:	e8 8b 10 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bc7e1:	89 c3                	mov    %eax,%ebx
 80bc7e3:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bc7e6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bc7e9:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc7ed:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bc7f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc7f4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bc7f7:	89 04 24             	mov    %eax,(%esp)
 80bc7fa:	e8 53 10 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bc7ff:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bc802:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80bc805:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bc808:	01 45 f0             	add    %eax,-0x10(%ebp)
 80bc80b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bc80e:	89 04 24             	mov    %eax,(%esp)
 80bc811:	e8 74 10 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bc816:	89 c3                	mov    %eax,%ebx
 80bc818:	03 5d dc             	add    -0x24(%ebp),%ebx
 80bc81b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bc81e:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc822:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bc825:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc829:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bc82c:	89 04 24             	mov    %eax,(%esp)
 80bc82f:	e8 0a 10 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bc834:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bc837:	a1 54 30 b2 08       	mov    0x8b23054,%eax
 80bc83c:	01 c2                	add    %eax,%edx
 80bc83e:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 80bc844:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bc847:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bc84a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bc84d:	89 04 24             	mov    %eax,(%esp)
 80bc850:	e8 17 10 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bc855:	89 c3                	mov    %eax,%ebx
 80bc857:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bc85a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bc85d:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc861:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bc864:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc868:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bc86b:	89 04 24             	mov    %eax,(%esp)
 80bc86e:	e8 df 0f 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bc873:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bc876:	89 45 dc             	mov    %eax,-0x24(%ebp)
 80bc879:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bc87c:	01 45 ec             	add    %eax,-0x14(%ebp)
 80bc87f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bc882:	89 04 24             	mov    %eax,(%esp)
 80bc885:	e8 00 10 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bc88a:	89 c3                	mov    %eax,%ebx
 80bc88c:	03 5d d8             	add    -0x28(%ebp),%ebx
 80bc88f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bc892:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc896:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bc899:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc89d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bc8a0:	89 04 24             	mov    %eax,(%esp)
 80bc8a3:	e8 96 0f 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bc8a8:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bc8ab:	a1 58 30 b2 08       	mov    0x8b23058,%eax
 80bc8b0:	01 c2                	add    %eax,%edx
 80bc8b2:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 80bc8b8:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bc8bb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bc8be:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bc8c1:	89 04 24             	mov    %eax,(%esp)
 80bc8c4:	e8 a3 0f 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bc8c9:	89 c3                	mov    %eax,%ebx
 80bc8cb:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bc8ce:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bc8d1:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc8d5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bc8d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc8dc:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bc8df:	89 04 24             	mov    %eax,(%esp)
 80bc8e2:	e8 6b 0f 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bc8e7:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bc8ea:	89 45 d8             	mov    %eax,-0x28(%ebp)
 80bc8ed:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bc8f0:	01 45 e8             	add    %eax,-0x18(%ebp)
 80bc8f3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bc8f6:	89 04 24             	mov    %eax,(%esp)
 80bc8f9:	e8 8c 0f 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bc8fe:	89 c3                	mov    %eax,%ebx
 80bc900:	03 5d d4             	add    -0x2c(%ebp),%ebx
 80bc903:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bc906:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc90a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bc90d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc911:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bc914:	89 04 24             	mov    %eax,(%esp)
 80bc917:	e8 22 0f 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bc91c:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bc91f:	a1 5c 30 b2 08       	mov    0x8b2305c,%eax
 80bc924:	01 c2                	add    %eax,%edx
 80bc926:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 80bc92c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bc92f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bc932:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bc935:	89 04 24             	mov    %eax,(%esp)
 80bc938:	e8 2f 0f 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bc93d:	89 c3                	mov    %eax,%ebx
 80bc93f:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bc942:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bc945:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc949:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bc94c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc950:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bc953:	89 04 24             	mov    %eax,(%esp)
 80bc956:	e8 f7 0e 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bc95b:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bc95e:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 80bc961:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bc964:	01 45 e4             	add    %eax,-0x1c(%ebp)
 80bc967:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bc96a:	89 04 24             	mov    %eax,(%esp)
 80bc96d:	e8 18 0f 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bc972:	89 c3                	mov    %eax,%ebx
 80bc974:	03 5d f0             	add    -0x10(%ebp),%ebx
 80bc977:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bc97a:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc97e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bc981:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc985:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bc988:	89 04 24             	mov    %eax,(%esp)
 80bc98b:	e8 ae 0e 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bc990:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bc993:	a1 60 30 b2 08       	mov    0x8b23060,%eax
 80bc998:	01 c2                	add    %eax,%edx
 80bc99a:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 80bc9a0:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bc9a3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bc9a6:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bc9a9:	89 04 24             	mov    %eax,(%esp)
 80bc9ac:	e8 bb 0e 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bc9b1:	89 c3                	mov    %eax,%ebx
 80bc9b3:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bc9b6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bc9b9:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc9bd:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bc9c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc9c4:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bc9c7:	89 04 24             	mov    %eax,(%esp)
 80bc9ca:	e8 83 0e 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bc9cf:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bc9d2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80bc9d5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bc9d8:	01 45 e0             	add    %eax,-0x20(%ebp)
 80bc9db:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bc9de:	89 04 24             	mov    %eax,(%esp)
 80bc9e1:	e8 a4 0e 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bc9e6:	89 c3                	mov    %eax,%ebx
 80bc9e8:	03 5d ec             	add    -0x14(%ebp),%ebx
 80bc9eb:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bc9ee:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bc9f2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bc9f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bc9f9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bc9fc:	89 04 24             	mov    %eax,(%esp)
 80bc9ff:	e8 3a 0e 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bca04:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bca07:	a1 64 30 b2 08       	mov    0x8b23064,%eax
 80bca0c:	01 c2                	add    %eax,%edx
 80bca0e:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 80bca14:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bca17:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bca1a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bca1d:	89 04 24             	mov    %eax,(%esp)
 80bca20:	e8 47 0e 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bca25:	89 c3                	mov    %eax,%ebx
 80bca27:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bca2a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bca2d:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bca31:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bca34:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bca38:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bca3b:	89 04 24             	mov    %eax,(%esp)
 80bca3e:	e8 0f 0e 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bca43:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bca46:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80bca49:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bca4c:	01 45 dc             	add    %eax,-0x24(%ebp)
 80bca4f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bca52:	89 04 24             	mov    %eax,(%esp)
 80bca55:	e8 30 0e 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bca5a:	89 c3                	mov    %eax,%ebx
 80bca5c:	03 5d e8             	add    -0x18(%ebp),%ebx
 80bca5f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bca62:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bca66:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bca69:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bca6d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bca70:	89 04 24             	mov    %eax,(%esp)
 80bca73:	e8 c6 0d 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bca78:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bca7b:	a1 68 30 b2 08       	mov    0x8b23068,%eax
 80bca80:	01 c2                	add    %eax,%edx
 80bca82:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
 80bca88:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bca8b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bca8e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bca91:	89 04 24             	mov    %eax,(%esp)
 80bca94:	e8 d3 0d 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bca99:	89 c3                	mov    %eax,%ebx
 80bca9b:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bca9e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bcaa1:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bcaa5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bcaa8:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bcaac:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bcaaf:	89 04 24             	mov    %eax,(%esp)
 80bcab2:	e8 9b 0d 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bcab7:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bcaba:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80bcabd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bcac0:	01 45 d8             	add    %eax,-0x28(%ebp)
 80bcac3:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bcac6:	89 04 24             	mov    %eax,(%esp)
 80bcac9:	e8 bc 0d 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bcace:	89 c3                	mov    %eax,%ebx
 80bcad0:	03 5d e4             	add    -0x1c(%ebp),%ebx
 80bcad3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bcad6:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bcada:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bcadd:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bcae1:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bcae4:	89 04 24             	mov    %eax,(%esp)
 80bcae7:	e8 52 0d 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bcaec:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bcaef:	a1 6c 30 b2 08       	mov    0x8b2306c,%eax
 80bcaf4:	01 c2                	add    %eax,%edx
 80bcaf6:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 80bcafc:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bcaff:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bcb02:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bcb05:	89 04 24             	mov    %eax,(%esp)
 80bcb08:	e8 5f 0d 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bcb0d:	89 c3                	mov    %eax,%ebx
 80bcb0f:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bcb12:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bcb15:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bcb19:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bcb1c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bcb20:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bcb23:	89 04 24             	mov    %eax,(%esp)
 80bcb26:	e8 27 0d 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bcb2b:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bcb2e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80bcb31:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bcb34:	01 45 d4             	add    %eax,-0x2c(%ebp)
 80bcb37:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bcb3a:	89 04 24             	mov    %eax,(%esp)
 80bcb3d:	e8 48 0d 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bcb42:	89 c3                	mov    %eax,%ebx
 80bcb44:	03 5d e0             	add    -0x20(%ebp),%ebx
 80bcb47:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bcb4a:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bcb4e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bcb51:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bcb55:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bcb58:	89 04 24             	mov    %eax,(%esp)
 80bcb5b:	e8 de 0c 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bcb60:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bcb63:	a1 70 30 b2 08       	mov    0x8b23070,%eax
 80bcb68:	01 c2                	add    %eax,%edx
 80bcb6a:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 80bcb70:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bcb73:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bcb76:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bcb79:	89 04 24             	mov    %eax,(%esp)
 80bcb7c:	e8 eb 0c 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bcb81:	89 c3                	mov    %eax,%ebx
 80bcb83:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bcb86:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bcb89:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bcb8d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bcb90:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bcb94:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bcb97:	89 04 24             	mov    %eax,(%esp)
 80bcb9a:	e8 b3 0c 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bcb9f:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bcba2:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80bcba5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bcba8:	01 45 f0             	add    %eax,-0x10(%ebp)
 80bcbab:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bcbae:	89 04 24             	mov    %eax,(%esp)
 80bcbb1:	e8 d4 0c 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bcbb6:	89 c3                	mov    %eax,%ebx
 80bcbb8:	03 5d dc             	add    -0x24(%ebp),%ebx
 80bcbbb:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bcbbe:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bcbc2:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bcbc5:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bcbc9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bcbcc:	89 04 24             	mov    %eax,(%esp)
 80bcbcf:	e8 6a 0c 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bcbd4:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bcbd7:	a1 74 30 b2 08       	mov    0x8b23074,%eax
 80bcbdc:	01 c2                	add    %eax,%edx
 80bcbde:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 80bcbe4:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bcbe7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bcbea:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bcbed:	89 04 24             	mov    %eax,(%esp)
 80bcbf0:	e8 77 0c 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bcbf5:	89 c3                	mov    %eax,%ebx
 80bcbf7:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bcbfa:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bcbfd:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bcc01:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bcc04:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bcc08:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bcc0b:	89 04 24             	mov    %eax,(%esp)
 80bcc0e:	e8 3f 0c 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bcc13:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bcc16:	89 45 dc             	mov    %eax,-0x24(%ebp)
 80bcc19:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bcc1c:	01 45 ec             	add    %eax,-0x14(%ebp)
 80bcc1f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bcc22:	89 04 24             	mov    %eax,(%esp)
 80bcc25:	e8 60 0c 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bcc2a:	89 c3                	mov    %eax,%ebx
 80bcc2c:	03 5d d8             	add    -0x28(%ebp),%ebx
 80bcc2f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bcc32:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bcc36:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bcc39:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bcc3d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bcc40:	89 04 24             	mov    %eax,(%esp)
 80bcc43:	e8 f6 0b 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bcc48:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bcc4b:	a1 78 30 b2 08       	mov    0x8b23078,%eax
 80bcc50:	01 c2                	add    %eax,%edx
 80bcc52:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 80bcc58:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bcc5b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bcc5e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bcc61:	89 04 24             	mov    %eax,(%esp)
 80bcc64:	e8 03 0c 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bcc69:	89 c3                	mov    %eax,%ebx
 80bcc6b:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bcc6e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bcc71:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bcc75:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bcc78:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bcc7c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bcc7f:	89 04 24             	mov    %eax,(%esp)
 80bcc82:	e8 cb 0b 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bcc87:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bcc8a:	89 45 d8             	mov    %eax,-0x28(%ebp)
 80bcc8d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bcc90:	01 45 e8             	add    %eax,-0x18(%ebp)
 80bcc93:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bcc96:	89 04 24             	mov    %eax,(%esp)
 80bcc99:	e8 ec 0b 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bcc9e:	89 c3                	mov    %eax,%ebx
 80bcca0:	03 5d d4             	add    -0x2c(%ebp),%ebx
 80bcca3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bcca6:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bccaa:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bccad:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bccb1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bccb4:	89 04 24             	mov    %eax,(%esp)
 80bccb7:	e8 82 0b 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bccbc:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bccbf:	a1 7c 30 b2 08       	mov    0x8b2307c,%eax
 80bccc4:	01 c2                	add    %eax,%edx
 80bccc6:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 80bcccc:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bcccf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bccd2:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bccd5:	89 04 24             	mov    %eax,(%esp)
 80bccd8:	e8 8f 0b 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bccdd:	89 c3                	mov    %eax,%ebx
 80bccdf:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bcce2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bcce5:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bcce9:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bccec:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bccf0:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bccf3:	89 04 24             	mov    %eax,(%esp)
 80bccf6:	e8 57 0b 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bccfb:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bccfe:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 80bcd01:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bcd04:	01 45 e4             	add    %eax,-0x1c(%ebp)
 80bcd07:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bcd0a:	89 04 24             	mov    %eax,(%esp)
 80bcd0d:	e8 78 0b 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bcd12:	89 c3                	mov    %eax,%ebx
 80bcd14:	03 5d f0             	add    -0x10(%ebp),%ebx
 80bcd17:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bcd1a:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bcd1e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bcd21:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bcd25:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bcd28:	89 04 24             	mov    %eax,(%esp)
 80bcd2b:	e8 0e 0b 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bcd30:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bcd33:	a1 80 30 b2 08       	mov    0x8b23080,%eax
 80bcd38:	01 c2                	add    %eax,%edx
 80bcd3a:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 80bcd40:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bcd43:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bcd46:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bcd49:	89 04 24             	mov    %eax,(%esp)
 80bcd4c:	e8 1b 0b 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bcd51:	89 c3                	mov    %eax,%ebx
 80bcd53:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bcd56:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bcd59:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bcd5d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bcd60:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bcd64:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bcd67:	89 04 24             	mov    %eax,(%esp)
 80bcd6a:	e8 e3 0a 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bcd6f:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bcd72:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80bcd75:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bcd78:	01 45 e0             	add    %eax,-0x20(%ebp)
 80bcd7b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bcd7e:	89 04 24             	mov    %eax,(%esp)
 80bcd81:	e8 04 0b 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bcd86:	89 c3                	mov    %eax,%ebx
 80bcd88:	03 5d ec             	add    -0x14(%ebp),%ebx
 80bcd8b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bcd8e:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bcd92:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bcd95:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bcd99:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bcd9c:	89 04 24             	mov    %eax,(%esp)
 80bcd9f:	e8 9a 0a 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bcda4:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bcda7:	a1 84 30 b2 08       	mov    0x8b23084,%eax
 80bcdac:	01 c2                	add    %eax,%edx
 80bcdae:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 80bcdb4:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bcdb7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bcdba:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bcdbd:	89 04 24             	mov    %eax,(%esp)
 80bcdc0:	e8 a7 0a 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bcdc5:	89 c3                	mov    %eax,%ebx
 80bcdc7:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bcdca:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bcdcd:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bcdd1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bcdd4:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bcdd8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bcddb:	89 04 24             	mov    %eax,(%esp)
 80bcdde:	e8 6f 0a 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bcde3:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bcde6:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80bcde9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bcdec:	01 45 dc             	add    %eax,-0x24(%ebp)
 80bcdef:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bcdf2:	89 04 24             	mov    %eax,(%esp)
 80bcdf5:	e8 90 0a 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bcdfa:	89 c3                	mov    %eax,%ebx
 80bcdfc:	03 5d e8             	add    -0x18(%ebp),%ebx
 80bcdff:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bce02:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bce06:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bce09:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bce0d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bce10:	89 04 24             	mov    %eax,(%esp)
 80bce13:	e8 26 0a 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bce18:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bce1b:	a1 88 30 b2 08       	mov    0x8b23088,%eax
 80bce20:	01 c2                	add    %eax,%edx
 80bce22:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 80bce28:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bce2b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bce2e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bce31:	89 04 24             	mov    %eax,(%esp)
 80bce34:	e8 33 0a 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bce39:	89 c3                	mov    %eax,%ebx
 80bce3b:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bce3e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bce41:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bce45:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bce48:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bce4c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bce4f:	89 04 24             	mov    %eax,(%esp)
 80bce52:	e8 fb 09 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bce57:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bce5a:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80bce5d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bce60:	01 45 d8             	add    %eax,-0x28(%ebp)
 80bce63:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bce66:	89 04 24             	mov    %eax,(%esp)
 80bce69:	e8 1c 0a 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bce6e:	89 c3                	mov    %eax,%ebx
 80bce70:	03 5d e4             	add    -0x1c(%ebp),%ebx
 80bce73:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bce76:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bce7a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bce7d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bce81:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bce84:	89 04 24             	mov    %eax,(%esp)
 80bce87:	e8 b2 09 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bce8c:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bce8f:	a1 8c 30 b2 08       	mov    0x8b2308c,%eax
 80bce94:	01 c2                	add    %eax,%edx
 80bce96:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 80bce9c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bce9f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bcea2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bcea5:	89 04 24             	mov    %eax,(%esp)
 80bcea8:	e8 bf 09 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bcead:	89 c3                	mov    %eax,%ebx
 80bceaf:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bceb2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bceb5:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bceb9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bcebc:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bcec0:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bcec3:	89 04 24             	mov    %eax,(%esp)
 80bcec6:	e8 87 09 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bcecb:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bcece:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80bced1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bced4:	01 45 d4             	add    %eax,-0x2c(%ebp)
 80bced7:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bceda:	89 04 24             	mov    %eax,(%esp)
 80bcedd:	e8 a8 09 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bcee2:	89 c3                	mov    %eax,%ebx
 80bcee4:	03 5d e0             	add    -0x20(%ebp),%ebx
 80bcee7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bceea:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bceee:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bcef1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bcef5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bcef8:	89 04 24             	mov    %eax,(%esp)
 80bcefb:	e8 3e 09 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bcf00:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bcf03:	a1 90 30 b2 08       	mov    0x8b23090,%eax
 80bcf08:	01 c2                	add    %eax,%edx
 80bcf0a:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 80bcf10:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bcf13:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bcf16:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bcf19:	89 04 24             	mov    %eax,(%esp)
 80bcf1c:	e8 4b 09 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bcf21:	89 c3                	mov    %eax,%ebx
 80bcf23:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bcf26:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bcf29:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bcf2d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bcf30:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bcf34:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bcf37:	89 04 24             	mov    %eax,(%esp)
 80bcf3a:	e8 13 09 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bcf3f:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bcf42:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80bcf45:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bcf48:	01 45 f0             	add    %eax,-0x10(%ebp)
 80bcf4b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bcf4e:	89 04 24             	mov    %eax,(%esp)
 80bcf51:	e8 34 09 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bcf56:	89 c3                	mov    %eax,%ebx
 80bcf58:	03 5d dc             	add    -0x24(%ebp),%ebx
 80bcf5b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bcf5e:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bcf62:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bcf65:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bcf69:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bcf6c:	89 04 24             	mov    %eax,(%esp)
 80bcf6f:	e8 ca 08 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bcf74:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bcf77:	a1 94 30 b2 08       	mov    0x8b23094,%eax
 80bcf7c:	01 c2                	add    %eax,%edx
 80bcf7e:	8b 45 80             	mov    -0x80(%ebp),%eax
 80bcf81:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bcf84:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bcf87:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bcf8a:	89 04 24             	mov    %eax,(%esp)
 80bcf8d:	e8 da 08 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bcf92:	89 c3                	mov    %eax,%ebx
 80bcf94:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bcf97:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bcf9a:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bcf9e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bcfa1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bcfa5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bcfa8:	89 04 24             	mov    %eax,(%esp)
 80bcfab:	e8 a2 08 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bcfb0:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bcfb3:	89 45 dc             	mov    %eax,-0x24(%ebp)
 80bcfb6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bcfb9:	01 45 ec             	add    %eax,-0x14(%ebp)
 80bcfbc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bcfbf:	89 04 24             	mov    %eax,(%esp)
 80bcfc2:	e8 c3 08 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bcfc7:	89 c3                	mov    %eax,%ebx
 80bcfc9:	03 5d d8             	add    -0x28(%ebp),%ebx
 80bcfcc:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bcfcf:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bcfd3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bcfd6:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bcfda:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bcfdd:	89 04 24             	mov    %eax,(%esp)
 80bcfe0:	e8 59 08 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bcfe5:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bcfe8:	a1 98 30 b2 08       	mov    0x8b23098,%eax
 80bcfed:	01 c2                	add    %eax,%edx
 80bcfef:	8b 45 84             	mov    -0x7c(%ebp),%eax
 80bcff2:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bcff5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bcff8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bcffb:	89 04 24             	mov    %eax,(%esp)
 80bcffe:	e8 69 08 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bd003:	89 c3                	mov    %eax,%ebx
 80bd005:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bd008:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bd00b:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd00f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bd012:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd016:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bd019:	89 04 24             	mov    %eax,(%esp)
 80bd01c:	e8 31 08 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bd021:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bd024:	89 45 d8             	mov    %eax,-0x28(%ebp)
 80bd027:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bd02a:	01 45 e8             	add    %eax,-0x18(%ebp)
 80bd02d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bd030:	89 04 24             	mov    %eax,(%esp)
 80bd033:	e8 52 08 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bd038:	89 c3                	mov    %eax,%ebx
 80bd03a:	03 5d d4             	add    -0x2c(%ebp),%ebx
 80bd03d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bd040:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd044:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bd047:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd04b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bd04e:	89 04 24             	mov    %eax,(%esp)
 80bd051:	e8 e8 07 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bd056:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bd059:	a1 9c 30 b2 08       	mov    0x8b2309c,%eax
 80bd05e:	01 c2                	add    %eax,%edx
 80bd060:	8b 45 88             	mov    -0x78(%ebp),%eax
 80bd063:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bd066:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bd069:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bd06c:	89 04 24             	mov    %eax,(%esp)
 80bd06f:	e8 f8 07 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bd074:	89 c3                	mov    %eax,%ebx
 80bd076:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bd079:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bd07c:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd080:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bd083:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd087:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bd08a:	89 04 24             	mov    %eax,(%esp)
 80bd08d:	e8 c0 07 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bd092:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bd095:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 80bd098:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bd09b:	01 45 e4             	add    %eax,-0x1c(%ebp)
 80bd09e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bd0a1:	89 04 24             	mov    %eax,(%esp)
 80bd0a4:	e8 e1 07 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bd0a9:	89 c3                	mov    %eax,%ebx
 80bd0ab:	03 5d f0             	add    -0x10(%ebp),%ebx
 80bd0ae:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bd0b1:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd0b5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bd0b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd0bc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bd0bf:	89 04 24             	mov    %eax,(%esp)
 80bd0c2:	e8 77 07 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bd0c7:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bd0ca:	a1 a0 30 b2 08       	mov    0x8b230a0,%eax
 80bd0cf:	01 c2                	add    %eax,%edx
 80bd0d1:	8b 45 8c             	mov    -0x74(%ebp),%eax
 80bd0d4:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bd0d7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bd0da:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bd0dd:	89 04 24             	mov    %eax,(%esp)
 80bd0e0:	e8 87 07 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bd0e5:	89 c3                	mov    %eax,%ebx
 80bd0e7:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bd0ea:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bd0ed:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd0f1:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bd0f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd0f8:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bd0fb:	89 04 24             	mov    %eax,(%esp)
 80bd0fe:	e8 4f 07 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bd103:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bd106:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80bd109:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bd10c:	01 45 e0             	add    %eax,-0x20(%ebp)
 80bd10f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bd112:	89 04 24             	mov    %eax,(%esp)
 80bd115:	e8 70 07 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bd11a:	89 c3                	mov    %eax,%ebx
 80bd11c:	03 5d ec             	add    -0x14(%ebp),%ebx
 80bd11f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bd122:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd126:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bd129:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd12d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bd130:	89 04 24             	mov    %eax,(%esp)
 80bd133:	e8 06 07 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bd138:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bd13b:	a1 a4 30 b2 08       	mov    0x8b230a4,%eax
 80bd140:	01 c2                	add    %eax,%edx
 80bd142:	8b 45 90             	mov    -0x70(%ebp),%eax
 80bd145:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bd148:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bd14b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bd14e:	89 04 24             	mov    %eax,(%esp)
 80bd151:	e8 16 07 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bd156:	89 c3                	mov    %eax,%ebx
 80bd158:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bd15b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bd15e:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd162:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bd165:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd169:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bd16c:	89 04 24             	mov    %eax,(%esp)
 80bd16f:	e8 de 06 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bd174:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bd177:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80bd17a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bd17d:	01 45 dc             	add    %eax,-0x24(%ebp)
 80bd180:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bd183:	89 04 24             	mov    %eax,(%esp)
 80bd186:	e8 ff 06 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bd18b:	89 c3                	mov    %eax,%ebx
 80bd18d:	03 5d e8             	add    -0x18(%ebp),%ebx
 80bd190:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bd193:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd197:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bd19a:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd19e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bd1a1:	89 04 24             	mov    %eax,(%esp)
 80bd1a4:	e8 95 06 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bd1a9:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bd1ac:	a1 a8 30 b2 08       	mov    0x8b230a8,%eax
 80bd1b1:	01 c2                	add    %eax,%edx
 80bd1b3:	8b 45 94             	mov    -0x6c(%ebp),%eax
 80bd1b6:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bd1b9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bd1bc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bd1bf:	89 04 24             	mov    %eax,(%esp)
 80bd1c2:	e8 a5 06 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bd1c7:	89 c3                	mov    %eax,%ebx
 80bd1c9:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bd1cc:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bd1cf:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd1d3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bd1d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd1da:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bd1dd:	89 04 24             	mov    %eax,(%esp)
 80bd1e0:	e8 6d 06 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bd1e5:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bd1e8:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80bd1eb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bd1ee:	01 45 d8             	add    %eax,-0x28(%ebp)
 80bd1f1:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bd1f4:	89 04 24             	mov    %eax,(%esp)
 80bd1f7:	e8 8e 06 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bd1fc:	89 c3                	mov    %eax,%ebx
 80bd1fe:	03 5d e4             	add    -0x1c(%ebp),%ebx
 80bd201:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bd204:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd208:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bd20b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd20f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bd212:	89 04 24             	mov    %eax,(%esp)
 80bd215:	e8 24 06 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bd21a:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bd21d:	a1 ac 30 b2 08       	mov    0x8b230ac,%eax
 80bd222:	01 c2                	add    %eax,%edx
 80bd224:	8b 45 98             	mov    -0x68(%ebp),%eax
 80bd227:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bd22a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bd22d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bd230:	89 04 24             	mov    %eax,(%esp)
 80bd233:	e8 34 06 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bd238:	89 c3                	mov    %eax,%ebx
 80bd23a:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bd23d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bd240:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd244:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bd247:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd24b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bd24e:	89 04 24             	mov    %eax,(%esp)
 80bd251:	e8 fc 05 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bd256:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bd259:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80bd25c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bd25f:	01 45 d4             	add    %eax,-0x2c(%ebp)
 80bd262:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bd265:	89 04 24             	mov    %eax,(%esp)
 80bd268:	e8 1d 06 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bd26d:	89 c3                	mov    %eax,%ebx
 80bd26f:	03 5d e0             	add    -0x20(%ebp),%ebx
 80bd272:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bd275:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd279:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bd27c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd280:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bd283:	89 04 24             	mov    %eax,(%esp)
 80bd286:	e8 b3 05 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bd28b:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bd28e:	a1 b0 30 b2 08       	mov    0x8b230b0,%eax
 80bd293:	01 c2                	add    %eax,%edx
 80bd295:	8b 45 9c             	mov    -0x64(%ebp),%eax
 80bd298:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bd29b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bd29e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bd2a1:	89 04 24             	mov    %eax,(%esp)
 80bd2a4:	e8 c3 05 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bd2a9:	89 c3                	mov    %eax,%ebx
 80bd2ab:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bd2ae:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bd2b1:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd2b5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bd2b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd2bc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bd2bf:	89 04 24             	mov    %eax,(%esp)
 80bd2c2:	e8 8b 05 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bd2c7:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bd2ca:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80bd2cd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bd2d0:	01 45 f0             	add    %eax,-0x10(%ebp)
 80bd2d3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bd2d6:	89 04 24             	mov    %eax,(%esp)
 80bd2d9:	e8 ac 05 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bd2de:	89 c3                	mov    %eax,%ebx
 80bd2e0:	03 5d dc             	add    -0x24(%ebp),%ebx
 80bd2e3:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bd2e6:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd2ea:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bd2ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd2f1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bd2f4:	89 04 24             	mov    %eax,(%esp)
 80bd2f7:	e8 42 05 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bd2fc:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bd2ff:	a1 b4 30 b2 08       	mov    0x8b230b4,%eax
 80bd304:	01 c2                	add    %eax,%edx
 80bd306:	8b 45 a0             	mov    -0x60(%ebp),%eax
 80bd309:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bd30c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bd30f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bd312:	89 04 24             	mov    %eax,(%esp)
 80bd315:	e8 52 05 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bd31a:	89 c3                	mov    %eax,%ebx
 80bd31c:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bd31f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bd322:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd326:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bd329:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd32d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bd330:	89 04 24             	mov    %eax,(%esp)
 80bd333:	e8 1a 05 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bd338:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bd33b:	89 45 dc             	mov    %eax,-0x24(%ebp)
 80bd33e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bd341:	01 45 ec             	add    %eax,-0x14(%ebp)
 80bd344:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bd347:	89 04 24             	mov    %eax,(%esp)
 80bd34a:	e8 3b 05 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bd34f:	89 c3                	mov    %eax,%ebx
 80bd351:	03 5d d8             	add    -0x28(%ebp),%ebx
 80bd354:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bd357:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd35b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bd35e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd362:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bd365:	89 04 24             	mov    %eax,(%esp)
 80bd368:	e8 d1 04 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bd36d:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bd370:	a1 b8 30 b2 08       	mov    0x8b230b8,%eax
 80bd375:	01 c2                	add    %eax,%edx
 80bd377:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 80bd37a:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bd37d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bd380:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bd383:	89 04 24             	mov    %eax,(%esp)
 80bd386:	e8 e1 04 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bd38b:	89 c3                	mov    %eax,%ebx
 80bd38d:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bd390:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bd393:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd397:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bd39a:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd39e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bd3a1:	89 04 24             	mov    %eax,(%esp)
 80bd3a4:	e8 a9 04 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bd3a9:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bd3ac:	89 45 d8             	mov    %eax,-0x28(%ebp)
 80bd3af:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bd3b2:	01 45 e8             	add    %eax,-0x18(%ebp)
 80bd3b5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bd3b8:	89 04 24             	mov    %eax,(%esp)
 80bd3bb:	e8 ca 04 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bd3c0:	89 c3                	mov    %eax,%ebx
 80bd3c2:	03 5d d4             	add    -0x2c(%ebp),%ebx
 80bd3c5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bd3c8:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd3cc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bd3cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd3d3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bd3d6:	89 04 24             	mov    %eax,(%esp)
 80bd3d9:	e8 60 04 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bd3de:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bd3e1:	a1 bc 30 b2 08       	mov    0x8b230bc,%eax
 80bd3e6:	01 c2                	add    %eax,%edx
 80bd3e8:	8b 45 a8             	mov    -0x58(%ebp),%eax
 80bd3eb:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bd3ee:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bd3f1:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bd3f4:	89 04 24             	mov    %eax,(%esp)
 80bd3f7:	e8 70 04 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bd3fc:	89 c3                	mov    %eax,%ebx
 80bd3fe:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bd401:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bd404:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd408:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bd40b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd40f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bd412:	89 04 24             	mov    %eax,(%esp)
 80bd415:	e8 38 04 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bd41a:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bd41d:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 80bd420:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bd423:	01 45 e4             	add    %eax,-0x1c(%ebp)
 80bd426:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bd429:	89 04 24             	mov    %eax,(%esp)
 80bd42c:	e8 59 04 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bd431:	89 c3                	mov    %eax,%ebx
 80bd433:	03 5d f0             	add    -0x10(%ebp),%ebx
 80bd436:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bd439:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd43d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bd440:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd444:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bd447:	89 04 24             	mov    %eax,(%esp)
 80bd44a:	e8 ef 03 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bd44f:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bd452:	a1 c0 30 b2 08       	mov    0x8b230c0,%eax
 80bd457:	01 c2                	add    %eax,%edx
 80bd459:	8b 45 ac             	mov    -0x54(%ebp),%eax
 80bd45c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bd45f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bd462:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bd465:	89 04 24             	mov    %eax,(%esp)
 80bd468:	e8 ff 03 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bd46d:	89 c3                	mov    %eax,%ebx
 80bd46f:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bd472:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bd475:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd479:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bd47c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd480:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bd483:	89 04 24             	mov    %eax,(%esp)
 80bd486:	e8 c7 03 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bd48b:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bd48e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80bd491:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bd494:	01 45 e0             	add    %eax,-0x20(%ebp)
 80bd497:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bd49a:	89 04 24             	mov    %eax,(%esp)
 80bd49d:	e8 e8 03 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bd4a2:	89 c3                	mov    %eax,%ebx
 80bd4a4:	03 5d ec             	add    -0x14(%ebp),%ebx
 80bd4a7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bd4aa:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd4ae:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bd4b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd4b5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bd4b8:	89 04 24             	mov    %eax,(%esp)
 80bd4bb:	e8 7e 03 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bd4c0:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bd4c3:	a1 c4 30 b2 08       	mov    0x8b230c4,%eax
 80bd4c8:	01 c2                	add    %eax,%edx
 80bd4ca:	8b 45 b0             	mov    -0x50(%ebp),%eax
 80bd4cd:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bd4d0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bd4d3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bd4d6:	89 04 24             	mov    %eax,(%esp)
 80bd4d9:	e8 8e 03 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bd4de:	89 c3                	mov    %eax,%ebx
 80bd4e0:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bd4e3:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bd4e6:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd4ea:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bd4ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd4f1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bd4f4:	89 04 24             	mov    %eax,(%esp)
 80bd4f7:	e8 56 03 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bd4fc:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bd4ff:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80bd502:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bd505:	01 45 dc             	add    %eax,-0x24(%ebp)
 80bd508:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bd50b:	89 04 24             	mov    %eax,(%esp)
 80bd50e:	e8 77 03 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bd513:	89 c3                	mov    %eax,%ebx
 80bd515:	03 5d e8             	add    -0x18(%ebp),%ebx
 80bd518:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bd51b:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd51f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bd522:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd526:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bd529:	89 04 24             	mov    %eax,(%esp)
 80bd52c:	e8 0d 03 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bd531:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bd534:	a1 c8 30 b2 08       	mov    0x8b230c8,%eax
 80bd539:	01 c2                	add    %eax,%edx
 80bd53b:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 80bd53e:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bd541:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bd544:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bd547:	89 04 24             	mov    %eax,(%esp)
 80bd54a:	e8 1d 03 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bd54f:	89 c3                	mov    %eax,%ebx
 80bd551:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bd554:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bd557:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd55b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bd55e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd562:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bd565:	89 04 24             	mov    %eax,(%esp)
 80bd568:	e8 e5 02 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bd56d:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bd570:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80bd573:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bd576:	01 45 d8             	add    %eax,-0x28(%ebp)
 80bd579:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bd57c:	89 04 24             	mov    %eax,(%esp)
 80bd57f:	e8 06 03 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bd584:	89 c3                	mov    %eax,%ebx
 80bd586:	03 5d e4             	add    -0x1c(%ebp),%ebx
 80bd589:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bd58c:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd590:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bd593:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd597:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bd59a:	89 04 24             	mov    %eax,(%esp)
 80bd59d:	e8 9c 02 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bd5a2:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bd5a5:	a1 cc 30 b2 08       	mov    0x8b230cc,%eax
 80bd5aa:	01 c2                	add    %eax,%edx
 80bd5ac:	8b 45 b8             	mov    -0x48(%ebp),%eax
 80bd5af:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bd5b2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bd5b5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bd5b8:	89 04 24             	mov    %eax,(%esp)
 80bd5bb:	e8 ac 02 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bd5c0:	89 c3                	mov    %eax,%ebx
 80bd5c2:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bd5c5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bd5c8:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd5cc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bd5cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd5d3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bd5d6:	89 04 24             	mov    %eax,(%esp)
 80bd5d9:	e8 74 02 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bd5de:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bd5e1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80bd5e4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bd5e7:	01 45 d4             	add    %eax,-0x2c(%ebp)
 80bd5ea:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bd5ed:	89 04 24             	mov    %eax,(%esp)
 80bd5f0:	e8 95 02 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bd5f5:	89 c3                	mov    %eax,%ebx
 80bd5f7:	03 5d e0             	add    -0x20(%ebp),%ebx
 80bd5fa:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bd5fd:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd601:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bd604:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd608:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bd60b:	89 04 24             	mov    %eax,(%esp)
 80bd60e:	e8 2b 02 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bd613:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bd616:	a1 d0 30 b2 08       	mov    0x8b230d0,%eax
 80bd61b:	01 c2                	add    %eax,%edx
 80bd61d:	8b 45 bc             	mov    -0x44(%ebp),%eax
 80bd620:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bd623:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bd626:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bd629:	89 04 24             	mov    %eax,(%esp)
 80bd62c:	e8 3b 02 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bd631:	89 c3                	mov    %eax,%ebx
 80bd633:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bd636:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bd639:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd63d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bd640:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd644:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bd647:	89 04 24             	mov    %eax,(%esp)
 80bd64a:	e8 03 02 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bd64f:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bd652:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80bd655:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bd658:	01 45 f0             	add    %eax,-0x10(%ebp)
 80bd65b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bd65e:	89 04 24             	mov    %eax,(%esp)
 80bd661:	e8 24 02 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bd666:	89 c3                	mov    %eax,%ebx
 80bd668:	03 5d dc             	add    -0x24(%ebp),%ebx
 80bd66b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bd66e:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd672:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bd675:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd679:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bd67c:	89 04 24             	mov    %eax,(%esp)
 80bd67f:	e8 ba 01 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bd684:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bd687:	a1 d4 30 b2 08       	mov    0x8b230d4,%eax
 80bd68c:	01 c2                	add    %eax,%edx
 80bd68e:	8b 45 c0             	mov    -0x40(%ebp),%eax
 80bd691:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bd694:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bd697:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bd69a:	89 04 24             	mov    %eax,(%esp)
 80bd69d:	e8 ca 01 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bd6a2:	89 c3                	mov    %eax,%ebx
 80bd6a4:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bd6a7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bd6aa:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd6ae:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bd6b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd6b5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bd6b8:	89 04 24             	mov    %eax,(%esp)
 80bd6bb:	e8 92 01 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bd6c0:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bd6c3:	89 45 dc             	mov    %eax,-0x24(%ebp)
 80bd6c6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bd6c9:	01 45 ec             	add    %eax,-0x14(%ebp)
 80bd6cc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bd6cf:	89 04 24             	mov    %eax,(%esp)
 80bd6d2:	e8 b3 01 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bd6d7:	89 c3                	mov    %eax,%ebx
 80bd6d9:	03 5d d8             	add    -0x28(%ebp),%ebx
 80bd6dc:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80bd6df:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd6e3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bd6e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd6ea:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bd6ed:	89 04 24             	mov    %eax,(%esp)
 80bd6f0:	e8 49 01 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bd6f5:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bd6f8:	a1 d8 30 b2 08       	mov    0x8b230d8,%eax
 80bd6fd:	01 c2                	add    %eax,%edx
 80bd6ff:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 80bd702:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bd705:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bd708:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bd70b:	89 04 24             	mov    %eax,(%esp)
 80bd70e:	e8 59 01 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bd713:	89 c3                	mov    %eax,%ebx
 80bd715:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bd718:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80bd71b:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd71f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bd722:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd726:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bd729:	89 04 24             	mov    %eax,(%esp)
 80bd72c:	e8 21 01 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bd731:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bd734:	89 45 d8             	mov    %eax,-0x28(%ebp)
 80bd737:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bd73a:	01 45 e8             	add    %eax,-0x18(%ebp)
 80bd73d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bd740:	89 04 24             	mov    %eax,(%esp)
 80bd743:	e8 42 01 00 00       	call   80bd88a <_ZN4CSHA4SIG1Ej>
 80bd748:	89 c3                	mov    %eax,%ebx
 80bd74a:	03 5d d4             	add    -0x2c(%ebp),%ebx
 80bd74d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80bd750:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd754:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80bd757:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd75b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80bd75e:	89 04 24             	mov    %eax,(%esp)
 80bd761:	e8 d8 00 00 00       	call   80bd83e <_ZN4CSHA2CHEjjj>
 80bd766:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80bd769:	a1 dc 30 b2 08       	mov    0x8b230dc,%eax
 80bd76e:	01 c2                	add    %eax,%edx
 80bd770:	8b 45 c8             	mov    -0x38(%ebp),%eax
 80bd773:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80bd776:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80bd779:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bd77c:	89 04 24             	mov    %eax,(%esp)
 80bd77f:	e8 e8 00 00 00       	call   80bd86c <_ZN4CSHA4SIG0Ej>
 80bd784:	89 c3                	mov    %eax,%ebx
 80bd786:	03 5d f4             	add    -0xc(%ebp),%ebx
 80bd789:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80bd78c:	89 44 24 08          	mov    %eax,0x8(%esp)
 80bd790:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80bd793:	89 44 24 04          	mov    %eax,0x4(%esp)
 80bd797:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80bd79a:	89 04 24             	mov    %eax,(%esp)
 80bd79d:	e8 b0 00 00 00       	call   80bd852 <_ZN4CSHA3MAJEjjj>
 80bd7a2:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80bd7a5:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 80bd7a8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80bd7ab:	01 45 e4             	add    %eax,-0x1c(%ebp)
 80bd7ae:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd7b1:	8b 00                	mov    (%eax),%eax
 80bd7b3:	89 c2                	mov    %eax,%edx
 80bd7b5:	03 55 d4             	add    -0x2c(%ebp),%edx
 80bd7b8:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd7bb:	89 10                	mov    %edx,(%eax)
 80bd7bd:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd7c0:	8b 40 04             	mov    0x4(%eax),%eax
 80bd7c3:	89 c2                	mov    %eax,%edx
 80bd7c5:	03 55 d8             	add    -0x28(%ebp),%edx
 80bd7c8:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd7cb:	89 50 04             	mov    %edx,0x4(%eax)
 80bd7ce:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd7d1:	8b 40 08             	mov    0x8(%eax),%eax
 80bd7d4:	89 c2                	mov    %eax,%edx
 80bd7d6:	03 55 dc             	add    -0x24(%ebp),%edx
 80bd7d9:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd7dc:	89 50 08             	mov    %edx,0x8(%eax)
 80bd7df:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd7e2:	8b 40 0c             	mov    0xc(%eax),%eax
 80bd7e5:	89 c2                	mov    %eax,%edx
 80bd7e7:	03 55 e0             	add    -0x20(%ebp),%edx
 80bd7ea:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd7ed:	89 50 0c             	mov    %edx,0xc(%eax)
 80bd7f0:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd7f3:	8b 40 10             	mov    0x10(%eax),%eax
 80bd7f6:	89 c2                	mov    %eax,%edx
 80bd7f8:	03 55 e4             	add    -0x1c(%ebp),%edx
 80bd7fb:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd7fe:	89 50 10             	mov    %edx,0x10(%eax)
 80bd801:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd804:	8b 40 14             	mov    0x14(%eax),%eax
 80bd807:	89 c2                	mov    %eax,%edx
 80bd809:	03 55 e8             	add    -0x18(%ebp),%edx
 80bd80c:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd80f:	89 50 14             	mov    %edx,0x14(%eax)
 80bd812:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd815:	8b 40 18             	mov    0x18(%eax),%eax
 80bd818:	89 c2                	mov    %eax,%edx
 80bd81a:	03 55 ec             	add    -0x14(%ebp),%edx
 80bd81d:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd820:	89 50 18             	mov    %edx,0x18(%eax)
 80bd823:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd826:	8b 40 1c             	mov    0x1c(%eax),%eax
 80bd829:	89 c2                	mov    %eax,%edx
 80bd82b:	03 55 f0             	add    -0x10(%ebp),%edx
 80bd82e:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd831:	89 50 1c             	mov    %edx,0x1c(%eax)
 80bd834:	81 c4 40 01 00 00    	add    $0x140,%esp
 80bd83a:	5b                   	pop    %ebx
 80bd83b:	5e                   	pop    %esi
 80bd83c:	5d                   	pop    %ebp
 80bd83d:	c3                   	ret

080bd83e <_ZN4CSHA2CHEjjj>:
 80bd83e:	55                   	push   %ebp
 80bd83f:	89 e5                	mov    %esp,%ebp
 80bd841:	8b 45 10             	mov    0x10(%ebp),%eax
 80bd844:	8b 55 0c             	mov    0xc(%ebp),%edx
 80bd847:	31 d0                	xor    %edx,%eax
 80bd849:	23 45 08             	and    0x8(%ebp),%eax
 80bd84c:	33 45 10             	xor    0x10(%ebp),%eax
 80bd84f:	5d                   	pop    %ebp
 80bd850:	c3                   	ret
 80bd851:	90                   	nop

080bd852 <_ZN4CSHA3MAJEjjj>:
 80bd852:	55                   	push   %ebp
 80bd853:	89 e5                	mov    %esp,%ebp
 80bd855:	8b 45 0c             	mov    0xc(%ebp),%eax
 80bd858:	8b 55 08             	mov    0x8(%ebp),%edx
 80bd85b:	09 d0                	or     %edx,%eax
 80bd85d:	23 45 10             	and    0x10(%ebp),%eax
 80bd860:	8b 55 0c             	mov    0xc(%ebp),%edx
 80bd863:	8b 4d 08             	mov    0x8(%ebp),%ecx
 80bd866:	21 ca                	and    %ecx,%edx
 80bd868:	09 d0                	or     %edx,%eax
 80bd86a:	5d                   	pop    %ebp
 80bd86b:	c3                   	ret

080bd86c <_ZN4CSHA4SIG0Ej>:
 80bd86c:	55                   	push   %ebp
 80bd86d:	89 e5                	mov    %esp,%ebp
 80bd86f:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd872:	89 c2                	mov    %eax,%edx
 80bd874:	c1 ca 02             	ror    $0x2,%edx
 80bd877:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd87a:	c1 c8 0d             	ror    $0xd,%eax
 80bd87d:	31 c2                	xor    %eax,%edx
 80bd87f:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd882:	c1 c8 16             	ror    $0x16,%eax
 80bd885:	31 d0                	xor    %edx,%eax
 80bd887:	5d                   	pop    %ebp
 80bd888:	c3                   	ret
 80bd889:	90                   	nop

080bd88a <_ZN4CSHA4SIG1Ej>:
 80bd88a:	55                   	push   %ebp
 80bd88b:	89 e5                	mov    %esp,%ebp
 80bd88d:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd890:	89 c2                	mov    %eax,%edx
 80bd892:	c1 ca 06             	ror    $0x6,%edx
 80bd895:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd898:	c1 c8 0b             	ror    $0xb,%eax
 80bd89b:	31 c2                	xor    %eax,%edx
 80bd89d:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd8a0:	c1 c8 19             	ror    $0x19,%eax
 80bd8a3:	31 d0                	xor    %edx,%eax
 80bd8a5:	5d                   	pop    %ebp
 80bd8a6:	c3                   	ret
 80bd8a7:	90                   	nop

080bd8a8 <_ZN4CSHA4sig0Ej>:
 80bd8a8:	55                   	push   %ebp
 80bd8a9:	89 e5                	mov    %esp,%ebp
 80bd8ab:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd8ae:	89 c2                	mov    %eax,%edx
 80bd8b0:	c1 ca 07             	ror    $0x7,%edx
 80bd8b3:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd8b6:	c1 c8 12             	ror    $0x12,%eax
 80bd8b9:	31 c2                	xor    %eax,%edx
 80bd8bb:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd8be:	c1 e8 03             	shr    $0x3,%eax
 80bd8c1:	31 d0                	xor    %edx,%eax
 80bd8c3:	5d                   	pop    %ebp
 80bd8c4:	c3                   	ret
 80bd8c5:	90                   	nop

080bd8c6 <_ZN4CSHA4sig1Ej>:
 80bd8c6:	55                   	push   %ebp
 80bd8c7:	89 e5                	mov    %esp,%ebp
 80bd8c9:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd8cc:	89 c2                	mov    %eax,%edx
 80bd8ce:	c1 ca 11             	ror    $0x11,%edx
 80bd8d1:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd8d4:	c1 c8 13             	ror    $0x13,%eax
 80bd8d7:	31 c2                	xor    %eax,%edx
 80bd8d9:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd8dc:	c1 e8 0a             	shr    $0xa,%eax
 80bd8df:	31 d0                	xor    %edx,%eax
 80bd8e1:	5d                   	pop    %ebp
 80bd8e2:	c3                   	ret
 80bd8e3:	90                   	nop

080bd8e4 <_ZN4CSHA10Bytes2WordEPKhRj>:
 80bd8e4:	55                   	push   %ebp
 80bd8e5:	89 e5                	mov    %esp,%ebp
 80bd8e7:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd8ea:	83 c0 03             	add    $0x3,%eax
 80bd8ed:	0f b6 00             	movzbl (%eax),%eax
 80bd8f0:	0f b6 d0             	movzbl %al,%edx
 80bd8f3:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd8f6:	83 c0 02             	add    $0x2,%eax
 80bd8f9:	0f b6 00             	movzbl (%eax),%eax
 80bd8fc:	0f b6 c0             	movzbl %al,%eax
 80bd8ff:	c1 e0 08             	shl    $0x8,%eax
 80bd902:	09 c2                	or     %eax,%edx
 80bd904:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd907:	83 c0 01             	add    $0x1,%eax
 80bd90a:	0f b6 00             	movzbl (%eax),%eax
 80bd90d:	0f b6 c0             	movzbl %al,%eax
 80bd910:	c1 e0 10             	shl    $0x10,%eax
 80bd913:	09 c2                	or     %eax,%edx
 80bd915:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd918:	0f b6 00             	movzbl (%eax),%eax
 80bd91b:	0f b6 c0             	movzbl %al,%eax
 80bd91e:	c1 e0 18             	shl    $0x18,%eax
 80bd921:	09 c2                	or     %eax,%edx
 80bd923:	8b 45 0c             	mov    0xc(%ebp),%eax
 80bd926:	89 10                	mov    %edx,(%eax)
 80bd928:	5d                   	pop    %ebp
 80bd929:	c3                   	ret

080bd92a <_ZN4CSHA10Word2BytesERKjPh>:
 80bd92a:	55                   	push   %ebp
 80bd92b:	89 e5                	mov    %esp,%ebp
 80bd92d:	83 45 0c 03          	addl   $0x3,0xc(%ebp)
 80bd931:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd934:	8b 00                	mov    (%eax),%eax
 80bd936:	89 c2                	mov    %eax,%edx
 80bd938:	8b 45 0c             	mov    0xc(%ebp),%eax
 80bd93b:	88 10                	mov    %dl,(%eax)
 80bd93d:	83 6d 0c 01          	subl   $0x1,0xc(%ebp)
 80bd941:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd944:	8b 00                	mov    (%eax),%eax
 80bd946:	c1 e8 08             	shr    $0x8,%eax
 80bd949:	89 c2                	mov    %eax,%edx
 80bd94b:	8b 45 0c             	mov    0xc(%ebp),%eax
 80bd94e:	88 10                	mov    %dl,(%eax)
 80bd950:	83 6d 0c 01          	subl   $0x1,0xc(%ebp)
 80bd954:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd957:	8b 00                	mov    (%eax),%eax
 80bd959:	c1 e8 10             	shr    $0x10,%eax
 80bd95c:	89 c2                	mov    %eax,%edx
 80bd95e:	8b 45 0c             	mov    0xc(%ebp),%eax
 80bd961:	88 10                	mov    %dl,(%eax)
 80bd963:	83 6d 0c 01          	subl   $0x1,0xc(%ebp)
 80bd967:	8b 45 08             	mov    0x8(%ebp),%eax
 80bd96a:	8b 00                	mov    (%eax),%eax
 80bd96c:	c1 e8 18             	shr    $0x18,%eax
 80bd96f:	89 c2                	mov    %eax,%edx
 80bd971:	8b 45 0c             	mov    0xc(%ebp),%eax
 80bd974:	88 10                	mov    %dl,(%eax)
 80bd976:	5d                   	pop    %ebp
 80bd977:	c3                   	ret

```

```c
// CSHA::Transform @ 0x80bb9e4

/* CSHA::Transform() */

void __thiscall CSHA::Transform(CSHA *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_138 [4];
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  CSHA *local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  
  local_38 = this + 0x28;
  for (local_34 = 0; local_34 < 0x10; local_34 = local_34 + 1) {
    Bytes2Word((uchar *)local_38,local_138 + local_34);
    local_38 = local_38 + 4;
  }
  for (local_34 = 0x10; iVar3 = local_34, local_34 < 0x40; local_34 = local_34 + 1) {
    iVar4 = sig1(local_138[local_34 + -2]);
    uVar1 = local_138[local_34 + -7];
    iVar2 = sig0(local_138[local_34 + -0xf]);
    local_138[iVar3] = iVar4 + uVar1 + iVar2 + local_138[local_34 + -0x10];
  }
  local_30 = *(uint *)this;
  local_2c = *(uint *)(this + 4);
  local_28 = *(uint *)(this + 8);
  local_24 = *(uint *)(this + 0xc);
  local_20 = *(uint *)(this + 0x10);
  local_1c = *(uint *)(this + 0x14);
  local_18 = *(uint *)(this + 0x18);
  local_14 = *(uint *)(this + 0x1c);
  iVar3 = SIG1(local_20);
  iVar3 = iVar3 + local_14;
  iVar4 = CH(local_20,local_1c,local_18);
  local_10 = iVar3 + iVar4 + sm_K256 + local_138[0];
  iVar3 = SIG0(local_30);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_30,local_2c,local_28);
  local_14 = iVar3 + iVar4;
  local_24 = local_24 + local_10;
  iVar3 = SIG1(local_24);
  iVar3 = iVar3 + local_18;
  iVar4 = CH(local_24,local_20,local_1c);
  local_10 = iVar3 + iVar4 + DAT_08b22fe4 + local_138[1];
  iVar3 = SIG0(local_14);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_14,local_30,local_2c);
  local_18 = iVar3 + iVar4;
  local_28 = local_28 + local_10;
  iVar3 = SIG1(local_28);
  iVar3 = iVar3 + local_1c;
  iVar4 = CH(local_28,local_24,local_20);
  local_10 = iVar3 + iVar4 + DAT_08b22fe8 + local_138[2];
  iVar3 = SIG0(local_18);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_18,local_14,local_30);
  local_1c = iVar3 + iVar4;
  local_2c = local_2c + local_10;
  iVar3 = SIG1(local_2c);
  iVar3 = iVar3 + local_20;
  iVar4 = CH(local_2c,local_28,local_24);
  local_10 = iVar3 + iVar4 + DAT_08b22fec + local_138[3];
  iVar3 = SIG0(local_1c);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_1c,local_18,local_14);
  local_20 = iVar3 + iVar4;
  local_30 = local_30 + local_10;
  iVar3 = SIG1(local_30);
  iVar3 = iVar3 + local_24;
  iVar4 = CH(local_30,local_2c,local_28);
  local_10 = iVar3 + iVar4 + DAT_08b22ff0 + local_128;
  iVar3 = SIG0(local_20);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_20,local_1c,local_18);
  local_24 = iVar3 + iVar4;
  local_14 = local_14 + local_10;
  iVar3 = SIG1(local_14);
  iVar3 = iVar3 + local_28;
  iVar4 = CH(local_14,local_30,local_2c);
  local_10 = iVar3 + iVar4 + DAT_08b22ff4 + local_124;
  iVar3 = SIG0(local_24);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_24,local_20,local_1c);
  local_28 = iVar3 + iVar4;
  local_18 = local_18 + local_10;
  iVar3 = SIG1(local_18);
  iVar3 = iVar3 + local_2c;
  iVar4 = CH(local_18,local_14,local_30);
  local_10 = iVar3 + iVar4 + DAT_08b22ff8 + local_120;
  iVar3 = SIG0(local_28);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_28,local_24,local_20);
  local_2c = iVar3 + iVar4;
  local_1c = local_1c + local_10;
  iVar3 = SIG1(local_1c);
  iVar3 = iVar3 + local_30;
  iVar4 = CH(local_1c,local_18,local_14);
  local_10 = iVar3 + iVar4 + DAT_08b22ffc + local_11c;
  iVar3 = SIG0(local_2c);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_2c,local_28,local_24);
  local_30 = iVar3 + iVar4;
  local_20 = local_20 + local_10;
  iVar3 = SIG1(local_20);
  iVar3 = iVar3 + local_14;
  iVar4 = CH(local_20,local_1c,local_18);
  local_10 = iVar3 + iVar4 + DAT_08b23000 + local_118;
  iVar3 = SIG0(local_30);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_30,local_2c,local_28);
  local_14 = iVar3 + iVar4;
  local_24 = local_24 + local_10;
  iVar3 = SIG1(local_24);
  iVar3 = iVar3 + local_18;
  iVar4 = CH(local_24,local_20,local_1c);
  local_10 = iVar3 + iVar4 + DAT_08b23004 + local_114;
  iVar3 = SIG0(local_14);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_14,local_30,local_2c);
  local_18 = iVar3 + iVar4;
  local_28 = local_28 + local_10;
  iVar3 = SIG1(local_28);
  iVar3 = iVar3 + local_1c;
  iVar4 = CH(local_28,local_24,local_20);
  local_10 = iVar3 + iVar4 + DAT_08b23008 + local_110;
  iVar3 = SIG0(local_18);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_18,local_14,local_30);
  local_1c = iVar3 + iVar4;
  local_2c = local_2c + local_10;
  iVar3 = SIG1(local_2c);
  iVar3 = iVar3 + local_20;
  iVar4 = CH(local_2c,local_28,local_24);
  local_10 = iVar3 + iVar4 + DAT_08b2300c + local_10c;
  iVar3 = SIG0(local_1c);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_1c,local_18,local_14);
  local_20 = iVar3 + iVar4;
  local_30 = local_30 + local_10;
  iVar3 = SIG1(local_30);
  iVar3 = iVar3 + local_24;
  iVar4 = CH(local_30,local_2c,local_28);
  local_10 = iVar3 + iVar4 + DAT_08b23010 + local_108;
  iVar3 = SIG0(local_20);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_20,local_1c,local_18);
  local_24 = iVar3 + iVar4;
  local_14 = local_14 + local_10;
  iVar3 = SIG1(local_14);
  iVar3 = iVar3 + local_28;
  iVar4 = CH(local_14,local_30,local_2c);
  local_10 = iVar3 + iVar4 + DAT_08b23014 + local_104;
  iVar3 = SIG0(local_24);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_24,local_20,local_1c);
  local_28 = iVar3 + iVar4;
  local_18 = local_18 + local_10;
  iVar3 = SIG1(local_18);
  iVar3 = iVar3 + local_2c;
  iVar4 = CH(local_18,local_14,local_30);
  local_10 = iVar3 + iVar4 + DAT_08b23018 + local_100;
  iVar3 = SIG0(local_28);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_28,local_24,local_20);
  local_2c = iVar3 + iVar4;
  local_1c = local_1c + local_10;
  iVar3 = SIG1(local_1c);
  iVar3 = iVar3 + local_30;
  iVar4 = CH(local_1c,local_18,local_14);
  local_10 = iVar3 + iVar4 + DAT_08b2301c + local_fc;
  iVar3 = SIG0(local_2c);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_2c,local_28,local_24);
  local_30 = iVar3 + iVar4;
  local_20 = local_20 + local_10;
  iVar3 = SIG1(local_20);
  iVar3 = iVar3 + local_14;
  iVar4 = CH(local_20,local_1c,local_18);
  local_10 = iVar3 + iVar4 + DAT_08b23020 + local_f8;
  iVar3 = SIG0(local_30);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_30,local_2c,local_28);
  local_14 = iVar3 + iVar4;
  local_24 = local_24 + local_10;
  iVar3 = SIG1(local_24);
  iVar3 = iVar3 + local_18;
  iVar4 = CH(local_24,local_20,local_1c);
  local_10 = iVar3 + iVar4 + DAT_08b23024 + local_f4;
  iVar3 = SIG0(local_14);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_14,local_30,local_2c);
  local_18 = iVar3 + iVar4;
  local_28 = local_28 + local_10;
  iVar3 = SIG1(local_28);
  iVar3 = iVar3 + local_1c;
  iVar4 = CH(local_28,local_24,local_20);
  local_10 = iVar3 + iVar4 + DAT_08b23028 + local_f0;
  iVar3 = SIG0(local_18);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_18,local_14,local_30);
  local_1c = iVar3 + iVar4;
  local_2c = local_2c + local_10;
  iVar3 = SIG1(local_2c);
  iVar3 = iVar3 + local_20;
  iVar4 = CH(local_2c,local_28,local_24);
  local_10 = iVar3 + iVar4 + DAT_08b2302c + local_ec;
  iVar3 = SIG0(local_1c);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_1c,local_18,local_14);
  local_20 = iVar3 + iVar4;
  local_30 = local_30 + local_10;
  iVar3 = SIG1(local_30);
  iVar3 = iVar3 + local_24;
  iVar4 = CH(local_30,local_2c,local_28);
  local_10 = iVar3 + iVar4 + DAT_08b23030 + local_e8;
  iVar3 = SIG0(local_20);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_20,local_1c,local_18);
  local_24 = iVar3 + iVar4;
  local_14 = local_14 + local_10;
  iVar3 = SIG1(local_14);
  iVar3 = iVar3 + local_28;
  iVar4 = CH(local_14,local_30,local_2c);
  local_10 = iVar3 + iVar4 + DAT_08b23034 + local_e4;
  iVar3 = SIG0(local_24);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_24,local_20,local_1c);
  local_28 = iVar3 + iVar4;
  local_18 = local_18 + local_10;
  iVar3 = SIG1(local_18);
  iVar3 = iVar3 + local_2c;
  iVar4 = CH(local_18,local_14,local_30);
  local_10 = iVar3 + iVar4 + DAT_08b23038 + local_e0;
  iVar3 = SIG0(local_28);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_28,local_24,local_20);
  local_2c = iVar3 + iVar4;
  local_1c = local_1c + local_10;
  iVar3 = SIG1(local_1c);
  iVar3 = iVar3 + local_30;
  iVar4 = CH(local_1c,local_18,local_14);
  local_10 = iVar3 + iVar4 + DAT_08b2303c + local_dc;
  iVar3 = SIG0(local_2c);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_2c,local_28,local_24);
  local_30 = iVar3 + iVar4;
  local_20 = local_20 + local_10;
  iVar3 = SIG1(local_20);
  iVar3 = iVar3 + local_14;
  iVar4 = CH(local_20,local_1c,local_18);
  local_10 = iVar3 + iVar4 + DAT_08b23040 + local_d8;
  iVar3 = SIG0(local_30);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_30,local_2c,local_28);
  local_14 = iVar3 + iVar4;
  local_24 = local_24 + local_10;
  iVar3 = SIG1(local_24);
  iVar3 = iVar3 + local_18;
  iVar4 = CH(local_24,local_20,local_1c);
  local_10 = iVar3 + iVar4 + DAT_08b23044 + local_d4;
  iVar3 = SIG0(local_14);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_14,local_30,local_2c);
  local_18 = iVar3 + iVar4;
  local_28 = local_28 + local_10;
  iVar3 = SIG1(local_28);
  iVar3 = iVar3 + local_1c;
  iVar4 = CH(local_28,local_24,local_20);
  local_10 = iVar3 + iVar4 + DAT_08b23048 + local_d0;
  iVar3 = SIG0(local_18);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_18,local_14,local_30);
  local_1c = iVar3 + iVar4;
  local_2c = local_2c + local_10;
  iVar3 = SIG1(local_2c);
  iVar3 = iVar3 + local_20;
  iVar4 = CH(local_2c,local_28,local_24);
  local_10 = iVar3 + iVar4 + DAT_08b2304c + local_cc;
  iVar3 = SIG0(local_1c);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_1c,local_18,local_14);
  local_20 = iVar3 + iVar4;
  local_30 = local_30 + local_10;
  iVar3 = SIG1(local_30);
  iVar3 = iVar3 + local_24;
  iVar4 = CH(local_30,local_2c,local_28);
  local_10 = iVar3 + iVar4 + DAT_08b23050 + local_c8;
  iVar3 = SIG0(local_20);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_20,local_1c,local_18);
  local_24 = iVar3 + iVar4;
  local_14 = local_14 + local_10;
  iVar3 = SIG1(local_14);
  iVar3 = iVar3 + local_28;
  iVar4 = CH(local_14,local_30,local_2c);
  local_10 = iVar3 + iVar4 + DAT_08b23054 + local_c4;
  iVar3 = SIG0(local_24);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_24,local_20,local_1c);
  local_28 = iVar3 + iVar4;
  local_18 = local_18 + local_10;
  iVar3 = SIG1(local_18);
  iVar3 = iVar3 + local_2c;
  iVar4 = CH(local_18,local_14,local_30);
  local_10 = iVar3 + iVar4 + DAT_08b23058 + local_c0;
  iVar3 = SIG0(local_28);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_28,local_24,local_20);
  local_2c = iVar3 + iVar4;
  local_1c = local_1c + local_10;
  iVar3 = SIG1(local_1c);
  iVar3 = iVar3 + local_30;
  iVar4 = CH(local_1c,local_18,local_14);
  local_10 = iVar3 + iVar4 + DAT_08b2305c + local_bc;
  iVar3 = SIG0(local_2c);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_2c,local_28,local_24);
  local_30 = iVar3 + iVar4;
  local_20 = local_20 + local_10;
  iVar3 = SIG1(local_20);
  iVar3 = iVar3 + local_14;
  iVar4 = CH(local_20,local_1c,local_18);
  local_10 = iVar3 + iVar4 + DAT_08b23060 + local_b8;
  iVar3 = SIG0(local_30);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_30,local_2c,local_28);
  local_14 = iVar3 + iVar4;
  local_24 = local_24 + local_10;
  iVar3 = SIG1(local_24);
  iVar3 = iVar3 + local_18;
  iVar4 = CH(local_24,local_20,local_1c);
  local_10 = iVar3 + iVar4 + DAT_08b23064 + local_b4;
  iVar3 = SIG0(local_14);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_14,local_30,local_2c);
  local_18 = iVar3 + iVar4;
  local_28 = local_28 + local_10;
  iVar3 = SIG1(local_28);
  iVar3 = iVar3 + local_1c;
  iVar4 = CH(local_28,local_24,local_20);
  local_10 = iVar3 + iVar4 + DAT_08b23068 + local_b0;
  iVar3 = SIG0(local_18);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_18,local_14,local_30);
  local_1c = iVar3 + iVar4;
  local_2c = local_2c + local_10;
  iVar3 = SIG1(local_2c);
  iVar3 = iVar3 + local_20;
  iVar4 = CH(local_2c,local_28,local_24);
  local_10 = iVar3 + iVar4 + DAT_08b2306c + local_ac;
  iVar3 = SIG0(local_1c);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_1c,local_18,local_14);
  local_20 = iVar3 + iVar4;
  local_30 = local_30 + local_10;
  iVar3 = SIG1(local_30);
  iVar3 = iVar3 + local_24;
  iVar4 = CH(local_30,local_2c,local_28);
  local_10 = iVar3 + iVar4 + DAT_08b23070 + local_a8;
  iVar3 = SIG0(local_20);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_20,local_1c,local_18);
  local_24 = iVar3 + iVar4;
  local_14 = local_14 + local_10;
  iVar3 = SIG1(local_14);
  iVar3 = iVar3 + local_28;
  iVar4 = CH(local_14,local_30,local_2c);
  local_10 = iVar3 + iVar4 + DAT_08b23074 + local_a4;
  iVar3 = SIG0(local_24);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_24,local_20,local_1c);
  local_28 = iVar3 + iVar4;
  local_18 = local_18 + local_10;
  iVar3 = SIG1(local_18);
  iVar3 = iVar3 + local_2c;
  iVar4 = CH(local_18,local_14,local_30);
  local_10 = iVar3 + iVar4 + DAT_08b23078 + local_a0;
  iVar3 = SIG0(local_28);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_28,local_24,local_20);
  local_2c = iVar3 + iVar4;
  local_1c = local_1c + local_10;
  iVar3 = SIG1(local_1c);
  iVar3 = iVar3 + local_30;
  iVar4 = CH(local_1c,local_18,local_14);
  local_10 = iVar3 + iVar4 + DAT_08b2307c + local_9c;
  iVar3 = SIG0(local_2c);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_2c,local_28,local_24);
  local_30 = iVar3 + iVar4;
  local_20 = local_20 + local_10;
  iVar3 = SIG1(local_20);
  iVar3 = iVar3 + local_14;
  iVar4 = CH(local_20,local_1c,local_18);
  local_10 = iVar3 + iVar4 + DAT_08b23080 + local_98;
  iVar3 = SIG0(local_30);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_30,local_2c,local_28);
  local_14 = iVar3 + iVar4;
  local_24 = local_24 + local_10;
  iVar3 = SIG1(local_24);
  iVar3 = iVar3 + local_18;
  iVar4 = CH(local_24,local_20,local_1c);
  local_10 = iVar3 + iVar4 + DAT_08b23084 + local_94;
  iVar3 = SIG0(local_14);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_14,local_30,local_2c);
  local_18 = iVar3 + iVar4;
  local_28 = local_28 + local_10;
  iVar3 = SIG1(local_28);
  iVar3 = iVar3 + local_1c;
  iVar4 = CH(local_28,local_24,local_20);
  local_10 = iVar3 + iVar4 + DAT_08b23088 + local_90;
  iVar3 = SIG0(local_18);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_18,local_14,local_30);
  local_1c = iVar3 + iVar4;
  local_2c = local_2c + local_10;
  iVar3 = SIG1(local_2c);
  iVar3 = iVar3 + local_20;
  iVar4 = CH(local_2c,local_28,local_24);
  local_10 = iVar3 + iVar4 + DAT_08b2308c + local_8c;
  iVar3 = SIG0(local_1c);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_1c,local_18,local_14);
  local_20 = iVar3 + iVar4;
  local_30 = local_30 + local_10;
  iVar3 = SIG1(local_30);
  iVar3 = iVar3 + local_24;
  iVar4 = CH(local_30,local_2c,local_28);
  local_10 = iVar3 + iVar4 + DAT_08b23090 + local_88;
  iVar3 = SIG0(local_20);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_20,local_1c,local_18);
  local_24 = iVar3 + iVar4;
  local_14 = local_14 + local_10;
  iVar3 = SIG1(local_14);
  iVar3 = iVar3 + local_28;
  iVar4 = CH(local_14,local_30,local_2c);
  local_10 = iVar3 + iVar4 + DAT_08b23094 + local_84;
  iVar3 = SIG0(local_24);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_24,local_20,local_1c);
  local_28 = iVar3 + iVar4;
  local_18 = local_18 + local_10;
  iVar3 = SIG1(local_18);
  iVar3 = iVar3 + local_2c;
  iVar4 = CH(local_18,local_14,local_30);
  local_10 = iVar3 + iVar4 + DAT_08b23098 + local_80;
  iVar3 = SIG0(local_28);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_28,local_24,local_20);
  local_2c = iVar3 + iVar4;
  local_1c = local_1c + local_10;
  iVar3 = SIG1(local_1c);
  iVar3 = iVar3 + local_30;
  iVar4 = CH(local_1c,local_18,local_14);
  local_10 = iVar3 + iVar4 + DAT_08b2309c + local_7c;
  iVar3 = SIG0(local_2c);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_2c,local_28,local_24);
  local_30 = iVar3 + iVar4;
  local_20 = local_20 + local_10;
  iVar3 = SIG1(local_20);
  iVar3 = iVar3 + local_14;
  iVar4 = CH(local_20,local_1c,local_18);
  local_10 = iVar3 + iVar4 + DAT_08b230a0 + local_78;
  iVar3 = SIG0(local_30);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_30,local_2c,local_28);
  local_14 = iVar3 + iVar4;
  local_24 = local_24 + local_10;
  iVar3 = SIG1(local_24);
  iVar3 = iVar3 + local_18;
  iVar4 = CH(local_24,local_20,local_1c);
  local_10 = iVar3 + iVar4 + DAT_08b230a4 + local_74;
  iVar3 = SIG0(local_14);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_14,local_30,local_2c);
  local_18 = iVar3 + iVar4;
  local_28 = local_28 + local_10;
  iVar3 = SIG1(local_28);
  iVar3 = iVar3 + local_1c;
  iVar4 = CH(local_28,local_24,local_20);
  local_10 = iVar3 + iVar4 + DAT_08b230a8 + local_70;
  iVar3 = SIG0(local_18);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_18,local_14,local_30);
  local_1c = iVar3 + iVar4;
  local_2c = local_2c + local_10;
  iVar3 = SIG1(local_2c);
  iVar3 = iVar3 + local_20;
  iVar4 = CH(local_2c,local_28,local_24);
  local_10 = iVar3 + iVar4 + DAT_08b230ac + local_6c;
  iVar3 = SIG0(local_1c);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_1c,local_18,local_14);
  local_20 = iVar3 + iVar4;
  local_30 = local_30 + local_10;
  iVar3 = SIG1(local_30);
  iVar3 = iVar3 + local_24;
  iVar4 = CH(local_30,local_2c,local_28);
  local_10 = iVar3 + iVar4 + DAT_08b230b0 + local_68;
  iVar3 = SIG0(local_20);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_20,local_1c,local_18);
  local_24 = iVar3 + iVar4;
  local_14 = local_14 + local_10;
  iVar3 = SIG1(local_14);
  iVar3 = iVar3 + local_28;
  iVar4 = CH(local_14,local_30,local_2c);
  local_10 = iVar3 + iVar4 + DAT_08b230b4 + local_64;
  iVar3 = SIG0(local_24);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_24,local_20,local_1c);
  local_28 = iVar3 + iVar4;
  local_18 = local_18 + local_10;
  iVar3 = SIG1(local_18);
  iVar3 = iVar3 + local_2c;
  iVar4 = CH(local_18,local_14,local_30);
  local_10 = iVar3 + iVar4 + DAT_08b230b8 + local_60;
  iVar3 = SIG0(local_28);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_28,local_24,local_20);
  local_2c = iVar3 + iVar4;
  local_1c = local_1c + local_10;
  iVar3 = SIG1(local_1c);
  iVar3 = iVar3 + local_30;
  iVar4 = CH(local_1c,local_18,local_14);
  local_10 = iVar3 + iVar4 + DAT_08b230bc + local_5c;
  iVar3 = SIG0(local_2c);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_2c,local_28,local_24);
  local_30 = iVar3 + iVar4;
  local_20 = local_20 + local_10;
  iVar3 = SIG1(local_20);
  iVar3 = iVar3 + local_14;
  iVar4 = CH(local_20,local_1c,local_18);
  local_10 = iVar3 + iVar4 + DAT_08b230c0 + local_58;
  iVar3 = SIG0(local_30);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_30,local_2c,local_28);
  local_14 = iVar3 + iVar4;
  local_24 = local_24 + local_10;
  iVar3 = SIG1(local_24);
  iVar3 = iVar3 + local_18;
  iVar4 = CH(local_24,local_20,local_1c);
  local_10 = iVar3 + iVar4 + DAT_08b230c4 + local_54;
  iVar3 = SIG0(local_14);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_14,local_30,local_2c);
  local_18 = iVar3 + iVar4;
  local_28 = local_28 + local_10;
  iVar3 = SIG1(local_28);
  iVar3 = iVar3 + local_1c;
  iVar4 = CH(local_28,local_24,local_20);
  local_10 = iVar3 + iVar4 + DAT_08b230c8 + local_50;
  iVar3 = SIG0(local_18);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_18,local_14,local_30);
  local_1c = iVar3 + iVar4;
  local_2c = local_2c + local_10;
  iVar3 = SIG1(local_2c);
  iVar3 = iVar3 + local_20;
  iVar4 = CH(local_2c,local_28,local_24);
  local_10 = iVar3 + iVar4 + DAT_08b230cc + local_4c;
  iVar3 = SIG0(local_1c);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_1c,local_18,local_14);
  local_20 = iVar3 + iVar4;
  local_30 = local_30 + local_10;
  iVar3 = SIG1(local_30);
  iVar3 = iVar3 + local_24;
  iVar4 = CH(local_30,local_2c,local_28);
  local_10 = iVar3 + iVar4 + DAT_08b230d0 + local_48;
  iVar3 = SIG0(local_20);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_20,local_1c,local_18);
  local_24 = iVar3 + iVar4;
  local_14 = local_14 + local_10;
  iVar3 = SIG1(local_14);
  iVar3 = iVar3 + local_28;
  iVar4 = CH(local_14,local_30,local_2c);
  local_10 = iVar3 + iVar4 + DAT_08b230d4 + local_44;
  iVar3 = SIG0(local_24);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_24,local_20,local_1c);
  local_28 = iVar3 + iVar4;
  local_18 = local_18 + local_10;
  iVar3 = SIG1(local_18);
  iVar3 = iVar3 + local_2c;
  iVar4 = CH(local_18,local_14,local_30);
  local_10 = iVar3 + iVar4 + DAT_08b230d8 + local_40;
  iVar3 = SIG0(local_28);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_28,local_24,local_20);
  local_2c = iVar3 + iVar4;
  local_1c = local_1c + local_10;
  iVar3 = SIG1(local_1c);
  iVar3 = iVar3 + local_30;
  iVar4 = CH(local_1c,local_18,local_14);
  local_10 = iVar3 + iVar4 + DAT_08b230dc + local_3c;
  iVar3 = SIG0(local_2c);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_2c,local_28,local_24);
  *(int *)this = *(int *)this + iVar3 + iVar4;
  *(uint *)(this + 4) = *(int *)(this + 4) + local_2c;
  *(uint *)(this + 8) = *(int *)(this + 8) + local_28;
  *(uint *)(this + 0xc) = *(int *)(this + 0xc) + local_24;
  *(uint *)(this + 0x10) = *(int *)(this + 0x10) + local_20 + local_10;
  *(uint *)(this + 0x14) = *(int *)(this + 0x14) + local_1c;
  *(uint *)(this + 0x18) = *(int *)(this + 0x18) + local_18;
  *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + local_14;
  return;
}

```

