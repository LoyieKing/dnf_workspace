# CNexonMsgTable

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## CNexonMsgTable

```asm
// === 0858001c CNexonMsgTable::CNexonMsgTable  [0x0858001c-0x85800f7] ===
 858001c:	55                   	push   %ebp
 858001d:	89 e5                	mov    %esp,%ebp
 858001f:	56                   	push   %esi
 8580020:	53                   	push   %ebx
 8580021:	83 ec 30             	sub    $0x30,%esp
 8580024:	8b 45 08             	mov    0x8(%ebp),%eax
 8580027:	89 04 24             	mov    %eax,(%esp)
 858002a:	e8 bb 6b b4 ff       	call   80c6bea <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEEC1Ev>
 858002f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8580036:	e9 84 00 00 00       	jmp    85800bf <_ZN14CNexonMsgTableC1Ev+0xa3>
 858003b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858003e:	c1 e0 03             	shl    $0x3,%eax
 8580041:	05 80 bb 3a 09       	add    $0x93abb80,%eax
 8580046:	8d 48 04             	lea    0x4(%eax),%ecx
 8580049:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858004c:	c1 e0 03             	shl    $0x3,%eax
 858004f:	8d 90 80 bb 3a 09    	lea    0x93abb80(%eax),%edx
 8580055:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8580058:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 858005c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8580060:	89 04 24             	mov    %eax,(%esp)
 8580063:	e8 95 01 00 00       	call   85801fd <_ZSt9make_pairIRiRPKcESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 8580068:	83 ec 04             	sub    $0x4,%esp
 858006b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 858006e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8580072:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8580075:	89 04 24             	mov    %eax,(%esp)
 8580078:	e8 bf 01 00 00       	call   858023c <_ZNSt4pairIKiSsEC1IiPKcEEOS_IT_T0_E>
 858007d:	8b 55 08             	mov    0x8(%ebp),%edx
 8580080:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8580083:	8d 4d e4             	lea    -0x1c(%ebp),%ecx
 8580086:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 858008a:	89 54 24 04          	mov    %edx,0x4(%esp)
 858008e:	89 04 24             	mov    %eax,(%esp)
 8580091:	e8 58 6d b4 ff       	call   80c6dee <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE6insertERKS4_>
 8580096:	83 ec 04             	sub    $0x4,%esp
 8580099:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 858009c:	89 04 24             	mov    %eax,(%esp)
 858009f:	e8 1c 6b b4 ff       	call   80c6bc0 <_ZNSt4pairIKiSsED1Ev>
 85800a4:	eb 15                	jmp    85800bb <_ZN14CNexonMsgTableC1Ev+0x9f>
 85800a6:	89 d3                	mov    %edx,%ebx
 85800a8:	89 c6                	mov    %eax,%esi
 85800aa:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85800ad:	89 04 24             	mov    %eax,(%esp)
 85800b0:	e8 0b 6b b4 ff       	call   80c6bc0 <_ZNSt4pairIKiSsED1Ev>
 85800b5:	89 f0                	mov    %esi,%eax
 85800b7:	89 da                	mov    %ebx,%edx
 85800b9:	eb 17                	jmp    85800d2 <_ZN14CNexonMsgTableC1Ev+0xb6>
 85800bb:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85800bf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85800c2:	83 f8 1b             	cmp    $0x1b,%eax
 85800c5:	0f 96 c0             	setbe  %al
 85800c8:	84 c0                	test   %al,%al
 85800ca:	0f 85 6b ff ff ff    	jne    858003b <_ZN14CNexonMsgTableC1Ev+0x1f>
 85800d0:	eb 1b                	jmp    85800ed <_ZN14CNexonMsgTableC1Ev+0xd1>
 85800d2:	89 d3                	mov    %edx,%ebx
 85800d4:	89 c6                	mov    %eax,%esi
 85800d6:	8b 45 08             	mov    0x8(%ebp),%eax
 85800d9:	89 04 24             	mov    %eax,(%esp)
 85800dc:	e8 d1 69 b4 ff       	call   80c6ab2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEED1Ev>
 85800e1:	89 f0                	mov    %esi,%eax
 85800e3:	89 da                	mov    %ebx,%edx
 85800e5:	89 04 24             	mov    %eax,(%esp)
 85800e8:	e8 63 36 56 00       	call   8ae3750 <_Unwind_Resume>
 85800ed:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85800f0:	83 c4 00             	add    $0x0,%esp
 85800f3:	5b                   	pop    %ebx
 85800f4:	5e                   	pop    %esi
 85800f5:	5d                   	pop    %ebp
 85800f6:	c3                   	ret
 85800f7:	90                   	nop

```

