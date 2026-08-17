# dungeonEventHanaseStruct

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## dungeonEventHanaseStruct

```asm
// === 08a60f78 dungeonEventHanaseStruct::dungeonEventHanaseStruct  [0x08a60f78-0x8a6100d] ===
 8a60f78:	55                   	push   %ebp
 8a60f79:	89 e5                	mov    %esp,%ebp
 8a60f7b:	83 ec 28             	sub    $0x28,%esp
 8a60f7e:	8b 45 08             	mov    0x8(%ebp),%eax
 8a60f81:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8a60f87:	8b 45 08             	mov    0x8(%ebp),%eax
 8a60f8a:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8a60f91:	8b 45 08             	mov    0x8(%ebp),%eax
 8a60f94:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8a60f9b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a60f9e:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8a60fa5:	8b 45 08             	mov    0x8(%ebp),%eax
 8a60fa8:	c6 40 10 00          	movb   $0x0,0x10(%eax)
 8a60fac:	8b 45 08             	mov    0x8(%ebp),%eax
 8a60faf:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 8a60fb6:	8b 45 08             	mov    0x8(%ebp),%eax
 8a60fb9:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 8a60fc0:	8b 45 08             	mov    0x8(%ebp),%eax
 8a60fc3:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 8a60fca:	8b 45 08             	mov    0x8(%ebp),%eax
 8a60fcd:	83 c0 20             	add    $0x20,%eax
 8a60fd0:	89 04 24             	mov    %eax,(%esp)
 8a60fd3:	e8 f8 55 ca ff       	call   87065d0 <_ZNSsC1Ev>
 8a60fd8:	8b 45 08             	mov    0x8(%ebp),%eax
 8a60fdb:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
 8a60fe2:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8a60fe9:	eb 15                	jmp    8a61000 <_ZN24dungeonEventHanaseStructC1Ev+0x88>
 8a60feb:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8a60fee:	8b 45 08             	mov    0x8(%ebp),%eax
 8a60ff1:	83 c2 08             	add    $0x8,%edx
 8a60ff4:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 8a60ffb:	00 
 8a60ffc:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8a61000:	83 7d f4 0a          	cmpl   $0xa,-0xc(%ebp)
 8a61004:	0f 9e c0             	setle  %al
 8a61007:	84 c0                	test   %al,%al
 8a61009:	75 e0                	jne    8a60feb <_ZN24dungeonEventHanaseStructC1Ev+0x73>
 8a6100b:	c9                   	leave
 8a6100c:	c3                   	ret
 8a6100d:	90                   	nop

```

```c
// dungeonEventHanaseStruct::dungeonEventHanaseStruct @ 0x8a60f78

/* dungeonEventHanaseStruct::dungeonEventHanaseStruct() */

void __thiscall dungeonEventHanaseStruct::dungeonEventHanaseStruct(dungeonEventHanaseStruct *this)

{
  int local_10;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  this[0x10] = (dungeonEventHanaseStruct)0x0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  std::string::string((string *)(this + 0x20));
  *(undefined4 *)(this + 0x24) = 0;
  for (local_10 = 0; local_10 < 0xb; local_10 = local_10 + 1) {
    *(undefined4 *)(this + (local_10 + 8) * 4 + 8) = 0;
  }
  return;
}

```

---

## dungeonEventHanaseStruct_08a6100e

