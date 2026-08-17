# std__istrstream

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 13

---

## istrstream

```asm
// === 086de8f0 std::istrstream::istrstream  [0x086de8f0-0x86de9ff] ===
 86de8f0:	55                   	push   %ebp
 86de8f1:	89 e5                	mov    %esp,%ebp
 86de8f3:	83 ec 38             	sub    $0x38,%esp
 86de8f6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 86de8f9:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86de8fc:	89 75 f8             	mov    %esi,-0x8(%ebp)
 86de8ff:	89 7d fc             	mov    %edi,-0x4(%ebp)
 86de902:	8d 73 34             	lea    0x34(%ebx),%esi
 86de905:	89 34 24             	mov    %esi,(%esp)
 86de908:	e8 e3 87 04 00       	call   87270f0 <_ZNSt8ios_baseC1Ev>
 86de90d:	8b 3d 0c e4 cf 08    	mov    0x8cfe40c,%edi
 86de913:	c6 46 74 00          	movb   $0x0,0x74(%esi)
 86de917:	8b 15 10 e4 cf 08    	mov    0x8cfe410,%edx
 86de91d:	c7 43 34 70 e9 cf 08 	movl   $0x8cfe970,0x34(%ebx)
 86de924:	c7 46 70 00 00 00 00 	movl   $0x0,0x70(%esi)
 86de92b:	8b 47 f4             	mov    -0xc(%edi),%eax
 86de92e:	89 3b                	mov    %edi,(%ebx)
 86de930:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86de937:	c6 46 75 00          	movb   $0x0,0x75(%esi)
 86de93b:	89 14 03             	mov    %edx,(%ebx,%eax,1)
 86de93e:	c7 46 78 00 00 00 00 	movl   $0x0,0x78(%esi)
 86de945:	c7 46 7c 00 00 00 00 	movl   $0x0,0x7c(%esi)
 86de94c:	c7 86 80 00 00 00 00 	movl   $0x0,0x80(%esi)
 86de953:	00 00 00 
 86de956:	c7 86 84 00 00 00 00 	movl   $0x0,0x84(%esi)
 86de95d:	00 00 00 
 86de960:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86de967:	00 
 86de968:	8b 03                	mov    (%ebx),%eax
 86de96a:	8b 40 f4             	mov    -0xc(%eax),%eax
 86de96d:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 86de970:	89 04 24             	mov    %eax,(%esp)
 86de973:	e8 68 25 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86de978:	8b 45 10             	mov    0x10(%ebp),%eax
 86de97b:	8d 4b 08             	lea    0x8(%ebx),%ecx
 86de97e:	c7 03 ec e3 cf 08    	movl   $0x8cfe3ec,(%ebx)
 86de984:	c7 43 34 00 e4 cf 08 	movl   $0x8cfe400,0x34(%ebx)
 86de98b:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 86de98e:	89 44 24 08          	mov    %eax,0x8(%esp)
 86de992:	8b 45 0c             	mov    0xc(%ebp),%eax
 86de995:	89 0c 24             	mov    %ecx,(%esp)
 86de998:	89 44 24 04          	mov    %eax,0x4(%esp)
 86de99c:	e8 5f fa ff ff       	call   86de400 <_ZNSt12strstreambufC1EPKci>
 86de9a1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86de9a4:	89 34 24             	mov    %esi,(%esp)
 86de9a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 86de9ab:	e8 30 25 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86de9b0:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 86de9b3:	8b 75 f8             	mov    -0x8(%ebp),%esi
 86de9b6:	8b 7d fc             	mov    -0x4(%ebp),%edi
 86de9b9:	89 ec                	mov    %ebp,%esp
 86de9bb:	5d                   	pop    %ebp
 86de9bc:	c3                   	ret
 86de9bd:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86de9c0:	89 34 24             	mov    %esi,(%esp)
 86de9c3:	e8 48 22 00 00       	call   86e0c10 <_ZNSt9basic_iosIcSt11char_traitsIcEED1Ev>
 86de9c8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86de9cb:	89 04 24             	mov    %eax,(%esp)
 86de9ce:	e8 7d 4d 40 00       	call   8ae3750 <_Unwind_Resume>
 86de9d3:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86de9d6:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86de9d9:	89 14 24             	mov    %edx,(%esp)
 86de9dc:	e8 6f f2 ff ff       	call   86ddc50 <_ZNSt12strstreambufD1Ev>
 86de9e1:	8b 57 f4             	mov    -0xc(%edi),%edx
 86de9e4:	8b 0d 10 e4 cf 08    	mov    0x8cfe410,%ecx
 86de9ea:	89 3b                	mov    %edi,(%ebx)
 86de9ec:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86de9ef:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86de9f6:	89 0c 13             	mov    %ecx,(%ebx,%edx,1)
 86de9f9:	eb c2                	jmp    86de9bd <_ZNSt10istrstreamC1EPKci+0xcd>
 86de9fb:	90                   	nop
 86de9fc:	90                   	nop
 86de9fd:	90                   	nop
 86de9fe:	90                   	nop
 86de9ff:	90                   	nop

```

```c
// std::istrstream::istrstream @ 0x86de8f0

/* std::istrstream::istrstream(char const*, int) */

void __thiscall std::istrstream::istrstream(istrstream *this,char *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  ios_base::ios_base((ios_base *)(this + 0x34));
  puVar2 = PTR_PTR_08cfe40c;
  this[0xa8] = (istrstream)0x0;
  puVar3 = PTR_PTR_08cfe410;
  *(undefined ***)(this + 0x34) = &PTR__ios_08cfe970;
  *(undefined4 *)(this + 0xa4) = 0;
  iVar1 = *(int *)(puVar2 + -0xc);
  *(undefined **)this = puVar2;
  *(undefined4 *)(this + 4) = 0;
  this[0xa9] = (istrstream)0x0;
  *(undefined **)(this + iVar1) = puVar3;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
                    /* try { // try from 086de973 to 086de977 has its CatchHandler @ 086de9bd */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)0x0);
  *(undefined4 *)this = 0x8cfe3ec;
  *(undefined4 *)(this + 0x34) = 0x8cfe400;
  strstreambuf::strstreambuf((strstreambuf *)(this + 8),param_1,param_2);
                    /* try { // try from 086de9ab to 086de9af has its CatchHandler @ 086de9d3 */
  ios::init((ios *)(this + 0x34),(streambuf *)(this + 8));
  return;
}

```

---

## istrstream_086dea00

