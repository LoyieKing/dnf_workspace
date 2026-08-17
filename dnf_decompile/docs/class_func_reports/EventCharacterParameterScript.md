# EventCharacterParameterScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## GetEventCharacterInfo

```asm
// === 0895b722 EventCharacterParameterScript::GetEventCharacterInfo  [0x0895b722-0x895b80a] ===
 895b722:	55                   	push   %ebp
 895b723:	89 e5                	mov    %esp,%ebp
 895b725:	83 ec 38             	sub    $0x38,%esp
 895b728:	8b 45 10             	mov    0x10(%ebp),%eax
 895b72b:	85 c0                	test   %eax,%eax
 895b72d:	7e 08                	jle    895b737 <_ZNK29EventCharacterParameterScript21GetEventCharacterInfoEiiR20STEventCharacterInfo+0x15>
 895b72f:	8b 45 10             	mov    0x10(%ebp),%eax
 895b732:	83 f8 46             	cmp    $0x46,%eax
 895b735:	7e 0a                	jle    895b741 <_ZNK29EventCharacterParameterScript21GetEventCharacterInfoEiiR20STEventCharacterInfo+0x1f>
 895b737:	b8 00 00 00 00       	mov    $0x0,%eax
 895b73c:	e9 c8 00 00 00       	jmp    895b809 <_ZNK29EventCharacterParameterScript21GetEventCharacterInfoEiiR20STEventCharacterInfo+0xe7>
 895b741:	8b 55 08             	mov    0x8(%ebp),%edx
 895b744:	8d 45 e8             	lea    -0x18(%ebp),%eax
 895b747:	8d 4d 10             	lea    0x10(%ebp),%ecx
 895b74a:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 895b74e:	89 54 24 04          	mov    %edx,0x4(%esp)
 895b752:	89 04 24             	mov    %eax,(%esp)
 895b755:	e8 7a 04 00 00       	call   895bbd4 <_ZNKSt3mapIi26STEventCharacterInfo_levelSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 895b75a:	83 ec 04             	sub    $0x4,%esp
 895b75d:	8b 55 08             	mov    0x8(%ebp),%edx
 895b760:	8d 45 ec             	lea    -0x14(%ebp),%eax
 895b763:	89 54 24 04          	mov    %edx,0x4(%esp)
 895b767:	89 04 24             	mov    %eax,(%esp)
 895b76a:	e8 91 04 00 00       	call   895bc00 <_ZNKSt3mapIi26STEventCharacterInfo_levelSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 895b76f:	83 ec 04             	sub    $0x4,%esp
 895b772:	8d 45 ec             	lea    -0x14(%ebp),%eax
 895b775:	89 44 24 04          	mov    %eax,0x4(%esp)
 895b779:	8d 45 e8             	lea    -0x18(%ebp),%eax
 895b77c:	89 04 24             	mov    %eax,(%esp)
 895b77f:	e8 a2 04 00 00       	call   895bc26 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi26STEventCharacterInfo_levelEEneERKS4_>
 895b784:	84 c0                	test   %al,%al
 895b786:	74 7c                	je     895b804 <_ZNK29EventCharacterParameterScript21GetEventCharacterInfoEiiR20STEventCharacterInfo+0xe2>
 895b788:	8d 45 e8             	lea    -0x18(%ebp),%eax
 895b78b:	89 04 24             	mov    %eax,(%esp)
 895b78e:	e8 a7 04 00 00       	call   895bc3a <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi26STEventCharacterInfo_levelEEdeEv>
 895b793:	83 c0 04             	add    $0x4,%eax
 895b796:	89 45 f4             	mov    %eax,-0xc(%ebp)
 895b799:	8b 55 f4             	mov    -0xc(%ebp),%edx
 895b79c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 895b79f:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 895b7a2:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 895b7a6:	89 54 24 04          	mov    %edx,0x4(%esp)
 895b7aa:	89 04 24             	mov    %eax,(%esp)
 895b7ad:	e8 96 04 00 00       	call   895bc48 <_ZNKSt3mapIi20STEventCharacterInfoSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 895b7b2:	83 ec 04             	sub    $0x4,%esp
 895b7b5:	8b 55 f4             	mov    -0xc(%ebp),%edx
 895b7b8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 895b7bb:	89 54 24 04          	mov    %edx,0x4(%esp)
 895b7bf:	89 04 24             	mov    %eax,(%esp)
 895b7c2:	e8 ad 04 00 00       	call   895bc74 <_ZNKSt3mapIi20STEventCharacterInfoSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 895b7c7:	83 ec 04             	sub    $0x4,%esp
 895b7ca:	8d 45 f0             	lea    -0x10(%ebp),%eax
 895b7cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 895b7d1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 895b7d4:	89 04 24             	mov    %eax,(%esp)
 895b7d7:	e8 be 04 00 00       	call   895bc9a <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi20STEventCharacterInfoEEneERKS4_>
 895b7dc:	84 c0                	test   %al,%al
 895b7de:	74 24                	je     895b804 <_ZNK29EventCharacterParameterScript21GetEventCharacterInfoEiiR20STEventCharacterInfo+0xe2>
 895b7e0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 895b7e3:	89 04 24             	mov    %eax,(%esp)
 895b7e6:	e8 c3 04 00 00       	call   895bcae <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi20STEventCharacterInfoEEdeEv>
 895b7eb:	83 c0 04             	add    $0x4,%eax
 895b7ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 895b7f2:	8b 45 14             	mov    0x14(%ebp),%eax
 895b7f5:	89 04 24             	mov    %eax,(%esp)
 895b7f8:	e8 01 01 00 00       	call   895b8fe <_ZN20STEventCharacterInfoaSERKS_>
 895b7fd:	b8 01 00 00 00       	mov    $0x1,%eax
 895b802:	eb 05                	jmp    895b809 <_ZNK29EventCharacterParameterScript21GetEventCharacterInfoEiiR20STEventCharacterInfo+0xe7>
 895b804:	b8 00 00 00 00       	mov    $0x0,%eax
 895b809:	c9                   	leave
 895b80a:	c3                   	ret

```

