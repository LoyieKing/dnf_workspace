# std__strstream

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 11

---

## freeze

```asm
// === 086dd910 std::strstream::freeze  [0x086dd910-0x86dd93f] ===
 86dd910:	55                   	push   %ebp
 86dd911:	89 e5                	mov    %esp,%ebp
 86dd913:	8b 45 08             	mov    0x8(%ebp),%eax
 86dd916:	0f b6 4d 0c          	movzbl 0xc(%ebp),%ecx
 86dd91a:	0f b6 50 34          	movzbl 0x34(%eax),%edx
 86dd91e:	f6 c2 01             	test   $0x1,%dl
 86dd921:	74 0d                	je     86dd930 <_ZNSt9strstream6freezeEb+0x20>
 86dd923:	83 e1 01             	and    $0x1,%ecx
 86dd926:	83 e2 fd             	and    $0xfffffffd,%edx
 86dd929:	01 c9                	add    %ecx,%ecx
 86dd92b:	09 ca                	or     %ecx,%edx
 86dd92d:	88 50 34             	mov    %dl,0x34(%eax)
 86dd930:	5d                   	pop    %ebp
 86dd931:	c3                   	ret
 86dd932:	90                   	nop
 86dd933:	90                   	nop
 86dd934:	90                   	nop
 86dd935:	90                   	nop
 86dd936:	90                   	nop
 86dd937:	90                   	nop
 86dd938:	90                   	nop
 86dd939:	90                   	nop
 86dd93a:	90                   	nop
 86dd93b:	90                   	nop
 86dd93c:	90                   	nop
 86dd93d:	90                   	nop
 86dd93e:	90                   	nop
 86dd93f:	90                   	nop

```

```c
// std::strstream::freeze @ 0x86dd910

/* std::strstream::freeze(bool) */

void __thiscall std::strstream::freeze(strstream *this,bool param_1)

{
  if (((byte)this[0x34] & 1) != 0) {
    this[0x34] = (strstream)((byte)this[0x34] & 0xfd | param_1 * '\x02');
  }
  return;
}

```

---

## pcount

```asm
// === 086dd940 std::strstream::pcount  [0x086dd940-0x86dd95f] ===
 86dd940:	55                   	push   %ebp
 86dd941:	31 c0                	xor    %eax,%eax
 86dd943:	89 e5                	mov    %esp,%ebp
 86dd945:	8b 55 08             	mov    0x8(%ebp),%edx
 86dd948:	8b 4a 20             	mov    0x20(%edx),%ecx
 86dd94b:	85 c9                	test   %ecx,%ecx
 86dd94d:	74 05                	je     86dd954 <_ZNKSt9strstream6pcountEv+0x14>
 86dd94f:	89 c8                	mov    %ecx,%eax
 86dd951:	2b 42 1c             	sub    0x1c(%edx),%eax
 86dd954:	5d                   	pop    %ebp
 86dd955:	c3                   	ret
 86dd956:	90                   	nop
 86dd957:	90                   	nop
 86dd958:	90                   	nop
 86dd959:	90                   	nop
 86dd95a:	90                   	nop
 86dd95b:	90                   	nop
 86dd95c:	90                   	nop
 86dd95d:	90                   	nop
 86dd95e:	90                   	nop
 86dd95f:	90                   	nop

```

```c
// std::strstream::pcount @ 0x86dd940

/* std::strstream::pcount() const */

int __thiscall std::strstream::pcount(strstream *this)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(this + 0x20) != 0) {
    iVar1 = *(int *)(this + 0x20) - *(int *)(this + 0x1c);
  }
  return iVar1;
}

```

---

## rdbuf

```asm
// === 086dd900 std::strstream::rdbuf  [0x086dd900-0x86dd90f] ===
 86dd900:	55                   	push   %ebp
 86dd901:	89 e5                	mov    %esp,%ebp
 86dd903:	8b 45 08             	mov    0x8(%ebp),%eax
 86dd906:	5d                   	pop    %ebp
 86dd907:	83 c0 0c             	add    $0xc,%eax
 86dd90a:	c3                   	ret
 86dd90b:	90                   	nop
 86dd90c:	90                   	nop
 86dd90d:	90                   	nop
 86dd90e:	90                   	nop
 86dd90f:	90                   	nop

```

```c
// std::strstream::rdbuf @ 0x86dd900

/* std::strstream::rdbuf() const */

strstream * __thiscall std::strstream::rdbuf(strstream *this)

{
  return this + 0xc;
}

```

---

## str

```asm
// === 086dd960 std::strstream::str  [0x086dd960-0x86dd97f] ===
 86dd960:	55                   	push   %ebp
 86dd961:	89 e5                	mov    %esp,%ebp
 86dd963:	8b 45 08             	mov    0x8(%ebp),%eax
 86dd966:	0f b6 50 34          	movzbl 0x34(%eax),%edx
 86dd96a:	f6 c2 01             	test   $0x1,%dl
 86dd96d:	74 06                	je     86dd975 <_ZNSt9strstream3strEv+0x15>
 86dd96f:	83 ca 02             	or     $0x2,%edx
 86dd972:	88 50 34             	mov    %dl,0x34(%eax)
 86dd975:	8b 40 10             	mov    0x10(%eax),%eax
 86dd978:	5d                   	pop    %ebp
 86dd979:	c3                   	ret
 86dd97a:	90                   	nop
 86dd97b:	90                   	nop
 86dd97c:	90                   	nop
 86dd97d:	90                   	nop
 86dd97e:	90                   	nop
 86dd97f:	90                   	nop

```

```c
// std::strstream::str @ 0x86dd960

/* std::strstream::str() */

undefined4 __thiscall std::strstream::str(strstream *this)

{
  if (((byte)this[0x34] & 1) != 0) {
    this[0x34] = (strstream)((byte)this[0x34] | 2);
  }
  return *(undefined4 *)(this + 0x10);
}

```

---

## strstream

