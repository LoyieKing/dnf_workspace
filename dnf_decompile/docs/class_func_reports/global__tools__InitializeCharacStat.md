# global__tools__InitializeCharacStat

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## initCharacStat

```asm
// === 08145e64 global::tools::InitializeCharacStat::initCharacStat  [0x08145e64-0x81462a2] ===
 8145e64:	55                   	push   %ebp
 8145e65:	89 e5                	mov    %esp,%ebp
 8145e67:	57                   	push   %edi
 8145e68:	56                   	push   %esi
 8145e69:	53                   	push   %ebx
 8145e6a:	81 ec 0c 01 00 00    	sub    $0x10c,%esp
 8145e70:	8b 45 08             	mov    0x8(%ebp),%eax
 8145e73:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 8145e77:	66 85 c0             	test   %ax,%ax
 8145e7a:	0f 85 18 04 00 00    	jne    8146298 <_ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x434>
 8145e80:	8b 45 08             	mov    0x8(%ebp),%eax
 8145e83:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 8145e87:	66 85 c0             	test   %ax,%ax
 8145e8a:	0f 85 08 04 00 00    	jne    8146298 <_ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x434>
 8145e90:	8b 45 08             	mov    0x8(%ebp),%eax
 8145e93:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 8145e97:	66 85 c0             	test   %ax,%ax
 8145e9a:	0f 85 f8 03 00 00    	jne    8146298 <_ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x434>
 8145ea0:	8b 45 08             	mov    0x8(%ebp),%eax
 8145ea3:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 8145ea7:	66 85 c0             	test   %ax,%ax
 8145eaa:	0f 85 e8 03 00 00    	jne    8146298 <_ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x434>
 8145eb0:	8b 45 08             	mov    0x8(%ebp),%eax
 8145eb3:	8b 00                	mov    (%eax),%eax
 8145eb5:	85 c0                	test   %eax,%eax
 8145eb7:	0f 85 db 03 00 00    	jne    8146298 <_ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x434>
 8145ebd:	8b 45 08             	mov    0x8(%ebp),%eax
 8145ec0:	8b 40 04             	mov    0x4(%eax),%eax
 8145ec3:	85 c0                	test   %eax,%eax
 8145ec5:	0f 85 cd 03 00 00    	jne    8146298 <_ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x434>
 8145ecb:	8b 45 08             	mov    0x8(%ebp),%eax
 8145ece:	8b 40 42             	mov    0x42(%eax),%eax
 8145ed1:	85 c0                	test   %eax,%eax
 8145ed3:	0f 85 bf 03 00 00    	jne    8146298 <_ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x434>
 8145ed9:	8b 45 08             	mov    0x8(%ebp),%eax
 8145edc:	89 04 24             	mov    %eax,(%esp)
 8145edf:	e8 84 23 20 00       	call   8348268 <_ZN15_Additioal_info5clearEv>
 8145ee4:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8145ee8:	78 12                	js     8145efc <_ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x98>
 8145eea:	83 7d 10 0a          	cmpl   $0xa,0x10(%ebp)
 8145eee:	7f 0c                	jg     8145efc <_ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x98>
 8145ef0:	83 7d 14 46          	cmpl   $0x46,0x14(%ebp)
 8145ef4:	7f 06                	jg     8145efc <_ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x98>
 8145ef6:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8145efa:	7f 50                	jg     8145f4c <_ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0xe8>
 8145efc:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8145f03:	00 
 8145f04:	c7 44 24 08 1f 00 00 	movl   $0x1f,0x8(%esp)
 8145f0b:	00 
 8145f0c:	c7 44 24 04 00 10 b7 	movl   $0x8b71000,0x4(%esp)
 8145f13:	08 
 8145f14:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8145f17:	89 04 24             	mov    %eax,(%esp)
 8145f1a:	e8 f9 97 40 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8145f1f:	8b 45 14             	mov    0x14(%ebp),%eax
 8145f22:	89 44 24 10          	mov    %eax,0x10(%esp)
 8145f26:	8b 45 10             	mov    0x10(%ebp),%eax
 8145f29:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8145f2d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8145f30:	89 44 24 08          	mov    %eax,0x8(%esp)
 8145f34:	c7 44 24 04 c0 02 b7 	movl   $0x8b702c0,0x4(%esp)
 8145f3b:	08 
 8145f3c:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8145f3f:	89 04 24             	mov    %eax,(%esp)
 8145f42:	e8 41 98 40 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8145f47:	e9 4c 03 00 00       	jmp    8146298 <_ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x434>
 8145f4c:	e8 4a 62 f8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8145f51:	8b 48 14             	mov    0x14(%eax),%ecx
 8145f54:	8b 45 10             	mov    0x10(%ebp),%eax
 8145f57:	69 d0 dc 07 00 00    	imul   $0x7dc,%eax,%edx
 8145f5d:	8d 85 56 ff ff ff    	lea    -0xaa(%ebp),%eax
 8145f63:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8145f66:	bb 52 00 00 00       	mov    $0x52,%ebx
 8145f6b:	89 c1                	mov    %eax,%ecx
 8145f6d:	83 e1 02             	and    $0x2,%ecx
 8145f70:	85 c9                	test   %ecx,%ecx
 8145f72:	74 0f                	je     8145f83 <_ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x11f>
 8145f74:	0f b7 0a             	movzwl (%edx),%ecx
 8145f77:	66 89 08             	mov    %cx,(%eax)
 8145f7a:	83 c0 02             	add    $0x2,%eax
 8145f7d:	83 c2 02             	add    $0x2,%edx
 8145f80:	83 eb 02             	sub    $0x2,%ebx
 8145f83:	89 d9                	mov    %ebx,%ecx
 8145f85:	c1 e9 02             	shr    $0x2,%ecx
 8145f88:	89 c7                	mov    %eax,%edi
 8145f8a:	89 d6                	mov    %edx,%esi
 8145f8c:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 8145f8e:	89 f2                	mov    %esi,%edx
 8145f90:	89 f8                	mov    %edi,%eax
 8145f92:	b9 00 00 00 00       	mov    $0x0,%ecx
 8145f97:	89 de                	mov    %ebx,%esi
 8145f99:	83 e6 02             	and    $0x2,%esi
 8145f9c:	85 f6                	test   %esi,%esi
 8145f9e:	74 0b                	je     8145fab <_ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x147>
 8145fa0:	0f b7 34 0a          	movzwl (%edx,%ecx,1),%esi
 8145fa4:	66 89 34 08          	mov    %si,(%eax,%ecx,1)
 8145fa8:	83 c1 02             	add    $0x2,%ecx
 8145fab:	83 e3 01             	and    $0x1,%ebx
 8145fae:	85 db                	test   %ebx,%ebx
 8145fb0:	74 07                	je     8145fb9 <_ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x155>
 8145fb2:	0f b6 14 0a          	movzbl (%edx,%ecx,1),%edx
 8145fb6:	88 14 08             	mov    %dl,(%eax,%ecx,1)
 8145fb9:	e8 dd 61 f8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8145fbe:	8b 50 14             	mov    0x14(%eax),%edx
 8145fc1:	8b 45 10             	mov    0x10(%ebp),%eax
 8145fc4:	69 c0 dc 07 00 00    	imul   $0x7dc,%eax,%eax
 8145fca:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8145fcd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8145fd4:	00 
 8145fd5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8145fdc:	00 
 8145fdd:	89 04 24             	mov    %eax,(%esp)
 8145fe0:	e8 59 28 20 00       	call   834883e <_ZNK10CCharacter17get_growtype_statEii>
 8145fe5:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8145fe8:	e8 ae 61 f8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8145fed:	8b 50 14             	mov    0x14(%eax),%edx
 8145ff0:	8b 45 10             	mov    0x10(%ebp),%eax
 8145ff3:	69 c0 dc 07 00 00    	imul   $0x7dc,%eax,%eax
 8145ff9:	01 c2                	add    %eax,%edx
 8145ffb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8146002:	00 
 8146003:	8b 45 18             	mov    0x18(%ebp),%eax
 8146006:	89 44 24 04          	mov    %eax,0x4(%esp)
 814600a:	89 14 24             	mov    %edx,(%esp)
 814600d:	e8 2c 28 20 00       	call   834883e <_ZNK10CCharacter17get_growtype_statEii>
 8146012:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8146015:	e8 81 61 f8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 814601a:	8b 50 14             	mov    0x14(%eax),%edx
 814601d:	8b 45 10             	mov    0x10(%ebp),%eax
 8146020:	69 c0 dc 07 00 00    	imul   $0x7dc,%eax,%eax
 8146026:	01 c2                	add    %eax,%edx
 8146028:	8b 45 1c             	mov    0x1c(%ebp),%eax
 814602b:	89 44 24 08          	mov    %eax,0x8(%esp)
 814602f:	8b 45 18             	mov    0x18(%ebp),%eax
 8146032:	89 44 24 04          	mov    %eax,0x4(%esp)
 8146036:	89 14 24             	mov    %edx,(%esp)
 8146039:	e8 00 28 20 00       	call   834883e <_ZNK10CCharacter17get_growtype_statEii>
 814603e:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8146041:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 8146045:	74 0c                	je     8146053 <_ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x1ef>
 8146047:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 814604b:	74 06                	je     8146053 <_ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x1ef>
 814604d:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8146051:	75 50                	jne    81460a3 <_ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x23f>
 8146053:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 814605a:	00 
 814605b:	c7 44 24 08 2d 00 00 	movl   $0x2d,0x8(%esp)
 8146062:	00 
 8146063:	c7 44 24 04 00 10 b7 	movl   $0x8b71000,0x4(%esp)
 814606a:	08 
 814606b:	8d 45 b8             	lea    -0x48(%ebp),%eax
 814606e:	89 04 24             	mov    %eax,(%esp)
 8146071:	e8 a2 96 40 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8146076:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8146079:	89 44 24 10          	mov    %eax,0x10(%esp)
 814607d:	8b 45 18             	mov    0x18(%ebp),%eax
 8146080:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8146084:	8b 45 0c             	mov    0xc(%ebp),%eax
 8146087:	89 44 24 08          	mov    %eax,0x8(%esp)
 814608b:	c7 44 24 04 08 03 b7 	movl   $0x8b70308,0x4(%esp)
 8146092:	08 
 8146093:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8146096:	89 04 24             	mov    %eax,(%esp)
 8146099:	e8 ea 96 40 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 814609e:	e9 f5 01 00 00       	jmp    8146298 <_ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x434>
 81460a3:	8b 45 08             	mov    0x8(%ebp),%eax
 81460a6:	8d 95 56 ff ff ff    	lea    -0xaa(%ebp),%edx
 81460ac:	bb 52 00 00 00       	mov    $0x52,%ebx
 81460b1:	89 c1                	mov    %eax,%ecx
 81460b3:	83 e1 01             	and    $0x1,%ecx
 81460b6:	85 c9                	test   %ecx,%ecx
 81460b8:	74 0e                	je     81460c8 <_ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x264>
 81460ba:	0f b6 0a             	movzbl (%edx),%ecx
 81460bd:	88 08                	mov    %cl,(%eax)
 81460bf:	83 c0 01             	add    $0x1,%eax
 81460c2:	83 c2 01             	add    $0x1,%edx
 81460c5:	83 eb 01             	sub    $0x1,%ebx
 81460c8:	89 c1                	mov    %eax,%ecx
 81460ca:	83 e1 02             	and    $0x2,%ecx
 81460cd:	85 c9                	test   %ecx,%ecx
 81460cf:	74 0f                	je     81460e0 <_ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x27c>
 81460d1:	0f b7 0a             	movzwl (%edx),%ecx
 81460d4:	66 89 08             	mov    %cx,(%eax)
 81460d7:	83 c0 02             	add    $0x2,%eax
 81460da:	83 c2 02             	add    $0x2,%edx
 81460dd:	83 eb 02             	sub    $0x2,%ebx
 81460e0:	89 d9                	mov    %ebx,%ecx
 81460e2:	c1 e9 02             	shr    $0x2,%ecx
 81460e5:	89 c7                	mov    %eax,%edi
 81460e7:	89 d6                	mov    %edx,%esi
 81460e9:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 81460eb:	89 f2                	mov    %esi,%edx
 81460ed:	89 f8                	mov    %edi,%eax
 81460ef:	b9 00 00 00 00       	mov    $0x0,%ecx
 81460f4:	89 de                	mov    %ebx,%esi
 81460f6:	83 e6 02             	and    $0x2,%esi
 81460f9:	85 f6                	test   %esi,%esi
 81460fb:	74 0b                	je     8146108 <_ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x2a4>
 81460fd:	0f b7 34 0a          	movzwl (%edx,%ecx,1),%esi
 8146101:	66 89 34 08          	mov    %si,(%eax,%ecx,1)
 8146105:	83 c1 02             	add    $0x2,%ecx
 8146108:	83 e3 01             	and    $0x1,%ebx
 814610b:	85 db                	test   %ebx,%ebx
 814610d:	74 07                	je     8146116 <_ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x2b2>
 814610f:	0f b6 14 0a          	movzbl (%edx,%ecx,1),%edx
 8146113:	88 14 08             	mov    %dl,(%eax,%ecx,1)
 8146116:	c7 45 e4 01 00 00 00 	movl   $0x1,-0x1c(%ebp)
 814611d:	eb 4a                	jmp    8146169 <_ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x305>
 814611f:	83 7d e4 0e          	cmpl   $0xe,-0x1c(%ebp)
 8146123:	7f 14                	jg     8146139 <_ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x2d5>
 8146125:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8146128:	89 44 24 04          	mov    %eax,0x4(%esp)
 814612c:	8b 45 08             	mov    0x8(%ebp),%eax
 814612f:	89 04 24             	mov    %eax,(%esp)
 8146132:	e8 c9 01 00 00       	call   8146300 <_ZN15_Additioal_info3addERKS_>
 8146137:	eb 2c                	jmp    8146165 <_ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x301>
 8146139:	83 7d e4 31          	cmpl   $0x31,-0x1c(%ebp)
 814613d:	7f 14                	jg     8146153 <_ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x2ef>
 814613f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8146142:	89 44 24 04          	mov    %eax,0x4(%esp)
 8146146:	8b 45 08             	mov    0x8(%ebp),%eax
 8146149:	89 04 24             	mov    %eax,(%esp)
 814614c:	e8 af 01 00 00       	call   8146300 <_ZN15_Additioal_info3addERKS_>
 8146151:	eb 12                	jmp    8146165 <_ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x301>
 8146153:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8146156:	89 44 24 04          	mov    %eax,0x4(%esp)
 814615a:	8b 45 08             	mov    0x8(%ebp),%eax
 814615d:	89 04 24             	mov    %eax,(%esp)
 8146160:	e8 9b 01 00 00       	call   8146300 <_ZN15_Additioal_info3addERKS_>
 8146165:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8146169:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 814616c:	3b 45 14             	cmp    0x14(%ebp),%eax
 814616f:	0f 9c c0             	setl   %al
 8146172:	84 c0                	test   %al,%al
 8146174:	75 a9                	jne    814611f <_ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x2bb>
 8146176:	8b 45 08             	mov    0x8(%ebp),%eax
 8146179:	0f b7 40 16          	movzwl 0x16(%eax),%eax
 814617d:	98                   	cwtl
 814617e:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 8146184:	8b 45 08             	mov    0x8(%ebp),%eax
 8146187:	0f b7 40 14          	movzwl 0x14(%eax),%eax
 814618b:	98                   	cwtl
 814618c:	89 85 2c ff ff ff    	mov    %eax,-0xd4(%ebp)
 8146192:	8b 45 08             	mov    0x8(%ebp),%eax
 8146195:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 8146199:	98                   	cwtl
 814619a:	89 85 30 ff ff ff    	mov    %eax,-0xd0(%ebp)
 81461a0:	8b 45 08             	mov    0x8(%ebp),%eax
 81461a3:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 81461a7:	98                   	cwtl
 81461a8:	89 85 34 ff ff ff    	mov    %eax,-0xcc(%ebp)
 81461ae:	8b 45 08             	mov    0x8(%ebp),%eax
 81461b1:	8b 40 42             	mov    0x42(%eax),%eax
 81461b4:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
 81461ba:	8b 45 08             	mov    0x8(%ebp),%eax
 81461bd:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81461c1:	0f b7 c0             	movzwl %ax,%eax
 81461c4:	89 85 3c ff ff ff    	mov    %eax,-0xc4(%ebp)
 81461ca:	8b 45 08             	mov    0x8(%ebp),%eax
 81461cd:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 81461d1:	0f b7 c0             	movzwl %ax,%eax
 81461d4:	89 85 40 ff ff ff    	mov    %eax,-0xc0(%ebp)
 81461da:	8b 45 08             	mov    0x8(%ebp),%eax
 81461dd:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 81461e1:	0f b7 c0             	movzwl %ax,%eax
 81461e4:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
 81461ea:	8b 45 08             	mov    0x8(%ebp),%eax
 81461ed:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 81461f1:	0f b7 f8             	movzwl %ax,%edi
 81461f4:	8b 45 08             	mov    0x8(%ebp),%eax
 81461f7:	8b 70 04             	mov    0x4(%eax),%esi
 81461fa:	8b 45 08             	mov    0x8(%ebp),%eax
 81461fd:	8b 18                	mov    (%eax),%ebx
 81461ff:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8146206:	00 
 8146207:	c7 44 24 08 41 00 00 	movl   $0x41,0x8(%esp)
 814620e:	00 
 814620f:	c7 44 24 04 00 10 b7 	movl   $0x8b71000,0x4(%esp)
 8146216:	08 
 8146217:	8d 45 c8             	lea    -0x38(%ebp),%eax
 814621a:	89 04 24             	mov    %eax,(%esp)
 814621d:	e8 f6 94 40 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8146222:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
 8146228:	89 44 24 34          	mov    %eax,0x34(%esp)
 814622c:	8b 85 2c ff ff ff    	mov    -0xd4(%ebp),%eax
 8146232:	89 44 24 30          	mov    %eax,0x30(%esp)
 8146236:	8b 85 30 ff ff ff    	mov    -0xd0(%ebp),%eax
 814623c:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 8146240:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 8146246:	89 44 24 28          	mov    %eax,0x28(%esp)
 814624a:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 8146250:	89 44 24 24          	mov    %eax,0x24(%esp)
 8146254:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
 814625a:	89 44 24 20          	mov    %eax,0x20(%esp)
 814625e:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 8146264:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8146268:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 814626e:	89 44 24 18          	mov    %eax,0x18(%esp)
 8146272:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8146276:	89 74 24 10          	mov    %esi,0x10(%esp)
 814627a:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 814627e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8146281:	89 44 24 08          	mov    %eax,0x8(%esp)
 8146285:	c7 44 24 04 58 03 b7 	movl   $0x8b70358,0x4(%esp)
 814628c:	08 
 814628d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8146290:	89 04 24             	mov    %eax,(%esp)
 8146293:	e8 f0 94 40 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8146298:	81 c4 0c 01 00 00    	add    $0x10c,%esp
 814629e:	5b                   	pop    %ebx
 814629f:	5e                   	pop    %esi
 81462a0:	5f                   	pop    %edi
 81462a1:	5d                   	pop    %ebp
 81462a2:	c3                   	ret

```

