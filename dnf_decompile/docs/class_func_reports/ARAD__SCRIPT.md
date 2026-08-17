# ARAD__SCRIPT

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## importAradEventScript

```asm
// === 088b3bd8 ARAD::SCRIPT::importAradEventScript  [0x088b3bd8-0x88b4127] ===
 88b3bd8:	55                   	push   %ebp
 88b3bd9:	89 e5                	mov    %esp,%ebp
 88b3bdb:	56                   	push   %esi
 88b3bdc:	53                   	push   %ebx
 88b3bdd:	81 ec a0 00 00 00    	sub    $0xa0,%esp
 88b3be3:	8b 45 08             	mov    0x8(%ebp),%eax
 88b3be6:	89 04 24             	mov    %eax,(%esp)
 88b3be9:	e8 68 23 8e ff       	call   8195f56 <_ZNSt6vectorIN4ARAD6SCRIPT16SEventPeriodDataESaIS2_EE5clearEv>
 88b3bee:	8b 45 0c             	mov    0xc(%ebp),%eax
 88b3bf1:	89 04 24             	mov    %eax,(%esp)
 88b3bf4:	e8 fd 07 00 00       	call   88b43f6 <_ZNSt6vectorIN4ARAD6SCRIPT17SRewardPeriodDataESaIS2_EE5clearEv>
 88b3bf9:	c7 44 24 04 ea 75 e0 	movl   $0x8e075ea,0x4(%esp)
 88b3c00:	08 
 88b3c01:	c7 04 24 02 76 e0 08 	movl   $0x8e07602,(%esp)
 88b3c08:	e8 1c 81 00 00       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 88b3c0d:	83 f0 01             	xor    $0x1,%eax
 88b3c10:	84 c0                	test   %al,%al
 88b3c12:	74 0a                	je     88b3c1e <_ZN4ARAD6SCRIPT21importAradEventScriptERSt6vectorINS0_16SEventPeriodDataESaIS2_EERS1_INS0_17SRewardPeriodDataESaIS6_EE+0x46>
 88b3c14:	bb 00 00 00 00       	mov    $0x0,%ebx
 88b3c19:	e9 fd 04 00 00       	jmp    88b411b <_ZN4ARAD6SCRIPT21importAradEventScriptERSt6vectorINS0_16SEventPeriodDataESaIS2_EERS1_INS0_17SRewardPeriodDataESaIS6_EE+0x543>
 88b3c1e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 88b3c21:	89 04 24             	mov    %eax,(%esp)
 88b3c24:	e8 a7 29 e5 ff       	call   87065d0 <_ZNSsC1Ev>
 88b3c29:	c6 45 c7 00          	movb   $0x0,-0x39(%ebp)
 88b3c2d:	eb 01                	jmp    88b3c30 <_ZN4ARAD6SCRIPT21importAradEventScriptERSt6vectorINS0_16SEventPeriodDataESaIS2_EERS1_INS0_17SRewardPeriodDataESaIS6_EE+0x58>
 88b3c2f:	90                   	nop
 88b3c30:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 88b3c37:	00 
 88b3c38:	8d 45 c8             	lea    -0x38(%ebp),%eax
 88b3c3b:	89 04 24             	mov    %eax,(%esp)
 88b3c3e:	e8 1c 8c 00 00       	call   88bc85f <_Z8ScanTypeRSsb>
 88b3c43:	83 f0 01             	xor    $0x1,%eax
 88b3c46:	84 c0                	test   %al,%al
 88b3c48:	0f 85 36 04 00 00    	jne    88b4084 <_ZN4ARAD6SCRIPT21importAradEventScriptERSt6vectorINS0_16SEventPeriodDataESaIS2_EERS1_INS0_17SRewardPeriodDataESaIS6_EE+0x4ac>
 88b3c4e:	c7 44 24 04 03 76 e0 	movl   $0x8e07603,0x4(%esp)
 88b3c55:	08 
 88b3c56:	8d 45 c8             	lea    -0x38(%ebp),%eax
 88b3c59:	89 04 24             	mov    %eax,(%esp)
 88b3c5c:	e8 40 cd 7c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88b3c61:	84 c0                	test   %al,%al
 88b3c63:	0f 84 a8 01 00 00    	je     88b3e11 <_ZN4ARAD6SCRIPT21importAradEventScriptERSt6vectorINS0_16SEventPeriodDataESaIS2_EERS1_INS0_17SRewardPeriodDataESaIS6_EE+0x239>
 88b3c69:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 88b3c70:	c7 45 be 00 00 00 00 	movl   $0x0,-0x42(%ebp)
 88b3c77:	c7 45 c2 00 00 00 00 	movl   $0x0,-0x3e(%ebp)
 88b3c7e:	c7 45 b6 00 00 00 00 	movl   $0x0,-0x4a(%ebp)
 88b3c85:	c7 45 ba 00 00 00 00 	movl   $0x0,-0x46(%ebp)
 88b3c8c:	8d 45 c7             	lea    -0x39(%ebp),%eax
 88b3c8f:	89 04 24             	mov    %eax,(%esp)
 88b3c92:	e8 e4 86 00 00       	call   88bc37b <_Z7ScanIntPb>
 88b3c97:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 88b3c9a:	0f b6 45 c7          	movzbl -0x39(%ebp),%eax
 88b3c9e:	83 f0 01             	xor    $0x1,%eax
 88b3ca1:	84 c0                	test   %al,%al
 88b3ca3:	74 03                	je     88b3ca8 <_ZN4ARAD6SCRIPT21importAradEventScriptERSt6vectorINS0_16SEventPeriodDataESaIS2_EERS1_INS0_17SRewardPeriodDataESaIS6_EE+0xd0>
 88b3ca5:	90                   	nop
 88b3ca6:	eb 88                	jmp    88b3c30 <_ZN4ARAD6SCRIPT21importAradEventScriptERSt6vectorINS0_16SEventPeriodDataESaIS2_EERS1_INS0_17SRewardPeriodDataESaIS6_EE+0x58>
 88b3ca8:	8d 45 be             	lea    -0x42(%ebp),%eax
 88b3cab:	89 04 24             	mov    %eax,(%esp)
 88b3cae:	e8 bd fc ff ff       	call   88b3970 <_ZN4ARAD6SCRIPT8readTimeEPs>
 88b3cb3:	83 f0 01             	xor    $0x1,%eax
 88b3cb6:	84 c0                	test   %al,%al
 88b3cb8:	74 2c                	je     88b3ce6 <_ZN4ARAD6SCRIPT21importAradEventScriptERSt6vectorINS0_16SEventPeriodDataESaIS2_EERS1_INS0_17SRewardPeriodDataESaIS6_EE+0x10e>
 88b3cba:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 88b3cc1:	e8 3a 1b e7 ff       	call   8725800 <__cxa_allocate_exception>
 88b3cc6:	89 c2                	mov    %eax,%edx
 88b3cc8:	c7 02 81 75 e0 08    	movl   $0x8e07581,(%edx)
 88b3cce:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 88b3cd5:	00 
 88b3cd6:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 88b3cdd:	09 
 88b3cde:	89 04 24             	mov    %eax,(%esp)
 88b3ce1:	e8 6a 0f e7 ff       	call   8724c50 <__cxa_throw>
 88b3ce6:	8d 45 b6             	lea    -0x4a(%ebp),%eax
 88b3ce9:	89 04 24             	mov    %eax,(%esp)
 88b3cec:	e8 7f fc ff ff       	call   88b3970 <_ZN4ARAD6SCRIPT8readTimeEPs>
 88b3cf1:	83 f0 01             	xor    $0x1,%eax
 88b3cf4:	84 c0                	test   %al,%al
 88b3cf6:	74 2c                	je     88b3d24 <_ZN4ARAD6SCRIPT21importAradEventScriptERSt6vectorINS0_16SEventPeriodDataESaIS2_EERS1_INS0_17SRewardPeriodDataESaIS6_EE+0x14c>
 88b3cf8:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 88b3cff:	e8 fc 1a e7 ff       	call   8725800 <__cxa_allocate_exception>
 88b3d04:	89 c2                	mov    %eax,%edx
 88b3d06:	c7 02 12 76 e0 08    	movl   $0x8e07612,(%edx)
 88b3d0c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 88b3d13:	00 
 88b3d14:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 88b3d1b:	09 
 88b3d1c:	89 04 24             	mov    %eax,(%esp)
 88b3d1f:	e8 2c 0f e7 ff       	call   8724c50 <__cxa_throw>
 88b3d24:	8d 45 b6             	lea    -0x4a(%ebp),%eax
 88b3d27:	89 04 24             	mov    %eax,(%esp)
 88b3d2a:	e8 1c fe ff ff       	call   88b3b4b <_ZN4ARAD6SCRIPT10uint32TimeEPs>
 88b3d2f:	89 c3                	mov    %eax,%ebx
 88b3d31:	8d 45 be             	lea    -0x42(%ebp),%eax
 88b3d34:	89 04 24             	mov    %eax,(%esp)
 88b3d37:	e8 0f fe ff ff       	call   88b3b4b <_ZN4ARAD6SCRIPT10uint32TimeEPs>
 88b3d3c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 88b3d40:	89 44 24 08          	mov    %eax,0x8(%esp)
 88b3d44:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 88b3d47:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b3d4b:	8d 45 a8             	lea    -0x58(%ebp),%eax
 88b3d4e:	89 04 24             	mov    %eax,(%esp)
 88b3d51:	e8 12 06 00 00       	call   88b4368 <_ZN4ARAD6SCRIPT16SEventPeriodDataC1Eijj>
 88b3d56:	8d 45 cc             	lea    -0x34(%ebp),%eax
 88b3d59:	8b 55 08             	mov    0x8(%ebp),%edx
 88b3d5c:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b3d60:	89 04 24             	mov    %eax,(%esp)
 88b3d63:	e8 2e 22 8e ff       	call   8195f96 <_ZNSt6vectorIN4ARAD6SCRIPT16SEventPeriodDataESaIS2_EE3endEv>
 88b3d68:	83 ec 04             	sub    $0x4,%esp
 88b3d6b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 88b3d6e:	8b 55 08             	mov    0x8(%ebp),%edx
 88b3d71:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b3d75:	89 04 24             	mov    %eax,(%esp)
 88b3d78:	e8 f5 21 8e ff       	call   8195f72 <_ZNSt6vectorIN4ARAD6SCRIPT16SEventPeriodDataESaIS2_EE5beginEv>
 88b3d7d:	83 ec 04             	sub    $0x4,%esp
 88b3d80:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 88b3d83:	8d 55 a8             	lea    -0x58(%ebp),%edx
 88b3d86:	89 54 24 0c          	mov    %edx,0xc(%esp)
 88b3d8a:	8b 55 cc             	mov    -0x34(%ebp),%edx
 88b3d8d:	89 54 24 08          	mov    %edx,0x8(%esp)
 88b3d91:	8b 55 d0             	mov    -0x30(%ebp),%edx
 88b3d94:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b3d98:	89 04 24             	mov    %eax,(%esp)
 88b3d9b:	e8 72 06 00 00       	call   88b4412 <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPN4ARAD6SCRIPT16SEventPeriodDataESt6vectorIS4_SaIS4_EEEES4_ET_SA_SA_RKT0_>
 88b3da0:	83 ec 04             	sub    $0x4,%esp
 88b3da3:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 88b3da6:	8b 55 08             	mov    0x8(%ebp),%edx
 88b3da9:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b3dad:	89 04 24             	mov    %eax,(%esp)
 88b3db0:	e8 e1 21 8e ff       	call   8195f96 <_ZNSt6vectorIN4ARAD6SCRIPT16SEventPeriodDataESaIS2_EE3endEv>
 88b3db5:	83 ec 04             	sub    $0x4,%esp
 88b3db8:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 88b3dbb:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b3dbf:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 88b3dc2:	89 04 24             	mov    %eax,(%esp)
 88b3dc5:	e8 46 22 8e ff       	call   8196010 <_ZN9__gnu_cxxneIPN4ARAD6SCRIPT16SEventPeriodDataESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 88b3dca:	84 c0                	test   %al,%al
 88b3dcc:	74 2c                	je     88b3dfa <_ZN4ARAD6SCRIPT21importAradEventScriptERSt6vectorINS0_16SEventPeriodDataESaIS2_EERS1_INS0_17SRewardPeriodDataESaIS6_EE+0x222>
 88b3dce:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 88b3dd5:	e8 26 1a e7 ff       	call   8725800 <__cxa_allocate_exception>
 88b3dda:	89 c2                	mov    %eax,%edx
 88b3ddc:	c7 02 1b 76 e0 08    	movl   $0x8e0761b,(%edx)
 88b3de2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 88b3de9:	00 
 88b3dea:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 88b3df1:	09 
 88b3df2:	89 04 24             	mov    %eax,(%esp)
 88b3df5:	e8 56 0e e7 ff       	call   8724c50 <__cxa_throw>
 88b3dfa:	8d 45 a8             	lea    -0x58(%ebp),%eax
 88b3dfd:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b3e01:	8b 45 08             	mov    0x8(%ebp),%eax
 88b3e04:	89 04 24             	mov    %eax,(%esp)
 88b3e07:	e8 5a 06 00 00       	call   88b4466 <_ZNSt6vectorIN4ARAD6SCRIPT16SEventPeriodDataESaIS2_EE9push_backERKS2_>
 88b3e0c:	e9 7b fe ff ff       	jmp    88b3c8c <_ZN4ARAD6SCRIPT21importAradEventScriptERSt6vectorINS0_16SEventPeriodDataESaIS2_EERS1_INS0_17SRewardPeriodDataESaIS6_EE+0xb4>
 88b3e11:	c7 44 24 04 29 76 e0 	movl   $0x8e07629,0x4(%esp)
 88b3e18:	08 
 88b3e19:	8d 45 c8             	lea    -0x38(%ebp),%eax
 88b3e1c:	89 04 24             	mov    %eax,(%esp)
 88b3e1f:	e8 7d cb 7c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88b3e24:	84 c0                	test   %al,%al
 88b3e26:	0f 84 03 fe ff ff    	je     88b3c2f <_ZN4ARAD6SCRIPT21importAradEventScriptERSt6vectorINS0_16SEventPeriodDataESaIS2_EERS1_INS0_17SRewardPeriodDataESaIS6_EE+0x57>
 88b3e2c:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 88b3e33:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
 88b3e3a:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 88b3e41:	c7 45 94 00 00 00 00 	movl   $0x0,-0x6c(%ebp)
 88b3e48:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
 88b3e4f:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 88b3e56:	66 c7 45 f2 00 00    	movw   $0x0,-0xe(%ebp)
 88b3e5c:	8d 45 c7             	lea    -0x39(%ebp),%eax
 88b3e5f:	89 04 24             	mov    %eax,(%esp)
 88b3e62:	e8 14 85 00 00       	call   88bc37b <_Z7ScanIntPb>
 88b3e67:	89 45 e8             	mov    %eax,-0x18(%ebp)
 88b3e6a:	0f b6 45 c7          	movzbl -0x39(%ebp),%eax
 88b3e6e:	83 f0 01             	xor    $0x1,%eax
 88b3e71:	84 c0                	test   %al,%al
 88b3e73:	74 06                	je     88b3e7b <_ZN4ARAD6SCRIPT21importAradEventScriptERSt6vectorINS0_16SEventPeriodDataESaIS2_EERS1_INS0_17SRewardPeriodDataESaIS6_EE+0x2a3>
 88b3e75:	90                   	nop
 88b3e76:	e9 b5 fd ff ff       	jmp    88b3c30 <_ZN4ARAD6SCRIPT21importAradEventScriptERSt6vectorINS0_16SEventPeriodDataESaIS2_EERS1_INS0_17SRewardPeriodDataESaIS6_EE+0x58>
 88b3e7b:	8d 45 9c             	lea    -0x64(%ebp),%eax
 88b3e7e:	89 04 24             	mov    %eax,(%esp)
 88b3e81:	e8 ea fa ff ff       	call   88b3970 <_ZN4ARAD6SCRIPT8readTimeEPs>
 88b3e86:	83 f0 01             	xor    $0x1,%eax
 88b3e89:	84 c0                	test   %al,%al
 88b3e8b:	74 2c                	je     88b3eb9 <_ZN4ARAD6SCRIPT21importAradEventScriptERSt6vectorINS0_16SEventPeriodDataESaIS2_EERS1_INS0_17SRewardPeriodDataESaIS6_EE+0x2e1>
 88b3e8d:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 88b3e94:	e8 67 19 e7 ff       	call   8725800 <__cxa_allocate_exception>
 88b3e99:	89 c2                	mov    %eax,%edx
 88b3e9b:	c7 02 81 75 e0 08    	movl   $0x8e07581,(%edx)
 88b3ea1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 88b3ea8:	00 
 88b3ea9:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 88b3eb0:	09 
 88b3eb1:	89 04 24             	mov    %eax,(%esp)
 88b3eb4:	e8 97 0d e7 ff       	call   8724c50 <__cxa_throw>
 88b3eb9:	8d 45 94             	lea    -0x6c(%ebp),%eax
 88b3ebc:	89 04 24             	mov    %eax,(%esp)
 88b3ebf:	e8 ac fa ff ff       	call   88b3970 <_ZN4ARAD6SCRIPT8readTimeEPs>
 88b3ec4:	83 f0 01             	xor    $0x1,%eax
 88b3ec7:	84 c0                	test   %al,%al
 88b3ec9:	74 2c                	je     88b3ef7 <_ZN4ARAD6SCRIPT21importAradEventScriptERSt6vectorINS0_16SEventPeriodDataESaIS2_EERS1_INS0_17SRewardPeriodDataESaIS6_EE+0x31f>
 88b3ecb:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 88b3ed2:	e8 29 19 e7 ff       	call   8725800 <__cxa_allocate_exception>
 88b3ed7:	89 c2                	mov    %eax,%edx
 88b3ed9:	c7 02 12 76 e0 08    	movl   $0x8e07612,(%edx)
 88b3edf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 88b3ee6:	00 
 88b3ee7:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 88b3eee:	09 
 88b3eef:	89 04 24             	mov    %eax,(%esp)
 88b3ef2:	e8 59 0d e7 ff       	call   8724c50 <__cxa_throw>
 88b3ef7:	8d 45 c7             	lea    -0x39(%ebp),%eax
 88b3efa:	89 04 24             	mov    %eax,(%esp)
 88b3efd:	e8 79 84 00 00       	call   88bc37b <_Z7ScanIntPb>
 88b3f02:	89 45 ec             	mov    %eax,-0x14(%ebp)
 88b3f05:	0f b6 45 c7          	movzbl -0x39(%ebp),%eax
 88b3f09:	83 f0 01             	xor    $0x1,%eax
 88b3f0c:	84 c0                	test   %al,%al
 88b3f0e:	74 2c                	je     88b3f3c <_ZN4ARAD6SCRIPT21importAradEventScriptERSt6vectorINS0_16SEventPeriodDataESaIS2_EERS1_INS0_17SRewardPeriodDataESaIS6_EE+0x364>
 88b3f10:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 88b3f17:	e8 e4 18 e7 ff       	call   8725800 <__cxa_allocate_exception>
 88b3f1c:	89 c2                	mov    %eax,%edx
 88b3f1e:	c7 02 39 76 e0 08    	movl   $0x8e07639,(%edx)
 88b3f24:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 88b3f2b:	00 
 88b3f2c:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 88b3f33:	09 
 88b3f34:	89 04 24             	mov    %eax,(%esp)
 88b3f37:	e8 14 0d e7 ff       	call   8724c50 <__cxa_throw>
 88b3f3c:	8d 45 c7             	lea    -0x39(%ebp),%eax
 88b3f3f:	89 04 24             	mov    %eax,(%esp)
 88b3f42:	e8 34 84 00 00       	call   88bc37b <_Z7ScanIntPb>
 88b3f47:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
 88b3f4b:	0f b6 45 c7          	movzbl -0x39(%ebp),%eax
 88b3f4f:	83 f0 01             	xor    $0x1,%eax
 88b3f52:	84 c0                	test   %al,%al
 88b3f54:	74 2c                	je     88b3f82 <_ZN4ARAD6SCRIPT21importAradEventScriptERSt6vectorINS0_16SEventPeriodDataESaIS2_EERS1_INS0_17SRewardPeriodDataESaIS6_EE+0x3aa>
 88b3f56:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 88b3f5d:	e8 9e 18 e7 ff       	call   8725800 <__cxa_allocate_exception>
 88b3f62:	89 c2                	mov    %eax,%edx
 88b3f64:	c7 02 44 76 e0 08    	movl   $0x8e07644,(%edx)
 88b3f6a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 88b3f71:	00 
 88b3f72:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 88b3f79:	09 
 88b3f7a:	89 04 24             	mov    %eax,(%esp)
 88b3f7d:	e8 ce 0c e7 ff       	call   8724c50 <__cxa_throw>
 88b3f82:	8d 45 94             	lea    -0x6c(%ebp),%eax
 88b3f85:	89 04 24             	mov    %eax,(%esp)
 88b3f88:	e8 be fb ff ff       	call   88b3b4b <_ZN4ARAD6SCRIPT10uint32TimeEPs>
 88b3f8d:	89 c3                	mov    %eax,%ebx
 88b3f8f:	8d 45 9c             	lea    -0x64(%ebp),%eax
 88b3f92:	89 04 24             	mov    %eax,(%esp)
 88b3f95:	e8 b1 fb ff ff       	call   88b3b4b <_ZN4ARAD6SCRIPT10uint32TimeEPs>
 88b3f9a:	0f bf 55 f2          	movswl -0xe(%ebp),%edx
 88b3f9e:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 88b3fa2:	89 44 24 10          	mov    %eax,0x10(%esp)
 88b3fa6:	89 54 24 0c          	mov    %edx,0xc(%esp)
 88b3faa:	8b 45 ec             	mov    -0x14(%ebp),%eax
 88b3fad:	89 44 24 08          	mov    %eax,0x8(%esp)
 88b3fb1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 88b3fb4:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b3fb8:	8d 45 80             	lea    -0x80(%ebp),%eax
 88b3fbb:	89 04 24             	mov    %eax,(%esp)
 88b3fbe:	e8 d9 03 00 00       	call   88b439c <_ZN4ARAD6SCRIPT17SRewardPeriodDataC1Eimsjj>
 88b3fc3:	8d 45 d8             	lea    -0x28(%ebp),%eax
 88b3fc6:	8b 55 0c             	mov    0xc(%ebp),%edx
 88b3fc9:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b3fcd:	89 04 24             	mov    %eax,(%esp)
 88b3fd0:	e8 49 74 8e ff       	call   819b41e <_ZNSt6vectorIN4ARAD6SCRIPT17SRewardPeriodDataESaIS2_EE3endEv>
 88b3fd5:	83 ec 04             	sub    $0x4,%esp
 88b3fd8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 88b3fdb:	8b 55 0c             	mov    0xc(%ebp),%edx
 88b3fde:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b3fe2:	89 04 24             	mov    %eax,(%esp)
 88b3fe5:	e8 10 74 8e ff       	call   819b3fa <_ZNSt6vectorIN4ARAD6SCRIPT17SRewardPeriodDataESaIS2_EE5beginEv>
 88b3fea:	83 ec 04             	sub    $0x4,%esp
 88b3fed:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 88b3ff3:	8d 55 80             	lea    -0x80(%ebp),%edx
 88b3ff6:	89 54 24 0c          	mov    %edx,0xc(%esp)
 88b3ffa:	8b 55 d8             	mov    -0x28(%ebp),%edx
 88b3ffd:	89 54 24 08          	mov    %edx,0x8(%esp)
 88b4001:	8b 55 dc             	mov    -0x24(%ebp),%edx
 88b4004:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b4008:	89 04 24             	mov    %eax,(%esp)
 88b400b:	e8 c9 04 00 00       	call   88b44d9 <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPN4ARAD6SCRIPT17SRewardPeriodDataESt6vectorIS4_SaIS4_EEEES4_ET_SA_SA_RKT0_>
 88b4010:	83 ec 04             	sub    $0x4,%esp
 88b4013:	8d 45 e0             	lea    -0x20(%ebp),%eax
 88b4016:	8b 55 0c             	mov    0xc(%ebp),%edx
 88b4019:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b401d:	89 04 24             	mov    %eax,(%esp)
 88b4020:	e8 f9 73 8e ff       	call   819b41e <_ZNSt6vectorIN4ARAD6SCRIPT17SRewardPeriodDataESaIS2_EE3endEv>
 88b4025:	83 ec 04             	sub    $0x4,%esp
 88b4028:	8d 45 e0             	lea    -0x20(%ebp),%eax
 88b402b:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b402f:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 88b4035:	89 04 24             	mov    %eax,(%esp)
 88b4038:	e8 5b 74 8e ff       	call   819b498 <_ZN9__gnu_cxxneIPN4ARAD6SCRIPT17SRewardPeriodDataESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 88b403d:	84 c0                	test   %al,%al
 88b403f:	74 2c                	je     88b406d <_ZN4ARAD6SCRIPT21importAradEventScriptERSt6vectorINS0_16SEventPeriodDataESaIS2_EERS1_INS0_17SRewardPeriodDataESaIS6_EE+0x495>
 88b4041:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 88b4048:	e8 b3 17 e7 ff       	call   8725800 <__cxa_allocate_exception>
 88b404d:	89 c2                	mov    %eax,%edx
 88b404f:	c7 02 1b 76 e0 08    	movl   $0x8e0761b,(%edx)
 88b4055:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 88b405c:	00 
 88b405d:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 88b4064:	09 
 88b4065:	89 04 24             	mov    %eax,(%esp)
 88b4068:	e8 e3 0b e7 ff       	call   8724c50 <__cxa_throw>
 88b406d:	8d 45 80             	lea    -0x80(%ebp),%eax
 88b4070:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b4074:	8b 45 0c             	mov    0xc(%ebp),%eax
 88b4077:	89 04 24             	mov    %eax,(%esp)
 88b407a:	e8 af 04 00 00       	call   88b452e <_ZNSt6vectorIN4ARAD6SCRIPT17SRewardPeriodDataESaIS2_EE9push_backERKS2_>
 88b407f:	e9 d8 fd ff ff       	jmp    88b3e5c <_ZN4ARAD6SCRIPT21importAradEventScriptERSt6vectorINS0_16SEventPeriodDataESaIS2_EERS1_INS0_17SRewardPeriodDataESaIS6_EE+0x284>
 88b4084:	90                   	nop
 88b4085:	8d 45 c8             	lea    -0x38(%ebp),%eax
 88b4088:	89 04 24             	mov    %eax,(%esp)
 88b408b:	e8 50 3b e5 ff       	call   8707be0 <_ZNSsD1Ev>
 88b4090:	e9 81 00 00 00       	jmp    88b4116 <_ZN4ARAD6SCRIPT21importAradEventScriptERSt6vectorINS0_16SEventPeriodDataESaIS2_EERS1_INS0_17SRewardPeriodDataESaIS6_EE+0x53e>
 88b4095:	89 d3                	mov    %edx,%ebx
 88b4097:	89 c6                	mov    %eax,%esi
 88b4099:	8d 45 c8             	lea    -0x38(%ebp),%eax
 88b409c:	89 04 24             	mov    %eax,(%esp)
 88b409f:	e8 3c 3b e5 ff       	call   8707be0 <_ZNSsD1Ev>
 88b40a4:	89 f0                	mov    %esi,%eax
 88b40a6:	89 da                	mov    %ebx,%edx
 88b40a8:	eb 00                	jmp    88b40aa <_ZN4ARAD6SCRIPT21importAradEventScriptERSt6vectorINS0_16SEventPeriodDataESaIS2_EERS1_INS0_17SRewardPeriodDataESaIS6_EE+0x4d2>
 88b40aa:	83 fa 01             	cmp    $0x1,%edx
 88b40ad:	74 08                	je     88b40b7 <_ZN4ARAD6SCRIPT21importAradEventScriptERSt6vectorINS0_16SEventPeriodDataESaIS2_EERS1_INS0_17SRewardPeriodDataESaIS6_EE+0x4df>
 88b40af:	89 04 24             	mov    %eax,(%esp)
 88b40b2:	e8 99 f6 22 00       	call   8ae3750 <_Unwind_Resume>
 88b40b7:	89 04 24             	mov    %eax,(%esp)
 88b40ba:	e8 21 1c e7 ff       	call   8725ce0 <__cxa_begin_catch>
 88b40bf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 88b40c2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 88b40c5:	89 44 24 14          	mov    %eax,0x14(%esp)
 88b40c9:	c7 44 24 10 8c 75 e0 	movl   $0x8e0758c,0x10(%esp)
 88b40d0:	08 
 88b40d1:	c7 44 24 0c 99 00 00 	movl   $0x99,0xc(%esp)
 88b40d8:	00 
 88b40d9:	c7 44 24 08 68 7a e0 	movl   $0x8e07a68,0x8(%esp)
 88b40e0:	08 
 88b40e1:	c7 44 24 04 bc 75 e0 	movl   $0x8e075bc,0x4(%esp)
 88b40e8:	08 
 88b40e9:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 88b40f0:	e8 15 fb 21 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 88b40f5:	bb 00 00 00 00       	mov    $0x0,%ebx
 88b40fa:	e8 31 1b e7 ff       	call   8725c30 <__cxa_end_catch>
 88b40ff:	eb 1a                	jmp    88b411b <_ZN4ARAD6SCRIPT21importAradEventScriptERSt6vectorINS0_16SEventPeriodDataESaIS2_EERS1_INS0_17SRewardPeriodDataESaIS6_EE+0x543>
 88b4101:	89 d3                	mov    %edx,%ebx
 88b4103:	89 c6                	mov    %eax,%esi
 88b4105:	e8 26 1b e7 ff       	call   8725c30 <__cxa_end_catch>
 88b410a:	89 f0                	mov    %esi,%eax
 88b410c:	89 da                	mov    %ebx,%edx
 88b410e:	89 04 24             	mov    %eax,(%esp)
 88b4111:	e8 3a f6 22 00       	call   8ae3750 <_Unwind_Resume>
 88b4116:	bb 01 00 00 00       	mov    $0x1,%ebx
 88b411b:	89 d8                	mov    %ebx,%eax
 88b411d:	8d 65 f8             	lea    -0x8(%ebp),%esp
 88b4120:	83 c4 00             	add    $0x0,%esp
 88b4123:	5b                   	pop    %ebx
 88b4124:	5e                   	pop    %esi
 88b4125:	5d                   	pop    %ebp
 88b4126:	c3                   	ret
 88b4127:	90                   	nop

```