```asm
// === 086dedc0 std::strstream::strstream  [0x086dedc0-0x86deecf] ===
 86dedc0:	55                   	push   %ebp
 86dedc1:	89 e5                	mov    %esp,%ebp
 86dedc3:	57                   	push   %edi
 86dedc4:	56                   	push   %esi
 86dedc5:	53                   	push   %ebx
 86dedc6:	83 ec 2c             	sub    $0x2c,%esp
 86dedc9:	8b 75 0c             	mov    0xc(%ebp),%esi
 86dedcc:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86dedcf:	8b 46 08             	mov    0x8(%esi),%eax
 86dedd2:	8d 7e 04             	lea    0x4(%esi),%edi
 86dedd5:	8b 56 0c             	mov    0xc(%esi),%edx
 86dedd8:	89 03                	mov    %eax,(%ebx)
 86dedda:	8b 40 f4             	mov    -0xc(%eax),%eax
 86deddd:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86dede4:	89 14 03             	mov    %edx,(%ebx,%eax,1)
 86dede7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86dedee:	00 
 86dedef:	8b 03                	mov    (%ebx),%eax
 86dedf1:	8b 40 f4             	mov    -0xc(%eax),%eax
 86dedf4:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 86dedf7:	89 04 24             	mov    %eax,(%esp)
 86dedfa:	e8 e1 20 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86dedff:	8b 57 0c             	mov    0xc(%edi),%edx
 86dee02:	8d 43 08             	lea    0x8(%ebx),%eax
 86dee05:	8b 4f 10             	mov    0x10(%edi),%ecx
 86dee08:	89 53 08             	mov    %edx,0x8(%ebx)
 86dee0b:	8b 52 f4             	mov    -0xc(%edx),%edx
 86dee0e:	89 4c 13 08          	mov    %ecx,0x8(%ebx,%edx,1)
 86dee12:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86dee19:	00 
 86dee1a:	8b 53 08             	mov    0x8(%ebx),%edx
 86dee1d:	03 42 f4             	add    -0xc(%edx),%eax
 86dee20:	89 04 24             	mov    %eax,(%esp)
 86dee23:	e8 b8 20 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86dee28:	8b 46 04             	mov    0x4(%esi),%eax
 86dee2b:	8b 57 14             	mov    0x14(%edi),%edx
 86dee2e:	f6 45 18 01          	testb  $0x1,0x18(%ebp)
 86dee32:	8b 40 f4             	mov    -0xc(%eax),%eax
 86dee35:	89 14 03             	mov    %edx,(%ebx,%eax,1)
 86dee38:	8b 06                	mov    (%esi),%eax
 86dee3a:	8b 56 20             	mov    0x20(%esi),%edx
 86dee3d:	89 03                	mov    %eax,(%ebx)
 86dee3f:	8b 40 f4             	mov    -0xc(%eax),%eax
 86dee42:	89 14 03             	mov    %edx,(%ebx,%eax,1)
 86dee45:	8b 46 24             	mov    0x24(%esi),%eax
 86dee48:	89 43 08             	mov    %eax,0x8(%ebx)
 86dee4b:	8b 45 10             	mov    0x10(%ebp),%eax
 86dee4e:	74 0b                	je     86dee5b <_ZNSt9strstreamC2EPciSt13_Ios_Openmode+0x9b>
 86dee50:	89 04 24             	mov    %eax,(%esp)
 86dee53:	e8 58 f5 99 ff       	call   807e3b0 <strlen@plt>
 86dee58:	03 45 10             	add    0x10(%ebp),%eax
 86dee5b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86dee5f:	8b 45 14             	mov    0x14(%ebp),%eax
 86dee62:	8d 73 0c             	lea    0xc(%ebx),%esi
 86dee65:	89 34 24             	mov    %esi,(%esp)
 86dee68:	89 44 24 08          	mov    %eax,0x8(%esp)
 86dee6c:	8b 45 10             	mov    0x10(%ebp),%eax
 86dee6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 86dee73:	e8 58 f7 ff ff       	call   86de5d0 <_ZNSt12strstreambufC1EPciS0_>
 86dee78:	89 74 24 04          	mov    %esi,0x4(%esp)
 86dee7c:	8b 03                	mov    (%ebx),%eax
 86dee7e:	8b 40 f4             	mov    -0xc(%eax),%eax
 86dee81:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 86dee84:	89 04 24             	mov    %eax,(%esp)
 86dee87:	e8 54 20 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86dee8c:	83 c4 2c             	add    $0x2c,%esp
 86dee8f:	5b                   	pop    %ebx
 86dee90:	5e                   	pop    %esi
 86dee91:	5f                   	pop    %edi
 86dee92:	5d                   	pop    %ebp
 86dee93:	c3                   	ret
 86dee94:	89 04 24             	mov    %eax,(%esp)
 86dee97:	e8 b4 48 40 00       	call   8ae3750 <_Unwind_Resume>
 86dee9c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86dee9f:	89 34 24             	mov    %esi,(%esp)
 86deea2:	e8 a9 ed ff ff       	call   86ddc50 <_ZNSt12strstreambufD1Ev>
 86deea7:	89 7c 24 04          	mov    %edi,0x4(%esp)
 86deeab:	89 1c 24             	mov    %ebx,(%esp)
 86deeae:	e8 7d 28 00 00       	call   86e1730 <_ZNSdD2Ev>
 86deeb3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86deeb6:	eb dc                	jmp    86dee94 <_ZNSt9strstreamC2EPciSt13_Ios_Openmode+0xd4>
 86deeb8:	8b 56 08             	mov    0x8(%esi),%edx
 86deebb:	8b 4e 0c             	mov    0xc(%esi),%ecx
 86deebe:	89 13                	mov    %edx,(%ebx)
 86deec0:	8b 52 f4             	mov    -0xc(%edx),%edx
 86deec3:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86deeca:	89 0c 13             	mov    %ecx,(%ebx,%edx,1)
 86deecd:	eb c5                	jmp    86dee94 <_ZNSt9strstreamC2EPciSt13_Ios_Openmode+0xd4>
 86deecf:	90                   	nop

```

```c
// std::strstream::strstream @ 0x86dedc0

/* std::strstream::strstream(char*, int, std::_Ios_Openmode) */

void __thiscall
std::strstream::strstream(strstream *this,char *param_1,int param_2,_Ios_Openmode param_3)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  char *pcVar4;
  byte in_stack_00000014;
  
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  *(int *)this = iVar1;
  iVar1 = *(int *)(iVar1 + -0xc);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + iVar1) = uVar2;
                    /* try { // try from 086dedfa to 086dedfe has its CatchHandler @ 086dee94 */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)0x0);
  iVar1 = *(int *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *(int *)(this + 8) = iVar1;
  *(undefined4 *)(this + *(int *)(iVar1 + -0xc) + 8) = uVar2;
                    /* try { // try from 086dee23 to 086dee27 has its CatchHandler @ 086deeb8 */
  ios::init((ios *)(this + *(int *)(*(int *)(this + 8) + -0xc) + 8),(streambuf *)0x0);
  *(undefined4 *)(this + *(int *)(*(int *)(param_1 + 4) + -0xc)) = *(undefined4 *)(param_1 + 0x18);
  iVar1 = *(int *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  *(int *)this = iVar1;
  *(undefined4 *)(this + *(int *)(iVar1 + -0xc)) = uVar2;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 0x24);
  pcVar4 = (char *)param_2;
  if ((in_stack_00000014 & 1) != 0) {
    sVar3 = strlen((char *)param_2);
    pcVar4 = (char *)(sVar3 + param_2);
  }
  strstreambuf::strstreambuf((strstreambuf *)(this + 0xc),(char *)param_2,param_3,pcVar4);
                    /* try { // try from 086dee87 to 086dee8b has its CatchHandler @ 086dee9c */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)(this + 0xc));
  return;
}

```

