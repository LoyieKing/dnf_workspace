# CDungeonSuccessNode

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## CDungeonSuccessNode

```asm
// === 08484dda CDungeonSuccessNode::CDungeonSuccessNode  [0x08484dda-0x84851dd] ===
 8484dda:	55                   	push   %ebp
 8484ddb:	89 e5                	mov    %esp,%ebp
 8484ddd:	56                   	push   %esi
 8484dde:	53                   	push   %ebx
 8484ddf:	81 ec 30 02 00 00    	sub    $0x230,%esp
 8484de5:	8b 45 08             	mov    0x8(%ebp),%eax
 8484de8:	89 04 24             	mov    %eax,(%esp)
 8484deb:	e8 5c 25 00 00       	call   848734c <_ZNSt3mapIi5PartySt4lessIiESaISt4pairIKiS0_EEEC1Ev>
 8484df0:	8b 45 08             	mov    0x8(%ebp),%eax
 8484df3:	83 c0 18             	add    $0x18,%eax
 8484df6:	89 04 24             	mov    %eax,(%esp)
 8484df9:	e8 62 25 00 00       	call   8487360 <_ZNSt3mapI6JobKey15CSuccessJobNodeSt4lessIS0_ESaISt4pairIKS0_S1_EEEC1Ev>
 8484dfe:	c7 85 ec fd ff ff 00 	movl   $0x0,-0x214(%ebp)
 8484e05:	00 00 00 
 8484e08:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8484e0f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8484e16:	c7 85 ec fd ff ff 02 	movl   $0x2,-0x214(%ebp)
 8484e1d:	00 00 00 
 8484e20:	e9 45 01 00 00       	jmp    8484f6a <_ZN19CDungeonSuccessNodeC1Ev+0x190>
 8484e25:	8b 55 08             	mov    0x8(%ebp),%edx
 8484e28:	8d 85 f0 fd ff ff    	lea    -0x210(%ebp),%eax
 8484e2e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8484e32:	89 04 24             	mov    %eax,(%esp)
 8484e35:	e8 66 25 00 00       	call   84873a0 <_ZNSt3mapIi5PartySt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8484e3a:	83 ec 04             	sub    $0x4,%esp
 8484e3d:	8b 55 08             	mov    0x8(%ebp),%edx
 8484e40:	8d 85 f4 fd ff ff    	lea    -0x20c(%ebp),%eax
 8484e46:	8d 8d ec fd ff ff    	lea    -0x214(%ebp),%ecx
 8484e4c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8484e50:	89 54 24 04          	mov    %edx,0x4(%esp)
 8484e54:	89 04 24             	mov    %eax,(%esp)
 8484e57:	e8 18 25 00 00       	call   8487374 <_ZNSt3mapIi5PartySt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 8484e5c:	83 ec 04             	sub    $0x4,%esp
 8484e5f:	8d 85 f0 fd ff ff    	lea    -0x210(%ebp),%eax
 8484e65:	89 44 24 04          	mov    %eax,0x4(%esp)
 8484e69:	8d 85 f4 fd ff ff    	lea    -0x20c(%ebp),%eax
 8484e6f:	89 04 24             	mov    %eax,(%esp)
 8484e72:	e8 4f 25 00 00       	call   84873c6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi5PartyEEneERKS4_>
 8484e77:	8d 85 88 fe ff ff    	lea    -0x178(%ebp),%eax
 8484e7d:	89 04 24             	mov    %eax,(%esp)
 8484e80:	e8 6f 1b 00 00       	call   84869f4 <_ZN5PartyC1Ev>
 8484e85:	8d 85 44 fe ff ff    	lea    -0x1bc(%ebp),%eax
 8484e8b:	8d 95 88 fe ff ff    	lea    -0x178(%ebp),%edx
 8484e91:	89 54 24 08          	mov    %edx,0x8(%esp)
 8484e95:	8d 95 ec fd ff ff    	lea    -0x214(%ebp),%edx
 8484e9b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8484e9f:	89 04 24             	mov    %eax,(%esp)
 8484ea2:	e8 33 25 00 00       	call   84873da <_ZSt9make_pairIRi5PartyESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 8484ea7:	83 ec 04             	sub    $0x4,%esp
 8484eaa:	8d 85 44 fe ff ff    	lea    -0x1bc(%ebp),%eax
 8484eb0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8484eb4:	8d 85 00 fe ff ff    	lea    -0x200(%ebp),%eax
 8484eba:	89 04 24             	mov    %eax,(%esp)
 8484ebd:	e8 5c 25 00 00       	call   848741e <_ZNSt4pairIKi5PartyEC1IiS1_EEOS_IT_T0_E>
 8484ec2:	8b 55 08             	mov    0x8(%ebp),%edx
 8484ec5:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
 8484ecb:	8d 8d 00 fe ff ff    	lea    -0x200(%ebp),%ecx
 8484ed1:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8484ed5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8484ed9:	89 04 24             	mov    %eax,(%esp)
 8484edc:	e8 c7 25 00 00       	call   84874a8 <_ZNSt3mapIi5PartySt4lessIiESaISt4pairIKiS0_EEE6insertERKS5_>
 8484ee1:	83 ec 04             	sub    $0x4,%esp
 8484ee4:	8d 85 00 fe ff ff    	lea    -0x200(%ebp),%eax
 8484eea:	89 04 24             	mov    %eax,(%esp)
 8484eed:	e8 52 1d 00 00       	call   8486c44 <_ZNSt4pairIKi5PartyED1Ev>
 8484ef2:	8d 85 44 fe ff ff    	lea    -0x1bc(%ebp),%eax
 8484ef8:	89 04 24             	mov    %eax,(%esp)
 8484efb:	e8 2e 1d 00 00       	call   8486c2e <_ZNSt4pairIi5PartyED1Ev>
 8484f00:	8d 85 88 fe ff ff    	lea    -0x178(%ebp),%eax
 8484f06:	89 04 24             	mov    %eax,(%esp)
 8484f09:	e8 10 1b 00 00       	call   8486a1e <_ZN5PartyD1Ev>
 8484f0e:	8b 85 ec fd ff ff    	mov    -0x214(%ebp),%eax
 8484f14:	83 c0 01             	add    $0x1,%eax
 8484f17:	89 85 ec fd ff ff    	mov    %eax,-0x214(%ebp)
 8484f1d:	eb 4b                	jmp    8484f6a <_ZN19CDungeonSuccessNodeC1Ev+0x190>
 8484f1f:	89 d3                	mov    %edx,%ebx
 8484f21:	89 c6                	mov    %eax,%esi
 8484f23:	8d 85 00 fe ff ff    	lea    -0x200(%ebp),%eax
 8484f29:	89 04 24             	mov    %eax,(%esp)
 8484f2c:	e8 13 1d 00 00       	call   8486c44 <_ZNSt4pairIKi5PartyED1Ev>
 8484f31:	89 f0                	mov    %esi,%eax
 8484f33:	89 da                	mov    %ebx,%edx
 8484f35:	eb 00                	jmp    8484f37 <_ZN19CDungeonSuccessNodeC1Ev+0x15d>
 8484f37:	89 d3                	mov    %edx,%ebx
 8484f39:	89 c6                	mov    %eax,%esi
 8484f3b:	8d 85 44 fe ff ff    	lea    -0x1bc(%ebp),%eax
 8484f41:	89 04 24             	mov    %eax,(%esp)
 8484f44:	e8 e5 1c 00 00       	call   8486c2e <_ZNSt4pairIi5PartyED1Ev>
 8484f49:	89 f0                	mov    %esi,%eax
 8484f4b:	89 da                	mov    %ebx,%edx
 8484f4d:	eb 00                	jmp    8484f4f <_ZN19CDungeonSuccessNodeC1Ev+0x175>
 8484f4f:	89 d3                	mov    %edx,%ebx
 8484f51:	89 c6                	mov    %eax,%esi
 8484f53:	8d 85 88 fe ff ff    	lea    -0x178(%ebp),%eax
 8484f59:	89 04 24             	mov    %eax,(%esp)
 8484f5c:	e8 bd 1a 00 00       	call   8486a1e <_ZN5PartyD1Ev>
 8484f61:	89 f0                	mov    %esi,%eax
 8484f63:	89 da                	mov    %ebx,%edx
 8484f65:	e9 37 02 00 00       	jmp    84851a1 <_ZN19CDungeonSuccessNodeC1Ev+0x3c7>
 8484f6a:	8b 85 ec fd ff ff    	mov    -0x214(%ebp),%eax
 8484f70:	83 f8 04             	cmp    $0x4,%eax
 8484f73:	0f 9e c0             	setle  %al
 8484f76:	84 c0                	test   %al,%al
 8484f78:	0f 85 a7 fe ff ff    	jne    8484e25 <_ZN19CDungeonSuccessNodeC1Ev+0x4b>
 8484f7e:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
 8484f84:	89 04 24             	mov    %eax,(%esp)
 8484f87:	e8 9e 16 00 00       	call   848662a <_ZN6JobKeyC1Ev>
 8484f8c:	8d 85 e3 fd ff ff    	lea    -0x21d(%ebp),%eax
 8484f92:	89 04 24             	mov    %eax,(%esp)
 8484f95:	e8 34 1c 00 00       	call   8486bce <_ZN12STGrowthTypeC1Ev>
 8484f9a:	c7 85 ec fd ff ff 00 	movl   $0x0,-0x214(%ebp)
 8484fa1:	00 00 00 
 8484fa4:	e9 e2 01 00 00       	jmp    848518b <_ZN19CDungeonSuccessNodeC1Ev+0x3b1>
 8484fa9:	8b 85 ec fd ff ff    	mov    -0x214(%ebp),%eax
 8484faf:	89 85 e4 fd ff ff    	mov    %eax,-0x21c(%ebp)
 8484fb5:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8484fbc:	e9 ac 01 00 00       	jmp    848516d <_ZN19CDungeonSuccessNodeC1Ev+0x393>
 8484fc1:	c6 85 e3 fd ff ff 00 	movb   $0x0,-0x21d(%ebp)
 8484fc8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8484fcb:	c1 e0 04             	shl    $0x4,%eax
 8484fce:	c0 f8 04             	sar    $0x4,%al
 8484fd1:	89 c2                	mov    %eax,%edx
 8484fd3:	83 e2 0f             	and    $0xf,%edx
 8484fd6:	0f b6 85 e3 fd ff ff 	movzbl -0x21d(%ebp),%eax
 8484fdd:	83 e0 f0             	and    $0xfffffff0,%eax
 8484fe0:	09 d0                	or     %edx,%eax
 8484fe2:	88 85 e3 fd ff ff    	mov    %al,-0x21d(%ebp)
 8484fe8:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8484fef:	e9 66 01 00 00       	jmp    848515a <_ZN19CDungeonSuccessNodeC1Ev+0x380>
 8484ff4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8484ff7:	c1 e0 05             	shl    $0x5,%eax
 8484ffa:	c0 f8 05             	sar    $0x5,%al
 8484ffd:	83 e0 07             	and    $0x7,%eax
 8485000:	89 c2                	mov    %eax,%edx
 8485002:	c1 e2 04             	shl    $0x4,%edx
 8485005:	0f b6 85 e3 fd ff ff 	movzbl -0x21d(%ebp),%eax
 848500c:	83 e0 8f             	and    $0xffffff8f,%eax
 848500f:	09 d0                	or     %edx,%eax
 8485011:	88 85 e3 fd ff ff    	mov    %al,-0x21d(%ebp)
 8485017:	0f b6 85 e3 fd ff ff 	movzbl -0x21d(%ebp),%eax
 848501e:	88 85 e8 fd ff ff    	mov    %al,-0x218(%ebp)
 8485024:	8b 45 08             	mov    0x8(%ebp),%eax
 8485027:	8d 50 18             	lea    0x18(%eax),%edx
 848502a:	8d 85 c8 fe ff ff    	lea    -0x138(%ebp),%eax
 8485030:	89 54 24 04          	mov    %edx,0x4(%esp)
 8485034:	89 04 24             	mov    %eax,(%esp)
 8485037:	e8 c4 24 00 00       	call   8487500 <_ZNSt3mapI6JobKey15CSuccessJobNodeSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 848503c:	83 ec 04             	sub    $0x4,%esp
 848503f:	8b 45 08             	mov    0x8(%ebp),%eax
 8485042:	8d 48 18             	lea    0x18(%eax),%ecx
 8485045:	8d 85 cc fe ff ff    	lea    -0x134(%ebp),%eax
 848504b:	8d 95 e4 fd ff ff    	lea    -0x21c(%ebp),%edx
 8485051:	89 54 24 08          	mov    %edx,0x8(%esp)
 8485055:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8485059:	89 04 24             	mov    %eax,(%esp)
 848505c:	e8 73 24 00 00       	call   84874d4 <_ZNSt3mapI6JobKey15CSuccessJobNodeSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 8485061:	83 ec 04             	sub    $0x4,%esp
 8485064:	8d 85 c8 fe ff ff    	lea    -0x138(%ebp),%eax
 848506a:	89 44 24 04          	mov    %eax,0x4(%esp)
 848506e:	8d 85 cc fe ff ff    	lea    -0x134(%ebp),%eax
 8485074:	89 04 24             	mov    %eax,(%esp)
 8485077:	e8 aa 24 00 00       	call   8487526 <_ZNKSt17_Rb_tree_iteratorISt4pairIK6JobKey15CSuccessJobNodeEEneERKS5_>
 848507c:	8d 45 98             	lea    -0x68(%ebp),%eax
 848507f:	89 04 24             	mov    %eax,(%esp)
 8485082:	e8 a9 fb ff ff       	call   8484c30 <_ZN15CSuccessJobNodeC1Ev>
 8485087:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 848508d:	8d 55 98             	lea    -0x68(%ebp),%edx
 8485090:	89 54 24 08          	mov    %edx,0x8(%esp)
 8485094:	8d 95 e4 fd ff ff    	lea    -0x21c(%ebp),%edx
 848509a:	89 54 24 04          	mov    %edx,0x4(%esp)
 848509e:	89 04 24             	mov    %eax,(%esp)
 84850a1:	e8 94 24 00 00       	call   848753a <_ZSt9make_pairIR6JobKey15CSuccessJobNodeESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 84850a6:	83 ec 04             	sub    $0x4,%esp
 84850a9:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 84850af:	89 44 24 04          	mov    %eax,0x4(%esp)
 84850b3:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 84850b9:	89 04 24             	mov    %eax,(%esp)
 84850bc:	e8 3d 25 00 00       	call   84875fe <_ZNSt4pairIK6JobKey15CSuccessJobNodeEC1IS0_S2_EEOS_IT_T0_E>
 84850c1:	8b 45 08             	mov    0x8(%ebp),%eax
 84850c4:	8d 48 18             	lea    0x18(%eax),%ecx
 84850c7:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 84850cd:	8d 95 d8 fe ff ff    	lea    -0x128(%ebp),%edx
 84850d3:	89 54 24 08          	mov    %edx,0x8(%esp)
 84850d7:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84850db:	89 04 24             	mov    %eax,(%esp)
 84850de:	e8 61 25 00 00       	call   8487644 <_ZNSt3mapI6JobKey15CSuccessJobNodeSt4lessIS0_ESaISt4pairIKS0_S1_EEE6insertERKS6_>
 84850e3:	83 ec 04             	sub    $0x4,%esp
 84850e6:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 84850ec:	89 04 24             	mov    %eax,(%esp)
 84850ef:	e8 9e 1b 00 00       	call   8486c92 <_ZNSt4pairIK6JobKey15CSuccessJobNodeED1Ev>
 84850f4:	eb 30                	jmp    8485126 <_ZN19CDungeonSuccessNodeC1Ev+0x34c>
 84850f6:	89 d3                	mov    %edx,%ebx
 84850f8:	89 c6                	mov    %eax,%esi
 84850fa:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 8485100:	89 04 24             	mov    %eax,(%esp)
 8485103:	e8 8a 1b 00 00       	call   8486c92 <_ZNSt4pairIK6JobKey15CSuccessJobNodeED1Ev>
 8485108:	89 f0                	mov    %esi,%eax
 848510a:	89 da                	mov    %ebx,%edx
 848510c:	eb 00                	jmp    848510e <_ZN19CDungeonSuccessNodeC1Ev+0x334>
 848510e:	89 d3                	mov    %edx,%ebx
 8485110:	89 c6                	mov    %eax,%esi
 8485112:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 8485118:	89 04 24             	mov    %eax,(%esp)
 848511b:	e8 5c 1b 00 00       	call   8486c7c <_ZNSt4pairI6JobKey15CSuccessJobNodeED1Ev>
 8485120:	89 f0                	mov    %esi,%eax
 8485122:	89 da                	mov    %ebx,%edx
 8485124:	eb 10                	jmp    8485136 <_ZN19CDungeonSuccessNodeC1Ev+0x35c>
 8485126:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 848512c:	89 04 24             	mov    %eax,(%esp)
 848512f:	e8 48 1b 00 00       	call   8486c7c <_ZNSt4pairI6JobKey15CSuccessJobNodeED1Ev>
 8485134:	eb 15                	jmp    848514b <_ZN19CDungeonSuccessNodeC1Ev+0x371>
 8485136:	89 d3                	mov    %edx,%ebx
 8485138:	89 c6                	mov    %eax,%esi
 848513a:	8d 45 98             	lea    -0x68(%ebp),%eax
 848513d:	89 04 24             	mov    %eax,(%esp)
 8485140:	e8 15 1b 00 00       	call   8486c5a <_ZN15CSuccessJobNodeD1Ev>
 8485145:	89 f0                	mov    %esi,%eax
 8485147:	89 da                	mov    %ebx,%edx
 8485149:	eb 56                	jmp    84851a1 <_ZN19CDungeonSuccessNodeC1Ev+0x3c7>
 848514b:	8d 45 98             	lea    -0x68(%ebp),%eax
 848514e:	89 04 24             	mov    %eax,(%esp)
 8485151:	e8 04 1b 00 00       	call   8486c5a <_ZN15CSuccessJobNodeD1Ev>
 8485156:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 848515a:	83 7d f0 02          	cmpl   $0x2,-0x10(%ebp)
 848515e:	0f 9e c0             	setle  %al
 8485161:	84 c0                	test   %al,%al
 8485163:	0f 85 8b fe ff ff    	jne    8484ff4 <_ZN19CDungeonSuccessNodeC1Ev+0x21a>
 8485169:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 848516d:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 8485171:	0f 9e c0             	setle  %al
 8485174:	84 c0                	test   %al,%al
 8485176:	0f 85 45 fe ff ff    	jne    8484fc1 <_ZN19CDungeonSuccessNodeC1Ev+0x1e7>
 848517c:	8b 85 ec fd ff ff    	mov    -0x214(%ebp),%eax
 8485182:	83 c0 01             	add    $0x1,%eax
 8485185:	89 85 ec fd ff ff    	mov    %eax,-0x214(%ebp)
 848518b:	8b 85 ec fd ff ff    	mov    -0x214(%ebp),%eax
 8485191:	83 f8 0a             	cmp    $0xa,%eax
 8485194:	0f 9e c0             	setle  %al
 8485197:	84 c0                	test   %al,%al
 8485199:	0f 85 0a fe ff ff    	jne    8484fa9 <_ZN19CDungeonSuccessNodeC1Ev+0x1cf>
 848519f:	eb 33                	jmp    84851d4 <_ZN19CDungeonSuccessNodeC1Ev+0x3fa>
 84851a1:	89 d3                	mov    %edx,%ebx
 84851a3:	89 c6                	mov    %eax,%esi
 84851a5:	8b 45 08             	mov    0x8(%ebp),%eax
 84851a8:	83 c0 18             	add    $0x18,%eax
 84851ab:	89 04 24             	mov    %eax,(%esp)
 84851ae:	e8 d9 18 00 00       	call   8486a8c <_ZNSt3mapI6JobKey15CSuccessJobNodeSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 84851b3:	89 f0                	mov    %esi,%eax
 84851b5:	89 da                	mov    %ebx,%edx
 84851b7:	eb 00                	jmp    84851b9 <_ZN19CDungeonSuccessNodeC1Ev+0x3df>
 84851b9:	89 d3                	mov    %edx,%ebx
 84851bb:	89 c6                	mov    %eax,%esi
 84851bd:	8b 45 08             	mov    0x8(%ebp),%eax
 84851c0:	89 04 24             	mov    %eax,(%esp)
 84851c3:	e8 b0 18 00 00       	call   8486a78 <_ZNSt3mapIi5PartySt4lessIiESaISt4pairIKiS0_EEED1Ev>
 84851c8:	89 f0                	mov    %esi,%eax
 84851ca:	89 da                	mov    %ebx,%edx
 84851cc:	89 04 24             	mov    %eax,(%esp)
 84851cf:	e8 7c e5 65 00       	call   8ae3750 <_Unwind_Resume>
 84851d4:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84851d7:	83 c4 00             	add    $0x0,%esp
 84851da:	5b                   	pop    %ebx
 84851db:	5e                   	pop    %esi
 84851dc:	5d                   	pop    %ebp
 84851dd:	c3                   	ret

```