```asm
// === 086dea00 std::istrstream::istrstream  [0x086dea00-0x86deb1f] ===
 86dea00:	55                   	push   %ebp
 86dea01:	89 e5                	mov    %esp,%ebp
 86dea03:	83 ec 38             	sub    $0x38,%esp
 86dea06:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 86dea09:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86dea0c:	89 75 f8             	mov    %esi,-0x8(%ebp)
 86dea0f:	89 7d fc             	mov    %edi,-0x4(%ebp)
 86dea12:	8d 73 34             	lea    0x34(%ebx),%esi
 86dea15:	89 34 24             	mov    %esi,(%esp)
 86dea18:	e8 d3 86 04 00       	call   87270f0 <_ZNSt8ios_baseC1Ev>
 86dea1d:	8b 3d 0c e4 cf 08    	mov    0x8cfe40c,%edi
 86dea23:	c6 46 74 00          	movb   $0x0,0x74(%esi)
 86dea27:	8b 15 10 e4 cf 08    	mov    0x8cfe410,%edx
 86dea2d:	c7 43 34 70 e9 cf 08 	movl   $0x8cfe970,0x34(%ebx)
 86dea34:	c7 46 70 00 00 00 00 	movl   $0x0,0x70(%esi)
 86dea3b:	8b 47 f4             	mov    -0xc(%edi),%eax
 86dea3e:	89 3b                	mov    %edi,(%ebx)
 86dea40:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86dea47:	c6 46 75 00          	movb   $0x0,0x75(%esi)
 86dea4b:	89 14 03             	mov    %edx,(%ebx,%eax,1)
 86dea4e:	c7 46 78 00 00 00 00 	movl   $0x0,0x78(%esi)
 86dea55:	c7 46 7c 00 00 00 00 	movl   $0x0,0x7c(%esi)
 86dea5c:	c7 86 80 00 00 00 00 	movl   $0x0,0x80(%esi)
 86dea63:	00 00 00 
 86dea66:	c7 86 84 00 00 00 00 	movl   $0x0,0x84(%esi)
 86dea6d:	00 00 00 
 86dea70:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86dea77:	00 
 86dea78:	8b 03                	mov    (%ebx),%eax
 86dea7a:	8b 40 f4             	mov    -0xc(%eax),%eax
 86dea7d:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 86dea80:	89 04 24             	mov    %eax,(%esp)
 86dea83:	e8 58 24 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86dea88:	8b 45 0c             	mov    0xc(%ebp),%eax
 86dea8b:	8d 4b 08             	lea    0x8(%ebx),%ecx
 86dea8e:	c7 03 ec e3 cf 08    	movl   $0x8cfe3ec,(%ebx)
 86dea94:	c7 43 34 00 e4 cf 08 	movl   $0x8cfe400,0x34(%ebx)
 86dea9b:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 86dea9e:	89 44 24 04          	mov    %eax,0x4(%esp)
 86deaa2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 86deaa9:	00 
 86deaaa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86deab1:	00 
 86deab2:	89 0c 24             	mov    %ecx,(%esp)
 86deab5:	e8 16 fb ff ff       	call   86de5d0 <_ZNSt12strstreambufC1EPciS0_>
 86deaba:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86deabd:	89 34 24             	mov    %esi,(%esp)
 86deac0:	89 44 24 04          	mov    %eax,0x4(%esp)
 86deac4:	e8 17 24 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86deac9:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 86deacc:	8b 75 f8             	mov    -0x8(%ebp),%esi
 86deacf:	8b 7d fc             	mov    -0x4(%ebp),%edi
 86dead2:	89 ec                	mov    %ebp,%esp
 86dead4:	5d                   	pop    %ebp
 86dead5:	c3                   	ret
 86dead6:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86dead9:	89 34 24             	mov    %esi,(%esp)
 86deadc:	e8 2f 21 00 00       	call   86e0c10 <_ZNSt9basic_iosIcSt11char_traitsIcEED1Ev>
 86deae1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86deae4:	89 04 24             	mov    %eax,(%esp)
 86deae7:	e8 64 4c 40 00       	call   8ae3750 <_Unwind_Resume>
 86deaec:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86deaef:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86deaf2:	89 14 24             	mov    %edx,(%esp)
 86deaf5:	e8 56 f1 ff ff       	call   86ddc50 <_ZNSt12strstreambufD1Ev>
 86deafa:	8b 57 f4             	mov    -0xc(%edi),%edx
 86deafd:	8b 0d 10 e4 cf 08    	mov    0x8cfe410,%ecx
 86deb03:	89 3b                	mov    %edi,(%ebx)
 86deb05:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86deb08:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86deb0f:	89 0c 13             	mov    %ecx,(%ebx,%edx,1)
 86deb12:	eb c2                	jmp    86dead6 <_ZNSt10istrstreamC1EPc+0xd6>
 86deb14:	90                   	nop
 86deb15:	90                   	nop
 86deb16:	90                   	nop
 86deb17:	90                   	nop
 86deb18:	90                   	nop
 86deb19:	90                   	nop
 86deb1a:	90                   	nop
 86deb1b:	90                   	nop
 86deb1c:	90                   	nop
 86deb1d:	90                   	nop
 86deb1e:	90                   	nop
 86deb1f:	90                   	nop

```

```c
// std::istrstream::istrstream @ 0x86dea00

/* std::istrstream::istrstream(char*) */

void __thiscall std::istrstream::istrstream(istrstream *this,char *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  ios_base::ios_base((ios_base *)(this + 0x34));
  puVar2 = PTR_PTR_08cfe40c;
  this[0xa8] = (istrstream)0x0;
  puVar3 = PTR_PTR_08cfe410;
  *(undefined ***)(this + 0x34) = &PTR__ios_08cfe970;
  *(undefined4 *)(this + 0xa4) = 0;
  iVar1 = *(int *)(puVar2 + -0xc);
  *(undefined **)this = puVar2;
  *(undefined4 *)(this + 4) = 0;
  this[0xa9] = (istrstream)0x0;
  *(undefined **)(this + iVar1) = puVar3;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
                    /* try { // try from 086dea83 to 086dea87 has its CatchHandler @ 086dead6 */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)0x0);
  *(undefined4 *)this = 0x8cfe3ec;
  *(undefined4 *)(this + 0x34) = 0x8cfe400;
  strstreambuf::strstreambuf((strstreambuf *)(this + 8),param_1,0,(char *)0x0);
                    /* try { // try from 086deac4 to 086deac8 has its CatchHandler @ 086deaec */
  ios::init((ios *)(this + 0x34),(streambuf *)(this + 8));
  return;
}

```

---

## istrstream_086deb20