---

## strstream_086df160

```asm
// === 086df160 std::strstream::strstream  [0x086df160-0x86df25f] ===
 86df160:	55                   	push   %ebp
 86df161:	89 e5                	mov    %esp,%ebp
 86df163:	57                   	push   %edi
 86df164:	56                   	push   %esi
 86df165:	53                   	push   %ebx
 86df166:	83 ec 2c             	sub    $0x2c,%esp
 86df169:	8b 75 0c             	mov    0xc(%ebp),%esi
 86df16c:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86df16f:	8b 46 08             	mov    0x8(%esi),%eax
 86df172:	8d 7e 04             	lea    0x4(%esi),%edi
 86df175:	8b 56 0c             	mov    0xc(%esi),%edx
 86df178:	89 03                	mov    %eax,(%ebx)
 86df17a:	8b 40 f4             	mov    -0xc(%eax),%eax
 86df17d:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86df184:	89 14 03             	mov    %edx,(%ebx,%eax,1)
 86df187:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86df18e:	00 
 86df18f:	8b 03                	mov    (%ebx),%eax
 86df191:	8b 40 f4             	mov    -0xc(%eax),%eax
 86df194:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 86df197:	89 04 24             	mov    %eax,(%esp)
 86df19a:	e8 41 1d 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86df19f:	8b 57 0c             	mov    0xc(%edi),%edx
 86df1a2:	8d 43 08             	lea    0x8(%ebx),%eax
 86df1a5:	8b 4f 10             	mov    0x10(%edi),%ecx
 86df1a8:	89 53 08             	mov    %edx,0x8(%ebx)
 86df1ab:	8b 52 f4             	mov    -0xc(%edx),%edx
 86df1ae:	89 4c 13 08          	mov    %ecx,0x8(%ebx,%edx,1)
 86df1b2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86df1b9:	00 
 86df1ba:	8b 53 08             	mov    0x8(%ebx),%edx
 86df1bd:	03 42 f4             	add    -0xc(%edx),%eax
 86df1c0:	89 04 24             	mov    %eax,(%esp)
 86df1c3:	e8 18 1d 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86df1c8:	8b 46 04             	mov    0x4(%esi),%eax
 86df1cb:	8b 57 14             	mov    0x14(%edi),%edx
 86df1ce:	8b 40 f4             	mov    -0xc(%eax),%eax
 86df1d1:	89 14 03             	mov    %edx,(%ebx,%eax,1)
 86df1d4:	8b 06                	mov    (%esi),%eax
 86df1d6:	8b 56 20             	mov    0x20(%esi),%edx
 86df1d9:	89 03                	mov    %eax,(%ebx)
 86df1db:	8b 40 f4             	mov    -0xc(%eax),%eax
 86df1de:	89 14 03             	mov    %edx,(%ebx,%eax,1)
 86df1e1:	8b 46 24             	mov    0x24(%esi),%eax
 86df1e4:	8d 73 0c             	lea    0xc(%ebx),%esi
 86df1e7:	89 43 08             	mov    %eax,0x8(%ebx)
 86df1ea:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86df1f1:	00 
 86df1f2:	89 34 24             	mov    %esi,(%esp)
 86df1f5:	e8 96 e9 ff ff       	call   86ddb90 <_ZNSt12strstreambufC1Ei>
 86df1fa:	89 74 24 04          	mov    %esi,0x4(%esp)
 86df1fe:	8b 03                	mov    (%ebx),%eax
 86df200:	8b 40 f4             	mov    -0xc(%eax),%eax
 86df203:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 86df206:	89 04 24             	mov    %eax,(%esp)
 86df209:	e8 d2 1c 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86df20e:	83 c4 2c             	add    $0x2c,%esp
 86df211:	5b                   	pop    %ebx
 86df212:	5e                   	pop    %esi
 86df213:	5f                   	pop    %edi
 86df214:	5d                   	pop    %ebp
 86df215:	c3                   	ret
 86df216:	89 04 24             	mov    %eax,(%esp)
 86df219:	e8 32 45 40 00       	call   8ae3750 <_Unwind_Resume>
 86df21e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86df221:	89 34 24             	mov    %esi,(%esp)
 86df224:	e8 27 ea ff ff       	call   86ddc50 <_ZNSt12strstreambufD1Ev>
 86df229:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86df22c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86df22f:	89 7c 24 04          	mov    %edi,0x4(%esp)
 86df233:	89 1c 24             	mov    %ebx,(%esp)
 86df236:	e8 f5 24 00 00       	call   86e1730 <_ZNSdD2Ev>
 86df23b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86df23e:	eb d6                	jmp    86df216 <_ZNSt9strstreamC2Ev+0xb6>
 86df240:	eb ea                	jmp    86df22c <_ZNSt9strstreamC2Ev+0xcc>
 86df242:	8b 56 08             	mov    0x8(%esi),%edx
 86df245:	8b 4e 0c             	mov    0xc(%esi),%ecx
 86df248:	89 13                	mov    %edx,(%ebx)
 86df24a:	8b 52 f4             	mov    -0xc(%edx),%edx
 86df24d:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86df254:	89 0c 13             	mov    %ecx,(%ebx,%edx,1)
 86df257:	eb bd                	jmp    86df216 <_ZNSt9strstreamC2Ev+0xb6>
 86df259:	90                   	nop
 86df25a:	90                   	nop
 86df25b:	90                   	nop
 86df25c:	90                   	nop
 86df25d:	90                   	nop
 86df25e:	90                   	nop
 86df25f:	90                   	nop

```