```c
// CDungeonSuccessNode::CDungeonSuccessNode @ 0x8484dda

/* CDungeonSuccessNode::CDungeonSuccessNode() */

void __thiscall CDungeonSuccessNode::CDungeonSuccessNode(CDungeonSuccessNode *this)

{
  STGrowthType local_221;
  int local_220;
  STGrowthType local_21c;
  int local_218;
  map<int,Party,std::less<int>,std::allocator<std::pair<int_const,Party>>> local_214 [4];
  _Rb_tree_iterator<std::pair<int_const,Party>> local_210 [4];
  pair local_20c [8];
  pair<int_const,Party> local_204 [68];
  pair<int,Party> local_1c0 [68];
  Party local_17c [64];
  map<JobKey,CSuccessJobNode,std::less<JobKey>,std::allocator<std::pair<JobKey_const,CSuccessJobNode>>>
  local_13c [4];
  JobKey local_138 [4];
  pair local_134 [8];
  pair<JobKey_const,CSuccessJobNode> local_12c [96];
  JobKey local_cc [96];
  CSuccessJobNode local_6c [88];
  int local_14;
  int local_10;
  
  std::map<int,Party,std::less<int>,std::allocator<std::pair<int_const,Party>>>::map
            ((map<int,Party,std::less<int>,std::allocator<std::pair<int_const,Party>>> *)this);
                    /* try { // try from 08484df9 to 08484dfd has its CatchHandler @ 084851b9 */
  std::
  map<JobKey,CSuccessJobNode,std::less<JobKey>,std::allocator<std::pair<JobKey_const,CSuccessJobNode>>>
  ::map((map<JobKey,CSuccessJobNode,std::less<JobKey>,std::allocator<std::pair<JobKey_const,CSuccessJobNode>>>
         *)(this + 0x18));
  local_14 = 0;
  local_10 = 0;
  for (local_218 = 2; local_218 < 5; local_218 = local_218 + 1) {
                    /* try { // try from 08484e35 to 08484e5b has its CatchHandler @ 084851a1 */
    std::map<int,Party,std::less<int>,std::allocator<std::pair<int_const,Party>>>::end(local_214);
    std::map<int,Party,std::less<int>,std::allocator<std::pair<int_const,Party>>>::find
              ((int *)local_210);
    std::_Rb_tree_iterator<std::pair<int_const,Party>>::operator!=
              (local_210,(_Rb_tree_iterator *)local_214);
    Party::Party(local_17c);
                    /* try { // try from 08484ea2 to 08484ea6 has its CatchHandler @ 08484f4f */
    std::make_pair<int&,Party>((int *)local_1c0,(Party *)&local_218);
                    /* try { // try from 08484ebd to 08484ec1 has its CatchHandler @ 08484f37 */
    std::pair<int_const,Party>::pair<int,Party>(local_204,local_1c0);
                    /* try { // try from 08484edc to 08484ee0 has its CatchHandler @ 08484f1f */
    std::map<int,Party,std::less<int>,std::allocator<std::pair<int_const,Party>>>::insert(local_20c)
    ;
    std::pair<int_const,Party>::~pair(local_204);
    std::pair<int,Party>::~pair(local_1c0);
    Party::~Party(local_17c);
  }
  JobKey::JobKey((JobKey *)&local_220);
  STGrowthType::STGrowthType(&local_221);
  for (local_218 = 0; local_218 < 0xb; local_218 = local_218 + 1) {
    local_220 = local_218;
    for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
      local_221 = (STGrowthType)((char)(local_10 << 4) >> 4 & 0xf);
      for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
        local_221 = (STGrowthType)((byte)local_221 & 0x8f | ((char)(local_14 << 5) >> 5 & 7U) << 4);
        local_21c = local_221;
                    /* try { // try from 08485037 to 08485086 has its CatchHandler @ 084851a1 */
        std::
        map<JobKey,CSuccessJobNode,std::less<JobKey>,std::allocator<std::pair<JobKey_const,CSuccessJobNode>>>
        ::end(local_13c);
        std::
        map<JobKey,CSuccessJobNode,std::less<JobKey>,std::allocator<std::pair<JobKey_const,CSuccessJobNode>>>
        ::find(local_138);
        std::_Rb_tree_iterator<std::pair<JobKey_const,CSuccessJobNode>>::operator!=
                  ((_Rb_tree_iterator<std::pair<JobKey_const,CSuccessJobNode>> *)local_138,
                   (_Rb_tree_iterator *)local_13c);
        CSuccessJobNode::CSuccessJobNode(local_6c);
                    /* try { // try from 084850a1 to 084850a5 has its CatchHandler @ 08485136 */
        std::make_pair<JobKey&,CSuccessJobNode>(local_cc,(CSuccessJobNode *)&local_220);
                    /* try { // try from 084850bc to 084850c0 has its CatchHandler @ 0848510e */
        std::pair<JobKey_const,CSuccessJobNode>::pair<JobKey,CSuccessJobNode>(local_12c,local_cc);
                    /* try { // try from 084850de to 084850e2 has its CatchHandler @ 084850f6 */
        std::
        map<JobKey,CSuccessJobNode,std::less<JobKey>,std::allocator<std::pair<JobKey_const,CSuccessJobNode>>>
        ::insert(local_134);
                    /* try { // try from 084850ef to 084850f3 has its CatchHandler @ 0848510e */
        std::pair<JobKey_const,CSuccessJobNode>::~pair(local_12c);
                    /* try { // try from 0848512f to 08485133 has its CatchHandler @ 08485136 */
        std::pair<JobKey,CSuccessJobNode>::~pair((pair<JobKey,CSuccessJobNode> *)local_cc);
                    /* try { // try from 08485151 to 08485155 has its CatchHandler @ 084851a1 */
        CSuccessJobNode::~CSuccessJobNode(local_6c);
      }
    }
  }
  return;
}

```

