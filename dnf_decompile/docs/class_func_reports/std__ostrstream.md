# std__ostrstream

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 11

---

## freeze

```asm
// === 086dd890 std::ostrstream::freeze  [0x086dd890-0x86dd8bf] ===
 86dd890:	55                   	push   %ebp
 86dd891:	89 e5                	mov    %esp,%ebp
 86dd893:	8b 45 08             	mov    0x8(%ebp),%eax
 86dd896:	0f b6 4d 0c          	movzbl 0xc(%ebp),%ecx
 86dd89a:	0f b6 50 2c          	movzbl 0x2c(%eax),%edx
 86dd89e:	f6 c2 01             	test   $0x1,%dl
 86dd8a1:	74 0d                	je     86dd8b0 <_ZNSt10ostrstream6freezeEb+0x20>
 86dd8a3:	83 e1 01             	and    $0x1,%ecx
 86dd8a6:	83 e2 fd             	and    $0xfffffffd,%edx
 86dd8a9:	01 c9                	add    %ecx,%ecx
 86dd8ab:	09 ca                	or     %ecx,%edx
 86dd8ad:	88 50 2c             	mov    %dl,0x2c(%eax)
 86dd8b0:	5d                   	pop    %ebp
 86dd8b1:	c3                   	ret
 86dd8b2:	90                   	nop
 86dd8b3:	90                   	nop
 86dd8b4:	90                   	nop
 86dd8b5:	90                   	nop
 86dd8b6:	90                   	nop
 86dd8b7:	90                   	nop
 86dd8b8:	90                   	nop
 86dd8b9:	90                   	nop
 86dd8ba:	90                   	nop
 86dd8bb:	90                   	nop
 86dd8bc:	90                   	nop
 86dd8bd:	90                   	nop
 86dd8be:	90                   	nop
 86dd8bf:	90                   	nop

```

```c
// std::ostrstream::freeze @ 0x86dd890

/* std::ostrstream::freeze(bool) */

void __thiscall std::ostrstream::freeze(ostrstream *this,bool param_1)

{
  if (((byte)this[0x2c] & 1) != 0) {
    this[0x2c] = (ostrstream)((byte)this[0x2c] & 0xfd | param_1 * '\x02');
  }
  return;
}

```

---

## ostrstream

```asm
// === 086ddf70 std::ostrstream::ostrstream  [0x086ddf70-0x86de01f] ===
 86ddf70:	55                   	push   %ebp
 86ddf71:	89 e5                	mov    %esp,%ebp
 86ddf73:	83 ec 38             	sub    $0x38,%esp
 86ddf76:	89 75 f8             	mov    %esi,-0x8(%ebp)
 86ddf79:	8b 75 0c             	mov    0xc(%ebp),%esi
 86ddf7c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 86ddf7f:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86ddf82:	89 7d fc             	mov    %edi,-0x4(%ebp)
 86ddf85:	8b 46 04             	mov    0x4(%esi),%eax
 86ddf88:	8b 56 08             	mov    0x8(%esi),%edx
 86ddf8b:	89 03                	mov    %eax,(%ebx)
 86ddf8d:	8b 40 f4             	mov    -0xc(%eax),%eax
 86ddf90:	89 14 03             	mov    %edx,(%ebx,%eax,1)
 86ddf93:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86ddf9a:	00 
 86ddf9b:	8b 03                	mov    (%ebx),%eax
 86ddf9d:	8b 40 f4             	mov    -0xc(%eax),%eax
 86ddfa0:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 86ddfa3:	89 04 24             	mov    %eax,(%esp)
 86ddfa6:	e8 35 2f 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86ddfab:	8b 06                	mov    (%esi),%eax
 86ddfad:	8d 7b 04             	lea    0x4(%ebx),%edi
 86ddfb0:	8b 56 0c             	mov    0xc(%esi),%edx
 86ddfb3:	89 03                	mov    %eax,(%ebx)
 86ddfb5:	8b 40 f4             	mov    -0xc(%eax),%eax
 86ddfb8:	89 14 03             	mov    %edx,(%ebx,%eax,1)
 86ddfbb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86ddfc2:	00 
 86ddfc3:	89 3c 24             	mov    %edi,(%esp)
 86ddfc6:	e8 c5 fb ff ff       	call   86ddb90 <_ZNSt12strstreambufC1Ei>
 86ddfcb:	89 7c 24 04          	mov    %edi,0x4(%esp)
 86ddfcf:	8b 03                	mov    (%ebx),%eax
 86ddfd1:	8b 40 f4             	mov    -0xc(%eax),%eax
 86ddfd4:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 86ddfd7:	89 04 24             	mov    %eax,(%esp)
 86ddfda:	e8 01 2f 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86ddfdf:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 86ddfe2:	8b 75 f8             	mov    -0x8(%ebp),%esi
 86ddfe5:	8b 7d fc             	mov    -0x4(%ebp),%edi
 86ddfe8:	89 ec                	mov    %ebp,%esp
 86ddfea:	5d                   	pop    %ebp
 86ddfeb:	c3                   	ret
 86ddfec:	89 04 24             	mov    %eax,(%esp)
 86ddfef:	e8 5c 57 40 00       	call   8ae3750 <_Unwind_Resume>
 86ddff4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86ddff7:	89 3c 24             	mov    %edi,(%esp)
 86ddffa:	e8 51 fc ff ff       	call   86ddc50 <_ZNSt12strstreambufD1Ev>
 86ddfff:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86de002:	8b 56 04             	mov    0x4(%esi),%edx
 86de005:	8b 4e 08             	mov    0x8(%esi),%ecx
 86de008:	89 13                	mov    %edx,(%ebx)
 86de00a:	8b 52 f4             	mov    -0xc(%edx),%edx
 86de00d:	89 0c 13             	mov    %ecx,(%ebx,%edx,1)
 86de010:	eb da                	jmp    86ddfec <_ZNSt10ostrstreamC2Ev+0x7c>
 86de012:	eb ee                	jmp    86de002 <_ZNSt10ostrstreamC2Ev+0x92>
 86de014:	90                   	nop
 86de015:	90                   	nop
 86de016:	90                   	nop
 86de017:	90                   	nop
 86de018:	90                   	nop
 86de019:	90                   	nop
 86de01a:	90                   	nop
 86de01b:	90                   	nop
 86de01c:	90                   	nop
 86de01d:	90                   	nop
 86de01e:	90                   	nop
 86de01f:	90                   	nop

```