```asm
// === 086deb20 std::istrstream::istrstream  [0x086deb20-0x86debdf] ===
 86deb20:	55                   	push   %ebp
 86deb21:	89 e5                	mov    %esp,%ebp
 86deb23:	83 ec 38             	sub    $0x38,%esp
 86deb26:	89 75 f8             	mov    %esi,-0x8(%ebp)
 86deb29:	8b 75 0c             	mov    0xc(%ebp),%esi
 86deb2c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 86deb2f:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86deb32:	89 7d fc             	mov    %edi,-0x4(%ebp)
 86deb35:	8b 46 04             	mov    0x4(%esi),%eax
 86deb38:	8b 56 08             	mov    0x8(%esi),%edx
 86deb3b:	89 03                	mov    %eax,(%ebx)
 86deb3d:	8b 40 f4             	mov    -0xc(%eax),%eax
 86deb40:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86deb47:	89 14 03             	mov    %edx,(%ebx,%eax,1)
 86deb4a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86deb51:	00 
 86deb52:	8b 03                	mov    (%ebx),%eax
 86deb54:	8b 40 f4             	mov    -0xc(%eax),%eax
 86deb57:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 86deb5a:	89 04 24             	mov    %eax,(%esp)
 86deb5d:	e8 7e 23 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86deb62:	8b 06                	mov    (%esi),%eax
 86deb64:	8d 7b 08             	lea    0x8(%ebx),%edi
 86deb67:	8b 56 0c             	mov    0xc(%esi),%edx
 86deb6a:	89 03                	mov    %eax,(%ebx)
 86deb6c:	8b 40 f4             	mov    -0xc(%eax),%eax
 86deb6f:	89 14 03             	mov    %edx,(%ebx,%eax,1)
 86deb72:	8b 45 14             	mov    0x14(%ebp),%eax
 86deb75:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 86deb7c:	00 
 86deb7d:	89 3c 24             	mov    %edi,(%esp)
 86deb80:	89 44 24 08          	mov    %eax,0x8(%esp)
 86deb84:	8b 45 10             	mov    0x10(%ebp),%eax
 86deb87:	89 44 24 04          	mov    %eax,0x4(%esp)
 86deb8b:	e8 40 fa ff ff       	call   86de5d0 <_ZNSt12strstreambufC1EPciS0_>
 86deb90:	89 7c 24 04          	mov    %edi,0x4(%esp)
 86deb94:	8b 03                	mov    (%ebx),%eax
 86deb96:	8b 40 f4             	mov    -0xc(%eax),%eax
 86deb99:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 86deb9c:	89 04 24             	mov    %eax,(%esp)
 86deb9f:	e8 3c 23 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86deba4:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 86deba7:	8b 75 f8             	mov    -0x8(%ebp),%esi
 86debaa:	8b 7d fc             	mov    -0x4(%ebp),%edi
 86debad:	89 ec                	mov    %ebp,%esp
 86debaf:	5d                   	pop    %ebp
 86debb0:	c3                   	ret
 86debb1:	89 04 24             	mov    %eax,(%esp)
 86debb4:	e8 97 4b 40 00       	call   8ae3750 <_Unwind_Resume>
 86debb9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86debbc:	89 3c 24             	mov    %edi,(%esp)
 86debbf:	e8 8c f0 ff ff       	call   86ddc50 <_ZNSt12strstreambufD1Ev>
 86debc4:	8b 56 04             	mov    0x4(%esi),%edx
 86debc7:	8b 4e 08             	mov    0x8(%esi),%ecx
 86debca:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86debcd:	89 13                	mov    %edx,(%ebx)
 86debcf:	8b 52 f4             	mov    -0xc(%edx),%edx
 86debd2:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86debd9:	89 0c 13             	mov    %ecx,(%ebx,%edx,1)
 86debdc:	eb d3                	jmp    86debb1 <_ZNSt10istrstreamC2EPci+0x91>
 86debde:	90                   	nop
 86debdf:	90                   	nop

```

```c
// std::istrstream::istrstream @ 0x86deb20

/* std::istrstream::istrstream(char*, int) */

void __thiscall std::istrstream::istrstream(istrstream *this,char *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int in_stack_00000010;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(int *)this = iVar1;
  iVar1 = *(int *)(iVar1 + -0xc);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + iVar1) = uVar2;
                    /* try { // try from 086deb5d to 086deb61 has its CatchHandler @ 086debb1 */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)0x0);
  iVar1 = *(int *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  *(int *)this = iVar1;
  *(undefined4 *)(this + *(int *)(iVar1 + -0xc)) = uVar2;
  strstreambuf::strstreambuf
            ((strstreambuf *)(this + 8),(char *)param_2,in_stack_00000010,(char *)0x0);
                    /* try { // try from 086deb9f to 086deba3 has its CatchHandler @ 086debb9 */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)(this + 8));
  return;
}

```

---

## istrstream_086debe0

```asm
// === 086debe0 std::istrstream::istrstream  [0x086debe0-0x86decff] ===
 86debe0:	55                   	push   %ebp
 86debe1:	89 e5                	mov    %esp,%ebp
 86debe3:	83 ec 38             	sub    $0x38,%esp
 86debe6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 86debe9:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86debec:	89 75 f8             	mov    %esi,-0x8(%ebp)
 86debef:	89 7d fc             	mov    %edi,-0x4(%ebp)
 86debf2:	8d 73 34             	lea    0x34(%ebx),%esi
 86debf5:	89 34 24             	mov    %esi,(%esp)
 86debf8:	e8 f3 84 04 00       	call   87270f0 <_ZNSt8ios_baseC1Ev>
 86debfd:	8b 3d 0c e4 cf 08    	mov    0x8cfe40c,%edi
 86dec03:	c6 46 74 00          	movb   $0x0,0x74(%esi)
 86dec07:	8b 15 10 e4 cf 08    	mov    0x8cfe410,%edx
 86dec0d:	c7 43 34 70 e9 cf 08 	movl   $0x8cfe970,0x34(%ebx)
 86dec14:	c7 46 70 00 00 00 00 	movl   $0x0,0x70(%esi)
 86dec1b:	8b 47 f4             	mov    -0xc(%edi),%eax
 86dec1e:	89 3b                	mov    %edi,(%ebx)
 86dec20:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86dec27:	c6 46 75 00          	movb   $0x0,0x75(%esi)
 86dec2b:	89 14 03             	mov    %edx,(%ebx,%eax,1)
 86dec2e:	c7 46 78 00 00 00 00 	movl   $0x0,0x78(%esi)
 86dec35:	c7 46 7c 00 00 00 00 	movl   $0x0,0x7c(%esi)
 86dec3c:	c7 86 80 00 00 00 00 	movl   $0x0,0x80(%esi)
 86dec43:	00 00 00 
 86dec46:	c7 86 84 00 00 00 00 	movl   $0x0,0x84(%esi)
 86dec4d:	00 00 00 
 86dec50:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86dec57:	00 
 86dec58:	8b 03                	mov    (%ebx),%eax
 86dec5a:	8b 40 f4             	mov    -0xc(%eax),%eax
 86dec5d:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 86dec60:	89 04 24             	mov    %eax,(%esp)
 86dec63:	e8 78 22 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86dec68:	8b 45 10             	mov    0x10(%ebp),%eax
 86dec6b:	8d 4b 08             	lea    0x8(%ebx),%ecx
 86dec6e:	c7 03 ec e3 cf 08    	movl   $0x8cfe3ec,(%ebx)
 86dec74:	c7 43 34 00 e4 cf 08 	movl   $0x8cfe400,0x34(%ebx)
 86dec7b:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 86dec7e:	89 44 24 08          	mov    %eax,0x8(%esp)
 86dec82:	8b 45 0c             	mov    0xc(%ebp),%eax
 86dec85:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 86dec8c:	00 
 86dec8d:	89 0c 24             	mov    %ecx,(%esp)
 86dec90:	89 44 24 04          	mov    %eax,0x4(%esp)
 86dec94:	e8 37 f9 ff ff       	call   86de5d0 <_ZNSt12strstreambufC1EPciS0_>
 86dec99:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86dec9c:	89 34 24             	mov    %esi,(%esp)
 86dec9f:	89 44 24 04          	mov    %eax,0x4(%esp)
 86deca3:	e8 38 22 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86deca8:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 86decab:	8b 75 f8             	mov    -0x8(%ebp),%esi
 86decae:	8b 7d fc             	mov    -0x4(%ebp),%edi
 86decb1:	89 ec                	mov    %ebp,%esp
 86decb3:	5d                   	pop    %ebp
 86decb4:	c3                   	ret
 86decb5:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86decb8:	89 34 24             	mov    %esi,(%esp)
 86decbb:	e8 50 1f 00 00       	call   86e0c10 <_ZNSt9basic_iosIcSt11char_traitsIcEED1Ev>
 86decc0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86decc3:	89 04 24             	mov    %eax,(%esp)
 86decc6:	e8 85 4a 40 00       	call   8ae3750 <_Unwind_Resume>
 86deccb:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86decce:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86decd1:	89 14 24             	mov    %edx,(%esp)
 86decd4:	e8 77 ef ff ff       	call   86ddc50 <_ZNSt12strstreambufD1Ev>
 86decd9:	8b 57 f4             	mov    -0xc(%edi),%edx
 86decdc:	8b 0d 10 e4 cf 08    	mov    0x8cfe410,%ecx
 86dece2:	89 3b                	mov    %edi,(%ebx)
 86dece4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86dece7:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86decee:	89 0c 13             	mov    %ecx,(%ebx,%edx,1)
 86decf1:	eb c2                	jmp    86decb5 <_ZNSt10istrstreamC1EPci+0xd5>
 86decf3:	90                   	nop
 86decf4:	90                   	nop
 86decf5:	90                   	nop
 86decf6:	90                   	nop
 86decf7:	90                   	nop
 86decf8:	90                   	nop
 86decf9:	90                   	nop
 86decfa:	90                   	nop
 86decfb:	90                   	nop
 86decfc:	90                   	nop
 86decfd:	90                   	nop
 86decfe:	90                   	nop
 86decff:	90                   	nop

```