```asm
// === 08a6100e dungeonEventHanaseStruct::dungeonEventHanaseStruct  [0x08a6100e-0x8a61163] ===
 8a6100e:	55                   	push   %ebp
 8a6100f:	89 e5                	mov    %esp,%ebp
 8a61011:	57                   	push   %edi
 8a61012:	56                   	push   %esi
 8a61013:	53                   	push   %ebx
 8a61014:	83 ec 2c             	sub    $0x2c,%esp
 8a61017:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a6101a:	8b 10                	mov    (%eax),%edx
 8a6101c:	8b 45 08             	mov    0x8(%ebp),%eax
 8a6101f:	89 10                	mov    %edx,(%eax)
 8a61021:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a61024:	8b 50 04             	mov    0x4(%eax),%edx
 8a61027:	8b 45 08             	mov    0x8(%ebp),%eax
 8a6102a:	89 50 04             	mov    %edx,0x4(%eax)
 8a6102d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a61030:	8b 50 08             	mov    0x8(%eax),%edx
 8a61033:	8b 45 08             	mov    0x8(%ebp),%eax
 8a61036:	89 50 08             	mov    %edx,0x8(%eax)
 8a61039:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a6103c:	8b 50 0c             	mov    0xc(%eax),%edx
 8a6103f:	8b 45 08             	mov    0x8(%ebp),%eax
 8a61042:	89 50 0c             	mov    %edx,0xc(%eax)
 8a61045:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a61048:	0f b6 50 10          	movzbl 0x10(%eax),%edx
 8a6104c:	8b 45 08             	mov    0x8(%ebp),%eax
 8a6104f:	88 50 10             	mov    %dl,0x10(%eax)
 8a61052:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a61055:	8b 50 14             	mov    0x14(%eax),%edx
 8a61058:	8b 45 08             	mov    0x8(%ebp),%eax
 8a6105b:	89 50 14             	mov    %edx,0x14(%eax)
 8a6105e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a61061:	8b 50 18             	mov    0x18(%eax),%edx
 8a61064:	8b 45 08             	mov    0x8(%ebp),%eax
 8a61067:	89 50 18             	mov    %edx,0x18(%eax)
 8a6106a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a6106d:	8b 50 1c             	mov    0x1c(%eax),%edx
 8a61070:	8b 45 08             	mov    0x8(%ebp),%eax
 8a61073:	89 50 1c             	mov    %edx,0x1c(%eax)
 8a61076:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a61079:	8d 50 20             	lea    0x20(%eax),%edx
 8a6107c:	8b 45 08             	mov    0x8(%ebp),%eax
 8a6107f:	83 c0 20             	add    $0x20,%eax
 8a61082:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a61086:	89 04 24             	mov    %eax,(%esp)
 8a61089:	e8 22 69 ca ff       	call   87079b0 <_ZNSsC1ERKSs>
 8a6108e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a61091:	8b 50 24             	mov    0x24(%eax),%edx
 8a61094:	8b 45 08             	mov    0x8(%ebp),%eax
 8a61097:	89 50 24             	mov    %edx,0x24(%eax)
 8a6109a:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8a610a1:	e9 87 00 00 00       	jmp    8a6112d <_ZN24dungeonEventHanaseStructC1ERKS_+0x11f>
 8a610a6:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8a610a9:	8b 45 08             	mov    0x8(%ebp),%eax
 8a610ac:	83 c2 08             	add    $0x8,%edx
 8a610af:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 8a610b6:	00 
 8a610b7:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8a610ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a610bd:	83 c2 08             	add    $0x8,%edx
 8a610c0:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 8a610c4:	85 c0                	test   %eax,%eax
 8a610c6:	74 61                	je     8a61129 <_ZN24dungeonEventHanaseStructC1ERKS_+0x11b>
 8a610c8:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8a610cf:	e8 7c 33 cc ff       	call   8724450 <_Znwj>
 8a610d4:	89 c3                	mov    %eax,%ebx
 8a610d6:	89 d8                	mov    %ebx,%eax
 8a610d8:	89 04 24             	mov    %eax,(%esp)
 8a610db:	e8 f0 54 ca ff       	call   87065d0 <_ZNSsC1Ev>
 8a610e0:	eb 12                	jmp    8a610f4 <_ZN24dungeonEventHanaseStructC1ERKS_+0xe6>
 8a610e2:	89 d6                	mov    %edx,%esi
 8a610e4:	89 c7                	mov    %eax,%edi
 8a610e6:	89 1c 24             	mov    %ebx,(%esp)
 8a610e9:	e8 02 34 cc ff       	call   87244f0 <_ZdlPv>
 8a610ee:	89 f8                	mov    %edi,%eax
 8a610f0:	89 f2                	mov    %esi,%edx
 8a610f2:	eb 4a                	jmp    8a6113e <_ZN24dungeonEventHanaseStructC1ERKS_+0x130>
 8a610f4:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 8a610f7:	89 da                	mov    %ebx,%edx
 8a610f9:	8b 45 08             	mov    0x8(%ebp),%eax
 8a610fc:	83 c1 08             	add    $0x8,%ecx
 8a610ff:	89 54 88 08          	mov    %edx,0x8(%eax,%ecx,4)
 8a61103:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8a61106:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a61109:	83 c2 08             	add    $0x8,%edx
 8a6110c:	8b 54 90 08          	mov    0x8(%eax,%edx,4),%edx
 8a61110:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 8a61113:	8b 45 08             	mov    0x8(%ebp),%eax
 8a61116:	83 c1 08             	add    $0x8,%ecx
 8a61119:	8b 44 88 08          	mov    0x8(%eax,%ecx,4),%eax
 8a6111d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a61121:	89 04 24             	mov    %eax,(%esp)
 8a61124:	e8 d7 6b ca ff       	call   8707d00 <_ZNSsaSERKSs>
 8a61129:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8a6112d:	83 7d e4 0a          	cmpl   $0xa,-0x1c(%ebp)
 8a61131:	0f 9e c0             	setle  %al
 8a61134:	84 c0                	test   %al,%al
 8a61136:	0f 85 6a ff ff ff    	jne    8a610a6 <_ZN24dungeonEventHanaseStructC1ERKS_+0x98>
 8a6113c:	eb 1e                	jmp    8a6115c <_ZN24dungeonEventHanaseStructC1ERKS_+0x14e>
 8a6113e:	89 d3                	mov    %edx,%ebx
 8a61140:	89 c6                	mov    %eax,%esi
 8a61142:	8b 45 08             	mov    0x8(%ebp),%eax
 8a61145:	83 c0 20             	add    $0x20,%eax
 8a61148:	89 04 24             	mov    %eax,(%esp)
 8a6114b:	e8 90 6a ca ff       	call   8707be0 <_ZNSsD1Ev>
 8a61150:	89 f0                	mov    %esi,%eax
 8a61152:	89 da                	mov    %ebx,%edx
 8a61154:	89 04 24             	mov    %eax,(%esp)
 8a61157:	e8 f4 25 08 00       	call   8ae3750 <_Unwind_Resume>
 8a6115c:	83 c4 2c             	add    $0x2c,%esp
 8a6115f:	5b                   	pop    %ebx
 8a61160:	5e                   	pop    %esi
 8a61161:	5f                   	pop    %edi
 8a61162:	5d                   	pop    %ebp
 8a61163:	c3                   	ret

```