```c
// std::ostrstream::ostrstream @ 0x86ddf70

/* std::ostrstream::ostrstream() */

void __thiscall std::ostrstream::ostrstream(ostrstream *this)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000008;
  
  iVar1 = in_stack_00000008[1];
  iVar2 = in_stack_00000008[2];
  *(int *)this = iVar1;
  *(int *)(this + *(int *)(iVar1 + -0xc)) = iVar2;
                    /* try { // try from 086ddfa6 to 086ddfaa has its CatchHandler @ 086ddfec */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)0x0);
  iVar1 = *in_stack_00000008;
  iVar2 = in_stack_00000008[3];
  *(int *)this = iVar1;
  *(int *)(this + *(int *)(iVar1 + -0xc)) = iVar2;
                    /* try { // try from 086ddfc6 to 086ddfca has its CatchHandler @ 086de012 */
  strstreambuf::strstreambuf((strstreambuf *)(this + 4),0);
                    /* try { // try from 086ddfda to 086ddfde has its CatchHandler @ 086ddff4 */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)(this + 4));
  return;
}

```

---

## ostrstream_086de020

```asm
// === 086de020 std::ostrstream::ostrstream  [0x086de020-0x86de11f] ===
 86de020:	55                   	push   %ebp
 86de021:	89 e5                	mov    %esp,%ebp
 86de023:	83 ec 38             	sub    $0x38,%esp
 86de026:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 86de029:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86de02c:	89 75 f8             	mov    %esi,-0x8(%ebp)
 86de02f:	89 7d fc             	mov    %edi,-0x4(%ebp)
 86de032:	8d 73 30             	lea    0x30(%ebx),%esi
 86de035:	89 34 24             	mov    %esi,(%esp)
 86de038:	e8 b3 90 04 00       	call   87270f0 <_ZNSt8ios_baseC1Ev>
 86de03d:	8b 3d 8c e3 cf 08    	mov    0x8cfe38c,%edi
 86de043:	c6 46 74 00          	movb   $0x0,0x74(%esi)
 86de047:	8b 15 90 e3 cf 08    	mov    0x8cfe390,%edx
 86de04d:	c7 43 30 70 e9 cf 08 	movl   $0x8cfe970,0x30(%ebx)
 86de054:	c7 46 70 00 00 00 00 	movl   $0x0,0x70(%esi)
 86de05b:	8b 47 f4             	mov    -0xc(%edi),%eax
 86de05e:	89 3b                	mov    %edi,(%ebx)
 86de060:	c6 46 75 00          	movb   $0x0,0x75(%esi)
 86de064:	c7 46 78 00 00 00 00 	movl   $0x0,0x78(%esi)
 86de06b:	89 14 03             	mov    %edx,(%ebx,%eax,1)
 86de06e:	c7 46 7c 00 00 00 00 	movl   $0x0,0x7c(%esi)
 86de075:	c7 86 80 00 00 00 00 	movl   $0x0,0x80(%esi)
 86de07c:	00 00 00 
 86de07f:	c7 86 84 00 00 00 00 	movl   $0x0,0x84(%esi)
 86de086:	00 00 00 
 86de089:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86de090:	00 
 86de091:	8b 03                	mov    (%ebx),%eax
 86de093:	8b 40 f4             	mov    -0xc(%eax),%eax
 86de096:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 86de099:	89 04 24             	mov    %eax,(%esp)
 86de09c:	e8 3f 2e 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86de0a1:	c7 03 6c e3 cf 08    	movl   $0x8cfe36c,(%ebx)
 86de0a7:	8d 4b 04             	lea    0x4(%ebx),%ecx
 86de0aa:	c7 43 30 80 e3 cf 08 	movl   $0x8cfe380,0x30(%ebx)
 86de0b1:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 86de0b4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86de0bb:	00 
 86de0bc:	89 0c 24             	mov    %ecx,(%esp)
 86de0bf:	e8 cc fa ff ff       	call   86ddb90 <_ZNSt12strstreambufC1Ei>
 86de0c4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86de0c7:	89 34 24             	mov    %esi,(%esp)
 86de0ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 86de0ce:	e8 0d 2e 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86de0d3:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 86de0d6:	8b 75 f8             	mov    -0x8(%ebp),%esi
 86de0d9:	8b 7d fc             	mov    -0x4(%ebp),%edi
 86de0dc:	89 ec                	mov    %ebp,%esp
 86de0de:	5d                   	pop    %ebp
 86de0df:	c3                   	ret
 86de0e0:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86de0e3:	89 34 24             	mov    %esi,(%esp)
 86de0e6:	e8 25 2b 00 00       	call   86e0c10 <_ZNSt9basic_iosIcSt11char_traitsIcEED1Ev>
 86de0eb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86de0ee:	89 04 24             	mov    %eax,(%esp)
 86de0f1:	e8 5a 56 40 00       	call   8ae3750 <_Unwind_Resume>
 86de0f6:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86de0f9:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86de0fc:	89 14 24             	mov    %edx,(%esp)
 86de0ff:	e8 4c fb ff ff       	call   86ddc50 <_ZNSt12strstreambufD1Ev>
 86de104:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86de107:	8b 57 f4             	mov    -0xc(%edi),%edx
 86de10a:	8b 0d 90 e3 cf 08    	mov    0x8cfe390,%ecx
 86de110:	89 3b                	mov    %edi,(%ebx)
 86de112:	89 0c 13             	mov    %ecx,(%ebx,%edx,1)
 86de115:	eb c9                	jmp    86de0e0 <_ZNSt10ostrstreamC1Ev+0xc0>
 86de117:	eb ee                	jmp    86de107 <_ZNSt10ostrstreamC1Ev+0xe7>
 86de119:	90                   	nop
 86de11a:	90                   	nop
 86de11b:	90                   	nop
 86de11c:	90                   	nop
 86de11d:	90                   	nop
 86de11e:	90                   	nop
 86de11f:	90                   	nop

```