```c
// global::tools::InitializeCharacStat::initCharacStat @ 0x8145e64

/* WARNING: Removing unreachable block (ram,0x08145fb2) */
/* global::tools::InitializeCharacStat::initCharacStat(_Additioal_info&, unsigned int, int, int,
   int, int) */

void global::tools::InitializeCharacStat::initCharacStat
               (_Additioal_info *param_1,uint param_2,int param_3,int param_4,int param_5,
               int param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  _Additioal_info *p_Var13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  uint uVar17;
  bool bVar18;
  byte bVar19;
  undefined1 local_ae [2];
  undefined4 auStack_ac [20];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  _Additioal_info *local_2c;
  _Additioal_info *local_28;
  _Additioal_info *local_24;
  int local_20;
  
  bVar19 = 0;
  if ((((*(short *)(param_1 + 8) == 0) && (*(short *)(param_1 + 0xc) == 0)) &&
      (*(short *)(param_1 + 10) == 0)) &&
     (((*(short *)(param_1 + 0xe) == 0 && (*(int *)param_1 == 0)) &&
      ((*(int *)(param_1 + 4) == 0 && (*(int *)(param_1 + 0x42) == 0)))))) {
    _Additioal_info::clear(param_1);
    if (((param_3 < 0) || (10 < param_3)) || ((0x46 < param_4 || (param_4 < 1)))) {
      cMyTrace::cMyTrace(local_5c,
                         "static void global::tools::InitializeCharacStat::initCharacStat(_Additioal_info&, unsigned int, int, int, int, int)"
                         ,0x1f,5);
      cMyTrace::operator()
                (local_5c,"[ARAD,STAT,RESET] Invalid character job. charac %u, job %d, level %d",
                 param_2,param_3,param_4);
    }
    else {
      iVar12 = G_CDataManager();
      puVar16 = (undefined4 *)local_ae;
      puVar15 = (undefined4 *)(*(int *)(iVar12 + 0x14) + param_3 * 0x7dc);
      uVar17 = 0x52;
      bVar18 = ((uint)puVar16 & 2) != 0;
      if (bVar18) {
        local_ae = *(undefined1 (*) [2])puVar15;
        puVar16 = auStack_ac;
        puVar15 = (undefined4 *)((int)puVar15 + 2);
        uVar17 = 0x50;
      }
      for (uVar17 = uVar17 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *puVar16 = *puVar15;
        puVar15 = puVar15 + (uint)bVar19 * -2 + 1;
        puVar16 = puVar16 + (uint)bVar19 * -2 + 1;
      }
      if (!bVar18) {
        *(undefined2 *)puVar16 = *(undefined2 *)puVar15;
      }
      iVar12 = G_CDataManager();
      local_2c = (_Additioal_info *)
                 CCharacter::get_growtype_stat
                           ((CCharacter *)(*(int *)(iVar12 + 0x14) + param_3 * 0x7dc),0,0);
      iVar12 = G_CDataManager();
      local_28 = (_Additioal_info *)
                 CCharacter::get_growtype_stat
                           ((CCharacter *)(*(int *)(iVar12 + 0x14) + param_3 * 0x7dc),param_5,0);
      iVar12 = G_CDataManager();
      local_24 = (_Additioal_info *)
                 CCharacter::get_growtype_stat
                           ((CCharacter *)(*(int *)(iVar12 + 0x14) + param_3 * 0x7dc),param_5,
                            param_6);
      if (((local_2c == (_Additioal_info *)0x0) || (local_28 == (_Additioal_info *)0x0)) ||
         (local_24 == (_Additioal_info *)0x0)) {
        cMyTrace::cMyTrace(local_4c,
                           "static void global::tools::InitializeCharacStat::initCharacStat(_Additioal_info&, unsigned int, int, int, int, int)"
                           ,0x2d,5);
        cMyTrace::operator()
                  (local_4c,
                   "[ARAD,STAT,RESET] Invalid character grow type. charac %u, first %d, second %d",
                   param_2,param_5,param_6);
      }
      else {
        puVar16 = (undefined4 *)local_ae;
        uVar17 = 0x52;
        bVar18 = ((uint)param_1 & 1) != 0;
        p_Var13 = param_1;
        if (bVar18) {
          *param_1 = local_ae[0];
          p_Var13 = param_1 + 1;
          puVar16 = (undefined4 *)(local_ae + 1);
          uVar17 = 0x51;
        }
        if (((uint)p_Var13 & 2) != 0) {
          *(undefined2 *)p_Var13 = *(undefined2 *)puVar16;
          p_Var13 = p_Var13 + 2;
          puVar16 = (undefined4 *)((int)puVar16 + 2);
          uVar17 = uVar17 - 2;
        }
        for (uVar14 = uVar17 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)p_Var13 = *puVar16;
          puVar16 = puVar16 + (uint)bVar19 * -2 + 1;
          p_Var13 = p_Var13 + (uint)bVar19 * -8 + 4;
        }
        iVar12 = 0;
        if ((uVar17 & 2) != 0) {
          *(undefined2 *)p_Var13 = *(undefined2 *)puVar16;
          iVar12 = 2;
        }
        if (bVar18) {
          p_Var13[iVar12] = *(_Additioal_info *)((int)puVar16 + iVar12);
        }
        for (local_20 = 1; local_20 < param_4; local_20 = local_20 + 1) {
          if (local_20 < 0xf) {
            _Additioal_info::add(param_1,local_2c);
          }
          else if (local_20 < 0x32) {
            _Additioal_info::add(param_1,local_28);
          }
          else {
            _Additioal_info::add(param_1,local_24);
          }
        }
        sVar1 = *(short *)(param_1 + 0x16);
        sVar2 = *(short *)(param_1 + 0x14);
        sVar3 = *(short *)(param_1 + 0x12);
        sVar4 = *(short *)(param_1 + 0x10);
        uVar9 = *(undefined4 *)(param_1 + 0x42);
        uVar5 = *(ushort *)(param_1 + 0xe);
        uVar6 = *(ushort *)(param_1 + 0xc);
        uVar7 = *(ushort *)(param_1 + 10);
        uVar8 = *(ushort *)(param_1 + 8);
        uVar10 = *(undefined4 *)(param_1 + 4);
        uVar11 = *(undefined4 *)param_1;
        cMyTrace::cMyTrace(local_3c,
                           "static void global::tools::InitializeCharacStat::initCharacStat(_Additioal_info&, unsigned int, int, int, int, int)"
                           ,0x41,0);
        cMyTrace::operator()
                  (local_3c,
                   "[ARAD][RESET STAT] Init Character : %d, stat : hp %d, mp %d, pyatt %d, pydef %d, mgatt %d, mgdef %d, speed %d, element %d, element %d, element %d, element %d)"
                   ,param_2,uVar11,uVar10,(uint)uVar8,(uint)uVar7,(uint)uVar6,(uint)uVar5,uVar9,
                   (int)sVar4,(int)sVar3,(int)sVar2,(int)sVar1);
      }
    }
  }
  return;
}

```