```c
// std::strstream::strstream @ 0x86df160

/* std::strstream::strstream() */

void __thiscall std::strstream::strstream(strstream *this)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000008;
  
  iVar1 = in_stack_00000008[2];
  iVar2 = in_stack_00000008[3];
  *(int *)this = iVar1;
  iVar1 = *(int *)(iVar1 + -0xc);
  *(undefined4 *)(this + 4) = 0;
  *(int *)(this + iVar1) = iVar2;
                    /* try { // try from 086df19a to 086df19e has its CatchHandler @ 086df216 */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)0x0);
  iVar1 = in_stack_00000008[4];
  iVar2 = in_stack_00000008[5];
  *(int *)(this + 8) = iVar1;
  *(int *)(this + *(int *)(iVar1 + -0xc) + 8) = iVar2;
                    /* try { // try from 086df1c3 to 086df1c7 has its CatchHandler @ 086df242 */
  ios::init((ios *)(this + *(int *)(*(int *)(this + 8) + -0xc) + 8),(streambuf *)0x0);
  *(int *)(this + *(int *)(in_stack_00000008[1] + -0xc)) = in_stack_00000008[6];
  iVar1 = *in_stack_00000008;
  iVar2 = in_stack_00000008[8];
  *(int *)this = iVar1;
  *(int *)(this + *(int *)(iVar1 + -0xc)) = iVar2;
  *(int *)(this + 8) = in_stack_00000008[9];
                    /* try { // try from 086df1f5 to 086df1f9 has its CatchHandler @ 086df240 */
  strstreambuf::strstreambuf((strstreambuf *)(this + 0xc),0);
                    /* try { // try from 086df209 to 086df20d has its CatchHandler @ 086df21e */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)(this + 0xc));
  return;
}

```

---

## strstream_086df260

```asm
// === 086df260 std::strstream::strstream  [0x086df260-0x86df3cf] ===
 86df260:	55                   	push   %ebp
 86df261:	89 e5                	mov    %esp,%ebp
 86df263:	57                   	push   %edi
 86df264:	56                   	push   %esi
 86df265:	53                   	push   %ebx
 86df266:	83 ec 2c             	sub    $0x2c,%esp
 86df269:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86df26c:	8d 73 38             	lea    0x38(%ebx),%esi
 86df26f:	89 34 24             	mov    %esi,(%esp)
 86df272:	e8 79 7e 04 00       	call   87270f0 <_ZNSt8ios_baseC1Ev>
 86df277:	8b 3d 68 e2 cf 08    	mov    0x8cfe268,%edi
 86df27d:	c6 46 74 00          	movb   $0x0,0x74(%esi)
 86df281:	8b 15 6c e2 cf 08    	mov    0x8cfe26c,%edx
 86df287:	c7 43 38 70 e9 cf 08 	movl   $0x8cfe970,0x38(%ebx)
 86df28e:	c7 46 70 00 00 00 00 	movl   $0x0,0x70(%esi)
 86df295:	8b 47 f4             	mov    -0xc(%edi),%eax
 86df298:	89 3b                	mov    %edi,(%ebx)
 86df29a:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86df2a1:	c6 46 75 00          	movb   $0x0,0x75(%esi)
 86df2a5:	89 14 03             	mov    %edx,(%ebx,%eax,1)
 86df2a8:	c7 46 78 00 00 00 00 	movl   $0x0,0x78(%esi)
 86df2af:	c7 46 7c 00 00 00 00 	movl   $0x0,0x7c(%esi)
 86df2b6:	c7 86 80 00 00 00 00 	movl   $0x0,0x80(%esi)
 86df2bd:	00 00 00 
 86df2c0:	c7 86 84 00 00 00 00 	movl   $0x0,0x84(%esi)
 86df2c7:	00 00 00 
 86df2ca:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86df2d1:	00 
 86df2d2:	8b 03                	mov    (%ebx),%eax
 86df2d4:	8b 40 f4             	mov    -0xc(%eax),%eax
 86df2d7:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 86df2da:	89 04 24             	mov    %eax,(%esp)
 86df2dd:	e8 fe 1b 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86df2e2:	8b 15 70 e2 cf 08    	mov    0x8cfe270,%edx
 86df2e8:	8d 43 08             	lea    0x8(%ebx),%eax
 86df2eb:	8b 0d 74 e2 cf 08    	mov    0x8cfe274,%ecx
 86df2f1:	89 53 08             	mov    %edx,0x8(%ebx)
 86df2f4:	8b 52 f4             	mov    -0xc(%edx),%edx
 86df2f7:	89 4c 13 08          	mov    %ecx,0x8(%ebx,%edx,1)
 86df2fb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86df302:	00 
 86df303:	8b 53 08             	mov    0x8(%ebx),%edx
 86df306:	03 42 f4             	add    -0xc(%edx),%eax
 86df309:	89 04 24             	mov    %eax,(%esp)
 86df30c:	e8 cf 1b 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86df311:	a1 64 e2 cf 08       	mov    0x8cfe264,%eax
 86df316:	8b 15 78 e2 cf 08    	mov    0x8cfe278,%edx
 86df31c:	f6 45 14 01          	testb  $0x1,0x14(%ebp)
 86df320:	8b 40 f4             	mov    -0xc(%eax),%eax
 86df323:	89 14 03             	mov    %edx,(%ebx,%eax,1)
 86df326:	8b 45 0c             	mov    0xc(%ebp),%eax
 86df329:	c7 03 2c e2 cf 08    	movl   $0x8cfe22c,(%ebx)
 86df32f:	c7 43 38 54 e2 cf 08 	movl   $0x8cfe254,0x38(%ebx)
 86df336:	c7 43 08 40 e2 cf 08 	movl   $0x8cfe240,0x8(%ebx)
 86df33d:	74 0b                	je     86df34a <_ZNSt9strstreamC1EPciSt13_Ios_Openmode+0xea>
 86df33f:	89 04 24             	mov    %eax,(%esp)
 86df342:	e8 69 f0 99 ff       	call   807e3b0 <strlen@plt>
 86df347:	03 45 0c             	add    0xc(%ebp),%eax
 86df34a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86df34e:	8b 55 0c             	mov    0xc(%ebp),%edx
 86df351:	8d 7b 0c             	lea    0xc(%ebx),%edi
 86df354:	8b 45 10             	mov    0x10(%ebp),%eax
 86df357:	89 3c 24             	mov    %edi,(%esp)
 86df35a:	89 54 24 04          	mov    %edx,0x4(%esp)
 86df35e:	89 44 24 08          	mov    %eax,0x8(%esp)
 86df362:	e8 69 f2 ff ff       	call   86de5d0 <_ZNSt12strstreambufC1EPciS0_>
 86df367:	89 7c 24 04          	mov    %edi,0x4(%esp)
 86df36b:	89 34 24             	mov    %esi,(%esp)
 86df36e:	e8 6d 1b 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86df373:	83 c4 2c             	add    $0x2c,%esp
 86df376:	5b                   	pop    %ebx
 86df377:	5e                   	pop    %esi
 86df378:	5f                   	pop    %edi
 86df379:	5d                   	pop    %ebp
 86df37a:	c3                   	ret
 86df37b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86df37e:	89 34 24             	mov    %esi,(%esp)
 86df381:	e8 8a 18 00 00       	call   86e0c10 <_ZNSt9basic_iosIcSt11char_traitsIcEED1Ev>
 86df386:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86df389:	89 04 24             	mov    %eax,(%esp)
 86df38c:	e8 bf 43 40 00       	call   8ae3750 <_Unwind_Resume>
 86df391:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86df394:	89 3c 24             	mov    %edi,(%esp)
 86df397:	e8 b4 e8 ff ff       	call   86ddc50 <_ZNSt12strstreambufD1Ev>
 86df39c:	c7 44 24 04 64 e2 cf 	movl   $0x8cfe264,0x4(%esp)
 86df3a3:	08 
 86df3a4:	89 1c 24             	mov    %ebx,(%esp)
 86df3a7:	e8 84 23 00 00       	call   86e1730 <_ZNSdD2Ev>
 86df3ac:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86df3af:	eb ca                	jmp    86df37b <_ZNSt9strstreamC1EPciSt13_Ios_Openmode+0x11b>
 86df3b1:	8b 57 f4             	mov    -0xc(%edi),%edx
 86df3b4:	8b 0d 6c e2 cf 08    	mov    0x8cfe26c,%ecx
 86df3ba:	89 3b                	mov    %edi,(%ebx)
 86df3bc:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86df3c3:	89 0c 13             	mov    %ecx,(%ebx,%edx,1)
 86df3c6:	eb b3                	jmp    86df37b <_ZNSt9strstreamC1EPciSt13_Ios_Openmode+0x11b>
 86df3c8:	90                   	nop
 86df3c9:	90                   	nop
 86df3ca:	90                   	nop
 86df3cb:	90                   	nop
 86df3cc:	90                   	nop
 86df3cd:	90                   	nop
 86df3ce:	90                   	nop
 86df3cf:	90                   	nop

```

