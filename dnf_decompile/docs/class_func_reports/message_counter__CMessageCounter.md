# message_counter__CMessageCounter

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## IncreaseMessage

```asm
// === 0856f9c4 message_counter::CMessageCounter::IncreaseMessage  [0x0856f9c4-0x856fbaf] ===
 856f9c4:	55                   	push   %ebp
 856f9c5:	89 e5                	mov    %esp,%ebp
 856f9c7:	53                   	push   %ebx
 856f9c8:	81 ec b4 00 00 00    	sub    $0xb4,%esp
 856f9ce:	8b 55 10             	mov    0x10(%ebp),%edx
 856f9d1:	8b 45 14             	mov    0x14(%ebp),%eax
 856f9d4:	88 95 74 ff ff ff    	mov    %dl,-0x8c(%ebp)
 856f9da:	66 89 85 70 ff ff ff 	mov    %ax,-0x90(%ebp)
 856f9e1:	8b 45 18             	mov    0x18(%ebp),%eax
 856f9e4:	89 85 68 ff ff ff    	mov    %eax,-0x98(%ebp)
 856f9ea:	8b 45 1c             	mov    0x1c(%ebp),%eax
 856f9ed:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 856f9f3:	0f b7 8d 70 ff ff ff 	movzwl -0x90(%ebp),%ecx
 856f9fa:	0f b6 95 74 ff ff ff 	movzbl -0x8c(%ebp),%edx
 856fa01:	8b 45 0c             	mov    0xc(%ebp),%eax
 856fa04:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 856fa08:	89 54 24 08          	mov    %edx,0x8(%esp)
 856fa0c:	89 44 24 04          	mov    %eax,0x4(%esp)
 856fa10:	8d 45 9c             	lea    -0x64(%ebp),%eax
 856fa13:	89 04 24             	mov    %eax,(%esp)
 856fa16:	e8 e9 07 00 00       	call   8570204 <_ZN15message_counter10MessageKeyC1Eiht>
 856fa1b:	8b 55 08             	mov    0x8(%ebp),%edx
 856fa1e:	8d 45 98             	lea    -0x68(%ebp),%eax
 856fa21:	8d 4d 9c             	lea    -0x64(%ebp),%ecx
 856fa24:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 856fa28:	89 54 24 04          	mov    %edx,0x4(%esp)
 856fa2c:	89 04 24             	mov    %eax,(%esp)
 856fa2f:	e8 bc 08 00 00       	call   85702f0 <_ZNSt3mapIN15message_counter10MessageKeyENS0_12MessageValueESt4lessIS1_ESaISt4pairIKS1_S2_EEE4findERS6_>
 856fa34:	83 ec 04             	sub    $0x4,%esp
 856fa37:	d9 ee                	fldz
 856fa39:	dd 5d e8             	fstpl  -0x18(%ebp)
 856fa3c:	d9 ee                	fldz
 856fa3e:	dd 5d f0             	fstpl  -0x10(%ebp)
 856fa41:	8b 55 08             	mov    0x8(%ebp),%edx
 856fa44:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 856fa47:	89 54 24 04          	mov    %edx,0x4(%esp)
 856fa4b:	89 04 24             	mov    %eax,(%esp)
 856fa4e:	e8 c9 08 00 00       	call   857031c <_ZNSt3mapIN15message_counter10MessageKeyENS0_12MessageValueESt4lessIS1_ESaISt4pairIKS1_S2_EEE3endEv>
 856fa53:	83 ec 04             	sub    $0x4,%esp
 856fa56:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 856fa59:	89 44 24 04          	mov    %eax,0x4(%esp)
 856fa5d:	8d 45 98             	lea    -0x68(%ebp),%eax
 856fa60:	89 04 24             	mov    %eax,(%esp)
 856fa63:	e8 da 08 00 00       	call   8570342 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN15message_counter10MessageKeyENS1_12MessageValueEEEneERKS6_>
 856fa68:	84 c0                	test   %al,%al
 856fa6a:	0f 84 ce 00 00 00    	je     856fb3e <_ZN15message_counter15CMessageCounter15IncreaseMessageEjhtx+0x17a>
 856fa70:	8d 45 98             	lea    -0x68(%ebp),%eax
 856fa73:	89 04 24             	mov    %eax,(%esp)
 856fa76:	e8 db 08 00 00       	call   8570356 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN15message_counter10MessageKeyENS1_12MessageValueEEEptEv>
 856fa7b:	8b 50 08             	mov    0x8(%eax),%edx
 856fa7e:	83 c2 01             	add    $0x1,%edx
 856fa81:	89 50 08             	mov    %edx,0x8(%eax)
 856fa84:	8d 45 98             	lea    -0x68(%ebp),%eax
 856fa87:	89 04 24             	mov    %eax,(%esp)
 856fa8a:	e8 c7 08 00 00       	call   8570356 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN15message_counter10MessageKeyENS1_12MessageValueEEEptEv>
 856fa8f:	89 c1                	mov    %eax,%ecx
 856fa91:	8b 41 0c             	mov    0xc(%ecx),%eax
 856fa94:	8b 51 10             	mov    0x10(%ecx),%edx
 856fa97:	03 85 68 ff ff ff    	add    -0x98(%ebp),%eax
 856fa9d:	13 95 6c ff ff ff    	adc    -0x94(%ebp),%edx
 856faa3:	89 41 0c             	mov    %eax,0xc(%ecx)
 856faa6:	89 51 10             	mov    %edx,0x10(%ecx)
 856faa9:	8d 45 98             	lea    -0x68(%ebp),%eax
 856faac:	89 04 24             	mov    %eax,(%esp)
 856faaf:	e8 a2 08 00 00       	call   8570356 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN15message_counter10MessageKeyENS1_12MessageValueEEEptEv>
 856fab4:	8b 40 08             	mov    0x8(%eax),%eax
 856fab7:	83 e8 01             	sub    $0x1,%eax
 856faba:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 856fac0:	db 85 64 ff ff ff    	fildl  -0x9c(%ebp)
 856fac6:	dd 9d 58 ff ff ff    	fstpl  -0xa8(%ebp)
 856facc:	8d 45 98             	lea    -0x68(%ebp),%eax
 856facf:	89 04 24             	mov    %eax,(%esp)
 856fad2:	e8 7f 08 00 00       	call   8570356 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN15message_counter10MessageKeyENS1_12MessageValueEEEptEv>
 856fad7:	8b 40 08             	mov    0x8(%eax),%eax
 856fada:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 856fae0:	db 85 64 ff ff ff    	fildl  -0x9c(%ebp)
 856fae6:	dc bd 58 ff ff ff    	fdivrl -0xa8(%ebp)
 856faec:	dd 5d e8             	fstpl  -0x18(%ebp)
 856faef:	8d 45 98             	lea    -0x68(%ebp),%eax
 856faf2:	89 04 24             	mov    %eax,(%esp)
 856faf5:	e8 5c 08 00 00       	call   8570356 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN15message_counter10MessageKeyENS1_12MessageValueEEEptEv>
 856fafa:	8b 40 08             	mov    0x8(%eax),%eax
 856fafd:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 856fb03:	db 85 64 ff ff ff    	fildl  -0x9c(%ebp)
 856fb09:	d9 e8                	fld1
 856fb0b:	de f1                	fdivp  %st,%st(1)
 856fb0d:	dd 5d f0             	fstpl  -0x10(%ebp)
 856fb10:	8d 45 98             	lea    -0x68(%ebp),%eax
 856fb13:	89 04 24             	mov    %eax,(%esp)
 856fb16:	e8 3b 08 00 00       	call   8570356 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN15message_counter10MessageKeyENS1_12MessageValueEEEptEv>
 856fb1b:	89 c3                	mov    %eax,%ebx
 856fb1d:	8d 45 98             	lea    -0x68(%ebp),%eax
 856fb20:	89 04 24             	mov    %eax,(%esp)
 856fb23:	e8 2e 08 00 00       	call   8570356 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN15message_counter10MessageKeyENS1_12MessageValueEEEptEv>
 856fb28:	dd 40 14             	fldl   0x14(%eax)
 856fb2b:	dc 4d e8             	fmull  -0x18(%ebp)
 856fb2e:	df ad 68 ff ff ff    	fildll -0x98(%ebp)
 856fb34:	dc 4d f0             	fmull  -0x10(%ebp)
 856fb37:	de c1                	faddp  %st,%st(1)
 856fb39:	dd 5b 14             	fstpl  0x14(%ebx)
 856fb3c:	eb 6c                	jmp    856fbaa <_ZN15message_counter15CMessageCounter15IncreaseMessageEjhtx+0x1e6>
 856fb3e:	c7 45 84 01 00 00 00 	movl   $0x1,-0x7c(%ebp)
 856fb45:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 856fb4b:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 856fb51:	89 45 88             	mov    %eax,-0x78(%ebp)
 856fb54:	89 55 8c             	mov    %edx,-0x74(%ebp)
 856fb57:	df ad 68 ff ff ff    	fildll -0x98(%ebp)
 856fb5d:	dd 5d 90             	fstpl  -0x70(%ebp)
 856fb60:	8d 45 cc             	lea    -0x34(%ebp),%eax
 856fb63:	8d 55 84             	lea    -0x7c(%ebp),%edx
 856fb66:	89 54 24 08          	mov    %edx,0x8(%esp)
 856fb6a:	8d 55 9c             	lea    -0x64(%ebp),%edx
 856fb6d:	89 54 24 04          	mov    %edx,0x4(%esp)
 856fb71:	89 04 24             	mov    %eax,(%esp)
 856fb74:	e8 ea 07 00 00       	call   8570363 <_ZSt9make_pairIRN15message_counter10MessageKeyERNS0_12MessageValueEESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
 856fb79:	83 ec 04             	sub    $0x4,%esp
 856fb7c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 856fb7f:	89 44 24 04          	mov    %eax,0x4(%esp)
 856fb83:	8d 45 b0             	lea    -0x50(%ebp),%eax
 856fb86:	89 04 24             	mov    %eax,(%esp)
 856fb89:	e8 14 08 00 00       	call   85703a2 <_ZNSt4pairIKN15message_counter10MessageKeyENS0_12MessageValueEEC1IS1_S3_EEOS_IT_T0_E>
 856fb8e:	8b 55 08             	mov    0x8(%ebp),%edx
 856fb91:	8d 45 a8             	lea    -0x58(%ebp),%eax
 856fb94:	8d 4d b0             	lea    -0x50(%ebp),%ecx
 856fb97:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 856fb9b:	89 54 24 04          	mov    %edx,0x4(%esp)
 856fb9f:	89 04 24             	mov    %eax,(%esp)
 856fba2:	e8 4f 08 00 00       	call   85703f6 <_ZNSt3mapIN15message_counter10MessageKeyENS0_12MessageValueESt4lessIS1_ESaISt4pairIKS1_S2_EEE6insertERKS7_>
 856fba7:	83 ec 04             	sub    $0x4,%esp
 856fbaa:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 856fbad:	c9                   	leave
 856fbae:	c3                   	ret
 856fbaf:	90                   	nop

```

