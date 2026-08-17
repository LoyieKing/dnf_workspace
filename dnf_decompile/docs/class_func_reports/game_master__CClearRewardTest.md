# game_master__CClearRewardTest

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## execute

```asm
// === 084b2a08 game_master::CClearRewardTest::execute  [0x084b2a08-0x84b3397] ===
 84b2a08:	55                   	push   %ebp
 84b2a09:	89 e5                	mov    %esp,%ebp
 84b2a0b:	57                   	push   %edi
 84b2a0c:	56                   	push   %esi
 84b2a0d:	53                   	push   %ebx
 84b2a0e:	81 ec 7c 05 00 00    	sub    $0x57c,%esp
 84b2a14:	8b 45 08             	mov    0x8(%ebp),%eax
 84b2a17:	89 04 24             	mov    %eax,(%esp)
 84b2a1a:	e8 9b 15 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b2a1f:	89 45 c0             	mov    %eax,-0x40(%ebp)
 84b2a22:	83 7d c0 00          	cmpl   $0x0,-0x40(%ebp)
 84b2a26:	0f 84 53 09 00 00    	je     84b337f <_ZN11game_master16CClearRewardTest7executeEv+0x977>
 84b2a2c:	8b 45 c0             	mov    -0x40(%ebp),%eax
 84b2a2f:	89 04 24             	mov    %eax,(%esp)
 84b2a32:	e8 fb d9 c6 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84b2a37:	85 c0                	test   %eax,%eax
 84b2a39:	0f 94 c0             	sete   %al
 84b2a3c:	84 c0                	test   %al,%al
 84b2a3e:	0f 85 3e 09 00 00    	jne    84b3382 <_ZN11game_master16CClearRewardTest7executeEv+0x97a>
 84b2a44:	8b 45 c0             	mov    -0x40(%ebp),%eax
 84b2a47:	89 04 24             	mov    %eax,(%esp)
 84b2a4a:	e8 3d 79 c2 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84b2a4f:	83 f8 05             	cmp    $0x5,%eax
 84b2a52:	0f 95 c0             	setne  %al
 84b2a55:	84 c0                	test   %al,%al
 84b2a57:	0f 85 28 09 00 00    	jne    84b3385 <_ZN11game_master16CClearRewardTest7executeEv+0x97d>
 84b2a5d:	8b 45 c0             	mov    -0x40(%ebp),%eax
 84b2a60:	89 04 24             	mov    %eax,(%esp)
 84b2a63:	e8 e4 26 1a 00       	call   865514c <_ZN5CUser8GetPartyEv>
 84b2a68:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 84b2a6b:	83 7d c4 00          	cmpl   $0x0,-0x3c(%ebp)
 84b2a6f:	0f 84 13 09 00 00    	je     84b3388 <_ZN11game_master16CClearRewardTest7executeEv+0x980>
 84b2a75:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 84b2a78:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 84b2a7e:	85 c0                	test   %eax,%eax
 84b2a80:	0f 84 05 09 00 00    	je     84b338b <_ZN11game_master16CClearRewardTest7executeEv+0x983>
 84b2a86:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 84b2a89:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 84b2a8f:	89 45 c8             	mov    %eax,-0x38(%ebp)
 84b2a92:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 84b2a95:	05 24 0b 00 00       	add    $0xb24,%eax
 84b2a9a:	89 04 24             	mov    %eax,(%esp)
 84b2a9d:	e8 7a 6d c4 ff       	call   80f981c <_ZN13CBattle_Field16get_dungeon_diffEv>
 84b2aa2:	88 45 cf             	mov    %al,-0x31(%ebp)
 84b2aa5:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 84b2aac:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84b2aaf:	89 04 24             	mov    %eax,(%esp)
 84b2ab2:	e8 81 8e db ff       	call   826b938 <_ZNK8CDungeon22get_dimension_possibleEv>
 84b2ab7:	84 c0                	test   %al,%al
 84b2ab9:	0f 9f c0             	setg   %al
 84b2abc:	84 c0                	test   %al,%al
 84b2abe:	74 10                	je     84b2ad0 <_ZN11game_master16CClearRewardTest7executeEv+0xc8>
 84b2ac0:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 84b2ac3:	89 04 24             	mov    %eax,(%esp)
 84b2ac6:	e8 09 cc 0e 00       	call   859f6d4 <_ZN6CParty25getStandardDimensionLevelEv>
 84b2acb:	89 45 d0             	mov    %eax,-0x30(%ebp)
 84b2ace:	eb 0e                	jmp    84b2ade <_ZN11game_master16CClearRewardTest7executeEv+0xd6>
 84b2ad0:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84b2ad3:	89 04 24             	mov    %eax,(%esp)
 84b2ad6:	e8 35 6d c4 ff       	call   80f9810 <_ZNK8CDungeon18get_standard_levelEv>
 84b2adb:	89 45 d0             	mov    %eax,-0x30(%ebp)
 84b2ade:	8d 85 a4 fe ff ff    	lea    -0x15c(%ebp),%eax
 84b2ae4:	89 04 24             	mov    %eax,(%esp)
 84b2ae7:	e8 1a 7c c9 ff       	call   814a706 <_ZN8WongWork19stGenerateRefData_tC1Ev>
 84b2aec:	0f b6 45 cf          	movzbl -0x31(%ebp),%eax
 84b2af0:	88 85 d9 fe ff ff    	mov    %al,-0x127(%ebp)
 84b2af6:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84b2af9:	88 85 d8 fe ff ff    	mov    %al,-0x128(%ebp)
 84b2aff:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84b2b02:	89 85 e4 fe ff ff    	mov    %eax,-0x11c(%ebp)
 84b2b08:	b8 00 00 80 3f       	mov    $0x3f800000,%eax
 84b2b0d:	89 85 dc fe ff ff    	mov    %eax,-0x124(%ebp)
 84b2b13:	c7 85 e0 fe ff ff 00 	movl   $0x0,-0x120(%ebp)
 84b2b1a:	00 00 00 
 84b2b1d:	e8 79 96 c1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84b2b22:	89 04 24             	mov    %eax,(%esp)
 84b2b25:	e8 c0 7b c9 ff       	call   814a6ea <_ZN12CDataManager16getItemGeneratorEv>
 84b2b2a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84b2b31:	00 
 84b2b32:	89 04 24             	mov    %eax,(%esp)
 84b2b35:	e8 96 7c c9 ff       	call   814a7d0 <_ZN8WongWork17CItemGeneratorMgr12getGeneratorENS0_15eGenerateType_tE>
 84b2b3a:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84b2b3d:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 84b2b43:	89 04 24             	mov    %eax,(%esp)
 84b2b46:	e8 bb 7f c9 ff       	call   814ab06 <_ZN8WongWork18stGenerateResult_tC1Ev>
 84b2b4b:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 84b2b52:	eb 2a                	jmp    84b2b7e <_ZN11game_master16CClearRewardTest7executeEv+0x176>
 84b2b54:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84b2b57:	8b 00                	mov    (%eax),%eax
 84b2b59:	83 c0 08             	add    $0x8,%eax
 84b2b5c:	8b 10                	mov    (%eax),%edx
 84b2b5e:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 84b2b64:	89 44 24 08          	mov    %eax,0x8(%esp)
 84b2b68:	8d 85 a4 fe ff ff    	lea    -0x15c(%ebp),%eax
 84b2b6e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b2b72:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84b2b75:	89 04 24             	mov    %eax,(%esp)
 84b2b78:	ff d2                	call   *%edx
 84b2b7a:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 84b2b7e:	81 7d d8 9f 86 01 00 	cmpl   $0x1869f,-0x28(%ebp)
 84b2b85:	0f 9e c0             	setle  %al
 84b2b88:	84 c0                	test   %al,%al
 84b2b8a:	75 c8                	jne    84b2b54 <_ZN11game_master16CClearRewardTest7executeEv+0x14c>
 84b2b8c:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 84b2b92:	89 04 24             	mov    %eax,(%esp)
 84b2b95:	e8 ca 40 c1 ff       	call   80c6c64 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 84b2b9a:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 84b2ba0:	89 04 24             	mov    %eax,(%esp)
 84b2ba3:	e8 36 41 c1 ff       	call   80c6cde <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 84b2ba8:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 84b2bae:	8d 95 ec fe ff ff    	lea    -0x114(%ebp),%edx
 84b2bb4:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b2bb8:	89 04 24             	mov    %eax,(%esp)
 84b2bbb:	e8 44 81 c9 ff       	call   814ad04 <_ZNSt6vectorI10Inven_ItemSaIS0_EE5beginEv>
 84b2bc0:	83 ec 04             	sub    $0x4,%esp
 84b2bc3:	e9 26 01 00 00       	jmp    84b2cee <_ZN11game_master16CClearRewardTest7executeEv+0x2e6>
 84b2bc8:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 84b2bce:	89 04 24             	mov    %eax,(%esp)
 84b2bd1:	e8 b0 4e d8 ff       	call   8237a86 <_ZNK9__gnu_cxx17__normal_iteratorIP10Inven_ItemSt6vectorIS1_SaIS1_EEEptEv>
 84b2bd6:	8b 40 02             	mov    0x2(%eax),%eax
 84b2bd9:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 84b2bdf:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 84b2be5:	8d 95 54 ff ff ff    	lea    -0xac(%ebp),%edx
 84b2beb:	89 54 24 08          	mov    %edx,0x8(%esp)
 84b2bef:	8d 95 38 ff ff ff    	lea    -0xc8(%ebp),%edx
 84b2bf5:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b2bf9:	89 04 24             	mov    %eax,(%esp)
 84b2bfc:	e8 ed a6 c1 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 84b2c01:	83 ec 04             	sub    $0x4,%esp
 84b2c04:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 84b2c0a:	8d 95 38 ff ff ff    	lea    -0xc8(%ebp),%edx
 84b2c10:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b2c14:	89 04 24             	mov    %eax,(%esp)
 84b2c17:	e8 fe a6 c1 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 84b2c1c:	83 ec 04             	sub    $0x4,%esp
 84b2c1f:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 84b2c25:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b2c29:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 84b2c2f:	89 04 24             	mov    %eax,(%esp)
 84b2c32:	e8 b9 4c c1 ff       	call   80c78f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEeqERKS3_>
 84b2c37:	84 c0                	test   %al,%al
 84b2c39:	74 79                	je     84b2cb4 <_ZN11game_master16CClearRewardTest7executeEv+0x2ac>
 84b2c3b:	c7 85 74 ff ff ff 01 	movl   $0x1,-0x8c(%ebp)
 84b2c42:	00 00 00 
 84b2c45:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 84b2c4b:	89 04 24             	mov    %eax,(%esp)
 84b2c4e:	e8 33 4e d8 ff       	call   8237a86 <_ZNK9__gnu_cxx17__normal_iteratorIP10Inven_ItemSt6vectorIS1_SaIS1_EEEptEv>
 84b2c53:	8d 48 02             	lea    0x2(%eax),%ecx
 84b2c56:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 84b2c5c:	8d 95 74 ff ff ff    	lea    -0x8c(%ebp),%edx
 84b2c62:	89 54 24 08          	mov    %edx,0x8(%esp)
 84b2c66:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84b2c6a:	89 04 24             	mov    %eax,(%esp)
 84b2c6d:	e8 ab 1f 00 00       	call   84b4c1d <_ZSt9make_pairIRmiESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 84b2c72:	83 ec 04             	sub    $0x4,%esp
 84b2c75:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 84b2c7b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b2c7f:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 84b2c85:	89 04 24             	mov    %eax,(%esp)
 84b2c88:	e8 d3 1f 00 00       	call   84b4c60 <_ZNSt4pairIKiiEC1ImiEEOS_IT_T0_E>
 84b2c8d:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 84b2c93:	8d 95 64 ff ff ff    	lea    -0x9c(%ebp),%edx
 84b2c99:	89 54 24 08          	mov    %edx,0x8(%esp)
 84b2c9d:	8d 95 38 ff ff ff    	lea    -0xc8(%ebp),%edx
 84b2ca3:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b2ca7:	89 04 24             	mov    %eax,(%esp)
 84b2caa:	e8 a1 40 c1 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 84b2caf:	83 ec 04             	sub    $0x4,%esp
 84b2cb2:	eb 17                	jmp    84b2ccb <_ZN11game_master16CClearRewardTest7executeEv+0x2c3>
 84b2cb4:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 84b2cba:	89 04 24             	mov    %eax,(%esp)
 84b2cbd:	e8 7e a6 c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84b2cc2:	8b 50 04             	mov    0x4(%eax),%edx
 84b2cc5:	83 c2 01             	add    $0x1,%edx
 84b2cc8:	89 50 04             	mov    %edx,0x4(%eax)
 84b2ccb:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 84b2cd1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84b2cd8:	00 
 84b2cd9:	8d 95 30 ff ff ff    	lea    -0xd0(%ebp),%edx
 84b2cdf:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b2ce3:	89 04 24             	mov    %eax,(%esp)
 84b2ce6:	e8 5b db f9 ff       	call   8450846 <_ZN9__gnu_cxx17__normal_iteratorIP10Inven_ItemSt6vectorIS1_SaIS1_EEEppEi>
 84b2ceb:	83 ec 04             	sub    $0x4,%esp
 84b2cee:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 84b2cf4:	8d 95 ec fe ff ff    	lea    -0x114(%ebp),%edx
 84b2cfa:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b2cfe:	89 04 24             	mov    %eax,(%esp)
 84b2d01:	e8 e4 fb c9 ff       	call   81528ea <_ZNSt6vectorI10Inven_ItemSaIS0_EE3endEv>
 84b2d06:	83 ec 04             	sub    $0x4,%esp
 84b2d09:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 84b2d0f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b2d13:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 84b2d19:	89 04 24             	mov    %eax,(%esp)
 84b2d1c:	e8 ef fb c9 ff       	call   8152910 <_ZN9__gnu_cxxneIP10Inven_ItemSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 84b2d21:	84 c0                	test   %al,%al
 84b2d23:	0f 85 9f fe ff ff    	jne    84b2bc8 <_ZN11game_master16CClearRewardTest7executeEv+0x1c0>
 84b2d29:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 84b2d2f:	89 04 24             	mov    %eax,(%esp)
 84b2d32:	e8 99 38 25 00       	call   87065d0 <_ZNSsC1Ev>
 84b2d37:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 84b2d3d:	8d 95 38 ff ff ff    	lea    -0xc8(%ebp),%edx
 84b2d43:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b2d47:	89 04 24             	mov    %eax,(%esp)
 84b2d4a:	e8 51 f2 c9 ff       	call   8151fa0 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5beginEv>
 84b2d4f:	83 ec 04             	sub    $0x4,%esp
 84b2d52:	e9 5c 01 00 00       	jmp    84b2eb3 <_ZN11game_master16CClearRewardTest7executeEv+0x4ab>
 84b2d57:	8d 9d a4 fa ff ff    	lea    -0x55c(%ebp),%ebx
 84b2d5d:	b8 00 00 00 00       	mov    $0x0,%eax
 84b2d62:	ba 00 01 00 00       	mov    $0x100,%edx
 84b2d67:	89 df                	mov    %ebx,%edi
 84b2d69:	89 d1                	mov    %edx,%ecx
 84b2d6b:	f3 ab                	rep stos %eax,%es:(%edi)
 84b2d6d:	8d 45 80             	lea    -0x80(%ebp),%eax
 84b2d70:	8d 95 38 ff ff ff    	lea    -0xc8(%ebp),%edx
 84b2d76:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b2d7a:	89 04 24             	mov    %eax,(%esp)
 84b2d7d:	e8 1e f2 c9 ff       	call   8151fa0 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5beginEv>
 84b2d82:	83 ec 04             	sub    $0x4,%esp
 84b2d85:	8d 45 80             	lea    -0x80(%ebp),%eax
 84b2d88:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b2d8c:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 84b2d92:	89 04 24             	mov    %eax,(%esp)
 84b2d95:	e8 56 4b c1 ff       	call   80c78f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEeqERKS3_>
 84b2d9a:	84 c0                	test   %al,%al
 84b2d9c:	74 54                	je     84b2df2 <_ZN11game_master16CClearRewardTest7executeEv+0x3ea>
 84b2d9e:	c7 44 24 08 3f 00 00 	movl   $0x3f,0x8(%esp)
 84b2da5:	00 
 84b2da6:	c7 44 24 04 e0 03 c8 	movl   $0x8c803e0,0x4(%esp)
 84b2dad:	08 
 84b2dae:	8d 85 a4 fa ff ff    	lea    -0x55c(%ebp),%eax
 84b2db4:	89 04 24             	mov    %eax,(%esp)
 84b2db7:	e8 e4 aa bc ff       	call   807d8a0 <memcpy@plt>
 84b2dbc:	8d 85 a4 fa ff ff    	lea    -0x55c(%ebp),%eax
 84b2dc2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b2dc6:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 84b2dcc:	89 04 24             	mov    %eax,(%esp)
 84b2dcf:	e8 5c 52 25 00       	call   8708030 <_ZNSspLEPKc>
 84b2dd4:	c7 44 24 08 00 04 00 	movl   $0x400,0x8(%esp)
 84b2ddb:	00 
 84b2ddc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84b2de3:	00 
 84b2de4:	8d 85 a4 fa ff ff    	lea    -0x55c(%ebp),%eax
 84b2dea:	89 04 24             	mov    %eax,(%esp)
 84b2ded:	e8 ce ae bc ff       	call   807dcc0 <memset@plt>
 84b2df2:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 84b2df8:	89 04 24             	mov    %eax,(%esp)
 84b2dfb:	e8 40 a5 c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84b2e00:	8b 18                	mov    (%eax),%ebx
 84b2e02:	e8 94 93 c1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84b2e07:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84b2e0b:	89 04 24             	mov    %eax,(%esp)
 84b2e0e:	e8 1f cc ea ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84b2e13:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84b2e16:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 84b2e1a:	74 76                	je     84b2e92 <_ZN11game_master16CClearRewardTest7executeEv+0x48a>
 84b2e1c:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 84b2e22:	89 04 24             	mov    %eax,(%esp)
 84b2e25:	e8 16 a5 c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84b2e2a:	8b 78 04             	mov    0x4(%eax),%edi
 84b2e2d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84b2e30:	89 04 24             	mov    %eax,(%esp)
 84b2e33:	e8 9e e4 c3 ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 84b2e38:	89 c6                	mov    %eax,%esi
 84b2e3a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84b2e3d:	89 04 24             	mov    %eax,(%esp)
 84b2e40:	e8 3d bf c6 ff       	call   811ed82 <_ZNK5CItem11GetItemNameEv>
 84b2e45:	89 c3                	mov    %eax,%ebx
 84b2e47:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84b2e4a:	89 04 24             	mov    %eax,(%esp)
 84b2e4d:	e8 f6 dd c5 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 84b2e52:	89 7c 24 14          	mov    %edi,0x14(%esp)
 84b2e56:	89 74 24 10          	mov    %esi,0x10(%esp)
 84b2e5a:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84b2e5e:	89 44 24 08          	mov    %eax,0x8(%esp)
 84b2e62:	c7 44 24 04 1f 04 c8 	movl   $0x8c8041f,0x4(%esp)
 84b2e69:	08 
 84b2e6a:	8d 85 a4 fa ff ff    	lea    -0x55c(%ebp),%eax
 84b2e70:	89 04 24             	mov    %eax,(%esp)
 84b2e73:	e8 c8 b5 bc ff       	call   807e440 <sprintf@plt>
 84b2e78:	8d 85 a4 fa ff ff    	lea    -0x55c(%ebp),%eax
 84b2e7e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b2e82:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 84b2e88:	89 04 24             	mov    %eax,(%esp)
 84b2e8b:	e8 a0 51 25 00       	call   8708030 <_ZNSspLEPKc>
 84b2e90:	eb 01                	jmp    84b2e93 <_ZN11game_master16CClearRewardTest7executeEv+0x48b>
 84b2e92:	90                   	nop
 84b2e93:	8d 45 84             	lea    -0x7c(%ebp),%eax
 84b2e96:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84b2e9d:	00 
 84b2e9e:	8d 95 28 ff ff ff    	lea    -0xd8(%ebp),%edx
 84b2ea4:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b2ea8:	89 04 24             	mov    %eax,(%esp)
 84b2eab:	e8 54 5e d0 ff       	call   81b8d04 <_ZNSt17_Rb_tree_iteratorISt4pairIKiiEEppEi>
 84b2eb0:	83 ec 04             	sub    $0x4,%esp
 84b2eb3:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 84b2eb9:	8d 95 38 ff ff ff    	lea    -0xc8(%ebp),%edx
 84b2ebf:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b2ec3:	89 04 24             	mov    %eax,(%esp)
 84b2ec6:	e8 4f a4 c1 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 84b2ecb:	83 ec 04             	sub    $0x4,%esp
 84b2ece:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 84b2ed4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b2ed8:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 84b2ede:	89 04 24             	mov    %eax,(%esp)
 84b2ee1:	e8 e2 74 c2 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 84b2ee6:	84 c0                	test   %al,%al
 84b2ee8:	0f 85 69 fe ff ff    	jne    84b2d57 <_ZN11game_master16CClearRewardTest7executeEv+0x34f>
 84b2eee:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 84b2ef4:	89 04 24             	mov    %eax,(%esp)
 84b2ef7:	e8 f4 35 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84b2efc:	89 c3                	mov    %eax,%ebx
 84b2efe:	8b 45 08             	mov    0x8(%ebp),%eax
 84b2f01:	89 04 24             	mov    %eax,(%esp)
 84b2f04:	e8 b1 10 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b2f09:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84b2f0d:	c7 44 24 08 35 04 c8 	movl   $0x8c80435,0x8(%esp)
 84b2f14:	08 
 84b2f15:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b2f19:	8b 45 08             	mov    0x8(%ebp),%eax
 84b2f1c:	89 04 24             	mov    %eax,(%esp)
 84b2f1f:	e8 74 04 00 00       	call   84b3398 <_ZN11game_master16CClearRewardTest11printClientEP5CUserPKcS4_>
 84b2f24:	c7 85 e0 fe ff ff 01 	movl   $0x1,-0x120(%ebp)
 84b2f2b:	00 00 00 
 84b2f2e:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 84b2f34:	89 04 24             	mov    %eax,(%esp)
 84b2f37:	e8 94 fb c9 ff       	call   8152ad0 <_ZNSt6vectorI10Inven_ItemSaIS0_EE5clearEv>
 84b2f3c:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 84b2f42:	89 04 24             	mov    %eax,(%esp)
 84b2f45:	e8 86 5e 25 00       	call   8708dd0 <_ZNSs5clearEv>
 84b2f4a:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 84b2f50:	89 04 24             	mov    %eax,(%esp)
 84b2f53:	e8 86 3d c1 ff       	call   80c6cde <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 84b2f58:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 84b2f5f:	eb 2a                	jmp    84b2f8b <_ZN11game_master16CClearRewardTest7executeEv+0x583>
 84b2f61:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84b2f64:	8b 00                	mov    (%eax),%eax
 84b2f66:	83 c0 08             	add    $0x8,%eax
 84b2f69:	8b 10                	mov    (%eax),%edx
 84b2f6b:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 84b2f71:	89 44 24 08          	mov    %eax,0x8(%esp)
 84b2f75:	8d 85 a4 fe ff ff    	lea    -0x15c(%ebp),%eax
 84b2f7b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b2f7f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84b2f82:	89 04 24             	mov    %eax,(%esp)
 84b2f85:	ff d2                	call   *%edx
 84b2f87:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 84b2f8b:	81 7d e0 9f 86 01 00 	cmpl   $0x1869f,-0x20(%ebp)
 84b2f92:	0f 9e c0             	setle  %al
 84b2f95:	84 c0                	test   %al,%al
 84b2f97:	75 c8                	jne    84b2f61 <_ZN11game_master16CClearRewardTest7executeEv+0x559>
 84b2f99:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 84b2f9f:	8d 95 ec fe ff ff    	lea    -0x114(%ebp),%edx
 84b2fa5:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b2fa9:	89 04 24             	mov    %eax,(%esp)
 84b2fac:	e8 53 7d c9 ff       	call   814ad04 <_ZNSt6vectorI10Inven_ItemSaIS0_EE5beginEv>
 84b2fb1:	83 ec 04             	sub    $0x4,%esp
 84b2fb4:	e9 02 01 00 00       	jmp    84b30bb <_ZN11game_master16CClearRewardTest7executeEv+0x6b3>
 84b2fb9:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 84b2fbf:	89 04 24             	mov    %eax,(%esp)
 84b2fc2:	e8 bf 4a d8 ff       	call   8237a86 <_ZNK9__gnu_cxx17__normal_iteratorIP10Inven_ItemSt6vectorIS1_SaIS1_EEEptEv>
 84b2fc7:	8b 40 02             	mov    0x2(%eax),%eax
 84b2fca:	89 45 8c             	mov    %eax,-0x74(%ebp)
 84b2fcd:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 84b2fd3:	8d 55 8c             	lea    -0x74(%ebp),%edx
 84b2fd6:	89 54 24 08          	mov    %edx,0x8(%esp)
 84b2fda:	8d 95 38 ff ff ff    	lea    -0xc8(%ebp),%edx
 84b2fe0:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b2fe4:	89 04 24             	mov    %eax,(%esp)
 84b2fe7:	e8 02 a3 c1 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 84b2fec:	83 ec 04             	sub    $0x4,%esp
 84b2fef:	8d 45 90             	lea    -0x70(%ebp),%eax
 84b2ff2:	8d 95 38 ff ff ff    	lea    -0xc8(%ebp),%edx
 84b2ff8:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b2ffc:	89 04 24             	mov    %eax,(%esp)
 84b2fff:	e8 16 a3 c1 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 84b3004:	83 ec 04             	sub    $0x4,%esp
 84b3007:	8d 45 90             	lea    -0x70(%ebp),%eax
 84b300a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b300e:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 84b3014:	89 04 24             	mov    %eax,(%esp)
 84b3017:	e8 d4 48 c1 ff       	call   80c78f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEeqERKS3_>
 84b301c:	84 c0                	test   %al,%al
 84b301e:	74 64                	je     84b3084 <_ZN11game_master16CClearRewardTest7executeEv+0x67c>
 84b3020:	c7 45 ac 01 00 00 00 	movl   $0x1,-0x54(%ebp)
 84b3027:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 84b302d:	89 04 24             	mov    %eax,(%esp)
 84b3030:	e8 51 4a d8 ff       	call   8237a86 <_ZNK9__gnu_cxx17__normal_iteratorIP10Inven_ItemSt6vectorIS1_SaIS1_EEEptEv>
 84b3035:	8d 48 02             	lea    0x2(%eax),%ecx
 84b3038:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84b303b:	8d 55 ac             	lea    -0x54(%ebp),%edx
 84b303e:	89 54 24 08          	mov    %edx,0x8(%esp)
 84b3042:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84b3046:	89 04 24             	mov    %eax,(%esp)
 84b3049:	e8 cf 1b 00 00       	call   84b4c1d <_ZSt9make_pairIRmiESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 84b304e:	83 ec 04             	sub    $0x4,%esp
 84b3051:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84b3054:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b3058:	8d 45 9c             	lea    -0x64(%ebp),%eax
 84b305b:	89 04 24             	mov    %eax,(%esp)
 84b305e:	e8 fd 1b 00 00       	call   84b4c60 <_ZNSt4pairIKiiEC1ImiEEOS_IT_T0_E>
 84b3063:	8d 45 94             	lea    -0x6c(%ebp),%eax
 84b3066:	8d 55 9c             	lea    -0x64(%ebp),%edx
 84b3069:	89 54 24 08          	mov    %edx,0x8(%esp)
 84b306d:	8d 95 38 ff ff ff    	lea    -0xc8(%ebp),%edx
 84b3073:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b3077:	89 04 24             	mov    %eax,(%esp)
 84b307a:	e8 d1 3c c1 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 84b307f:	83 ec 04             	sub    $0x4,%esp
 84b3082:	eb 17                	jmp    84b309b <_ZN11game_master16CClearRewardTest7executeEv+0x693>
 84b3084:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 84b308a:	89 04 24             	mov    %eax,(%esp)
 84b308d:	e8 ae a2 c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84b3092:	8b 50 04             	mov    0x4(%eax),%edx
 84b3095:	83 c2 01             	add    $0x1,%edx
 84b3098:	89 50 04             	mov    %edx,0x4(%eax)
 84b309b:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84b309e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84b30a5:	00 
 84b30a6:	8d 95 24 ff ff ff    	lea    -0xdc(%ebp),%edx
 84b30ac:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b30b0:	89 04 24             	mov    %eax,(%esp)
 84b30b3:	e8 8e d7 f9 ff       	call   8450846 <_ZN9__gnu_cxx17__normal_iteratorIP10Inven_ItemSt6vectorIS1_SaIS1_EEEppEi>
 84b30b8:	83 ec 04             	sub    $0x4,%esp
 84b30bb:	8d 45 88             	lea    -0x78(%ebp),%eax
 84b30be:	8d 95 ec fe ff ff    	lea    -0x114(%ebp),%edx
 84b30c4:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b30c8:	89 04 24             	mov    %eax,(%esp)
 84b30cb:	e8 1a f8 c9 ff       	call   81528ea <_ZNSt6vectorI10Inven_ItemSaIS0_EE3endEv>
 84b30d0:	83 ec 04             	sub    $0x4,%esp
 84b30d3:	8d 45 88             	lea    -0x78(%ebp),%eax
 84b30d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b30da:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 84b30e0:	89 04 24             	mov    %eax,(%esp)
 84b30e3:	e8 28 f8 c9 ff       	call   8152910 <_ZN9__gnu_cxxneIP10Inven_ItemSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 84b30e8:	84 c0                	test   %al,%al
 84b30ea:	0f 85 c9 fe ff ff    	jne    84b2fb9 <_ZN11game_master16CClearRewardTest7executeEv+0x5b1>
 84b30f0:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 84b30f6:	8d 95 38 ff ff ff    	lea    -0xc8(%ebp),%edx
 84b30fc:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b3100:	89 04 24             	mov    %eax,(%esp)
 84b3103:	e8 98 ee c9 ff       	call   8151fa0 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5beginEv>
 84b3108:	83 ec 04             	sub    $0x4,%esp
 84b310b:	e9 5c 01 00 00       	jmp    84b326c <_ZN11game_master16CClearRewardTest7executeEv+0x864>
 84b3110:	8d 9d a4 fa ff ff    	lea    -0x55c(%ebp),%ebx
 84b3116:	b8 00 00 00 00       	mov    $0x0,%eax
 84b311b:	ba 00 01 00 00       	mov    $0x100,%edx
 84b3120:	89 df                	mov    %ebx,%edi
 84b3122:	89 d1                	mov    %edx,%ecx
 84b3124:	f3 ab                	rep stos %eax,%es:(%edi)
 84b3126:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84b3129:	8d 95 38 ff ff ff    	lea    -0xc8(%ebp),%edx
 84b312f:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b3133:	89 04 24             	mov    %eax,(%esp)
 84b3136:	e8 65 ee c9 ff       	call   8151fa0 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5beginEv>
 84b313b:	83 ec 04             	sub    $0x4,%esp
 84b313e:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84b3141:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b3145:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 84b314b:	89 04 24             	mov    %eax,(%esp)
 84b314e:	e8 9d 47 c1 ff       	call   80c78f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEeqERKS3_>
 84b3153:	84 c0                	test   %al,%al
 84b3155:	74 54                	je     84b31ab <_ZN11game_master16CClearRewardTest7executeEv+0x7a3>
 84b3157:	c7 44 24 08 3f 00 00 	movl   $0x3f,0x8(%esp)
 84b315e:	00 
 84b315f:	c7 44 24 04 e0 03 c8 	movl   $0x8c803e0,0x4(%esp)
 84b3166:	08 
 84b3167:	8d 85 a4 fa ff ff    	lea    -0x55c(%ebp),%eax
 84b316d:	89 04 24             	mov    %eax,(%esp)
 84b3170:	e8 2b a7 bc ff       	call   807d8a0 <memcpy@plt>
 84b3175:	8d 85 a4 fa ff ff    	lea    -0x55c(%ebp),%eax
 84b317b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b317f:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 84b3185:	89 04 24             	mov    %eax,(%esp)
 84b3188:	e8 a3 4e 25 00       	call   8708030 <_ZNSspLEPKc>
 84b318d:	c7 44 24 08 00 04 00 	movl   $0x400,0x8(%esp)
 84b3194:	00 
 84b3195:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84b319c:	00 
 84b319d:	8d 85 a4 fa ff ff    	lea    -0x55c(%ebp),%eax
 84b31a3:	89 04 24             	mov    %eax,(%esp)
 84b31a6:	e8 15 ab bc ff       	call   807dcc0 <memset@plt>
 84b31ab:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 84b31b1:	89 04 24             	mov    %eax,(%esp)
 84b31b4:	e8 87 a1 c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84b31b9:	8b 18                	mov    (%eax),%ebx
 84b31bb:	e8 db 8f c1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84b31c0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84b31c4:	89 04 24             	mov    %eax,(%esp)
 84b31c7:	e8 66 c8 ea ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84b31cc:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84b31cf:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 84b31d3:	74 76                	je     84b324b <_ZN11game_master16CClearRewardTest7executeEv+0x843>
 84b31d5:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 84b31db:	89 04 24             	mov    %eax,(%esp)
 84b31de:	e8 5d a1 c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84b31e3:	8b 78 04             	mov    0x4(%eax),%edi
 84b31e6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84b31e9:	89 04 24             	mov    %eax,(%esp)
 84b31ec:	e8 e5 e0 c3 ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 84b31f1:	89 c6                	mov    %eax,%esi
 84b31f3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84b31f6:	89 04 24             	mov    %eax,(%esp)
 84b31f9:	e8 84 bb c6 ff       	call   811ed82 <_ZNK5CItem11GetItemNameEv>
 84b31fe:	89 c3                	mov    %eax,%ebx
 84b3200:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84b3203:	89 04 24             	mov    %eax,(%esp)
 84b3206:	e8 3d da c5 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 84b320b:	89 7c 24 14          	mov    %edi,0x14(%esp)
 84b320f:	89 74 24 10          	mov    %esi,0x10(%esp)
 84b3213:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84b3217:	89 44 24 08          	mov    %eax,0x8(%esp)
 84b321b:	c7 44 24 04 1f 04 c8 	movl   $0x8c8041f,0x4(%esp)
 84b3222:	08 
 84b3223:	8d 85 a4 fa ff ff    	lea    -0x55c(%ebp),%eax
 84b3229:	89 04 24             	mov    %eax,(%esp)
 84b322c:	e8 0f b2 bc ff       	call   807e440 <sprintf@plt>
 84b3231:	8d 85 a4 fa ff ff    	lea    -0x55c(%ebp),%eax
 84b3237:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b323b:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 84b3241:	89 04 24             	mov    %eax,(%esp)
 84b3244:	e8 e7 4d 25 00       	call   8708030 <_ZNSspLEPKc>
 84b3249:	eb 01                	jmp    84b324c <_ZN11game_master16CClearRewardTest7executeEv+0x844>
 84b324b:	90                   	nop
 84b324c:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84b324f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84b3256:	00 
 84b3257:	8d 95 1c ff ff ff    	lea    -0xe4(%ebp),%edx
 84b325d:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b3261:	89 04 24             	mov    %eax,(%esp)
 84b3264:	e8 9b 5a d0 ff       	call   81b8d04 <_ZNSt17_Rb_tree_iteratorISt4pairIKiiEEppEi>
 84b3269:	83 ec 04             	sub    $0x4,%esp
 84b326c:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84b326f:	8d 95 38 ff ff ff    	lea    -0xc8(%ebp),%edx
 84b3275:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b3279:	89 04 24             	mov    %eax,(%esp)
 84b327c:	e8 99 a0 c1 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 84b3281:	83 ec 04             	sub    $0x4,%esp
 84b3284:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84b3287:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b328b:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 84b3291:	89 04 24             	mov    %eax,(%esp)
 84b3294:	e8 2f 71 c2 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 84b3299:	84 c0                	test   %al,%al
 84b329b:	0f 85 6f fe ff ff    	jne    84b3110 <_ZN11game_master16CClearRewardTest7executeEv+0x708>
 84b32a1:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 84b32a7:	89 04 24             	mov    %eax,(%esp)
 84b32aa:	e8 41 32 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84b32af:	89 c3                	mov    %eax,%ebx
 84b32b1:	8b 45 08             	mov    0x8(%ebp),%eax
 84b32b4:	89 04 24             	mov    %eax,(%esp)
 84b32b7:	e8 fe 0c 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b32bc:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84b32c0:	c7 44 24 08 45 04 c8 	movl   $0x8c80445,0x8(%esp)
 84b32c7:	08 
 84b32c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b32cc:	8b 45 08             	mov    0x8(%ebp),%eax
 84b32cf:	89 04 24             	mov    %eax,(%esp)
 84b32d2:	e8 c1 00 00 00       	call   84b3398 <_ZN11game_master16CClearRewardTest11printClientEP5CUserPKcS4_>
 84b32d7:	eb 18                	jmp    84b32f1 <_ZN11game_master16CClearRewardTest7executeEv+0x8e9>
 84b32d9:	89 d3                	mov    %edx,%ebx
 84b32db:	89 c6                	mov    %eax,%esi
 84b32dd:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 84b32e3:	89 04 24             	mov    %eax,(%esp)
 84b32e6:	e8 f5 48 25 00       	call   8707be0 <_ZNSsD1Ev>
 84b32eb:	89 f0                	mov    %esi,%eax
 84b32ed:	89 da                	mov    %ebx,%edx
 84b32ef:	eb 10                	jmp    84b3301 <_ZN11game_master16CClearRewardTest7executeEv+0x8f9>
 84b32f1:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 84b32f7:	89 04 24             	mov    %eax,(%esp)
 84b32fa:	e8 e1 48 25 00       	call   8707be0 <_ZNSsD1Ev>
 84b32ff:	eb 18                	jmp    84b3319 <_ZN11game_master16CClearRewardTest7executeEv+0x911>
 84b3301:	89 d3                	mov    %edx,%ebx
 84b3303:	89 c6                	mov    %eax,%esi
 84b3305:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 84b330b:	89 04 24             	mov    %eax,(%esp)
 84b330e:	e8 b3 37 c1 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 84b3313:	89 f0                	mov    %esi,%eax
 84b3315:	89 da                	mov    %ebx,%edx
 84b3317:	eb 10                	jmp    84b3329 <_ZN11game_master16CClearRewardTest7executeEv+0x921>
 84b3319:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 84b331f:	89 04 24             	mov    %eax,(%esp)
 84b3322:	e8 9f 37 c1 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 84b3327:	eb 18                	jmp    84b3341 <_ZN11game_master16CClearRewardTest7executeEv+0x939>
 84b3329:	89 d3                	mov    %edx,%ebx
 84b332b:	89 c6                	mov    %eax,%esi
 84b332d:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 84b3333:	89 04 24             	mov    %eax,(%esp)
 84b3336:	e8 11 78 c9 ff       	call   814ab4c <_ZN8WongWork18stGenerateResult_tD1Ev>
 84b333b:	89 f0                	mov    %esi,%eax
 84b333d:	89 da                	mov    %ebx,%edx
 84b333f:	eb 10                	jmp    84b3351 <_ZN11game_master16CClearRewardTest7executeEv+0x949>
 84b3341:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 84b3347:	89 04 24             	mov    %eax,(%esp)
 84b334a:	e8 fd 77 c9 ff       	call   814ab4c <_ZN8WongWork18stGenerateResult_tD1Ev>
 84b334f:	eb 1e                	jmp    84b336f <_ZN11game_master16CClearRewardTest7executeEv+0x967>
 84b3351:	89 d3                	mov    %edx,%ebx
 84b3353:	89 c6                	mov    %eax,%esi
 84b3355:	8d 85 a4 fe ff ff    	lea    -0x15c(%ebp),%eax
 84b335b:	89 04 24             	mov    %eax,(%esp)
 84b335e:	e8 8d 77 c9 ff       	call   814aaf0 <_ZN8WongWork19stGenerateRefData_tD1Ev>
 84b3363:	89 f0                	mov    %esi,%eax
 84b3365:	89 da                	mov    %ebx,%edx
 84b3367:	89 04 24             	mov    %eax,(%esp)
 84b336a:	e8 e1 03 63 00       	call   8ae3750 <_Unwind_Resume>
 84b336f:	8d 85 a4 fe ff ff    	lea    -0x15c(%ebp),%eax
 84b3375:	89 04 24             	mov    %eax,(%esp)
 84b3378:	e8 73 77 c9 ff       	call   814aaf0 <_ZN8WongWork19stGenerateRefData_tD1Ev>
 84b337d:	eb 0d                	jmp    84b338c <_ZN11game_master16CClearRewardTest7executeEv+0x984>
 84b337f:	90                   	nop
 84b3380:	eb 0a                	jmp    84b338c <_ZN11game_master16CClearRewardTest7executeEv+0x984>
 84b3382:	90                   	nop
 84b3383:	eb 07                	jmp    84b338c <_ZN11game_master16CClearRewardTest7executeEv+0x984>
 84b3385:	90                   	nop
 84b3386:	eb 04                	jmp    84b338c <_ZN11game_master16CClearRewardTest7executeEv+0x984>
 84b3388:	90                   	nop
 84b3389:	eb 01                	jmp    84b338c <_ZN11game_master16CClearRewardTest7executeEv+0x984>
 84b338b:	90                   	nop
 84b338c:	8d 65 f4             	lea    -0xc(%ebp),%esp
 84b338f:	83 c4 00             	add    $0x0,%esp
 84b3392:	5b                   	pop    %ebx
 84b3393:	5e                   	pop    %esi
 84b3394:	5f                   	pop    %edi
 84b3395:	5d                   	pop    %ebp
 84b3396:	c3                   	ret
 84b3397:	90                   	nop

```