```c
// std::istrstream::istrstream @ 0x86debe0

/* std::istrstream::istrstream(char*, int) */

void __thiscall std::istrstream::istrstream(istrstream *this,char *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  ios_base::ios_base((ios_base *)(this + 0x34));
  puVar2 = PTR_PTR_08cfe40c;
  this[0xa8] = (istrstream)0x0;
  puVar3 = PTR_PTR_08cfe410;
  *(undefined ***)(this + 0x34) = &PTR__ios_08cfe970;
  *(undefined4 *)(this + 0xa4) = 0;
  iVar1 = *(int *)(puVar2 + -0xc);
  *(undefined **)this = puVar2;
  *(undefined4 *)(this + 4) = 0;
  this[0xa9] = (istrstream)0x0;
  *(undefined **)(this + iVar1) = puVar3;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
                    /* try { // try from 086dec63 to 086dec67 has its CatchHandler @ 086decb5 */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)0x0);
  *(undefined4 *)this = 0x8cfe3ec;
  *(undefined4 *)(this + 0x34) = 0x8cfe400;
  strstreambuf::strstreambuf((strstreambuf *)(this + 8),param_1,param_2,(char *)0x0);
                    /* try { // try from 086deca3 to 086deca7 has its CatchHandler @ 086deccb */
  ios::init((ios *)(this + 0x34),(streambuf *)(this + 8));
  return;
}

```

---

## istrstream_086ded00

```asm
// === 086ded00 std::istrstream::istrstream  [0x086ded00-0x86dedbf] ===
 86ded00:	55                   	push   %ebp
 86ded01:	89 e5                	mov    %esp,%ebp
 86ded03:	83 ec 38             	sub    $0x38,%esp
 86ded06:	89 75 f8             	mov    %esi,-0x8(%ebp)
 86ded09:	8b 75 0c             	mov    0xc(%ebp),%esi
 86ded0c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 86ded0f:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86ded12:	89 7d fc             	mov    %edi,-0x4(%ebp)
 86ded15:	8b 46 04             	mov    0x4(%esi),%eax
 86ded18:	8b 56 08             	mov    0x8(%esi),%edx
 86ded1b:	89 03                	mov    %eax,(%ebx)
 86ded1d:	8b 40 f4             	mov    -0xc(%eax),%eax
 86ded20:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86ded27:	89 14 03             	mov    %edx,(%ebx,%eax,1)
 86ded2a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86ded31:	00 
 86ded32:	8b 03                	mov    (%ebx),%eax
 86ded34:	8b 40 f4             	mov    -0xc(%eax),%eax
 86ded37:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 86ded3a:	89 04 24             	mov    %eax,(%esp)
 86ded3d:	e8 9e 21 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86ded42:	8b 06                	mov    (%esi),%eax
 86ded44:	8d 7b 08             	lea    0x8(%ebx),%edi
 86ded47:	8b 56 0c             	mov    0xc(%esi),%edx
 86ded4a:	89 03                	mov    %eax,(%ebx)
 86ded4c:	8b 40 f4             	mov    -0xc(%eax),%eax
 86ded4f:	89 14 03             	mov    %edx,(%ebx,%eax,1)
 86ded52:	8b 45 10             	mov    0x10(%ebp),%eax
 86ded55:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86ded5c:	00 
 86ded5d:	89 3c 24             	mov    %edi,(%esp)
 86ded60:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ded64:	e8 97 f6 ff ff       	call   86de400 <_ZNSt12strstreambufC1EPKci>
 86ded69:	89 7c 24 04          	mov    %edi,0x4(%esp)
 86ded6d:	8b 03                	mov    (%ebx),%eax
 86ded6f:	8b 40 f4             	mov    -0xc(%eax),%eax
 86ded72:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 86ded75:	89 04 24             	mov    %eax,(%esp)
 86ded78:	e8 63 21 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86ded7d:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 86ded80:	8b 75 f8             	mov    -0x8(%ebp),%esi
 86ded83:	8b 7d fc             	mov    -0x4(%ebp),%edi
 86ded86:	89 ec                	mov    %ebp,%esp
 86ded88:	5d                   	pop    %ebp
 86ded89:	c3                   	ret
 86ded8a:	89 04 24             	mov    %eax,(%esp)
 86ded8d:	e8 be 49 40 00       	call   8ae3750 <_Unwind_Resume>
 86ded92:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86ded95:	89 3c 24             	mov    %edi,(%esp)
 86ded98:	e8 b3 ee ff ff       	call   86ddc50 <_ZNSt12strstreambufD1Ev>
 86ded9d:	8b 56 04             	mov    0x4(%esi),%edx
 86deda0:	8b 4e 08             	mov    0x8(%esi),%ecx
 86deda3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86deda6:	89 13                	mov    %edx,(%ebx)
 86deda8:	8b 52 f4             	mov    -0xc(%edx),%edx
 86dedab:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86dedb2:	89 0c 13             	mov    %ecx,(%ebx,%edx,1)
 86dedb5:	eb d3                	jmp    86ded8a <_ZNSt10istrstreamC2EPKc+0x8a>
 86dedb7:	90                   	nop
 86dedb8:	90                   	nop
 86dedb9:	90                   	nop
 86dedba:	90                   	nop
 86dedbb:	90                   	nop
 86dedbc:	90                   	nop
 86dedbd:	90                   	nop
 86dedbe:	90                   	nop
 86dedbf:	90                   	nop

```