```c
// message_counter::CMessageCounter::IncreaseMessage @ 0x856f9c4

/* message_counter::CMessageCounter::IncreaseMessage(unsigned int, unsigned char, unsigned short,
   long long) */

void message_counter::CMessageCounter::IncreaseMessage
               (uint param_1,uchar param_2,ushort param_3,longlong param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined3 in_stack_00000009;
  int in_stack_00000018;
  MessageKey local_6c [4];
  MessageKey local_68 [8];
  map<message_counter::MessageKey,message_counter::MessageValue,std::less<message_counter::MessageKey>,std::allocator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>>
  local_60 [4];
  pair local_5c [8];
  pair<message_counter::MessageKey_const,message_counter::MessageValue> local_54 [28];
  MessageKey local_38 [28];
  double local_1c;
  double local_14;
  
  MessageKey::MessageKey(local_68,_param_2,(uchar)param_3,(ushort)param_4);
  std::
  map<message_counter::MessageKey,message_counter::MessageValue,std::less<message_counter::MessageKey>,std::allocator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>>
  ::find(local_6c);
  local_1c = 0.0;
  local_14 = 0.0;
  std::
  map<message_counter::MessageKey,message_counter::MessageValue,std::less<message_counter::MessageKey>,std::allocator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>>
  ::end(local_60);
  cVar2 = std::
          _Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
          ::operator!=((_Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                        *)local_6c,(_Rb_tree_iterator *)local_60);
  if (cVar2 == '\0') {
    std::make_pair<message_counter::MessageKey&,message_counter::MessageValue&>
              (local_38,(MessageValue *)local_68);
    std::pair<message_counter::MessageKey_const,message_counter::MessageValue>::
    pair<message_counter::MessageKey,message_counter::MessageValue>(local_54,local_38);
    std::
    map<message_counter::MessageKey,message_counter::MessageValue,std::less<message_counter::MessageKey>,std::allocator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>>
    ::insert(local_5c);
  }
  else {
    iVar3 = std::
            _Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
            ::operator->((_Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                          *)local_6c);
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    iVar3 = std::
            _Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
            ::operator->((_Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                          *)local_6c);
    uVar1 = *(uint *)(iVar3 + 0xc);
    *(uint *)(iVar3 + 0xc) = uVar1 + param_4._4_4_;
    *(uint *)(iVar3 + 0x10) =
         *(int *)(iVar3 + 0x10) + in_stack_00000018 + (uint)CARRY4(uVar1,param_4._4_4_);
    iVar3 = std::
            _Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
            ::operator->((_Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                          *)local_6c);
    iVar3 = *(int *)(iVar3 + 8);
    iVar4 = std::
            _Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
            ::operator->((_Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                          *)local_6c);
    local_1c = (double)(iVar3 + -1) / (double)*(int *)(iVar4 + 8);
    iVar3 = std::
            _Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
            ::operator->((_Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                          *)local_6c);
    local_14 = 1.0 / (double)*(int *)(iVar3 + 8);
    iVar3 = std::
            _Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
            ::operator->((_Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                          *)local_6c);
    iVar4 = std::
            _Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
            ::operator->((_Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                          *)local_6c);
    *(double *)(iVar3 + 0x14) =
         (double)CONCAT44(in_stack_00000018,param_4._4_4_) * local_14 +
         *(double *)(iVar4 + 0x14) * local_1c;
  }
  return;
}

```