```c
// dungeonEventHanaseStruct::dungeonEventHanaseStruct @ 0x8a6100e

/* dungeonEventHanaseStruct::dungeonEventHanaseStruct(dungeonEventHanaseStruct const&) */

void __thiscall
dungeonEventHanaseStruct::dungeonEventHanaseStruct
          (dungeonEventHanaseStruct *this,dungeonEventHanaseStruct *param_1)

{
  string *this_00;
  int local_20;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  this[0x10] = param_1[0x10];
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  std::string::string((string *)(this + 0x20),(string *)(param_1 + 0x20));
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  for (local_20 = 0; local_20 < 0xb; local_20 = local_20 + 1) {
    *(undefined4 *)(this + (local_20 + 8) * 4 + 8) = 0;
    if (*(int *)(param_1 + (local_20 + 8) * 4 + 8) != 0) {
                    /* try { // try from 08a610cf to 08a610d3 has its CatchHandler @ 08a6113e */
      this_00 = operator_new(4);
                    /* try { // try from 08a610db to 08a610df has its CatchHandler @ 08a610e2 */
      std::string::string(this_00);
      *(string **)(this + (local_20 + 8) * 4 + 8) = this_00;
                    /* try { // try from 08a61124 to 08a61128 has its CatchHandler @ 08a6113e */
      std::string::operator=
                (*(string **)(this + (local_20 + 8) * 4 + 8),
                 *(string **)(param_1 + (local_20 + 8) * 4 + 8));
    }
  }
  return;
}

```