```c
// EventCharacterParameterScript::GetEventCharacterInfo @ 0x895b722

/* EventCharacterParameterScript::GetEventCharacterInfo(int, int, STEventCharacterInfo&) const */

undefined4 __thiscall
EventCharacterParameterScript::GetEventCharacterInfo
          (EventCharacterParameterScript *this,int param_1,int param_2,STEventCharacterInfo *param_3
          )

{
  char cVar1;
  int iVar2;
  _Rb_tree_const_iterator<std::pair<int_const,STEventCharacterInfo>> local_20 [4];
  _Rb_tree_const_iterator<std::pair<int_const,STEventCharacterInfo_level>> local_1c [4];
  map<int,STEventCharacterInfo_level,std::less<int>,std::allocator<std::pair<int_const,STEventCharacterInfo_level>>>
  local_18 [4];
  map<int,STEventCharacterInfo,std::less<int>,std::allocator<std::pair<int_const,STEventCharacterInfo>>>
  local_14 [4];
  int local_10;
  
  if ((0 < param_2) && (param_2 < 0x47)) {
    std::
    map<int,STEventCharacterInfo_level,std::less<int>,std::allocator<std::pair<int_const,STEventCharacterInfo_level>>>
    ::find((int *)local_1c);
    std::
    map<int,STEventCharacterInfo_level,std::less<int>,std::allocator<std::pair<int_const,STEventCharacterInfo_level>>>
    ::end(local_18);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,STEventCharacterInfo_level>>::
            operator!=(local_1c,(_Rb_tree_const_iterator *)local_18);
    if (cVar1 != '\0') {
      local_10 = std::_Rb_tree_const_iterator<std::pair<int_const,STEventCharacterInfo_level>>::
                 operator*(local_1c);
      local_10 = local_10 + 4;
      std::
      map<int,STEventCharacterInfo,std::less<int>,std::allocator<std::pair<int_const,STEventCharacterInfo>>>
      ::find((int *)local_20);
      std::
      map<int,STEventCharacterInfo,std::less<int>,std::allocator<std::pair<int_const,STEventCharacterInfo>>>
      ::end(local_14);
      cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,STEventCharacterInfo>>::operator!=
                        (local_20,(_Rb_tree_const_iterator *)local_14);
      if (cVar1 != '\0') {
        iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,STEventCharacterInfo>>::operator*
                          (local_20);
        STEventCharacterInfo::operator=(param_3,(STEventCharacterInfo *)(iVar2 + 4));
        return 1;
      }
    }
  }
  return 0;
}

```

---

## importEventCharacterParameterScript