---

## WriteLog

```asm
// === 0856fbb0 message_counter::CMessageCounter::WriteLog  [0x0856fbb0-0x856ff23] ===
 856fbb0:	55                   	push   %ebp
 856fbb1:	89 e5                	mov    %esp,%ebp
 856fbb3:	56                   	push   %esi
 856fbb4:	53                   	push   %ebx
 856fbb5:	83 ec 40             	sub    $0x40,%esp
 856fbb8:	8b 45 08             	mov    0x8(%ebp),%eax
 856fbbb:	89 04 24             	mov    %eax,(%esp)
 856fbbe:	e8 5f 08 00 00       	call   8570422 <_ZNKSt3mapIN15message_counter10MessageKeyENS0_12MessageValueESt4lessIS1_ESaISt4pairIKS1_S2_EEE5emptyEv>
 856fbc3:	84 c0                	test   %al,%al
 856fbc5:	0f 85 4e 03 00 00    	jne    856ff19 <_ZN15message_counter15CMessageCounter8WriteLogEv+0x369>
 856fbcb:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 856fbd0:	c7 44 24 08 63 00 00 	movl   $0x63,0x8(%esp)
 856fbd7:	00 
 856fbd8:	c7 44 24 04 a0 3f ca 	movl   $0x8ca3fa0,0x4(%esp)
 856fbdf:	08 
 856fbe0:	89 04 24             	mov    %eax,(%esp)
 856fbe3:	e8 9e fe d1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 856fbe8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 856fbef:	00 
 856fbf0:	89 44 24 04          	mov    %eax,0x4(%esp)
 856fbf4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 856fbf7:	89 04 24             	mov    %eax,(%esp)
 856fbfa:	e8 27 90 b5 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 856fbff:	8d 45 e0             	lea    -0x20(%ebp),%eax
 856fc02:	89 04 24             	mov    %eax,(%esp)
 856fc05:	e8 3c 90 b5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 856fc0a:	c7 44 24 04 6c 02 00 	movl   $0x26c,0x4(%esp)
 856fc11:	00 
 856fc12:	89 04 24             	mov    %eax,(%esp)
 856fc15:	e8 3c 90 b5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 856fc1a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 856fc1d:	89 04 24             	mov    %eax,(%esp)
 856fc20:	e8 21 90 b5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 856fc25:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 856fc2c:	ff 
 856fc2d:	89 04 24             	mov    %eax,(%esp)
 856fc30:	e8 21 90 b5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 856fc35:	8d 45 e0             	lea    -0x20(%ebp),%eax
 856fc38:	89 04 24             	mov    %eax,(%esp)
 856fc3b:	e8 0e 90 b5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 856fc40:	89 04 24             	mov    %eax,(%esp)
 856fc43:	e8 ee 07 00 00       	call   8570436 <_ZN12CStreamGuard11GetInBufferI24SIG_INSERT_RESPONSE_TIMEEEPT_v>
 856fc48:	89 45 ec             	mov    %eax,-0x14(%ebp)
 856fc4b:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 856fc52:	e8 47 c0 b5 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 856fc57:	89 45 f0             	mov    %eax,-0x10(%ebp)
 856fc5a:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 856fc5d:	ba b5 81 4e 1b       	mov    $0x1b4e81b5,%edx
 856fc62:	89 c8                	mov    %ecx,%eax
 856fc64:	f7 ea                	imul   %edx
 856fc66:	c1 fa 06             	sar    $0x6,%edx
 856fc69:	89 c8                	mov    %ecx,%eax
 856fc6b:	c1 f8 1f             	sar    $0x1f,%eax
 856fc6e:	89 d3                	mov    %edx,%ebx
 856fc70:	29 c3                	sub    %eax,%ebx
 856fc72:	89 d8                	mov    %ebx,%eax
 856fc74:	69 c0 58 02 00 00    	imul   $0x258,%eax,%eax
 856fc7a:	89 ca                	mov    %ecx,%edx
 856fc7c:	29 c2                	sub    %eax,%edx
 856fc7e:	89 d0                	mov    %edx,%eax
 856fc80:	89 45 f4             	mov    %eax,-0xc(%ebp)
 856fc83:	8b 45 f4             	mov    -0xc(%ebp),%eax
 856fc86:	29 45 f0             	sub    %eax,-0x10(%ebp)
 856fc89:	8b 45 ec             	mov    -0x14(%ebp),%eax
 856fc8c:	8b 55 f0             	mov    -0x10(%ebp),%edx
 856fc8f:	89 10                	mov    %edx,(%eax)
 856fc91:	8b 45 ec             	mov    -0x14(%ebp),%eax
 856fc94:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 856fc9b:	8b 55 08             	mov    0x8(%ebp),%edx
 856fc9e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 856fca1:	89 54 24 04          	mov    %edx,0x4(%esp)
 856fca5:	89 04 24             	mov    %eax,(%esp)
 856fca8:	e8 9f 07 00 00       	call   857044c <_ZNSt3mapIN15message_counter10MessageKeyENS0_12MessageValueESt4lessIS1_ESaISt4pairIKS1_S2_EEE5beginEv>
 856fcad:	83 ec 04             	sub    $0x4,%esp
 856fcb0:	e9 c4 01 00 00       	jmp    856fe79 <_ZN15message_counter15CMessageCounter8WriteLogEv+0x2c9>
 856fcb5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 856fcb8:	8b 58 04             	mov    0x4(%eax),%ebx
 856fcbb:	8d 45 dc             	lea    -0x24(%ebp),%eax
 856fcbe:	89 04 24             	mov    %eax,(%esp)
 856fcc1:	e8 90 06 00 00       	call   8570356 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN15message_counter10MessageKeyENS1_12MessageValueEEEptEv>
 856fcc6:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 856fcca:	0f b7 f0             	movzwl %ax,%esi
 856fccd:	8d 45 dc             	lea    -0x24(%ebp),%eax
 856fcd0:	89 04 24             	mov    %eax,(%esp)
 856fcd3:	e8 7e 06 00 00       	call   8570356 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN15message_counter10MessageKeyENS1_12MessageValueEEEptEv>
 856fcd8:	8b 00                	mov    (%eax),%eax
 856fcda:	85 c0                	test   %eax,%eax
 856fcdc:	74 18                	je     856fcf6 <_ZN15message_counter15CMessageCounter8WriteLogEv+0x146>
 856fcde:	8d 45 dc             	lea    -0x24(%ebp),%eax
 856fce1:	89 04 24             	mov    %eax,(%esp)
 856fce4:	e8 6d 06 00 00       	call   8570356 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN15message_counter10MessageKeyENS1_12MessageValueEEEptEv>
 856fce9:	8b 10                	mov    (%eax),%edx
 856fceb:	8b 45 08             	mov    0x8(%ebp),%eax
 856fcee:	8b 40 18             	mov    0x18(%eax),%eax
 856fcf1:	8d 04 02             	lea    (%edx,%eax,1),%eax
 856fcf4:	eb 05                	jmp    856fcfb <_ZN15message_counter15CMessageCounter8WriteLogEv+0x14b>
 856fcf6:	b8 00 00 00 00       	mov    $0x0,%eax
 856fcfb:	8d 14 06             	lea    (%esi,%eax,1),%edx
 856fcfe:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 856fd01:	89 d8                	mov    %ebx,%eax
 856fd03:	c1 e0 02             	shl    $0x2,%eax
 856fd06:	01 d8                	add    %ebx,%eax
 856fd08:	c1 e0 02             	shl    $0x2,%eax
 856fd0b:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 856fd0e:	83 c0 08             	add    $0x8,%eax
 856fd11:	89 10                	mov    %edx,(%eax)
 856fd13:	8b 45 ec             	mov    -0x14(%ebp),%eax
 856fd16:	8b 58 04             	mov    0x4(%eax),%ebx
 856fd19:	8d 45 dc             	lea    -0x24(%ebp),%eax
 856fd1c:	89 04 24             	mov    %eax,(%esp)
 856fd1f:	e8 32 06 00 00       	call   8570356 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN15message_counter10MessageKeyENS1_12MessageValueEEEptEv>
 856fd24:	8b 50 08             	mov    0x8(%eax),%edx
 856fd27:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 856fd2a:	89 d8                	mov    %ebx,%eax
 856fd2c:	c1 e0 02             	shl    $0x2,%eax
 856fd2f:	01 d8                	add    %ebx,%eax
 856fd31:	c1 e0 02             	shl    $0x2,%eax
 856fd34:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 856fd37:	83 c0 0c             	add    $0xc,%eax
 856fd3a:	89 10                	mov    %edx,(%eax)
 856fd3c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 856fd3f:	8b 58 04             	mov    0x4(%eax),%ebx
 856fd42:	8d 45 dc             	lea    -0x24(%ebp),%eax
 856fd45:	89 04 24             	mov    %eax,(%esp)
 856fd48:	e8 09 06 00 00       	call   8570356 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN15message_counter10MessageKeyENS1_12MessageValueEEEptEv>
 856fd4d:	8b 50 10             	mov    0x10(%eax),%edx
 856fd50:	8b 40 0c             	mov    0xc(%eax),%eax
 856fd53:	8b 75 ec             	mov    -0x14(%ebp),%esi
 856fd56:	89 d9                	mov    %ebx,%ecx
 856fd58:	c1 e1 02             	shl    $0x2,%ecx
 856fd5b:	01 d9                	add    %ebx,%ecx
 856fd5d:	c1 e1 02             	shl    $0x2,%ecx
 856fd60:	89 44 31 10          	mov    %eax,0x10(%ecx,%esi,1)
 856fd64:	89 54 31 14          	mov    %edx,0x14(%ecx,%esi,1)
 856fd68:	8b 45 ec             	mov    -0x14(%ebp),%eax
 856fd6b:	8b 58 04             	mov    0x4(%eax),%ebx
 856fd6e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 856fd71:	89 04 24             	mov    %eax,(%esp)
 856fd74:	e8 dd 05 00 00       	call   8570356 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN15message_counter10MessageKeyENS1_12MessageValueEEEptEv>
 856fd79:	dd 40 14             	fldl   0x14(%eax)
 856fd7c:	d9 7d d6             	fnstcw -0x2a(%ebp)
 856fd7f:	0f b7 45 d6          	movzwl -0x2a(%ebp),%eax
 856fd83:	b4 0c                	mov    $0xc,%ah
 856fd85:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 856fd89:	d9 6d d4             	fldcw  -0x2c(%ebp)
 856fd8c:	db 5d d0             	fistpl -0x30(%ebp)
 856fd8f:	d9 6d d6             	fldcw  -0x2a(%ebp)
 856fd92:	8b 55 d0             	mov    -0x30(%ebp),%edx
 856fd95:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 856fd98:	89 d8                	mov    %ebx,%eax
 856fd9a:	c1 e0 02             	shl    $0x2,%eax
 856fd9d:	01 d8                	add    %ebx,%eax
 856fd9f:	c1 e0 02             	shl    $0x2,%eax
 856fda2:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 856fda5:	83 c0 18             	add    $0x18,%eax
 856fda8:	89 10                	mov    %edx,(%eax)
 856fdaa:	8b 45 ec             	mov    -0x14(%ebp),%eax
 856fdad:	8b 40 04             	mov    0x4(%eax),%eax
 856fdb0:	8d 50 01             	lea    0x1(%eax),%edx
 856fdb3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 856fdb6:	89 50 04             	mov    %edx,0x4(%eax)
 856fdb9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 856fdbc:	8b 40 04             	mov    0x4(%eax),%eax
 856fdbf:	83 f8 64             	cmp    $0x64,%eax
 856fdc2:	0f 85 a6 00 00 00    	jne    856fe6e <_ZN15message_counter15CMessageCounter8WriteLogEv+0x2be>
 856fdc8:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 856fdcd:	8d 55 e0             	lea    -0x20(%ebp),%edx
 856fdd0:	89 54 24 08          	mov    %edx,0x8(%esp)
 856fdd4:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 856fddb:	00 
 856fddc:	89 04 24             	mov    %eax,(%esp)
 856fddf:	e8 fa 11 00 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 856fde4:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 856fde9:	c7 44 24 08 7b 00 00 	movl   $0x7b,0x8(%esp)
 856fdf0:	00 
 856fdf1:	c7 44 24 04 a0 3f ca 	movl   $0x8ca3fa0,0x4(%esp)
 856fdf8:	08 
 856fdf9:	89 04 24             	mov    %eax,(%esp)
 856fdfc:	e8 85 fc d1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 856fe01:	89 44 24 04          	mov    %eax,0x4(%esp)
 856fe05:	8d 45 e0             	lea    -0x20(%ebp),%eax
 856fe08:	89 04 24             	mov    %eax,(%esp)
 856fe0b:	e8 34 e8 b6 ff       	call   80de644 <_ZN12CStreamGuard3SetEP6Stream>
 856fe10:	8d 45 e0             	lea    -0x20(%ebp),%eax
 856fe13:	89 04 24             	mov    %eax,(%esp)
 856fe16:	e8 2b 8e b5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 856fe1b:	c7 44 24 04 6c 02 00 	movl   $0x26c,0x4(%esp)
 856fe22:	00 
 856fe23:	89 04 24             	mov    %eax,(%esp)
 856fe26:	e8 2b 8e b5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 856fe2b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 856fe2e:	89 04 24             	mov    %eax,(%esp)
 856fe31:	e8 10 8e b5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 856fe36:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 856fe3d:	ff 
 856fe3e:	89 04 24             	mov    %eax,(%esp)
 856fe41:	e8 10 8e b5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 856fe46:	8d 45 e0             	lea    -0x20(%ebp),%eax
 856fe49:	89 04 24             	mov    %eax,(%esp)
 856fe4c:	e8 fd 8d b5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 856fe51:	89 04 24             	mov    %eax,(%esp)
 856fe54:	e8 dd 05 00 00       	call   8570436 <_ZN12CStreamGuard11GetInBufferI24SIG_INSERT_RESPONSE_TIMEEEPT_v>
 856fe59:	89 45 ec             	mov    %eax,-0x14(%ebp)
 856fe5c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 856fe5f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 856fe62:	89 10                	mov    %edx,(%eax)
 856fe64:	8b 45 ec             	mov    -0x14(%ebp),%eax
 856fe67:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 856fe6e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 856fe71:	89 04 24             	mov    %eax,(%esp)
 856fe74:	e8 f9 05 00 00       	call   8570472 <_ZNSt17_Rb_tree_iteratorISt4pairIKN15message_counter10MessageKeyENS1_12MessageValueEEEppEv>
 856fe79:	8b 55 08             	mov    0x8(%ebp),%edx
 856fe7c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 856fe7f:	89 54 24 04          	mov    %edx,0x4(%esp)
 856fe83:	89 04 24             	mov    %eax,(%esp)
 856fe86:	e8 91 04 00 00       	call   857031c <_ZNSt3mapIN15message_counter10MessageKeyENS0_12MessageValueESt4lessIS1_ESaISt4pairIKS1_S2_EEE3endEv>
 856fe8b:	83 ec 04             	sub    $0x4,%esp
 856fe8e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 856fe91:	89 44 24 04          	mov    %eax,0x4(%esp)
 856fe95:	8d 45 dc             	lea    -0x24(%ebp),%eax
 856fe98:	89 04 24             	mov    %eax,(%esp)
 856fe9b:	e8 a2 04 00 00       	call   8570342 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN15message_counter10MessageKeyENS1_12MessageValueEEEneERKS6_>
 856fea0:	84 c0                	test   %al,%al
 856fea2:	0f 85 0d fe ff ff    	jne    856fcb5 <_ZN15message_counter15CMessageCounter8WriteLogEv+0x105>
 856fea8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 856feab:	8b 40 04             	mov    0x4(%eax),%eax
 856feae:	85 c0                	test   %eax,%eax
 856feb0:	74 1e                	je     856fed0 <_ZN15message_counter15CMessageCounter8WriteLogEv+0x320>
 856feb2:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 856feb7:	8d 55 e0             	lea    -0x20(%ebp),%edx
 856feba:	89 54 24 08          	mov    %edx,0x8(%esp)
 856febe:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 856fec5:	00 
 856fec6:	89 04 24             	mov    %eax,(%esp)
 856fec9:	e8 10 11 00 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 856fece:	eb 14                	jmp    856fee4 <_ZN15message_counter15CMessageCounter8WriteLogEv+0x334>
 856fed0:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 856fed5:	8d 55 e0             	lea    -0x20(%ebp),%edx
 856fed8:	89 54 24 04          	mov    %edx,0x4(%esp)
 856fedc:	89 04 24             	mov    %eax,(%esp)
 856fedf:	e8 9c 11 b9 ff       	call   8101080 <_ZN10StreamPool4FreeER12CStreamGuard>
 856fee4:	8b 45 08             	mov    0x8(%ebp),%eax
 856fee7:	89 04 24             	mov    %eax,(%esp)
 856feea:	e8 a1 05 00 00       	call   8570490 <_ZNSt3mapIN15message_counter10MessageKeyENS0_12MessageValueESt4lessIS1_ESaISt4pairIKS1_S2_EEE5clearEv>
 856feef:	eb 1b                	jmp    856ff0c <_ZN15message_counter15CMessageCounter8WriteLogEv+0x35c>
 856fef1:	89 d3                	mov    %edx,%ebx
 856fef3:	89 c6                	mov    %eax,%esi
 856fef5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 856fef8:	89 04 24             	mov    %eax,(%esp)
 856fefb:	e8 d2 c9 0a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 856ff00:	89 f0                	mov    %esi,%eax
 856ff02:	89 da                	mov    %ebx,%edx
 856ff04:	89 04 24             	mov    %eax,(%esp)
 856ff07:	e8 44 38 57 00       	call   8ae3750 <_Unwind_Resume>
 856ff0c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 856ff0f:	89 04 24             	mov    %eax,(%esp)
 856ff12:	e8 bb c9 0a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 856ff17:	eb 01                	jmp    856ff1a <_ZN15message_counter15CMessageCounter8WriteLogEv+0x36a>
 856ff19:	90                   	nop
 856ff1a:	8d 65 f8             	lea    -0x8(%ebp),%esp
 856ff1d:	83 c4 00             	add    $0x0,%esp
 856ff20:	5b                   	pop    %ebx
 856ff21:	5e                   	pop    %esi
 856ff22:	5d                   	pop    %ebp
 856ff23:	c3                   	ret

```

