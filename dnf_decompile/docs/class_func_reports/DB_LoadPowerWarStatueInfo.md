# DB_LoadPowerWarStatueInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## GetAvatarInfo

```asm
// === 08434d36 DB_LoadPowerWarStatueInfo::GetAvatarInfo  [0x08434d36-0x84354d9] ===
 8434d36:	55                   	push   %ebp
 8434d37:	89 e5                	mov    %esp,%ebp
 8434d39:	57                   	push   %edi
 8434d3a:	56                   	push   %esi
 8434d3b:	53                   	push   %ebx
 8434d3c:	81 ec ec 0e 00 00    	sub    $0xeec,%esp
 8434d42:	8d 95 ce fb ff ff    	lea    -0x432(%ebp),%edx
 8434d48:	bb 7a 03 00 00       	mov    $0x37a,%ebx
 8434d4d:	b8 00 00 00 00       	mov    $0x0,%eax
 8434d52:	89 d1                	mov    %edx,%ecx
 8434d54:	83 e1 02             	and    $0x2,%ecx
 8434d57:	85 c9                	test   %ecx,%ecx
 8434d59:	74 09                	je     8434d64 <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x2e>
 8434d5b:	66 89 02             	mov    %ax,(%edx)
 8434d5e:	83 c2 02             	add    $0x2,%edx
 8434d61:	83 eb 02             	sub    $0x2,%ebx
 8434d64:	89 d9                	mov    %ebx,%ecx
 8434d66:	c1 e9 02             	shr    $0x2,%ecx
 8434d69:	89 d7                	mov    %edx,%edi
 8434d6b:	f3 ab                	rep stos %eax,%es:(%edi)
 8434d6d:	89 fa                	mov    %edi,%edx
 8434d6f:	89 d9                	mov    %ebx,%ecx
 8434d71:	83 e1 02             	and    $0x2,%ecx
 8434d74:	85 c9                	test   %ecx,%ecx
 8434d76:	74 06                	je     8434d7e <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x48>
 8434d78:	66 89 02             	mov    %ax,(%edx)
 8434d7b:	83 c2 02             	add    $0x2,%edx
 8434d7e:	89 d9                	mov    %ebx,%ecx
 8434d80:	83 e1 01             	and    $0x1,%ecx
 8434d83:	85 c9                	test   %ecx,%ecx
 8434d85:	74 05                	je     8434d8c <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x56>
 8434d87:	88 02                	mov    %al,(%edx)
 8434d89:	83 c2 01             	add    $0x1,%edx
 8434d8c:	c7 85 48 ff ff ff 7a 	movl   $0x37a,-0xb8(%ebp)
 8434d93:	03 00 00 
 8434d96:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 8434d9c:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8434d9f:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8434da4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8434dab:	00 
 8434dac:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8434db3:	00 
 8434db4:	89 04 24             	mov    %eax,(%esp)
 8434db7:	e8 82 04 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8434dbc:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8434dbf:	8b 45 10             	mov    0x10(%ebp),%eax
 8434dc2:	89 44 24 08          	mov    %eax,0x8(%esp)
 8434dc6:	c7 44 24 04 9c 2e c5 	movl   $0x8c52e9c,0x4(%esp)
 8434dcd:	08 
 8434dce:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8434dd1:	89 04 24             	mov    %eax,(%esp)
 8434dd4:	e8 e7 f3 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8434dd9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8434de0:	00 
 8434de1:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8434de4:	89 04 24             	mov    %eax,(%esp)
 8434de7:	e8 3a f5 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8434dec:	83 f0 01             	xor    $0x1,%eax
 8434def:	84 c0                	test   %al,%al
 8434df1:	75 12                	jne    8434e05 <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0xcf>
 8434df3:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8434df6:	89 04 24             	mov    %eax,(%esp)
 8434df9:	e8 be f6 fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8434dfe:	83 f0 01             	xor    $0x1,%eax
 8434e01:	84 c0                	test   %al,%al
 8434e03:	74 07                	je     8434e0c <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0xd6>
 8434e05:	b8 01 00 00 00       	mov    $0x1,%eax
 8434e0a:	eb 05                	jmp    8434e11 <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0xdb>
 8434e0c:	b8 00 00 00 00       	mov    $0x0,%eax
 8434e11:	84 c0                	test   %al,%al
 8434e13:	74 4d                	je     8434e62 <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x12c>
 8434e15:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8434e1c:	00 
 8434e1d:	c7 44 24 08 09 7f 00 	movl   $0x7f09,0x8(%esp)
 8434e24:	00 
 8434e25:	c7 44 24 04 60 be c5 	movl   $0x8c5be60,0x4(%esp)
 8434e2c:	08 
 8434e2d:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 8434e33:	89 04 24             	mov    %eax,(%esp)
 8434e36:	e8 dd a8 11 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8434e3b:	8b 45 10             	mov    0x10(%ebp),%eax
 8434e3e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8434e42:	c7 44 24 04 d0 2e c5 	movl   $0x8c52ed0,0x4(%esp)
 8434e49:	08 
 8434e4a:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 8434e50:	89 04 24             	mov    %eax,(%esp)
 8434e53:	e8 30 a9 11 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8434e58:	bb 00 00 00 00       	mov    $0x0,%ebx
 8434e5d:	e9 6b 06 00 00       	jmp    84354cd <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x797>
 8434e62:	c7 45 d4 73 00 00 00 	movl   $0x73,-0x2c(%ebp)
 8434e69:	8d 85 90 f6 ff ff    	lea    -0x970(%ebp),%eax
 8434e6f:	89 c3                	mov    %eax,%ebx
 8434e71:	be 15 00 00 00       	mov    $0x15,%esi
 8434e76:	eb 0e                	jmp    8434e86 <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x150>
 8434e78:	89 1c 24             	mov    %ebx,(%esp)
 8434e7b:	e8 d4 69 c9 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8434e80:	83 c3 3d             	add    $0x3d,%ebx
 8434e83:	83 ee 01             	sub    $0x1,%esi
 8434e86:	83 fe ff             	cmp    $0xffffffff,%esi
 8434e89:	0f 95 c0             	setne  %al
 8434e8c:	84 c0                	test   %al,%al
 8434e8e:	75 e8                	jne    8434e78 <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x142>
 8434e90:	c7 44 24 08 64 05 00 	movl   $0x564,0x8(%esp)
 8434e97:	00 
 8434e98:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8434e9f:	00 
 8434ea0:	8d 85 2c f1 ff ff    	lea    -0xed4(%ebp),%eax
 8434ea6:	89 04 24             	mov    %eax,(%esp)
 8434ea9:	e8 12 8e c4 ff       	call   807dcc0 <memset@plt>
 8434eae:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8434eb5:	00 
 8434eb6:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8434eb9:	89 04 24             	mov    %eax,(%esp)
 8434ebc:	e8 1d 05 cf ff       	call   81253de <_ZN5MySQL17get_binary_lengthEi>
 8434ec1:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8434ec4:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 8434eca:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8434ece:	8d 85 ce fb ff ff    	lea    -0x432(%ebp),%eax
 8434ed4:	89 44 24 08          	mov    %eax,0x8(%esp)
 8434ed8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8434edf:	00 
 8434ee0:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8434ee3:	89 04 24             	mov    %eax,(%esp)
 8434ee6:	e8 2f 04 cf ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 8434eeb:	83 f0 01             	xor    $0x1,%eax
 8434eee:	84 c0                	test   %al,%al
 8434ef0:	74 4d                	je     8434f3f <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x209>
 8434ef2:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8434ef9:	00 
 8434efa:	c7 44 24 08 15 7f 00 	movl   $0x7f15,0x8(%esp)
 8434f01:	00 
 8434f02:	c7 44 24 04 60 be c5 	movl   $0x8c5be60,0x4(%esp)
 8434f09:	08 
 8434f0a:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8434f10:	89 04 24             	mov    %eax,(%esp)
 8434f13:	e8 00 a8 11 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8434f18:	8b 45 10             	mov    0x10(%ebp),%eax
 8434f1b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8434f1f:	c7 44 24 04 20 2f c5 	movl   $0x8c52f20,0x4(%esp)
 8434f26:	08 
 8434f27:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8434f2d:	89 04 24             	mov    %eax,(%esp)
 8434f30:	e8 53 a8 11 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8434f35:	bb 00 00 00 00       	mov    $0x0,%ebx
 8434f3a:	e9 8e 05 00 00       	jmp    84354cd <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x797>
 8434f3f:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 8434f45:	39 45 cc             	cmp    %eax,-0x34(%ebp)
 8434f48:	76 2c                	jbe    8434f76 <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x240>
 8434f4a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8434f51:	e8 aa 08 2f 00       	call   8725800 <__cxa_allocate_exception>
 8434f56:	89 c2                	mov    %eax,%edx
 8434f58:	c7 02 1c 7f 00 00    	movl   $0x7f1c,(%edx)
 8434f5e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8434f65:	00 
 8434f66:	c7 44 24 04 b8 b1 36 	movl   $0x936b1b8,0x4(%esp)
 8434f6d:	09 
 8434f6e:	89 04 24             	mov    %eax,(%esp)
 8434f71:	e8 da fc 2e 00       	call   8724c50 <__cxa_throw>
 8434f76:	8d 85 90 f6 ff ff    	lea    -0x970(%ebp),%eax
 8434f7c:	8d 90 62 02 00 00    	lea    0x262(%eax),%edx
 8434f82:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8434f85:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8434f89:	8d 85 ce fb ff ff    	lea    -0x432(%ebp),%eax
 8434f8f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8434f93:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 8434f99:	89 44 24 04          	mov    %eax,0x4(%esp)
 8434f9d:	89 14 24             	mov    %edx,(%esp)
 8434fa0:	e8 5d d1 27 00       	call   86b2102 <_Z14uncompress_zipPcRjPKcj>
 8434fa5:	83 f0 01             	xor    $0x1,%eax
 8434fa8:	84 c0                	test   %al,%al
 8434faa:	74 2c                	je     8434fd8 <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x2a2>
 8434fac:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8434fb3:	e8 48 08 2f 00       	call   8725800 <__cxa_allocate_exception>
 8434fb8:	89 c2                	mov    %eax,%edx
 8434fba:	c7 02 1e 7f 00 00    	movl   $0x7f1e,(%edx)
 8434fc0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8434fc7:	00 
 8434fc8:	c7 44 24 04 b8 b1 36 	movl   $0x936b1b8,0x4(%esp)
 8434fcf:	09 
 8434fd0:	89 04 24             	mov    %eax,(%esp)
 8434fd3:	e8 78 fc 2e 00       	call   8724c50 <__cxa_throw>
 8434fd8:	8b 8d 48 ff ff ff    	mov    -0xb8(%ebp),%ecx
 8434fde:	ba 3f c5 25 43       	mov    $0x4325c53f,%edx
 8434fe3:	89 c8                	mov    %ecx,%eax
 8434fe5:	f7 e2                	mul    %edx
 8434fe7:	89 d0                	mov    %edx,%eax
 8434fe9:	c1 e8 04             	shr    $0x4,%eax
 8434fec:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8434fef:	89 ca                	mov    %ecx,%edx
 8434ff1:	29 c2                	sub    %eax,%edx
 8434ff3:	89 d0                	mov    %edx,%eax
 8434ff5:	85 c0                	test   %eax,%eax
 8434ff7:	0f 84 e2 00 00 00    	je     84350df <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x3a9>
 8434ffd:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 8435003:	85 c0                	test   %eax,%eax
 8435005:	0f 84 d4 00 00 00    	je     84350df <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x3a9>
 843500b:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8435012:	00 
 8435013:	c7 44 24 08 23 7f 00 	movl   $0x7f23,0x8(%esp)
 843501a:	00 
 843501b:	c7 44 24 04 60 be c5 	movl   $0x8c5be60,0x4(%esp)
 8435022:	08 
 8435023:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8435029:	89 04 24             	mov    %eax,(%esp)
 843502c:	e8 e7 a6 11 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8435031:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8435034:	89 44 24 10          	mov    %eax,0x10(%esp)
 8435038:	c7 44 24 0c 3e 05 00 	movl   $0x53e,0xc(%esp)
 843503f:	00 
 8435040:	8b 45 10             	mov    0x10(%ebp),%eax
 8435043:	89 44 24 08          	mov    %eax,0x8(%esp)
 8435047:	c7 44 24 04 6c 2f c5 	movl   $0x8c52f6c,0x4(%esp)
 843504e:	08 
 843504f:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8435055:	89 04 24             	mov    %eax,(%esp)
 8435058:	e8 2b a7 11 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 843505d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8435062:	e9 66 04 00 00       	jmp    84354cd <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x797>
 8435067:	83 fa 01             	cmp    $0x1,%edx
 843506a:	74 08                	je     8435074 <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x33e>
 843506c:	89 04 24             	mov    %eax,(%esp)
 843506f:	e8 dc e6 6a 00       	call   8ae3750 <_Unwind_Resume>
 8435074:	89 04 24             	mov    %eax,(%esp)
 8435077:	e8 64 0c 2f 00       	call   8725ce0 <__cxa_begin_catch>
 843507c:	8b 00                	mov    (%eax),%eax
 843507e:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8435081:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8435084:	89 44 24 18          	mov    %eax,0x18(%esp)
 8435088:	8b 45 10             	mov    0x10(%ebp),%eax
 843508b:	89 44 24 14          	mov    %eax,0x14(%esp)
 843508f:	c7 44 24 10 d0 5e c4 	movl   $0x8c45ed0,0x10(%esp)
 8435096:	08 
 8435097:	c7 44 24 0c 29 7f 00 	movl   $0x7f29,0xc(%esp)
 843509e:	00 
 843509f:	c7 44 24 08 60 be c5 	movl   $0x8c5be60,0x8(%esp)
 84350a6:	08 
 84350a7:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84350ae:	08 
 84350af:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84350b6:	e8 4f eb 69 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84350bb:	bb 00 00 00 00       	mov    $0x0,%ebx
 84350c0:	e8 6b 0b 2f 00       	call   8725c30 <__cxa_end_catch>
 84350c5:	e9 03 04 00 00       	jmp    84354cd <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x797>
 84350ca:	89 d3                	mov    %edx,%ebx
 84350cc:	89 c6                	mov    %eax,%esi
 84350ce:	e8 5d 0b 2f 00       	call   8725c30 <__cxa_end_catch>
 84350d3:	89 f0                	mov    %esi,%eax
 84350d5:	89 da                	mov    %ebx,%edx
 84350d7:	89 04 24             	mov    %eax,(%esp)
 84350da:	e8 71 e6 6a 00       	call   8ae3750 <_Unwind_Resume>
 84350df:	8b 95 f4 f8 ff ff    	mov    -0x70c(%ebp),%edx
 84350e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84350e8:	89 50 7c             	mov    %edx,0x7c(%eax)
 84350eb:	c7 44 24 0c 73 00 00 	movl   $0x73,0xc(%esp)
 84350f2:	00 
 84350f3:	8b 45 10             	mov    0x10(%ebp),%eax
 84350f6:	89 44 24 08          	mov    %eax,0x8(%esp)
 84350fa:	c7 44 24 04 c0 2f c5 	movl   $0x8c52fc0,0x4(%esp)
 8435101:	08 
 8435102:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8435105:	89 04 24             	mov    %eax,(%esp)
 8435108:	e8 b3 f0 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843510d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8435114:	00 
 8435115:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8435118:	89 04 24             	mov    %eax,(%esp)
 843511b:	e8 06 f2 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8435120:	83 f0 01             	xor    $0x1,%eax
 8435123:	84 c0                	test   %al,%al
 8435125:	74 4d                	je     8435174 <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x43e>
 8435127:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 843512e:	00 
 843512f:	c7 44 24 08 35 7f 00 	movl   $0x7f35,0x8(%esp)
 8435136:	00 
 8435137:	c7 44 24 04 60 be c5 	movl   $0x8c5be60,0x4(%esp)
 843513e:	08 
 843513f:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8435145:	89 04 24             	mov    %eax,(%esp)
 8435148:	e8 cb a5 11 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 843514d:	8b 45 10             	mov    0x10(%ebp),%eax
 8435150:	89 44 24 08          	mov    %eax,0x8(%esp)
 8435154:	c7 44 24 04 30 30 c5 	movl   $0x8c53030,0x4(%esp)
 843515b:	08 
 843515c:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8435162:	89 04 24             	mov    %eax,(%esp)
 8435165:	e8 1e a6 11 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 843516a:	bb 00 00 00 00       	mov    $0x0,%ebx
 843516f:	e9 59 03 00 00       	jmp    84354cd <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x797>
 8435174:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8435177:	89 04 24             	mov    %eax,(%esp)
 843517a:	e8 ed d1 ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 843517f:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8435182:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8435189:	e9 45 02 00 00       	jmp    84353d3 <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x69d>
 843518e:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8435191:	89 04 24             	mov    %eax,(%esp)
 8435194:	e8 23 f3 fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8435199:	83 f0 01             	xor    $0x1,%eax
 843519c:	84 c0                	test   %al,%al
 843519e:	74 42                	je     84351e2 <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x4ac>
 84351a0:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84351a7:	00 
 84351a8:	c7 44 24 08 3f 7f 00 	movl   $0x7f3f,0x8(%esp)
 84351af:	00 
 84351b0:	c7 44 24 04 60 be c5 	movl   $0x8c5be60,0x4(%esp)
 84351b7:	08 
 84351b8:	8d 45 8c             	lea    -0x74(%ebp),%eax
 84351bb:	89 04 24             	mov    %eax,(%esp)
 84351be:	e8 55 a5 11 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84351c3:	8b 45 10             	mov    0x10(%ebp),%eax
 84351c6:	89 44 24 08          	mov    %eax,0x8(%esp)
 84351ca:	c7 44 24 04 30 30 c5 	movl   $0x8c53030,0x4(%esp)
 84351d1:	08 
 84351d2:	8d 45 8c             	lea    -0x74(%ebp),%eax
 84351d5:	89 04 24             	mov    %eax,(%esp)
 84351d8:	e8 ab a5 11 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84351dd:	e9 02 02 00 00       	jmp    84353e4 <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x6ae>
 84351e2:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84351e5:	8d 8d 2c f1 ff ff    	lea    -0xed4(%ebp),%ecx
 84351eb:	89 d0                	mov    %edx,%eax
 84351ed:	01 c0                	add    %eax,%eax
 84351ef:	01 d0                	add    %edx,%eax
 84351f1:	c1 e0 02             	shl    $0x2,%eax
 84351f4:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84351f7:	89 44 24 08          	mov    %eax,0x8(%esp)
 84351fb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8435202:	00 
 8435203:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8435206:	89 04 24             	mov    %eax,(%esp)
 8435209:	e8 1e 17 ce ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 843520e:	83 f0 01             	xor    $0x1,%eax
 8435211:	84 c0                	test   %al,%al
 8435213:	74 47                	je     843525c <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x526>
 8435215:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 843521c:	00 
 843521d:	c7 44 24 08 45 7f 00 	movl   $0x7f45,0x8(%esp)
 8435224:	00 
 8435225:	c7 44 24 04 60 be c5 	movl   $0x8c5be60,0x4(%esp)
 843522c:	08 
 843522d:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8435230:	89 04 24             	mov    %eax,(%esp)
 8435233:	e8 e0 a4 11 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8435238:	8b 45 10             	mov    0x10(%ebp),%eax
 843523b:	89 44 24 08          	mov    %eax,0x8(%esp)
 843523f:	c7 44 24 04 74 30 c5 	movl   $0x8c53074,0x4(%esp)
 8435246:	08 
 8435247:	8d 45 9c             	lea    -0x64(%ebp),%eax
 843524a:	89 04 24             	mov    %eax,(%esp)
 843524d:	e8 36 a5 11 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8435252:	bb 00 00 00 00       	mov    $0x0,%ebx
 8435257:	e9 71 02 00 00       	jmp    84354cd <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x797>
 843525c:	8b 55 e0             	mov    -0x20(%ebp),%edx
 843525f:	8d 8d 2c f1 ff ff    	lea    -0xed4(%ebp),%ecx
 8435265:	89 d0                	mov    %edx,%eax
 8435267:	01 c0                	add    %eax,%eax
 8435269:	01 d0                	add    %edx,%eax
 843526b:	c1 e0 02             	shl    $0x2,%eax
 843526e:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8435271:	83 c0 04             	add    $0x4,%eax
 8435274:	89 44 24 08          	mov    %eax,0x8(%esp)
 8435278:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843527f:	00 
 8435280:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8435283:	89 04 24             	mov    %eax,(%esp)
 8435286:	e8 a1 16 ce ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 843528b:	83 f0 01             	xor    $0x1,%eax
 843528e:	84 c0                	test   %al,%al
 8435290:	74 47                	je     84352d9 <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x5a3>
 8435292:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8435299:	00 
 843529a:	c7 44 24 08 4b 7f 00 	movl   $0x7f4b,0x8(%esp)
 84352a1:	00 
 84352a2:	c7 44 24 04 60 be c5 	movl   $0x8c5be60,0x4(%esp)
 84352a9:	08 
 84352aa:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84352ad:	89 04 24             	mov    %eax,(%esp)
 84352b0:	e8 63 a4 11 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84352b5:	8b 45 10             	mov    0x10(%ebp),%eax
 84352b8:	89 44 24 08          	mov    %eax,0x8(%esp)
 84352bc:	c7 44 24 04 bc 30 c5 	movl   $0x8c530bc,0x4(%esp)
 84352c3:	08 
 84352c4:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84352c7:	89 04 24             	mov    %eax,(%esp)
 84352ca:	e8 b9 a4 11 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84352cf:	bb 00 00 00 00       	mov    $0x0,%ebx
 84352d4:	e9 f4 01 00 00       	jmp    84354cd <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x797>
 84352d9:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84352dc:	8d 8d 2c f1 ff ff    	lea    -0xed4(%ebp),%ecx
 84352e2:	89 d0                	mov    %edx,%eax
 84352e4:	01 c0                	add    %eax,%eax
 84352e6:	01 d0                	add    %edx,%eax
 84352e8:	c1 e0 02             	shl    $0x2,%eax
 84352eb:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84352ee:	83 c0 08             	add    $0x8,%eax
 84352f1:	89 44 24 08          	mov    %eax,0x8(%esp)
 84352f5:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84352fc:	00 
 84352fd:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8435300:	89 04 24             	mov    %eax,(%esp)
 8435303:	e8 24 16 ce ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8435308:	83 f0 01             	xor    $0x1,%eax
 843530b:	84 c0                	test   %al,%al
 843530d:	74 47                	je     8435356 <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x620>
 843530f:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8435316:	00 
 8435317:	c7 44 24 08 51 7f 00 	movl   $0x7f51,0x8(%esp)
 843531e:	00 
 843531f:	c7 44 24 04 60 be c5 	movl   $0x8c5be60,0x4(%esp)
 8435326:	08 
 8435327:	8d 45 bc             	lea    -0x44(%ebp),%eax
 843532a:	89 04 24             	mov    %eax,(%esp)
 843532d:	e8 e6 a3 11 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8435332:	8b 45 10             	mov    0x10(%ebp),%eax
 8435335:	89 44 24 08          	mov    %eax,0x8(%esp)
 8435339:	c7 44 24 04 04 31 c5 	movl   $0x8c53104,0x4(%esp)
 8435340:	08 
 8435341:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8435344:	89 04 24             	mov    %eax,(%esp)
 8435347:	e8 3c a4 11 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 843534c:	bb 00 00 00 00       	mov    $0x0,%ebx
 8435351:	e9 77 01 00 00       	jmp    84354cd <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x797>
 8435356:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8435359:	89 d0                	mov    %edx,%eax
 843535b:	01 c0                	add    %eax,%eax
 843535d:	01 d0                	add    %edx,%eax
 843535f:	c1 e0 02             	shl    $0x2,%eax
 8435362:	8d 7d e8             	lea    -0x18(%ebp),%edi
 8435365:	8d 04 07             	lea    (%edi,%eax,1),%eax
 8435368:	2d bc 0e 00 00       	sub    $0xebc,%eax
 843536d:	8b 00                	mov    (%eax),%eax
 843536f:	85 c0                	test   %eax,%eax
 8435371:	78 5c                	js     84353cf <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x699>
 8435373:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8435376:	89 d0                	mov    %edx,%eax
 8435378:	01 c0                	add    %eax,%eax
 843537a:	01 d0                	add    %edx,%eax
 843537c:	c1 e0 02             	shl    $0x2,%eax
 843537f:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8435382:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8435385:	2d bc 0e 00 00       	sub    $0xebc,%eax
 843538a:	8b 00                	mov    (%eax),%eax
 843538c:	83 f8 09             	cmp    $0x9,%eax
 843538f:	7f 3e                	jg     84353cf <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x699>
 8435391:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8435394:	89 d0                	mov    %edx,%eax
 8435396:	01 c0                	add    %eax,%eax
 8435398:	01 d0                	add    %edx,%eax
 843539a:	c1 e0 02             	shl    $0x2,%eax
 843539d:	8d 7d e8             	lea    -0x18(%ebp),%edi
 84353a0:	8d 04 07             	lea    (%edi,%eax,1),%eax
 84353a3:	2d bc 0e 00 00       	sub    $0xebc,%eax
 84353a8:	8b 08                	mov    (%eax),%ecx
 84353aa:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84353ad:	89 d0                	mov    %edx,%eax
 84353af:	01 c0                	add    %eax,%eax
 84353b1:	01 d0                	add    %edx,%eax
 84353b3:	c1 e0 02             	shl    $0x2,%eax
 84353b6:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84353b9:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84353bc:	2d b8 0e 00 00       	sub    $0xeb8,%eax
 84353c1:	8b 00                	mov    (%eax),%eax
 84353c3:	89 c2                	mov    %eax,%edx
 84353c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84353c8:	83 c1 14             	add    $0x14,%ecx
 84353cb:	89 54 88 04          	mov    %edx,0x4(%eax,%ecx,4)
 84353cf:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 84353d3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84353d6:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 84353d9:	0f 9c c0             	setl   %al
 84353dc:	84 c0                	test   %al,%al
 84353de:	0f 85 aa fd ff ff    	jne    843518e <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x458>
 84353e4:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84353eb:	e9 c7 00 00 00       	jmp    84354b7 <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x781>
 84353f0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84353f3:	89 d0                	mov    %edx,%eax
 84353f5:	01 c0                	add    %eax,%eax
 84353f7:	01 d0                	add    %edx,%eax
 84353f9:	c1 e0 02             	shl    $0x2,%eax
 84353fc:	8d 7d e8             	lea    -0x18(%ebp),%edi
 84353ff:	8d 04 07             	lea    (%edi,%eax,1),%eax
 8435402:	2d b4 0e 00 00       	sub    $0xeb4,%eax
 8435407:	8b 00                	mov    (%eax),%eax
 8435409:	85 c0                	test   %eax,%eax
 843540b:	0f 84 a2 00 00 00    	je     84354b3 <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x77d>
 8435411:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8435414:	89 d0                	mov    %edx,%eax
 8435416:	01 c0                	add    %eax,%eax
 8435418:	01 d0                	add    %edx,%eax
 843541a:	c1 e0 02             	shl    $0x2,%eax
 843541d:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8435420:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8435423:	2d b4 0e 00 00       	sub    $0xeb4,%eax
 8435428:	8b 00                	mov    (%eax),%eax
 843542a:	89 44 24 08          	mov    %eax,0x8(%esp)
 843542e:	c7 44 24 04 4c 31 c5 	movl   $0x8c5314c,0x4(%esp)
 8435435:	08 
 8435436:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8435439:	89 04 24             	mov    %eax,(%esp)
 843543c:	e8 7f ed fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8435441:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8435448:	00 
 8435449:	8b 45 d0             	mov    -0x30(%ebp),%eax
 843544c:	89 04 24             	mov    %eax,(%esp)
 843544f:	e8 d2 ee fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8435454:	84 c0                	test   %al,%al
 8435456:	74 16                	je     843546e <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x738>
 8435458:	8b 45 d0             	mov    -0x30(%ebp),%eax
 843545b:	89 04 24             	mov    %eax,(%esp)
 843545e:	e8 59 f0 fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8435463:	84 c0                	test   %al,%al
 8435465:	74 07                	je     843546e <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x738>
 8435467:	b8 01 00 00 00       	mov    $0x1,%eax
 843546c:	eb 05                	jmp    8435473 <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x73d>
 843546e:	b8 00 00 00 00       	mov    $0x0,%eax
 8435473:	84 c0                	test   %al,%al
 8435475:	74 3c                	je     84354b3 <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x77d>
 8435477:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 843547a:	89 d0                	mov    %edx,%eax
 843547c:	01 c0                	add    %eax,%eax
 843547e:	01 d0                	add    %edx,%eax
 8435480:	c1 e0 02             	shl    $0x2,%eax
 8435483:	8d 7d e8             	lea    -0x18(%ebp),%edi
 8435486:	8d 04 07             	lea    (%edi,%eax,1),%eax
 8435489:	2d bc 0e 00 00       	sub    $0xebc,%eax
 843548e:	8b 00                	mov    (%eax),%eax
 8435490:	83 c0 14             	add    $0x14,%eax
 8435493:	c1 e0 02             	shl    $0x2,%eax
 8435496:	03 45 0c             	add    0xc(%ebp),%eax
 8435499:	83 c0 04             	add    $0x4,%eax
 843549c:	89 44 24 08          	mov    %eax,0x8(%esp)
 84354a0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84354a7:	00 
 84354a8:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84354ab:	89 04 24             	mov    %eax,(%esp)
 84354ae:	e8 79 14 ce ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 84354b3:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 84354b7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84354ba:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 84354bd:	0f 9c c0             	setl   %al
 84354c0:	84 c0                	test   %al,%al
 84354c2:	0f 85 28 ff ff ff    	jne    84353f0 <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x6ba>
 84354c8:	bb 01 00 00 00       	mov    $0x1,%ebx
 84354cd:	89 d8                	mov    %ebx,%eax
 84354cf:	81 c4 ec 0e 00 00    	add    $0xeec,%esp
 84354d5:	5b                   	pop    %ebx
 84354d6:	5e                   	pop    %esi
 84354d7:	5f                   	pop    %edi
 84354d8:	5d                   	pop    %ebp
 84354d9:	c3                   	ret

```

