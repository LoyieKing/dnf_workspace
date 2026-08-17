# TutorialData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 22

---

## TutorialData

```asm
// === 08ab7e4c TutorialData::TutorialData  [0x08ab7e4c-0x8ab80ed] ===
 8ab7e4c:	55                   	push   %ebp
 8ab7e4d:	89 e5                	mov    %esp,%ebp
 8ab7e4f:	57                   	push   %edi
 8ab7e50:	56                   	push   %esi
 8ab7e51:	53                   	push   %ebx
 8ab7e52:	83 ec 2c             	sub    $0x2c,%esp
 8ab7e55:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab7e58:	83 c0 04             	add    $0x4,%eax
 8ab7e5b:	89 04 24             	mov    %eax,(%esp)
 8ab7e5e:	e8 3d 1a 00 00       	call   8ab98a0 <_ZNSt3mapIiSt6vectorIPN12TutorialData10DialogDataESaIS3_EESt4lessIiESaISt4pairIKiS5_EEEC1Ev>
 8ab7e63:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab7e66:	83 c0 1c             	add    $0x1c,%eax
 8ab7e69:	89 04 24             	mov    %eax,(%esp)
 8ab7e6c:	e8 f3 ed 60 ff       	call   80c6c64 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 8ab7e71:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab7e74:	8d 70 34             	lea    0x34(%eax),%esi
 8ab7e77:	89 f7                	mov    %esi,%edi
 8ab7e79:	bb 03 00 00 00       	mov    $0x3,%ebx
 8ab7e7e:	eb 0e                	jmp    8ab7e8e <_ZN12TutorialDataC1Ev+0x42>
 8ab7e80:	89 3c 24             	mov    %edi,(%esp)
 8ab7e83:	e8 dc ed 60 ff       	call   80c6c64 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 8ab7e88:	83 c7 18             	add    $0x18,%edi
 8ab7e8b:	83 eb 01             	sub    $0x1,%ebx
 8ab7e8e:	83 fb ff             	cmp    $0xffffffff,%ebx
 8ab7e91:	0f 95 c0             	setne  %al
 8ab7e94:	84 c0                	test   %al,%al
 8ab7e96:	75 e8                	jne    8ab7e80 <_ZN12TutorialDataC1Ev+0x34>
 8ab7e98:	eb 39                	jmp    8ab7ed3 <_ZN12TutorialDataC1Ev+0x87>
 8ab7e9a:	89 d7                	mov    %edx,%edi
 8ab7e9c:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8ab7e9f:	85 f6                	test   %esi,%esi
 8ab7ea1:	74 26                	je     8ab7ec9 <_ZN12TutorialDataC1Ev+0x7d>
 8ab7ea3:	b8 03 00 00 00       	mov    $0x3,%eax
 8ab7ea8:	29 d8                	sub    %ebx,%eax
 8ab7eaa:	89 c2                	mov    %eax,%edx
 8ab7eac:	89 d0                	mov    %edx,%eax
 8ab7eae:	01 c0                	add    %eax,%eax
 8ab7eb0:	01 d0                	add    %edx,%eax
 8ab7eb2:	c1 e0 03             	shl    $0x3,%eax
 8ab7eb5:	8d 1c 06             	lea    (%esi,%eax,1),%ebx
 8ab7eb8:	39 f3                	cmp    %esi,%ebx
 8ab7eba:	74 0d                	je     8ab7ec9 <_ZN12TutorialDataC1Ev+0x7d>
 8ab7ebc:	83 eb 18             	sub    $0x18,%ebx
 8ab7ebf:	89 1c 24             	mov    %ebx,(%esp)
 8ab7ec2:	e8 ff eb 60 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8ab7ec7:	eb ef                	jmp    8ab7eb8 <_ZN12TutorialDataC1Ev+0x6c>
 8ab7ec9:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8ab7ecc:	89 fa                	mov    %edi,%edx
 8ab7ece:	e9 dc 01 00 00       	jmp    8ab80af <_ZN12TutorialDataC1Ev+0x263>
 8ab7ed3:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab7ed6:	8d b0 94 00 00 00    	lea    0x94(%eax),%esi
 8ab7edc:	89 f7                	mov    %esi,%edi
 8ab7ede:	bb 03 00 00 00       	mov    $0x3,%ebx
 8ab7ee3:	eb 0e                	jmp    8ab7ef3 <_ZN12TutorialDataC1Ev+0xa7>
 8ab7ee5:	89 3c 24             	mov    %edi,(%esp)
 8ab7ee8:	e8 2d 1a 00 00       	call   8ab991a <_ZNSt3mapIiPN12TutorialData9SkillDataESt4lessIiESaISt4pairIKiS2_EEEC1Ev>
 8ab7eed:	83 c7 18             	add    $0x18,%edi
 8ab7ef0:	83 eb 01             	sub    $0x1,%ebx
 8ab7ef3:	83 fb ff             	cmp    $0xffffffff,%ebx
 8ab7ef6:	0f 95 c0             	setne  %al
 8ab7ef9:	84 c0                	test   %al,%al
 8ab7efb:	75 e8                	jne    8ab7ee5 <_ZN12TutorialDataC1Ev+0x99>
 8ab7efd:	eb 39                	jmp    8ab7f38 <_ZN12TutorialDataC1Ev+0xec>
 8ab7eff:	89 d7                	mov    %edx,%edi
 8ab7f01:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8ab7f04:	85 f6                	test   %esi,%esi
 8ab7f06:	74 26                	je     8ab7f2e <_ZN12TutorialDataC1Ev+0xe2>
 8ab7f08:	b8 03 00 00 00       	mov    $0x3,%eax
 8ab7f0d:	29 d8                	sub    %ebx,%eax
 8ab7f0f:	89 c2                	mov    %eax,%edx
 8ab7f11:	89 d0                	mov    %edx,%eax
 8ab7f13:	01 c0                	add    %eax,%eax
 8ab7f15:	01 d0                	add    %edx,%eax
 8ab7f17:	c1 e0 03             	shl    $0x3,%eax
 8ab7f1a:	8d 1c 06             	lea    (%esi,%eax,1),%ebx
 8ab7f1d:	39 f3                	cmp    %esi,%ebx
 8ab7f1f:	74 0d                	je     8ab7f2e <_ZN12TutorialDataC1Ev+0xe2>
 8ab7f21:	83 eb 18             	sub    $0x18,%ebx
 8ab7f24:	89 1c 24             	mov    %ebx,(%esp)
 8ab7f27:	e8 ca 18 00 00       	call   8ab97f6 <_ZNSt3mapIiPN12TutorialData9SkillDataESt4lessIiESaISt4pairIKiS2_EEED1Ev>
 8ab7f2c:	eb ef                	jmp    8ab7f1d <_ZN12TutorialDataC1Ev+0xd1>
 8ab7f2e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ab7f31:	89 fa                	mov    %edi,%edx
 8ab7f33:	e9 45 01 00 00       	jmp    8ab807d <_ZN12TutorialDataC1Ev+0x231>
 8ab7f38:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab7f3b:	8d b0 f4 00 00 00    	lea    0xf4(%eax),%esi
 8ab7f41:	89 f7                	mov    %esi,%edi
 8ab7f43:	bb 03 00 00 00       	mov    $0x3,%ebx
 8ab7f48:	eb 0e                	jmp    8ab7f58 <_ZN12TutorialDataC1Ev+0x10c>
 8ab7f4a:	89 3c 24             	mov    %edi,(%esp)
 8ab7f4d:	e8 42 1a 00 00       	call   8ab9994 <_ZNSt6vectorIPN12TutorialData9SkillDataESaIS2_EEC1Ev>
 8ab7f52:	83 c7 0c             	add    $0xc,%edi
 8ab7f55:	83 eb 01             	sub    $0x1,%ebx
 8ab7f58:	83 fb ff             	cmp    $0xffffffff,%ebx
 8ab7f5b:	0f 95 c0             	setne  %al
 8ab7f5e:	84 c0                	test   %al,%al
 8ab7f60:	75 e8                	jne    8ab7f4a <_ZN12TutorialDataC1Ev+0xfe>
 8ab7f62:	eb 39                	jmp    8ab7f9d <_ZN12TutorialDataC1Ev+0x151>
 8ab7f64:	89 d7                	mov    %edx,%edi
 8ab7f66:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8ab7f69:	85 f6                	test   %esi,%esi
 8ab7f6b:	74 26                	je     8ab7f93 <_ZN12TutorialDataC1Ev+0x147>
 8ab7f6d:	b8 03 00 00 00       	mov    $0x3,%eax
 8ab7f72:	29 d8                	sub    %ebx,%eax
 8ab7f74:	89 c2                	mov    %eax,%edx
 8ab7f76:	89 d0                	mov    %edx,%eax
 8ab7f78:	01 c0                	add    %eax,%eax
 8ab7f7a:	01 d0                	add    %edx,%eax
 8ab7f7c:	c1 e0 02             	shl    $0x2,%eax
 8ab7f7f:	8d 1c 06             	lea    (%esi,%eax,1),%ebx
 8ab7f82:	39 f3                	cmp    %esi,%ebx
 8ab7f84:	74 0d                	je     8ab7f93 <_ZN12TutorialDataC1Ev+0x147>
 8ab7f86:	83 eb 0c             	sub    $0xc,%ebx
 8ab7f89:	89 1c 24             	mov    %ebx,(%esp)
 8ab7f8c:	e8 17 1a 00 00       	call   8ab99a8 <_ZNSt6vectorIPN12TutorialData9SkillDataESaIS2_EED1Ev>
 8ab7f91:	eb ef                	jmp    8ab7f82 <_ZN12TutorialDataC1Ev+0x136>
 8ab7f93:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ab7f96:	89 fa                	mov    %edi,%edx
 8ab7f98:	e9 a8 00 00 00       	jmp    8ab8045 <_ZN12TutorialDataC1Ev+0x1f9>
 8ab7f9d:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab7fa0:	05 24 01 00 00       	add    $0x124,%eax
 8ab7fa5:	89 04 24             	mov    %eax,(%esp)
 8ab7fa8:	e8 59 1a 00 00       	call   8ab9a06 <_ZNSt3mapIiSt6vectorIPN12TutorialData14TutorialNoticeESaIS3_EESt4lessIiESaISt4pairIKiS5_EEEC1Ev>
 8ab7fad:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab7fb0:	05 3c 01 00 00       	add    $0x13c,%eax
 8ab7fb5:	89 04 24             	mov    %eax,(%esp)
 8ab7fb8:	e8 c3 1a 00 00       	call   8ab9a80 <_ZNSt6vectorIPN12TutorialData8ItemDataESaIS2_EEC1Ev>
 8ab7fbd:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab7fc0:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8ab7fc6:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab7fc9:	83 c0 1c             	add    $0x1c,%eax
 8ab7fcc:	89 04 24             	mov    %eax,(%esp)
 8ab7fcf:	e8 0a ed 60 ff       	call   80c6cde <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 8ab7fd4:	e9 0c 01 00 00       	jmp    8ab80e5 <_ZN12TutorialDataC1Ev+0x299>
 8ab7fd9:	89 d3                	mov    %edx,%ebx
 8ab7fdb:	89 c6                	mov    %eax,%esi
 8ab7fdd:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab7fe0:	05 3c 01 00 00       	add    $0x13c,%eax
 8ab7fe5:	89 04 24             	mov    %eax,(%esp)
 8ab7fe8:	e8 a7 1a 00 00       	call   8ab9a94 <_ZNSt6vectorIPN12TutorialData8ItemDataESaIS2_EED1Ev>
 8ab7fed:	89 f0                	mov    %esi,%eax
 8ab7fef:	89 da                	mov    %ebx,%edx
 8ab7ff1:	eb 00                	jmp    8ab7ff3 <_ZN12TutorialDataC1Ev+0x1a7>
 8ab7ff3:	89 d3                	mov    %edx,%ebx
 8ab7ff5:	89 c6                	mov    %eax,%esi
 8ab7ff7:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab7ffa:	05 24 01 00 00       	add    $0x124,%eax
 8ab7fff:	89 04 24             	mov    %eax,(%esp)
 8ab8002:	e8 03 18 00 00       	call   8ab980a <_ZNSt3mapIiSt6vectorIPN12TutorialData14TutorialNoticeESaIS3_EESt4lessIiESaISt4pairIKiS5_EEED1Ev>
 8ab8007:	89 f0                	mov    %esi,%eax
 8ab8009:	89 da                	mov    %ebx,%edx
 8ab800b:	eb 00                	jmp    8ab800d <_ZN12TutorialDataC1Ev+0x1c1>
 8ab800d:	89 d6                	mov    %edx,%esi
 8ab800f:	89 c7                	mov    %eax,%edi
 8ab8011:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab8014:	05 f4 00 00 00       	add    $0xf4,%eax
 8ab8019:	85 c0                	test   %eax,%eax
 8ab801b:	74 24                	je     8ab8041 <_ZN12TutorialDataC1Ev+0x1f5>
 8ab801d:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab8020:	05 f4 00 00 00       	add    $0xf4,%eax
 8ab8025:	8d 58 30             	lea    0x30(%eax),%ebx
 8ab8028:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab802b:	05 f4 00 00 00       	add    $0xf4,%eax
 8ab8030:	39 c3                	cmp    %eax,%ebx
 8ab8032:	74 0d                	je     8ab8041 <_ZN12TutorialDataC1Ev+0x1f5>
 8ab8034:	83 eb 0c             	sub    $0xc,%ebx
 8ab8037:	89 1c 24             	mov    %ebx,(%esp)
 8ab803a:	e8 69 19 00 00       	call   8ab99a8 <_ZNSt6vectorIPN12TutorialData9SkillDataESaIS2_EED1Ev>
 8ab803f:	eb e7                	jmp    8ab8028 <_ZN12TutorialDataC1Ev+0x1dc>
 8ab8041:	89 f8                	mov    %edi,%eax
 8ab8043:	89 f2                	mov    %esi,%edx
 8ab8045:	89 d6                	mov    %edx,%esi
 8ab8047:	89 c7                	mov    %eax,%edi
 8ab8049:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab804c:	05 94 00 00 00       	add    $0x94,%eax
 8ab8051:	85 c0                	test   %eax,%eax
 8ab8053:	74 24                	je     8ab8079 <_ZN12TutorialDataC1Ev+0x22d>
 8ab8055:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab8058:	05 94 00 00 00       	add    $0x94,%eax
 8ab805d:	8d 58 60             	lea    0x60(%eax),%ebx
 8ab8060:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab8063:	05 94 00 00 00       	add    $0x94,%eax
 8ab8068:	39 c3                	cmp    %eax,%ebx
 8ab806a:	74 0d                	je     8ab8079 <_ZN12TutorialDataC1Ev+0x22d>
 8ab806c:	83 eb 18             	sub    $0x18,%ebx
 8ab806f:	89 1c 24             	mov    %ebx,(%esp)
 8ab8072:	e8 7f 17 00 00       	call   8ab97f6 <_ZNSt3mapIiPN12TutorialData9SkillDataESt4lessIiESaISt4pairIKiS2_EEED1Ev>
 8ab8077:	eb e7                	jmp    8ab8060 <_ZN12TutorialDataC1Ev+0x214>
 8ab8079:	89 f8                	mov    %edi,%eax
 8ab807b:	89 f2                	mov    %esi,%edx
 8ab807d:	89 d6                	mov    %edx,%esi
 8ab807f:	89 c7                	mov    %eax,%edi
 8ab8081:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab8084:	83 c0 34             	add    $0x34,%eax
 8ab8087:	85 c0                	test   %eax,%eax
 8ab8089:	74 20                	je     8ab80ab <_ZN12TutorialDataC1Ev+0x25f>
 8ab808b:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab808e:	83 c0 34             	add    $0x34,%eax
 8ab8091:	8d 58 60             	lea    0x60(%eax),%ebx
 8ab8094:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab8097:	83 c0 34             	add    $0x34,%eax
 8ab809a:	39 c3                	cmp    %eax,%ebx
 8ab809c:	74 0d                	je     8ab80ab <_ZN12TutorialDataC1Ev+0x25f>
 8ab809e:	83 eb 18             	sub    $0x18,%ebx
 8ab80a1:	89 1c 24             	mov    %ebx,(%esp)
 8ab80a4:	e8 1d ea 60 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8ab80a9:	eb e9                	jmp    8ab8094 <_ZN12TutorialDataC1Ev+0x248>
 8ab80ab:	89 f8                	mov    %edi,%eax
 8ab80ad:	89 f2                	mov    %esi,%edx
 8ab80af:	89 d3                	mov    %edx,%ebx
 8ab80b1:	89 c6                	mov    %eax,%esi
 8ab80b3:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab80b6:	83 c0 1c             	add    $0x1c,%eax
 8ab80b9:	89 04 24             	mov    %eax,(%esp)
 8ab80bc:	e8 05 ea 60 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8ab80c1:	89 f0                	mov    %esi,%eax
 8ab80c3:	89 da                	mov    %ebx,%edx
 8ab80c5:	eb 00                	jmp    8ab80c7 <_ZN12TutorialDataC1Ev+0x27b>
 8ab80c7:	89 d3                	mov    %edx,%ebx
 8ab80c9:	89 c6                	mov    %eax,%esi
 8ab80cb:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab80ce:	83 c0 04             	add    $0x4,%eax
 8ab80d1:	89 04 24             	mov    %eax,(%esp)
 8ab80d4:	e8 09 17 00 00       	call   8ab97e2 <_ZNSt3mapIiSt6vectorIPN12TutorialData10DialogDataESaIS3_EESt4lessIiESaISt4pairIKiS5_EEED1Ev>
 8ab80d9:	89 f0                	mov    %esi,%eax
 8ab80db:	89 da                	mov    %ebx,%edx
 8ab80dd:	89 04 24             	mov    %eax,(%esp)
 8ab80e0:	e8 6b b6 02 00       	call   8ae3750 <_Unwind_Resume>
 8ab80e5:	83 c4 2c             	add    $0x2c,%esp
 8ab80e8:	5b                   	pop    %ebx
 8ab80e9:	5e                   	pop    %esi
 8ab80ea:	5f                   	pop    %edi
 8ab80eb:	5d                   	pop    %ebp
 8ab80ec:	c3                   	ret
 8ab80ed:	90                   	nop

```