```c
// ARAD::SCRIPT::importAradEventScript @ 0x88b3bd8

/* ARAD::SCRIPT::importAradEventScript(std::vector<ARAD::SCRIPT::SEventPeriodData,
   std::allocator<ARAD::SCRIPT::SEventPeriodData> >&, std::vector<ARAD::SCRIPT::SRewardPeriodData,
   std::allocator<ARAD::SCRIPT::SRewardPeriodData> >&) */

undefined4 ARAD::SCRIPT::importAradEventScript(vector *param_1,vector *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int local_b8 [2];
  int local_b0;
  uint local_a0 [6];
  undefined1 local_88 [4];
  undefined1 local_84 [20];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [4];
  undefined1 local_5c [14];
  undefined4 local_4e;
  undefined4 local_4a;
  undefined4 local_46;
  undefined4 local_42;
  char local_3d;
  string local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined1 local_30 [4];
  int local_2c;
  undefined4 local_28;
  undefined1 local_24 [4];
  int local_20;
  int local_1c;
  int local_18;
  short local_12;
  
  piVar7 = (int *)&stack0xffffff54;
  std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>::clear
            ((vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>
              *)param_1);
  std::vector<ARAD::SCRIPT::SRewardPeriodData,std::allocator<ARAD::SCRIPT::SRewardPeriodData>>::
  clear((vector<ARAD::SCRIPT::SRewardPeriodData,std::allocator<ARAD::SCRIPT::SRewardPeriodData>> *)
        param_2);
  cVar1 = loadRDARScriptFile("","Etc/AradEventPeroid.etc");
  if (cVar1 == '\x01') {
                    /* try { // try from 088b3c24 to 088b3c28 has its CatchHandler @ 088b40aa */
    std::string::string(local_3c);
    local_3d = '\0';
    while( true ) {
      piVar7[1] = 1;
      *piVar7 = (int)local_3c;
                    /* try { // try from 088b3c3e to 088b407e has its CatchHandler @ 088b4095 */
      piVar7[-1] = 0x88b3c43;
      cVar1 = ScanType((string *)*piVar7,SUB41(piVar7[1],0));
      if (cVar1 != '\x01') break;
      piVar7[1] = (int)"[event period]";
      *piVar7 = (int)local_3c;
      piVar7[-1] = 0x88b3c61;
      bVar2 = std::operator==((string *)*piVar7,(char *)piVar7[1]);
      if (bVar2) {
        local_20 = 0;
        local_46 = 0;
        local_42 = 0;
        local_4e = 0;
        local_4a = 0;
        while( true ) {
          *piVar7 = (int)&local_3d;
          piVar7[-1] = 0x88b3c97;
          local_20 = ScanInt((bool *)*piVar7);
          if (local_3d != '\x01') break;
          *piVar7 = (int)&local_46;
          piVar7[-1] = 0x88b3cb3;
          cVar1 = readTime((short *)*piVar7);
          if (cVar1 != '\x01') {
            *piVar7 = 4;
            piVar7[-1] = 0x88b3cc6;
            puVar3 = (undefined4 *)__cxa_allocate_exception();
            *puVar3 = "start time";
            piVar7[2] = 0;
            piVar7[1] = (int)&char_const*::typeinfo;
            *piVar7 = (int)puVar3;
                    /* WARNING: Subroutine does not return */
            piVar7[-1] = 0x88b3ce6;
            __cxa_throw();
          }
          *piVar7 = (int)&local_4e;
          piVar7[-1] = 0x88b3cf1;
          cVar1 = readTime((short *)*piVar7);
          if (cVar1 != '\x01') {
            *piVar7 = 4;
            piVar7[-1] = 0x88b3d04;
            puVar3 = (undefined4 *)__cxa_allocate_exception();
            *puVar3 = "end time";
            piVar7[2] = 0;
            piVar7[1] = (int)&char_const*::typeinfo;
            *piVar7 = (int)puVar3;
                    /* WARNING: Subroutine does not return */
            piVar7[-1] = 0x88b3d24;
            __cxa_throw();
          }
          *piVar7 = (int)&local_4e;
          piVar7[-1] = 0x88b3d2f;
          iVar4 = uint32Time((short *)*piVar7);
          *piVar7 = (int)&local_46;
          piVar7[-1] = 0x88b3d3c;
          iVar5 = uint32Time((short *)*piVar7);
          piVar7[3] = iVar4;
          piVar7[2] = iVar5;
          piVar7[1] = local_20;
          *piVar7 = (int)local_5c;
          piVar7[-1] = 0x88b3d56;
          SEventPeriodData::SEventPeriodData
                    ((SEventPeriodData *)*piVar7,piVar7[1],piVar7[2],piVar7[3]);
          piVar7[1] = (int)param_1;
          *piVar7 = (int)&local_38;
          piVar7[-1] = 0x88b3d68;
          std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>
          ::end();
          piVar7[1] = (int)param_1;
          *piVar7 = (int)&local_34;
          piVar7[-1] = 0x88b3d7d;
          std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>
          ::begin();
          piVar7[3] = (int)local_5c;
          piVar7[2] = local_38;
          piVar7[1] = local_34;
          *piVar7 = (int)local_60;
          piVar7[-1] = 0x88b3da0;
          std::
          find<__gnu_cxx::__normal_iterator<ARAD::SCRIPT::SEventPeriodData*,std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>>,ARAD::SCRIPT::SEventPeriodData>
                    ();
          *piVar7 = (int)param_1;
          piVar7[-1] = (int)local_30;
          piVar7[-2] = 0x88b3db5;
          std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>
          ::end();
          *piVar7 = (int)local_30;
          piVar7[-1] = (int)local_60;
          piVar7[-2] = 0x88b3dca;
          bVar2 = __gnu_cxx::operator!=
                            ((__normal_iterator *)piVar7[-1],(__normal_iterator *)*piVar7);
          if (bVar2) {
            piVar7[-1] = 4;
            piVar7[-2] = 0x88b3dda;
            puVar3 = (undefined4 *)__cxa_allocate_exception();
            *puVar3 = "already exist";
            piVar7[1] = 0;
            *piVar7 = (int)&char_const*::typeinfo;
            piVar7[-1] = (int)puVar3;
                    /* WARNING: Subroutine does not return */
            piVar7[-2] = 0x88b3dfa;
            __cxa_throw();
          }
          *piVar7 = (int)local_5c;
          piVar7[-1] = (int)param_1;
          piVar7[-2] = 0x88b3e0c;
          std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>
          ::push_back((vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>
                       *)piVar7[-1],(SEventPeriodData *)*piVar7);
          piVar7 = piVar7 + -1;
        }
      }
      else {
        piVar7[1] = (int)"[reward period]";
        *piVar7 = (int)local_3c;
        piVar7[-1] = 0x88b3e24;
        bVar2 = std::operator==((string *)*piVar7,(char *)piVar7[1]);
        if (bVar2) {
          local_1c = 0;
          local_68 = 0;
          local_64 = 0;
          local_70 = 0;
          local_6c = 0;
          local_18 = 0;
          local_12 = 0;
          while( true ) {
            *piVar7 = (int)&local_3d;
            piVar7[-1] = 0x88b3e67;
            local_1c = ScanInt((bool *)*piVar7);
            if (local_3d != '\x01') break;
            *piVar7 = (int)&local_68;
            piVar7[-1] = 0x88b3e86;
            cVar1 = readTime((short *)*piVar7);
            if (cVar1 != '\x01') {
              *piVar7 = 4;
              piVar7[-1] = 0x88b3e99;
              puVar3 = (undefined4 *)__cxa_allocate_exception();
              *puVar3 = "start time";
              piVar7[2] = 0;
              piVar7[1] = (int)&char_const*::typeinfo;
              *piVar7 = (int)puVar3;
                    /* WARNING: Subroutine does not return */
              piVar7[-1] = 0x88b3eb9;
              __cxa_throw();
            }
            *piVar7 = (int)&local_70;
            piVar7[-1] = 0x88b3ec4;
            cVar1 = readTime((short *)*piVar7);
            if (cVar1 != '\x01') {
              *piVar7 = 4;
              piVar7[-1] = 0x88b3ed7;
              puVar3 = (undefined4 *)__cxa_allocate_exception();
              *puVar3 = "end time";
              piVar7[2] = 0;
              piVar7[1] = (int)&char_const*::typeinfo;
              *piVar7 = (int)puVar3;
                    /* WARNING: Subroutine does not return */
              piVar7[-1] = 0x88b3ef7;
              __cxa_throw();
            }
            *piVar7 = (int)&local_3d;
            piVar7[-1] = 0x88b3f02;
            local_18 = ScanInt((bool *)*piVar7);
            if (local_3d != '\x01') {
              *piVar7 = 4;
              piVar7[-1] = 0x88b3f1c;
              puVar3 = (undefined4 *)__cxa_allocate_exception();
              *puVar3 = "item index";
              piVar7[2] = 0;
              piVar7[1] = (int)&char_const*::typeinfo;
              *piVar7 = (int)puVar3;
                    /* WARNING: Subroutine does not return */
              piVar7[-1] = 0x88b3f3c;
              __cxa_throw();
            }
            *piVar7 = (int)&local_3d;
            piVar7[-1] = 0x88b3f47;
            local_12 = ScanInt((bool *)*piVar7);
            if (local_3d != '\x01') {
              *piVar7 = 4;
              piVar7[-1] = 0x88b3f62;
              puVar3 = (undefined4 *)__cxa_allocate_exception();
              *puVar3 = "item count";
              piVar7[2] = 0;
              piVar7[1] = (int)&char_const*::typeinfo;
              *piVar7 = (int)puVar3;
                    /* WARNING: Subroutine does not return */
              piVar7[-1] = 0x88b3f82;
              __cxa_throw();
            }
            *piVar7 = (int)&local_70;
            piVar7[-1] = 0x88b3f8d;
            iVar4 = uint32Time((short *)*piVar7);
            *piVar7 = (int)&local_68;
            piVar7[-1] = 0x88b3f9a;
            iVar5 = uint32Time((short *)*piVar7);
            piVar7[5] = iVar4;
            piVar7[4] = iVar5;
            piVar7[3] = (int)local_12;
            piVar7[2] = local_18;
            piVar7[1] = local_1c;
            *piVar7 = (int)local_84;
            piVar7[-1] = 0x88b3fc3;
            SRewardPeriodData::SRewardPeriodData
                      ((SRewardPeriodData *)*piVar7,piVar7[1],piVar7[2],(short)piVar7[3],piVar7[4],
                       piVar7[5]);
            piVar7[1] = (int)param_2;
            *piVar7 = (int)&local_2c;
            piVar7[-1] = 0x88b3fd5;
            std::
            vector<ARAD::SCRIPT::SRewardPeriodData,std::allocator<ARAD::SCRIPT::SRewardPeriodData>>
            ::end();
            piVar7[1] = (int)param_2;
            *piVar7 = (int)&local_28;
            piVar7[-1] = 0x88b3fea;
            std::
            vector<ARAD::SCRIPT::SRewardPeriodData,std::allocator<ARAD::SCRIPT::SRewardPeriodData>>
            ::begin();
            piVar7[3] = (int)local_84;
            piVar7[2] = local_2c;
            piVar7[1] = local_28;
            *piVar7 = (int)local_88;
            piVar7[-1] = 0x88b4010;
            std::
            find<__gnu_cxx::__normal_iterator<ARAD::SCRIPT::SRewardPeriodData*,std::vector<ARAD::SCRIPT::SRewardPeriodData,std::allocator<ARAD::SCRIPT::SRewardPeriodData>>>,ARAD::SCRIPT::SRewardPeriodData>
                      ();
            *piVar7 = (int)param_2;
            piVar7[-1] = (int)local_24;
            piVar7[-2] = 0x88b4025;
            std::
            vector<ARAD::SCRIPT::SRewardPeriodData,std::allocator<ARAD::SCRIPT::SRewardPeriodData>>
            ::end();
            *piVar7 = (int)local_24;
            piVar7[-1] = (int)local_88;
            piVar7[-2] = 0x88b403d;
            bVar2 = __gnu_cxx::operator!=
                              ((__normal_iterator *)piVar7[-1],(__normal_iterator *)*piVar7);
            if (bVar2) {
              piVar7[-1] = 4;
              piVar7[-2] = 0x88b404d;
              puVar3 = (undefined4 *)__cxa_allocate_exception();
              *puVar3 = "already exist";
              piVar7[1] = 0;
              *piVar7 = (int)&char_const*::typeinfo;
              piVar7[-1] = (int)puVar3;
                    /* WARNING: Subroutine does not return */
              piVar7[-2] = 0x88b406d;
              __cxa_throw();
            }
            *piVar7 = (int)local_84;
            piVar7[-1] = (int)param_2;
            piVar7[-2] = 0x88b407f;
            std::
            vector<ARAD::SCRIPT::SRewardPeriodData,std::allocator<ARAD::SCRIPT::SRewardPeriodData>>
            ::push_back((vector<ARAD::SCRIPT::SRewardPeriodData,std::allocator<ARAD::SCRIPT::SRewardPeriodData>>
                         *)piVar7[-1],(SRewardPeriodData *)*piVar7);
            piVar7 = piVar7 + -1;
          }
        }
      }
    }
    *piVar7 = (int)local_3c;
                    /* try { // try from 088b408b to 088b408f has its CatchHandler @ 088b40aa */
    piVar7[-1] = 0x88b4090;
    std::string::~string((string *)*piVar7);
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

```