```c
// DB_LoadPowerWarStatueInfo::GetAvatarInfo @ 0x8434d36

/* WARNING: Removing unreachable block (ram,0x08434d87) */
/* DB_LoadPowerWarStatueInfo::GetAvatarInfo(SIG_LOAD_POWER_WAR_STATUE_INFO*, unsigned int) */

undefined4 __thiscall
DB_LoadPowerWarStatueInfo::GetAvatarInfo
          (DB_LoadPowerWarStatueInfo *this,SIG_LOAD_POWER_WAR_STATUE_INFO *param_1,uint param_2)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  Inven_Item *this_00;
  int iVar6;
  bool bVar7;
  int local_ed8 [345];
  Inven_Item local_974 [610];
  char local_712 [2];
  undefined4 local_710;
  char local_436 [890];
  uint local_bc;
  cMyTrace local_b8 [16];
  cMyTrace local_a8 [16];
  cMyTrace local_98 [16];
  cMyTrace local_88 [16];
  cMyTrace local_78 [16];
  cMyTrace local_68 [16];
  cMyTrace local_58 [16];
  cMyTrace local_48 [16];
  uint local_38;
  MySQL *local_34;
  undefined4 local_30;
  int local_2c;
  int local_24;
  int local_20;
  
  pcVar3 = local_436;
  uVar4 = 0x37a;
  bVar7 = ((uint)pcVar3 & 2) != 0;
  if (bVar7) {
    local_436[0] = '\0';
    local_436[1] = '\0';
    pcVar3 = local_436 + 2;
    uVar4 = 0x378;
  }
  for (uVar4 = uVar4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  if (!bVar7) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
  }
  local_bc = 0x37a;
  local_38 = 0x37a;
  local_34 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(local_34,"seLect equipslot from inventory where charac_no=%u",param_2);
  cVar1 = MySQL::exec(local_34,true);
  if ((cVar1 == '\x01') && (cVar1 = MySQL::fetch(local_34), cVar1 == '\x01')) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (bVar7) {
    cMyTrace::cMyTrace(local_b8,
                       "bool DB_LoadPowerWarStatueInfo::GetAvatarInfo(SIG_LOAD_POWER_WAR_STATUE_INFO*, unsigned int)"
                       ,0x7f09,5);
    cMyTrace::operator()
              (local_b8,
               "DB_LoadPowerWarStatueInfo::GetAvatarInfo, exec() or fetch() ERROR charac_no=%u",
               param_2);
    uVar5 = 0;
  }
  else {
    local_30 = 0x73;
    this_00 = local_974;
    for (iVar6 = 0x15; iVar6 != -1; iVar6 = iVar6 + -1) {
      Inven_Item::Inven_Item(this_00);
      this_00 = this_00 + 0x3d;
    }
    memset(local_ed8,0,0x564);
    local_38 = MySQL::get_binary_length(local_34,0);
    cVar1 = MySQL::get_binary(local_34,0,local_436,local_bc);
    if (cVar1 == '\x01') {
      if (local_bc < local_38) {
        puVar2 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar2 = 0x7f1c;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08434f71 to 0843505c has its CatchHandler @ 08435067 */
        __cxa_throw(puVar2,&unsigned_int::typeinfo,0);
      }
      cVar1 = uncompress_zip(local_712,&local_bc,local_436,local_38);
      if (cVar1 != '\x01') {
        puVar2 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar2 = 0x7f1e;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar2,&unsigned_int::typeinfo,0);
      }
      if ((local_bc == (local_bc / 0x3d) * 0x3d) || (local_bc == 0)) {
        *(undefined4 *)(param_1 + 0x7c) = local_710;
        MySQL::set_query(local_34,
                         "seLect slot,it_id,clear_avatar_id from user_items where charac_no=%u and expire_date>now() and stat=0 limit %d"
                         ,param_2,0x73);
        cVar1 = MySQL::exec(local_34,true);
        if (cVar1 == '\x01') {
          local_2c = MySQL::get_n_rows(local_34);
          for (local_24 = 0; local_24 < local_2c; local_24 = local_24 + 1) {
            cVar1 = MySQL::fetch(local_34);
            if (cVar1 != '\x01') {
              cMyTrace::cMyTrace(local_78,
                                 "bool DB_LoadPowerWarStatueInfo::GetAvatarInfo(SIG_LOAD_POWER_WAR_STATUE_INFO*, unsigned int)"
                                 ,0x7f3f,5);
              cMyTrace::operator()
                        (local_78,
                         "DB_LoadPowerWarStatueInfo::GetAvatarInfo, exec() ERROR charac_no=%u",
                         param_2);
              break;
            }
            cVar1 = MySQL::get_int(local_34,0,local_ed8 + local_24 * 3);
            if (cVar1 != '\x01') {
              cMyTrace::cMyTrace(local_68,
                                 "bool DB_LoadPowerWarStatueInfo::GetAvatarInfo(SIG_LOAD_POWER_WAR_STATUE_INFO*, unsigned int)"
                                 ,0x7f45,5);
              cMyTrace::operator()
                        (local_68,
                         "DB_LoadPowerWarStatueInfo::GetAvatarInfo, get_int(0) ERROR charac_no=%u",
                         param_2);
              return 0;
            }
            cVar1 = MySQL::get_int(local_34,1,local_ed8 + local_24 * 3 + 1);
            if (cVar1 != '\x01') {
              cMyTrace::cMyTrace(local_58,
                                 "bool DB_LoadPowerWarStatueInfo::GetAvatarInfo(SIG_LOAD_POWER_WAR_STATUE_INFO*, unsigned int)"
                                 ,0x7f4b,5);
              cMyTrace::operator()
                        (local_58,
                         "DB_LoadPowerWarStatueInfo::GetAvatarInfo, get_int(1) ERROR charac_no=%u",
                         param_2);
              return 0;
            }
            cVar1 = MySQL::get_int(local_34,2,local_ed8 + local_24 * 3 + 2);
            if (cVar1 != '\x01') {
              cMyTrace::cMyTrace(local_48,
                                 "bool DB_LoadPowerWarStatueInfo::GetAvatarInfo(SIG_LOAD_POWER_WAR_STATUE_INFO*, unsigned int)"
                                 ,0x7f51,5);
              cMyTrace::operator()
                        (local_48,
                         "DB_LoadPowerWarStatueInfo::GetAvatarInfo, get_int(2) ERROR charac_no=%u",
                         param_2);
              return 0;
            }
            if ((-1 < local_ed8[local_24 * 3]) && (local_ed8[local_24 * 3] < 10)) {
              *(int *)(param_1 + (local_ed8[local_24 * 3] + 0x14) * 4 + 4) =
                   local_ed8[local_24 * 3 + 1];
            }
          }
          for (local_20 = 0; local_20 < local_2c; local_20 = local_20 + 1) {
            if (local_ed8[local_20 * 3 + 2] != 0) {
              MySQL::set_query(local_34,"seLect it_id from user_items where ui_id=%d",
                               local_ed8[local_20 * 3 + 2]);
              cVar1 = MySQL::exec(local_34,true);
              if ((cVar1 == '\0') || (cVar1 = MySQL::fetch(local_34), cVar1 == '\0')) {
                bVar7 = false;
              }
              else {
                bVar7 = true;
              }
              if (bVar7) {
                MySQL::get_int(local_34,0,
                               (int *)(param_1 + (local_ed8[local_20 * 3] + 0x14) * 4 + 4));
              }
            }
          }
          uVar5 = 1;
        }
        else {
          cMyTrace::cMyTrace(local_88,
                             "bool DB_LoadPowerWarStatueInfo::GetAvatarInfo(SIG_LOAD_POWER_WAR_STATUE_INFO*, unsigned int)"
                             ,0x7f35,5);
          cMyTrace::operator()
                    (local_88,"DB_LoadPowerWarStatueInfo::GetAvatarInfo, exec() ERROR charac_no=%u",
                     param_2);
          uVar5 = 0;
        }
      }
      else {
        cMyTrace::cMyTrace(local_98,
                           "bool DB_LoadPowerWarStatueInfo::GetAvatarInfo(SIG_LOAD_POWER_WAR_STATUE_INFO*, unsigned int)"
                           ,0x7f23,5);
        cMyTrace::operator()
                  (local_98,
                   "incorrect equipment size charac_no(%d), equipment, original_size(%d), db_size(%d)\n"
                   ,param_2,0x53e,local_38);
        uVar5 = 0;
      }
    }
    else {
      cMyTrace::cMyTrace(local_a8,
                         "bool DB_LoadPowerWarStatueInfo::GetAvatarInfo(SIG_LOAD_POWER_WAR_STATUE_INFO*, unsigned int)"
                         ,0x7f15,5);
      cMyTrace::operator()
                (local_a8,
                 "DB_LoadPowerWarStatueInfo::GetAvatarInfo, get_binary(0) ERROR charac_no=%u",
                 param_2);
      uVar5 = 0;
    }
  }
  return uVar5;
}

```