```c
// std::strstream::strstream @ 0x86df260

/* std::strstream::strstream(char*, int, std::_Ios_Openmode) */

void __thiscall
std::strstream::strstream(strstream *this,char *param_1,int param_2,_Ios_Openmode param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  size_t sVar4;
  char *pcVar5;
  
  ios_base::ios_base((ios_base *)(this + 0x38));
  puVar2 = PTR_PTR_08cfe268;
  this[0xac] = (strstream)0x0;
  puVar3 = PTR_PTR_08cfe26c;
  *(undefined ***)(this + 0x38) = &PTR__ios_08cfe970;
  *(undefined4 *)(this + 0xa8) = 0;
  iVar1 = *(int *)(puVar2 + -0xc);
  *(undefined **)this = puVar2;
  *(undefined4 *)(this + 4) = 0;
  this[0xad] = (strstream)0x0;
  *(undefined **)(this + iVar1) = puVar3;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
                    /* try { // try from 086df2dd to 086df2e1 has its CatchHandler @ 086df37b */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)0x0);
  puVar3 = PTR_PTR_08cfe274;
  puVar2 = PTR_PTR_08cfe270;
  *(undefined **)(this + 8) = PTR_PTR_08cfe270;
  *(undefined **)(this + *(int *)(puVar2 + -0xc) + 8) = puVar3;
                    /* try { // try from 086df30c to 086df310 has its CatchHandler @ 086df3b1 */
  ios::init((ios *)(this + *(int *)(*(int *)(this + 8) + -0xc) + 8),(streambuf *)0x0);
  *(undefined **)(this + *(int *)(PTR_PTR_08cfe264 + -0xc)) = PTR_PTR_08cfe278;
  *(undefined4 *)this = 0x8cfe22c;
  *(undefined4 *)(this + 0x38) = 0x8cfe254;
  *(undefined4 *)(this + 8) = 0x8cfe240;
  pcVar5 = param_1;
  if ((param_3 & _S_app) != 0) {
    sVar4 = strlen(param_1);
    pcVar5 = param_1 + sVar4;
  }
  strstreambuf::strstreambuf((strstreambuf *)(this + 0xc),param_1,param_2,pcVar5);
                    /* try { // try from 086df36e to 086df372 has its CatchHandler @ 086df391 */
  ios::init((ios *)(this + 0x38),(streambuf *)(this + 0xc));
  return;
}

```

---

## strstream_086df3d0