```c
// std::ostrstream::ostrstream @ 0x86de020

/* std::ostrstream::ostrstream() */

void __thiscall std::ostrstream::ostrstream(ostrstream *this)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  ios_base::ios_base((ios_base *)(this + 0x30));
  puVar2 = PTR_PTR_08cfe38c;
  this[0xa4] = (ostrstream)0x0;
  puVar3 = PTR_PTR_08cfe390;
  *(undefined ***)(this + 0x30) = &PTR__ios_08cfe970;
  *(undefined4 *)(this + 0xa0) = 0;
  iVar1 = *(int *)(puVar2 + -0xc);
  *(undefined **)this = puVar2;
  this[0xa5] = (ostrstream)0x0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined **)(this + iVar1) = puVar3;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
                    /* try { // try from 086de09c to 086de0a0 has its CatchHandler @ 086de0e0 */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)0x0);
  *(undefined4 *)this = 0x8cfe36c;
  *(undefined4 *)(this + 0x30) = 0x8cfe380;
                    /* try { // try from 086de0bf to 086de0c3 has its CatchHandler @ 086de117 */
  strstreambuf::strstreambuf((strstreambuf *)(this + 4),0);
                    /* try { // try from 086de0ce to 086de0d2 has its CatchHandler @ 086de0f6 */
  ios::init((ios *)(this + 0x30),(streambuf *)(this + 4));
  return;
}

```

---

## ostrstream_086de670