---

## InsertDB

```asm
// === 08485f8a CDungeonSuccessNode::InsertDB  [0x08485f8a-0x8486233] ===
 8485f8a:	55                   	push   %ebp
 8485f8b:	89 e5                	mov    %esp,%ebp
 8485f8d:	57                   	push   %edi
 8485f8e:	56                   	push   %esi
 8485f8f:	53                   	push   %ebx
 8485f90:	81 ec cc 00 00 00    	sub    $0xcc,%esp
 8485f96:	8b 45 10             	mov    0x10(%ebp),%eax
 8485f99:	88 45 a4             	mov    %al,-0x5c(%ebp)
 8485f9c:	8b 45 08             	mov    0x8(%ebp),%eax
 8485f9f:	8d 50 18             	lea    0x18(%eax),%edx
 8485fa2:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8485fa5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8485fa9:	89 04 24             	mov    %eax,(%esp)
 8485fac:	e8 07 1e 00 00       	call   8487db8 <_ZNSt3mapI6JobKey15CSuccessJobNodeSt4lessIS0_ESaISt4pairIKS0_S1_EEE5beginEv>
 8485fb1:	83 ec 04             	sub    $0x4,%esp
 8485fb4:	eb 5d                	jmp    8486013 <_ZN19CDungeonSuccessNode8InsertDBERK10DungeonKeyb+0x89>
 8485fb6:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8485fb9:	89 04 24             	mov    %eax,(%esp)
 8485fbc:	e8 bd 16 00 00       	call   848767e <_ZNKSt17_Rb_tree_iteratorISt4pairIK6JobKey15CSuccessJobNodeEEptEv>
 8485fc1:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8485fc4:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8485fc7:	89 04 24             	mov    %eax,(%esp)
 8485fca:	e8 af 16 00 00       	call   848767e <_ZNKSt17_Rb_tree_iteratorISt4pairIK6JobKey15CSuccessJobNodeEEptEv>
 8485fcf:	83 c0 08             	add    $0x8,%eax
 8485fd2:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8485fd5:	0f b6 45 a4          	movzbl -0x5c(%ebp),%eax
 8485fd9:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8485fdc:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8485fe0:	89 44 24 08          	mov    %eax,0x8(%esp)
 8485fe4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8485fe7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8485feb:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8485fee:	89 04 24             	mov    %eax,(%esp)
 8485ff1:	e8 3e 02 00 00       	call   8486234 <_ZN15CSuccessJobNode8InsertDBERK10DungeonKeybRK6JobKey>
 8485ff6:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8485ff9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8486000:	00 
 8486001:	8d 55 b0             	lea    -0x50(%ebp),%edx
 8486004:	89 54 24 04          	mov    %edx,0x4(%esp)
 8486008:	89 04 24             	mov    %eax,(%esp)
 848600b:	e8 ce 1d 00 00       	call   8487dde <_ZNSt17_Rb_tree_iteratorISt4pairIK6JobKey15CSuccessJobNodeEEppEi>
 8486010:	83 ec 04             	sub    $0x4,%esp
 8486013:	8b 45 08             	mov    0x8(%ebp),%eax
 8486016:	8d 50 18             	lea    0x18(%eax),%edx
 8486019:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 848601c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8486020:	89 04 24             	mov    %eax,(%esp)
 8486023:	e8 d8 14 00 00       	call   8487500 <_ZNSt3mapI6JobKey15CSuccessJobNodeSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 8486028:	83 ec 04             	sub    $0x4,%esp
 848602b:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 848602e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8486032:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8486035:	89 04 24             	mov    %eax,(%esp)
 8486038:	e8 e9 14 00 00       	call   8487526 <_ZNKSt17_Rb_tree_iteratorISt4pairIK6JobKey15CSuccessJobNodeEEneERKS5_>
 848603d:	84 c0                	test   %al,%al
 848603f:	0f 85 71 ff ff ff    	jne    8485fb6 <_ZN19CDungeonSuccessNode8InsertDBERK10DungeonKeyb+0x2c>
 8486045:	8b 55 08             	mov    0x8(%ebp),%edx
 8486048:	8d 45 ac             	lea    -0x54(%ebp),%eax
 848604b:	89 54 24 04          	mov    %edx,0x4(%esp)
 848604f:	89 04 24             	mov    %eax,(%esp)
 8486052:	e8 c5 1d 00 00       	call   8487e1c <_ZNSt3mapIi5PartySt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 8486057:	83 ec 04             	sub    $0x4,%esp
 848605a:	e9 95 01 00 00       	jmp    84861f4 <_ZN19CDungeonSuccessNode8InsertDBERK10DungeonKeyb+0x26a>
 848605f:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8486062:	89 04 24             	mov    %eax,(%esp)
 8486065:	e8 06 16 00 00       	call   8487670 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi5PartyEEptEv>
 848606a:	89 45 dc             	mov    %eax,-0x24(%ebp)
 848606d:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8486070:	89 04 24             	mov    %eax,(%esp)
 8486073:	e8 f8 15 00 00       	call   8487670 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi5PartyEEptEv>
 8486078:	83 c0 04             	add    $0x4,%eax
 848607b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 848607e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8486081:	8b 40 3c             	mov    0x3c(%eax),%eax
 8486084:	85 c0                	test   %eax,%eax
 8486086:	0f 84 40 01 00 00    	je     84861cc <_ZN19CDungeonSuccessNode8InsertDBERK10DungeonKeyb+0x242>
 848608c:	e8 e8 fa ff ff       	call   8485b79 <_Z16GetMySqLInstancev>
 8486091:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8486094:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8486097:	8b 38                	mov    (%eax),%edi
 8486099:	8b 45 e0             	mov    -0x20(%ebp),%eax
 848609c:	8b 40 24             	mov    0x24(%eax),%eax
 848609f:	89 45 80             	mov    %eax,-0x80(%ebp)
 84860a2:	0f b6 45 a4          	movzbl -0x5c(%ebp),%eax
 84860a6:	89 45 84             	mov    %eax,-0x7c(%ebp)
 84860a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84860ac:	8b 40 04             	mov    0x4(%eax),%eax
 84860af:	89 45 88             	mov    %eax,-0x78(%ebp)
 84860b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84860b5:	8b 00                	mov    (%eax),%eax
 84860b7:	89 45 8c             	mov    %eax,-0x74(%ebp)
 84860ba:	e8 c2 60 c4 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84860bf:	89 04 24             	mov    %eax,(%esp)
 84860c2:	e8 03 4a cc ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 84860c7:	89 45 90             	mov    %eax,-0x70(%ebp)
 84860ca:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84860cd:	8b 40 3c             	mov    0x3c(%eax),%eax
 84860d0:	89 45 94             	mov    %eax,-0x6c(%ebp)
 84860d3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84860d6:	8b 40 1c             	mov    0x1c(%eax),%eax
 84860d9:	89 45 98             	mov    %eax,-0x68(%ebp)
 84860dc:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84860df:	8b 40 18             	mov    0x18(%eax),%eax
 84860e2:	89 45 9c             	mov    %eax,-0x64(%ebp)
 84860e5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84860e8:	8b 40 14             	mov    0x14(%eax),%eax
 84860eb:	89 45 a0             	mov    %eax,-0x60(%ebp)
 84860ee:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84860f1:	8b 70 10             	mov    0x10(%eax),%esi
 84860f4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84860f7:	8b 58 0c             	mov    0xc(%eax),%ebx
 84860fa:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84860fd:	8b 48 08             	mov    0x8(%eax),%ecx
 8486100:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8486103:	8b 50 04             	mov    0x4(%eax),%edx
 8486106:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8486109:	8b 00                	mov    (%eax),%eax
 848610b:	89 7c 24 40          	mov    %edi,0x40(%esp)
 848610f:	8b 7d 80             	mov    -0x80(%ebp),%edi
 8486112:	89 7c 24 3c          	mov    %edi,0x3c(%esp)
 8486116:	8b 7d 84             	mov    -0x7c(%ebp),%edi
 8486119:	89 7c 24 38          	mov    %edi,0x38(%esp)
 848611d:	8b 7d 88             	mov    -0x78(%ebp),%edi
 8486120:	89 7c 24 34          	mov    %edi,0x34(%esp)
 8486124:	8b 7d 8c             	mov    -0x74(%ebp),%edi
 8486127:	89 7c 24 30          	mov    %edi,0x30(%esp)
 848612b:	8b 7d 90             	mov    -0x70(%ebp),%edi
 848612e:	89 7c 24 2c          	mov    %edi,0x2c(%esp)
 8486132:	8b 7d 94             	mov    -0x6c(%ebp),%edi
 8486135:	89 7c 24 28          	mov    %edi,0x28(%esp)
 8486139:	8b 7d 98             	mov    -0x68(%ebp),%edi
 848613c:	89 7c 24 24          	mov    %edi,0x24(%esp)
 8486140:	8b 7d 9c             	mov    -0x64(%ebp),%edi
 8486143:	89 7c 24 20          	mov    %edi,0x20(%esp)
 8486147:	8b 7d a0             	mov    -0x60(%ebp),%edi
 848614a:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 848614e:	89 74 24 18          	mov    %esi,0x18(%esp)
 8486152:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8486156:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 848615a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 848615e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8486162:	c7 44 24 04 48 46 c7 	movl   $0x8c74648,0x4(%esp)
 8486169:	08 
 848616a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848616d:	89 04 24             	mov    %eax,(%esp)
 8486170:	e8 4b e0 f6 ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8486175:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 848617c:	00 
 848617d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8486180:	89 04 24             	mov    %eax,(%esp)
 8486183:	e8 9e e1 f6 ff       	call   83f4326 <_ZN5MySQL4execEb>
 8486188:	83 f0 01             	xor    $0x1,%eax
 848618b:	84 c0                	test   %al,%al
 848618d:	74 3d                	je     84861cc <_ZN19CDungeonSuccessNode8InsertDBERK10DungeonKeyb+0x242>
 848618f:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8486196:	00 
 8486197:	c7 44 24 08 b9 01 00 	movl   $0x1b9,0x8(%esp)
 848619e:	00 
 848619f:	c7 44 24 04 00 56 c7 	movl   $0x8c75600,0x4(%esp)
 84861a6:	08 
 84861a7:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84861aa:	89 04 24             	mov    %eax,(%esp)
 84861ad:	e8 66 95 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84861b2:	c7 44 24 04 60 47 c7 	movl   $0x8c74760,0x4(%esp)
 84861b9:	08 
 84861ba:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84861bd:	89 04 24             	mov    %eax,(%esp)
 84861c0:	e8 c3 95 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84861c5:	b8 00 00 00 00       	mov    $0x0,%eax
 84861ca:	eb 5c                	jmp    8486228 <_ZN19CDungeonSuccessNode8InsertDBERK10DungeonKeyb+0x29e>
 84861cc:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84861cf:	89 04 24             	mov    %eax,(%esp)
 84861d2:	e8 ff 07 00 00       	call   84869d6 <_ZN5Party5ResetEv>
 84861d7:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84861da:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84861e1:	00 
 84861e2:	8d 55 ac             	lea    -0x54(%ebp),%edx
 84861e5:	89 54 24 04          	mov    %edx,0x4(%esp)
 84861e9:	89 04 24             	mov    %eax,(%esp)
 84861ec:	e8 51 1c 00 00       	call   8487e42 <_ZNSt17_Rb_tree_iteratorISt4pairIKi5PartyEEppEi>
 84861f1:	83 ec 04             	sub    $0x4,%esp
 84861f4:	8b 55 08             	mov    0x8(%ebp),%edx
 84861f7:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84861fa:	89 54 24 04          	mov    %edx,0x4(%esp)
 84861fe:	89 04 24             	mov    %eax,(%esp)
 8486201:	e8 9a 11 00 00       	call   84873a0 <_ZNSt3mapIi5PartySt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8486206:	83 ec 04             	sub    $0x4,%esp
 8486209:	8d 45 bc             	lea    -0x44(%ebp),%eax
 848620c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8486210:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8486213:	89 04 24             	mov    %eax,(%esp)
 8486216:	e8 ab 11 00 00       	call   84873c6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi5PartyEEneERKS4_>
 848621b:	84 c0                	test   %al,%al
 848621d:	0f 85 3c fe ff ff    	jne    848605f <_ZN19CDungeonSuccessNode8InsertDBERK10DungeonKeyb+0xd5>
 8486223:	b8 01 00 00 00       	mov    $0x1,%eax
 8486228:	8d 65 f4             	lea    -0xc(%ebp),%esp
 848622b:	83 c4 00             	add    $0x0,%esp
 848622e:	5b                   	pop    %ebx
 848622f:	5e                   	pop    %esi
 8486230:	5f                   	pop    %edi
 8486231:	5d                   	pop    %ebp
 8486232:	c3                   	ret
 8486233:	90                   	nop

```

