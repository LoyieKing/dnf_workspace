# Inter_LoadCharacLinkBonus

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e1f02 Inter_LoadCharacLinkBonus::dispatch_sig  [0x084e1f02-0x84e23a1] ===
 84e1f02:	55                   	push   %ebp
 84e1f03:	89 e5                	mov    %esp,%ebp
 84e1f05:	57                   	push   %edi
 84e1f06:	56                   	push   %esi
 84e1f07:	53                   	push   %ebx
 84e1f08:	81 ec cc 01 00 00    	sub    $0x1cc,%esp
 84e1f0e:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 84e1f15:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 84e1f1c:	8d 95 5b fe ff ff    	lea    -0x1a5(%ebp),%edx
 84e1f22:	bb 00 01 00 00       	mov    $0x100,%ebx
 84e1f27:	b8 00 00 00 00       	mov    $0x0,%eax
 84e1f2c:	89 d1                	mov    %edx,%ecx
 84e1f2e:	83 e1 01             	and    $0x1,%ecx
 84e1f31:	85 c9                	test   %ecx,%ecx
 84e1f33:	74 08                	je     84e1f3d <_ZN25Inter_LoadCharacLinkBonus12dispatch_sigEP5CUserPci+0x3b>
 84e1f35:	88 02                	mov    %al,(%edx)
 84e1f37:	83 c2 01             	add    $0x1,%edx
 84e1f3a:	83 eb 01             	sub    $0x1,%ebx
 84e1f3d:	89 d1                	mov    %edx,%ecx
 84e1f3f:	83 e1 02             	and    $0x2,%ecx
 84e1f42:	85 c9                	test   %ecx,%ecx
 84e1f44:	74 09                	je     84e1f4f <_ZN25Inter_LoadCharacLinkBonus12dispatch_sigEP5CUserPci+0x4d>
 84e1f46:	66 89 02             	mov    %ax,(%edx)
 84e1f49:	83 c2 02             	add    $0x2,%edx
 84e1f4c:	83 eb 02             	sub    $0x2,%ebx
 84e1f4f:	89 d9                	mov    %ebx,%ecx
 84e1f51:	c1 e9 02             	shr    $0x2,%ecx
 84e1f54:	89 d7                	mov    %edx,%edi
 84e1f56:	f3 ab                	rep stos %eax,%es:(%edi)
 84e1f58:	89 fa                	mov    %edi,%edx
 84e1f5a:	89 d9                	mov    %ebx,%ecx
 84e1f5c:	83 e1 02             	and    $0x2,%ecx
 84e1f5f:	85 c9                	test   %ecx,%ecx
 84e1f61:	74 06                	je     84e1f69 <_ZN25Inter_LoadCharacLinkBonus12dispatch_sigEP5CUserPci+0x67>
 84e1f63:	66 89 02             	mov    %ax,(%edx)
 84e1f66:	83 c2 02             	add    $0x2,%edx
 84e1f69:	89 d9                	mov    %ebx,%ecx
 84e1f6b:	83 e1 01             	and    $0x1,%ecx
 84e1f6e:	85 c9                	test   %ecx,%ecx
 84e1f70:	74 05                	je     84e1f77 <_ZN25Inter_LoadCharacLinkBonus12dispatch_sigEP5CUserPci+0x75>
 84e1f72:	88 02                	mov    %al,(%edx)
 84e1f74:	83 c2 01             	add    $0x1,%edx
 84e1f77:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 84e1f7a:	ba 15 00 00 00       	mov    $0x15,%edx
 84e1f7f:	b9 00 00 00 00       	mov    $0x0,%ecx
 84e1f84:	89 c3                	mov    %eax,%ebx
 84e1f86:	83 e3 01             	and    $0x1,%ebx
 84e1f89:	85 db                	test   %ebx,%ebx
 84e1f8b:	74 08                	je     84e1f95 <_ZN25Inter_LoadCharacLinkBonus12dispatch_sigEP5CUserPci+0x93>
 84e1f8d:	88 08                	mov    %cl,(%eax)
 84e1f8f:	83 c0 01             	add    $0x1,%eax
 84e1f92:	83 ea 01             	sub    $0x1,%edx
 84e1f95:	89 c3                	mov    %eax,%ebx
 84e1f97:	83 e3 02             	and    $0x2,%ebx
 84e1f9a:	85 db                	test   %ebx,%ebx
 84e1f9c:	74 09                	je     84e1fa7 <_ZN25Inter_LoadCharacLinkBonus12dispatch_sigEP5CUserPci+0xa5>
 84e1f9e:	66 89 08             	mov    %cx,(%eax)
 84e1fa1:	83 c0 02             	add    $0x2,%eax
 84e1fa4:	83 ea 02             	sub    $0x2,%edx
 84e1fa7:	89 d6                	mov    %edx,%esi
 84e1fa9:	83 e6 fc             	and    $0xfffffffc,%esi
 84e1fac:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e1fb1:	89 0c 18             	mov    %ecx,(%eax,%ebx,1)
 84e1fb4:	83 c3 04             	add    $0x4,%ebx
 84e1fb7:	39 f3                	cmp    %esi,%ebx
 84e1fb9:	72 f6                	jb     84e1fb1 <_ZN25Inter_LoadCharacLinkBonus12dispatch_sigEP5CUserPci+0xaf>
 84e1fbb:	01 d8                	add    %ebx,%eax
 84e1fbd:	89 d3                	mov    %edx,%ebx
 84e1fbf:	83 e3 02             	and    $0x2,%ebx
 84e1fc2:	85 db                	test   %ebx,%ebx
 84e1fc4:	74 06                	je     84e1fcc <_ZN25Inter_LoadCharacLinkBonus12dispatch_sigEP5CUserPci+0xca>
 84e1fc6:	66 89 08             	mov    %cx,(%eax)
 84e1fc9:	83 c0 02             	add    $0x2,%eax
 84e1fcc:	83 e2 01             	and    $0x1,%edx
 84e1fcf:	85 d2                	test   %edx,%edx
 84e1fd1:	74 05                	je     84e1fd8 <_ZN25Inter_LoadCharacLinkBonus12dispatch_sigEP5CUserPci+0xd6>
 84e1fd3:	88 08                	mov    %cl,(%eax)
 84e1fd5:	83 c0 01             	add    $0x1,%eax
 84e1fd8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e1fdf:	00 
 84e1fe0:	c7 44 24 08 30 9f c8 	movl   $0x8c89f30,0x8(%esp)
 84e1fe7:	08 
 84e1fe8:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84e1fef:	00 
 84e1ff0:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84e1ff7:	e8 02 38 5c 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84e1ffc:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 84e2003:	00 
 84e2004:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e2008:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 84e200b:	89 04 24             	mov    %eax,(%esp)
 84e200e:	e8 bd b8 b9 ff       	call   807d8d0 <strncpy@plt>
 84e2013:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e201a:	00 
 84e201b:	c7 44 24 08 44 9f c8 	movl   $0x8c89f44,0x8(%esp)
 84e2022:	08 
 84e2023:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84e202a:	00 
 84e202b:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84e2032:	e8 c7 37 5c 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84e2037:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 84e203e:	00 
 84e203f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e2043:	8d 85 5b fe ff ff    	lea    -0x1a5(%ebp),%eax
 84e2049:	89 04 24             	mov    %eax,(%esp)
 84e204c:	e8 7f b8 b9 ff       	call   807d8d0 <strncpy@plt>
 84e2051:	8d 85 5b ff ff ff    	lea    -0xa5(%ebp),%eax
 84e2057:	89 04 24             	mov    %eax,(%esp)
 84e205a:	e8 f5 97 be ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 84e205f:	8b 45 10             	mov    0x10(%ebp),%eax
 84e2062:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84e2065:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84e2068:	8b 00                	mov    (%eax),%eax
 84e206a:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84e206d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84e2070:	8b 40 04             	mov    0x4(%eax),%eax
 84e2073:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84e2076:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 84e207a:	75 10                	jne    84e208c <_ZN25Inter_LoadCharacLinkBonus12dispatch_sigEP5CUserPci+0x18a>
 84e207c:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 84e2080:	75 0a                	jne    84e208c <_ZN25Inter_LoadCharacLinkBonus12dispatch_sigEP5CUserPci+0x18a>
 84e2082:	b8 00 00 00 00       	mov    $0x0,%eax
 84e2087:	e9 0a 03 00 00       	jmp    84e2396 <_ZN25Inter_LoadCharacLinkBonus12dispatch_sigEP5CUserPci+0x494>
 84e208c:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 84e2090:	0f 84 60 02 00 00    	je     84e22f6 <_ZN25Inter_LoadCharacLinkBonus12dispatch_sigEP5CUserPci+0x3f4>
 84e2096:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e2099:	89 04 24             	mov    %eax,(%esp)
 84e209c:	e8 ef 9b be ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84e20a1:	89 c3                	mov    %eax,%ebx
 84e20a3:	8d 85 5b fe ff ff    	lea    -0x1a5(%ebp),%eax
 84e20a9:	89 04 24             	mov    %eax,(%esp)
 84e20ac:	e8 ff c2 b9 ff       	call   807e3b0 <strlen@plt>
 84e20b1:	89 c6                	mov    %eax,%esi
 84e20b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e20b6:	89 04 24             	mov    %eax,(%esp)
 84e20b9:	e8 90 9b be ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84e20be:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 84e20c5:	00 
 84e20c6:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 84e20cd:	00 
 84e20ce:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 84e20d2:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 84e20d9:	00 
 84e20da:	89 74 24 14          	mov    %esi,0x14(%esp)
 84e20de:	8d 95 5b fe ff ff    	lea    -0x1a5(%ebp),%edx
 84e20e4:	89 54 24 10          	mov    %edx,0x10(%esp)
 84e20e8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84e20ec:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84e20ef:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e20f3:	8d 85 5b ff ff ff    	lea    -0xa5(%ebp),%eax
 84e20f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e20fd:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 84e2100:	89 04 24             	mov    %eax,(%esp)
 84e2103:	e8 e0 34 07 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 84e2108:	8d 45 a5             	lea    -0x5b(%ebp),%eax
 84e210b:	ba 1e 00 00 00       	mov    $0x1e,%edx
 84e2110:	b9 00 00 00 00       	mov    $0x0,%ecx
 84e2115:	89 c3                	mov    %eax,%ebx
 84e2117:	83 e3 01             	and    $0x1,%ebx
 84e211a:	85 db                	test   %ebx,%ebx
 84e211c:	74 08                	je     84e2126 <_ZN25Inter_LoadCharacLinkBonus12dispatch_sigEP5CUserPci+0x224>
 84e211e:	88 08                	mov    %cl,(%eax)
 84e2120:	83 c0 01             	add    $0x1,%eax
 84e2123:	83 ea 01             	sub    $0x1,%edx
 84e2126:	89 c3                	mov    %eax,%ebx
 84e2128:	83 e3 02             	and    $0x2,%ebx
 84e212b:	85 db                	test   %ebx,%ebx
 84e212d:	74 09                	je     84e2138 <_ZN25Inter_LoadCharacLinkBonus12dispatch_sigEP5CUserPci+0x236>
 84e212f:	66 89 08             	mov    %cx,(%eax)
 84e2132:	83 c0 02             	add    $0x2,%eax
 84e2135:	83 ea 02             	sub    $0x2,%edx
 84e2138:	89 d6                	mov    %edx,%esi
 84e213a:	83 e6 fc             	and    $0xfffffffc,%esi
 84e213d:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e2142:	89 0c 18             	mov    %ecx,(%eax,%ebx,1)
 84e2145:	83 c3 04             	add    $0x4,%ebx
 84e2148:	39 f3                	cmp    %esi,%ebx
 84e214a:	72 f6                	jb     84e2142 <_ZN25Inter_LoadCharacLinkBonus12dispatch_sigEP5CUserPci+0x240>
 84e214c:	01 d8                	add    %ebx,%eax
 84e214e:	89 d3                	mov    %edx,%ebx
 84e2150:	83 e3 02             	and    $0x2,%ebx
 84e2153:	85 db                	test   %ebx,%ebx
 84e2155:	74 06                	je     84e215d <_ZN25Inter_LoadCharacLinkBonus12dispatch_sigEP5CUserPci+0x25b>
 84e2157:	66 89 08             	mov    %cx,(%eax)
 84e215a:	83 c0 02             	add    $0x2,%eax
 84e215d:	83 e2 01             	and    $0x1,%edx
 84e2160:	85 d2                	test   %edx,%edx
 84e2162:	74 05                	je     84e2169 <_ZN25Inter_LoadCharacLinkBonus12dispatch_sigEP5CUserPci+0x267>
 84e2164:	88 08                	mov    %cl,(%eax)
 84e2166:	83 c0 01             	add    $0x1,%eax
 84e2169:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e216c:	89 04 24             	mov    %eax,(%esp)
 84e216f:	e8 00 a3 00 00       	call   84ec474 <_ZN15CUserCharacInfo22getLinkCharacSlotIndexEv>
 84e2174:	0f be c0             	movsbl %al,%eax
 84e2177:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84e217a:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 84e217e:	78 1c                	js     84e219c <_ZN25Inter_LoadCharacLinkBonus12dispatch_sigEP5CUserPci+0x29a>
 84e2180:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e2183:	05 e8 96 07 00       	add    $0x796e8,%eax
 84e2188:	89 04 24             	mov    %eax,(%esp)
 84e218b:	e8 0a ea cb ff       	call   81a0b9a <_ZNKSt6vectorI12_Charac_infoSaIS0_EE4sizeEv>
 84e2190:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 84e2193:	7e 07                	jle    84e219c <_ZN25Inter_LoadCharacLinkBonus12dispatch_sigEP5CUserPci+0x29a>
 84e2195:	b8 01 00 00 00       	mov    $0x1,%eax
 84e219a:	eb 05                	jmp    84e21a1 <_ZN25Inter_LoadCharacLinkBonus12dispatch_sigEP5CUserPci+0x29f>
 84e219c:	b8 00 00 00 00       	mov    $0x0,%eax
 84e21a1:	84 c0                	test   %al,%al
 84e21a3:	74 2a                	je     84e21cf <_ZN25Inter_LoadCharacLinkBonus12dispatch_sigEP5CUserPci+0x2cd>
 84e21a5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e21a8:	8b 55 0c             	mov    0xc(%ebp),%edx
 84e21ab:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 84e21b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e21b5:	89 14 24             	mov    %edx,(%esp)
 84e21b8:	e8 fb e9 cb ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 84e21bd:	83 c0 04             	add    $0x4,%eax
 84e21c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e21c4:	8d 45 a5             	lea    -0x5b(%ebp),%eax
 84e21c7:	89 04 24             	mov    %eax,(%esp)
 84e21ca:	e8 21 bd b9 ff       	call   807def0 <strcpy@plt>
 84e21cf:	8d 45 98             	lea    -0x68(%ebp),%eax
 84e21d2:	89 04 24             	mov    %eax,(%esp)
 84e21d5:	e8 72 bb 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e21da:	8d 45 98             	lea    -0x68(%ebp),%eax
 84e21dd:	89 04 24             	mov    %eax,(%esp)
 84e21e0:	e8 01 97 be ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84e21e5:	c7 44 24 08 23 01 00 	movl   $0x123,0x8(%esp)
 84e21ec:	00 
 84e21ed:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e21f4:	00 
 84e21f5:	8d 45 98             	lea    -0x68(%ebp),%eax
 84e21f8:	89 04 24             	mov    %eax,(%esp)
 84e21fb:	e8 fc 96 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e2200:	8d 45 a5             	lea    -0x5b(%ebp),%eax
 84e2203:	89 04 24             	mov    %eax,(%esp)
 84e2206:	e8 a5 c1 b9 ff       	call   807e3b0 <strlen@plt>
 84e220b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e220f:	8d 45 98             	lea    -0x68(%ebp),%eax
 84e2212:	89 04 24             	mov    %eax,(%esp)
 84e2215:	e8 22 97 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e221a:	8d 45 a5             	lea    -0x5b(%ebp),%eax
 84e221d:	89 04 24             	mov    %eax,(%esp)
 84e2220:	e8 8b c1 b9 ff       	call   807e3b0 <strlen@plt>
 84e2225:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e2229:	8d 45 a5             	lea    -0x5b(%ebp),%eax
 84e222c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e2230:	8d 45 98             	lea    -0x68(%ebp),%eax
 84e2233:	89 04 24             	mov    %eax,(%esp)
 84e2236:	e8 a9 51 cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84e223b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84e223e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e2242:	8d 45 98             	lea    -0x68(%ebp),%eax
 84e2245:	89 04 24             	mov    %eax,(%esp)
 84e2248:	e8 ef 96 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e224d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e2254:	00 
 84e2255:	8d 45 98             	lea    -0x68(%ebp),%eax
 84e2258:	89 04 24             	mov    %eax,(%esp)
 84e225b:	e8 dc 96 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e2260:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e2267:	00 
 84e2268:	8d 45 98             	lea    -0x68(%ebp),%eax
 84e226b:	89 04 24             	mov    %eax,(%esp)
 84e226e:	e8 31 7c bf ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84e2273:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e227a:	00 
 84e227b:	8d 45 98             	lea    -0x68(%ebp),%eax
 84e227e:	89 04 24             	mov    %eax,(%esp)
 84e2281:	e8 1e 7c bf ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84e2286:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e228d:	00 
 84e228e:	8d 45 98             	lea    -0x68(%ebp),%eax
 84e2291:	89 04 24             	mov    %eax,(%esp)
 84e2294:	e8 bf 96 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e2299:	8d 45 98             	lea    -0x68(%ebp),%eax
 84e229c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e22a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e22a3:	89 04 24             	mov    %eax,(%esp)
 84e22a6:	e8 0f 63 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e22ab:	e8 67 b7 12 00       	call   860da17 <_Z31GetInstanceCirculationStatisticv>
 84e22b0:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84e22b3:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84e22b7:	8b 55 0c             	mov    0xc(%ebp),%edx
 84e22ba:	89 54 24 08          	mov    %edx,0x8(%esp)
 84e22be:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 84e22c5:	00 
 84e22c6:	89 04 24             	mov    %eax,(%esp)
 84e22c9:	e8 dc b7 12 00       	call   860daaa <_ZN21CCirculationStatistic23AddCirculationStatisticE27CIRCULATION_STATISTIC_FIELDP5CUserj>
 84e22ce:	eb 1b                	jmp    84e22eb <_ZN25Inter_LoadCharacLinkBonus12dispatch_sigEP5CUserPci+0x3e9>
 84e22d0:	89 d3                	mov    %edx,%ebx
 84e22d2:	89 c6                	mov    %eax,%esi
 84e22d4:	8d 45 98             	lea    -0x68(%ebp),%eax
 84e22d7:	89 04 24             	mov    %eax,(%esp)
 84e22da:	e8 a1 bb 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e22df:	89 f0                	mov    %esi,%eax
 84e22e1:	89 da                	mov    %ebx,%edx
 84e22e3:	89 04 24             	mov    %eax,(%esp)
 84e22e6:	e8 65 14 60 00       	call   8ae3750 <_Unwind_Resume>
 84e22eb:	8d 45 98             	lea    -0x68(%ebp),%eax
 84e22ee:	89 04 24             	mov    %eax,(%esp)
 84e22f1:	e8 8a bb 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e22f6:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 84e22fa:	74 17                	je     84e2313 <_ZN25Inter_LoadCharacLinkBonus12dispatch_sigEP5CUserPci+0x411>
 84e22fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e22ff:	89 04 24             	mov    %eax,(%esp)
 84e2302:	e8 b1 7f bf ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 84e2307:	83 f8 46             	cmp    $0x46,%eax
 84e230a:	74 07                	je     84e2313 <_ZN25Inter_LoadCharacLinkBonus12dispatch_sigEP5CUserPci+0x411>
 84e230c:	b8 01 00 00 00       	mov    $0x1,%eax
 84e2311:	eb 05                	jmp    84e2318 <_ZN25Inter_LoadCharacLinkBonus12dispatch_sigEP5CUserPci+0x416>
 84e2313:	b8 00 00 00 00       	mov    $0x0,%eax
 84e2318:	84 c0                	test   %al,%al
 84e231a:	74 12                	je     84e232e <_ZN25Inter_LoadCharacLinkBonus12dispatch_sigEP5CUserPci+0x42c>
 84e231c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84e231f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e2323:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e2326:	89 04 24             	mov    %eax,(%esp)
 84e2329:	e8 36 02 17 00       	call   8652564 <_ZN5CUser22giveCharacLinkBonusExpEj>
 84e232e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e2331:	89 04 24             	mov    %eax,(%esp)
 84e2334:	e8 15 99 be ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84e2339:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 84e2340:	00 
 84e2341:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84e2345:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84e234c:	00 
 84e234d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e2354:	00 
 84e2355:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e2358:	89 04 24             	mov    %eax,(%esp)
 84e235b:	e8 ac 00 17 00       	call   865240c <_ZN5CUser21UpdateCharacLinkBonusEjjj28ENUM_CHARAC_LINK_BONUS_STATE>
 84e2360:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e2363:	89 04 24             	mov    %eax,(%esp)
 84e2366:	e8 e3 98 be ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84e236b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e236f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e2372:	89 04 24             	mov    %eax,(%esp)
 84e2375:	e8 98 bb 16 00       	call   864df12 <_ZNK5CUser14get_charac_idxEj>
 84e237a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84e2381:	00 
 84e2382:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e2386:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e2389:	89 04 24             	mov    %eax,(%esp)
 84e238c:	e8 25 aa 00 00       	call   84ecdb6 <_ZN5CUser25setCharacLinkBonusSettingEib>
 84e2391:	b8 00 00 00 00       	mov    $0x0,%eax
 84e2396:	81 c4 cc 01 00 00    	add    $0x1cc,%esp
 84e239c:	5b                   	pop    %ebx
 84e239d:	5e                   	pop    %esi
 84e239e:	5f                   	pop    %edi
 84e239f:	5d                   	pop    %ebp
 84e23a0:	c3                   	ret
 84e23a1:	90                   	nop