---

## GetCharacInfo

```asm
// === 08434a8a DB_LoadPowerWarStatueInfo::GetCharacInfo  [0x08434a8a-0x8434d35] ===
 8434a8a:	55                   	push   %ebp
 8434a8b:	89 e5                	mov    %esp,%ebp
 8434a8d:	83 ec 28             	sub    $0x28,%esp
 8434a90:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8434a95:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8434a9c:	00 
 8434a9d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8434aa4:	00 
 8434aa5:	89 04 24             	mov    %eax,(%esp)
 8434aa8:	e8 91 07 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8434aad:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8434ab0:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8434ab5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8434abc:	00 
 8434abd:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 8434ac4:	00 
 8434ac5:	89 04 24             	mov    %eax,(%esp)
 8434ac8:	e8 71 07 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8434acd:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8434ad0:	8b 45 10             	mov    0x10(%ebp),%eax
 8434ad3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8434ad7:	c7 44 24 04 ec 2d c5 	movl   $0x8c52dec,0x4(%esp)
 8434ade:	08 
 8434adf:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8434ae2:	89 04 24             	mov    %eax,(%esp)
 8434ae5:	e8 d6 f6 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8434aea:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8434af1:	00 
 8434af2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8434af5:	89 04 24             	mov    %eax,(%esp)
 8434af8:	e8 29 f8 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8434afd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8434b04:	00 
 8434b05:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8434b08:	89 04 24             	mov    %eax,(%esp)
 8434b0b:	e8 16 f8 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8434b10:	83 f0 01             	xor    $0x1,%eax
 8434b13:	84 c0                	test   %al,%al
 8434b15:	75 12                	jne    8434b29 <_ZN25DB_LoadPowerWarStatueInfo13GetCharacInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x9f>
 8434b17:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8434b1a:	89 04 24             	mov    %eax,(%esp)
 8434b1d:	e8 9a f9 fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8434b22:	83 f0 01             	xor    $0x1,%eax
 8434b25:	84 c0                	test   %al,%al
 8434b27:	74 07                	je     8434b30 <_ZN25DB_LoadPowerWarStatueInfo13GetCharacInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0xa6>
 8434b29:	b8 01 00 00 00       	mov    $0x1,%eax
 8434b2e:	eb 05                	jmp    8434b35 <_ZN25DB_LoadPowerWarStatueInfo13GetCharacInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0xab>
 8434b30:	b8 00 00 00 00       	mov    $0x0,%eax
 8434b35:	84 c0                	test   %al,%al
 8434b37:	74 0a                	je     8434b43 <_ZN25DB_LoadPowerWarStatueInfo13GetCharacInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0xb9>
 8434b39:	b8 00 00 00 00       	mov    $0x0,%eax
 8434b3e:	e9 f1 01 00 00       	jmp    8434d34 <_ZN25DB_LoadPowerWarStatueInfo13GetCharacInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x2aa>
 8434b43:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8434b46:	89 04 24             	mov    %eax,(%esp)
 8434b49:	e8 1e d8 ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8434b4e:	83 f8 01             	cmp    $0x1,%eax
 8434b51:	0f 95 c0             	setne  %al
 8434b54:	84 c0                	test   %al,%al
 8434b56:	74 0a                	je     8434b62 <_ZN25DB_LoadPowerWarStatueInfo13GetCharacInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0xd8>
 8434b58:	b8 00 00 00 00       	mov    $0x0,%eax
 8434b5d:	e9 d2 01 00 00       	jmp    8434d34 <_ZN25DB_LoadPowerWarStatueInfo13GetCharacInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x2aa>
 8434b62:	8b 45 0c             	mov    0xc(%ebp),%eax
 8434b65:	83 c0 04             	add    $0x4,%eax
 8434b68:	c7 44 24 0c 1d 00 00 	movl   $0x1d,0xc(%esp)
 8434b6f:	00 
 8434b70:	89 44 24 08          	mov    %eax,0x8(%esp)
 8434b74:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8434b7b:	00 
 8434b7c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8434b7f:	89 04 24             	mov    %eax,(%esp)
 8434b82:	e8 63 82 cb ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 8434b87:	83 f0 01             	xor    $0x1,%eax
 8434b8a:	84 c0                	test   %al,%al
 8434b8c:	74 0a                	je     8434b98 <_ZN25DB_LoadPowerWarStatueInfo13GetCharacInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x10e>
 8434b8e:	b8 00 00 00 00       	mov    $0x0,%eax
 8434b93:	e9 9c 01 00 00       	jmp    8434d34 <_ZN25DB_LoadPowerWarStatueInfo13GetCharacInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x2aa>
 8434b98:	8b 45 0c             	mov    0xc(%ebp),%eax
 8434b9b:	83 c0 23             	add    $0x23,%eax
 8434b9e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8434ba2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8434ba9:	00 
 8434baa:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8434bad:	89 04 24             	mov    %eax,(%esp)
 8434bb0:	e8 9f 92 cc ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 8434bb5:	83 f0 01             	xor    $0x1,%eax
 8434bb8:	84 c0                	test   %al,%al
 8434bba:	74 0a                	je     8434bc6 <_ZN25DB_LoadPowerWarStatueInfo13GetCharacInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x13c>
 8434bbc:	b8 00 00 00 00       	mov    $0x0,%eax
 8434bc1:	e9 6e 01 00 00       	jmp    8434d34 <_ZN25DB_LoadPowerWarStatueInfo13GetCharacInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x2aa>
 8434bc6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8434bc9:	83 c0 22             	add    $0x22,%eax
 8434bcc:	89 44 24 08          	mov    %eax,0x8(%esp)
 8434bd0:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8434bd7:	00 
 8434bd8:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8434bdb:	89 04 24             	mov    %eax,(%esp)
 8434bde:	e8 71 92 cc ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 8434be3:	83 f0 01             	xor    $0x1,%eax
 8434be6:	84 c0                	test   %al,%al
 8434be8:	74 0a                	je     8434bf4 <_ZN25DB_LoadPowerWarStatueInfo13GetCharacInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x16a>
 8434bea:	b8 00 00 00 00       	mov    $0x0,%eax
 8434bef:	e9 40 01 00 00       	jmp    8434d34 <_ZN25DB_LoadPowerWarStatueInfo13GetCharacInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x2aa>
 8434bf4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8434bf7:	83 c0 24             	add    $0x24,%eax
 8434bfa:	89 44 24 08          	mov    %eax,0x8(%esp)
 8434bfe:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8434c05:	00 
 8434c06:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8434c09:	89 04 24             	mov    %eax,(%esp)
 8434c0c:	e8 43 92 cc ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 8434c11:	83 f0 01             	xor    $0x1,%eax
 8434c14:	84 c0                	test   %al,%al
 8434c16:	74 0a                	je     8434c22 <_ZN25DB_LoadPowerWarStatueInfo13GetCharacInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x198>
 8434c18:	b8 00 00 00 00       	mov    $0x0,%eax
 8434c1d:	e9 12 01 00 00       	jmp    8434d34 <_ZN25DB_LoadPowerWarStatueInfo13GetCharacInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x2aa>
 8434c22:	e8 5a 75 c9 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8434c27:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 8434c2d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8434c30:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8434c37:	8b 45 0c             	mov    0xc(%ebp),%eax
 8434c3a:	83 c0 50             	add    $0x50,%eax
 8434c3d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8434c41:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8434c48:	00 
 8434c49:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8434c4c:	89 04 24             	mov    %eax,(%esp)
 8434c4f:	e8 9e d6 ca ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8434c54:	83 f0 01             	xor    $0x1,%eax
 8434c57:	84 c0                	test   %al,%al
 8434c59:	74 0a                	je     8434c65 <_ZN25DB_LoadPowerWarStatueInfo13GetCharacInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x1db>
 8434c5b:	b8 00 00 00 00       	mov    $0x0,%eax
 8434c60:	e9 cf 00 00 00       	jmp    8434d34 <_ZN25DB_LoadPowerWarStatueInfo13GetCharacInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x2aa>
 8434c65:	8b 45 0c             	mov    0xc(%ebp),%eax
 8434c68:	8b 40 50             	mov    0x50(%eax),%eax
 8434c6b:	85 c0                	test   %eax,%eax
 8434c6d:	75 0a                	jne    8434c79 <_ZN25DB_LoadPowerWarStatueInfo13GetCharacInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x1ef>
 8434c6f:	b8 01 00 00 00       	mov    $0x1,%eax
 8434c74:	e9 bb 00 00 00       	jmp    8434d34 <_ZN25DB_LoadPowerWarStatueInfo13GetCharacInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x2aa>
 8434c79:	8b 45 0c             	mov    0xc(%ebp),%eax
 8434c7c:	8b 40 50             	mov    0x50(%eax),%eax
 8434c7f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8434c82:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8434c86:	89 44 24 08          	mov    %eax,0x8(%esp)
 8434c8a:	c7 44 24 04 54 2e c5 	movl   $0x8c52e54,0x4(%esp)
 8434c91:	08 
 8434c92:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8434c95:	89 04 24             	mov    %eax,(%esp)
 8434c98:	e8 23 f5 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8434c9d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8434ca4:	00 
 8434ca5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8434ca8:	89 04 24             	mov    %eax,(%esp)
 8434cab:	e8 76 f6 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8434cb0:	83 f0 01             	xor    $0x1,%eax
 8434cb3:	84 c0                	test   %al,%al
 8434cb5:	75 12                	jne    8434cc9 <_ZN25DB_LoadPowerWarStatueInfo13GetCharacInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x23f>
 8434cb7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8434cba:	89 04 24             	mov    %eax,(%esp)
 8434cbd:	e8 fa f7 fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8434cc2:	83 f0 01             	xor    $0x1,%eax
 8434cc5:	84 c0                	test   %al,%al
 8434cc7:	74 07                	je     8434cd0 <_ZN25DB_LoadPowerWarStatueInfo13GetCharacInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x246>
 8434cc9:	b8 01 00 00 00       	mov    $0x1,%eax
 8434cce:	eb 05                	jmp    8434cd5 <_ZN25DB_LoadPowerWarStatueInfo13GetCharacInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x24b>
 8434cd0:	b8 00 00 00 00       	mov    $0x0,%eax
 8434cd5:	84 c0                	test   %al,%al
 8434cd7:	74 07                	je     8434ce0 <_ZN25DB_LoadPowerWarStatueInfo13GetCharacInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x256>
 8434cd9:	b8 00 00 00 00       	mov    $0x0,%eax
 8434cde:	eb 54                	jmp    8434d34 <_ZN25DB_LoadPowerWarStatueInfo13GetCharacInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x2aa>
 8434ce0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8434ce3:	89 04 24             	mov    %eax,(%esp)
 8434ce6:	e8 81 d6 ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8434ceb:	83 f8 01             	cmp    $0x1,%eax
 8434cee:	0f 95 c0             	setne  %al
 8434cf1:	84 c0                	test   %al,%al
 8434cf3:	74 07                	je     8434cfc <_ZN25DB_LoadPowerWarStatueInfo13GetCharacInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x272>
 8434cf5:	b8 00 00 00 00       	mov    $0x0,%eax
 8434cfa:	eb 38                	jmp    8434d34 <_ZN25DB_LoadPowerWarStatueInfo13GetCharacInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x2aa>
 8434cfc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8434cff:	83 c0 25             	add    $0x25,%eax
 8434d02:	c7 44 24 0c 28 00 00 	movl   $0x28,0xc(%esp)
 8434d09:	00 
 8434d0a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8434d0e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8434d15:	00 
 8434d16:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8434d19:	89 04 24             	mov    %eax,(%esp)
 8434d1c:	e8 c9 80 cb ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 8434d21:	83 f0 01             	xor    $0x1,%eax
 8434d24:	84 c0                	test   %al,%al
 8434d26:	74 07                	je     8434d2f <_ZN25DB_LoadPowerWarStatueInfo13GetCharacInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x2a5>
 8434d28:	b8 00 00 00 00       	mov    $0x0,%eax
 8434d2d:	eb 05                	jmp    8434d34 <_ZN25DB_LoadPowerWarStatueInfo13GetCharacInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj+0x2aa>
 8434d2f:	b8 01 00 00 00       	mov    $0x1,%eax
 8434d34:	c9                   	leave
 8434d35:	c3                   	ret

```