```c
// TutorialData::TutorialData @ 0x8ab7e4c

/* TutorialData::TutorialData() */

void __thiscall TutorialData::TutorialData(TutorialData *this)

{
  int iVar1;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *this_00;
  map<int,TutorialData::SkillData*,std::less<int>,std::allocator<std::pair<int_const,TutorialData::SkillData*>>>
  *this_01;
  vector<TutorialData::SkillData*,std::allocator<TutorialData::SkillData*>> *this_02;
  
  std::
  map<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>>
  ::map((map<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>>
         *)(this + 4));
                    /* try { // try from 08ab7e6c to 08ab7e70 has its CatchHandler @ 08ab80c7 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x1c));
  this_00 = (map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x34);
  for (iVar1 = 3; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 08ab7e83 to 08ab7e87 has its CatchHandler @ 08ab7e9a */
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map(this_00);
    this_00 = this_00 + 0x18;
  }
  this_01 = (map<int,TutorialData::SkillData*,std::less<int>,std::allocator<std::pair<int_const,TutorialData::SkillData*>>>
             *)(this + 0x94);
  for (iVar1 = 3; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 08ab7ee8 to 08ab7eec has its CatchHandler @ 08ab7eff */
    std::
    map<int,TutorialData::SkillData*,std::less<int>,std::allocator<std::pair<int_const,TutorialData::SkillData*>>>
    ::map(this_01);
    this_01 = this_01 + 0x18;
  }
  this_02 = (vector<TutorialData::SkillData*,std::allocator<TutorialData::SkillData*>> *)
            (this + 0xf4);
  for (iVar1 = 3; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 08ab7f4d to 08ab7f51 has its CatchHandler @ 08ab7f64 */
    std::vector<TutorialData::SkillData*,std::allocator<TutorialData::SkillData*>>::vector(this_02);
    this_02 = this_02 + 0xc;
  }
                    /* try { // try from 08ab7fa8 to 08ab7fac has its CatchHandler @ 08ab800d */
  std::
  map<int,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>>>
  ::map((map<int,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>>>
         *)(this + 0x124));
                    /* try { // try from 08ab7fb8 to 08ab7fbc has its CatchHandler @ 08ab7ff3 */
  std::vector<TutorialData::ItemData*,std::allocator<TutorialData::ItemData*>>::vector
            ((vector<TutorialData::ItemData*,std::allocator<TutorialData::ItemData*>> *)
             (this + 0x13c));
  *(undefined4 *)this = 0;
                    /* try { // try from 08ab7fcf to 08ab7fd3 has its CatchHandler @ 08ab7fd9 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x1c));
  return;
}

```

---

## addAvatarIndex

```asm
// === 08ab868a TutorialData::addAvatarIndex  [0x08ab868a-0x8ab86df] ===
 8ab868a:	55                   	push   %ebp
 8ab868b:	89 e5                	mov    %esp,%ebp
 8ab868d:	83 ec 38             	sub    $0x38,%esp
 8ab8690:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab8693:	8d 55 10             	lea    0x10(%ebp),%edx
 8ab8696:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ab869a:	8d 55 0c             	lea    0xc(%ebp),%edx
 8ab869d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab86a1:	89 04 24             	mov    %eax,(%esp)
 8ab86a4:	e8 09 8c 65 ff       	call   81112b2 <_ZSt9make_pairIRiS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 8ab86a9:	83 ec 04             	sub    $0x4,%esp
 8ab86ac:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab86af:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab86b3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ab86b6:	89 04 24             	mov    %eax,(%esp)
 8ab86b9:	e8 62 e6 60 ff       	call   80c6d20 <_ZNSt4pairIKiiEC1IiiEEOS_IT_T0_E>
 8ab86be:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab86c1:	8d 48 1c             	lea    0x1c(%eax),%ecx
 8ab86c4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8ab86c7:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8ab86ca:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ab86ce:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8ab86d2:	89 04 24             	mov    %eax,(%esp)
 8ab86d5:	e8 76 e6 60 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 8ab86da:	83 ec 04             	sub    $0x4,%esp
 8ab86dd:	c9                   	leave
 8ab86de:	c3                   	ret
 8ab86df:	90                   	nop

```

```c
// TutorialData::addAvatarIndex @ 0x8ab868a

/* TutorialData::addAvatarIndex(int, int) */

void TutorialData::addAvatarIndex(int param_1,int param_2)

{
  pair local_24 [8];
  pair<int_const,int> local_1c [8];
  int local_14 [4];
  
  std::make_pair<int&,int&>(local_14,&param_2);
  std::pair<int_const,int>::pair<int,int>(local_1c,(pair *)local_14);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_24);
  return;
}

```

---

## addDialogData

```asm
// === 08ab82dc TutorialData::addDialogData  [0x08ab82dc-0x8ab8485] ===
 8ab82dc:	55                   	push   %ebp
 8ab82dd:	89 e5                	mov    %esp,%ebp
 8ab82df:	57                   	push   %edi
 8ab82e0:	56                   	push   %esi
 8ab82e1:	53                   	push   %ebx
 8ab82e2:	83 ec 5c             	sub    $0x5c,%esp
 8ab82e5:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab82e8:	8d 48 04             	lea    0x4(%eax),%ecx
 8ab82eb:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8ab82ee:	8d 55 0c             	lea    0xc(%ebp),%edx
 8ab82f1:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ab82f5:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8ab82f9:	89 04 24             	mov    %eax,(%esp)
 8ab82fc:	e8 f1 17 00 00       	call   8ab9af2 <_ZNSt3mapIiSt6vectorIPN12TutorialData10DialogDataESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE4findERS9_>
 8ab8301:	83 ec 04             	sub    $0x4,%esp
 8ab8304:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8ab830b:	e8 40 c1 c6 ff       	call   8724450 <_Znwj>
 8ab8310:	89 c3                	mov    %eax,%ebx
 8ab8312:	89 d8                	mov    %ebx,%eax
 8ab8314:	89 04 24             	mov    %eax,(%esp)
 8ab8317:	e8 02 15 00 00       	call   8ab981e <_ZN12TutorialData10DialogDataC1Ev>
 8ab831c:	eb 18                	jmp    8ab8336 <_ZN12TutorialData13addDialogDataEiiPKc+0x5a>
 8ab831e:	89 d6                	mov    %edx,%esi
 8ab8320:	89 c7                	mov    %eax,%edi
 8ab8322:	89 1c 24             	mov    %ebx,(%esp)
 8ab8325:	e8 c6 c1 c6 ff       	call   87244f0 <_ZdlPv>
 8ab832a:	89 f8                	mov    %edi,%eax
 8ab832c:	89 f2                	mov    %esi,%edx
 8ab832e:	89 04 24             	mov    %eax,(%esp)
 8ab8331:	e8 1a b4 02 00       	call   8ae3750 <_Unwind_Resume>
 8ab8336:	89 d8                	mov    %ebx,%eax
 8ab8338:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8ab833b:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8ab833e:	8b 55 10             	mov    0x10(%ebp),%edx
 8ab8341:	89 50 04             	mov    %edx,0x4(%eax)
 8ab8344:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8ab8347:	8b 55 14             	mov    0x14(%ebp),%edx
 8ab834a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab834e:	89 04 24             	mov    %eax,(%esp)
 8ab8351:	e8 ca 03 c5 ff       	call   8708720 <_ZNSsaSEPKc>
 8ab8356:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab8359:	8d 50 04             	lea    0x4(%eax),%edx
 8ab835c:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ab835f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab8363:	89 04 24             	mov    %eax,(%esp)
 8ab8366:	e8 b3 17 00 00       	call   8ab9b1e <_ZNSt3mapIiSt6vectorIPN12TutorialData10DialogDataESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE3endEv>
 8ab836b:	83 ec 04             	sub    $0x4,%esp
 8ab836e:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ab8371:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab8375:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8ab8378:	89 04 24             	mov    %eax,(%esp)
 8ab837b:	e8 c4 17 00 00       	call   8ab9b44 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIPN12TutorialData10DialogDataESaIS5_EEEEneERKS9_>
 8ab8380:	84 c0                	test   %al,%al
 8ab8382:	74 22                	je     8ab83a6 <_ZN12TutorialData13addDialogDataEiiPKc+0xca>
 8ab8384:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8ab8387:	89 04 24             	mov    %eax,(%esp)
 8ab838a:	e8 c9 17 00 00       	call   8ab9b58 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIPN12TutorialData10DialogDataESaIS5_EEEEptEv>
 8ab838f:	8d 50 04             	lea    0x4(%eax),%edx
 8ab8392:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8ab8395:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab8399:	89 14 24             	mov    %edx,(%esp)
 8ab839c:	e8 c5 17 00 00       	call   8ab9b66 <_ZNSt6vectorIPN12TutorialData10DialogDataESaIS2_EE9push_backERKS2_>
 8ab83a1:	e9 d4 00 00 00       	jmp    8ab847a <_ZN12TutorialData13addDialogDataEiiPKc+0x19e>
 8ab83a6:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8ab83a9:	89 04 24             	mov    %eax,(%esp)
 8ab83ac:	e8 29 18 00 00       	call   8ab9bda <_ZNSt6vectorIPN12TutorialData10DialogDataESaIS2_EEC1Ev>
 8ab83b1:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8ab83b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab83b8:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8ab83bb:	89 04 24             	mov    %eax,(%esp)
 8ab83be:	e8 a3 17 00 00       	call   8ab9b66 <_ZNSt6vectorIPN12TutorialData10DialogDataESaIS2_EE9push_backERKS2_>
 8ab83c3:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8ab83c6:	8d 55 a8             	lea    -0x58(%ebp),%edx
 8ab83c9:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ab83cd:	8d 55 0c             	lea    0xc(%ebp),%edx
 8ab83d0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab83d4:	89 04 24             	mov    %eax,(%esp)
 8ab83d7:	e8 6f 18 00 00       	call   8ab9c4b <_ZSt9make_pairIRiRSt6vectorIPN12TutorialData10DialogDataESaIS4_EEESt4pairINSt17__decay_and_stripIT_E6__typeENS9_IT0_E6__typeEEOSA_OSD_>
 8ab83dc:	83 ec 04             	sub    $0x4,%esp
 8ab83df:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8ab83e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab83e6:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8ab83e9:	89 04 24             	mov    %eax,(%esp)
 8ab83ec:	e8 9f 18 00 00       	call   8ab9c90 <_ZNSt4pairIKiSt6vectorIPN12TutorialData10DialogDataESaIS4_EEEC1IiS6_EEOS_IT_T0_E>
 8ab83f1:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab83f4:	8d 48 04             	lea    0x4(%eax),%ecx
 8ab83f7:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8ab83fa:	8d 55 c8             	lea    -0x38(%ebp),%edx
 8ab83fd:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ab8401:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8ab8405:	89 04 24             	mov    %eax,(%esp)
 8ab8408:	e8 bd 18 00 00       	call   8ab9cca <_ZNSt3mapIiSt6vectorIPN12TutorialData10DialogDataESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE6insertERKSA_>
 8ab840d:	83 ec 04             	sub    $0x4,%esp
 8ab8410:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8ab8413:	89 04 24             	mov    %eax,(%esp)
 8ab8416:	e8 2d 14 00 00       	call   8ab9848 <_ZNSt4pairIKiSt6vectorIPN12TutorialData10DialogDataESaIS4_EEED1Ev>
 8ab841b:	eb 2a                	jmp    8ab8447 <_ZN12TutorialData13addDialogDataEiiPKc+0x16b>
 8ab841d:	89 d3                	mov    %edx,%ebx
 8ab841f:	89 c6                	mov    %eax,%esi
 8ab8421:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8ab8424:	89 04 24             	mov    %eax,(%esp)
 8ab8427:	e8 1c 14 00 00       	call   8ab9848 <_ZNSt4pairIKiSt6vectorIPN12TutorialData10DialogDataESaIS4_EEED1Ev>
 8ab842c:	89 f0                	mov    %esi,%eax
 8ab842e:	89 da                	mov    %ebx,%edx
 8ab8430:	eb 00                	jmp    8ab8432 <_ZN12TutorialData13addDialogDataEiiPKc+0x156>
 8ab8432:	89 d3                	mov    %edx,%ebx
 8ab8434:	89 c6                	mov    %eax,%esi
 8ab8436:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8ab8439:	89 04 24             	mov    %eax,(%esp)
 8ab843c:	e8 f1 13 00 00       	call   8ab9832 <_ZNSt4pairIiSt6vectorIPN12TutorialData10DialogDataESaIS3_EEED1Ev>
 8ab8441:	89 f0                	mov    %esi,%eax
 8ab8443:	89 da                	mov    %ebx,%edx
 8ab8445:	eb 0d                	jmp    8ab8454 <_ZN12TutorialData13addDialogDataEiiPKc+0x178>
 8ab8447:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8ab844a:	89 04 24             	mov    %eax,(%esp)
 8ab844d:	e8 e0 13 00 00       	call   8ab9832 <_ZNSt4pairIiSt6vectorIPN12TutorialData10DialogDataESaIS3_EEED1Ev>
 8ab8452:	eb 1b                	jmp    8ab846f <_ZN12TutorialData13addDialogDataEiiPKc+0x193>
 8ab8454:	89 d3                	mov    %edx,%ebx
 8ab8456:	89 c6                	mov    %eax,%esi
 8ab8458:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8ab845b:	89 04 24             	mov    %eax,(%esp)
 8ab845e:	e8 8b 17 00 00       	call   8ab9bee <_ZNSt6vectorIPN12TutorialData10DialogDataESaIS2_EED1Ev>
 8ab8463:	89 f0                	mov    %esi,%eax
 8ab8465:	89 da                	mov    %ebx,%edx
 8ab8467:	89 04 24             	mov    %eax,(%esp)
 8ab846a:	e8 e1 b2 02 00       	call   8ae3750 <_Unwind_Resume>
 8ab846f:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8ab8472:	89 04 24             	mov    %eax,(%esp)
 8ab8475:	e8 74 17 00 00       	call   8ab9bee <_ZNSt6vectorIPN12TutorialData10DialogDataESaIS2_EED1Ev>
 8ab847a:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8ab847d:	83 c4 00             	add    $0x0,%esp
 8ab8480:	5b                   	pop    %ebx
 8ab8481:	5e                   	pop    %esi
 8ab8482:	5f                   	pop    %edi
 8ab8483:	5d                   	pop    %ebp
 8ab8484:	c3                   	ret
 8ab8485:	90                   	nop

```

