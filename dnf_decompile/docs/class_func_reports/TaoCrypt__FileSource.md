# TaoCrypt__FileSource

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## FileSource

```asm
// === 08758b70 TaoCrypt::FileSource::FileSource  [0x08758b70-0x8758bbf] ===
 8758b70:	55                   	push   %ebp
 8758b71:	89 e5                	mov    %esp,%ebp
 8758b73:	83 ec 18             	sub    $0x18,%esp
 8758b76:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8758b79:	e8 7a a2 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8758b7e:	81 c3 1a 40 c1 00    	add    $0xc1401a,%ebx
 8758b84:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8758b87:	8b 75 08             	mov    0x8(%ebp),%esi
 8758b8a:	8d 83 bc 4a 99 ff    	lea    -0x66b544(%ebx),%eax
 8758b90:	89 44 24 04          	mov    %eax,0x4(%esp)
 8758b94:	8b 45 0c             	mov    0xc(%ebp),%eax
 8758b97:	89 04 24             	mov    %eax,(%esp)
 8758b9a:	e8 d1 5b 92 ff       	call   807e770 <fopen@plt>
 8758b9f:	85 c0                	test   %eax,%eax
 8758ba1:	89 06                	mov    %eax,(%esi)
 8758ba3:	74 0f                	je     8758bb4 <_ZN8TaoCrypt10FileSourceC1EPKcRNS_6SourceE+0x44>
 8758ba5:	8b 45 10             	mov    0x10(%ebp),%eax
 8758ba8:	89 34 24             	mov    %esi,(%esp)
 8758bab:	89 44 24 04          	mov    %eax,0x4(%esp)
 8758baf:	e8 8c fe ff ff       	call   8758a40 <_ZN8TaoCrypt10FileSource3getERNS_6SourceE>
 8758bb4:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8758bb7:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8758bba:	89 ec                	mov    %ebp,%esp
 8758bbc:	5d                   	pop    %ebp
 8758bbd:	c3                   	ret
 8758bbe:	90                   	nop
 8758bbf:	90                   	nop

```

```c
// TaoCrypt::FileSource::FileSource @ 0x8758b70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::FileSource::FileSource(char const*, TaoCrypt::Source&) */

void __thiscall TaoCrypt::FileSource::FileSource(FileSource *this,char *param_1,Source *param_2)

{
  FILE *pFVar1;
  
  pFVar1 = fopen(param_1,"rb");
  *(FILE **)this = pFVar1;
  if (pFVar1 != (FILE *)0x0) {
    get(this,param_2);
  }
  return;
}

```

---

## get