```c
// CNexonMsgTable::CNexonMsgTable @ 0x858001c

/* CNexonMsgTable::CNexonMsgTable() */

void __thiscall CNexonMsgTable::CNexonMsgTable(CNexonMsgTable *this)

{
  pair local_28 [8];
  pair<int_const,std::string> local_20 [8];
  int local_18 [2];
  uint local_10;
  
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::map
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )this);
  for (local_10 = 0; local_10 < 0x1c; local_10 = local_10 + 1) {
                    /* try { // try from 08580063 to 0858007c has its CatchHandler @ 085800d2 */
    std::make_pair<int&,char_const*&>(local_18,(char **)(msgs + local_10 * 8));
    std::pair<int_const,std::string>::pair<int,char_const*>(local_20,(pair *)local_18);
                    /* try { // try from 08580091 to 08580095 has its CatchHandler @ 085800a6 */
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::
    insert(local_28);
                    /* try { // try from 0858009f to 085800a3 has its CatchHandler @ 085800d2 */
    std::pair<int_const,std::string>::~pair(local_20);
  }
  return;
}

```

---

## GetMessageString

```asm
// === 0858010c CNexonMsgTable::GetMessageString  [0x0858010c-0x8580177] ===
 858010c:	55                   	push   %ebp
 858010d:	89 e5                	mov    %esp,%ebp
 858010f:	83 ec 28             	sub    $0x28,%esp
 8580112:	8b 55 08             	mov    0x8(%ebp),%edx
 8580115:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8580118:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 858011b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 858011f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8580123:	89 04 24             	mov    %eax,(%esp)
 8580126:	e8 8f 01 00 00       	call   85802ba <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE4findERS3_>
 858012b:	83 ec 04             	sub    $0x4,%esp
 858012e:	8b 55 08             	mov    0x8(%ebp),%edx
 8580131:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8580134:	89 54 24 04          	mov    %edx,0x4(%esp)
 8580138:	89 04 24             	mov    %eax,(%esp)
 858013b:	e8 d8 5f b6 ff       	call   80e6118 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 8580140:	83 ec 04             	sub    $0x4,%esp
 8580143:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8580146:	89 44 24 04          	mov    %eax,0x4(%esp)
 858014a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 858014d:	89 04 24             	mov    %eax,(%esp)
 8580150:	e8 e9 5f b6 ff       	call   80e613e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEneERKS3_>
 8580155:	84 c0                	test   %al,%al
 8580157:	74 18                	je     8580171 <_ZN14CNexonMsgTable16GetMessageStringEi+0x65>
 8580159:	8d 45 f0             	lea    -0x10(%ebp),%eax
 858015c:	89 04 24             	mov    %eax,(%esp)
 858015f:	e8 54 60 b6 ff       	call   80e61b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEptEv>
 8580164:	83 c0 04             	add    $0x4,%eax
 8580167:	89 04 24             	mov    %eax,(%esp)
 858016a:	e8 81 63 18 00       	call   87064f0 <_ZNKSs5c_strEv>
 858016f:	eb 05                	jmp    8580176 <_ZN14CNexonMsgTable16GetMessageStringEi+0x6a>
 8580171:	b8 90 93 ca 08       	mov    $0x8ca9390,%eax
 8580176:	c9                   	leave
 8580177:	c3                   	ret

```

```c
// CNexonMsgTable::GetMessageString @ 0x858010c

/* CNexonMsgTable::GetMessageString(int) */

undefined * CNexonMsgTable::GetMessageString(int param_1)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  _Rb_tree_iterator<std::pair<int_const,std::string>> local_14 [4];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_10 [12]
  ;
  
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::find
            ((int *)local_14);
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
            (local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    puVar3 = &DAT_08ca9390;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->(local_14);
    puVar3 = (undefined *)std::string::c_str((string *)(iVar2 + 4));
  }
  return puVar3;
}

```

---

## ~CNexonMsgTable

```asm
// === 085800f8 CNexonMsgTable::~CNexonMsgTable  [0x085800f8-0x858010b] ===
 85800f8:	55                   	push   %ebp
 85800f9:	89 e5                	mov    %esp,%ebp
 85800fb:	83 ec 18             	sub    $0x18,%esp
 85800fe:	8b 45 08             	mov    0x8(%ebp),%eax
 8580101:	89 04 24             	mov    %eax,(%esp)
 8580104:	e8 a9 69 b4 ff       	call   80c6ab2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEED1Ev>
 8580109:	c9                   	leave
 858010a:	c3                   	ret
 858010b:	90                   	nop

```

```c
// CNexonMsgTable::~CNexonMsgTable @ 0x85800f8

/* CNexonMsgTable::~CNexonMsgTable() */

void __thiscall CNexonMsgTable::~CNexonMsgTable(CNexonMsgTable *this)

{
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::~map
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )this);
  return;
}

```