```asm
// === 086de670 std::ostrstream::ostrstream  [0x086de670-0x86de72f] ===
 86de670:	55                   	push   %ebp
 86de671:	89 e5                	mov    %esp,%ebp
 86de673:	83 ec 38             	sub    $0x38,%esp
 86de676:	89 75 f8             	mov    %esi,-0x8(%ebp)
 86de679:	8b 75 0c             	mov    0xc(%ebp),%esi
 86de67c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 86de67f:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86de682:	89 7d fc             	mov    %edi,-0x4(%ebp)
 86de685:	8b 46 04             	mov    0x4(%esi),%eax
 86de688:	8b 56 08             	mov    0x8(%esi),%edx
 86de68b:	89 03                	mov    %eax,(%ebx)
 86de68d:	8b 40 f4             	mov    -0xc(%eax),%eax
 86de690:	89 14 03             	mov    %edx,(%ebx,%eax,1)
 86de693:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86de69a:	00 
 86de69b:	8b 03                	mov    (%ebx),%eax
 86de69d:	8b 40 f4             	mov    -0xc(%eax),%eax
 86de6a0:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 86de6a3:	89 04 24             	mov    %eax,(%esp)
 86de6a6:	e8 35 28 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86de6ab:	8b 06                	mov    (%esi),%eax
 86de6ad:	8b 56 0c             	mov    0xc(%esi),%edx
 86de6b0:	f6 45 18 01          	testb  $0x1,0x18(%ebp)
 86de6b4:	89 03                	mov    %eax,(%ebx)
 86de6b6:	8b 40 f4             	mov    -0xc(%eax),%eax
 86de6b9:	89 14 03             	mov    %edx,(%ebx,%eax,1)
 86de6bc:	8b 45 10             	mov    0x10(%ebp),%eax
 86de6bf:	74 0b                	je     86de6cc <_ZNSt10ostrstreamC2EPciSt13_Ios_Openmode+0x5c>
 86de6c1:	89 04 24             	mov    %eax,(%esp)
 86de6c4:	e8 e7 fc 99 ff       	call   807e3b0 <strlen@plt>
 86de6c9:	03 45 10             	add    0x10(%ebp),%eax
 86de6cc:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86de6d0:	8b 45 14             	mov    0x14(%ebp),%eax
 86de6d3:	8d 7b 04             	lea    0x4(%ebx),%edi
 86de6d6:	89 3c 24             	mov    %edi,(%esp)
 86de6d9:	89 44 24 08          	mov    %eax,0x8(%esp)
 86de6dd:	8b 45 10             	mov    0x10(%ebp),%eax
 86de6e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 86de6e4:	e8 e7 fe ff ff       	call   86de5d0 <_ZNSt12strstreambufC1EPciS0_>
 86de6e9:	89 7c 24 04          	mov    %edi,0x4(%esp)
 86de6ed:	8b 03                	mov    (%ebx),%eax
 86de6ef:	8b 40 f4             	mov    -0xc(%eax),%eax
 86de6f2:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 86de6f5:	89 04 24             	mov    %eax,(%esp)
 86de6f8:	e8 e3 27 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86de6fd:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 86de700:	8b 75 f8             	mov    -0x8(%ebp),%esi
 86de703:	8b 7d fc             	mov    -0x4(%ebp),%edi
 86de706:	89 ec                	mov    %ebp,%esp
 86de708:	5d                   	pop    %ebp
 86de709:	c3                   	ret
 86de70a:	89 04 24             	mov    %eax,(%esp)
 86de70d:	e8 3e 50 40 00       	call   8ae3750 <_Unwind_Resume>
 86de712:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86de715:	89 3c 24             	mov    %edi,(%esp)
 86de718:	e8 33 f5 ff ff       	call   86ddc50 <_ZNSt12strstreambufD1Ev>
 86de71d:	8b 56 04             	mov    0x4(%esi),%edx
 86de720:	8b 4e 08             	mov    0x8(%esi),%ecx
 86de723:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86de726:	89 13                	mov    %edx,(%ebx)
 86de728:	8b 52 f4             	mov    -0xc(%edx),%edx
 86de72b:	89 0c 13             	mov    %ecx,(%ebx,%edx,1)
 86de72e:	eb da                	jmp    86de70a <_ZNSt10ostrstreamC2EPciSt13_Ios_Openmode+0x9a>

```

```c
// std::ostrstream::ostrstream @ 0x86de670

/* std::ostrstream::ostrstream(char*, int, std::_Ios_Openmode) */

void __thiscall
std::ostrstream::ostrstream(ostrstream *this,char *param_1,int param_2,_Ios_Openmode param_3)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  char *pcVar4;
  byte in_stack_00000014;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(int *)this = iVar1;
  *(undefined4 *)(this + *(int *)(iVar1 + -0xc)) = uVar2;
                    /* try { // try from 086de6a6 to 086de6aa has its CatchHandler @ 086de70a */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)0x0);
  iVar1 = *(int *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  *(int *)this = iVar1;
  *(undefined4 *)(this + *(int *)(iVar1 + -0xc)) = uVar2;
  pcVar4 = (char *)param_2;
  if ((in_stack_00000014 & 1) != 0) {
    sVar3 = strlen((char *)param_2);
    pcVar4 = (char *)(sVar3 + param_2);
  }
  strstreambuf::strstreambuf((strstreambuf *)(this + 4),(char *)param_2,param_3,pcVar4);
                    /* try { // try from 086de6f8 to 086de6fc has its CatchHandler @ 086de712 */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)(this + 4));
  return;
}

```

---

## ostrstream_086de7e0