---

## getNewDialog

```asm
// === 08a615fe dungeonEventHanaseStruct::getNewDialog  [0x08a615fe-0x8a61641] ===
 8a615fe:	55                   	push   %ebp
 8a615ff:	89 e5                	mov    %esp,%ebp
 8a61601:	8b 45 08             	mov    0x8(%ebp),%eax
 8a61604:	8b 40 24             	mov    0x24(%eax),%eax
 8a61607:	85 c0                	test   %eax,%eax
 8a61609:	74 2f                	je     8a6163a <_ZN24dungeonEventHanaseStruct12getNewDialogE17ENUM_CHARACTERJOB+0x3c>
 8a6160b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a6160e:	85 c0                	test   %eax,%eax
 8a61610:	78 28                	js     8a6163a <_ZN24dungeonEventHanaseStruct12getNewDialogE17ENUM_CHARACTERJOB+0x3c>
 8a61612:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a61615:	83 f8 0a             	cmp    $0xa,%eax
 8a61618:	7f 20                	jg     8a6163a <_ZN24dungeonEventHanaseStruct12getNewDialogE17ENUM_CHARACTERJOB+0x3c>
 8a6161a:	8b 55 0c             	mov    0xc(%ebp),%edx
 8a6161d:	8b 45 08             	mov    0x8(%ebp),%eax
 8a61620:	83 c2 08             	add    $0x8,%edx
 8a61623:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 8a61627:	85 c0                	test   %eax,%eax
 8a61629:	74 0f                	je     8a6163a <_ZN24dungeonEventHanaseStruct12getNewDialogE17ENUM_CHARACTERJOB+0x3c>
 8a6162b:	8b 55 0c             	mov    0xc(%ebp),%edx
 8a6162e:	8b 45 08             	mov    0x8(%ebp),%eax
 8a61631:	83 c2 08             	add    $0x8,%edx
 8a61634:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 8a61638:	eb 06                	jmp    8a61640 <_ZN24dungeonEventHanaseStruct12getNewDialogE17ENUM_CHARACTERJOB+0x42>
 8a6163a:	8b 45 08             	mov    0x8(%ebp),%eax
 8a6163d:	83 c0 20             	add    $0x20,%eax
 8a61640:	5d                   	pop    %ebp
 8a61641:	c3                   	ret

```

```c
// dungeonEventHanaseStruct::getNewDialog @ 0x8a615fe

/* dungeonEventHanaseStruct::getNewDialog(ENUM_CHARACTERJOB) */

dungeonEventHanaseStruct * __thiscall
dungeonEventHanaseStruct::getNewDialog(dungeonEventHanaseStruct *this,int param_2)

{
  if ((((*(int *)(this + 0x24) == 0) || (param_2 < 0)) || (10 < param_2)) ||
     (*(int *)(this + (param_2 + 8) * 4 + 8) == 0)) {
    this = this + 0x20;
  }
  else {
    this = *(dungeonEventHanaseStruct **)(this + (param_2 + 8) * 4 + 8);
  }
  return this;
}

```

---

## ~dungeonEventHanaseStruct