```c
// DB_LoadPowerWarStatueInfo::GetCharacInfo @ 0x8434a8a

/* DB_LoadPowerWarStatueInfo::GetCharacInfo(SIG_LOAD_POWER_WAR_STATUE_INFO*, unsigned int) */

undefined4 __thiscall
DB_LoadPowerWarStatueInfo::GetCharacInfo
          (DB_LoadPowerWarStatueInfo *this,SIG_LOAD_POWER_WAR_STATUE_INFO *param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  MySQL *this_00;
  MySQL *this_01;
  int iVar3;
  undefined4 uVar4;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  this_01 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,8,0);
  MySQL::set_query(this_00,
                   "seLect charac_name,job,lev,grow_type,guild_id from charac_info where charac_no=%d and delete_flag!=1"
                   ,param_2);
  MySQL::exec(this_00,true);
  cVar2 = MySQL::exec(this_00,true);
  if ((cVar2 == '\x01') && (cVar2 = MySQL::fetch(this_00), cVar2 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return 0;
  }
  iVar3 = MySQL::get_n_rows(this_00);
  if (iVar3 != 1) {
    return 0;
  }
  cVar2 = MySQL::get_str(this_00,0,(char *)(param_1 + 4),0x1d);
  if (cVar2 != '\x01') {
    return 0;
  }
  cVar2 = MySQL::get_byte(this_00,1,(char *)(param_1 + 0x23));
  if (cVar2 != '\x01') {
    return 0;
  }
  cVar2 = MySQL::get_byte(this_00,2,(char *)(param_1 + 0x22));
  if (cVar2 != '\x01') {
    return 0;
  }
  cVar2 = MySQL::get_byte(this_00,3,(char *)(param_1 + 0x24));
  if (cVar2 != '\x01') {
    return 0;
  }
  iVar3 = G_CEnvironment();
  uVar4 = *(undefined4 *)(iVar3 + 0x378);
  cVar2 = MySQL::get_uint(this_00,4,(uint *)(param_1 + 0x50));
  if (cVar2 == '\x01') {
    if (*(int *)(param_1 + 0x50) != 0) {
      MySQL::set_query(this_01,
                       "seLect guild_name from guild_info where guild_id=%d and server_id=%d",
                       *(undefined4 *)(param_1 + 0x50),uVar4);
      cVar2 = MySQL::exec(this_01,true);
      if ((cVar2 == '\x01') && (cVar2 = MySQL::fetch(this_01), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar4 = 0;
      }
      else {
        iVar3 = MySQL::get_n_rows(this_01);
        if (iVar3 == 1) {
          cVar2 = MySQL::get_str(this_01,0,(char *)(param_1 + 0x25),0x28);
          if (cVar2 == '\x01') {
            uVar4 = 1;
          }
          else {
            uVar4 = 0;
          }
        }
        else {
          uVar4 = 0;
        }
      }
      return uVar4;
    }
    return 1;
  }
  return 0;
}

```