```asm
// === 0895b006 EventCharacterParameterScript::importEventCharacterParameterScript  [0x0895b006-0x895b721] ===
 895b006:	55                   	push   %ebp
 895b007:	89 e5                	mov    %esp,%ebp
 895b009:	56                   	push   %esi
 895b00a:	53                   	push   %ebx
 895b00b:	81 ec 00 01 00 00    	sub    $0x100,%esp
 895b011:	8b 45 0c             	mov    0xc(%ebp),%eax
 895b014:	89 44 24 04          	mov    %eax,0x4(%esp)
 895b018:	c7 04 24 c0 73 4f 09 	movl   $0x94f73c0,(%esp)
 895b01f:	e8 05 0d f6 ff       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 895b024:	83 f0 01             	xor    $0x1,%eax
 895b027:	84 c0                	test   %al,%al
 895b029:	74 0a                	je     895b035 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x2f>
 895b02b:	bb 00 00 00 00       	mov    $0x0,%ebx
 895b030:	e9 e1 06 00 00       	jmp    895b716 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x710>
 895b035:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 895b03b:	89 04 24             	mov    %eax,(%esp)
 895b03e:	e8 8d b5 da ff       	call   87065d0 <_ZNSsC1Ev>
 895b043:	c7 85 68 ff ff ff 00 	movl   $0x0,-0x98(%ebp)
 895b04a:	00 00 00 
 895b04d:	c7 85 64 ff ff ff 00 	movl   $0x0,-0x9c(%ebp)
 895b054:	00 00 00 
 895b057:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 895b05d:	89 04 24             	mov    %eax,(%esp)
 895b060:	e8 2b 08 00 00       	call   895b890 <_ZN26STEventCharacterInfo_levelC1Ev>
 895b065:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 895b06c:	00 
 895b06d:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 895b073:	89 04 24             	mov    %eax,(%esp)
 895b076:	e8 e4 17 f6 ff       	call   88bc85f <_Z8ScanTypeRSsb>
 895b07b:	83 f0 01             	xor    $0x1,%eax
 895b07e:	84 c0                	test   %al,%al
 895b080:	0f 85 34 06 00 00    	jne    895b6ba <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x6b4>
 895b086:	c7 44 24 04 65 23 e1 	movl   $0x8e12365,0x4(%esp)
 895b08d:	08 
 895b08e:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 895b094:	89 04 24             	mov    %eax,(%esp)
 895b097:	e8 05 59 72 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 895b09c:	84 c0                	test   %al,%al
 895b09e:	74 69                	je     895b109 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x103>
 895b0a0:	8d 85 4b ff ff ff    	lea    -0xb5(%ebp),%eax
 895b0a6:	89 04 24             	mov    %eax,(%esp)
 895b0a9:	e8 cd 12 f6 ff       	call   88bc37b <_Z7ScanIntPb>
 895b0ae:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 895b0b4:	0f b6 85 4b ff ff ff 	movzbl -0xb5(%ebp),%eax
 895b0bb:	83 f0 01             	xor    $0x1,%eax
 895b0be:	84 c0                	test   %al,%al
 895b0c0:	74 47                	je     895b109 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x103>
 895b0c2:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 895b0c8:	89 44 24 18          	mov    %eax,0x18(%esp)
 895b0cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 895b0cf:	89 44 24 14          	mov    %eax,0x14(%esp)
 895b0d3:	c7 44 24 10 6d 23 e1 	movl   $0x8e1236d,0x10(%esp)
 895b0da:	08 
 895b0db:	c7 44 24 0c 5f 00 00 	movl   $0x5f,0xc(%esp)
 895b0e2:	00 
 895b0e3:	c7 44 24 08 40 28 e1 	movl   $0x8e12840,0x8(%esp)
 895b0ea:	08 
 895b0eb:	c7 44 24 04 3c 23 e1 	movl   $0x8e1233c,0x4(%esp)
 895b0f2:	08 
 895b0f3:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 895b0fa:	e8 0b 8b 17 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 895b0ff:	bb 00 00 00 00       	mov    $0x0,%ebx
 895b104:	e9 d1 05 00 00       	jmp    895b6da <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x6d4>
 895b109:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 895b10f:	89 04 24             	mov    %eax,(%esp)
 895b112:	e8 b7 3b b3 ff       	call   848ecce <_ZN20STEventCharacterInfoC1Ev>
 895b117:	eb 0a                	jmp    895b123 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x11d>
 895b119:	90                   	nop
 895b11a:	eb 07                	jmp    895b123 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x11d>
 895b11c:	90                   	nop
 895b11d:	eb 04                	jmp    895b123 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x11d>
 895b11f:	90                   	nop
 895b120:	eb 01                	jmp    895b123 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x11d>
 895b122:	90                   	nop
 895b123:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 895b12a:	00 
 895b12b:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 895b131:	89 04 24             	mov    %eax,(%esp)
 895b134:	e8 26 17 f6 ff       	call   88bc85f <_Z8ScanTypeRSsb>
 895b139:	83 f0 01             	xor    $0x1,%eax
 895b13c:	84 c0                	test   %al,%al
 895b13e:	0f 85 3c 05 00 00    	jne    895b680 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x67a>
 895b144:	c7 44 24 04 89 23 e1 	movl   $0x8e12389,0x4(%esp)
 895b14b:	08 
 895b14c:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 895b152:	89 04 24             	mov    %eax,(%esp)
 895b155:	e8 47 58 72 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 895b15a:	84 c0                	test   %al,%al
 895b15c:	74 27                	je     895b185 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x17f>
 895b15e:	8d 85 4b ff ff ff    	lea    -0xb5(%ebp),%eax
 895b164:	89 04 24             	mov    %eax,(%esp)
 895b167:	e8 0f 12 f6 ff       	call   88bc37b <_Z7ScanIntPb>
 895b16c:	89 85 68 ff ff ff    	mov    %eax,-0x98(%ebp)
 895b172:	0f b6 85 4b ff ff ff 	movzbl -0xb5(%ebp),%eax
 895b179:	83 f0 01             	xor    $0x1,%eax
 895b17c:	84 c0                	test   %al,%al
 895b17e:	74 99                	je     895b119 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x113>
 895b180:	e9 ff 04 00 00       	jmp    895b684 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x67e>
 895b185:	c7 44 24 04 95 23 e1 	movl   $0x8e12395,0x4(%esp)
 895b18c:	08 
 895b18d:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 895b193:	89 04 24             	mov    %eax,(%esp)
 895b196:	e8 06 58 72 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 895b19b:	84 c0                	test   %al,%al
 895b19d:	74 72                	je     895b211 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x20b>
 895b19f:	8d 85 4b ff ff ff    	lea    -0xb5(%ebp),%eax
 895b1a5:	89 04 24             	mov    %eax,(%esp)
 895b1a8:	e8 ce 11 f6 ff       	call   88bc37b <_Z7ScanIntPb>
 895b1ad:	88 85 2c ff ff ff    	mov    %al,-0xd4(%ebp)
 895b1b3:	0f b6 85 4b ff ff ff 	movzbl -0xb5(%ebp),%eax
 895b1ba:	83 f0 01             	xor    $0x1,%eax
 895b1bd:	84 c0                	test   %al,%al
 895b1bf:	0f 84 57 ff ff ff    	je     895b11c <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x116>
 895b1c5:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 895b1cb:	89 44 24 18          	mov    %eax,0x18(%esp)
 895b1cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 895b1d2:	89 44 24 14          	mov    %eax,0x14(%esp)
 895b1d6:	c7 44 24 10 6d 23 e1 	movl   $0x8e1236d,0x10(%esp)
 895b1dd:	08 
 895b1de:	c7 44 24 0c 79 00 00 	movl   $0x79,0xc(%esp)
 895b1e5:	00 
 895b1e6:	c7 44 24 08 40 28 e1 	movl   $0x8e12840,0x8(%esp)
 895b1ed:	08 
 895b1ee:	c7 44 24 04 3c 23 e1 	movl   $0x8e1233c,0x4(%esp)
 895b1f5:	08 
 895b1f6:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 895b1fd:	e8 08 8a 17 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 895b202:	bb 00 00 00 00       	mov    $0x0,%ebx
 895b207:	be 00 00 00 00       	mov    $0x0,%esi
 895b20c:	e9 92 04 00 00       	jmp    895b6a3 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x69d>
 895b211:	c7 44 24 04 a1 23 e1 	movl   $0x8e123a1,0x4(%esp)
 895b218:	08 
 895b219:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 895b21f:	89 04 24             	mov    %eax,(%esp)
 895b222:	e8 7a 57 72 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 895b227:	84 c0                	test   %al,%al
 895b229:	74 72                	je     895b29d <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x297>
 895b22b:	8d 85 4b ff ff ff    	lea    -0xb5(%ebp),%eax
 895b231:	89 04 24             	mov    %eax,(%esp)
 895b234:	e8 42 11 f6 ff       	call   88bc37b <_Z7ScanIntPb>
 895b239:	88 85 2d ff ff ff    	mov    %al,-0xd3(%ebp)
 895b23f:	0f b6 85 4b ff ff ff 	movzbl -0xb5(%ebp),%eax
 895b246:	83 f0 01             	xor    $0x1,%eax
 895b249:	84 c0                	test   %al,%al
 895b24b:	0f 84 ce fe ff ff    	je     895b11f <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x119>
 895b251:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 895b257:	89 44 24 18          	mov    %eax,0x18(%esp)
 895b25b:	8b 45 0c             	mov    0xc(%ebp),%eax
 895b25e:	89 44 24 14          	mov    %eax,0x14(%esp)
 895b262:	c7 44 24 10 6d 23 e1 	movl   $0x8e1236d,0x10(%esp)
 895b269:	08 
 895b26a:	c7 44 24 0c 82 00 00 	movl   $0x82,0xc(%esp)
 895b271:	00 
 895b272:	c7 44 24 08 40 28 e1 	movl   $0x8e12840,0x8(%esp)
 895b279:	08 
 895b27a:	c7 44 24 04 3c 23 e1 	movl   $0x8e1233c,0x4(%esp)
 895b281:	08 
 895b282:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 895b289:	e8 7c 89 17 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 895b28e:	bb 00 00 00 00       	mov    $0x0,%ebx
 895b293:	be 00 00 00 00       	mov    $0x0,%esi
 895b298:	e9 06 04 00 00       	jmp    895b6a3 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x69d>
 895b29d:	c7 44 24 04 b2 23 e1 	movl   $0x8e123b2,0x4(%esp)
 895b2a4:	08 
 895b2a5:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 895b2ab:	89 04 24             	mov    %eax,(%esp)
 895b2ae:	e8 ee 56 72 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 895b2b3:	84 c0                	test   %al,%al
 895b2b5:	74 78                	je     895b32f <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x329>
 895b2b7:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 895b2bd:	89 04 24             	mov    %eax,(%esp)
 895b2c0:	e8 c9 a9 85 ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 895b2c5:	8d 85 4b ff ff ff    	lea    -0xb5(%ebp),%eax
 895b2cb:	89 04 24             	mov    %eax,(%esp)
 895b2ce:	e8 a8 10 f6 ff       	call   88bc37b <_Z7ScanIntPb>
 895b2d3:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
 895b2d9:	0f b6 85 4b ff ff ff 	movzbl -0xb5(%ebp),%eax
 895b2e0:	83 f0 01             	xor    $0x1,%eax
 895b2e3:	84 c0                	test   %al,%al
 895b2e5:	74 02                	je     895b2e9 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x2e3>
 895b2e7:	eb 41                	jmp    895b32a <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x324>
 895b2e9:	8d 85 4b ff ff ff    	lea    -0xb5(%ebp),%eax
 895b2ef:	89 04 24             	mov    %eax,(%esp)
 895b2f2:	e8 84 10 f6 ff       	call   88bc37b <_Z7ScanIntPb>
 895b2f7:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 895b2fd:	0f b6 85 4b ff ff ff 	movzbl -0xb5(%ebp),%eax
 895b304:	83 f0 01             	xor    $0x1,%eax
 895b307:	84 c0                	test   %al,%al
 895b309:	74 02                	je     895b30d <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x307>
 895b30b:	eb 1d                	jmp    895b32a <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x324>
 895b30d:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 895b313:	89 44 24 04          	mov    %eax,0x4(%esp)
 895b317:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 895b31d:	83 c0 04             	add    $0x4,%eax
 895b320:	89 04 24             	mov    %eax,(%esp)
 895b323:	e8 48 47 9b ff       	call   830fa70 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backERKS1_>
 895b328:	eb 8d                	jmp    895b2b7 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x2b1>
 895b32a:	e9 f4 fd ff ff       	jmp    895b123 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x11d>
 895b32f:	c7 44 24 04 ba 23 e1 	movl   $0x8e123ba,0x4(%esp)
 895b336:	08 
 895b337:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 895b33d:	89 04 24             	mov    %eax,(%esp)
 895b340:	e8 5c 56 72 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 895b345:	84 c0                	test   %al,%al
 895b347:	0f 84 f8 00 00 00    	je     895b445 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x43f>
 895b34d:	8d 85 4b ff ff ff    	lea    -0xb5(%ebp),%eax
 895b353:	89 04 24             	mov    %eax,(%esp)
 895b356:	e8 20 10 f6 ff       	call   88bc37b <_Z7ScanIntPb>
 895b35b:	89 85 18 ff ff ff    	mov    %eax,-0xe8(%ebp)
 895b361:	0f b6 85 4b ff ff ff 	movzbl -0xb5(%ebp),%eax
 895b368:	83 f0 01             	xor    $0x1,%eax
 895b36b:	84 c0                	test   %al,%al
 895b36d:	74 05                	je     895b374 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x36e>
 895b36f:	e9 cc 00 00 00       	jmp    895b440 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x43a>
 895b374:	8d 85 4b ff ff ff    	lea    -0xb5(%ebp),%eax
 895b37a:	89 04 24             	mov    %eax,(%esp)
 895b37d:	e8 f9 0f f6 ff       	call   88bc37b <_Z7ScanIntPb>
 895b382:	89 85 1c ff ff ff    	mov    %eax,-0xe4(%ebp)
 895b388:	0f b6 85 4b ff ff ff 	movzbl -0xb5(%ebp),%eax
 895b38f:	83 f0 01             	xor    $0x1,%eax
 895b392:	84 c0                	test   %al,%al
 895b394:	74 05                	je     895b39b <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x395>
 895b396:	e9 a5 00 00 00       	jmp    895b440 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x43a>
 895b39b:	8d 85 4b ff ff ff    	lea    -0xb5(%ebp),%eax
 895b3a1:	89 04 24             	mov    %eax,(%esp)
 895b3a4:	e8 d2 0f f6 ff       	call   88bc37b <_Z7ScanIntPb>
 895b3a9:	89 85 20 ff ff ff    	mov    %eax,-0xe0(%ebp)
 895b3af:	8b 85 20 ff ff ff    	mov    -0xe0(%ebp),%eax
 895b3b5:	85 c0                	test   %eax,%eax
 895b3b7:	78 0b                	js     895b3c4 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x3be>
 895b3b9:	8b 85 20 ff ff ff    	mov    -0xe0(%ebp),%eax
 895b3bf:	83 f8 1f             	cmp    $0x1f,%eax
 895b3c2:	7e 4c                	jle    895b410 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x40a>
 895b3c4:	8b 85 20 ff ff ff    	mov    -0xe0(%ebp),%eax
 895b3ca:	89 44 24 18          	mov    %eax,0x18(%esp)
 895b3ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 895b3d1:	89 44 24 14          	mov    %eax,0x14(%esp)
 895b3d5:	c7 44 24 10 c4 23 e1 	movl   $0x8e123c4,0x10(%esp)
 895b3dc:	08 
 895b3dd:	c7 44 24 0c a4 00 00 	movl   $0xa4,0xc(%esp)
 895b3e4:	00 
 895b3e5:	c7 44 24 08 40 28 e1 	movl   $0x8e12840,0x8(%esp)
 895b3ec:	08 
 895b3ed:	c7 44 24 04 3c 23 e1 	movl   $0x8e1233c,0x4(%esp)
 895b3f4:	08 
 895b3f5:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 895b3fc:	e8 09 88 17 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 895b401:	bb 00 00 00 00       	mov    $0x0,%ebx
 895b406:	be 00 00 00 00       	mov    $0x0,%esi
 895b40b:	e9 93 02 00 00       	jmp    895b6a3 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x69d>
 895b410:	0f b6 85 4b ff ff ff 	movzbl -0xb5(%ebp),%eax
 895b417:	83 f0 01             	xor    $0x1,%eax
 895b41a:	84 c0                	test   %al,%al
 895b41c:	74 02                	je     895b420 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x41a>
 895b41e:	eb 20                	jmp    895b440 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x43a>
 895b420:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 895b426:	89 44 24 04          	mov    %eax,0x4(%esp)
 895b42a:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 895b430:	83 c0 10             	add    $0x10,%eax
 895b433:	89 04 24             	mov    %eax,(%esp)
 895b436:	e8 3f 05 00 00       	call   895b97a <_ZNSt6vectorI20STEventCharacterItemSaIS0_EE9push_backERKS0_>
 895b43b:	e9 0d ff ff ff       	jmp    895b34d <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x347>
 895b440:	e9 de fc ff ff       	jmp    895b123 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x11d>
 895b445:	c7 44 24 04 08 24 e1 	movl   $0x8e12408,0x4(%esp)
 895b44c:	08 
 895b44d:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 895b453:	89 04 24             	mov    %eax,(%esp)
 895b456:	e8 46 55 72 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 895b45b:	84 c0                	test   %al,%al
 895b45d:	0f 84 0b 01 00 00    	je     895b56e <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x568>
 895b463:	8d 45 98             	lea    -0x68(%ebp),%eax
 895b466:	8d 95 2c ff ff ff    	lea    -0xd4(%ebp),%edx
 895b46c:	89 54 24 08          	mov    %edx,0x8(%esp)
 895b470:	8d 95 68 ff ff ff    	lea    -0x98(%ebp),%edx
 895b476:	89 54 24 04          	mov    %edx,0x4(%esp)
 895b47a:	89 04 24             	mov    %eax,(%esp)
 895b47d:	e8 6b 05 00 00       	call   895b9ed <_ZSt9make_pairIRiR20STEventCharacterInfoESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 895b482:	83 ec 04             	sub    $0x4,%esp
 895b485:	8d 45 98             	lea    -0x68(%ebp),%eax
 895b488:	89 44 24 04          	mov    %eax,0x4(%esp)
 895b48c:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 895b492:	89 04 24             	mov    %eax,(%esp)
 895b495:	e8 10 06 00 00       	call   895baaa <_ZNSt4pairIKi20STEventCharacterInfoEC1IiS1_EEOS_IT_T0_E>
 895b49a:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 895b4a0:	8d 95 78 ff ff ff    	lea    -0x88(%ebp),%edx
 895b4a6:	89 54 24 08          	mov    %edx,0x8(%esp)
 895b4aa:	8d 95 4c ff ff ff    	lea    -0xb4(%ebp),%edx
 895b4b0:	89 54 24 04          	mov    %edx,0x4(%esp)
 895b4b4:	89 04 24             	mov    %eax,(%esp)
 895b4b7:	e8 28 06 00 00       	call   895bae4 <_ZNSt3mapIi20STEventCharacterInfoSt4lessIiESaISt4pairIKiS0_EEE6insertERKS5_>
 895b4bc:	83 ec 04             	sub    $0x4,%esp
 895b4bf:	0f b6 85 74 ff ff ff 	movzbl -0x8c(%ebp),%eax
 895b4c6:	be 01 00 00 00       	mov    $0x1,%esi
 895b4cb:	31 c6                	xor    %eax,%esi
 895b4cd:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 895b4d3:	89 04 24             	mov    %eax,(%esp)
 895b4d6:	e8 5f 2f a7 ff       	call   83ce43a <_ZNSt4pairIKi20STEventCharacterInfoED1Ev>
 895b4db:	eb 30                	jmp    895b50d <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x507>
 895b4dd:	89 d3                	mov    %edx,%ebx
 895b4df:	89 c6                	mov    %eax,%esi
 895b4e1:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 895b4e7:	89 04 24             	mov    %eax,(%esp)
 895b4ea:	e8 4b 2f a7 ff       	call   83ce43a <_ZNSt4pairIKi20STEventCharacterInfoED1Ev>
 895b4ef:	89 f0                	mov    %esi,%eax
 895b4f1:	89 da                	mov    %ebx,%edx
 895b4f3:	eb 00                	jmp    895b4f5 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x4ef>
 895b4f5:	89 d3                	mov    %edx,%ebx
 895b4f7:	89 c6                	mov    %eax,%esi
 895b4f9:	8d 45 98             	lea    -0x68(%ebp),%eax
 895b4fc:	89 04 24             	mov    %eax,(%esp)
 895b4ff:	e8 ce 03 00 00       	call   895b8d2 <_ZNSt4pairIi20STEventCharacterInfoED1Ev>
 895b504:	89 f0                	mov    %esi,%eax
 895b506:	89 da                	mov    %ebx,%edx
 895b508:	e9 7e 01 00 00       	jmp    895b68b <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x685>
 895b50d:	8d 45 98             	lea    -0x68(%ebp),%eax
 895b510:	89 04 24             	mov    %eax,(%esp)
 895b513:	e8 ba 03 00 00       	call   895b8d2 <_ZNSt4pairIi20STEventCharacterInfoED1Ev>
 895b518:	89 f0                	mov    %esi,%eax
 895b51a:	84 c0                	test   %al,%al
 895b51c:	0f 84 61 01 00 00    	je     895b683 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x67d>
 895b522:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 895b528:	89 44 24 18          	mov    %eax,0x18(%esp)
 895b52c:	8b 45 0c             	mov    0xc(%ebp),%eax
 895b52f:	89 44 24 14          	mov    %eax,0x14(%esp)
 895b533:	c7 44 24 10 6d 23 e1 	movl   $0x8e1236d,0x10(%esp)
 895b53a:	08 
 895b53b:	c7 44 24 0c b3 00 00 	movl   $0xb3,0xc(%esp)
 895b542:	00 
 895b543:	c7 44 24 08 40 28 e1 	movl   $0x8e12840,0x8(%esp)
 895b54a:	08 
 895b54b:	c7 44 24 04 3c 23 e1 	movl   $0x8e1233c,0x4(%esp)
 895b552:	08 
 895b553:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 895b55a:	e8 ab 86 17 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 895b55f:	bb 00 00 00 00       	mov    $0x0,%ebx
 895b564:	be 00 00 00 00       	mov    $0x0,%esi
 895b569:	e9 35 01 00 00       	jmp    895b6a3 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x69d>
 895b56e:	c7 44 24 04 15 24 e1 	movl   $0x8e12415,0x4(%esp)
 895b575:	08 
 895b576:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 895b57c:	89 04 24             	mov    %eax,(%esp)
 895b57f:	e8 1d 54 72 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 895b584:	84 c0                	test   %al,%al
 895b586:	0f 84 96 fb ff ff    	je     895b122 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x11c>
 895b58c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 895b58f:	8d 95 4c ff ff ff    	lea    -0xb4(%ebp),%edx
 895b595:	89 54 24 08          	mov    %edx,0x8(%esp)
 895b599:	8d 95 64 ff ff ff    	lea    -0x9c(%ebp),%edx
 895b59f:	89 54 24 04          	mov    %edx,0x4(%esp)
 895b5a3:	89 04 24             	mov    %eax,(%esp)
 895b5a6:	e8 65 05 00 00       	call   895bb10 <_ZSt9make_pairIRiR26STEventCharacterInfo_levelESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 895b5ab:	83 ec 04             	sub    $0x4,%esp
 895b5ae:	8d 45 dc             	lea    -0x24(%ebp),%eax
 895b5b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 895b5b5:	8d 45 c0             	lea    -0x40(%ebp),%eax
 895b5b8:	89 04 24             	mov    %eax,(%esp)
 895b5bb:	e8 ae 05 00 00       	call   895bb6e <_ZNSt4pairIKi26STEventCharacterInfo_levelEC1IiS1_EEOS_IT_T0_E>
 895b5c0:	8b 55 08             	mov    0x8(%ebp),%edx
 895b5c3:	8d 45 b8             	lea    -0x48(%ebp),%eax
 895b5c6:	8d 4d c0             	lea    -0x40(%ebp),%ecx
 895b5c9:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 895b5cd:	89 54 24 04          	mov    %edx,0x4(%esp)
 895b5d1:	89 04 24             	mov    %eax,(%esp)
 895b5d4:	e8 cf 05 00 00       	call   895bba8 <_ZNSt3mapIi26STEventCharacterInfo_levelSt4lessIiESaISt4pairIKiS0_EEE6insertERKS5_>
 895b5d9:	83 ec 04             	sub    $0x4,%esp
 895b5dc:	0f b6 45 bc          	movzbl -0x44(%ebp),%eax
 895b5e0:	89 c3                	mov    %eax,%ebx
 895b5e2:	83 f3 01             	xor    $0x1,%ebx
 895b5e5:	8d 45 c0             	lea    -0x40(%ebp),%eax
 895b5e8:	89 04 24             	mov    %eax,(%esp)
 895b5eb:	e8 0e 2f a7 ff       	call   83ce4fe <_ZNSt4pairIKi26STEventCharacterInfo_levelED1Ev>
 895b5f0:	eb 2a                	jmp    895b61c <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x616>
 895b5f2:	89 d3                	mov    %edx,%ebx
 895b5f4:	89 c6                	mov    %eax,%esi
 895b5f6:	8d 45 c0             	lea    -0x40(%ebp),%eax
 895b5f9:	89 04 24             	mov    %eax,(%esp)
 895b5fc:	e8 fd 2e a7 ff       	call   83ce4fe <_ZNSt4pairIKi26STEventCharacterInfo_levelED1Ev>
 895b601:	89 f0                	mov    %esi,%eax
 895b603:	89 da                	mov    %ebx,%edx
 895b605:	eb 00                	jmp    895b607 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x601>
 895b607:	89 d3                	mov    %edx,%ebx
 895b609:	89 c6                	mov    %eax,%esi
 895b60b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 895b60e:	89 04 24             	mov    %eax,(%esp)
 895b611:	e8 d2 02 00 00       	call   895b8e8 <_ZNSt4pairIi26STEventCharacterInfo_levelED1Ev>
 895b616:	89 f0                	mov    %esi,%eax
 895b618:	89 da                	mov    %ebx,%edx
 895b61a:	eb 6f                	jmp    895b68b <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x685>
 895b61c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 895b61f:	89 04 24             	mov    %eax,(%esp)
 895b622:	e8 c1 02 00 00       	call   895b8e8 <_ZNSt4pairIi26STEventCharacterInfo_levelED1Ev>
 895b627:	84 db                	test   %bl,%bl
 895b629:	74 49                	je     895b674 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x66e>
 895b62b:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 895b631:	89 44 24 18          	mov    %eax,0x18(%esp)
 895b635:	8b 45 0c             	mov    0xc(%ebp),%eax
 895b638:	89 44 24 14          	mov    %eax,0x14(%esp)
 895b63c:	c7 44 24 10 20 24 e1 	movl   $0x8e12420,0x10(%esp)
 895b643:	08 
 895b644:	c7 44 24 0c bd 00 00 	movl   $0xbd,0xc(%esp)
 895b64b:	00 
 895b64c:	c7 44 24 08 40 28 e1 	movl   $0x8e12840,0x8(%esp)
 895b653:	08 
 895b654:	c7 44 24 04 3c 23 e1 	movl   $0x8e1233c,0x4(%esp)
 895b65b:	08 
 895b65c:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 895b663:	e8 a2 85 17 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 895b668:	bb 00 00 00 00       	mov    $0x0,%ebx
 895b66d:	be 00 00 00 00       	mov    $0x0,%esi
 895b672:	eb 2f                	jmp    895b6a3 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x69d>
 895b674:	bb 01 00 00 00       	mov    $0x1,%ebx
 895b679:	be 00 00 00 00       	mov    $0x0,%esi
 895b67e:	eb 23                	jmp    895b6a3 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x69d>
 895b680:	90                   	nop
 895b681:	eb 01                	jmp    895b684 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x67e>
 895b683:	90                   	nop
 895b684:	be 01 00 00 00       	mov    $0x1,%esi
 895b689:	eb 18                	jmp    895b6a3 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x69d>
 895b68b:	89 d3                	mov    %edx,%ebx
 895b68d:	89 c6                	mov    %eax,%esi
 895b68f:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 895b695:	89 04 24             	mov    %eax,(%esp)
 895b698:	e8 51 2d a7 ff       	call   83ce3ee <_ZN20STEventCharacterInfoD1Ev>
 895b69d:	89 f0                	mov    %esi,%eax
 895b69f:	89 da                	mov    %ebx,%edx
 895b6a1:	eb 1f                	jmp    895b6c2 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x6bc>
 895b6a3:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 895b6a9:	89 04 24             	mov    %eax,(%esp)
 895b6ac:	e8 3d 2d a7 ff       	call   83ce3ee <_ZN20STEventCharacterInfoD1Ev>
 895b6b1:	85 f6                	test   %esi,%esi
 895b6b3:	74 25                	je     895b6da <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x6d4>
 895b6b5:	e9 4f fa ff ff       	jmp    895b109 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x103>
 895b6ba:	90                   	nop
 895b6bb:	bb 00 00 00 00       	mov    $0x0,%ebx
 895b6c0:	eb 18                	jmp    895b6da <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x6d4>
 895b6c2:	89 d3                	mov    %edx,%ebx
 895b6c4:	89 c6                	mov    %eax,%esi
 895b6c6:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 895b6cc:	89 04 24             	mov    %eax,(%esp)
 895b6cf:	e8 16 2e a7 ff       	call   83ce4ea <_ZN26STEventCharacterInfo_levelD1Ev>
 895b6d4:	89 f0                	mov    %esi,%eax
 895b6d6:	89 da                	mov    %ebx,%edx
 895b6d8:	eb 10                	jmp    895b6ea <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x6e4>
 895b6da:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 895b6e0:	89 04 24             	mov    %eax,(%esp)
 895b6e3:	e8 02 2e a7 ff       	call   83ce4ea <_ZN26STEventCharacterInfo_levelD1Ev>
 895b6e8:	eb 1e                	jmp    895b708 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc+0x702>
 895b6ea:	89 d3                	mov    %edx,%ebx
 895b6ec:	89 c6                	mov    %eax,%esi
 895b6ee:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 895b6f4:	89 04 24             	mov    %eax,(%esp)
 895b6f7:	e8 e4 c4 da ff       	call   8707be0 <_ZNSsD1Ev>
 895b6fc:	89 f0                	mov    %esi,%eax
 895b6fe:	89 da                	mov    %ebx,%edx
 895b700:	89 04 24             	mov    %eax,(%esp)
 895b703:	e8 48 80 18 00       	call   8ae3750 <_Unwind_Resume>
 895b708:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 895b70e:	89 04 24             	mov    %eax,(%esp)
 895b711:	e8 ca c4 da ff       	call   8707be0 <_ZNSsD1Ev>
 895b716:	89 d8                	mov    %ebx,%eax
 895b718:	8d 65 f8             	lea    -0x8(%ebp),%esp
 895b71b:	83 c4 00             	add    $0x0,%esp
 895b71e:	5b                   	pop    %ebx
 895b71f:	5e                   	pop    %esi
 895b720:	5d                   	pop    %ebp
 895b721:	c3                   	ret

```