```c
// std::istrstream::istrstream @ 0x86ded00

/* std::istrstream::istrstream(char const*) */

void __thiscall std::istrstream::istrstream(istrstream *this,char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *in_stack_0000000c;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(int *)this = iVar1;
  iVar1 = *(int *)(iVar1 + -0xc);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + iVar1) = uVar2;
                    /* try { // try from 086ded3d to 086ded41 has its CatchHandler @ 086ded8a */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)0x0);
  iVar1 = *(int *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  *(int *)this = iVar1;
  *(undefined4 *)(this + *(int *)(iVar1 + -0xc)) = uVar2;
  strstreambuf::strstreambuf((strstreambuf *)(this + 8),in_stack_0000000c,0);
                    /* try { // try from 086ded78 to 086ded7c has its CatchHandler @ 086ded92 */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)(this + 8));
  return;
}

```

---

## istrstream_086deed0

```asm
// === 086deed0 std::istrstream::istrstream  [0x086deed0-0x86def8f] ===
 86deed0:	55                   	push   %ebp
 86deed1:	89 e5                	mov    %esp,%ebp
 86deed3:	83 ec 38             	sub    $0x38,%esp
 86deed6:	89 75 f8             	mov    %esi,-0x8(%ebp)
 86deed9:	8b 75 0c             	mov    0xc(%ebp),%esi
 86deedc:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 86deedf:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86deee2:	89 7d fc             	mov    %edi,-0x4(%ebp)
 86deee5:	8b 46 04             	mov    0x4(%esi),%eax
 86deee8:	8b 56 08             	mov    0x8(%esi),%edx
 86deeeb:	89 03                	mov    %eax,(%ebx)
 86deeed:	8b 40 f4             	mov    -0xc(%eax),%eax
 86deef0:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86deef7:	89 14 03             	mov    %edx,(%ebx,%eax,1)
 86deefa:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86def01:	00 
 86def02:	8b 03                	mov    (%ebx),%eax
 86def04:	8b 40 f4             	mov    -0xc(%eax),%eax
 86def07:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 86def0a:	89 04 24             	mov    %eax,(%esp)
 86def0d:	e8 ce 1f 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86def12:	8b 06                	mov    (%esi),%eax
 86def14:	8d 7b 08             	lea    0x8(%ebx),%edi
 86def17:	8b 56 0c             	mov    0xc(%esi),%edx
 86def1a:	89 03                	mov    %eax,(%ebx)
 86def1c:	8b 40 f4             	mov    -0xc(%eax),%eax
 86def1f:	89 14 03             	mov    %edx,(%ebx,%eax,1)
 86def22:	8b 45 10             	mov    0x10(%ebp),%eax
 86def25:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 86def2c:	00 
 86def2d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86def34:	00 
 86def35:	89 3c 24             	mov    %edi,(%esp)
 86def38:	89 44 24 04          	mov    %eax,0x4(%esp)
 86def3c:	e8 8f f6 ff ff       	call   86de5d0 <_ZNSt12strstreambufC1EPciS0_>
 86def41:	89 7c 24 04          	mov    %edi,0x4(%esp)
 86def45:	8b 03                	mov    (%ebx),%eax
 86def47:	8b 40 f4             	mov    -0xc(%eax),%eax
 86def4a:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 86def4d:	89 04 24             	mov    %eax,(%esp)
 86def50:	e8 8b 1f 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86def55:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 86def58:	8b 75 f8             	mov    -0x8(%ebp),%esi
 86def5b:	8b 7d fc             	mov    -0x4(%ebp),%edi
 86def5e:	89 ec                	mov    %ebp,%esp
 86def60:	5d                   	pop    %ebp
 86def61:	c3                   	ret
 86def62:	89 04 24             	mov    %eax,(%esp)
 86def65:	e8 e6 47 40 00       	call   8ae3750 <_Unwind_Resume>
 86def6a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86def6d:	89 3c 24             	mov    %edi,(%esp)
 86def70:	e8 db ec ff ff       	call   86ddc50 <_ZNSt12strstreambufD1Ev>
 86def75:	8b 56 04             	mov    0x4(%esi),%edx
 86def78:	8b 4e 08             	mov    0x8(%esi),%ecx
 86def7b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86def7e:	89 13                	mov    %edx,(%ebx)
 86def80:	8b 52 f4             	mov    -0xc(%edx),%edx
 86def83:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86def8a:	89 0c 13             	mov    %ecx,(%ebx,%edx,1)
 86def8d:	eb d3                	jmp    86def62 <_ZNSt10istrstreamC2EPc+0x92>
 86def8f:	90                   	nop

```

```c
// std::istrstream::istrstream @ 0x86deed0

/* std::istrstream::istrstream(char*) */

void __thiscall std::istrstream::istrstream(istrstream *this,char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *in_stack_0000000c;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(int *)this = iVar1;
  iVar1 = *(int *)(iVar1 + -0xc);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + iVar1) = uVar2;
                    /* try { // try from 086def0d to 086def11 has its CatchHandler @ 086def62 */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)0x0);
  iVar1 = *(int *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  *(int *)this = iVar1;
  *(undefined4 *)(this + *(int *)(iVar1 + -0xc)) = uVar2;
  strstreambuf::strstreambuf((strstreambuf *)(this + 8),in_stack_0000000c,0,(char *)0x0);
                    /* try { // try from 086def50 to 086def54 has its CatchHandler @ 086def6a */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)(this + 8));
  return;
}

```

---

## istrstream_086def90