```asm
// === 086de7e0 std::ostrstream::ostrstream  [0x086de7e0-0x86de8ef] ===
 86de7e0:	55                   	push   %ebp
 86de7e1:	89 e5                	mov    %esp,%ebp
 86de7e3:	57                   	push   %edi
 86de7e4:	56                   	push   %esi
 86de7e5:	53                   	push   %ebx
 86de7e6:	83 ec 2c             	sub    $0x2c,%esp
 86de7e9:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86de7ec:	8d 73 30             	lea    0x30(%ebx),%esi
 86de7ef:	89 34 24             	mov    %esi,(%esp)
 86de7f2:	e8 f9 88 04 00       	call   87270f0 <_ZNSt8ios_baseC1Ev>
 86de7f7:	8b 3d 8c e3 cf 08    	mov    0x8cfe38c,%edi
 86de7fd:	c6 46 74 00          	movb   $0x0,0x74(%esi)
 86de801:	8b 15 90 e3 cf 08    	mov    0x8cfe390,%edx
 86de807:	c7 43 30 70 e9 cf 08 	movl   $0x8cfe970,0x30(%ebx)
 86de80e:	c7 46 70 00 00 00 00 	movl   $0x0,0x70(%esi)
 86de815:	8b 47 f4             	mov    -0xc(%edi),%eax
 86de818:	89 3b                	mov    %edi,(%ebx)
 86de81a:	c6 46 75 00          	movb   $0x0,0x75(%esi)
 86de81e:	c7 46 78 00 00 00 00 	movl   $0x0,0x78(%esi)
 86de825:	89 14 03             	mov    %edx,(%ebx,%eax,1)
 86de828:	c7 46 7c 00 00 00 00 	movl   $0x0,0x7c(%esi)
 86de82f:	c7 86 80 00 00 00 00 	movl   $0x0,0x80(%esi)
 86de836:	00 00 00 
 86de839:	c7 86 84 00 00 00 00 	movl   $0x0,0x84(%esi)
 86de840:	00 00 00 
 86de843:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86de84a:	00 
 86de84b:	8b 03                	mov    (%ebx),%eax
 86de84d:	8b 40 f4             	mov    -0xc(%eax),%eax
 86de850:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 86de853:	89 04 24             	mov    %eax,(%esp)
 86de856:	e8 85 26 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86de85b:	f6 45 14 01          	testb  $0x1,0x14(%ebp)
 86de85f:	c7 03 6c e3 cf 08    	movl   $0x8cfe36c,(%ebx)
 86de865:	8b 45 0c             	mov    0xc(%ebp),%eax
 86de868:	c7 43 30 80 e3 cf 08 	movl   $0x8cfe380,0x30(%ebx)
 86de86f:	74 0b                	je     86de87c <_ZNSt10ostrstreamC1EPciSt13_Ios_Openmode+0x9c>
 86de871:	89 04 24             	mov    %eax,(%esp)
 86de874:	e8 37 fb 99 ff       	call   807e3b0 <strlen@plt>
 86de879:	03 45 0c             	add    0xc(%ebp),%eax
 86de87c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86de880:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 86de883:	8d 53 04             	lea    0x4(%ebx),%edx
 86de886:	8b 45 10             	mov    0x10(%ebp),%eax
 86de889:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 86de88c:	89 14 24             	mov    %edx,(%esp)
 86de88f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 86de893:	89 44 24 08          	mov    %eax,0x8(%esp)
 86de897:	e8 34 fd ff ff       	call   86de5d0 <_ZNSt12strstreambufC1EPciS0_>
 86de89c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86de89f:	89 34 24             	mov    %esi,(%esp)
 86de8a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 86de8a6:	e8 35 26 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86de8ab:	83 c4 2c             	add    $0x2c,%esp
 86de8ae:	5b                   	pop    %ebx
 86de8af:	5e                   	pop    %esi
 86de8b0:	5f                   	pop    %edi
 86de8b1:	5d                   	pop    %ebp
 86de8b2:	c3                   	ret
 86de8b3:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86de8b6:	89 34 24             	mov    %esi,(%esp)
 86de8b9:	e8 52 23 00 00       	call   86e0c10 <_ZNSt9basic_iosIcSt11char_traitsIcEED1Ev>
 86de8be:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86de8c1:	89 04 24             	mov    %eax,(%esp)
 86de8c4:	e8 87 4e 40 00       	call   8ae3750 <_Unwind_Resume>
 86de8c9:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86de8cc:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86de8cf:	89 14 24             	mov    %edx,(%esp)
 86de8d2:	e8 79 f3 ff ff       	call   86ddc50 <_ZNSt12strstreambufD1Ev>
 86de8d7:	8b 57 f4             	mov    -0xc(%edi),%edx
 86de8da:	8b 0d 90 e3 cf 08    	mov    0x8cfe390,%ecx
 86de8e0:	89 3b                	mov    %edi,(%ebx)
 86de8e2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86de8e5:	89 0c 13             	mov    %ecx,(%ebx,%edx,1)
 86de8e8:	eb c9                	jmp    86de8b3 <_ZNSt10ostrstreamC1EPciSt13_Ios_Openmode+0xd3>
 86de8ea:	90                   	nop
 86de8eb:	90                   	nop
 86de8ec:	90                   	nop
 86de8ed:	90                   	nop
 86de8ee:	90                   	nop
 86de8ef:	90                   	nop

```