---

## readTime

```asm
// === 088b3970 ARAD::SCRIPT::readTime  [0x088b3970-0x88b3b4a] ===
 88b3970:	55                   	push   %ebp
 88b3971:	89 e5                	mov    %esp,%ebp
 88b3973:	56                   	push   %esi
 88b3974:	53                   	push   %ebx
 88b3975:	83 ec 30             	sub    $0x30,%esp
 88b3978:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 88b397f:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 88b3983:	8b 45 f0             	mov    -0x10(%ebp),%eax
 88b3986:	01 c0                	add    %eax,%eax
 88b3988:	89 c3                	mov    %eax,%ebx
 88b398a:	03 5d 08             	add    0x8(%ebp),%ebx
 88b398d:	8d 45 ef             	lea    -0x11(%ebp),%eax
 88b3990:	89 04 24             	mov    %eax,(%esp)
 88b3993:	e8 e3 89 00 00       	call   88bc37b <_Z7ScanIntPb>
 88b3998:	66 89 03             	mov    %ax,(%ebx)
 88b399b:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 88b399f:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 88b39a3:	83 f0 01             	xor    $0x1,%eax
 88b39a6:	84 c0                	test   %al,%al
 88b39a8:	74 2c                	je     88b39d6 <_ZN4ARAD6SCRIPT8readTimeEPs+0x66>
 88b39aa:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 88b39b1:	e8 4a 1e e7 ff       	call   8725800 <__cxa_allocate_exception>
 88b39b6:	89 c2                	mov    %eax,%edx
 88b39b8:	c7 02 60 75 e0 08    	movl   $0x8e07560,(%edx)
 88b39be:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 88b39c5:	00 
 88b39c6:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 88b39cd:	09 
 88b39ce:	89 04 24             	mov    %eax,(%esp)
 88b39d1:	e8 7a 12 e7 ff       	call   8724c50 <__cxa_throw>
 88b39d6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 88b39d9:	01 c0                	add    %eax,%eax
 88b39db:	89 c3                	mov    %eax,%ebx
 88b39dd:	03 5d 08             	add    0x8(%ebp),%ebx
 88b39e0:	8d 45 ef             	lea    -0x11(%ebp),%eax
 88b39e3:	89 04 24             	mov    %eax,(%esp)
 88b39e6:	e8 90 89 00 00       	call   88bc37b <_Z7ScanIntPb>
 88b39eb:	66 89 03             	mov    %ax,(%ebx)
 88b39ee:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 88b39f2:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 88b39f6:	83 f0 01             	xor    $0x1,%eax
 88b39f9:	84 c0                	test   %al,%al
 88b39fb:	74 2c                	je     88b3a29 <_ZN4ARAD6SCRIPT8readTimeEPs+0xb9>
 88b39fd:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 88b3a04:	e8 f7 1d e7 ff       	call   8725800 <__cxa_allocate_exception>
 88b3a09:	89 c2                	mov    %eax,%edx
 88b3a0b:	c7 02 6b 75 e0 08    	movl   $0x8e0756b,(%edx)
 88b3a11:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 88b3a18:	00 
 88b3a19:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 88b3a20:	09 
 88b3a21:	89 04 24             	mov    %eax,(%esp)
 88b3a24:	e8 27 12 e7 ff       	call   8724c50 <__cxa_throw>
 88b3a29:	8b 45 f0             	mov    -0x10(%ebp),%eax
 88b3a2c:	01 c0                	add    %eax,%eax
 88b3a2e:	89 c3                	mov    %eax,%ebx
 88b3a30:	03 5d 08             	add    0x8(%ebp),%ebx
 88b3a33:	8d 45 ef             	lea    -0x11(%ebp),%eax
 88b3a36:	89 04 24             	mov    %eax,(%esp)
 88b3a39:	e8 3d 89 00 00       	call   88bc37b <_Z7ScanIntPb>
 88b3a3e:	66 89 03             	mov    %ax,(%ebx)
 88b3a41:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 88b3a45:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 88b3a49:	83 f0 01             	xor    $0x1,%eax
 88b3a4c:	84 c0                	test   %al,%al
 88b3a4e:	74 2c                	je     88b3a7c <_ZN4ARAD6SCRIPT8readTimeEPs+0x10c>
 88b3a50:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 88b3a57:	e8 a4 1d e7 ff       	call   8725800 <__cxa_allocate_exception>
 88b3a5c:	89 c2                	mov    %eax,%edx
 88b3a5e:	c7 02 77 75 e0 08    	movl   $0x8e07577,(%edx)
 88b3a64:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 88b3a6b:	00 
 88b3a6c:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 88b3a73:	09 
 88b3a74:	89 04 24             	mov    %eax,(%esp)
 88b3a77:	e8 d4 11 e7 ff       	call   8724c50 <__cxa_throw>
 88b3a7c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 88b3a7f:	01 c0                	add    %eax,%eax
 88b3a81:	89 c3                	mov    %eax,%ebx
 88b3a83:	03 5d 08             	add    0x8(%ebp),%ebx
 88b3a86:	8d 45 ef             	lea    -0x11(%ebp),%eax
 88b3a89:	89 04 24             	mov    %eax,(%esp)
 88b3a8c:	e8 ea 88 00 00       	call   88bc37b <_Z7ScanIntPb>
 88b3a91:	66 89 03             	mov    %ax,(%ebx)
 88b3a94:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 88b3a98:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 88b3a9c:	83 f0 01             	xor    $0x1,%eax
 88b3a9f:	84 c0                	test   %al,%al
 88b3aa1:	74 2c                	je     88b3acf <_ZN4ARAD6SCRIPT8readTimeEPs+0x15f>
 88b3aa3:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 88b3aaa:	e8 51 1d e7 ff       	call   8725800 <__cxa_allocate_exception>
 88b3aaf:	89 c2                	mov    %eax,%edx
 88b3ab1:	c7 02 81 75 e0 08    	movl   $0x8e07581,(%edx)
 88b3ab7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 88b3abe:	00 
 88b3abf:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 88b3ac6:	09 
 88b3ac7:	89 04 24             	mov    %eax,(%esp)
 88b3aca:	e8 81 11 e7 ff       	call   8724c50 <__cxa_throw>
 88b3acf:	bb 01 00 00 00       	mov    $0x1,%ebx
 88b3ad4:	eb 6c                	jmp    88b3b42 <_ZN4ARAD6SCRIPT8readTimeEPs+0x1d2>
 88b3ad6:	83 fa 01             	cmp    $0x1,%edx
 88b3ad9:	74 08                	je     88b3ae3 <_ZN4ARAD6SCRIPT8readTimeEPs+0x173>
 88b3adb:	89 04 24             	mov    %eax,(%esp)
 88b3ade:	e8 6d fc 22 00       	call   8ae3750 <_Unwind_Resume>
 88b3ae3:	89 04 24             	mov    %eax,(%esp)
 88b3ae6:	e8 f5 21 e7 ff       	call   8725ce0 <__cxa_begin_catch>
 88b3aeb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 88b3aee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 88b3af1:	89 44 24 14          	mov    %eax,0x14(%esp)
 88b3af5:	c7 44 24 10 8c 75 e0 	movl   $0x8e0758c,0x10(%esp)
 88b3afc:	08 
 88b3afd:	c7 44 24 0c 27 00 00 	movl   $0x27,0xc(%esp)
 88b3b04:	00 
 88b3b05:	c7 44 24 08 7e 7a e0 	movl   $0x8e07a7e,0x8(%esp)
 88b3b0c:	08 
 88b3b0d:	c7 44 24 04 bc 75 e0 	movl   $0x8e075bc,0x4(%esp)
 88b3b14:	08 
 88b3b15:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 88b3b1c:	e8 e9 00 22 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 88b3b21:	bb 00 00 00 00       	mov    $0x0,%ebx
 88b3b26:	e8 05 21 e7 ff       	call   8725c30 <__cxa_end_catch>
 88b3b2b:	eb 15                	jmp    88b3b42 <_ZN4ARAD6SCRIPT8readTimeEPs+0x1d2>
 88b3b2d:	89 d3                	mov    %edx,%ebx
 88b3b2f:	89 c6                	mov    %eax,%esi
 88b3b31:	e8 fa 20 e7 ff       	call   8725c30 <__cxa_end_catch>
 88b3b36:	89 f0                	mov    %esi,%eax
 88b3b38:	89 da                	mov    %ebx,%edx
 88b3b3a:	89 04 24             	mov    %eax,(%esp)
 88b3b3d:	e8 0e fc 22 00       	call   8ae3750 <_Unwind_Resume>
 88b3b42:	89 d8                	mov    %ebx,%eax
 88b3b44:	83 c4 30             	add    $0x30,%esp
 88b3b47:	5b                   	pop    %ebx
 88b3b48:	5e                   	pop    %esi
 88b3b49:	5d                   	pop    %ebp
 88b3b4a:	c3                   	ret

```