```asm
// === 086def90 std::istrstream::istrstream  [0x086def90-0x86df09f] ===
 86def90:	55                   	push   %ebp
 86def91:	89 e5                	mov    %esp,%ebp
 86def93:	83 ec 38             	sub    $0x38,%esp
 86def96:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 86def99:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86def9c:	89 75 f8             	mov    %esi,-0x8(%ebp)
 86def9f:	89 7d fc             	mov    %edi,-0x4(%ebp)
 86defa2:	8d 73 34             	lea    0x34(%ebx),%esi
 86defa5:	89 34 24             	mov    %esi,(%esp)
 86defa8:	e8 43 81 04 00       	call   87270f0 <_ZNSt8ios_baseC1Ev>
 86defad:	8b 3d 0c e4 cf 08    	mov    0x8cfe40c,%edi
 86defb3:	c6 46 74 00          	movb   $0x0,0x74(%esi)
 86defb7:	8b 15 10 e4 cf 08    	mov    0x8cfe410,%edx
 86defbd:	c7 43 34 70 e9 cf 08 	movl   $0x8cfe970,0x34(%ebx)
 86defc4:	c7 46 70 00 00 00 00 	movl   $0x0,0x70(%esi)
 86defcb:	8b 47 f4             	mov    -0xc(%edi),%eax
 86defce:	89 3b                	mov    %edi,(%ebx)
 86defd0:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86defd7:	c6 46 75 00          	movb   $0x0,0x75(%esi)
 86defdb:	89 14 03             	mov    %edx,(%ebx,%eax,1)
 86defde:	c7 46 78 00 00 00 00 	movl   $0x0,0x78(%esi)
 86defe5:	c7 46 7c 00 00 00 00 	movl   $0x0,0x7c(%esi)
 86defec:	c7 86 80 00 00 00 00 	movl   $0x0,0x80(%esi)
 86deff3:	00 00 00 
 86deff6:	c7 86 84 00 00 00 00 	movl   $0x0,0x84(%esi)
 86deffd:	00 00 00 
 86df000:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86df007:	00 
 86df008:	8b 03                	mov    (%ebx),%eax
 86df00a:	8b 40 f4             	mov    -0xc(%eax),%eax
 86df00d:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 86df010:	89 04 24             	mov    %eax,(%esp)
 86df013:	e8 c8 1e 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86df018:	8b 45 0c             	mov    0xc(%ebp),%eax
 86df01b:	8d 4b 08             	lea    0x8(%ebx),%ecx
 86df01e:	c7 03 ec e3 cf 08    	movl   $0x8cfe3ec,(%ebx)
 86df024:	c7 43 34 00 e4 cf 08 	movl   $0x8cfe400,0x34(%ebx)
 86df02b:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 86df02e:	89 44 24 04          	mov    %eax,0x4(%esp)
 86df032:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86df039:	00 
 86df03a:	89 0c 24             	mov    %ecx,(%esp)
 86df03d:	e8 be f3 ff ff       	call   86de400 <_ZNSt12strstreambufC1EPKci>
 86df042:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86df045:	89 34 24             	mov    %esi,(%esp)
 86df048:	89 44 24 04          	mov    %eax,0x4(%esp)
 86df04c:	e8 8f 1e 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86df051:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 86df054:	8b 75 f8             	mov    -0x8(%ebp),%esi
 86df057:	8b 7d fc             	mov    -0x4(%ebp),%edi
 86df05a:	89 ec                	mov    %ebp,%esp
 86df05c:	5d                   	pop    %ebp
 86df05d:	c3                   	ret
 86df05e:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86df061:	89 34 24             	mov    %esi,(%esp)
 86df064:	e8 a7 1b 00 00       	call   86e0c10 <_ZNSt9basic_iosIcSt11char_traitsIcEED1Ev>
 86df069:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86df06c:	89 04 24             	mov    %eax,(%esp)
 86df06f:	e8 dc 46 40 00       	call   8ae3750 <_Unwind_Resume>
 86df074:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86df077:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86df07a:	89 14 24             	mov    %edx,(%esp)
 86df07d:	e8 ce eb ff ff       	call   86ddc50 <_ZNSt12strstreambufD1Ev>
 86df082:	8b 57 f4             	mov    -0xc(%edi),%edx
 86df085:	8b 0d 10 e4 cf 08    	mov    0x8cfe410,%ecx
 86df08b:	89 3b                	mov    %edi,(%ebx)
 86df08d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86df090:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86df097:	89 0c 13             	mov    %ecx,(%ebx,%edx,1)
 86df09a:	eb c2                	jmp    86df05e <_ZNSt10istrstreamC1EPKc+0xce>
 86df09c:	90                   	nop
 86df09d:	90                   	nop
 86df09e:	90                   	nop
 86df09f:	90                   	nop

```

```c
// std::istrstream::istrstream @ 0x86def90

/* std::istrstream::istrstream(char const*) */

void __thiscall std::istrstream::istrstream(istrstream *this,char *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  ios_base::ios_base((ios_base *)(this + 0x34));
  puVar2 = PTR_PTR_08cfe40c;
  this[0xa8] = (istrstream)0x0;
  puVar3 = PTR_PTR_08cfe410;
  *(undefined ***)(this + 0x34) = &PTR__ios_08cfe970;
  *(undefined4 *)(this + 0xa4) = 0;
  iVar1 = *(int *)(puVar2 + -0xc);
  *(undefined **)this = puVar2;
  *(undefined4 *)(this + 4) = 0;
  this[0xa9] = (istrstream)0x0;
  *(undefined **)(this + iVar1) = puVar3;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
                    /* try { // try from 086df013 to 086df017 has its CatchHandler @ 086df05e */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)0x0);
  *(undefined4 *)this = 0x8cfe3ec;
  *(undefined4 *)(this + 0x34) = 0x8cfe400;
  strstreambuf::strstreambuf((strstreambuf *)(this + 8),param_1,0);
                    /* try { // try from 086df04c to 086df050 has its CatchHandler @ 086df074 */
  ios::init((ios *)(this + 0x34),(streambuf *)(this + 8));
  return;
}

```

---

## istrstream_086df0a0

```asm
// === 086df0a0 std::istrstream::istrstream  [0x086df0a0-0x86df15f] ===
 86df0a0:	55                   	push   %ebp
 86df0a1:	89 e5                	mov    %esp,%ebp
 86df0a3:	83 ec 38             	sub    $0x38,%esp
 86df0a6:	89 75 f8             	mov    %esi,-0x8(%ebp)
 86df0a9:	8b 75 0c             	mov    0xc(%ebp),%esi
 86df0ac:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 86df0af:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86df0b2:	89 7d fc             	mov    %edi,-0x4(%ebp)
 86df0b5:	8b 46 04             	mov    0x4(%esi),%eax
 86df0b8:	8b 56 08             	mov    0x8(%esi),%edx
 86df0bb:	89 03                	mov    %eax,(%ebx)
 86df0bd:	8b 40 f4             	mov    -0xc(%eax),%eax
 86df0c0:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86df0c7:	89 14 03             	mov    %edx,(%ebx,%eax,1)
 86df0ca:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86df0d1:	00 
 86df0d2:	8b 03                	mov    (%ebx),%eax
 86df0d4:	8b 40 f4             	mov    -0xc(%eax),%eax
 86df0d7:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 86df0da:	89 04 24             	mov    %eax,(%esp)
 86df0dd:	e8 fe 1d 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86df0e2:	8b 06                	mov    (%esi),%eax
 86df0e4:	8d 7b 08             	lea    0x8(%ebx),%edi
 86df0e7:	8b 56 0c             	mov    0xc(%esi),%edx
 86df0ea:	89 03                	mov    %eax,(%ebx)
 86df0ec:	8b 40 f4             	mov    -0xc(%eax),%eax
 86df0ef:	89 14 03             	mov    %edx,(%ebx,%eax,1)
 86df0f2:	8b 45 14             	mov    0x14(%ebp),%eax
 86df0f5:	89 3c 24             	mov    %edi,(%esp)
 86df0f8:	89 44 24 08          	mov    %eax,0x8(%esp)
 86df0fc:	8b 45 10             	mov    0x10(%ebp),%eax
 86df0ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 86df103:	e8 f8 f2 ff ff       	call   86de400 <_ZNSt12strstreambufC1EPKci>
 86df108:	89 7c 24 04          	mov    %edi,0x4(%esp)
 86df10c:	8b 03                	mov    (%ebx),%eax
 86df10e:	8b 40 f4             	mov    -0xc(%eax),%eax
 86df111:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 86df114:	89 04 24             	mov    %eax,(%esp)
 86df117:	e8 c4 1d 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86df11c:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 86df11f:	8b 75 f8             	mov    -0x8(%ebp),%esi
 86df122:	8b 7d fc             	mov    -0x4(%ebp),%edi
 86df125:	89 ec                	mov    %ebp,%esp
 86df127:	5d                   	pop    %ebp
 86df128:	c3                   	ret
 86df129:	89 04 24             	mov    %eax,(%esp)
 86df12c:	e8 1f 46 40 00       	call   8ae3750 <_Unwind_Resume>
 86df131:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86df134:	89 3c 24             	mov    %edi,(%esp)
 86df137:	e8 14 eb ff ff       	call   86ddc50 <_ZNSt12strstreambufD1Ev>
 86df13c:	8b 56 04             	mov    0x4(%esi),%edx
 86df13f:	8b 4e 08             	mov    0x8(%esi),%ecx
 86df142:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86df145:	89 13                	mov    %edx,(%ebx)
 86df147:	8b 52 f4             	mov    -0xc(%edx),%edx
 86df14a:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86df151:	89 0c 13             	mov    %ecx,(%ebx,%edx,1)
 86df154:	eb d3                	jmp    86df129 <_ZNSt10istrstreamC2EPKci+0x89>
 86df156:	90                   	nop
 86df157:	90                   	nop
 86df158:	90                   	nop
 86df159:	90                   	nop
 86df15a:	90                   	nop
 86df15b:	90                   	nop
 86df15c:	90                   	nop
 86df15d:	90                   	nop
 86df15e:	90                   	nop
 86df15f:	90                   	nop

```