```

```c
// Inter_LoadCharacLinkBonus::dispatch_sig @ 0x84e1f02

/* Inter_LoadCharacLinkBonus::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadCharacLinkBonus::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  size_t sVar4;
  undefined4 uVar5;
  int iVar6;
  CCirculationStatistic *pCVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  bool bVar11;
  char local_1a9;
  char local_1a8 [255];
  Inven_Item local_a9 [61];
  PacketGuard local_6c [13];
  char local_5f;
  char local_5e [29];
  char local_41;
  char local_40 [20];
  uint local_2c;
  int local_28;
  int local_24;
  uint local_20;
  
  local_2c = 0;
  local_28 = 0;
  pcVar9 = &local_1a9;
  uVar10 = 0x100;
  bVar11 = ((uint)pcVar9 & 1) != 0;
  if (bVar11) {
    local_1a9 = '\0';
    pcVar9 = local_1a8;
    uVar10 = 0xff;
  }
  if (((uint)pcVar9 & 2) != 0) {
    pcVar9[0] = '\0';
    pcVar9[1] = '\0';
    pcVar9 = pcVar9 + 2;
    uVar10 = uVar10 - 2;
  }
  for (uVar8 = uVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    pcVar9[0] = '\0';
    pcVar9[1] = '\0';
    pcVar9[2] = '\0';
    pcVar9[3] = '\0';
    pcVar9 = pcVar9 + 4;
  }
  if ((uVar10 & 2) != 0) {
    pcVar9[0] = '\0';
    pcVar9[1] = '\0';
    pcVar9 = pcVar9 + 2;
  }
  if (bVar11) {
    *pcVar9 = '\0';
  }
  pcVar9 = &local_41;
  uVar10 = 0x15;
  bVar11 = ((uint)pcVar9 & 1) != 0;
  if (bVar11) {
    local_41 = '\0';
    pcVar9 = local_40;
    uVar10 = 0x14;
  }
  if (((uint)pcVar9 & 2) != 0) {
    pcVar9[0] = '\0';
    pcVar9[1] = '\0';
    pcVar9 = pcVar9 + 2;
    uVar10 = uVar10 - 2;
  }
  uVar8 = 0;
  do {
    pcVar1 = pcVar9 + uVar8;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    uVar8 = uVar8 + 4;
  } while (uVar8 < (uVar10 & 0xfffffffc));
  pcVar9 = pcVar9 + uVar8;
  if ((uVar10 & 2) != 0) {
    pcVar9[0] = '\0';
    pcVar9[1] = '\0';
    pcVar9 = pcVar9 + 2;
  }
  if (!bVar11) {
    *pcVar9 = '\0';
  }
  pcVar9 = (char *)RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              "game_server_msg_149",(bool *)0x0);
  strncpy(&local_41,pcVar9,0x14);
  pcVar9 = (char *)RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              "game_server_msg_150",(bool *)0x0);
  strncpy(&local_1a9,pcVar9,0xff);
  Inven_Item::Inven_Item(local_a9);
  local_24 = param_3;
  local_2c = *(uint *)param_3;
  local_28 = *(int *)(param_3 + 4);
  if ((local_2c != 0) || (local_28 != 0)) {
    if (local_28 != 0) {
      uVar3 = CUser::GetServerGroup((CUser *)param_2);
      sVar4 = strlen(&local_1a9);
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                (&local_41,local_a9,local_28,uVar5,&local_1a9,sVar4,0,uVar3,0,0);
      pcVar9 = &local_5f;
      uVar10 = 0x1e;
      bVar11 = ((uint)pcVar9 & 1) != 0;
      if (bVar11) {
        local_5f = '\0';
        pcVar9 = local_5e;
        uVar10 = 0x1d;
      }
      if (((uint)pcVar9 & 2) != 0) {
        pcVar9[0] = '\0';
        pcVar9[1] = '\0';
        pcVar9 = pcVar9 + 2;
        uVar10 = uVar10 - 2;
      }
      uVar8 = 0;
      do {
        pcVar1 = pcVar9 + uVar8;
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        uVar8 = uVar8 + 4;
      } while (uVar8 < (uVar10 & 0xfffffffc));
      pcVar9 = pcVar9 + uVar8;
      if ((uVar10 & 2) != 0) {
        pcVar9[0] = '\0';
        pcVar9[1] = '\0';
        pcVar9 = pcVar9 + 2;
      }
      if (bVar11) {
        *pcVar9 = '\0';
      }
      cVar2 = CUserCharacInfo::getLinkCharacSlotIndex((CUserCharacInfo *)param_2);
      local_20 = (uint)cVar2;
      if (((int)local_20 < 0) ||
         (iVar6 = std::vector<_Charac_info,std::allocator<_Charac_info>>::size
                            ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                             (param_2 + 0x796e8)), iVar6 <= (int)local_20)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if (bVar11) {
        iVar6 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_2 + 0x796e8),
                           local_20);
        strcpy(&local_5f,(char *)(iVar6 + 4));
      }
      PacketGuard::PacketGuard(local_6c);
                    /* try { // try from 084e21e0 to 084e22cd has its CatchHandler @ 084e22d0 */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_6c);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_6c,0,0x123);
      sVar4 = strlen(&local_5f);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_6c,sVar4);
      sVar4 = strlen(&local_5f);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_6c,&local_5f,sVar4);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_6c,local_28);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_6c,0);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_6c,0);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_6c,0);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_6c,true);
      CUser::Send((CUser *)param_2,local_6c);
      pCVar7 = (CCirculationStatistic *)GetInstanceCirculationStatistic();
      CCirculationStatistic::AddCirculationStatistic(pCVar7,0x11,param_2,local_28);
      PacketGuard::~PacketGuard(local_6c);
    }
    if ((local_2c == 0) ||
       (iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2), iVar6 == 0x46)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) {
      CUser::giveCharacLinkBonusExp((CUser *)param_2,local_2c);
    }
    uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    CUser::UpdateCharacLinkBonus((CUser *)param_2,0,0,uVar3,1);
    uVar10 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    iVar6 = CUser::get_charac_idx((CUser *)param_2,uVar10);
    CUser::setCharacLinkBonusSetting((CUser *)param_2,iVar6,false);
  }
  return 0;
}

```