```c
// ARAD::SCRIPT::readTime @ 0x88b3970

/* ARAD::SCRIPT::readTime(short*) */

undefined4 ARAD::SCRIPT::readTime(short *param_1)

{
  short sVar1;
  undefined4 *puVar2;
  short *psVar3;
  bool local_15;
  int local_14;
  
  local_14 = 0;
  local_15 = false;
                    /* try { // try from 088b3993 to 088b3ace has its CatchHandler @ 088b3ad6 */
  sVar1 = ScanInt(&local_15);
  *param_1 = sVar1;
  local_14 = local_14 + 1;
  if (local_15 != true) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "start year";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  psVar3 = param_1 + local_14;
  sVar1 = ScanInt(&local_15);
  *psVar3 = sVar1;
  local_14 = local_14 + 1;
  if (local_15 != true) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "start month";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  psVar3 = param_1 + local_14;
  sVar1 = ScanInt(&local_15);
  *psVar3 = sVar1;
  local_14 = local_14 + 1;
  if (local_15 != true) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "start day";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  psVar3 = param_1 + local_14;
  sVar1 = ScanInt(&local_15);
  *psVar3 = sVar1;
  local_14 = local_14 + 1;
  if (local_15 != true) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "start time";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  return 1;
}

```

---

## uint32Time