```c
// EventCharacterParameterScript::importEventCharacterParameterScript @ 0x895b006

/* EventCharacterParameterScript::importEventCharacterParameterScript(char const*) */

undefined4 __thiscall
EventCharacterParameterScript::importEventCharacterParameterScript
          (EventCharacterParameterScript *this,char *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 unaff_EBX;
  undefined4 local_ec;
  undefined4 local_e8;
  int local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  STEventCharacterInfo local_d8;
  undefined1 local_d7;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_d4 [12];
  vector<STEventCharacterItem,std::allocator<STEventCharacterItem>> avStack_c8 [15];
  bool local_b9;
  STEventCharacterInfo_level local_b8 [24];
  undefined4 local_a0;
  undefined4 local_9c;
  string local_98;
  pair local_94 [4];
  char local_90;
  pair<int_const,STEventCharacterInfo> local_8c [32];
  pair<int,STEventCharacterInfo> local_6c [32];
  pair local_4c [4];
  char local_48;
  pair<int_const,STEventCharacterInfo_level> local_44 [28];
  pair<int,STEventCharacterInfo_level> local_28 [28];
  
  cVar1 = loadRDARScriptFile(g_eventCharacterScriptBaseDirectory,param_1);
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_98);
    local_9c = 0;
    local_a0 = 0;
                    /* try { // try from 0895b060 to 0895b064 has its CatchHandler @ 0895b6ea */
    STEventCharacterInfo_level::STEventCharacterInfo_level(local_b8);
                    /* try { // try from 0895b076 to 0895b116 has its CatchHandler @ 0895b6c2 */
    cVar1 = ScanType((string *)&local_98,true);
    if (cVar1 == '\x01') {
      bVar2 = std::operator==(&local_98,"[level]");
      if ((bVar2) && (local_a0 = ScanInt(&local_b9), local_b9 != true)) {
        LogManager::logFormat
                  (0,"../RDARScriptEventCharacterParameter.cpp",
                   "importEventCharacterParameterScript",0x5f,"file name(%s) job name [%d]",param_1,
                   local_9c);
        unaff_EBX = 0;
      }
      else {
        do {
          STEventCharacterInfo::STEventCharacterInfo(&local_d8);
LAB_0895b123:
          do {
                    /* try { // try from 0895b134 to 0895b481 has its CatchHandler @ 0895b68b */
            cVar1 = ScanType((string *)&local_98,true);
            if (cVar1 != '\x01') break;
            bVar2 = std::operator==(&local_98,"[job const]");
            if (!bVar2) {
              bVar2 = std::operator==(&local_98,"[grow type]");
              if (bVar2) {
                local_d8 = (STEventCharacterInfo)ScanInt(&local_b9);
                if (local_b9 != true) {
                  LogManager::logFormat
                            (0,"../RDARScriptEventCharacterParameter.cpp",
                             "importEventCharacterParameterScript",0x79,
                             "file name(%s) job name [%d]",param_1,local_9c);
                  unaff_EBX = 0;
                  bVar2 = false;
                  goto LAB_0895b6a3;
                }
              }
              else {
                bVar2 = std::operator==(&local_98,"[awakening type]");
                if (bVar2) {
                  local_d7 = ScanInt(&local_b9);
                  if (local_b9 != true) {
                    LogManager::logFormat
                              (0,"../RDARScriptEventCharacterParameter.cpp",
                               "importEventCharacterParameterScript",0x82,
                               "file name(%s) job name [%d]",param_1,local_9c);
                    unaff_EBX = 0;
                    bVar2 = false;
                    goto LAB_0895b6a3;
                  }
                }
                else {
                  bVar2 = std::operator==(&local_98,"[skill]");
                  if (bVar2) {
                    while( true ) {
                      std::pair<int,int>::pair((pair<int,int> *)&local_e0);
                      local_e0 = ScanInt(&local_b9);
                      if ((local_b9 != true) || (local_dc = ScanInt(&local_b9), local_b9 != true))
                      break;
                      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                                (avStack_d4,(pair *)&local_e0);
                    }
                  }
                  else {
                    bVar2 = std::operator==(&local_98,"[item]");
                    if (bVar2) {
                      while ((local_ec = ScanInt(&local_b9), local_b9 == true &&
                             (local_e8 = ScanInt(&local_b9), local_b9 == true))) {
                        local_e4 = ScanInt(&local_b9);
                        if ((local_e4 < 0) || (0x1f < local_e4)) {
                          LogManager::logFormat
                                    (0,"../RDARScriptEventCharacterParameter.cpp",
                                     "importEventCharacterParameterScript",0xa4,
                                     "file name(%s) upgrade script error [%d] upgrade < 0 || upgrade > 31"
                                     ,param_1,local_e4);
                          unaff_EBX = 0;
                          bVar2 = false;
                          goto LAB_0895b6a3;
                        }
                        if (local_b9 != true) break;
                        std::vector<STEventCharacterItem,std::allocator<STEventCharacterItem>>::
                        push_back(avStack_c8,(STEventCharacterItem *)&local_ec);
                      }
                    }
                    else {
                      bVar2 = std::operator==(&local_98,"[/job const]");
                      if (bVar2) {
                        std::make_pair<int&,STEventCharacterInfo&>
                                  ((int *)local_6c,(STEventCharacterInfo *)&local_9c);
                    /* try { // try from 0895b495 to 0895b499 has its CatchHandler @ 0895b4f5 */
                        std::pair<int_const,STEventCharacterInfo>::pair<int,STEventCharacterInfo>
                                  (local_8c,local_6c);
                    /* try { // try from 0895b4b7 to 0895b4bb has its CatchHandler @ 0895b4dd */
                        std::
                        map<int,STEventCharacterInfo,std::less<int>,std::allocator<std::pair<int_const,STEventCharacterInfo>>>
                        ::insert(local_94);
                        cVar1 = local_90;
                    /* try { // try from 0895b4d6 to 0895b4da has its CatchHandler @ 0895b4f5 */
                        std::pair<int_const,STEventCharacterInfo>::~pair(local_8c);
                    /* try { // try from 0895b513 to 0895b5aa has its CatchHandler @ 0895b68b */
                        std::pair<int,STEventCharacterInfo>::~pair(local_6c);
                        if (cVar1 != '\x01') {
                          LogManager::logFormat
                                    (0,"../RDARScriptEventCharacterParameter.cpp",
                                     "importEventCharacterParameterScript",0xb3,
                                     "file name(%s) job name [%d]",param_1,local_9c);
                          unaff_EBX = 0;
                          bVar2 = false;
                          goto LAB_0895b6a3;
                        }
                        break;
                      }
                      bVar2 = std::operator==(&local_98,"[/level]");
                      if (bVar2) {
                        std::make_pair<int&,STEventCharacterInfo_level&>
                                  ((int *)local_28,(STEventCharacterInfo_level *)&local_a0);
                    /* try { // try from 0895b5bb to 0895b5bf has its CatchHandler @ 0895b607 */
                        std::pair<int_const,STEventCharacterInfo_level>::
                        pair<int,STEventCharacterInfo_level>(local_44,local_28);
                    /* try { // try from 0895b5d4 to 0895b5d8 has its CatchHandler @ 0895b5f2 */
                        std::
                        map<int,STEventCharacterInfo_level,std::less<int>,std::allocator<std::pair<int_const,STEventCharacterInfo_level>>>
                        ::insert(local_4c);
                        cVar1 = local_48;
                    /* try { // try from 0895b5eb to 0895b5ef has its CatchHandler @ 0895b607 */
                        std::pair<int_const,STEventCharacterInfo_level>::~pair(local_44);
                    /* try { // try from 0895b622 to 0895b667 has its CatchHandler @ 0895b68b */
                        std::pair<int,STEventCharacterInfo_level>::~pair(local_28);
                        if (cVar1 == '\x01') {
                          unaff_EBX = 1;
                          bVar2 = false;
                        }
                        else {
                          LogManager::logFormat
                                    (0,"../RDARScriptEventCharacterParameter.cpp",
                                     "importEventCharacterParameterScript",0xbd,
                                     "file name(%s) same level exist[%d]",param_1,local_a0);
                          unaff_EBX = 0;
                          bVar2 = false;
                        }
                        goto LAB_0895b6a3;
                      }
                    }
                  }
                }
              }
              goto LAB_0895b123;
            }
            local_9c = ScanInt(&local_b9);
          } while (local_b9 == true);
          bVar2 = true;
LAB_0895b6a3:
                    /* try { // try from 0895b6ac to 0895b6b0 has its CatchHandler @ 0895b6c2 */
          STEventCharacterInfo::~STEventCharacterInfo(&local_d8);
        } while (bVar2);
      }
    }
    else {
      unaff_EBX = 0;
    }
                    /* try { // try from 0895b6e3 to 0895b6e7 has its CatchHandler @ 0895b6ea */
    STEventCharacterInfo_level::~STEventCharacterInfo_level(local_b8);
    std::string::~string((string *)&local_98);
  }
  else {
    unaff_EBX = 0;
  }
  return unaff_EBX;
}

```