```c
// std::istrstream::istrstream @ 0x86df0a0

/* std::istrstream::istrstream(char const*, int) */

void __thiscall std::istrstream::istrstream(istrstream *this,char *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int in_stack_00000010;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(int *)this = iVar1;
  iVar1 = *(int *)(iVar1 + -0xc);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + iVar1) = uVar2;
                    /* try { // try from 086df0dd to 086df0e1 has its CatchHandler @ 086df129 */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)0x0);
  iVar1 = *(int *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  *(int *)this = iVar1;
  *(undefined4 *)(this + *(int *)(iVar1 + -0xc)) = uVar2;
  strstreambuf::strstreambuf((strstreambuf *)(this + 8),(char *)param_2,in_stack_00000010);
                    /* try { // try from 086df117 to 086df11b has its CatchHandler @ 086df131 */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)(this + 8));
  return;
}

```

---

## rdbuf

```asm
// === 086dd850 std::istrstream::rdbuf  [0x086dd850-0x86dd85f] ===
 86dd850:	55                   	push   %ebp
 86dd851:	89 e5                	mov    %esp,%ebp
 86dd853:	8b 45 08             	mov    0x8(%ebp),%eax
 86dd856:	5d                   	pop    %ebp
 86dd857:	83 c0 08             	add    $0x8,%eax
 86dd85a:	c3                   	ret
 86dd85b:	90                   	nop
 86dd85c:	90                   	nop
 86dd85d:	90                   	nop
 86dd85e:	90                   	nop
 86dd85f:	90                   	nop

```

```c
// std::istrstream::rdbuf @ 0x86dd850

/* std::istrstream::rdbuf() const */

istrstream * __thiscall std::istrstream::rdbuf(istrstream *this)

{
  return this + 8;
}

```

---

## str

```asm
// === 086dd860 std::istrstream::str  [0x086dd860-0x86dd87f] ===
 86dd860:	55                   	push   %ebp
 86dd861:	89 e5                	mov    %esp,%ebp
 86dd863:	8b 45 08             	mov    0x8(%ebp),%eax
 86dd866:	0f b6 50 30          	movzbl 0x30(%eax),%edx
 86dd86a:	f6 c2 01             	test   $0x1,%dl
 86dd86d:	74 06                	je     86dd875 <_ZNSt10istrstream3strEv+0x15>
 86dd86f:	83 ca 02             	or     $0x2,%edx
 86dd872:	88 50 30             	mov    %dl,0x30(%eax)
 86dd875:	8b 40 0c             	mov    0xc(%eax),%eax
 86dd878:	5d                   	pop    %ebp
 86dd879:	c3                   	ret
 86dd87a:	90                   	nop
 86dd87b:	90                   	nop
 86dd87c:	90                   	nop
 86dd87d:	90                   	nop
 86dd87e:	90                   	nop
 86dd87f:	90                   	nop

```

```c
// std::istrstream::str @ 0x86dd860

/* std::istrstream::str() */

undefined4 __thiscall std::istrstream::str(istrstream *this)

{
  if (((byte)this[0x30] & 1) != 0) {
    this[0x30] = (istrstream)((byte)this[0x30] | 2);
  }
  return *(undefined4 *)(this + 0xc);
}

```

---

## ~istrstream

```asm
// === 086ddd10 std::istrstream::~istrstream  [0x086ddd10-0x86ddd7f] ===
 86ddd10:	55                   	push   %ebp
 86ddd11:	89 e5                	mov    %esp,%ebp
 86ddd13:	83 ec 18             	sub    $0x18,%esp
 86ddd16:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 86ddd19:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 86ddd1c:	89 75 fc             	mov    %esi,-0x4(%ebp)
 86ddd1f:	8b 75 08             	mov    0x8(%ebp),%esi
 86ddd22:	8b 03                	mov    (%ebx),%eax
 86ddd24:	8b 53 0c             	mov    0xc(%ebx),%edx
 86ddd27:	89 06                	mov    %eax,(%esi)
 86ddd29:	8b 40 f4             	mov    -0xc(%eax),%eax
 86ddd2c:	89 14 06             	mov    %edx,(%esi,%eax,1)
 86ddd2f:	8d 46 08             	lea    0x8(%esi),%eax
 86ddd32:	89 04 24             	mov    %eax,(%esp)
 86ddd35:	e8 16 ff ff ff       	call   86ddc50 <_ZNSt12strstreambufD1Ev>
 86ddd3a:	8b 43 04             	mov    0x4(%ebx),%eax
 86ddd3d:	8b 53 08             	mov    0x8(%ebx),%edx
 86ddd40:	89 06                	mov    %eax,(%esi)
 86ddd42:	8b 40 f4             	mov    -0xc(%eax),%eax
 86ddd45:	c7 46 04 00 00 00 00 	movl   $0x0,0x4(%esi)
 86ddd4c:	89 14 06             	mov    %edx,(%esi,%eax,1)
 86ddd4f:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 86ddd52:	8b 75 fc             	mov    -0x4(%ebp),%esi
 86ddd55:	89 ec                	mov    %ebp,%esp
 86ddd57:	5d                   	pop    %ebp
 86ddd58:	c3                   	ret
 86ddd59:	8b 53 04             	mov    0x4(%ebx),%edx
 86ddd5c:	8b 4b 08             	mov    0x8(%ebx),%ecx
 86ddd5f:	89 16                	mov    %edx,(%esi)
 86ddd61:	8b 52 f4             	mov    -0xc(%edx),%edx
 86ddd64:	c7 46 04 00 00 00 00 	movl   $0x0,0x4(%esi)
 86ddd6b:	89 0c 16             	mov    %ecx,(%esi,%edx,1)
 86ddd6e:	89 04 24             	mov    %eax,(%esp)
 86ddd71:	e8 da 59 40 00       	call   8ae3750 <_Unwind_Resume>
 86ddd76:	90                   	nop
 86ddd77:	90                   	nop
 86ddd78:	90                   	nop
 86ddd79:	90                   	nop
 86ddd7a:	90                   	nop
 86ddd7b:	90                   	nop
 86ddd7c:	90                   	nop
 86ddd7d:	90                   	nop
 86ddd7e:	90                   	nop
 86ddd7f:	90                   	nop

```