```asm
// === 08a61164 dungeonEventHanaseStruct::~dungeonEventHanaseStruct  [0x08a61164-0x8a611fb] ===
 8a61164:	55                   	push   %ebp
 8a61165:	89 e5                	mov    %esp,%ebp
 8a61167:	56                   	push   %esi
 8a61168:	53                   	push   %ebx
 8a61169:	83 ec 20             	sub    $0x20,%esp
 8a6116c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8a61173:	eb 47                	jmp    8a611bc <_ZN24dungeonEventHanaseStructD1Ev+0x58>
 8a61175:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8a61178:	8b 45 08             	mov    0x8(%ebp),%eax
 8a6117b:	83 c2 08             	add    $0x8,%edx
 8a6117e:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 8a61182:	85 c0                	test   %eax,%eax
 8a61184:	74 21                	je     8a611a7 <_ZN24dungeonEventHanaseStructD1Ev+0x43>
 8a61186:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8a61189:	8b 45 08             	mov    0x8(%ebp),%eax
 8a6118c:	83 c2 08             	add    $0x8,%edx
 8a6118f:	8b 5c 90 08          	mov    0x8(%eax,%edx,4),%ebx
 8a61193:	85 db                	test   %ebx,%ebx
 8a61195:	74 10                	je     8a611a7 <_ZN24dungeonEventHanaseStructD1Ev+0x43>
 8a61197:	89 1c 24             	mov    %ebx,(%esp)
 8a6119a:	e8 41 6a ca ff       	call   8707be0 <_ZNSsD1Ev>
 8a6119f:	89 1c 24             	mov    %ebx,(%esp)
 8a611a2:	e8 49 33 cc ff       	call   87244f0 <_ZdlPv>
 8a611a7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8a611aa:	8b 45 08             	mov    0x8(%ebp),%eax
 8a611ad:	83 c2 08             	add    $0x8,%edx
 8a611b0:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 8a611b7:	00 
 8a611b8:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8a611bc:	83 7d f4 0a          	cmpl   $0xa,-0xc(%ebp)
 8a611c0:	0f 9e c0             	setle  %al
 8a611c3:	84 c0                	test   %al,%al
 8a611c5:	75 ae                	jne    8a61175 <_ZN24dungeonEventHanaseStructD1Ev+0x11>
 8a611c7:	eb 1e                	jmp    8a611e7 <_ZN24dungeonEventHanaseStructD1Ev+0x83>
 8a611c9:	89 d3                	mov    %edx,%ebx
 8a611cb:	89 c6                	mov    %eax,%esi
 8a611cd:	8b 45 08             	mov    0x8(%ebp),%eax
 8a611d0:	83 c0 20             	add    $0x20,%eax
 8a611d3:	89 04 24             	mov    %eax,(%esp)
 8a611d6:	e8 05 6a ca ff       	call   8707be0 <_ZNSsD1Ev>
 8a611db:	89 f0                	mov    %esi,%eax
 8a611dd:	89 da                	mov    %ebx,%edx
 8a611df:	89 04 24             	mov    %eax,(%esp)
 8a611e2:	e8 69 25 08 00       	call   8ae3750 <_Unwind_Resume>
 8a611e7:	8b 45 08             	mov    0x8(%ebp),%eax
 8a611ea:	83 c0 20             	add    $0x20,%eax
 8a611ed:	89 04 24             	mov    %eax,(%esp)
 8a611f0:	e8 eb 69 ca ff       	call   8707be0 <_ZNSsD1Ev>
 8a611f5:	83 c4 20             	add    $0x20,%esp
 8a611f8:	5b                   	pop    %ebx
 8a611f9:	5e                   	pop    %esi
 8a611fa:	5d                   	pop    %ebp
 8a611fb:	c3                   	ret

```

```c
// dungeonEventHanaseStruct::~dungeonEventHanaseStruct @ 0x8a61164

/* dungeonEventHanaseStruct::~dungeonEventHanaseStruct() */

void __thiscall dungeonEventHanaseStruct::~dungeonEventHanaseStruct(dungeonEventHanaseStruct *this)

{
  string *this_00;
  int local_10;
  
  for (local_10 = 0; local_10 < 0xb; local_10 = local_10 + 1) {
    if ((*(int *)(this + (local_10 + 8) * 4 + 8) != 0) &&
       (this_00 = *(string **)(this + (local_10 + 8) * 4 + 8), this_00 != (string *)0x0)) {
                    /* try { // try from 08a6119a to 08a6119e has its CatchHandler @ 08a611c9 */
      std::string::~string(this_00);
      operator_delete(this_00);
    }
    *(undefined4 *)(this + (local_10 + 8) * 4 + 8) = 0;
  }
  std::string::~string((string *)(this + 0x20));
  return;
}

```