```asm
// === 088b3b4b ARAD::SCRIPT::uint32Time  [0x088b3b4b-0x88b3bd7] ===
 88b3b4b:	55                   	push   %ebp
 88b3b4c:	89 e5                	mov    %esp,%ebp
 88b3b4e:	83 ec 28             	sub    $0x28,%esp
 88b3b51:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88b3b58:	e8 f3 9b 7c ff       	call   807d750 <time@plt>
 88b3b5d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 88b3b60:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88b3b63:	89 04 24             	mov    %eax,(%esp)
 88b3b66:	e8 c5 a7 7c ff       	call   807e330 <localtime@plt>
 88b3b6b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 88b3b6e:	8b 45 08             	mov    0x8(%ebp),%eax
 88b3b71:	0f b7 00             	movzwl (%eax),%eax
 88b3b74:	98                   	cwtl
 88b3b75:	8d 90 94 f8 ff ff    	lea    -0x76c(%eax),%edx
 88b3b7b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 88b3b7e:	89 50 14             	mov    %edx,0x14(%eax)
 88b3b81:	8b 45 08             	mov    0x8(%ebp),%eax
 88b3b84:	83 c0 02             	add    $0x2,%eax
 88b3b87:	0f b7 00             	movzwl (%eax),%eax
 88b3b8a:	98                   	cwtl
 88b3b8b:	8d 50 ff             	lea    -0x1(%eax),%edx
 88b3b8e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 88b3b91:	89 50 10             	mov    %edx,0x10(%eax)
 88b3b94:	8b 45 08             	mov    0x8(%ebp),%eax
 88b3b97:	83 c0 04             	add    $0x4,%eax
 88b3b9a:	0f b7 00             	movzwl (%eax),%eax
 88b3b9d:	0f bf d0             	movswl %ax,%edx
 88b3ba0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 88b3ba3:	89 50 0c             	mov    %edx,0xc(%eax)
 88b3ba6:	8b 45 08             	mov    0x8(%ebp),%eax
 88b3ba9:	83 c0 06             	add    $0x6,%eax
 88b3bac:	0f b7 00             	movzwl (%eax),%eax
 88b3baf:	0f bf d0             	movswl %ax,%edx
 88b3bb2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 88b3bb5:	89 50 08             	mov    %edx,0x8(%eax)
 88b3bb8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 88b3bbb:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 88b3bc2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 88b3bc5:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 88b3bcb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 88b3bce:	89 04 24             	mov    %eax,(%esp)
 88b3bd1:	e8 4a ac 7c ff       	call   807e820 <mktime@plt>
 88b3bd6:	c9                   	leave
 88b3bd7:	c3                   	ret

```

```c
// ARAD::SCRIPT::uint32Time @ 0x88b3b4b

/* ARAD::SCRIPT::uint32Time(short*) */

void ARAD::SCRIPT::uint32Time(short *param_1)

{
  time_t local_14;
  tm *local_10;
  
  local_14 = time((time_t *)0x0);
  local_10 = localtime(&local_14);
  local_10->tm_year = *param_1 + -0x76c;
  local_10->tm_mon = param_1[1] + -1;
  local_10->tm_mday = (int)param_1[2];
  local_10->tm_hour = (int)param_1[3];
  local_10->tm_min = 0;
  local_10->tm_sec = 0;
  mktime(local_10);
  return;
}

```