```c
// TutorialData::addDialogData @ 0x8ab82dc

/* TutorialData::addDialogData(int, int, char const*) */

void __thiscall
TutorialData::addDialogData(TutorialData *this,int param_1,int param_2,char *param_3)

{
  char cVar1;
  DialogData *this_00;
  int iVar2;
  vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>> local_5c [12];
  DialogData *local_50;
  _Rb_tree_iterator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>
  local_4c [4];
  map<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>>
  local_48 [4];
  pair local_44 [8];
  pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>
  local_3c [16];
  pair<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>
  local_2c [28];
  
  std::
  map<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>>
  ::find((int *)local_4c);
  this_00 = operator_new(8);
                    /* try { // try from 08ab8317 to 08ab831b has its CatchHandler @ 08ab831e */
  DialogData::DialogData(this_00);
  *(int *)(this_00 + 4) = param_2;
  local_50 = this_00;
  std::string::operator=((string *)this_00,param_3);
  std::
  map<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>>
  ::end(local_48);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>
          ::operator!=(local_4c,(_Rb_tree_iterator *)local_48);
  if (cVar1 == '\0') {
    std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>::vector
              (local_5c);
                    /* try { // try from 08ab83be to 08ab83db has its CatchHandler @ 08ab8454 */
    std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>::push_back
              (local_5c,&local_50);
    std::
    make_pair<int&,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>&>
              ((int *)local_2c,(vector *)&param_1);
                    /* try { // try from 08ab83ec to 08ab83f0 has its CatchHandler @ 08ab8432 */
    std::
    pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>
    ::pair<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>
              (local_3c,local_2c);
                    /* try { // try from 08ab8408 to 08ab840c has its CatchHandler @ 08ab841d */
    std::
    map<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>>
    ::insert(local_44);
                    /* try { // try from 08ab8416 to 08ab841a has its CatchHandler @ 08ab8432 */
    std::
    pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>
    ::~pair(local_3c);
                    /* try { // try from 08ab844d to 08ab8451 has its CatchHandler @ 08ab8454 */
    std::pair<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>
    ::~pair(local_2c);
    std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>::~vector
              (local_5c);
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>
            ::operator->(local_4c);
    std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>::push_back
              ((vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>> *)
               (iVar2 + 4),&local_50);
  }
  return;
}

```

---

## addEquipmentIndex

```asm
// === 08ab86e0 TutorialData::addEquipmentIndex  [0x08ab86e0-0x8ab874d] ===
 8ab86e0:	55                   	push   %ebp
 8ab86e1:	89 e5                	mov    %esp,%ebp
 8ab86e3:	83 ec 38             	sub    $0x38,%esp
 8ab86e6:	83 7d 14 03          	cmpl   $0x3,0x14(%ebp)
 8ab86ea:	7f 5e                	jg     8ab874a <_ZN12TutorialData17addEquipmentIndexEiii+0x6a>
 8ab86ec:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab86ef:	8d 55 10             	lea    0x10(%ebp),%edx
 8ab86f2:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ab86f6:	8d 55 0c             	lea    0xc(%ebp),%edx
 8ab86f9:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab86fd:	89 04 24             	mov    %eax,(%esp)
 8ab8700:	e8 ad 8b 65 ff       	call   81112b2 <_ZSt9make_pairIRiS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 8ab8705:	83 ec 04             	sub    $0x4,%esp
 8ab8708:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab870b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab870f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ab8712:	89 04 24             	mov    %eax,(%esp)
 8ab8715:	e8 06 e6 60 ff       	call   80c6d20 <_ZNSt4pairIKiiEC1IiiEEOS_IT_T0_E>
 8ab871a:	8b 55 14             	mov    0x14(%ebp),%edx
 8ab871d:	89 d0                	mov    %edx,%eax
 8ab871f:	01 c0                	add    %eax,%eax
 8ab8721:	01 d0                	add    %edx,%eax
 8ab8723:	c1 e0 03             	shl    $0x3,%eax
 8ab8726:	83 c0 30             	add    $0x30,%eax
 8ab8729:	03 45 08             	add    0x8(%ebp),%eax
 8ab872c:	8d 48 04             	lea    0x4(%eax),%ecx
 8ab872f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8ab8732:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8ab8735:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ab8739:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8ab873d:	89 04 24             	mov    %eax,(%esp)
 8ab8740:	e8 0b e6 60 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 8ab8745:	83 ec 04             	sub    $0x4,%esp
 8ab8748:	eb 01                	jmp    8ab874b <_ZN12TutorialData17addEquipmentIndexEiii+0x6b>
 8ab874a:	90                   	nop
 8ab874b:	c9                   	leave
 8ab874c:	c3                   	ret
 8ab874d:	90                   	nop

```

```c
// TutorialData::addEquipmentIndex @ 0x8ab86e0

/* TutorialData::addEquipmentIndex(int, int, int) */

void TutorialData::addEquipmentIndex(int param_1,int param_2,int param_3)

{
  int in_stack_00000010;
  pair local_24 [8];
  pair<int_const,int> local_1c [8];
  int local_14 [4];
  
  if (in_stack_00000010 < 4) {
    std::make_pair<int&,int&>(local_14,&param_2);
    std::pair<int_const,int>::pair<int,int>(local_1c,(pair *)local_14);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_24);
  }
  return;
}

```

---

## addItem

```asm
// === 08ab8d1c TutorialData::addItem  [0x08ab8d1c-0x8ab8d5b] ===
 8ab8d1c:	55                   	push   %ebp
 8ab8d1d:	89 e5                	mov    %esp,%ebp
 8ab8d1f:	83 ec 28             	sub    $0x28,%esp
 8ab8d22:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8ab8d29:	e8 22 b7 c6 ff       	call   8724450 <_Znwj>
 8ab8d2e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ab8d31:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ab8d34:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ab8d37:	89 10                	mov    %edx,(%eax)
 8ab8d39:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ab8d3c:	8b 55 10             	mov    0x10(%ebp),%edx
 8ab8d3f:	89 50 04             	mov    %edx,0x4(%eax)
 8ab8d42:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab8d45:	8d 90 3c 01 00 00    	lea    0x13c(%eax),%edx
 8ab8d4b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab8d4e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab8d52:	89 14 24             	mov    %edx,(%esp)
 8ab8d55:	e8 08 15 00 00       	call   8aba262 <_ZNSt6vectorIPN12TutorialData8ItemDataESaIS2_EE9push_backERKS2_>
 8ab8d5a:	c9                   	leave
 8ab8d5b:	c3                   	ret

```

```c
// TutorialData::addItem @ 0x8ab8d1c

/* TutorialData::addItem(int, int) */

void __thiscall TutorialData::addItem(TutorialData *this,int param_1,int param_2)

{
  ItemData *local_10 [3];
  
  local_10[0] = operator_new(8);
  *(int *)local_10[0] = param_1;
  *(int *)(local_10[0] + 4) = param_2;
  std::vector<TutorialData::ItemData*,std::allocator<TutorialData::ItemData*>>::push_back
            ((vector<TutorialData::ItemData*,std::allocator<TutorialData::ItemData*>> *)
             (this + 0x13c),local_10);
  return;
}

```

---

## addPassiveSkillData

```asm
// === 08ab8944 TutorialData::addPassiveSkillData  [0x08ab8944-0x8ab89a5] ===
 8ab8944:	55                   	push   %ebp
 8ab8945:	89 e5                	mov    %esp,%ebp
 8ab8947:	83 ec 28             	sub    $0x28,%esp
 8ab894a:	83 7d 0c 03          	cmpl   $0x3,0xc(%ebp)
 8ab894e:	7f 52                	jg     8ab89a2 <_ZN12TutorialData19addPassiveSkillDataEiii+0x5e>
 8ab8950:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 8ab8957:	e8 f4 ba c6 ff       	call   8724450 <_Znwj>
 8ab895c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ab895f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ab8962:	8b 55 14             	mov    0x14(%ebp),%edx
 8ab8965:	89 50 04             	mov    %edx,0x4(%eax)
 8ab8968:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ab896b:	8b 55 10             	mov    0x10(%ebp),%edx
 8ab896e:	89 10                	mov    %edx,(%eax)
 8ab8970:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ab8973:	c7 40 08 ff ff ff ff 	movl   $0xffffffff,0x8(%eax)
 8ab897a:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ab897d:	89 d0                	mov    %edx,%eax
 8ab897f:	01 c0                	add    %eax,%eax
 8ab8981:	01 d0                	add    %edx,%eax
 8ab8983:	c1 e0 02             	shl    $0x2,%eax
 8ab8986:	05 f0 00 00 00       	add    $0xf0,%eax
 8ab898b:	03 45 08             	add    0x8(%ebp),%eax
 8ab898e:	8d 50 04             	lea    0x4(%eax),%edx
 8ab8991:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab8994:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab8998:	89 14 24             	mov    %edx,(%esp)
 8ab899b:	e8 4c 14 00 00       	call   8ab9dec <_ZNSt6vectorIPN12TutorialData9SkillDataESaIS2_EE9push_backERKS2_>
 8ab89a0:	eb 01                	jmp    8ab89a3 <_ZN12TutorialData19addPassiveSkillDataEiii+0x5f>
 8ab89a2:	90                   	nop
 8ab89a3:	c9                   	leave
 8ab89a4:	c3                   	ret
 8ab89a5:	90                   	nop

```

```c
// TutorialData::addPassiveSkillData @ 0x8ab8944

/* TutorialData::addPassiveSkillData(int, int, int) */

void __thiscall
TutorialData::addPassiveSkillData(TutorialData *this,int param_1,int param_2,int param_3)

{
  SkillData *local_10 [3];
  
  if (param_1 < 4) {
    local_10[0] = operator_new(0xc);
    *(int *)(local_10[0] + 4) = param_3;
    *(int *)local_10[0] = param_2;
    *(int *)(local_10[0] + 8) = -1;
    std::vector<TutorialData::SkillData*,std::allocator<TutorialData::SkillData*>>::push_back
              ((vector<TutorialData::SkillData*,std::allocator<TutorialData::SkillData*>> *)
               (this + param_1 * 0xc + 0xf4),local_10);
  }
  return;
}

```

---

## addSkillIndex