```c
// CDungeonSuccessNode::InsertDB @ 0x8485f8a

/* CDungeonSuccessNode::InsertDB(DungeonKey const&, bool) */

undefined4 __thiscall
CDungeonSuccessNode::InsertDB(CDungeonSuccessNode *this,DungeonKey *param_1,bool param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  CEnvironment *this_00;
  undefined4 uVar7;
  map<int,Party,std::less<int>,std::allocator<std::pair<int_const,Party>>> local_58 [4];
  map<JobKey,CSuccessJobNode,std::less<JobKey>,std::allocator<std::pair<JobKey_const,CSuccessJobNode>>>
  local_54 [4];
  map<JobKey,CSuccessJobNode,std::less<JobKey>,std::allocator<std::pair<JobKey_const,CSuccessJobNode>>>
  local_50 [4];
  _Rb_tree_iterator<std::pair<JobKey_const,CSuccessJobNode>> local_4c [4];
  map<int,Party,std::less<int>,std::allocator<std::pair<int_const,Party>>> local_48 [4];
  cMyTrace local_44 [16];
  _Rb_tree_iterator<std::pair<int_const,Party>> local_34 [4];
  JobKey *local_30;
  CSuccessJobNode *local_2c;
  undefined4 *local_28;
  Party *local_24;
  MySQL *local_20;
  
  std::
  map<JobKey,CSuccessJobNode,std::less<JobKey>,std::allocator<std::pair<JobKey_const,CSuccessJobNode>>>
  ::begin(local_54);
  while( true ) {
    std::
    map<JobKey,CSuccessJobNode,std::less<JobKey>,std::allocator<std::pair<JobKey_const,CSuccessJobNode>>>
    ::end(local_50);
    cVar5 = std::_Rb_tree_iterator<std::pair<JobKey_const,CSuccessJobNode>>::operator!=
                      ((_Rb_tree_iterator<std::pair<JobKey_const,CSuccessJobNode>> *)local_54,
                       (_Rb_tree_iterator *)local_50);
    if (cVar5 == '\0') break;
    local_30 = (JobKey *)
               std::_Rb_tree_iterator<std::pair<JobKey_const,CSuccessJobNode>>::operator->
                         ((_Rb_tree_iterator<std::pair<JobKey_const,CSuccessJobNode>> *)local_54);
    iVar6 = std::_Rb_tree_iterator<std::pair<JobKey_const,CSuccessJobNode>>::operator->
                      ((_Rb_tree_iterator<std::pair<JobKey_const,CSuccessJobNode>> *)local_54);
    local_2c = (CSuccessJobNode *)(iVar6 + 8);
    CSuccessJobNode::InsertDB(local_2c,param_1,param_2,local_30);
    std::_Rb_tree_iterator<std::pair<JobKey_const,CSuccessJobNode>>::operator++
              (local_4c,(int)local_54);
  }
  std::map<int,Party,std::less<int>,std::allocator<std::pair<int_const,Party>>>::begin(local_58);
  do {
    std::map<int,Party,std::less<int>,std::allocator<std::pair<int_const,Party>>>::end(local_48);
    cVar5 = std::_Rb_tree_iterator<std::pair<int_const,Party>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,Party>> *)local_58,
                       (_Rb_tree_iterator *)local_48);
    if (cVar5 == '\0') {
      return 1;
    }
    local_28 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<int_const,Party>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,Party>> *)local_58);
    iVar6 = std::_Rb_tree_iterator<std::pair<int_const,Party>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,Party>> *)local_58);
    local_24 = (Party *)(iVar6 + 4);
    if (*(int *)(iVar6 + 0x40) != 0) {
      local_20 = (MySQL *)GetMySqLInstance();
      uVar1 = *local_28;
      uVar2 = *(undefined4 *)(local_24 + 0x24);
      uVar3 = *(undefined4 *)(param_1 + 4);
      uVar4 = *(undefined4 *)param_1;
      this_00 = (CEnvironment *)G_CEnvironment();
      uVar7 = CEnvironment::get_channel_no(this_00);
      MySQL::set_query(local_20,
                       "inSert into log_dungeon_party(clear_time,die_count,hp_consume,mp_consume,hit_count,hit_per_avg_damage,hp_recovery,mp_recovery,update_count,channel_no,dungeon_index,dungeon_diff,success,level,party_user_count,last_time) values(%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,NOW())"
                       ,*(undefined4 *)local_24,*(undefined4 *)(local_24 + 4),
                       *(undefined4 *)(local_24 + 8),*(undefined4 *)(local_24 + 0xc),
                       *(undefined4 *)(local_24 + 0x10),*(undefined4 *)(local_24 + 0x14),
                       *(undefined4 *)(local_24 + 0x18),*(undefined4 *)(local_24 + 0x1c),
                       *(undefined4 *)(local_24 + 0x3c),uVar7,uVar4,uVar3,(uint)param_2,uVar2,uVar1)
      ;
      cVar5 = MySQL::exec(local_20,true);
      if (cVar5 != '\x01') {
        cMyTrace::cMyTrace(local_44,"bool CDungeonSuccessNode::InsertDB(const DungeonKey&, bool)",
                           0x1b9,5);
        cMyTrace::operator()(local_44,"inSert log_dungeon_party failed");
        return 0;
      }
    }
    Party::Reset(local_24);
    std::_Rb_tree_iterator<std::pair<int_const,Party>>::operator++(local_34,(int)local_58);
  } while( true );
}

```