---

## dispatch

```asm
// === 08434886 DB_LoadPowerWarStatueInfo::dispatch  [0x08434886-0x8434a89] ===
 8434886:	55                   	push   %ebp
 8434887:	89 e5                	mov    %esp,%ebp
 8434889:	56                   	push   %esi
 843488a:	53                   	push   %ebx
 843488b:	83 ec 40             	sub    $0x40,%esp
 843488e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8434893:	c7 44 24 08 9d 7e 00 	movl   $0x7e9d,0x8(%esp)
 843489a:	00 
 843489b:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84348a2:	08 
 84348a3:	89 04 24             	mov    %eax,(%esp)
 84348a6:	e8 db b1 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84348ab:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84348b2:	00 
 84348b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84348b7:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84348ba:	89 04 24             	mov    %eax,(%esp)
 84348bd:	e8 64 43 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84348c2:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84348c5:	89 04 24             	mov    %eax,(%esp)
 84348c8:	e8 79 43 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84348cd:	8b 55 0c             	mov    0xc(%ebp),%edx
 84348d0:	89 54 24 04          	mov    %edx,0x4(%esp)
 84348d4:	89 04 24             	mov    %eax,(%esp)
 84348d7:	e8 7a 43 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84348dc:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84348df:	89 04 24             	mov    %eax,(%esp)
 84348e2:	e8 5f 43 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84348e7:	8b 55 10             	mov    0x10(%ebp),%edx
 84348ea:	89 54 24 04          	mov    %edx,0x4(%esp)
 84348ee:	89 04 24             	mov    %eax,(%esp)
 84348f1:	e8 60 43 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84348f6:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84348f9:	89 04 24             	mov    %eax,(%esp)
 84348fc:	e8 4d 43 c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8434901:	89 04 24             	mov    %eax,(%esp)
 8434904:	e8 3f e8 01 00       	call   8453148 <_ZN12CStreamGuard11GetInBufferI30SIG_LOAD_POWER_WAR_STATUE_INFOEEPT_v>
 8434909:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843490c:	c7 44 24 08 80 00 00 	movl   $0x80,0x8(%esp)
 8434913:	00 
 8434914:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843491b:	00 
 843491c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843491f:	89 04 24             	mov    %eax,(%esp)
 8434922:	e8 99 93 c4 ff       	call   807dcc0 <memset@plt>
 8434927:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 843492e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8434931:	89 44 24 04          	mov    %eax,0x4(%esp)
 8434935:	8b 45 14             	mov    0x14(%ebp),%eax
 8434938:	89 04 24             	mov    %eax,(%esp)
 843493b:	e8 56 7e 1e 00       	call   861c796 <_ZN6StreamrsERj>
 8434940:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8434943:	89 44 24 08          	mov    %eax,0x8(%esp)
 8434947:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843494a:	89 44 24 04          	mov    %eax,0x4(%esp)
 843494e:	8b 45 08             	mov    0x8(%ebp),%eax
 8434951:	89 04 24             	mov    %eax,(%esp)
 8434954:	e8 31 01 00 00       	call   8434a8a <_ZN25DB_LoadPowerWarStatueInfo13GetCharacInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj>
 8434959:	83 f0 01             	xor    $0x1,%eax
 843495c:	84 c0                	test   %al,%al
 843495e:	74 58                	je     84349b8 <_ZN25DB_LoadPowerWarStatueInfo8dispatchEiiP6Stream+0x132>
 8434960:	c7 44 24 08 80 00 00 	movl   $0x80,0x8(%esp)
 8434967:	00 
 8434968:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843496f:	00 
 8434970:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8434973:	89 04 24             	mov    %eax,(%esp)
 8434976:	e8 45 93 c4 ff       	call   807dcc0 <memset@plt>
 843497b:	8b 5d c8             	mov    -0x38(%ebp),%ebx
 843497e:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8434985:	00 
 8434986:	c7 44 24 08 af 7e 00 	movl   $0x7eaf,0x8(%esp)
 843498d:	00 
 843498e:	c7 44 24 04 e0 be c5 	movl   $0x8c5bee0,0x4(%esp)
 8434995:	08 
 8434996:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8434999:	89 04 24             	mov    %eax,(%esp)
 843499c:	e8 77 ad 11 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84349a1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84349a5:	c7 44 24 04 58 2d c5 	movl   $0x8c52d58,0x4(%esp)
 84349ac:	08 
 84349ad:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84349b0:	89 04 24             	mov    %eax,(%esp)
 84349b3:	e8 d0 ad 11 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84349b8:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84349bb:	89 44 24 08          	mov    %eax,0x8(%esp)
 84349bf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84349c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84349c6:	8b 45 08             	mov    0x8(%ebp),%eax
 84349c9:	89 04 24             	mov    %eax,(%esp)
 84349cc:	e8 65 03 00 00       	call   8434d36 <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj>
 84349d1:	83 f0 01             	xor    $0x1,%eax
 84349d4:	84 c0                	test   %al,%al
 84349d6:	74 58                	je     8434a30 <_ZN25DB_LoadPowerWarStatueInfo8dispatchEiiP6Stream+0x1aa>
 84349d8:	c7 44 24 08 80 00 00 	movl   $0x80,0x8(%esp)
 84349df:	00 
 84349e0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84349e7:	00 
 84349e8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84349eb:	89 04 24             	mov    %eax,(%esp)
 84349ee:	e8 cd 92 c4 ff       	call   807dcc0 <memset@plt>
 84349f3:	8b 5d c8             	mov    -0x38(%ebp),%ebx
 84349f6:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84349fd:	00 
 84349fe:	c7 44 24 08 b7 7e 00 	movl   $0x7eb7,0x8(%esp)
 8434a05:	00 
 8434a06:	c7 44 24 04 e0 be c5 	movl   $0x8c5bee0,0x4(%esp)
 8434a0d:	08 
 8434a0e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8434a11:	89 04 24             	mov    %eax,(%esp)
 8434a14:	e8 ff ac 11 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8434a19:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8434a1d:	c7 44 24 04 a4 2d c5 	movl   $0x8c52da4,0x4(%esp)
 8434a24:	08 
 8434a25:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8434a28:	89 04 24             	mov    %eax,(%esp)
 8434a2b:	e8 58 ad 11 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8434a30:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8434a33:	89 c2                	mov    %eax,%edx
 8434a35:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8434a38:	89 10                	mov    %edx,(%eax)
 8434a3a:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8434a3f:	8d 55 cc             	lea    -0x34(%ebp),%edx
 8434a42:	89 54 24 08          	mov    %edx,0x8(%esp)
 8434a46:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8434a4d:	00 
 8434a4e:	89 04 24             	mov    %eax,(%esp)
 8434a51:	e8 88 c5 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8434a56:	bb 01 00 00 00       	mov    $0x1,%ebx
 8434a5b:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8434a5e:	89 04 24             	mov    %eax,(%esp)
 8434a61:	e8 6c 7e 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8434a66:	89 d8                	mov    %ebx,%eax
 8434a68:	83 c4 40             	add    $0x40,%esp
 8434a6b:	5b                   	pop    %ebx
 8434a6c:	5e                   	pop    %esi
 8434a6d:	5d                   	pop    %ebp
 8434a6e:	c3                   	ret
 8434a6f:	89 d3                	mov    %edx,%ebx
 8434a71:	89 c6                	mov    %eax,%esi
 8434a73:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8434a76:	89 04 24             	mov    %eax,(%esp)
 8434a79:	e8 54 7e 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8434a7e:	89 f0                	mov    %esi,%eax
 8434a80:	89 da                	mov    %ebx,%edx
 8434a82:	89 04 24             	mov    %eax,(%esp)
 8434a85:	e8 c6 ec 6a 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// DB_LoadPowerWarStatueInfo::dispatch @ 0x8434886

/* DB_LoadPowerWarStatueInfo::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadPowerWarStatueInfo::dispatch
          (DB_LoadPowerWarStatueInfo *this,int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  uint local_3c;
  CStreamGuard local_38 [8];
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  SIG_LOAD_POWER_WAR_STATUE_INFO *local_10;
  
  pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7e9d);
  CStreamGuard::CStreamGuard(local_38,pSVar3,true);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_38);
                    /* try { // try from 084348d7 to 08434a55 has its CatchHandler @ 08434a6f */
  CStreamGuard::operator<<(pCVar4,param_1);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_38);
  CStreamGuard::operator<<(pCVar4,param_2);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_38);
  local_10 = CStreamGuard::GetInBuffer<SIG_LOAD_POWER_WAR_STATUE_INFO>(pCVar4);
  memset(local_10,0,0x80);
  local_3c = 0;
  Stream::operator>>(param_3,&local_3c);
  cVar2 = GetCharacInfo(this,local_10,local_3c);
  if (cVar2 != '\x01') {
    memset(local_10,0,0x80);
    uVar1 = local_3c;
    cMyTrace::cMyTrace(local_30,
                       "virtual bool DB_LoadPowerWarStatueInfo::dispatch(int, int, Stream*)",0x7eaf,
                       5);
    cMyTrace::operator()
              (local_30,"DB_LoadPowerWarStatueInfo::GetInvenInfo, GetCharacInfo ERROR charac_no=%u",
               uVar1);
  }
  cVar2 = GetAvatarInfo(this,local_10,local_3c);
  if (cVar2 != '\x01') {
    memset(local_10,0,0x80);
    uVar1 = local_3c;
    cMyTrace::cMyTrace(local_20,
                       "virtual bool DB_LoadPowerWarStatueInfo::dispatch(int, int, Stream*)",0x7eb7,
                       5);
    cMyTrace::operator()
              (local_20,"DB_LoadPowerWarStatueInfo::GetInvenInfo, exec GetInvenInfo charac_no=%u",
               uVar1);
  }
  *(uint *)local_10 = local_3c;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_38);
  CStreamGuard::~CStreamGuard(local_38);
  return 1;
}

```