```asm
// === 08ab8888 TutorialData::addSkillIndex  [0x08ab8888-0x8ab8943] ===
 8ab8888:	55                   	push   %ebp
 8ab8889:	89 e5                	mov    %esp,%ebp
 8ab888b:	83 ec 38             	sub    $0x38,%esp
 8ab888e:	83 7d 0c 03          	cmpl   $0x3,0xc(%ebp)
 8ab8892:	0f 8f a6 00 00 00    	jg     8ab893e <_ZN12TutorialData13addSkillIndexEiiiii+0xb6>
 8ab8898:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 8ab889f:	e8 ac bb c6 ff       	call   8724450 <_Znwj>
 8ab88a4:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8ab88a7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8ab88aa:	8b 55 18             	mov    0x18(%ebp),%edx
 8ab88ad:	89 50 04             	mov    %edx,0x4(%eax)
 8ab88b0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8ab88b3:	8b 55 14             	mov    0x14(%ebp),%edx
 8ab88b6:	89 10                	mov    %edx,(%eax)
 8ab88b8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8ab88bb:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8ab88be:	89 50 08             	mov    %edx,0x8(%eax)
 8ab88c1:	8b 45 10             	mov    0x10(%ebp),%eax
 8ab88c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab88c8:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab88cb:	89 04 24             	mov    %eax,(%esp)
 8ab88ce:	e8 89 ff ff ff       	call   8ab885c <_ZN12TutorialData16getConvertHotKeyEi>
 8ab88d3:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8ab88d6:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8ab88d9:	83 f8 ff             	cmp    $0xffffffff,%eax
 8ab88dc:	74 63                	je     8ab8941 <_ZN12TutorialData13addSkillIndexEiiiii+0xb9>
 8ab88de:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab88e1:	8d 55 dc             	lea    -0x24(%ebp),%edx
 8ab88e4:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ab88e8:	8d 55 d8             	lea    -0x28(%ebp),%edx
 8ab88eb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab88ef:	89 04 24             	mov    %eax,(%esp)
 8ab88f2:	e8 5b 14 00 00       	call   8ab9d52 <_ZSt9make_pairIRiRPN12TutorialData9SkillDataEESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
 8ab88f7:	83 ec 04             	sub    $0x4,%esp
 8ab88fa:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab88fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab8901:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ab8904:	89 04 24             	mov    %eax,(%esp)
 8ab8907:	e8 84 14 00 00       	call   8ab9d90 <_ZNSt4pairIKiPN12TutorialData9SkillDataEEC1IiS3_EEOS_IT_T0_E>
 8ab890c:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ab890f:	89 d0                	mov    %edx,%eax
 8ab8911:	01 c0                	add    %eax,%eax
 8ab8913:	01 d0                	add    %edx,%eax
 8ab8915:	c1 e0 03             	shl    $0x3,%eax
 8ab8918:	05 90 00 00 00       	add    $0x90,%eax
 8ab891d:	03 45 08             	add    0x8(%ebp),%eax
 8ab8920:	8d 48 04             	lea    0x4(%eax),%ecx
 8ab8923:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8ab8926:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8ab8929:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ab892d:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8ab8931:	89 04 24             	mov    %eax,(%esp)
 8ab8934:	e8 87 14 00 00       	call   8ab9dc0 <_ZNSt3mapIiPN12TutorialData9SkillDataESt4lessIiESaISt4pairIKiS2_EEE6insertERKS7_>
 8ab8939:	83 ec 04             	sub    $0x4,%esp
 8ab893c:	eb 04                	jmp    8ab8942 <_ZN12TutorialData13addSkillIndexEiiiii+0xba>
 8ab893e:	90                   	nop
 8ab893f:	eb 01                	jmp    8ab8942 <_ZN12TutorialData13addSkillIndexEiiiii+0xba>
 8ab8941:	90                   	nop
 8ab8942:	c9                   	leave
 8ab8943:	c3                   	ret

```

```c
// TutorialData::addSkillIndex @ 0x8ab8888

/* TutorialData::addSkillIndex(int, int, int, int, int) */

void __thiscall
TutorialData::addSkillIndex
          (TutorialData *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  SkillData *local_2c;
  int *local_28;
  pair local_24 [8];
  pair<int_const,TutorialData::SkillData*> local_1c [8];
  int local_14 [4];
  
  if (param_1 < 4) {
    local_28 = operator_new(0xc);
    local_28[1] = param_4;
    *local_28 = param_3;
    local_28[2] = param_5;
    local_2c = (SkillData *)getConvertHotKey(this,param_2);
    if (local_2c != (SkillData *)0xffffffff) {
      std::make_pair<int&,TutorialData::SkillData*&>(local_14,&local_2c);
      std::pair<int_const,TutorialData::SkillData*>::pair<int,TutorialData::SkillData*>
                (local_1c,(pair *)local_14);
      std::
      map<int,TutorialData::SkillData*,std::less<int>,std::allocator<std::pair<int_const,TutorialData::SkillData*>>>
      ::insert(local_24);
    }
  }
  return;
}

```

---

## addTutorialNotice

```asm
// === 08ab8a86 TutorialData::addTutorialNotice  [0x08ab8a86-0x8ab8c4b] ===
 8ab8a86:	55                   	push   %ebp
 8ab8a87:	89 e5                	mov    %esp,%ebp
 8ab8a89:	57                   	push   %edi
 8ab8a8a:	56                   	push   %esi
 8ab8a8b:	53                   	push   %ebx
 8ab8a8c:	83 ec 5c             	sub    $0x5c,%esp
 8ab8a8f:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab8a92:	8d 88 24 01 00 00    	lea    0x124(%eax),%ecx
 8ab8a98:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8ab8a9b:	8d 55 0c             	lea    0xc(%ebp),%edx
 8ab8a9e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ab8aa2:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8ab8aa6:	89 04 24             	mov    %eax,(%esp)
 8ab8aa9:	e8 da 14 00 00       	call   8ab9f88 <_ZNSt3mapIiSt6vectorIPN12TutorialData14TutorialNoticeESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE4findERS9_>
 8ab8aae:	83 ec 04             	sub    $0x4,%esp
 8ab8ab1:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 8ab8ab8:	e8 93 b9 c6 ff       	call   8724450 <_Znwj>
 8ab8abd:	89 c3                	mov    %eax,%ebx
 8ab8abf:	89 d8                	mov    %ebx,%eax
 8ab8ac1:	89 04 24             	mov    %eax,(%esp)
 8ab8ac4:	e8 95 0d 00 00       	call   8ab985e <_ZN12TutorialData14TutorialNoticeC1Ev>
 8ab8ac9:	eb 18                	jmp    8ab8ae3 <_ZN12TutorialData17addTutorialNoticeEiiiPKc+0x5d>
 8ab8acb:	89 d6                	mov    %edx,%esi
 8ab8acd:	89 c7                	mov    %eax,%edi
 8ab8acf:	89 1c 24             	mov    %ebx,(%esp)
 8ab8ad2:	e8 19 ba c6 ff       	call   87244f0 <_ZdlPv>
 8ab8ad7:	89 f8                	mov    %edi,%eax
 8ab8ad9:	89 f2                	mov    %esi,%edx
 8ab8adb:	89 04 24             	mov    %eax,(%esp)
 8ab8ade:	e8 6d ac 02 00       	call   8ae3750 <_Unwind_Resume>
 8ab8ae3:	89 d8                	mov    %ebx,%eax
 8ab8ae5:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8ab8ae8:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8ab8aeb:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ab8aee:	89 10                	mov    %edx,(%eax)
 8ab8af0:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8ab8af3:	8d 50 04             	lea    0x4(%eax),%edx
 8ab8af6:	8b 45 18             	mov    0x18(%ebp),%eax
 8ab8af9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab8afd:	89 14 24             	mov    %edx,(%esp)
 8ab8b00:	e8 1b fc c4 ff       	call   8708720 <_ZNSsaSEPKc>
 8ab8b05:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8ab8b08:	8b 55 10             	mov    0x10(%ebp),%edx
 8ab8b0b:	89 50 08             	mov    %edx,0x8(%eax)
 8ab8b0e:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8ab8b11:	8b 55 14             	mov    0x14(%ebp),%edx
 8ab8b14:	89 50 0c             	mov    %edx,0xc(%eax)
 8ab8b17:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab8b1a:	8d 90 24 01 00 00    	lea    0x124(%eax),%edx
 8ab8b20:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ab8b23:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab8b27:	89 04 24             	mov    %eax,(%esp)
 8ab8b2a:	e8 85 14 00 00       	call   8ab9fb4 <_ZNSt3mapIiSt6vectorIPN12TutorialData14TutorialNoticeESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE3endEv>
 8ab8b2f:	83 ec 04             	sub    $0x4,%esp
 8ab8b32:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ab8b35:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab8b39:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8ab8b3c:	89 04 24             	mov    %eax,(%esp)
 8ab8b3f:	e8 96 14 00 00       	call   8ab9fda <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIPN12TutorialData14TutorialNoticeESaIS5_EEEEneERKS9_>
 8ab8b44:	84 c0                	test   %al,%al
 8ab8b46:	74 22                	je     8ab8b6a <_ZN12TutorialData17addTutorialNoticeEiiiPKc+0xe4>
 8ab8b48:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8ab8b4b:	89 04 24             	mov    %eax,(%esp)
 8ab8b4e:	e8 9b 14 00 00       	call   8ab9fee <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIPN12TutorialData14TutorialNoticeESaIS5_EEEEptEv>
 8ab8b53:	8d 50 04             	lea    0x4(%eax),%edx
 8ab8b56:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8ab8b59:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab8b5d:	89 14 24             	mov    %edx,(%esp)
 8ab8b60:	e8 97 14 00 00       	call   8ab9ffc <_ZNSt6vectorIPN12TutorialData14TutorialNoticeESaIS2_EE9push_backERKS2_>
 8ab8b65:	e9 d7 00 00 00       	jmp    8ab8c41 <_ZN12TutorialData17addTutorialNoticeEiiiPKc+0x1bb>
 8ab8b6a:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8ab8b6d:	89 04 24             	mov    %eax,(%esp)
 8ab8b70:	e8 fb 14 00 00       	call   8aba070 <_ZNSt6vectorIPN12TutorialData14TutorialNoticeESaIS2_EEC1Ev>
 8ab8b75:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8ab8b78:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab8b7c:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8ab8b7f:	89 04 24             	mov    %eax,(%esp)
 8ab8b82:	e8 75 14 00 00       	call   8ab9ffc <_ZNSt6vectorIPN12TutorialData14TutorialNoticeESaIS2_EE9push_backERKS2_>
 8ab8b87:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8ab8b8a:	8d 55 a8             	lea    -0x58(%ebp),%edx
 8ab8b8d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ab8b91:	8d 55 0c             	lea    0xc(%ebp),%edx
 8ab8b94:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab8b98:	89 04 24             	mov    %eax,(%esp)
 8ab8b9b:	e8 41 15 00 00       	call   8aba0e1 <_ZSt9make_pairIRiRSt6vectorIPN12TutorialData14TutorialNoticeESaIS4_EEESt4pairINSt17__decay_and_stripIT_E6__typeENS9_IT0_E6__typeEEOSA_OSD_>
 8ab8ba0:	83 ec 04             	sub    $0x4,%esp
 8ab8ba3:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8ab8ba6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab8baa:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8ab8bad:	89 04 24             	mov    %eax,(%esp)
 8ab8bb0:	e8 71 15 00 00       	call   8aba126 <_ZNSt4pairIKiSt6vectorIPN12TutorialData14TutorialNoticeESaIS4_EEEC1IiS6_EEOS_IT_T0_E>
 8ab8bb5:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab8bb8:	8d 88 24 01 00 00    	lea    0x124(%eax),%ecx
 8ab8bbe:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8ab8bc1:	8d 55 c8             	lea    -0x38(%ebp),%edx
 8ab8bc4:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ab8bc8:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8ab8bcc:	89 04 24             	mov    %eax,(%esp)
 8ab8bcf:	e8 8c 15 00 00       	call   8aba160 <_ZNSt3mapIiSt6vectorIPN12TutorialData14TutorialNoticeESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE6insertERKSA_>
 8ab8bd4:	83 ec 04             	sub    $0x4,%esp
 8ab8bd7:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8ab8bda:	89 04 24             	mov    %eax,(%esp)
 8ab8bdd:	e8 a8 0c 00 00       	call   8ab988a <_ZNSt4pairIKiSt6vectorIPN12TutorialData14TutorialNoticeESaIS4_EEED1Ev>
 8ab8be2:	eb 2a                	jmp    8ab8c0e <_ZN12TutorialData17addTutorialNoticeEiiiPKc+0x188>
 8ab8be4:	89 d3                	mov    %edx,%ebx
 8ab8be6:	89 c6                	mov    %eax,%esi
 8ab8be8:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8ab8beb:	89 04 24             	mov    %eax,(%esp)
 8ab8bee:	e8 97 0c 00 00       	call   8ab988a <_ZNSt4pairIKiSt6vectorIPN12TutorialData14TutorialNoticeESaIS4_EEED1Ev>
 8ab8bf3:	89 f0                	mov    %esi,%eax
 8ab8bf5:	89 da                	mov    %ebx,%edx
 8ab8bf7:	eb 00                	jmp    8ab8bf9 <_ZN12TutorialData17addTutorialNoticeEiiiPKc+0x173>
 8ab8bf9:	89 d3                	mov    %edx,%ebx
 8ab8bfb:	89 c6                	mov    %eax,%esi
 8ab8bfd:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8ab8c00:	89 04 24             	mov    %eax,(%esp)
 8ab8c03:	e8 6c 0c 00 00       	call   8ab9874 <_ZNSt4pairIiSt6vectorIPN12TutorialData14TutorialNoticeESaIS3_EEED1Ev>
 8ab8c08:	89 f0                	mov    %esi,%eax
 8ab8c0a:	89 da                	mov    %ebx,%edx
 8ab8c0c:	eb 0d                	jmp    8ab8c1b <_ZN12TutorialData17addTutorialNoticeEiiiPKc+0x195>
 8ab8c0e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8ab8c11:	89 04 24             	mov    %eax,(%esp)
 8ab8c14:	e8 5b 0c 00 00       	call   8ab9874 <_ZNSt4pairIiSt6vectorIPN12TutorialData14TutorialNoticeESaIS3_EEED1Ev>
 8ab8c19:	eb 1b                	jmp    8ab8c36 <_ZN12TutorialData17addTutorialNoticeEiiiPKc+0x1b0>
 8ab8c1b:	89 d3                	mov    %edx,%ebx
 8ab8c1d:	89 c6                	mov    %eax,%esi
 8ab8c1f:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8ab8c22:	89 04 24             	mov    %eax,(%esp)
 8ab8c25:	e8 5a 14 00 00       	call   8aba084 <_ZNSt6vectorIPN12TutorialData14TutorialNoticeESaIS2_EED1Ev>
 8ab8c2a:	89 f0                	mov    %esi,%eax
 8ab8c2c:	89 da                	mov    %ebx,%edx
 8ab8c2e:	89 04 24             	mov    %eax,(%esp)
 8ab8c31:	e8 1a ab 02 00       	call   8ae3750 <_Unwind_Resume>
 8ab8c36:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8ab8c39:	89 04 24             	mov    %eax,(%esp)
 8ab8c3c:	e8 43 14 00 00       	call   8aba084 <_ZNSt6vectorIPN12TutorialData14TutorialNoticeESaIS2_EED1Ev>
 8ab8c41:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8ab8c44:	83 c4 00             	add    $0x0,%esp
 8ab8c47:	5b                   	pop    %ebx
 8ab8c48:	5e                   	pop    %esi
 8ab8c49:	5f                   	pop    %edi
 8ab8c4a:	5d                   	pop    %ebp
 8ab8c4b:	c3                   	ret

```