```c
// message_counter::CMessageCounter::WriteLog @ 0x856fbb0

/* message_counter::CMessageCounter::WriteLog() */

void __thiscall message_counter::CMessageCounter::WriteLog(CMessageCounter *this)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  Stream *pSVar5;
  CStreamGuard *pCVar6;
  int iVar7;
  int *piVar8;
  map<message_counter::MessageKey,message_counter::MessageValue,std::less<message_counter::MessageKey>,std::allocator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>>
  local_28 [4];
  CStreamGuard local_24 [8];
  map<message_counter::MessageKey,message_counter::MessageValue,std::less<message_counter::MessageKey>,std::allocator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>>
  local_1c [4];
  SIG_INSERT_RESPONSE_TIME *local_18;
  int local_14;
  int local_10;
  
  cVar4 = std::
          map<message_counter::MessageKey,message_counter::MessageValue,std::less<message_counter::MessageKey>,std::allocator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>>
          ::empty((map<message_counter::MessageKey,message_counter::MessageValue,std::less<message_counter::MessageKey>,std::allocator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>>
                   *)this);
  if (cVar4 == '\0') {
    pSVar5 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"MessageCounter.cpp",99);
    CStreamGuard::CStreamGuard(local_24,pSVar5,false);
    pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 0856fc15 to 0856feee has its CatchHandler @ 0856fef1 */
    CStreamGuard::operator<<(pCVar6,0x26c);
    pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar6,-1);
    pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_24);
    local_18 = CStreamGuard::GetInBuffer<SIG_INSERT_RESPONSE_TIME>(pCVar6);
    local_14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    local_10 = local_14 % 600;
    local_14 = local_14 - local_10;
    *(int *)local_18 = local_14;
    *(int *)(local_18 + 4) = 0;
    std::
    map<message_counter::MessageKey,message_counter::MessageValue,std::less<message_counter::MessageKey>,std::allocator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>>
    ::begin(local_28);
    while( true ) {
      std::
      map<message_counter::MessageKey,message_counter::MessageValue,std::less<message_counter::MessageKey>,std::allocator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>>
      ::end(local_1c);
      cVar4 = std::
              _Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
              ::operator!=((_Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                            *)local_28,(_Rb_tree_iterator *)local_1c);
      if (cVar4 == '\0') break;
      iVar2 = *(int *)(local_18 + 4);
      iVar7 = std::
              _Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
              ::operator->((_Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                            *)local_28);
      uVar1 = *(ushort *)(iVar7 + 6);
      piVar8 = (int *)std::
                      _Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                      ::operator->((_Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                                    *)local_28);
      if (*piVar8 == 0) {
        iVar7 = 0;
      }
      else {
        piVar8 = (int *)std::
                        _Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                        ::operator->((_Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                                      *)local_28);
        iVar7 = *piVar8 + *(int *)(this + 0x18);
      }
      *(uint *)(local_18 + iVar2 * 0x14 + 8) = (uint)uVar1 + iVar7;
      iVar2 = *(int *)(local_18 + 4);
      iVar7 = std::
              _Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
              ::operator->((_Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                            *)local_28);
      *(undefined4 *)(local_18 + iVar2 * 0x14 + 0xc) = *(undefined4 *)(iVar7 + 8);
      iVar2 = *(int *)(local_18 + 4);
      iVar7 = std::
              _Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
              ::operator->((_Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                            *)local_28);
      uVar3 = *(undefined4 *)(iVar7 + 0x10);
      *(undefined4 *)(local_18 + iVar2 * 0x14 + 0x10) = *(undefined4 *)(iVar7 + 0xc);
      *(undefined4 *)(local_18 + iVar2 * 0x14 + 0x14) = uVar3;
      iVar2 = *(int *)(local_18 + 4);
      iVar7 = std::
              _Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
              ::operator->((_Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                            *)local_28);
      *(int *)(local_18 + iVar2 * 0x14 + 0x18) = (int)ROUND(*(double *)(iVar7 + 0x14));
      *(int *)(local_18 + 4) = *(int *)(local_18 + 4) + 1;
      if (*(int *)(local_18 + 4) == 100) {
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_24);
        pSVar5 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"MessageCounter.cpp",0x7b);
        CStreamGuard::Set(local_24,pSVar5);
        pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_24);
        CStreamGuard::operator<<(pCVar6,0x26c);
        pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_24);
        CStreamGuard::operator<<(pCVar6,-1);
        pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_24);
        local_18 = CStreamGuard::GetInBuffer<SIG_INSERT_RESPONSE_TIME>(pCVar6);
        *(int *)local_18 = local_14;
        *(undefined4 *)(local_18 + 4) = 0;
      }
      std::
      _Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
      ::operator++((_Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                    *)local_28);
    }
    if (*(int *)(local_18 + 4) == 0) {
      StreamPool::Free(GlobalData::s_stream_pool,local_24);
    }
    else {
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_24);
    }
    std::
    map<message_counter::MessageKey,message_counter::MessageValue,std::less<message_counter::MessageKey>,std::allocator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>>
    ::clear((map<message_counter::MessageKey,message_counter::MessageValue,std::less<message_counter::MessageKey>,std::allocator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>>
             *)this);
    CStreamGuard::~CStreamGuard(local_24);
  }
  return;
}

```