```asm
// === 086df3d0 std::strstream::strstream  [0x086df3d0-0x86df53f] ===
 86df3d0:	55                   	push   %ebp
 86df3d1:	89 e5                	mov    %esp,%ebp
 86df3d3:	57                   	push   %edi
 86df3d4:	56                   	push   %esi
 86df3d5:	53                   	push   %ebx
 86df3d6:	83 ec 2c             	sub    $0x2c,%esp
 86df3d9:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86df3dc:	8d 73 38             	lea    0x38(%ebx),%esi
 86df3df:	89 34 24             	mov    %esi,(%esp)
 86df3e2:	e8 09 7d 04 00       	call   87270f0 <_ZNSt8ios_baseC1Ev>
 86df3e7:	8b 3d 68 e2 cf 08    	mov    0x8cfe268,%edi
 86df3ed:	c6 46 74 00          	movb   $0x0,0x74(%esi)
 86df3f1:	8b 15 6c e2 cf 08    	mov    0x8cfe26c,%edx
 86df3f7:	c7 43 38 70 e9 cf 08 	movl   $0x8cfe970,0x38(%ebx)
 86df3fe:	c7 46 70 00 00 00 00 	movl   $0x0,0x70(%esi)
 86df405:	8b 47 f4             	mov    -0xc(%edi),%eax
 86df408:	89 3b                	mov    %edi,(%ebx)
 86df40a:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86df411:	c6 46 75 00          	movb   $0x0,0x75(%esi)
 86df415:	89 14 03             	mov    %edx,(%ebx,%eax,1)
 86df418:	c7 46 78 00 00 00 00 	movl   $0x0,0x78(%esi)
 86df41f:	c7 46 7c 00 00 00 00 	movl   $0x0,0x7c(%esi)
 86df426:	c7 86 80 00 00 00 00 	movl   $0x0,0x80(%esi)
 86df42d:	00 00 00 
 86df430:	c7 86 84 00 00 00 00 	movl   $0x0,0x84(%esi)
 86df437:	00 00 00 
 86df43a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86df441:	00 
 86df442:	8b 03                	mov    (%ebx),%eax
 86df444:	8b 40 f4             	mov    -0xc(%eax),%eax
 86df447:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 86df44a:	89 04 24             	mov    %eax,(%esp)
 86df44d:	e8 8e 1a 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86df452:	8b 15 70 e2 cf 08    	mov    0x8cfe270,%edx
 86df458:	8d 43 08             	lea    0x8(%ebx),%eax
 86df45b:	8b 0d 74 e2 cf 08    	mov    0x8cfe274,%ecx
 86df461:	89 53 08             	mov    %edx,0x8(%ebx)
 86df464:	8b 52 f4             	mov    -0xc(%edx),%edx
 86df467:	89 4c 13 08          	mov    %ecx,0x8(%ebx,%edx,1)
 86df46b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86df472:	00 
 86df473:	8b 53 08             	mov    0x8(%ebx),%edx
 86df476:	03 42 f4             	add    -0xc(%edx),%eax
 86df479:	89 04 24             	mov    %eax,(%esp)
 86df47c:	e8 5f 1a 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86df481:	a1 64 e2 cf 08       	mov    0x8cfe264,%eax
 86df486:	8d 7b 0c             	lea    0xc(%ebx),%edi
 86df489:	8b 15 78 e2 cf 08    	mov    0x8cfe278,%edx
 86df48f:	8b 40 f4             	mov    -0xc(%eax),%eax
 86df492:	89 14 03             	mov    %edx,(%ebx,%eax,1)
 86df495:	c7 03 2c e2 cf 08    	movl   $0x8cfe22c,(%ebx)
 86df49b:	c7 43 38 54 e2 cf 08 	movl   $0x8cfe254,0x38(%ebx)
 86df4a2:	c7 43 08 40 e2 cf 08 	movl   $0x8cfe240,0x8(%ebx)
 86df4a9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86df4b0:	00 
 86df4b1:	89 3c 24             	mov    %edi,(%esp)
 86df4b4:	e8 d7 e6 ff ff       	call   86ddb90 <_ZNSt12strstreambufC1Ei>
 86df4b9:	89 7c 24 04          	mov    %edi,0x4(%esp)
 86df4bd:	89 34 24             	mov    %esi,(%esp)
 86df4c0:	e8 1b 1a 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86df4c5:	83 c4 2c             	add    $0x2c,%esp
 86df4c8:	5b                   	pop    %ebx
 86df4c9:	5e                   	pop    %esi
 86df4ca:	5f                   	pop    %edi
 86df4cb:	5d                   	pop    %ebp
 86df4cc:	c3                   	ret
 86df4cd:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86df4d0:	89 34 24             	mov    %esi,(%esp)
 86df4d3:	e8 38 17 00 00       	call   86e0c10 <_ZNSt9basic_iosIcSt11char_traitsIcEED1Ev>
 86df4d8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86df4db:	89 04 24             	mov    %eax,(%esp)
 86df4de:	e8 6d 42 40 00       	call   8ae3750 <_Unwind_Resume>
 86df4e3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86df4e6:	89 3c 24             	mov    %edi,(%esp)
 86df4e9:	e8 62 e7 ff ff       	call   86ddc50 <_ZNSt12strstreambufD1Ev>
 86df4ee:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86df4f1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86df4f4:	c7 44 24 04 64 e2 cf 	movl   $0x8cfe264,0x4(%esp)
 86df4fb:	08 
 86df4fc:	89 1c 24             	mov    %ebx,(%esp)
 86df4ff:	e8 2c 22 00 00       	call   86e1730 <_ZNSdD2Ev>
 86df504:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86df507:	eb c4                	jmp    86df4cd <_ZNSt9strstreamC1Ev+0xfd>
 86df509:	eb e6                	jmp    86df4f1 <_ZNSt9strstreamC1Ev+0x121>
 86df50b:	8b 57 f4             	mov    -0xc(%edi),%edx
 86df50e:	8b 0d 6c e2 cf 08    	mov    0x8cfe26c,%ecx
 86df514:	89 3b                	mov    %edi,(%ebx)
 86df516:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86df51d:	89 0c 13             	mov    %ecx,(%ebx,%edx,1)
 86df520:	eb ab                	jmp    86df4cd <_ZNSt9strstreamC1Ev+0xfd>
 86df522:	90                   	nop
 86df523:	90                   	nop
 86df524:	90                   	nop
 86df525:	90                   	nop
 86df526:	90                   	nop
 86df527:	90                   	nop
 86df528:	90                   	nop
 86df529:	90                   	nop
 86df52a:	90                   	nop
 86df52b:	90                   	nop
 86df52c:	90                   	nop
 86df52d:	90                   	nop
 86df52e:	90                   	nop
 86df52f:	90                   	nop

086df530 <_ZNSt14error_categoryD1Ev>:
 86df530:	55                   	push   %ebp
 86df531:	89 e5                	mov    %esp,%ebp
 86df533:	8b 45 08             	mov    0x8(%ebp),%eax
 86df536:	c7 00 48 e5 cf 08    	movl   $0x8cfe548,(%eax)
 86df53c:	5d                   	pop    %ebp
 86df53d:	c3                   	ret
 86df53e:	90                   	nop
 86df53f:	90                   	nop

```