```c
// TutorialData::addTutorialNotice @ 0x8ab8a86

/* TutorialData::addTutorialNotice(int, int, int, char const*) */

void __thiscall
TutorialData::addTutorialNotice
          (TutorialData *this,int param_1,int param_2,int param_3,char *param_4)

{
  char cVar1;
  TutorialNotice *this_00;
  int iVar2;
  vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>> local_5c [12];
  TutorialNotice *local_50;
  _Rb_tree_iterator<std::pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>>
  local_4c [4];
  map<int,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>>>
  local_48 [4];
  pair local_44 [8];
  pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>
  local_3c [16];
  pair<int,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>
  local_2c [28];
  
  std::
  map<int,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>>>
  ::find((int *)local_4c);
  this_00 = operator_new(0x10);
                    /* try { // try from 08ab8ac4 to 08ab8ac8 has its CatchHandler @ 08ab8acb */
  TutorialNotice::TutorialNotice(this_00);
  *(int *)this_00 = param_1;
  local_50 = this_00;
  std::string::operator=((string *)(this_00 + 4),param_4);
  *(int *)(local_50 + 8) = param_2;
  *(int *)(local_50 + 0xc) = param_3;
  std::
  map<int,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>>>
  ::end(local_48);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>>
          ::operator!=(local_4c,(_Rb_tree_iterator *)local_48);
  if (cVar1 == '\0') {
    std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>::vector
              (local_5c);
                    /* try { // try from 08ab8b82 to 08ab8b9f has its CatchHandler @ 08ab8c1b */
    std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>::
    push_back(local_5c,&local_50);
    std::
    make_pair<int&,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>&>
              ((int *)local_2c,(vector *)&param_1);
                    /* try { // try from 08ab8bb0 to 08ab8bb4 has its CatchHandler @ 08ab8bf9 */
    std::
    pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>
    ::
    pair<int,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>
              (local_3c,local_2c);
                    /* try { // try from 08ab8bcf to 08ab8bd3 has its CatchHandler @ 08ab8be4 */
    std::
    map<int,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>>>
    ::insert(local_44);
                    /* try { // try from 08ab8bdd to 08ab8be1 has its CatchHandler @ 08ab8bf9 */
    std::
    pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>
    ::~pair(local_3c);
                    /* try { // try from 08ab8c14 to 08ab8c18 has its CatchHandler @ 08ab8c1b */
    std::
    pair<int,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>
    ::~pair(local_2c);
    std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>::
    ~vector(local_5c);
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>>
            ::operator->(local_4c);
    std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>::
    push_back((vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>> *
              )(iVar2 + 4),&local_50);
  }
  return;
}

```

---

## getAvatarIndex

```asm
// === 08ab874e TutorialData::getAvatarIndex  [0x08ab874e-0x8ab87bd] ===
 8ab874e:	55                   	push   %ebp
 8ab874f:	89 e5                	mov    %esp,%ebp
 8ab8751:	83 ec 28             	sub    $0x28,%esp
 8ab8754:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ab8757:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ab875a:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab875d:	8d 48 1c             	lea    0x1c(%eax),%ecx
 8ab8760:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ab8763:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8ab8766:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ab876a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8ab876e:	89 04 24             	mov    %eax,(%esp)
 8ab8771:	e8 78 4b 61 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 8ab8776:	83 ec 04             	sub    $0x4,%esp
 8ab8779:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab877c:	8d 50 1c             	lea    0x1c(%eax),%edx
 8ab877f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab8782:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab8786:	89 04 24             	mov    %eax,(%esp)
 8ab8789:	e8 8c 4b 61 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 8ab878e:	83 ec 04             	sub    $0x4,%esp
 8ab8791:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab8794:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab8798:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ab879b:	89 04 24             	mov    %eax,(%esp)
 8ab879e:	e8 25 1c 62 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 8ab87a3:	84 c0                	test   %al,%al
 8ab87a5:	74 10                	je     8ab87b7 <_ZN12TutorialData14getAvatarIndexE18ENUM_EQUIPMENTTYPE+0x69>
 8ab87a7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ab87aa:	89 04 24             	mov    %eax,(%esp)
 8ab87ad:	e8 8e 4b 61 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 8ab87b2:	8b 40 04             	mov    0x4(%eax),%eax
 8ab87b5:	eb 05                	jmp    8ab87bc <_ZN12TutorialData14getAvatarIndexE18ENUM_EQUIPMENTTYPE+0x6e>
 8ab87b7:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8ab87bc:	c9                   	leave
 8ab87bd:	c3                   	ret

```

```c
// TutorialData::getAvatarIndex @ 0x8ab874e

/* TutorialData::getAvatarIndex(ENUM_EQUIPMENTTYPE) */

undefined4 __thiscall TutorialData::getAvatarIndex(undefined4 this,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_18 [4];
  undefined4 local_14;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  local_14 = param_2;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_18);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_18,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_18);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## getConvertHotKey

```asm
// === 08ab885c TutorialData::getConvertHotKey  [0x08ab885c-0x8ab8887] ===
 8ab885c:	55                   	push   %ebp
 8ab885d:	89 e5                	mov    %esp,%ebp
 8ab885f:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8ab8863:	78 06                	js     8ab886b <_ZN12TutorialData16getConvertHotKeyEi+0xf>
 8ab8865:	83 7d 0c 0c          	cmpl   $0xc,0xc(%ebp)
 8ab8869:	7e 07                	jle    8ab8872 <_ZN12TutorialData16getConvertHotKeyEi+0x16>
 8ab886b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8ab8870:	eb 13                	jmp    8ab8885 <_ZN12TutorialData16getConvertHotKeyEi+0x29>
 8ab8872:	83 7d 0c 05          	cmpl   $0x5,0xc(%ebp)
 8ab8876:	7f 05                	jg     8ab887d <_ZN12TutorialData16getConvertHotKeyEi+0x21>
 8ab8878:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ab887b:	eb 08                	jmp    8ab8885 <_ZN12TutorialData16getConvertHotKeyEi+0x29>
 8ab887d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ab8880:	05 c0 00 00 00       	add    $0xc0,%eax
 8ab8885:	5d                   	pop    %ebp
 8ab8886:	c3                   	ret
 8ab8887:	90                   	nop

```

```c
// TutorialData::getConvertHotKey @ 0x8ab885c

/* TutorialData::getConvertHotKey(int) */

int __thiscall TutorialData::getConvertHotKey(TutorialData *this,int param_1)

{
  if ((param_1 < 0) || (0xc < param_1)) {
    param_1 = -1;
  }
  else if (5 < param_1) {
    param_1 = param_1 + 0xc0;
  }
  return param_1;
}

```

---

## getDialogSize

```asm
// === 08ab8486 TutorialData::getDialogSize  [0x08ab8486-0x8ab84fd] ===
 8ab8486:	55                   	push   %ebp
 8ab8487:	89 e5                	mov    %esp,%ebp
 8ab8489:	83 ec 28             	sub    $0x28,%esp
 8ab848c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ab848f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ab8492:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab8495:	8d 48 04             	lea    0x4(%eax),%ecx
 8ab8498:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ab849b:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8ab849e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ab84a2:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8ab84a6:	89 04 24             	mov    %eax,(%esp)
 8ab84a9:	e8 44 16 00 00       	call   8ab9af2 <_ZNSt3mapIiSt6vectorIPN12TutorialData10DialogDataESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE4findERS9_>
 8ab84ae:	83 ec 04             	sub    $0x4,%esp
 8ab84b1:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab84b4:	8d 50 04             	lea    0x4(%eax),%edx
 8ab84b7:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab84ba:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab84be:	89 04 24             	mov    %eax,(%esp)
 8ab84c1:	e8 58 16 00 00       	call   8ab9b1e <_ZNSt3mapIiSt6vectorIPN12TutorialData10DialogDataESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE3endEv>
 8ab84c6:	83 ec 04             	sub    $0x4,%esp
 8ab84c9:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab84cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab84d0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ab84d3:	89 04 24             	mov    %eax,(%esp)
 8ab84d6:	e8 1b 18 00 00       	call   8ab9cf6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIPN12TutorialData10DialogDataESaIS5_EEEEeqERKS9_>
 8ab84db:	84 c0                	test   %al,%al
 8ab84dd:	74 07                	je     8ab84e6 <_ZN12TutorialData13getDialogSizeEj+0x60>
 8ab84df:	b8 00 00 00 00       	mov    $0x0,%eax
 8ab84e4:	eb 16                	jmp    8ab84fc <_ZN12TutorialData13getDialogSizeEj+0x76>
 8ab84e6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ab84e9:	89 04 24             	mov    %eax,(%esp)
 8ab84ec:	e8 67 16 00 00       	call   8ab9b58 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIPN12TutorialData10DialogDataESaIS5_EEEEptEv>
 8ab84f1:	83 c0 04             	add    $0x4,%eax
 8ab84f4:	89 04 24             	mov    %eax,(%esp)
 8ab84f7:	e8 0e 18 00 00       	call   8ab9d0a <_ZNKSt6vectorIPN12TutorialData10DialogDataESaIS2_EE4sizeEv>
 8ab84fc:	c9                   	leave
 8ab84fd:	c3                   	ret

```

```c
// TutorialData::getDialogSize @ 0x8ab8486

/* TutorialData::getDialogSize(unsigned int) */