```c
// std::istrstream::~istrstream @ 0x86ddd10

/* std::istrstream::~istrstream() */

void __thiscall std::istrstream::~istrstream(istrstream *this)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000008;
  
  iVar1 = *in_stack_00000008;
  iVar2 = in_stack_00000008[3];
  *(int *)this = iVar1;
  *(int *)(this + *(int *)(iVar1 + -0xc)) = iVar2;
                    /* try { // try from 086ddd35 to 086ddd39 has its CatchHandler @ 086ddd59 */
  strstreambuf::~strstreambuf((strstreambuf *)(this + 8));
  iVar1 = in_stack_00000008[1];
  iVar2 = in_stack_00000008[2];
  *(int *)this = iVar1;
  iVar1 = *(int *)(iVar1 + -0xc);
  *(undefined4 *)(this + 4) = 0;
  *(int *)(this + iVar1) = iVar2;
  return;
}

```

---

## ~istrstream_086ddea0

```asm
// === 086ddea0 std::istrstream::~istrstream  [0x086ddea0-0x86ddf2f] ===
 86ddea0:	55                   	push   %ebp
 86ddea1:	89 e5                	mov    %esp,%ebp
 86ddea3:	83 ec 28             	sub    $0x28,%esp
 86ddea6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 86ddea9:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86ddeac:	89 75 fc             	mov    %esi,-0x4(%ebp)
 86ddeaf:	8d 43 08             	lea    0x8(%ebx),%eax
 86ddeb2:	c7 03 ec e3 cf 08    	movl   $0x8cfe3ec,(%ebx)
 86ddeb8:	8d 73 34             	lea    0x34(%ebx),%esi
 86ddebb:	c7 43 34 00 e4 cf 08 	movl   $0x8cfe400,0x34(%ebx)
 86ddec2:	89 04 24             	mov    %eax,(%esp)
 86ddec5:	e8 86 fd ff ff       	call   86ddc50 <_ZNSt12strstreambufD1Ev>
 86ddeca:	a1 0c e4 cf 08       	mov    0x8cfe40c,%eax
 86ddecf:	8b 15 10 e4 cf 08    	mov    0x8cfe410,%edx
 86dded5:	89 03                	mov    %eax,(%ebx)
 86dded7:	8b 40 f4             	mov    -0xc(%eax),%eax
 86ddeda:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86ddee1:	89 14 03             	mov    %edx,(%ebx,%eax,1)
 86ddee4:	c7 43 34 70 e9 cf 08 	movl   $0x8cfe970,0x34(%ebx)
 86ddeeb:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 86ddeee:	89 75 08             	mov    %esi,0x8(%ebp)
 86ddef1:	8b 75 fc             	mov    -0x4(%ebp),%esi
 86ddef4:	89 ec                	mov    %ebp,%esp
 86ddef6:	5d                   	pop    %ebp
 86ddef7:	e9 74 91 04 00       	jmp    8727070 <_ZNSt8ios_baseD1Ev>
 86ddefc:	8b 15 0c e4 cf 08    	mov    0x8cfe40c,%edx
 86ddf02:	8b 0d 10 e4 cf 08    	mov    0x8cfe410,%ecx
 86ddf08:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86ddf0b:	89 13                	mov    %edx,(%ebx)
 86ddf0d:	8b 52 f4             	mov    -0xc(%edx),%edx
 86ddf10:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86ddf17:	89 0c 13             	mov    %ecx,(%ebx,%edx,1)
 86ddf1a:	89 34 24             	mov    %esi,(%esp)
 86ddf1d:	e8 ee 2c 00 00       	call   86e0c10 <_ZNSt9basic_iosIcSt11char_traitsIcEED1Ev>
 86ddf22:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86ddf25:	89 04 24             	mov    %eax,(%esp)
 86ddf28:	e8 23 58 40 00       	call   8ae3750 <_Unwind_Resume>
 86ddf2d:	90                   	nop
 86ddf2e:	90                   	nop
 86ddf2f:	90                   	nop

```

```c
// std::istrstream::~istrstream @ 0x86ddea0

/* std::istrstream::~istrstream() */

void __thiscall std::istrstream::~istrstream(istrstream *this)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  *(undefined4 *)this = 0x8cfe3ec;
  *(undefined4 *)(this + 0x34) = 0x8cfe400;
                    /* try { // try from 086ddec5 to 086ddec9 has its CatchHandler @ 086ddefc */
  strstreambuf::~strstreambuf((strstreambuf *)(this + 8));
  puVar3 = PTR_PTR_08cfe410;
  puVar2 = PTR_PTR_08cfe40c;
  *(undefined **)this = PTR_PTR_08cfe40c;
  iVar1 = *(int *)(puVar2 + -0xc);
  *(undefined4 *)(this + 4) = 0;
  *(undefined **)(this + iVar1) = puVar3;
  *(undefined ***)(this + 0x34) = &PTR__ios_08cfe970;
  ios_base::~ios_base((ios_base *)(this + 0x34));
  return;
}

```

---

## ~istrstream_086ddf50

```asm
// === 086ddf50 std::istrstream::~istrstream  [0x086ddf50-0x86ddf6f] ===
 86ddf50:	55                   	push   %ebp
 86ddf51:	89 e5                	mov    %esp,%ebp
 86ddf53:	53                   	push   %ebx
 86ddf54:	83 ec 14             	sub    $0x14,%esp
 86ddf57:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86ddf5a:	89 1c 24             	mov    %ebx,(%esp)
 86ddf5d:	e8 3e ff ff ff       	call   86ddea0 <_ZNSt10istrstreamD1Ev>
 86ddf62:	89 5d 08             	mov    %ebx,0x8(%ebp)
 86ddf65:	83 c4 14             	add    $0x14,%esp
 86ddf68:	5b                   	pop    %ebx
 86ddf69:	5d                   	pop    %ebp
 86ddf6a:	e9 81 65 04 00       	jmp    87244f0 <_ZdlPv>
 86ddf6f:	90                   	nop

```

```c
// std::istrstream::~istrstream @ 0x86ddf50

/* std::istrstream::~istrstream() */

void __thiscall std::istrstream::~istrstream(istrstream *this)

{
  ~istrstream(this);
  operator_delete(this);
  return;
}

```