---

## UpdateCharacter

```asm
// === 084851de CDungeonSuccessNode::UpdateCharacter  [0x084851de-0x84852dd] ===
 84851de:	55                   	push   %ebp
 84851df:	89 e5                	mov    %esp,%ebp
 84851e1:	83 ec 38             	sub    $0x38,%esp
 84851e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84851e7:	8d 48 44             	lea    0x44(%eax),%ecx
 84851ea:	8b 55 08             	mov    0x8(%ebp),%edx
 84851ed:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84851f0:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84851f4:	89 54 24 04          	mov    %edx,0x4(%esp)
 84851f8:	89 04 24             	mov    %eax,(%esp)
 84851fb:	e8 74 21 00 00       	call   8487374 <_ZNSt3mapIi5PartySt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 8485200:	83 ec 04             	sub    $0x4,%esp
 8485203:	8b 55 08             	mov    0x8(%ebp),%edx
 8485206:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8485209:	89 54 24 04          	mov    %edx,0x4(%esp)
 848520d:	89 04 24             	mov    %eax,(%esp)
 8485210:	e8 8b 21 00 00       	call   84873a0 <_ZNSt3mapIi5PartySt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8485215:	83 ec 04             	sub    $0x4,%esp
 8485218:	8d 45 e8             	lea    -0x18(%ebp),%eax
 848521b:	89 44 24 04          	mov    %eax,0x4(%esp)
 848521f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8485222:	89 04 24             	mov    %eax,(%esp)
 8485225:	e8 9c 21 00 00       	call   84873c6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi5PartyEEneERKS4_>
 848522a:	84 c0                	test   %al,%al
 848522c:	74 35                	je     8485263 <_ZN19CDungeonSuccessNode15UpdateCharacterEP26SIG_DUNGEON_DATA_STATISTIC+0x85>
 848522e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8485231:	89 04 24             	mov    %eax,(%esp)
 8485234:	e8 37 24 00 00       	call   8487670 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi5PartyEEptEv>
 8485239:	83 c0 04             	add    $0x4,%eax
 848523c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 848523f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8485242:	8d 50 24             	lea    0x24(%eax),%edx
 8485245:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8485248:	89 54 24 04          	mov    %edx,0x4(%esp)
 848524c:	89 04 24             	mov    %eax,(%esp)
 848524f:	e8 94 14 00 00       	call   84866e8 <_ZN8PlayInfopLERKS_>
 8485254:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8485257:	8b 40 3c             	mov    0x3c(%eax),%eax
 848525a:	8d 50 01             	lea    0x1(%eax),%edx
 848525d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8485260:	89 50 3c             	mov    %edx,0x3c(%eax)
 8485263:	8b 45 0c             	mov    0xc(%ebp),%eax
 8485266:	8d 48 10             	lea    0x10(%eax),%ecx
 8485269:	8b 45 08             	mov    0x8(%ebp),%eax
 848526c:	8d 50 18             	lea    0x18(%eax),%edx
 848526f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8485272:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8485276:	89 54 24 04          	mov    %edx,0x4(%esp)
 848527a:	89 04 24             	mov    %eax,(%esp)
 848527d:	e8 52 22 00 00       	call   84874d4 <_ZNSt3mapI6JobKey15CSuccessJobNodeSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 8485282:	83 ec 04             	sub    $0x4,%esp
 8485285:	8b 45 08             	mov    0x8(%ebp),%eax
 8485288:	8d 50 18             	lea    0x18(%eax),%edx
 848528b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 848528e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8485292:	89 04 24             	mov    %eax,(%esp)
 8485295:	e8 66 22 00 00       	call   8487500 <_ZNSt3mapI6JobKey15CSuccessJobNodeSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 848529a:	83 ec 04             	sub    $0x4,%esp
 848529d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84852a0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84852a4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84852a7:	89 04 24             	mov    %eax,(%esp)
 84852aa:	e8 77 22 00 00       	call   8487526 <_ZNKSt17_Rb_tree_iteratorISt4pairIK6JobKey15CSuccessJobNodeEEneERKS5_>
 84852af:	84 c0                	test   %al,%al
 84852b1:	74 23                	je     84852d6 <_ZN19CDungeonSuccessNode15UpdateCharacterEP26SIG_DUNGEON_DATA_STATISTIC+0xf8>
 84852b3:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84852b6:	89 04 24             	mov    %eax,(%esp)
 84852b9:	e8 c0 23 00 00       	call   848767e <_ZNKSt17_Rb_tree_iteratorISt4pairIK6JobKey15CSuccessJobNodeEEptEv>
 84852be:	83 c0 08             	add    $0x8,%eax
 84852c1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84852c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84852c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84852cb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84852ce:	89 04 24             	mov    %eax,(%esp)
 84852d1:	e8 76 fa ff ff       	call   8484d4c <_ZN15CSuccessJobNode15UpdateCharacterEP26SIG_DUNGEON_DATA_STATISTIC>
 84852d6:	b8 01 00 00 00       	mov    $0x1,%eax
 84852db:	c9                   	leave
 84852dc:	c3                   	ret
 84852dd:	90                   	nop

```