undefined4 __thiscall TutorialData::getDialogSize(TutorialData *this,uint param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>
  local_18 [4];
  uint local_14;
  map<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>>
  local_10 [12];
  
  local_14 = param_1;
  std::
  map<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>>
  ::find((int *)local_18);
  std::
  map<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>
          ::operator==(local_18,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar3 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>
            ::operator->(local_18);
    uVar2 = std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>::size
                      ((vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>
                        *)(iVar3 + 4));
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## getDialogStr

```asm
// === 08ab852e TutorialData::getDialogStr  [0x08ab852e-0x8ab85dd] ===
 8ab852e:	55                   	push   %ebp
 8ab852f:	89 e5                	mov    %esp,%ebp
 8ab8531:	83 ec 28             	sub    $0x28,%esp
 8ab8534:	8b 45 10             	mov    0x10(%ebp),%eax
 8ab8537:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ab853a:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab853d:	8d 48 04             	lea    0x4(%eax),%ecx
 8ab8540:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ab8543:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8ab8546:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ab854a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8ab854e:	89 04 24             	mov    %eax,(%esp)
 8ab8551:	e8 9c 15 00 00       	call   8ab9af2 <_ZNSt3mapIiSt6vectorIPN12TutorialData10DialogDataESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE4findERS9_>
 8ab8556:	83 ec 04             	sub    $0x4,%esp
 8ab8559:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab855c:	8d 50 04             	lea    0x4(%eax),%edx
 8ab855f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab8562:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab8566:	89 04 24             	mov    %eax,(%esp)
 8ab8569:	e8 b0 15 00 00       	call   8ab9b1e <_ZNSt3mapIiSt6vectorIPN12TutorialData10DialogDataESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE3endEv>
 8ab856e:	83 ec 04             	sub    $0x4,%esp
 8ab8571:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab8574:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab8578:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ab857b:	89 04 24             	mov    %eax,(%esp)
 8ab857e:	e8 73 17 00 00       	call   8ab9cf6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIPN12TutorialData10DialogDataESaIS5_EEEEeqERKS9_>
 8ab8583:	84 c0                	test   %al,%al
 8ab8585:	74 07                	je     8ab858e <_ZN12TutorialData12getDialogStrEjj+0x60>
 8ab8587:	b8 00 00 00 00       	mov    $0x0,%eax
 8ab858c:	eb 4e                	jmp    8ab85dc <_ZN12TutorialData12getDialogStrEjj+0xae>
 8ab858e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ab8591:	89 04 24             	mov    %eax,(%esp)
 8ab8594:	e8 bf 15 00 00       	call   8ab9b58 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIPN12TutorialData10DialogDataESaIS5_EEEEptEv>
 8ab8599:	83 c0 04             	add    $0x4,%eax
 8ab859c:	89 04 24             	mov    %eax,(%esp)
 8ab859f:	e8 66 17 00 00       	call   8ab9d0a <_ZNKSt6vectorIPN12TutorialData10DialogDataESaIS2_EE4sizeEv>
 8ab85a4:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8ab85a7:	0f 97 c0             	seta   %al
 8ab85aa:	84 c0                	test   %al,%al
 8ab85ac:	74 29                	je     8ab85d7 <_ZN12TutorialData12getDialogStrEjj+0xa9>
 8ab85ae:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ab85b1:	89 04 24             	mov    %eax,(%esp)
 8ab85b4:	e8 9f 15 00 00       	call   8ab9b58 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIPN12TutorialData10DialogDataESaIS5_EEEEptEv>
 8ab85b9:	8d 50 04             	lea    0x4(%eax),%edx
 8ab85bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ab85bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab85c3:	89 14 24             	mov    %edx,(%esp)
 8ab85c6:	e8 5b 17 00 00       	call   8ab9d26 <_ZNSt6vectorIPN12TutorialData10DialogDataESaIS2_EE2atEj>
 8ab85cb:	8b 00                	mov    (%eax),%eax
 8ab85cd:	89 04 24             	mov    %eax,(%esp)
 8ab85d0:	e8 1b df c4 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8ab85d5:	eb 05                	jmp    8ab85dc <_ZN12TutorialData12getDialogStrEjj+0xae>
 8ab85d7:	b8 00 00 00 00       	mov    $0x0,%eax
 8ab85dc:	c9                   	leave
 8ab85dd:	c3                   	ret

```

```c
// TutorialData::getDialogStr @ 0x8ab852e

/* TutorialData::getDialogStr(unsigned int, unsigned int) */

undefined4 __thiscall TutorialData::getDialogStr(TutorialData *this,uint param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  _Rb_tree_iterator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>
  local_18 [4];
  uint local_14;
  map<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>>
  local_10 [12];
  
  local_14 = param_2;
  std::
  map<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>>
  ::find((int *)local_18);
  std::
  map<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>
          ::operator==(local_18,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar3 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>
            ::operator->(local_18);
    uVar4 = std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>::size
                      ((vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>
                        *)(iVar3 + 4));
    if (param_1 < uVar4) {
      iVar3 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>
              ::operator->(local_18);
      puVar5 = (undefined4 *)
               std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>::at
                         ((vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>
                           *)(iVar3 + 4),param_1);
      uVar2 = std::string::c_str((string *)*puVar5);
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## getDungeonIndex

```asm
// === 08ab82d2 TutorialData::getDungeonIndex  [0x08ab82d2-0x8ab82db] ===
 8ab82d2:	55                   	push   %ebp
 8ab82d3:	89 e5                	mov    %esp,%ebp
 8ab82d5:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab82d8:	8b 00                	mov    (%eax),%eax
 8ab82da:	5d                   	pop    %ebp
 8ab82db:	c3                   	ret

```

```c
// TutorialData::getDungeonIndex @ 0x8ab82d2

/* TutorialData::getDungeonIndex() */

undefined4 __thiscall TutorialData::getDungeonIndex(TutorialData *this)

{
  return *(undefined4 *)this;
}

```

---

## getEquipmentIndex

```asm
// === 08ab87be TutorialData::getEquipmentIndex  [0x08ab87be-0x8ab885b] ===
 8ab87be:	55                   	push   %ebp
 8ab87bf:	89 e5                	mov    %esp,%ebp
 8ab87c1:	83 ec 28             	sub    $0x28,%esp
 8ab87c4:	83 7d 10 03          	cmpl   $0x3,0x10(%ebp)
 8ab87c8:	7e 0a                	jle    8ab87d4 <_ZN12TutorialData17getEquipmentIndexE18ENUM_EQUIPMENTTYPEi+0x16>
 8ab87ca:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8ab87cf:	e9 86 00 00 00       	jmp    8ab885a <_ZN12TutorialData17getEquipmentIndexE18ENUM_EQUIPMENTTYPEi+0x9c>
 8ab87d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ab87d7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ab87da:	8b 55 10             	mov    0x10(%ebp),%edx
 8ab87dd:	89 d0                	mov    %edx,%eax
 8ab87df:	01 c0                	add    %eax,%eax
 8ab87e1:	01 d0                	add    %edx,%eax
 8ab87e3:	c1 e0 03             	shl    $0x3,%eax
 8ab87e6:	83 c0 30             	add    $0x30,%eax
 8ab87e9:	03 45 08             	add    0x8(%ebp),%eax
 8ab87ec:	8d 48 04             	lea    0x4(%eax),%ecx
 8ab87ef:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ab87f2:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8ab87f5:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ab87f9:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8ab87fd:	89 04 24             	mov    %eax,(%esp)
 8ab8800:	e8 e9 4a 61 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 8ab8805:	83 ec 04             	sub    $0x4,%esp
 8ab8808:	8b 55 10             	mov    0x10(%ebp),%edx
 8ab880b:	89 d0                	mov    %edx,%eax
 8ab880d:	01 c0                	add    %eax,%eax
 8ab880f:	01 d0                	add    %edx,%eax
 8ab8811:	c1 e0 03             	shl    $0x3,%eax
 8ab8814:	83 c0 30             	add    $0x30,%eax
 8ab8817:	03 45 08             	add    0x8(%ebp),%eax
 8ab881a:	8d 50 04             	lea    0x4(%eax),%edx
 8ab881d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab8820:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab8824:	89 04 24             	mov    %eax,(%esp)
 8ab8827:	e8 ee 4a 61 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 8ab882c:	83 ec 04             	sub    $0x4,%esp
 8ab882f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab8832:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab8836:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ab8839:	89 04 24             	mov    %eax,(%esp)
 8ab883c:	e8 87 1b 62 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 8ab8841:	84 c0                	test   %al,%al
 8ab8843:	74 10                	je     8ab8855 <_ZN12TutorialData17getEquipmentIndexE18ENUM_EQUIPMENTTYPEi+0x97>
 8ab8845:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ab8848:	89 04 24             	mov    %eax,(%esp)
 8ab884b:	e8 f0 4a 61 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 8ab8850:	8b 40 04             	mov    0x4(%eax),%eax
 8ab8853:	eb 05                	jmp    8ab885a <_ZN12TutorialData17getEquipmentIndexE18ENUM_EQUIPMENTTYPEi+0x9c>
 8ab8855:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8ab885a:	c9                   	leave
 8ab885b:	c3                   	ret

```

```c
// TutorialData::getEquipmentIndex @ 0x8ab87be

/* TutorialData::getEquipmentIndex(ENUM_EQUIPMENTTYPE, int) */

undefined4 __thiscall
TutorialData::getEquipmentIndex(undefined4 this,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_18 [4];
  undefined4 local_14;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  if (param_3 < 4) {
    local_14 = param_2;
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_18)
    ;
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      (local_18,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') {
      uVar2 = 0xffffffff;
    }
    else {
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_18);
      uVar2 = *(undefined4 *)(iVar3 + 4);
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

```

---

## getFaceIndex

```asm
// === 08ab85de TutorialData::getFaceIndex  [0x08ab85de-0x8ab8689] ===
 8ab85de:	55                   	push   %ebp
 8ab85df:	89 e5                	mov    %esp,%ebp
 8ab85e1:	83 ec 28             	sub    $0x28,%esp
 8ab85e4:	8b 45 10             	mov    0x10(%ebp),%eax
 8ab85e7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ab85ea:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab85ed:	8d 48 04             	lea    0x4(%eax),%ecx
 8ab85f0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ab85f3:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8ab85f6:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ab85fa:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8ab85fe:	89 04 24             	mov    %eax,(%esp)
 8ab8601:	e8 ec 14 00 00       	call   8ab9af2 <_ZNSt3mapIiSt6vectorIPN12TutorialData10DialogDataESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE4findERS9_>
 8ab8606:	83 ec 04             	sub    $0x4,%esp
 8ab8609:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab860c:	8d 50 04             	lea    0x4(%eax),%edx
 8ab860f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab8612:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab8616:	89 04 24             	mov    %eax,(%esp)
 8ab8619:	e8 00 15 00 00       	call   8ab9b1e <_ZNSt3mapIiSt6vectorIPN12TutorialData10DialogDataESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE3endEv>
 8ab861e:	83 ec 04             	sub    $0x4,%esp
 8ab8621:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab8624:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab8628:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ab862b:	89 04 24             	mov    %eax,(%esp)
 8ab862e:	e8 c3 16 00 00       	call   8ab9cf6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIPN12TutorialData10DialogDataESaIS5_EEEEeqERKS9_>
 8ab8633:	84 c0                	test   %al,%al
 8ab8635:	74 07                	je     8ab863e <_ZN12TutorialData12getFaceIndexEjj+0x60>
 8ab8637:	b8 00 00 00 00       	mov    $0x0,%eax
 8ab863c:	eb 49                	jmp    8ab8687 <_ZN12TutorialData12getFaceIndexEjj+0xa9>
 8ab863e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ab8641:	89 04 24             	mov    %eax,(%esp)
 8ab8644:	e8 0f 15 00 00       	call   8ab9b58 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIPN12TutorialData10DialogDataESaIS5_EEEEptEv>
 8ab8649:	83 c0 04             	add    $0x4,%eax
 8ab864c:	89 04 24             	mov    %eax,(%esp)
 8ab864f:	e8 b6 16 00 00       	call   8ab9d0a <_ZNKSt6vectorIPN12TutorialData10DialogDataESaIS2_EE4sizeEv>
 8ab8654:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8ab8657:	0f 97 c0             	seta   %al
 8ab865a:	84 c0                	test   %al,%al
 8ab865c:	74 24                	je     8ab8682 <_ZN12TutorialData12getFaceIndexEjj+0xa4>
 8ab865e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ab8661:	89 04 24             	mov    %eax,(%esp)
 8ab8664:	e8 ef 14 00 00       	call   8ab9b58 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIPN12TutorialData10DialogDataESaIS5_EEEEptEv>
 8ab8669:	8d 50 04             	lea    0x4(%eax),%edx
 8ab866c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ab866f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab8673:	89 14 24             	mov    %edx,(%esp)
 8ab8676:	e8 ab 16 00 00       	call   8ab9d26 <_ZNSt6vectorIPN12TutorialData10DialogDataESaIS2_EE2atEj>
 8ab867b:	8b 00                	mov    (%eax),%eax
 8ab867d:	8b 40 04             	mov    0x4(%eax),%eax
 8ab8680:	eb 05                	jmp    8ab8687 <_ZN12TutorialData12getFaceIndexEjj+0xa9>
 8ab8682:	b8 00 00 00 00       	mov    $0x0,%eax
 8ab8687:	c9                   	leave
 8ab8688:	c3                   	ret
 8ab8689:	90                   	nop

```

```c
// TutorialData::getFaceIndex @ 0x8ab85de

/* TutorialData::getFaceIndex(unsigned int, unsigned int) */

undefined4 __thiscall TutorialData::getFaceIndex(TutorialData *this,uint param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  _Rb_tree_iterator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>
  local_18 [4];
  uint local_14;
  map<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>>
  local_10 [12];
  
  local_14 = param_2;
  std::
  map<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>>
  ::find((int *)local_18);
  std::
  map<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>
          ::operator==(local_18,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar3 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>
            ::operator->(local_18);
    uVar4 = std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>::size
                      ((vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>
                        *)(iVar3 + 4));
    if (param_1 < uVar4) {
      iVar3 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>
              ::operator->(local_18);
      piVar5 = (int *)std::
                      vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>::
                      at((vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>
                          *)(iVar3 + 4),param_1);
      uVar2 = *(undefined4 *)(*piVar5 + 4);
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## getItem

```asm
// === 08ab8d5c TutorialData::getItem  [0x08ab8d5c-0x8ab8d89] ===
 8ab8d5c:	55                   	push   %ebp
 8ab8d5d:	89 e5                	mov    %esp,%ebp
 8ab8d5f:	53                   	push   %ebx
 8ab8d60:	83 ec 14             	sub    $0x14,%esp
 8ab8d63:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ab8d66:	89 d8                	mov    %ebx,%eax
 8ab8d68:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ab8d6b:	81 c2 3c 01 00 00    	add    $0x13c,%edx
 8ab8d71:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab8d75:	89 04 24             	mov    %eax,(%esp)
 8ab8d78:	e8 59 15 00 00       	call   8aba2d6 <_ZNSt6vectorIPN12TutorialData8ItemDataESaIS2_EEC1ERKS4_>
 8ab8d7d:	89 d8                	mov    %ebx,%eax
 8ab8d7f:	89 d8                	mov    %ebx,%eax
 8ab8d81:	83 c4 14             	add    $0x14,%esp
 8ab8d84:	5b                   	pop    %ebx
 8ab8d85:	5d                   	pop    %ebp
 8ab8d86:	c2 04 00             	ret    $0x4
 8ab8d89:	90                   	nop

```

```c
// TutorialData::getItem @ 0x8ab8d5c

/* TutorialData::getItem() */

vector<TutorialData::ItemData*,std::allocator<TutorialData::ItemData*>> *
TutorialData::getItem(void)

{
  vector<TutorialData::ItemData*,std::allocator<TutorialData::ItemData*>> *in_stack_00000004;
  int in_stack_00000008;
  
  std::vector<TutorialData::ItemData*,std::allocator<TutorialData::ItemData*>>::vector
            (in_stack_00000004,(vector *)(in_stack_00000008 + 0x13c));
  return in_stack_00000004;
}

```

---

## getNoticeAniPath

```asm
// === 08ab8c4c TutorialData::getNoticeAniPath  [0x08ab8c4c-0x8ab8d1b] ===
 8ab8c4c:	55                   	push   %ebp
 8ab8c4d:	89 e5                	mov    %esp,%ebp
 8ab8c4f:	56                   	push   %esi
 8ab8c50:	53                   	push   %ebx
 8ab8c51:	83 ec 30             	sub    $0x30,%esp
 8ab8c54:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ab8c57:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ab8c5a:	89 04 24             	mov    %eax,(%esp)
 8ab8c5d:	e8 0e 14 00 00       	call   8aba070 <_ZNSt6vectorIPN12TutorialData14TutorialNoticeESaIS2_EEC1Ev>
 8ab8c62:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ab8c65:	8d 88 24 01 00 00    	lea    0x124(%eax),%ecx
 8ab8c6b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8ab8c6e:	8d 55 10             	lea    0x10(%ebp),%edx
 8ab8c71:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ab8c75:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8ab8c79:	89 04 24             	mov    %eax,(%esp)
 8ab8c7c:	e8 07 13 00 00       	call   8ab9f88 <_ZNSt3mapIiSt6vectorIPN12TutorialData14TutorialNoticeESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE4findERS9_>
 8ab8c81:	83 ec 04             	sub    $0x4,%esp
 8ab8c84:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ab8c87:	8d 90 24 01 00 00    	lea    0x124(%eax),%edx
 8ab8c8d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab8c90:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab8c94:	89 04 24             	mov    %eax,(%esp)
 8ab8c97:	e8 18 13 00 00       	call   8ab9fb4 <_ZNSt3mapIiSt6vectorIPN12TutorialData14TutorialNoticeESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE3endEv>
 8ab8c9c:	83 ec 04             	sub    $0x4,%esp
 8ab8c9f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab8ca2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab8ca6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8ab8ca9:	89 04 24             	mov    %eax,(%esp)
 8ab8cac:	e8 29 13 00 00       	call   8ab9fda <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIPN12TutorialData14TutorialNoticeESaIS5_EEEEneERKS9_>
 8ab8cb1:	84 c0                	test   %al,%al
 8ab8cb3:	74 1e                	je     8ab8cd3 <_ZN12TutorialData16getNoticeAniPathEi+0x87>
 8ab8cb5:	89 de                	mov    %ebx,%esi
 8ab8cb7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8ab8cba:	89 04 24             	mov    %eax,(%esp)
 8ab8cbd:	e8 2c 13 00 00       	call   8ab9fee <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIPN12TutorialData14TutorialNoticeESaIS5_EEEEptEv>
 8ab8cc2:	83 c0 04             	add    $0x4,%eax
 8ab8cc5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab8cc9:	89 34 24             	mov    %esi,(%esp)
 8ab8ccc:	e8 bb 14 00 00       	call   8aba18c <_ZNSt6vectorIPN12TutorialData14TutorialNoticeESaIS2_EEC1ERKS4_>
 8ab8cd1:	eb 2e                	jmp    8ab8d01 <_ZN12TutorialData16getNoticeAniPathEi+0xb5>
 8ab8cd3:	89 d8                	mov    %ebx,%eax
 8ab8cd5:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8ab8cd8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab8cdc:	89 04 24             	mov    %eax,(%esp)
 8ab8cdf:	e8 5c 15 00 00       	call   8aba240 <_ZNSt6vectorIPN12TutorialData14TutorialNoticeESaIS2_EEC1EOS4_>
 8ab8ce4:	eb 1b                	jmp    8ab8d01 <_ZN12TutorialData16getNoticeAniPathEi+0xb5>
 8ab8ce6:	89 d3                	mov    %edx,%ebx
 8ab8ce8:	89 c6                	mov    %eax,%esi
 8ab8cea:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ab8ced:	89 04 24             	mov    %eax,(%esp)
 8ab8cf0:	e8 8f 13 00 00       	call   8aba084 <_ZNSt6vectorIPN12TutorialData14TutorialNoticeESaIS2_EED1Ev>
 8ab8cf5:	89 f0                	mov    %esi,%eax
 8ab8cf7:	89 da                	mov    %ebx,%edx
 8ab8cf9:	89 04 24             	mov    %eax,(%esp)
 8ab8cfc:	e8 4f aa 02 00       	call   8ae3750 <_Unwind_Resume>
 8ab8d01:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ab8d04:	89 04 24             	mov    %eax,(%esp)
 8ab8d07:	e8 78 13 00 00       	call   8aba084 <_ZNSt6vectorIPN12TutorialData14TutorialNoticeESaIS2_EED1Ev>
 8ab8d0c:	89 d8                	mov    %ebx,%eax
 8ab8d0e:	89 d8                	mov    %ebx,%eax
 8ab8d10:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8ab8d13:	83 c4 00             	add    $0x0,%esp
 8ab8d16:	5b                   	pop    %ebx
 8ab8d17:	5e                   	pop    %esi
 8ab8d18:	5d                   	pop    %ebp
 8ab8d19:	c2 04 00             	ret    $0x4

```

```c
// TutorialData::getNoticeAniPath @ 0x8ab8c4c

/* TutorialData::getNoticeAniPath(int) */

int TutorialData::getNoticeAniPath(int param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>>
  local_20 [4];
  vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>> local_1c [12];
  map<int,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>>>
  local_10 [4];
  
  std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>::vector
            (local_1c);
                    /* try { // try from 08ab8c7c to 08ab8ce3 has its CatchHandler @ 08ab8ce6 */
  std::
  map<int,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>>>
  ::find((int *)local_20);
  std::
  map<int,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>>
          ::operator!=(local_20,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>::vector
              ((vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>
                *)param_1,(vector *)local_1c);
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>>
            ::operator->(local_20);
    std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>::vector
              ((vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>
                *)param_1,(vector *)(iVar2 + 4));
  }
  std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>::~vector
            (local_1c);
  return param_1;
}

```

---

## getPassiveSkillData

```asm
// === 08ab89a6 TutorialData::getPassiveSkillData  [0x08ab89a6-0x8ab89f9] ===
 8ab89a6:	55                   	push   %ebp
 8ab89a7:	89 e5                	mov    %esp,%ebp
 8ab89a9:	53                   	push   %ebx
 8ab89aa:	83 ec 14             	sub    $0x14,%esp
 8ab89ad:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ab89b0:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8ab89b4:	78 06                	js     8ab89bc <_ZN12TutorialData19getPassiveSkillDataEi+0x16>
 8ab89b6:	83 7d 10 03          	cmpl   $0x3,0x10(%ebp)
 8ab89ba:	7e 0c                	jle    8ab89c8 <_ZN12TutorialData19getPassiveSkillDataEi+0x22>
 8ab89bc:	89 d8                	mov    %ebx,%eax
 8ab89be:	89 04 24             	mov    %eax,(%esp)
 8ab89c1:	e8 ce 0f 00 00       	call   8ab9994 <_ZNSt6vectorIPN12TutorialData9SkillDataESaIS2_EEC1Ev>
 8ab89c6:	eb 25                	jmp    8ab89ed <_ZN12TutorialData19getPassiveSkillDataEi+0x47>
 8ab89c8:	89 d9                	mov    %ebx,%ecx
 8ab89ca:	8b 55 10             	mov    0x10(%ebp),%edx
 8ab89cd:	89 d0                	mov    %edx,%eax
 8ab89cf:	01 c0                	add    %eax,%eax
 8ab89d1:	01 d0                	add    %edx,%eax
 8ab89d3:	c1 e0 02             	shl    $0x2,%eax
 8ab89d6:	05 f0 00 00 00       	add    $0xf0,%eax
 8ab89db:	03 45 0c             	add    0xc(%ebp),%eax
 8ab89de:	83 c0 04             	add    $0x4,%eax
 8ab89e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab89e5:	89 0c 24             	mov    %ecx,(%esp)
 8ab89e8:	e8 73 14 00 00       	call   8ab9e60 <_ZNSt6vectorIPN12TutorialData9SkillDataESaIS2_EEC1ERKS4_>
 8ab89ed:	89 d8                	mov    %ebx,%eax
 8ab89ef:	89 d8                	mov    %ebx,%eax
 8ab89f1:	83 c4 14             	add    $0x14,%esp
 8ab89f4:	5b                   	pop    %ebx
 8ab89f5:	5d                   	pop    %ebp
 8ab89f6:	c2 04 00             	ret    $0x4
 8ab89f9:	90                   	nop

```

```c
// TutorialData::getPassiveSkillData @ 0x8ab89a6

/* TutorialData::getPassiveSkillData(int) */

int TutorialData::getPassiveSkillData(int param_1)

{
  int in_stack_00000008;
  int in_stack_0000000c;
  
  if ((in_stack_0000000c < 0) || (3 < in_stack_0000000c)) {
    std::vector<TutorialData::SkillData*,std::allocator<TutorialData::SkillData*>>::vector
              ((vector<TutorialData::SkillData*,std::allocator<TutorialData::SkillData*>> *)param_1)
    ;
  }
  else {
    std::vector<TutorialData::SkillData*,std::allocator<TutorialData::SkillData*>>::vector
              ((vector<TutorialData::SkillData*,std::allocator<TutorialData::SkillData*>> *)param_1,
               (vector *)(in_stack_0000000c * 0xc + in_stack_00000008 + 0xf4));
  }
  return param_1;
}

```

---

## getSkillData

```asm
// === 08ab89fa TutorialData::getSkillData  [0x08ab89fa-0x8ab8a85] ===
 8ab89fa:	55                   	push   %ebp
 8ab89fb:	89 e5                	mov    %esp,%ebp
 8ab89fd:	83 ec 28             	sub    $0x28,%esp
 8ab8a00:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ab8a03:	89 d0                	mov    %edx,%eax
 8ab8a05:	01 c0                	add    %eax,%eax
 8ab8a07:	01 d0                	add    %edx,%eax
 8ab8a09:	c1 e0 03             	shl    $0x3,%eax
 8ab8a0c:	05 90 00 00 00       	add    $0x90,%eax
 8ab8a11:	03 45 08             	add    0x8(%ebp),%eax
 8ab8a14:	8d 48 04             	lea    0x4(%eax),%ecx
 8ab8a17:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab8a1a:	8d 55 10             	lea    0x10(%ebp),%edx
 8ab8a1d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ab8a21:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8ab8a25:	89 04 24             	mov    %eax,(%esp)
 8ab8a28:	e8 e7 14 00 00       	call   8ab9f14 <_ZNSt3mapIiPN12TutorialData9SkillDataESt4lessIiESaISt4pairIKiS2_EEE4findERS6_>
 8ab8a2d:	83 ec 04             	sub    $0x4,%esp
 8ab8a30:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ab8a33:	89 d0                	mov    %edx,%eax
 8ab8a35:	01 c0                	add    %eax,%eax
 8ab8a37:	01 d0                	add    %edx,%eax
 8ab8a39:	c1 e0 03             	shl    $0x3,%eax
 8ab8a3c:	05 90 00 00 00       	add    $0x90,%eax
 8ab8a41:	03 45 08             	add    0x8(%ebp),%eax
 8ab8a44:	8d 50 04             	lea    0x4(%eax),%edx
 8ab8a47:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab8a4a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab8a4e:	89 04 24             	mov    %eax,(%esp)
 8ab8a51:	e8 ea 14 00 00       	call   8ab9f40 <_ZNSt3mapIiPN12TutorialData9SkillDataESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 8ab8a56:	83 ec 04             	sub    $0x4,%esp
 8ab8a59:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab8a5c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab8a60:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab8a63:	89 04 24             	mov    %eax,(%esp)
 8ab8a66:	e8 fb 14 00 00       	call   8ab9f66 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN12TutorialData9SkillDataEEEneERKS6_>
 8ab8a6b:	84 c0                	test   %al,%al
 8ab8a6d:	74 10                	je     8ab8a7f <_ZN12TutorialData12getSkillDataEii+0x85>
 8ab8a6f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab8a72:	89 04 24             	mov    %eax,(%esp)
 8ab8a75:	e8 00 15 00 00       	call   8ab9f7a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN12TutorialData9SkillDataEEEptEv>
 8ab8a7a:	8b 40 04             	mov    0x4(%eax),%eax
 8ab8a7d:	eb 05                	jmp    8ab8a84 <_ZN12TutorialData12getSkillDataEii+0x8a>
 8ab8a7f:	b8 00 00 00 00       	mov    $0x0,%eax
 8ab8a84:	c9                   	leave
 8ab8a85:	c3                   	ret

```

```c
// TutorialData::getSkillData @ 0x8ab89fa

/* TutorialData::getSkillData(int, int) */

undefined4 TutorialData::getSkillData(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,TutorialData::SkillData*>> local_14 [4];
  map<int,TutorialData::SkillData*,std::less<int>,std::allocator<std::pair<int_const,TutorialData::SkillData*>>>
  local_10 [12];
  
  std::
  map<int,TutorialData::SkillData*,std::less<int>,std::allocator<std::pair<int_const,TutorialData::SkillData*>>>
  ::find((int *)local_14);
  std::
  map<int,TutorialData::SkillData*,std::less<int>,std::allocator<std::pair<int_const,TutorialData::SkillData*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,TutorialData::SkillData*>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,TutorialData::SkillData*>>::operator->
                      (local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## isCurrentEpisode

```asm
// === 08ab84fe TutorialData::isCurrentEpisode  [0x08ab84fe-0x8ab852d] ===
 8ab84fe:	55                   	push   %ebp
 8ab84ff:	89 e5                	mov    %esp,%ebp
 8ab8501:	83 ec 18             	sub    $0x18,%esp
 8ab8504:	8b 45 10             	mov    0x10(%ebp),%eax
 8ab8507:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab850b:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab850e:	89 04 24             	mov    %eax,(%esp)
 8ab8511:	e8 70 ff ff ff       	call   8ab8486 <_ZN12TutorialData13getDialogSizeEj>
 8ab8516:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8ab8519:	0f 97 c0             	seta   %al
 8ab851c:	84 c0                	test   %al,%al
 8ab851e:	74 07                	je     8ab8527 <_ZN12TutorialData16isCurrentEpisodeEjj+0x29>
 8ab8520:	b8 01 00 00 00       	mov    $0x1,%eax
 8ab8525:	eb 05                	jmp    8ab852c <_ZN12TutorialData16isCurrentEpisodeEjj+0x2e>
 8ab8527:	b8 00 00 00 00       	mov    $0x0,%eax
 8ab852c:	c9                   	leave
 8ab852d:	c3                   	ret

```

```c
// TutorialData::isCurrentEpisode @ 0x8ab84fe

/* TutorialData::isCurrentEpisode(unsigned int, unsigned int) */

bool __thiscall TutorialData::isCurrentEpisode(TutorialData *this,uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = getDialogSize(this,param_2);
  return param_1 < uVar1;
}

```

---

## setDungeonIndex

```asm
// === 08ab82c4 TutorialData::setDungeonIndex  [0x08ab82c4-0x8ab82d1] ===
 8ab82c4:	55                   	push   %ebp
 8ab82c5:	89 e5                	mov    %esp,%ebp
 8ab82c7:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab82ca:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ab82cd:	89 10                	mov    %edx,(%eax)
 8ab82cf:	5d                   	pop    %ebp
 8ab82d0:	c3                   	ret
 8ab82d1:	90                   	nop

```

```c
// TutorialData::setDungeonIndex @ 0x8ab82c4

/* TutorialData::setDungeonIndex(unsigned int) */

void __thiscall TutorialData::setDungeonIndex(TutorialData *this,uint param_1)

{
  *(uint *)this = param_1;
  return;
}

```

---

## ~TutorialData

```asm
// === 08ab80ee TutorialData::~TutorialData  [0x08ab80ee-0x8ab82c3] ===
 8ab80ee:	55                   	push   %ebp
 8ab80ef:	89 e5                	mov    %esp,%ebp
 8ab80f1:	57                   	push   %edi
 8ab80f2:	56                   	push   %esi
 8ab80f3:	53                   	push   %ebx
 8ab80f4:	83 ec 1c             	sub    $0x1c,%esp
 8ab80f7:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab80fa:	05 3c 01 00 00       	add    $0x13c,%eax
 8ab80ff:	89 04 24             	mov    %eax,(%esp)
 8ab8102:	e8 8d 19 00 00       	call   8ab9a94 <_ZNSt6vectorIPN12TutorialData8ItemDataESaIS2_EED1Ev>
 8ab8107:	eb 1a                	jmp    8ab8123 <_ZN12TutorialDataD1Ev+0x35>
 8ab8109:	89 d3                	mov    %edx,%ebx
 8ab810b:	89 c6                	mov    %eax,%esi
 8ab810d:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab8110:	05 24 01 00 00       	add    $0x124,%eax
 8ab8115:	89 04 24             	mov    %eax,(%esp)
 8ab8118:	e8 ed 16 00 00       	call   8ab980a <_ZNSt3mapIiSt6vectorIPN12TutorialData14TutorialNoticeESaIS3_EESt4lessIiESaISt4pairIKiS5_EEED1Ev>
 8ab811d:	89 f0                	mov    %esi,%eax
 8ab811f:	89 da                	mov    %ebx,%edx
 8ab8121:	eb 12                	jmp    8ab8135 <_ZN12TutorialDataD1Ev+0x47>
 8ab8123:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab8126:	05 24 01 00 00       	add    $0x124,%eax
 8ab812b:	89 04 24             	mov    %eax,(%esp)
 8ab812e:	e8 d7 16 00 00       	call   8ab980a <_ZNSt3mapIiSt6vectorIPN12TutorialData14TutorialNoticeESaIS3_EESt4lessIiESaISt4pairIKiS5_EEED1Ev>
 8ab8133:	eb 3a                	jmp    8ab816f <_ZN12TutorialDataD1Ev+0x81>
 8ab8135:	89 d6                	mov    %edx,%esi
 8ab8137:	89 c7                	mov    %eax,%edi
 8ab8139:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab813c:	05 f4 00 00 00       	add    $0xf4,%eax
 8ab8141:	85 c0                	test   %eax,%eax
 8ab8143:	74 24                	je     8ab8169 <_ZN12TutorialDataD1Ev+0x7b>
 8ab8145:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab8148:	05 f4 00 00 00       	add    $0xf4,%eax
 8ab814d:	8d 58 30             	lea    0x30(%eax),%ebx
 8ab8150:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab8153:	05 f4 00 00 00       	add    $0xf4,%eax
 8ab8158:	39 c3                	cmp    %eax,%ebx
 8ab815a:	74 0d                	je     8ab8169 <_ZN12TutorialDataD1Ev+0x7b>
 8ab815c:	83 eb 0c             	sub    $0xc,%ebx
 8ab815f:	89 1c 24             	mov    %ebx,(%esp)
 8ab8162:	e8 41 18 00 00       	call   8ab99a8 <_ZNSt6vectorIPN12TutorialData9SkillDataESaIS2_EED1Ev>
 8ab8167:	eb e7                	jmp    8ab8150 <_ZN12TutorialDataD1Ev+0x62>
 8ab8169:	89 f8                	mov    %edi,%eax
 8ab816b:	89 f2                	mov    %esi,%edx
 8ab816d:	eb 30                	jmp    8ab819f <_ZN12TutorialDataD1Ev+0xb1>
 8ab816f:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab8172:	05 f4 00 00 00       	add    $0xf4,%eax
 8ab8177:	85 c0                	test   %eax,%eax
 8ab8179:	74 5e                	je     8ab81d9 <_ZN12TutorialDataD1Ev+0xeb>
 8ab817b:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab817e:	05 f4 00 00 00       	add    $0xf4,%eax
 8ab8183:	8d 58 30             	lea    0x30(%eax),%ebx
 8ab8186:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab8189:	05 f4 00 00 00       	add    $0xf4,%eax
 8ab818e:	39 c3                	cmp    %eax,%ebx
 8ab8190:	74 47                	je     8ab81d9 <_ZN12TutorialDataD1Ev+0xeb>
 8ab8192:	83 eb 0c             	sub    $0xc,%ebx
 8ab8195:	89 1c 24             	mov    %ebx,(%esp)
 8ab8198:	e8 0b 18 00 00       	call   8ab99a8 <_ZNSt6vectorIPN12TutorialData9SkillDataESaIS2_EED1Ev>
 8ab819d:	eb e7                	jmp    8ab8186 <_ZN12TutorialDataD1Ev+0x98>
 8ab819f:	89 d6                	mov    %edx,%esi
 8ab81a1:	89 c7                	mov    %eax,%edi
 8ab81a3:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab81a6:	05 94 00 00 00       	add    $0x94,%eax
 8ab81ab:	85 c0                	test   %eax,%eax
 8ab81ad:	74 24                	je     8ab81d3 <_ZN12TutorialDataD1Ev+0xe5>
 8ab81af:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab81b2:	05 94 00 00 00       	add    $0x94,%eax
 8ab81b7:	8d 58 60             	lea    0x60(%eax),%ebx
 8ab81ba:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab81bd:	05 94 00 00 00       	add    $0x94,%eax
 8ab81c2:	39 c3                	cmp    %eax,%ebx
 8ab81c4:	74 0d                	je     8ab81d3 <_ZN12TutorialDataD1Ev+0xe5>
 8ab81c6:	83 eb 18             	sub    $0x18,%ebx
 8ab81c9:	89 1c 24             	mov    %ebx,(%esp)
 8ab81cc:	e8 25 16 00 00       	call   8ab97f6 <_ZNSt3mapIiPN12TutorialData9SkillDataESt4lessIiESaISt4pairIKiS2_EEED1Ev>
 8ab81d1:	eb e7                	jmp    8ab81ba <_ZN12TutorialDataD1Ev+0xcc>
 8ab81d3:	89 f8                	mov    %edi,%eax
 8ab81d5:	89 f2                	mov    %esi,%edx
 8ab81d7:	eb 30                	jmp    8ab8209 <_ZN12TutorialDataD1Ev+0x11b>
 8ab81d9:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab81dc:	05 94 00 00 00       	add    $0x94,%eax
 8ab81e1:	85 c0                	test   %eax,%eax
 8ab81e3:	74 58                	je     8ab823d <_ZN12TutorialDataD1Ev+0x14f>
 8ab81e5:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab81e8:	05 94 00 00 00       	add    $0x94,%eax
 8ab81ed:	8d 58 60             	lea    0x60(%eax),%ebx
 8ab81f0:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab81f3:	05 94 00 00 00       	add    $0x94,%eax
 8ab81f8:	39 c3                	cmp    %eax,%ebx
 8ab81fa:	74 41                	je     8ab823d <_ZN12TutorialDataD1Ev+0x14f>
 8ab81fc:	83 eb 18             	sub    $0x18,%ebx
 8ab81ff:	89 1c 24             	mov    %ebx,(%esp)
 8ab8202:	e8 ef 15 00 00       	call   8ab97f6 <_ZNSt3mapIiPN12TutorialData9SkillDataESt4lessIiESaISt4pairIKiS2_EEED1Ev>
 8ab8207:	eb e7                	jmp    8ab81f0 <_ZN12TutorialDataD1Ev+0x102>
 8ab8209:	89 d6                	mov    %edx,%esi
 8ab820b:	89 c7                	mov    %eax,%edi
 8ab820d:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab8210:	83 c0 34             	add    $0x34,%eax
 8ab8213:	85 c0                	test   %eax,%eax
 8ab8215:	74 20                	je     8ab8237 <_ZN12TutorialDataD1Ev+0x149>
 8ab8217:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab821a:	83 c0 34             	add    $0x34,%eax
 8ab821d:	8d 58 60             	lea    0x60(%eax),%ebx
 8ab8220:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab8223:	83 c0 34             	add    $0x34,%eax
 8ab8226:	39 c3                	cmp    %eax,%ebx
 8ab8228:	74 0d                	je     8ab8237 <_ZN12TutorialDataD1Ev+0x149>
 8ab822a:	83 eb 18             	sub    $0x18,%ebx
 8ab822d:	89 1c 24             	mov    %ebx,(%esp)
 8ab8230:	e8 91 e8 60 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8ab8235:	eb e9                	jmp    8ab8220 <_ZN12TutorialDataD1Ev+0x132>
 8ab8237:	89 f8                	mov    %edi,%eax
 8ab8239:	89 f2                	mov    %esi,%edx
 8ab823b:	eb 2a                	jmp    8ab8267 <_ZN12TutorialDataD1Ev+0x179>
 8ab823d:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab8240:	83 c0 34             	add    $0x34,%eax
 8ab8243:	85 c0                	test   %eax,%eax
 8ab8245:	74 38                	je     8ab827f <_ZN12TutorialDataD1Ev+0x191>
 8ab8247:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab824a:	83 c0 34             	add    $0x34,%eax
 8ab824d:	8d 58 60             	lea    0x60(%eax),%ebx
 8ab8250:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab8253:	83 c0 34             	add    $0x34,%eax
 8ab8256:	39 c3                	cmp    %eax,%ebx
 8ab8258:	74 25                	je     8ab827f <_ZN12TutorialDataD1Ev+0x191>
 8ab825a:	83 eb 18             	sub    $0x18,%ebx
 8ab825d:	89 1c 24             	mov    %ebx,(%esp)
 8ab8260:	e8 61 e8 60 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8ab8265:	eb e9                	jmp    8ab8250 <_ZN12TutorialDataD1Ev+0x162>
 8ab8267:	89 d3                	mov    %edx,%ebx
 8ab8269:	89 c6                	mov    %eax,%esi
 8ab826b:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab826e:	83 c0 1c             	add    $0x1c,%eax
 8ab8271:	89 04 24             	mov    %eax,(%esp)
 8ab8274:	e8 4d e8 60 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8ab8279:	89 f0                	mov    %esi,%eax
 8ab827b:	89 da                	mov    %ebx,%edx
 8ab827d:	eb 10                	jmp    8ab828f <_ZN12TutorialDataD1Ev+0x1a1>
 8ab827f:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab8282:	83 c0 1c             	add    $0x1c,%eax
 8ab8285:	89 04 24             	mov    %eax,(%esp)
 8ab8288:	e8 39 e8 60 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8ab828d:	eb 1e                	jmp    8ab82ad <_ZN12TutorialDataD1Ev+0x1bf>
 8ab828f:	89 d3                	mov    %edx,%ebx
 8ab8291:	89 c6                	mov    %eax,%esi
 8ab8293:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab8296:	83 c0 04             	add    $0x4,%eax
 8ab8299:	89 04 24             	mov    %eax,(%esp)
 8ab829c:	e8 41 15 00 00       	call   8ab97e2 <_ZNSt3mapIiSt6vectorIPN12TutorialData10DialogDataESaIS3_EESt4lessIiESaISt4pairIKiS5_EEED1Ev>
 8ab82a1:	89 f0                	mov    %esi,%eax
 8ab82a3:	89 da                	mov    %ebx,%edx
 8ab82a5:	89 04 24             	mov    %eax,(%esp)
 8ab82a8:	e8 a3 b4 02 00       	call   8ae3750 <_Unwind_Resume>
 8ab82ad:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab82b0:	83 c0 04             	add    $0x4,%eax
 8ab82b3:	89 04 24             	mov    %eax,(%esp)
 8ab82b6:	e8 27 15 00 00       	call   8ab97e2 <_ZNSt3mapIiSt6vectorIPN12TutorialData10DialogDataESaIS3_EESt4lessIiESaISt4pairIKiS5_EEED1Ev>
 8ab82bb:	83 c4 1c             	add    $0x1c,%esp
 8ab82be:	5b                   	pop    %ebx
 8ab82bf:	5e                   	pop    %esi
 8ab82c0:	5f                   	pop    %edi
 8ab82c1:	5d                   	pop    %ebp
 8ab82c2:	c3                   	ret
 8ab82c3:	90                   	nop

```

```c
// TutorialData::~TutorialData @ 0x8ab80ee

/* TutorialData::~TutorialData() */

void __thiscall TutorialData::~TutorialData(TutorialData *this)

{
  vector<TutorialData::SkillData*,std::allocator<TutorialData::SkillData*>> *this_00;
  map<int,TutorialData::SkillData*,std::less<int>,std::allocator<std::pair<int_const,TutorialData::SkillData*>>>
  *this_01;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *this_02;
  
                    /* try { // try from 08ab8102 to 08ab8106 has its CatchHandler @ 08ab8109 */
  std::vector<TutorialData::ItemData*,std::allocator<TutorialData::ItemData*>>::~vector
            ((vector<TutorialData::ItemData*,std::allocator<TutorialData::ItemData*>> *)
             (this + 0x13c));
                    /* try { // try from 08ab812e to 08ab8132 has its CatchHandler @ 08ab8135 */
  std::
  map<int,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>>>
  ::~map((map<int,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>>>
          *)(this + 0x124));
  if (this != (TutorialData *)0xffffff0c) {
    this_00 = (vector<TutorialData::SkillData*,std::allocator<TutorialData::SkillData*>> *)
              (this + 0x124);
    while (this_00 !=
           (vector<TutorialData::SkillData*,std::allocator<TutorialData::SkillData*>> *)
           (this + 0xf4)) {
      this_00 = this_00 + -0xc;
                    /* try { // try from 08ab8198 to 08ab819c has its CatchHandler @ 08ab819f */
      std::vector<TutorialData::SkillData*,std::allocator<TutorialData::SkillData*>>::~vector
                (this_00);
    }
  }
  if (this != (TutorialData *)0xffffff6c) {
    this_01 = (map<int,TutorialData::SkillData*,std::less<int>,std::allocator<std::pair<int_const,TutorialData::SkillData*>>>
               *)(this + 0xf4);
    while (this_01 !=
           (map<int,TutorialData::SkillData*,std::less<int>,std::allocator<std::pair<int_const,TutorialData::SkillData*>>>
            *)(this + 0x94)) {
      this_01 = this_01 + -0x18;
                    /* try { // try from 08ab8202 to 08ab8206 has its CatchHandler @ 08ab8209 */
      std::
      map<int,TutorialData::SkillData*,std::less<int>,std::allocator<std::pair<int_const,TutorialData::SkillData*>>>
      ::~map(this_01);
    }
  }
  if (this != (TutorialData *)0xffffffcc) {
    this_02 = (map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x94);
    while (this_02 !=
           (map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x34)) {
      this_02 = this_02 + -0x18;
                    /* try { // try from 08ab8260 to 08ab8264 has its CatchHandler @ 08ab8267 */
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map(this_02);
    }
  }
                    /* try { // try from 08ab8288 to 08ab828c has its CatchHandler @ 08ab828f */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x1c));
  std::
  map<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>>
  ::~map((map<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>>
          *)(this + 4));
  return;
}

```