```c
// std::ostrstream::ostrstream @ 0x86de7e0

/* std::ostrstream::ostrstream(char*, int, std::_Ios_Openmode) */

void __thiscall
std::ostrstream::ostrstream(ostrstream *this,char *param_1,int param_2,_Ios_Openmode param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  size_t sVar4;
  char *pcVar5;
  
  ios_base::ios_base((ios_base *)(this + 0x30));
  puVar2 = PTR_PTR_08cfe38c;
  this[0xa4] = (ostrstream)0x0;
  puVar3 = PTR_PTR_08cfe390;
  *(undefined ***)(this + 0x30) = &PTR__ios_08cfe970;
  *(undefined4 *)(this + 0xa0) = 0;
  iVar1 = *(int *)(puVar2 + -0xc);
  *(undefined **)this = puVar2;
  this[0xa5] = (ostrstream)0x0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined **)(this + iVar1) = puVar3;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
                    /* try { // try from 086de856 to 086de85a has its CatchHandler @ 086de8b3 */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)0x0);
  *(undefined4 *)this = 0x8cfe36c;
  *(undefined4 *)(this + 0x30) = 0x8cfe380;
  pcVar5 = param_1;
  if ((param_3 & _S_app) != 0) {
    sVar4 = strlen(param_1);
    pcVar5 = param_1 + sVar4;
  }
  strstreambuf::strstreambuf((strstreambuf *)(this + 4),param_1,param_2,pcVar5);
                    /* try { // try from 086de8a6 to 086de8aa has its CatchHandler @ 086de8c9 */
  ios::init((ios *)(this + 0x30),(streambuf *)(this + 4));
  return;
}

```

---

## pcount

```asm
// === 086dd8e0 std::ostrstream::pcount  [0x086dd8e0-0x86dd8ff] ===
 86dd8e0:	55                   	push   %ebp
 86dd8e1:	31 c0                	xor    %eax,%eax
 86dd8e3:	89 e5                	mov    %esp,%ebp
 86dd8e5:	8b 55 08             	mov    0x8(%ebp),%edx
 86dd8e8:	8b 4a 18             	mov    0x18(%edx),%ecx
 86dd8eb:	85 c9                	test   %ecx,%ecx
 86dd8ed:	74 05                	je     86dd8f4 <_ZNKSt10ostrstream6pcountEv+0x14>
 86dd8ef:	89 c8                	mov    %ecx,%eax
 86dd8f1:	2b 42 14             	sub    0x14(%edx),%eax
 86dd8f4:	5d                   	pop    %ebp
 86dd8f5:	c3                   	ret
 86dd8f6:	90                   	nop
 86dd8f7:	90                   	nop
 86dd8f8:	90                   	nop
 86dd8f9:	90                   	nop
 86dd8fa:	90                   	nop
 86dd8fb:	90                   	nop
 86dd8fc:	90                   	nop
 86dd8fd:	90                   	nop
 86dd8fe:	90                   	nop
 86dd8ff:	90                   	nop

```

```c
// std::ostrstream::pcount @ 0x86dd8e0

/* std::ostrstream::pcount() const */

int __thiscall std::ostrstream::pcount(ostrstream *this)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(this + 0x18) != 0) {
    iVar1 = *(int *)(this + 0x18) - *(int *)(this + 0x14);
  }
  return iVar1;
}

```

---

## rdbuf

```asm
// === 086dd880 std::ostrstream::rdbuf  [0x086dd880-0x86dd88f] ===
 86dd880:	55                   	push   %ebp
 86dd881:	89 e5                	mov    %esp,%ebp
 86dd883:	8b 45 08             	mov    0x8(%ebp),%eax
 86dd886:	5d                   	pop    %ebp
 86dd887:	83 c0 04             	add    $0x4,%eax
 86dd88a:	c3                   	ret
 86dd88b:	90                   	nop
 86dd88c:	90                   	nop
 86dd88d:	90                   	nop
 86dd88e:	90                   	nop
 86dd88f:	90                   	nop

```

```c
// std::ostrstream::rdbuf @ 0x86dd880

/* std::ostrstream::rdbuf() const */

ostrstream * __thiscall std::ostrstream::rdbuf(ostrstream *this)

{
  return this + 4;
}

```

---

## str