```c
// std::strstream::strstream @ 0x86df3d0

/* std::strstream::strstream() */

void __thiscall std::strstream::strstream(strstream *this)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  ios_base::ios_base((ios_base *)(this + 0x38));
  puVar2 = PTR_PTR_08cfe268;
  this[0xac] = (strstream)0x0;
  puVar3 = PTR_PTR_08cfe26c;
  *(undefined ***)(this + 0x38) = &PTR__ios_08cfe970;
  *(undefined4 *)(this + 0xa8) = 0;
  iVar1 = *(int *)(puVar2 + -0xc);
  *(undefined **)this = puVar2;
  *(undefined4 *)(this + 4) = 0;
  this[0xad] = (strstream)0x0;
  *(undefined **)(this + iVar1) = puVar3;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
                    /* try { // try from 086df44d to 086df451 has its CatchHandler @ 086df4cd */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)0x0);
  puVar3 = PTR_PTR_08cfe274;
  puVar2 = PTR_PTR_08cfe270;
  *(undefined **)(this + 8) = PTR_PTR_08cfe270;
  *(undefined **)(this + *(int *)(puVar2 + -0xc) + 8) = puVar3;
                    /* try { // try from 086df47c to 086df480 has its CatchHandler @ 086df50b */
  ios::init((ios *)(this + *(int *)(*(int *)(this + 8) + -0xc) + 8),(streambuf *)0x0);
  *(undefined **)(this + *(int *)(PTR_PTR_08cfe264 + -0xc)) = PTR_PTR_08cfe278;
  *(undefined4 *)this = 0x8cfe22c;
  *(undefined4 *)(this + 0x38) = 0x8cfe254;
  *(undefined4 *)(this + 8) = 0x8cfe240;
                    /* try { // try from 086df4b4 to 086df4b8 has its CatchHandler @ 086df509 */
  strstreambuf::strstreambuf((strstreambuf *)(this + 0xc),0);
                    /* try { // try from 086df4c0 to 086df4c4 has its CatchHandler @ 086df4e3 */
  ios::init((ios *)(this + 0x38),(streambuf *)(this + 0xc));
  return;
}

```

---

## ~strstream

```asm
// === 086de150 std::strstream::~strstream  [0x086de150-0x86de1ff] ===
 86de150:	55                   	push   %ebp
 86de151:	89 e5                	mov    %esp,%ebp
 86de153:	56                   	push   %esi
 86de154:	53                   	push   %ebx
 86de155:	83 ec 20             	sub    $0x20,%esp
 86de158:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86de15b:	c7 03 2c e2 cf 08    	movl   $0x8cfe22c,(%ebx)
 86de161:	8d 43 0c             	lea    0xc(%ebx),%eax
 86de164:	c7 43 38 54 e2 cf 08 	movl   $0x8cfe254,0x38(%ebx)
 86de16b:	8d 73 38             	lea    0x38(%ebx),%esi
 86de16e:	c7 43 08 40 e2 cf 08 	movl   $0x8cfe240,0x8(%ebx)
 86de175:	89 04 24             	mov    %eax,(%esp)
 86de178:	e8 d3 fa ff ff       	call   86ddc50 <_ZNSt12strstreambufD1Ev>
 86de17d:	a1 64 e2 cf 08       	mov    0x8cfe264,%eax
 86de182:	8b 15 78 e2 cf 08    	mov    0x8cfe278,%edx
 86de188:	8b 40 f4             	mov    -0xc(%eax),%eax
 86de18b:	89 14 03             	mov    %edx,(%ebx,%eax,1)
 86de18e:	a1 70 e2 cf 08       	mov    0x8cfe270,%eax
 86de193:	8b 15 74 e2 cf 08    	mov    0x8cfe274,%edx
 86de199:	89 43 08             	mov    %eax,0x8(%ebx)
 86de19c:	8b 40 f4             	mov    -0xc(%eax),%eax
 86de19f:	89 54 03 08          	mov    %edx,0x8(%ebx,%eax,1)
 86de1a3:	a1 68 e2 cf 08       	mov    0x8cfe268,%eax
 86de1a8:	8b 15 6c e2 cf 08    	mov    0x8cfe26c,%edx
 86de1ae:	89 03                	mov    %eax,(%ebx)
 86de1b0:	8b 40 f4             	mov    -0xc(%eax),%eax
 86de1b3:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86de1ba:	89 14 03             	mov    %edx,(%ebx,%eax,1)
 86de1bd:	c7 43 38 70 e9 cf 08 	movl   $0x8cfe970,0x38(%ebx)
 86de1c4:	89 75 08             	mov    %esi,0x8(%ebp)
 86de1c7:	83 c4 20             	add    $0x20,%esp
 86de1ca:	5b                   	pop    %ebx
 86de1cb:	5e                   	pop    %esi
 86de1cc:	5d                   	pop    %ebp
 86de1cd:	e9 9e 8e 04 00       	jmp    8727070 <_ZNSt8ios_baseD1Ev>
 86de1d2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86de1d5:	c7 44 24 04 64 e2 cf 	movl   $0x8cfe264,0x4(%esp)
 86de1dc:	08 
 86de1dd:	89 1c 24             	mov    %ebx,(%esp)
 86de1e0:	e8 4b 35 00 00       	call   86e1730 <_ZNSdD2Ev>
 86de1e5:	89 34 24             	mov    %esi,(%esp)
 86de1e8:	e8 23 2a 00 00       	call   86e0c10 <_ZNSt9basic_iosIcSt11char_traitsIcEED1Ev>
 86de1ed:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86de1f0:	89 04 24             	mov    %eax,(%esp)
 86de1f3:	e8 58 55 40 00       	call   8ae3750 <_Unwind_Resume>
 86de1f8:	90                   	nop
 86de1f9:	90                   	nop
 86de1fa:	90                   	nop
 86de1fb:	90                   	nop
 86de1fc:	90                   	nop
 86de1fd:	90                   	nop
 86de1fe:	90                   	nop
 86de1ff:	90                   	nop

```

```c
// std::strstream::~strstream @ 0x86de150

/* std::strstream::~strstream() */

void __thiscall std::strstream::~strstream(strstream *this)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  *(undefined4 *)this = 0x8cfe22c;
  *(undefined4 *)(this + 0x38) = 0x8cfe254;
  *(undefined4 *)(this + 8) = 0x8cfe240;
                    /* try { // try from 086de178 to 086de17c has its CatchHandler @ 086de1d2 */
  strstreambuf::~strstreambuf((strstreambuf *)(this + 0xc));
  *(undefined **)(this + *(int *)(PTR_PTR_08cfe264 + -0xc)) = PTR_PTR_08cfe278;
  puVar3 = PTR_PTR_08cfe274;
  puVar2 = PTR_PTR_08cfe270;
  *(undefined **)(this + 8) = PTR_PTR_08cfe270;
  *(undefined **)(this + *(int *)(puVar2 + -0xc) + 8) = puVar3;
  puVar3 = PTR_PTR_08cfe26c;
  puVar2 = PTR_PTR_08cfe268;
  *(undefined **)this = PTR_PTR_08cfe268;
  iVar1 = *(int *)(puVar2 + -0xc);
  *(undefined4 *)(this + 4) = 0;
  *(undefined **)(this + iVar1) = puVar3;
  *(undefined ***)(this + 0x38) = &PTR__ios_08cfe970;
  ios_base::~ios_base((ios_base *)(this + 0x38));
  return;
}

```