```c
// game_master::CClearRewardTest::execute @ 0x84b2a08

/* game_master::CClearRewardTest::execute() */

void __thiscall game_master::CClearRewardTest::execute(CClearRewardTest *this)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  CDataManager *pCVar5;
  CItemGeneratorMgr *pCVar6;
  char *pcVar7;
  CUser *pCVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  byte bVar13;
  char local_560 [1024];
  stGenerateRefData_t local_160 [52];
  undefined1 local_12c;
  undefined1 local_12b;
  undefined4 local_128;
  undefined4 local_124;
  CDungeon *local_120;
  stGenerateResult_t local_118 [48];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_e8 [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_e4 [4];
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_e0 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_dc [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_d8 [4];
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_d4 [4];
  string local_d0 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_cc [24];
  __normal_iterator local_b4 [4];
  undefined4 local_b0;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_ac [4];
  pair local_a8 [8];
  pair<int_const,int> local_a0 [8];
  ulong local_98 [2];
  undefined4 local_90;
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_8c [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_88 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_84 [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_80 [4];
  __normal_iterator local_7c [4];
  undefined4 local_78;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_74 [4];
  pair local_70 [8];
  pair<int_const,int> local_68 [8];
  ulong local_60 [2];
  undefined4 local_58;
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_54 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_50 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_4c [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_48 [4];
  CUser *local_44;
  CParty *local_40;
  CDungeon *local_3c;
  undefined1 local_35;
  undefined4 local_34;
  int *local_30;
  int local_2c;
  CItem *local_28;
  int local_24;
  CItem *local_20;
  
  bVar13 = 0;
  local_44 = (CUser *)CCommand::GetUser((CCommand *)this);
  if ((((local_44 != (CUser *)0x0) &&
       (iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)local_44), iVar4 != 0)) &&
      (iVar4 = CUser::get_state(local_44), iVar4 == 5)) &&
     ((local_40 = (CParty *)CUser::GetParty(local_44), local_40 != (CParty *)0x0 &&
      (*(int *)(local_40 + 0xcac) != 0)))) {
    local_3c = *(CDungeon **)(local_40 + 0xcac);
    local_35 = CBattle_Field::get_dungeon_diff((CBattle_Field *)(local_40 + 0xb24));
    local_34 = 0;
    cVar2 = CDungeon::get_dimension_possible(local_3c);
    if (cVar2 < '\x01') {
      local_34 = CDungeon::get_standard_level(local_3c);
    }
    else {
      local_34 = CParty::getStandardDimensionLevel(local_40);
    }
    WongWork::stGenerateRefData_t::stGenerateRefData_t(local_160);
    local_12b = local_35;
    local_12c = (undefined1)local_34;
    local_120 = local_3c;
    local_128 = 0x3f800000;
    local_124 = 0;
                    /* try { // try from 084b2b1d to 084b2b4a has its CatchHandler @ 084b3351 */
    pCVar5 = (CDataManager *)G_CDataManager();
    pCVar6 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar5);
    local_30 = (int *)WongWork::CItemGeneratorMgr::getGenerator(pCVar6,2);
    WongWork::stGenerateResult_t::stGenerateResult_t(local_118);
    for (local_2c = 0; local_2c < 100000; local_2c = local_2c + 1) {
                    /* try { // try from 084b2b78 to 084b2b99 has its CatchHandler @ 084b3329 */
      (**(code **)(*local_30 + 8))(local_30,local_160,local_118);
    }
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map(local_cc);
                    /* try { // try from 084b2ba3 to 084b2d36 has its CatchHandler @ 084b3301 */
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear(local_cc);
    std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
    while( true ) {
      std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
      bVar3 = __gnu_cxx::operator!=(local_d4,local_b4);
      if (!bVar3) break;
      iVar4 = __gnu_cxx::
              __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
              operator->(local_d4);
      local_b0 = *(undefined4 *)(iVar4 + 2);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                ((int *)local_d8);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_ac);
      cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                        (local_d8,(_Rb_tree_iterator *)local_ac);
      if (cVar2 == '\0') {
        iVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_d8);
        *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
      }
      else {
        local_90 = 1;
        iVar4 = __gnu_cxx::
                __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
                operator->(local_d4);
        std::make_pair<unsigned_long&,int>(local_98,(int *)(iVar4 + 2));
        std::pair<int_const,int>::pair<unsigned_long,int>(local_a0,(pair *)local_98);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_a8);
      }
      __gnu_cxx::__normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
      operator++(local_8c,(int)local_d4);
    }
    std::string::string(local_d0);
                    /* try { // try from 084b2d4a to 084b32d6 has its CatchHandler @ 084b32d9 */
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_dc);
    while( true ) {
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_88);
      cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_dc,
                         (_Rb_tree_iterator *)local_88);
      if (cVar2 == '\0') break;
      pcVar7 = local_560;
      for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
        pcVar7[0] = '\0';
        pcVar7[1] = '\0';
        pcVar7[2] = '\0';
        pcVar7[3] = '\0';
        pcVar7 = pcVar7 + ((uint)bVar13 * -2 + 1) * 4;
      }
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_84);
      cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_dc,
                         (_Rb_tree_iterator *)local_84);
      if (cVar2 != '\0') {
        memcpy(local_560,"    Item Index\t\t                     Item Name\t\tRarity\t\tCount\n",
               0x3f);
        std::string::operator+=(local_d0,local_560);
        memset(local_560,0,0x400);
      }
      piVar9 = (int *)std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                                ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_dc);
      iVar4 = *piVar9;
      pCVar5 = (CDataManager *)G_CDataManager();
      local_28 = (CItem *)CDataManager::find_item(pCVar5,iVar4);
      if (local_28 != (CItem *)0x0) {
        iVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_dc);
        uVar1 = *(undefined4 *)(iVar4 + 4);
        uVar10 = CItem::get_rarity(local_28);
        uVar11 = CItem::GetItemName(local_28);
        uVar12 = CItem::get_index(local_28);
        sprintf(local_560,"%14d\t\t%30s\t\t%6d\t\t%5d\n",uVar12,uVar11,uVar10,uVar1);
        std::string::operator+=(local_d0,local_560);
      }
      std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++(local_80,(int)local_dc);
    }
    pcVar7 = (char *)std::string::c_str(local_d0);
    pCVar8 = (CUser *)CCommand::GetUser((CCommand *)this);
    printClient(this,pCVar8,"cltr_normal.txt",pcVar7);
    local_124 = 1;
    std::vector<Inven_Item,std::allocator<Inven_Item>>::clear
              ((vector<Inven_Item,std::allocator<Inven_Item>> *)local_118);
    std::string::clear(local_d0);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear(local_cc);
    for (local_24 = 0; local_24 < 100000; local_24 = local_24 + 1) {
      (**(code **)(*local_30 + 8))(local_30,local_160,local_118);
    }
    std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
    while( true ) {
      std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
      bVar3 = __gnu_cxx::operator!=(local_e0,local_7c);
      if (!bVar3) break;
      iVar4 = __gnu_cxx::
              __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
              operator->(local_e0);
      local_78 = *(undefined4 *)(iVar4 + 2);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                ((int *)local_e4);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_74);
      cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                        (local_e4,(_Rb_tree_iterator *)local_74);
      if (cVar2 == '\0') {
        iVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_e4);
        *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
      }
      else {
        local_58 = 1;
        iVar4 = __gnu_cxx::
                __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
                operator->(local_e0);
        std::make_pair<unsigned_long&,int>(local_60,(int *)(iVar4 + 2));
        std::pair<int_const,int>::pair<unsigned_long,int>(local_68,(pair *)local_60);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_70);
      }
      __gnu_cxx::__normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
      operator++(local_54,(int)local_e0);
    }
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_e8);
    while( true ) {
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_50);
      cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_e8,
                         (_Rb_tree_iterator *)local_50);
      if (cVar2 == '\0') break;
      pcVar7 = local_560;
      for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
        pcVar7[0] = '\0';
        pcVar7[1] = '\0';
        pcVar7[2] = '\0';
        pcVar7[3] = '\0';
        pcVar7 = pcVar7 + ((uint)bVar13 * -2 + 1) * 4;
      }
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_4c);
      cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_e8,
                         (_Rb_tree_iterator *)local_4c);
      if (cVar2 != '\0') {
        memcpy(local_560,"    Item Index\t\t                     Item Name\t\tRarity\t\tCount\n",
               0x3f);
        std::string::operator+=(local_d0,local_560);
        memset(local_560,0,0x400);
      }
      piVar9 = (int *)std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                                ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_e8);
      iVar4 = *piVar9;
      pCVar5 = (CDataManager *)G_CDataManager();
      local_20 = (CItem *)CDataManager::find_item(pCVar5,iVar4);
      if (local_20 != (CItem *)0x0) {
        iVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_e8);
        uVar1 = *(undefined4 *)(iVar4 + 4);
        uVar10 = CItem::get_rarity(local_20);
        uVar11 = CItem::GetItemName(local_20);
        uVar12 = CItem::get_index(local_20);
        sprintf(local_560,"%14d\t\t%30s\t\t%6d\t\t%5d\n",uVar12,uVar11,uVar10,uVar1);
        std::string::operator+=(local_d0,local_560);
      }
      std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++(local_48,(int)local_e8);
    }
    pcVar7 = (char *)std::string::c_str(local_d0);
    pCVar8 = (CUser *)CCommand::GetUser((CCommand *)this);
    printClient(this,pCVar8,"cltr_gold.txt",pcVar7);
                    /* try { // try from 084b32fa to 084b32fe has its CatchHandler @ 084b3301 */
    std::string::~string(local_d0);
                    /* try { // try from 084b3322 to 084b3326 has its CatchHandler @ 084b3329 */
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map(local_cc);
                    /* try { // try from 084b334a to 084b334e has its CatchHandler @ 084b3351 */
    WongWork::stGenerateResult_t::~stGenerateResult_t(local_118);
    WongWork::stGenerateRefData_t::~stGenerateRefData_t(local_160);
  }
  return;
}

```