```asm
// === 086dd8c0 std::ostrstream::str  [0x086dd8c0-0x86dd8df] ===
 86dd8c0:	55                   	push   %ebp
 86dd8c1:	89 e5                	mov    %esp,%ebp
 86dd8c3:	8b 45 08             	mov    0x8(%ebp),%eax
 86dd8c6:	0f b6 50 2c          	movzbl 0x2c(%eax),%edx
 86dd8ca:	f6 c2 01             	test   $0x1,%dl
 86dd8cd:	74 06                	je     86dd8d5 <_ZNSt10ostrstream3strEv+0x15>
 86dd8cf:	83 ca 02             	or     $0x2,%edx
 86dd8d2:	88 50 2c             	mov    %dl,0x2c(%eax)
 86dd8d5:	8b 40 08             	mov    0x8(%eax),%eax
 86dd8d8:	5d                   	pop    %ebp
 86dd8d9:	c3                   	ret
 86dd8da:	90                   	nop
 86dd8db:	90                   	nop
 86dd8dc:	90                   	nop
 86dd8dd:	90                   	nop
 86dd8de:	90                   	nop
 86dd8df:	90                   	nop

```

```c
// std::ostrstream::str @ 0x86dd8c0

/* std::ostrstream::str() */

undefined4 __thiscall std::ostrstream::str(ostrstream *this)

{
  if (((byte)this[0x2c] & 1) != 0) {
    this[0x2c] = (ostrstream)((byte)this[0x2c] | 2);
  }
  return *(undefined4 *)(this + 8);
}

```

---

## ~ostrstream

```asm
// === 086ddcb0 std::ostrstream::~ostrstream  [0x086ddcb0-0x86ddd0f] ===
 86ddcb0:	55                   	push   %ebp
 86ddcb1:	89 e5                	mov    %esp,%ebp
 86ddcb3:	83 ec 18             	sub    $0x18,%esp
 86ddcb6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 86ddcb9:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 86ddcbc:	89 75 fc             	mov    %esi,-0x4(%ebp)
 86ddcbf:	8b 75 08             	mov    0x8(%ebp),%esi
 86ddcc2:	8b 03                	mov    (%ebx),%eax
 86ddcc4:	8b 53 0c             	mov    0xc(%ebx),%edx
 86ddcc7:	89 06                	mov    %eax,(%esi)
 86ddcc9:	8b 40 f4             	mov    -0xc(%eax),%eax
 86ddccc:	89 14 06             	mov    %edx,(%esi,%eax,1)
 86ddccf:	8d 46 04             	lea    0x4(%esi),%eax
 86ddcd2:	89 04 24             	mov    %eax,(%esp)
 86ddcd5:	e8 76 ff ff ff       	call   86ddc50 <_ZNSt12strstreambufD1Ev>
 86ddcda:	8b 43 04             	mov    0x4(%ebx),%eax
 86ddcdd:	8b 53 08             	mov    0x8(%ebx),%edx
 86ddce0:	89 06                	mov    %eax,(%esi)
 86ddce2:	8b 40 f4             	mov    -0xc(%eax),%eax
 86ddce5:	89 14 06             	mov    %edx,(%esi,%eax,1)
 86ddce8:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 86ddceb:	8b 75 fc             	mov    -0x4(%ebp),%esi
 86ddcee:	89 ec                	mov    %ebp,%esp
 86ddcf0:	5d                   	pop    %ebp
 86ddcf1:	c3                   	ret
 86ddcf2:	8b 53 04             	mov    0x4(%ebx),%edx
 86ddcf5:	8b 4b 08             	mov    0x8(%ebx),%ecx
 86ddcf8:	89 16                	mov    %edx,(%esi)
 86ddcfa:	8b 52 f4             	mov    -0xc(%edx),%edx
 86ddcfd:	89 0c 16             	mov    %ecx,(%esi,%edx,1)
 86ddd00:	89 04 24             	mov    %eax,(%esp)
 86ddd03:	e8 48 5a 40 00       	call   8ae3750 <_Unwind_Resume>
 86ddd08:	90                   	nop
 86ddd09:	90                   	nop
 86ddd0a:	90                   	nop
 86ddd0b:	90                   	nop
 86ddd0c:	90                   	nop
 86ddd0d:	90                   	nop
 86ddd0e:	90                   	nop
 86ddd0f:	90                   	nop

```

```c
// std::ostrstream::~ostrstream @ 0x86ddcb0

/* std::ostrstream::~ostrstream() */

void __thiscall std::ostrstream::~ostrstream(ostrstream *this)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000008;
  
  iVar1 = *in_stack_00000008;
  iVar2 = in_stack_00000008[3];
  *(int *)this = iVar1;
  *(int *)(this + *(int *)(iVar1 + -0xc)) = iVar2;
                    /* try { // try from 086ddcd5 to 086ddcd9 has its CatchHandler @ 086ddcf2 */
  strstreambuf::~strstreambuf((strstreambuf *)(this + 4));
  iVar1 = in_stack_00000008[1];
  iVar2 = in_stack_00000008[2];
  *(int *)this = iVar1;
  *(int *)(this + *(int *)(iVar1 + -0xc)) = iVar2;
  return;
}

```

---

## ~ostrstream_086dddc0