```asm
// === 08758a40 TaoCrypt::FileSource::get  [0x08758a40-0x8758b6f] ===
 8758a40:	55                   	push   %ebp
 8758a41:	89 e5                	mov    %esp,%ebp
 8758a43:	83 ec 38             	sub    $0x38,%esp
 8758a46:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8758a49:	8b 55 08             	mov    0x8(%ebp),%edx
 8758a4c:	e8 a7 a3 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8758a51:	81 c3 47 41 c1 00    	add    $0xc14147,%ebx
 8758a57:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8758a5a:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8758a5d:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8758a60:	89 14 24             	mov    %edx,(%esp)
 8758a63:	89 55 dc             	mov    %edx,-0x24(%ebp)
 8758a66:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8758a6d:	00 
 8758a6e:	e8 dd fe ff ff       	call   8758950 <_ZN8TaoCrypt10FileSource4sizeEb>
 8758a73:	8b 0f                	mov    (%edi),%ecx
 8758a75:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8758a78:	39 c8                	cmp    %ecx,%eax
 8758a7a:	89 c6                	mov    %eax,%esi
 8758a7c:	0f 86 86 00 00 00    	jbe    8758b08 <_ZN8TaoCrypt10FileSource3getERNS_6SourceE+0xc8>
 8758a82:	8b 47 04             	mov    0x4(%edi),%eax
 8758a85:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8758a8c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8758a8f:	31 c0                	xor    %eax,%eax
 8758a91:	85 f6                	test   %esi,%esi
 8758a93:	0f 85 a7 00 00 00    	jne    8758b40 <_ZN8TaoCrypt10FileSource3getERNS_6SourceE+0x100>
 8758a99:	89 44 24 08          	mov    %eax,0x8(%esp)
 8758a9d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8758aa0:	89 55 dc             	mov    %edx,-0x24(%ebp)
 8758aa3:	89 4d d8             	mov    %ecx,-0x28(%ebp)
 8758aa6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8758aaa:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8758aad:	89 04 24             	mov    %eax,(%esp)
 8758ab0:	e8 eb 4d 92 ff       	call   807d8a0 <memcpy@plt>
 8758ab5:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 8758ab8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8758abb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8758ac2:	00 
 8758ac3:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8758ac7:	89 04 24             	mov    %eax,(%esp)
 8758aca:	e8 f1 51 92 ff       	call   807dcc0 <memset@plt>
 8758acf:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8758ad2:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8758ad7:	89 04 24             	mov    %eax,(%esp)
 8758ada:	e8 41 ec 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8758adf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8758ae2:	8b 0f                	mov    (%edi),%ecx
 8758ae4:	89 47 04             	mov    %eax,0x4(%edi)
 8758ae7:	89 f0                	mov    %esi,%eax
 8758ae9:	29 c8                	sub    %ecx,%eax
 8758aeb:	03 4d e4             	add    -0x1c(%ebp),%ecx
 8758aee:	89 44 24 08          	mov    %eax,0x8(%esp)
 8758af2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8758af9:	00 
 8758afa:	89 0c 24             	mov    %ecx,(%esp)
 8758afd:	e8 be 51 92 ff       	call   807dcc0 <memset@plt>
 8758b02:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8758b05:	89 37                	mov    %esi,(%edi)
 8758b07:	90                   	nop
 8758b08:	8b 02                	mov    (%edx),%eax
 8758b0a:	89 74 24 08          	mov    %esi,0x8(%esp)
 8758b0e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8758b15:	00 
 8758b16:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8758b1a:	8b 47 04             	mov    0x4(%edi),%eax
 8758b1d:	89 04 24             	mov    %eax,(%esp)
 8758b20:	e8 2b 52 92 ff       	call   807dd50 <fread@plt>
 8758b25:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8758b28:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8758b2b:	83 f8 01             	cmp    $0x1,%eax
 8758b2e:	b8 00 00 00 00       	mov    $0x0,%eax
 8758b33:	0f 45 f0             	cmovne %eax,%esi
 8758b36:	89 f0                	mov    %esi,%eax
 8758b38:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8758b3b:	89 ec                	mov    %ebp,%esp
 8758b3d:	5d                   	pop    %ebp
 8758b3e:	c3                   	ret
 8758b3f:	90                   	nop
 8758b40:	89 55 dc             	mov    %edx,-0x24(%ebp)
 8758b43:	89 4d d8             	mov    %ecx,-0x28(%ebp)
 8758b46:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8758b4b:	89 34 24             	mov    %esi,(%esp)
 8758b4e:	e8 3d ec 00 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 8758b53:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 8758b56:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8758b59:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8758b5c:	89 c8                	mov    %ecx,%eax
 8758b5e:	e9 36 ff ff ff       	jmp    8758a99 <_ZN8TaoCrypt10FileSource3getERNS_6SourceE+0x59>
 8758b63:	90                   	nop
 8758b64:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8758b6a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TaoCrypt::FileSource::get @ 0x8758a40

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::FileSource::get(TaoCrypt::Source&) */

uint __thiscall TaoCrypt::FileSource::get(FileSource *this,Source *param_1)

{
  uint __n;
  void *__src;
  uint __n_00;
  size_t sVar1;
  uint uVar2;
  void *local_20;
  
  uVar2 = 0;
  __n_00 = size(this,false);
  __n = *(uint *)param_1;
  if (__n < __n_00) {
    __src = *(void **)(param_1 + 4);
    local_20 = (void *)0x0;
    sVar1 = 0;
    if (__n_00 != 0) {
      local_20 = operator_new__(__n_00,uVar2 & 0xffffff00);
      sVar1 = __n;
    }
    memcpy(local_20,__src,sVar1);
    uVar2 = 0;
    memset(__src,0,__n);
    operator_delete__(__src,uVar2 & 0xffffff00);
    *(void **)(param_1 + 4) = local_20;
    memset((void *)(*(int *)param_1 + (int)local_20),0,__n_00 - *(int *)param_1);
    *(uint *)param_1 = __n_00;
  }
  sVar1 = fread(*(void **)(param_1 + 4),1,__n_00,*(FILE **)this);
  if (sVar1 != 1) {
    __n_00 = 0;
  }
  return __n_00;
}

```