---

## parse

```asm
// === 084b2a02 game_master::CClearRewardTest::parse  [0x084b2a02-0x84b2a07] ===
 84b2a02:	55                   	push   %ebp
 84b2a03:	89 e5                	mov    %esp,%ebp
 84b2a05:	5d                   	pop    %ebp
 84b2a06:	c3                   	ret
 84b2a07:	90                   	nop

```

```c
// game_master::CClearRewardTest::parse @ 0x84b2a02

/* game_master::CClearRewardTest::parse() */

void game_master::CClearRewardTest::parse(void)

{
  return;
}

```

---

## printClient

```asm
// === 084b3398 game_master::CClearRewardTest::printClient  [0x084b3398-0x84b34a3] ===
 84b3398:	55                   	push   %ebp
 84b3399:	89 e5                	mov    %esp,%ebp
 84b339b:	56                   	push   %esi
 84b339c:	53                   	push   %ebx
 84b339d:	83 ec 20             	sub    $0x20,%esp
 84b33a0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b33a3:	89 04 24             	mov    %eax,(%esp)
 84b33a6:	e8 a1 a9 0d 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84b33ab:	c7 44 24 08 3e 01 00 	movl   $0x13e,0x8(%esp)
 84b33b2:	00 
 84b33b3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84b33ba:	00 
 84b33bb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b33be:	89 04 24             	mov    %eax,(%esp)
 84b33c1:	e8 36 85 c1 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84b33c6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84b33cd:	00 
 84b33ce:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b33d1:	89 04 24             	mov    %eax,(%esp)
 84b33d4:	e8 47 85 c1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84b33d9:	8b 45 10             	mov    0x10(%ebp),%eax
 84b33dc:	89 04 24             	mov    %eax,(%esp)
 84b33df:	e8 cc af bc ff       	call   807e3b0 <strlen@plt>
 84b33e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b33e8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b33eb:	89 04 24             	mov    %eax,(%esp)
 84b33ee:	e8 49 85 c1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84b33f3:	8b 45 10             	mov    0x10(%ebp),%eax
 84b33f6:	89 04 24             	mov    %eax,(%esp)
 84b33f9:	e8 b2 af bc ff       	call   807e3b0 <strlen@plt>
 84b33fe:	89 44 24 08          	mov    %eax,0x8(%esp)
 84b3402:	8b 45 10             	mov    0x10(%ebp),%eax
 84b3405:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b3409:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b340c:	89 04 24             	mov    %eax,(%esp)
 84b340f:	e8 5c 83 d7 ff       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 84b3414:	8b 45 14             	mov    0x14(%ebp),%eax
 84b3417:	89 04 24             	mov    %eax,(%esp)
 84b341a:	e8 91 af bc ff       	call   807e3b0 <strlen@plt>
 84b341f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b3423:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b3426:	89 04 24             	mov    %eax,(%esp)
 84b3429:	e8 0e 85 c1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84b342e:	8b 45 14             	mov    0x14(%ebp),%eax
 84b3431:	89 04 24             	mov    %eax,(%esp)
 84b3434:	e8 77 af bc ff       	call   807e3b0 <strlen@plt>
 84b3439:	89 44 24 08          	mov    %eax,0x8(%esp)
 84b343d:	8b 45 14             	mov    0x14(%ebp),%eax
 84b3440:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b3444:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b3447:	89 04 24             	mov    %eax,(%esp)
 84b344a:	e8 21 83 d7 ff       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 84b344f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84b3456:	00 
 84b3457:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b345a:	89 04 24             	mov    %eax,(%esp)
 84b345d:	e8 f6 84 c1 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84b3462:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b3465:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b3469:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b346c:	89 04 24             	mov    %eax,(%esp)
 84b346f:	e8 46 51 19 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84b3474:	eb 1b                	jmp    84b3491 <_ZN11game_master16CClearRewardTest11printClientEP5CUserPKcS4_+0xf9>
 84b3476:	89 d3                	mov    %edx,%ebx
 84b3478:	89 c6                	mov    %eax,%esi
 84b347a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b347d:	89 04 24             	mov    %eax,(%esp)
 84b3480:	e8 fb a9 0d 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84b3485:	89 f0                	mov    %esi,%eax
 84b3487:	89 da                	mov    %ebx,%edx
 84b3489:	89 04 24             	mov    %eax,(%esp)
 84b348c:	e8 bf 02 63 00       	call   8ae3750 <_Unwind_Resume>
 84b3491:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b3494:	89 04 24             	mov    %eax,(%esp)
 84b3497:	e8 e4 a9 0d 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84b349c:	83 c4 20             	add    $0x20,%esp
 84b349f:	5b                   	pop    %ebx
 84b34a0:	5e                   	pop    %esi
 84b34a1:	5d                   	pop    %ebp
 84b34a2:	c3                   	ret
 84b34a3:	90                   	nop

```

```c
// game_master::CClearRewardTest::printClient @ 0x84b3398

/* game_master::CClearRewardTest::printClient(CUser*, char const*, char const*) */

void __thiscall
game_master::CClearRewardTest::printClient
          (CClearRewardTest *this,CUser *param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 084b33c1 to 084b3473 has its CatchHandler @ 084b3476 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x13e);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  sVar1 = strlen(param_2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,sVar1);
  sVar1 = strlen(param_2);
  InterfacePacketBuf::put_str((InterfacePacketBuf *)local_18,param_2,sVar1);
  sVar1 = strlen(param_3);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,sVar1);
  sVar1 = strlen(param_3);
  InterfacePacketBuf::put_str((InterfacePacketBuf *)local_18,param_3,sVar1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