```c
// CDungeonSuccessNode::UpdateCharacter @ 0x84851de

/* CDungeonSuccessNode::UpdateCharacter(SIG_DUNGEON_DATA_STATISTIC*) */

undefined4 __thiscall
CDungeonSuccessNode::UpdateCharacter(CDungeonSuccessNode *this,SIG_DUNGEON_DATA_STATISTIC *param_1)

{
  char cVar1;
  int iVar2;
  JobKey local_24 [4];
  _Rb_tree_iterator<std::pair<int_const,Party>> local_20 [4];
  map<int,Party,std::less<int>,std::allocator<std::pair<int_const,Party>>> local_1c [4];
  map<JobKey,CSuccessJobNode,std::less<JobKey>,std::allocator<std::pair<JobKey_const,CSuccessJobNode>>>
  local_18 [4];
  PlayInfo *local_14;
  CSuccessJobNode *local_10;
  
  std::map<int,Party,std::less<int>,std::allocator<std::pair<int_const,Party>>>::find
            ((int *)local_20);
  std::map<int,Party,std::less<int>,std::allocator<std::pair<int_const,Party>>>::end(local_1c);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,Party>>::operator!=
                    (local_20,(_Rb_tree_iterator *)local_1c);
  if (cVar1 != '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,Party>>::operator->(local_20);
    local_14 = (PlayInfo *)(iVar2 + 4);
    PlayInfo::operator+=(local_14,(PlayInfo *)(param_1 + 0x24));
    *(int *)(local_14 + 0x3c) = *(int *)(local_14 + 0x3c) + 1;
  }
  std::
  map<JobKey,CSuccessJobNode,std::less<JobKey>,std::allocator<std::pair<JobKey_const,CSuccessJobNode>>>
  ::find(local_24);
  std::
  map<JobKey,CSuccessJobNode,std::less<JobKey>,std::allocator<std::pair<JobKey_const,CSuccessJobNode>>>
  ::end(local_18);
  cVar1 = std::_Rb_tree_iterator<std::pair<JobKey_const,CSuccessJobNode>>::operator!=
                    ((_Rb_tree_iterator<std::pair<JobKey_const,CSuccessJobNode>> *)local_24,
                     (_Rb_tree_iterator *)local_18);
  if (cVar1 != '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<JobKey_const,CSuccessJobNode>>::operator->
                      ((_Rb_tree_iterator<std::pair<JobKey_const,CSuccessJobNode>> *)local_24);
    local_10 = (CSuccessJobNode *)(iVar2 + 8);
    CSuccessJobNode::UpdateCharacter(local_10,param_1);
  }
  return 1;
}

```