---

## size

```asm
// === 08758950 TaoCrypt::FileSource::size  [0x08758950-0x8758a0f] ===
 8758950:	55                   	push   %ebp
 8758951:	89 e5                	mov    %esp,%ebp
 8758953:	83 ec 38             	sub    $0x38,%esp
 8758956:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8758959:	8b 75 08             	mov    0x8(%ebp),%esi
 875895c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 875895f:	0f b6 4d 0c          	movzbl 0xc(%ebp),%ecx
 8758963:	e8 90 a4 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8758968:	81 c3 30 42 c1 00    	add    $0xc14230,%ebx
 875896e:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8758971:	8b 06                	mov    (%esi),%eax
 8758973:	88 4d e0             	mov    %cl,-0x20(%ebp)
 8758976:	89 04 24             	mov    %eax,(%esp)
 8758979:	e8 52 50 92 ff       	call   807d9d0 <ftell@plt>
 875897e:	0f b6 4d e0          	movzbl -0x20(%ebp),%ecx
 8758982:	84 c9                	test   %cl,%cl
 8758984:	89 c7                	mov    %eax,%edi
 8758986:	89 c2                	mov    %eax,%edx
 8758988:	75 26                	jne    87589b0 <_ZN8TaoCrypt10FileSource4sizeEb+0x60>
 875898a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8758991:	00 
 8758992:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8758999:	00 
 875899a:	8b 06                	mov    (%esi),%eax
 875899c:	89 04 24             	mov    %eax,(%esp)
 875899f:	e8 0c 57 92 ff       	call   807e0b0 <fseek@plt>
 87589a4:	8b 06                	mov    (%esi),%eax
 87589a6:	89 04 24             	mov    %eax,(%esp)
 87589a9:	e8 22 50 92 ff       	call   807d9d0 <ftell@plt>
 87589ae:	89 c2                	mov    %eax,%edx
 87589b0:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 87589b7:	00 
 87589b8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87589bf:	00 
 87589c0:	8b 06                	mov    (%esi),%eax
 87589c2:	89 55 e0             	mov    %edx,-0x20(%ebp)
 87589c5:	89 04 24             	mov    %eax,(%esp)
 87589c8:	e8 e3 56 92 ff       	call   807e0b0 <fseek@plt>
 87589cd:	8b 06                	mov    (%esi),%eax
 87589cf:	89 04 24             	mov    %eax,(%esp)
 87589d2:	e8 f9 4f 92 ff       	call   807d9d0 <ftell@plt>
 87589d7:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87589db:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87589e2:	00 
 87589e3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87589e6:	8b 06                	mov    (%esi),%eax
 87589e8:	89 04 24             	mov    %eax,(%esp)
 87589eb:	e8 c0 56 92 ff       	call   807e0b0 <fseek@plt>
 87589f0:	8b 55 e0             	mov    -0x20(%ebp),%edx
 87589f3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87589f6:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87589f9:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87589fc:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87589ff:	89 ec                	mov    %ebp,%esp
 8758a01:	29 d0                	sub    %edx,%eax
 8758a03:	5d                   	pop    %ebp
 8758a04:	c3                   	ret
 8758a05:	90                   	nop
 8758a06:	8d 76 00             	lea    0x0(%esi),%esi
 8758a09:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::FileSource::size @ 0x8758950

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::FileSource::size(bool) */

int __thiscall TaoCrypt::FileSource::size(FileSource *this,bool param_1)

{
  long __off;
  long lVar1;
  long lVar2;
  
  __off = ftell(*(FILE **)this);
  lVar1 = __off;
  if (!param_1) {
    fseek(*(FILE **)this,0,0);
    lVar1 = ftell(*(FILE **)this);
  }
  fseek(*(FILE **)this,0,2);
  lVar2 = ftell(*(FILE **)this);
  fseek(*(FILE **)this,__off,0);
  return lVar2 - lVar1;
}

```