---

## load_event_character_list

```asm
// === 0895af18 EventCharacterParameterScript::load_event_character_list  [0x0895af18-0x895b005] ===
 895af18:	55                   	push   %ebp
 895af19:	89 e5                	mov    %esp,%ebp
 895af1b:	83 ec 48             	sub    $0x48,%esp
 895af1e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 895af21:	89 04 24             	mov    %eax,(%esp)
 895af24:	e8 af 8d 95 ff       	call   82b3cd8 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEC1Ev>
 895af29:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 895af2c:	c7 44 24 04 c0 74 4f 	movl   $0x94f74c0,0x4(%esp)
 895af33:	09 
 895af34:	89 04 24             	mov    %eax,(%esp)
 895af37:	e8 b6 b1 78 ff       	call   80e60f2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE5beginEv>
 895af3c:	83 ec 04             	sub    $0x4,%esp
 895af3f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 895af42:	89 45 ec             	mov    %eax,-0x14(%ebp)
 895af45:	e9 81 00 00 00       	jmp    895afcb <_ZN29EventCharacterParameterScript25load_event_character_listEv+0xb3>
 895af4a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 895af4d:	89 04 24             	mov    %eax,(%esp)
 895af50:	e8 63 b2 78 ff       	call   80e61b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEptEv>
 895af55:	83 c0 04             	add    $0x4,%eax
 895af58:	89 04 24             	mov    %eax,(%esp)
 895af5b:	e8 90 b5 da ff       	call   87064f0 <_ZNKSs5c_strEv>
 895af60:	89 45 f4             	mov    %eax,-0xc(%ebp)
 895af63:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 895af67:	0f 84 90 00 00 00    	je     895affd <_ZN29EventCharacterParameterScript25load_event_character_listEv+0xe5>
 895af6d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 895af70:	89 44 24 04          	mov    %eax,0x4(%esp)
 895af74:	8b 45 08             	mov    0x8(%ebp),%eax
 895af77:	89 04 24             	mov    %eax,(%esp)
 895af7a:	e8 87 00 00 00       	call   895b006 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc>
 895af7f:	83 f0 01             	xor    $0x1,%eax
 895af82:	84 c0                	test   %al,%al
 895af84:	74 3a                	je     895afc0 <_ZN29EventCharacterParameterScript25load_event_character_listEv+0xa8>
 895af86:	8b 45 f4             	mov    -0xc(%ebp),%eax
 895af89:	89 44 24 14          	mov    %eax,0x14(%esp)
 895af8d:	c7 44 24 10 04 23 e1 	movl   $0x8e12304,0x10(%esp)
 895af94:	08 
 895af95:	c7 44 24 0c 38 00 00 	movl   $0x38,0xc(%esp)
 895af9c:	00 
 895af9d:	c7 44 24 08 64 28 e1 	movl   $0x8e12864,0x8(%esp)
 895afa4:	08 
 895afa5:	c7 44 24 04 3c 23 e1 	movl   $0x8e1233c,0x4(%esp)
 895afac:	08 
 895afad:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 895afb4:	e8 51 8c 17 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 895afb9:	b8 00 00 00 00       	mov    $0x0,%eax
 895afbe:	eb 43                	jmp    895b003 <_ZN29EventCharacterParameterScript25load_event_character_listEv+0xeb>
 895afc0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 895afc3:	89 04 24             	mov    %eax,(%esp)
 895afc6:	e8 45 b6 78 ff       	call   80e6610 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEppEv>
 895afcb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 895afce:	c7 44 24 04 c0 74 4f 	movl   $0x94f74c0,0x4(%esp)
 895afd5:	09 
 895afd6:	89 04 24             	mov    %eax,(%esp)
 895afd9:	e8 3a b1 78 ff       	call   80e6118 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 895afde:	83 ec 04             	sub    $0x4,%esp
 895afe1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 895afe4:	89 44 24 04          	mov    %eax,0x4(%esp)
 895afe8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 895afeb:	89 04 24             	mov    %eax,(%esp)
 895afee:	e8 4b b1 78 ff       	call   80e613e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEneERKS3_>
 895aff3:	84 c0                	test   %al,%al
 895aff5:	0f 85 4f ff ff ff    	jne    895af4a <_ZN29EventCharacterParameterScript25load_event_character_listEv+0x32>
 895affb:	eb 01                	jmp    895affe <_ZN29EventCharacterParameterScript25load_event_character_listEv+0xe6>
 895affd:	90                   	nop
 895affe:	b8 01 00 00 00       	mov    $0x1,%eax
 895b003:	c9                   	leave
 895b004:	c3                   	ret
 895b005:	90                   	nop

```

```c
// EventCharacterParameterScript::load_event_character_list @ 0x895af18

/* EventCharacterParameterScript::load_event_character_list() */

undefined4 __thiscall
EventCharacterParameterScript::load_event_character_list(EventCharacterParameterScript *this)

{
  char cVar1;
  int iVar2;
  undefined4 local_20 [2];
  undefined4 local_18;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_14 [4];
  char *local_10;
  
  std::_Rb_tree_iterator<std::pair<int_const,std::string>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_18);
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )local_20);
  local_18 = local_20[0];
  while( true ) {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_18,
                       (_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') {
      return 1;
    }
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_18);
    local_10 = (char *)std::string::c_str((string *)(iVar2 + 4));
    if (local_10 == (char *)0x0) break;
    cVar1 = importEventCharacterParameterScript(this,local_10);
    if (cVar1 != '\x01') {
      LogManager::logFormat
                (1,"../RDARScriptEventCharacterParameter.cpp","load_event_character_list",0x38,
                 "EventCharacterParameterScript File Script Error: %s\n",local_10);
      return 0;
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_18);
  }
  return 1;
}

```