---

## ~strstream_086de230

```asm
// === 086de230 std::strstream::~strstream  [0x086de230-0x86de24f] ===
 86de230:	55                   	push   %ebp
 86de231:	89 e5                	mov    %esp,%ebp
 86de233:	53                   	push   %ebx
 86de234:	83 ec 14             	sub    $0x14,%esp
 86de237:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86de23a:	89 1c 24             	mov    %ebx,(%esp)
 86de23d:	e8 0e ff ff ff       	call   86de150 <_ZNSt9strstreamD1Ev>
 86de242:	89 5d 08             	mov    %ebx,0x8(%ebp)
 86de245:	83 c4 14             	add    $0x14,%esp
 86de248:	5b                   	pop    %ebx
 86de249:	5d                   	pop    %ebp
 86de24a:	e9 a1 62 04 00       	jmp    87244f0 <_ZdlPv>
 86de24f:	90                   	nop

```

```c
// std::strstream::~strstream @ 0x86de230

/* std::strstream::~strstream() */

void __thiscall std::strstream::~strstream(strstream *this)

{
  ~strstream(this);
  operator_delete(this);
  return;
}

```

---

## ~strstream_086de250

```asm
// === 086de250 std::strstream::~strstream  [0x086de250-0x86de2df] ===
 86de250:	55                   	push   %ebp
 86de251:	89 e5                	mov    %esp,%ebp
 86de253:	56                   	push   %esi
 86de254:	53                   	push   %ebx
 86de255:	83 ec 20             	sub    $0x20,%esp
 86de258:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 86de25b:	8b 75 08             	mov    0x8(%ebp),%esi
 86de25e:	8b 03                	mov    (%ebx),%eax
 86de260:	8b 53 20             	mov    0x20(%ebx),%edx
 86de263:	89 06                	mov    %eax,(%esi)
 86de265:	8b 40 f4             	mov    -0xc(%eax),%eax
 86de268:	89 14 06             	mov    %edx,(%esi,%eax,1)
 86de26b:	8b 43 24             	mov    0x24(%ebx),%eax
 86de26e:	89 46 08             	mov    %eax,0x8(%esi)
 86de271:	8d 46 0c             	lea    0xc(%esi),%eax
 86de274:	89 04 24             	mov    %eax,(%esp)
 86de277:	e8 d4 f9 ff ff       	call   86ddc50 <_ZNSt12strstreambufD1Ev>
 86de27c:	8b 43 04             	mov    0x4(%ebx),%eax
 86de27f:	8b 53 18             	mov    0x18(%ebx),%edx
 86de282:	8b 40 f4             	mov    -0xc(%eax),%eax
 86de285:	89 14 06             	mov    %edx,(%esi,%eax,1)
 86de288:	8b 43 10             	mov    0x10(%ebx),%eax
 86de28b:	8b 53 14             	mov    0x14(%ebx),%edx
 86de28e:	89 46 08             	mov    %eax,0x8(%esi)
 86de291:	8b 40 f4             	mov    -0xc(%eax),%eax
 86de294:	89 54 06 08          	mov    %edx,0x8(%esi,%eax,1)
 86de298:	8b 43 08             	mov    0x8(%ebx),%eax
 86de29b:	8b 53 0c             	mov    0xc(%ebx),%edx
 86de29e:	89 06                	mov    %eax,(%esi)
 86de2a0:	8b 40 f4             	mov    -0xc(%eax),%eax
 86de2a3:	c7 46 04 00 00 00 00 	movl   $0x0,0x4(%esi)
 86de2aa:	89 14 06             	mov    %edx,(%esi,%eax,1)
 86de2ad:	83 c4 20             	add    $0x20,%esp
 86de2b0:	5b                   	pop    %ebx
 86de2b1:	5e                   	pop    %esi
 86de2b2:	5d                   	pop    %ebp
 86de2b3:	c3                   	ret
 86de2b4:	83 c3 04             	add    $0x4,%ebx
 86de2b7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86de2ba:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86de2be:	89 34 24             	mov    %esi,(%esp)
 86de2c1:	e8 6a 34 00 00       	call   86e1730 <_ZNSdD2Ev>
 86de2c6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86de2c9:	89 04 24             	mov    %eax,(%esp)
 86de2cc:	e8 7f 54 40 00       	call   8ae3750 <_Unwind_Resume>
 86de2d1:	90                   	nop
 86de2d2:	90                   	nop
 86de2d3:	90                   	nop
 86de2d4:	90                   	nop
 86de2d5:	90                   	nop
 86de2d6:	90                   	nop
 86de2d7:	90                   	nop
 86de2d8:	90                   	nop
 86de2d9:	90                   	nop
 86de2da:	90                   	nop
 86de2db:	90                   	nop
 86de2dc:	90                   	nop
 86de2dd:	90                   	nop
 86de2de:	90                   	nop
 86de2df:	90                   	nop

```

```c
// std::strstream::~strstream @ 0x86de250

/* std::strstream::~strstream() */

void __thiscall std::strstream::~strstream(strstream *this)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000008;
  
  iVar1 = *in_stack_00000008;
  iVar2 = in_stack_00000008[8];
  *(int *)this = iVar1;
  *(int *)(this + *(int *)(iVar1 + -0xc)) = iVar2;
  *(int *)(this + 8) = in_stack_00000008[9];
                    /* try { // try from 086de277 to 086de27b has its CatchHandler @ 086de2b4 */
  strstreambuf::~strstreambuf((strstreambuf *)(this + 0xc));
  *(int *)(this + *(int *)(in_stack_00000008[1] + -0xc)) = in_stack_00000008[6];
  iVar1 = in_stack_00000008[4];
  iVar2 = in_stack_00000008[5];
  *(int *)(this + 8) = iVar1;
  *(int *)(this + *(int *)(iVar1 + -0xc) + 8) = iVar2;
  iVar1 = in_stack_00000008[2];
  iVar2 = in_stack_00000008[3];
  *(int *)this = iVar1;
  iVar1 = *(int *)(iVar1 + -0xc);
  *(undefined4 *)(this + 4) = 0;
  *(int *)(this + iVar1) = iVar2;
  return;
}

```