---

## size_left

```asm
// === 08758a10 TaoCrypt::FileSource::size_left  [0x08758a10-0x8758a3f] ===
 8758a10:	55                   	push   %ebp
 8758a11:	89 e5                	mov    %esp,%ebp
 8758a13:	53                   	push   %ebx
 8758a14:	e8 df a3 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8758a19:	81 c3 7f 41 c1 00    	add    $0xc1417f,%ebx
 8758a1f:	83 ec 14             	sub    $0x14,%esp
 8758a22:	8b 45 08             	mov    0x8(%ebp),%eax
 8758a25:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8758a2c:	00 
 8758a2d:	89 04 24             	mov    %eax,(%esp)
 8758a30:	e8 1b ff ff ff       	call   8758950 <_ZN8TaoCrypt10FileSource4sizeEb>
 8758a35:	83 c4 14             	add    $0x14,%esp
 8758a38:	5b                   	pop    %ebx
 8758a39:	5d                   	pop    %ebp
 8758a3a:	c3                   	ret
 8758a3b:	90                   	nop
 8758a3c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::FileSource::size_left @ 0x8758a10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::FileSource::size_left() */

void __thiscall TaoCrypt::FileSource::size_left(FileSource *this)

{
  size(this,true);
  return;
}

```

---

## ~FileSource

```asm
// === 087588d0 TaoCrypt::FileSource::~FileSource  [0x087588d0-0x87588ff] ===
 87588d0:	55                   	push   %ebp
 87588d1:	89 e5                	mov    %esp,%ebp
 87588d3:	53                   	push   %ebx
 87588d4:	83 ec 14             	sub    $0x14,%esp
 87588d7:	8b 45 08             	mov    0x8(%ebp),%eax
 87588da:	e8 19 a5 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87588df:	81 c3 b9 42 c1 00    	add    $0xc142b9,%ebx
 87588e5:	8b 00                	mov    (%eax),%eax
 87588e7:	85 c0                	test   %eax,%eax
 87588e9:	74 08                	je     87588f3 <_ZN8TaoCrypt10FileSourceD1Ev+0x23>
 87588eb:	89 04 24             	mov    %eax,(%esp)
 87588ee:	e8 ad 55 92 ff       	call   807dea0 <fclose@plt>
 87588f3:	83 c4 14             	add    $0x14,%esp
 87588f6:	5b                   	pop    %ebx
 87588f7:	5d                   	pop    %ebp
 87588f8:	c3                   	ret
 87588f9:	90                   	nop
 87588fa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TaoCrypt::FileSource::~FileSource @ 0x87588d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::FileSource::~FileSource() */

void __thiscall TaoCrypt::FileSource::~FileSource(FileSource *this)

{
  if (*(FILE **)this != (FILE *)0x0) {
    fclose(*(FILE **)this);
  }
  return;
}

```