```asm
// === 086dddc0 std::ostrstream::~ostrstream  [0x086dddc0-0x86dde3f] ===
 86dddc0:	55                   	push   %ebp
 86dddc1:	89 e5                	mov    %esp,%ebp
 86dddc3:	83 ec 28             	sub    $0x28,%esp
 86dddc6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 86dddc9:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86dddcc:	89 75 fc             	mov    %esi,-0x4(%ebp)
 86dddcf:	8d 43 04             	lea    0x4(%ebx),%eax
 86dddd2:	c7 03 6c e3 cf 08    	movl   $0x8cfe36c,(%ebx)
 86dddd8:	8d 73 30             	lea    0x30(%ebx),%esi
 86ddddb:	c7 43 30 80 e3 cf 08 	movl   $0x8cfe380,0x30(%ebx)
 86ddde2:	89 04 24             	mov    %eax,(%esp)
 86ddde5:	e8 66 fe ff ff       	call   86ddc50 <_ZNSt12strstreambufD1Ev>
 86dddea:	a1 8c e3 cf 08       	mov    0x8cfe38c,%eax
 86dddef:	8b 15 90 e3 cf 08    	mov    0x8cfe390,%edx
 86dddf5:	89 03                	mov    %eax,(%ebx)
 86dddf7:	8b 40 f4             	mov    -0xc(%eax),%eax
 86dddfa:	89 14 03             	mov    %edx,(%ebx,%eax,1)
 86dddfd:	c7 43 30 70 e9 cf 08 	movl   $0x8cfe970,0x30(%ebx)
 86dde04:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 86dde07:	89 75 08             	mov    %esi,0x8(%ebp)
 86dde0a:	8b 75 fc             	mov    -0x4(%ebp),%esi
 86dde0d:	89 ec                	mov    %ebp,%esp
 86dde0f:	5d                   	pop    %ebp
 86dde10:	e9 5b 92 04 00       	jmp    8727070 <_ZNSt8ios_baseD1Ev>
 86dde15:	8b 15 8c e3 cf 08    	mov    0x8cfe38c,%edx
 86dde1b:	8b 0d 90 e3 cf 08    	mov    0x8cfe390,%ecx
 86dde21:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86dde24:	89 13                	mov    %edx,(%ebx)
 86dde26:	8b 52 f4             	mov    -0xc(%edx),%edx
 86dde29:	89 0c 13             	mov    %ecx,(%ebx,%edx,1)
 86dde2c:	89 34 24             	mov    %esi,(%esp)
 86dde2f:	e8 dc 2d 00 00       	call   86e0c10 <_ZNSt9basic_iosIcSt11char_traitsIcEED1Ev>
 86dde34:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86dde37:	89 04 24             	mov    %eax,(%esp)
 86dde3a:	e8 11 59 40 00       	call   8ae3750 <_Unwind_Resume>
 86dde3f:	90                   	nop

```

```c
// std::ostrstream::~ostrstream @ 0x86dddc0

/* std::ostrstream::~ostrstream() */

void __thiscall std::ostrstream::~ostrstream(ostrstream *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined4 *)this = 0x8cfe36c;
  *(undefined4 *)(this + 0x30) = 0x8cfe380;
                    /* try { // try from 086ddde5 to 086ddde9 has its CatchHandler @ 086dde15 */
  strstreambuf::~strstreambuf((strstreambuf *)(this + 4));
  puVar2 = PTR_PTR_08cfe390;
  puVar1 = PTR_PTR_08cfe38c;
  *(undefined **)this = PTR_PTR_08cfe38c;
  *(undefined **)(this + *(int *)(puVar1 + -0xc)) = puVar2;
  *(undefined ***)(this + 0x30) = &PTR__ios_08cfe970;
  ios_base::~ios_base((ios_base *)(this + 0x30));
  return;
}

```

---

## ~ostrstream_086dde60

```asm
// === 086dde60 std::ostrstream::~ostrstream  [0x086dde60-0x86dde7f] ===
 86dde60:	55                   	push   %ebp
 86dde61:	89 e5                	mov    %esp,%ebp
 86dde63:	53                   	push   %ebx
 86dde64:	83 ec 14             	sub    $0x14,%esp
 86dde67:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86dde6a:	89 1c 24             	mov    %ebx,(%esp)
 86dde6d:	e8 4e ff ff ff       	call   86dddc0 <_ZNSt10ostrstreamD1Ev>
 86dde72:	89 5d 08             	mov    %ebx,0x8(%ebp)
 86dde75:	83 c4 14             	add    $0x14,%esp
 86dde78:	5b                   	pop    %ebx
 86dde79:	5d                   	pop    %ebp
 86dde7a:	e9 71 66 04 00       	jmp    87244f0 <_ZdlPv>
 86dde7f:	90                   	nop

```

```c
// std::ostrstream::~ostrstream @ 0x86dde60

/* std::ostrstream::~ostrstream() */

void __thiscall std::ostrstream::~ostrstream(ostrstream *this)

{
  ~ostrstream(this);
  operator_delete(this);
  return;
}

```

