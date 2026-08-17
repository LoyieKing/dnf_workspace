# fair_pvp__CFairPvPScore

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## CFairPvPScore

```asm
// === 084a47dc fair_pvp::CFairPvPScore::CFairPvPScore  [0x084a47dc-0x84a484f] ===
 84a47dc:	55                   	push   %ebp
 84a47dd:	89 e5                	mov    %esp,%ebp
 84a47df:	56                   	push   %esi
 84a47e0:	53                   	push   %ebx
 84a47e1:	83 ec 10             	sub    $0x10,%esp
 84a47e4:	8b 45 08             	mov    0x8(%ebp),%eax
 84a47e7:	89 04 24             	mov    %eax,(%esp)
 84a47ea:	e8 cb 44 c2 ff       	call   80c8cba <_ZN13charac_expand5CDataC1Ev>
 84a47ef:	8b 45 08             	mov    0x8(%ebp),%eax
 84a47f2:	c7 00 08 ec c7 08    	movl   $0x8c7ec08,(%eax)
 84a47f8:	8b 45 08             	mov    0x8(%ebp),%eax
 84a47fb:	83 c0 08             	add    $0x8,%eax
 84a47fe:	89 04 24             	mov    %eax,(%esp)
 84a4801:	e8 7e 1d 00 00       	call   84a6584 <_ZNSt3mapIN8fair_pvp6JobKeyE25FAIR_PVP_SCORE_MODE_COUNTSt4lessIS1_ESaISt4pairIKS1_S2_EEEC1Ev>
 84a4806:	8b 45 08             	mov    0x8(%ebp),%eax
 84a4809:	83 c0 20             	add    $0x20,%eax
 84a480c:	89 04 24             	mov    %eax,(%esp)
 84a480f:	e8 34 6c e0 ff       	call   82ab448 <_ZNSt4listIhSaIhEEC1Ev>
 84a4814:	eb 33                	jmp    84a4849 <_ZN8fair_pvp13CFairPvPScoreC1Ev+0x6d>
 84a4816:	89 d3                	mov    %edx,%ebx
 84a4818:	89 c6                	mov    %eax,%esi
 84a481a:	8b 45 08             	mov    0x8(%ebp),%eax
 84a481d:	83 c0 08             	add    $0x8,%eax
 84a4820:	89 04 24             	mov    %eax,(%esp)
 84a4823:	e8 56 1c 00 00       	call   84a647e <_ZNSt3mapIN8fair_pvp6JobKeyE25FAIR_PVP_SCORE_MODE_COUNTSt4lessIS1_ESaISt4pairIKS1_S2_EEED1Ev>
 84a4828:	89 f0                	mov    %esi,%eax
 84a482a:	89 da                	mov    %ebx,%edx
 84a482c:	eb 00                	jmp    84a482e <_ZN8fair_pvp13CFairPvPScoreC1Ev+0x52>
 84a482e:	89 d3                	mov    %edx,%ebx
 84a4830:	89 c6                	mov    %eax,%esi
 84a4832:	8b 45 08             	mov    0x8(%ebp),%eax
 84a4835:	89 04 24             	mov    %eax,(%esp)
 84a4838:	e8 a5 43 c2 ff       	call   80c8be2 <_ZN13charac_expand5CDataD1Ev>
 84a483d:	89 f0                	mov    %esi,%eax
 84a483f:	89 da                	mov    %ebx,%edx
 84a4841:	89 04 24             	mov    %eax,(%esp)
 84a4844:	e8 07 ef 63 00       	call   8ae3750 <_Unwind_Resume>
 84a4849:	83 c4 10             	add    $0x10,%esp
 84a484c:	5b                   	pop    %ebx
 84a484d:	5e                   	pop    %esi
 84a484e:	5d                   	pop    %ebp
 84a484f:	c3                   	ret

```

```c
// fair_pvp::CFairPvPScore::CFairPvPScore @ 0x84a47dc

/* fair_pvp::CFairPvPScore::CFairPvPScore() */

void __thiscall fair_pvp::CFairPvPScore::CFairPvPScore(CFairPvPScore *this)

{
  charac_expand::CData::CData((CData *)this);
  *(undefined ***)this = &PTR_ResetDailyMidnight_08c7ec08;
                    /* try { // try from 084a4801 to 084a4805 has its CatchHandler @ 084a482e */
  std::
  map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
  ::map((map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
         *)(this + 8));
                    /* try { // try from 084a480f to 084a4813 has its CatchHandler @ 084a4816 */
  std::list<unsigned_char,std::allocator<unsigned_char>>::list
            ((list<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x20));
  return;
}

```

---

## MakePacketSocre

```asm
// === 084a5cc2 fair_pvp::CFairPvPScore::MakePacketSocre  [0x084a5cc2-0x84a5fd7] ===
 84a5cc2:	55                   	push   %ebp
 84a5cc3:	89 e5                	mov    %esp,%ebp
 84a5cc5:	83 ec 38             	sub    $0x38,%esp
 84a5cc8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a5ccb:	8b 55 10             	mov    0x10(%ebp),%edx
 84a5cce:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a5cd2:	89 04 24             	mov    %eax,(%esp)
 84a5cd5:	e8 46 5c c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84a5cda:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5cdd:	8b 40 28             	mov    0x28(%eax),%eax
 84a5ce0:	89 c2                	mov    %eax,%edx
 84a5ce2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a5ce5:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a5ce9:	89 04 24             	mov    %eax,(%esp)
 84a5cec:	e8 4b 5c c2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84a5cf1:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5cf4:	8b 40 34             	mov    0x34(%eax),%eax
 84a5cf7:	89 c2                	mov    %eax,%edx
 84a5cf9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a5cfc:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a5d00:	89 04 24             	mov    %eax,(%esp)
 84a5d03:	e8 34 5c c2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84a5d08:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 84a5d0f:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84a5d16:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84a5d1d:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5d20:	8d 50 20             	lea    0x20(%eax),%edx
 84a5d23:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84a5d26:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a5d2a:	89 04 24             	mov    %eax,(%esp)
 84a5d2d:	e8 40 0a 00 00       	call   84a6772 <_ZNKSt4listIhSaIhEE5beginEv>
 84a5d32:	83 ec 04             	sub    $0x4,%esp
 84a5d35:	eb 60                	jmp    84a5d97 <_ZNK8fair_pvp13CFairPvPScore15MakePacketSocreER11PacketGuardi+0xd5>
 84a5d37:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84a5d3a:	89 04 24             	mov    %eax,(%esp)
 84a5d3d:	e8 a2 0a 00 00       	call   84a67e4 <_ZNKSt20_List_const_iteratorIhEdeEv>
 84a5d42:	0f b6 00             	movzbl (%eax),%eax
 84a5d45:	3c 01                	cmp    $0x1,%al
 84a5d47:	0f 94 c0             	sete   %al
 84a5d4a:	84 c0                	test   %al,%al
 84a5d4c:	74 06                	je     84a5d54 <_ZNK8fair_pvp13CFairPvPScore15MakePacketSocreER11PacketGuardi+0x92>
 84a5d4e:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 84a5d52:	eb 38                	jmp    84a5d8c <_ZNK8fair_pvp13CFairPvPScore15MakePacketSocreER11PacketGuardi+0xca>
 84a5d54:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84a5d57:	89 04 24             	mov    %eax,(%esp)
 84a5d5a:	e8 85 0a 00 00       	call   84a67e4 <_ZNKSt20_List_const_iteratorIhEdeEv>
 84a5d5f:	0f b6 00             	movzbl (%eax),%eax
 84a5d62:	3c 02                	cmp    $0x2,%al
 84a5d64:	0f 94 c0             	sete   %al
 84a5d67:	84 c0                	test   %al,%al
 84a5d69:	74 06                	je     84a5d71 <_ZNK8fair_pvp13CFairPvPScore15MakePacketSocreER11PacketGuardi+0xaf>
 84a5d6b:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84a5d6f:	eb 1b                	jmp    84a5d8c <_ZNK8fair_pvp13CFairPvPScore15MakePacketSocreER11PacketGuardi+0xca>
 84a5d71:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84a5d74:	89 04 24             	mov    %eax,(%esp)
 84a5d77:	e8 68 0a 00 00       	call   84a67e4 <_ZNKSt20_List_const_iteratorIhEdeEv>
 84a5d7c:	0f b6 00             	movzbl (%eax),%eax
 84a5d7f:	3c 03                	cmp    $0x3,%al
 84a5d81:	0f 94 c0             	sete   %al
 84a5d84:	84 c0                	test   %al,%al
 84a5d86:	74 04                	je     84a5d8c <_ZNK8fair_pvp13CFairPvPScore15MakePacketSocreER11PacketGuardi+0xca>
 84a5d88:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84a5d8c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84a5d8f:	89 04 24             	mov    %eax,(%esp)
 84a5d92:	e8 39 0a 00 00       	call   84a67d0 <_ZNSt20_List_const_iteratorIhEppEv>
 84a5d97:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5d9a:	8d 50 20             	lea    0x20(%eax),%edx
 84a5d9d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84a5da0:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a5da4:	89 04 24             	mov    %eax,(%esp)
 84a5da7:	e8 ec 09 00 00       	call   84a6798 <_ZNKSt4listIhSaIhEE3endEv>
 84a5dac:	83 ec 04             	sub    $0x4,%esp
 84a5daf:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84a5db2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a5db6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84a5db9:	89 04 24             	mov    %eax,(%esp)
 84a5dbc:	e8 fb 09 00 00       	call   84a67bc <_ZNKSt20_List_const_iteratorIhEneERKS0_>
 84a5dc1:	84 c0                	test   %al,%al
 84a5dc3:	0f 85 6e ff ff ff    	jne    84a5d37 <_ZNK8fair_pvp13CFairPvPScore15MakePacketSocreER11PacketGuardi+0x75>
 84a5dc9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a5dcc:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84a5dcf:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a5dd3:	89 04 24             	mov    %eax,(%esp)
 84a5dd6:	e8 45 5b c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84a5ddb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a5dde:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84a5de1:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a5de5:	89 04 24             	mov    %eax,(%esp)
 84a5de8:	e8 33 5b c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84a5ded:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a5df0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84a5df3:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a5df7:	89 04 24             	mov    %eax,(%esp)
 84a5dfa:	e8 21 5b c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84a5dff:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5e02:	8b 40 48             	mov    0x48(%eax),%eax
 84a5e05:	89 c2                	mov    %eax,%edx
 84a5e07:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a5e0a:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a5e0e:	89 04 24             	mov    %eax,(%esp)
 84a5e11:	e8 26 5b c2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84a5e16:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5e19:	8b 40 40             	mov    0x40(%eax),%eax
 84a5e1c:	89 c2                	mov    %eax,%edx
 84a5e1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a5e21:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a5e25:	89 04 24             	mov    %eax,(%esp)
 84a5e28:	e8 0f 5b c2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84a5e2d:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5e30:	8b 40 44             	mov    0x44(%eax),%eax
 84a5e33:	89 c2                	mov    %eax,%edx
 84a5e35:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a5e38:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a5e3c:	89 04 24             	mov    %eax,(%esp)
 84a5e3f:	e8 f8 5a c2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84a5e44:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5e47:	8b 40 4c             	mov    0x4c(%eax),%eax
 84a5e4a:	89 c2                	mov    %eax,%edx
 84a5e4c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a5e4f:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a5e53:	89 04 24             	mov    %eax,(%esp)
 84a5e56:	e8 e1 5a c2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84a5e5b:	83 7d 10 01          	cmpl   $0x1,0x10(%ebp)
 84a5e5f:	0f 85 71 01 00 00    	jne    84a5fd6 <_ZNK8fair_pvp13CFairPvPScore15MakePacketSocreER11PacketGuardi+0x314>
 84a5e65:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5e68:	8b 40 2c             	mov    0x2c(%eax),%eax
 84a5e6b:	89 c2                	mov    %eax,%edx
 84a5e6d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a5e70:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a5e74:	89 04 24             	mov    %eax,(%esp)
 84a5e77:	e8 c0 5a c2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84a5e7c:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5e7f:	8b 40 30             	mov    0x30(%eax),%eax
 84a5e82:	89 c2                	mov    %eax,%edx
 84a5e84:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a5e87:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a5e8b:	89 04 24             	mov    %eax,(%esp)
 84a5e8e:	e8 a9 5a c2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84a5e93:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5e96:	8b 40 38             	mov    0x38(%eax),%eax
 84a5e99:	89 c2                	mov    %eax,%edx
 84a5e9b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a5e9e:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a5ea2:	89 04 24             	mov    %eax,(%esp)
 84a5ea5:	e8 92 5a c2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84a5eaa:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5ead:	8b 40 3c             	mov    0x3c(%eax),%eax
 84a5eb0:	89 c2                	mov    %eax,%edx
 84a5eb2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a5eb5:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a5eb9:	89 04 24             	mov    %eax,(%esp)
 84a5ebc:	e8 7b 5a c2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84a5ec1:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5ec4:	83 c0 08             	add    $0x8,%eax
 84a5ec7:	89 04 24             	mov    %eax,(%esp)
 84a5eca:	e8 d9 0a 00 00       	call   84a69a8 <_ZNKSt3mapIN8fair_pvp6JobKeyE25FAIR_PVP_SCORE_MODE_COUNTSt4lessIS1_ESaISt4pairIKS1_S2_EEE4sizeEv>
 84a5ecf:	89 c2                	mov    %eax,%edx
 84a5ed1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a5ed4:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a5ed8:	89 04 24             	mov    %eax,(%esp)
 84a5edb:	e8 40 5a c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84a5ee0:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5ee3:	8d 50 08             	lea    0x8(%eax),%edx
 84a5ee6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84a5ee9:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a5eed:	89 04 24             	mov    %eax,(%esp)
 84a5ef0:	e8 f1 07 00 00       	call   84a66e6 <_ZNKSt3mapIN8fair_pvp6JobKeyE25FAIR_PVP_SCORE_MODE_COUNTSt4lessIS1_ESaISt4pairIKS1_S2_EEE5beginEv>
 84a5ef5:	83 ec 04             	sub    $0x4,%esp
 84a5ef8:	e9 a7 00 00 00       	jmp    84a5fa4 <_ZNK8fair_pvp13CFairPvPScore15MakePacketSocreER11PacketGuardi+0x2e2>
 84a5efd:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84a5f00:	89 04 24             	mov    %eax,(%esp)
 84a5f03:	e8 5c 08 00 00       	call   84a6764 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKN8fair_pvp6JobKeyE25FAIR_PVP_SCORE_MODE_COUNTEEptEv>
 84a5f08:	8b 00                	mov    (%eax),%eax
 84a5f0a:	89 c2                	mov    %eax,%edx
 84a5f0c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a5f0f:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a5f13:	89 04 24             	mov    %eax,(%esp)
 84a5f16:	e8 05 5a c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84a5f1b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84a5f1e:	89 04 24             	mov    %eax,(%esp)
 84a5f21:	e8 3e 08 00 00       	call   84a6764 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKN8fair_pvp6JobKeyE25FAIR_PVP_SCORE_MODE_COUNTEEptEv>
 84a5f26:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 84a5f2a:	0f be d0             	movsbl %al,%edx
 84a5f2d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a5f30:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a5f34:	89 04 24             	mov    %eax,(%esp)
 84a5f37:	e8 e4 59 c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84a5f3c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84a5f3f:	89 04 24             	mov    %eax,(%esp)
 84a5f42:	e8 1d 08 00 00       	call   84a6764 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKN8fair_pvp6JobKeyE25FAIR_PVP_SCORE_MODE_COUNTEEptEv>
 84a5f47:	8b 40 08             	mov    0x8(%eax),%eax
 84a5f4a:	89 c2                	mov    %eax,%edx
 84a5f4c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a5f4f:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a5f53:	89 04 24             	mov    %eax,(%esp)
 84a5f56:	e8 e1 59 c2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84a5f5b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84a5f5e:	89 04 24             	mov    %eax,(%esp)
 84a5f61:	e8 fe 07 00 00       	call   84a6764 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKN8fair_pvp6JobKeyE25FAIR_PVP_SCORE_MODE_COUNTEEptEv>
 84a5f66:	8b 40 0c             	mov    0xc(%eax),%eax
 84a5f69:	89 c2                	mov    %eax,%edx
 84a5f6b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a5f6e:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a5f72:	89 04 24             	mov    %eax,(%esp)
 84a5f75:	e8 c2 59 c2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84a5f7a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84a5f7d:	89 04 24             	mov    %eax,(%esp)
 84a5f80:	e8 df 07 00 00       	call   84a6764 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKN8fair_pvp6JobKeyE25FAIR_PVP_SCORE_MODE_COUNTEEptEv>
 84a5f85:	8b 40 10             	mov    0x10(%eax),%eax
 84a5f88:	89 c2                	mov    %eax,%edx
 84a5f8a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a5f8d:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a5f91:	89 04 24             	mov    %eax,(%esp)
 84a5f94:	e8 a3 59 c2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84a5f99:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84a5f9c:	89 04 24             	mov    %eax,(%esp)
 84a5f9f:	e8 a2 07 00 00       	call   84a6746 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKN8fair_pvp6JobKeyE25FAIR_PVP_SCORE_MODE_COUNTEEppEv>
 84a5fa4:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5fa7:	8d 50 08             	lea    0x8(%eax),%edx
 84a5faa:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84a5fad:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a5fb1:	89 04 24             	mov    %eax,(%esp)
 84a5fb4:	e8 53 07 00 00       	call   84a670c <_ZNKSt3mapIN8fair_pvp6JobKeyE25FAIR_PVP_SCORE_MODE_COUNTSt4lessIS1_ESaISt4pairIKS1_S2_EEE3endEv>
 84a5fb9:	83 ec 04             	sub    $0x4,%esp
 84a5fbc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84a5fbf:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a5fc3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84a5fc6:	89 04 24             	mov    %eax,(%esp)
 84a5fc9:	e8 64 07 00 00       	call   84a6732 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKN8fair_pvp6JobKeyE25FAIR_PVP_SCORE_MODE_COUNTEEneERKS6_>
 84a5fce:	84 c0                	test   %al,%al
 84a5fd0:	0f 85 27 ff ff ff    	jne    84a5efd <_ZNK8fair_pvp13CFairPvPScore15MakePacketSocreER11PacketGuardi+0x23b>
 84a5fd6:	c9                   	leave
 84a5fd7:	c3                   	ret

```

```c
// fair_pvp::CFairPvPScore::MakePacketSocre @ 0x84a5cc2

/* fair_pvp::CFairPvPScore::MakePacketSocre(PacketGuard&, int) const */

void __thiscall
fair_pvp::CFairPvPScore::MakePacketSocre(CFairPvPScore *this,PacketGuard *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
  local_28 [4];
  _List_const_iterator<unsigned_char> local_24 [4];
  _List_const_iterator local_20 [4];
  map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
  local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,param_2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x28));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x34));
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  std::list<unsigned_char,std::allocator<unsigned_char>>::begin();
  while( true ) {
    std::list<unsigned_char,std::allocator<unsigned_char>>::end();
    cVar1 = std::_List_const_iterator<unsigned_char>::operator!=(local_24,local_20);
    if (cVar1 == '\0') break;
    pcVar2 = (char *)std::_List_const_iterator<unsigned_char>::operator*(local_24);
    if (*pcVar2 == '\x01') {
      local_18 = local_18 + 1;
    }
    else {
      pcVar2 = (char *)std::_List_const_iterator<unsigned_char>::operator*(local_24);
      if (*pcVar2 == '\x02') {
        local_14 = local_14 + 1;
      }
      else {
        pcVar2 = (char *)std::_List_const_iterator<unsigned_char>::operator*(local_24);
        if (*pcVar2 == '\x03') {
          local_10 = local_10 + 1;
        }
      }
    }
    std::_List_const_iterator<unsigned_char>::operator++(local_24);
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,local_18);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,local_14);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,local_10);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x48));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x40));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x44));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x4c));
  if (param_2 == 1) {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x2c));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x30));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x38));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x3c));
    iVar3 = std::
            map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
            ::size((map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
                    *)(this + 8));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,iVar3);
    std::
    map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
    ::begin(local_28);
    while( true ) {
      std::
      map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
      ::end(local_1c);
      cVar1 = std::
              _Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>::
              operator!=((_Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>
                          *)local_28,(_Rb_tree_const_iterator *)local_1c);
      if (cVar1 == '\0') break;
      piVar4 = (int *)std::
                      _Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>
                      ::operator->((_Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>
                                    *)local_28);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,*piVar4);
      iVar3 = std::
              _Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>::
              operator->((_Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>
                          *)local_28);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(int)*(char *)(iVar3 + 4));
      iVar3 = std::
              _Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>::
              operator->((_Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>
                          *)local_28);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(iVar3 + 8));
      iVar3 = std::
              _Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>::
              operator->((_Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>
                          *)local_28);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(iVar3 + 0xc));
      iVar3 = std::
              _Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>::
              operator->((_Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>
                          *)local_28);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(iVar3 + 0x10));
      std::_Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>::
      operator++((_Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>
                  *)local_28);
    }
  }
  return;
}

```

---

## UpdateScore

```asm
// === 084a5a28 fair_pvp::CFairPvPScore::UpdateScore  [0x084a5a28-0x84a5cc1] ===
 84a5a28:	55                   	push   %ebp
 84a5a29:	89 e5                	mov    %esp,%ebp
 84a5a2b:	83 ec 68             	sub    $0x68,%esp
 84a5a2e:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
 84a5a32:	0f 85 44 01 00 00    	jne    84a5b7c <_ZN8fair_pvp13CFairPvPScore11UpdateScoreEiiiiiii+0x154>
 84a5a38:	8b 45 10             	mov    0x10(%ebp),%eax
 84a5a3b:	0f b6 d0             	movzbl %al,%edx
 84a5a3e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a5a41:	89 54 24 08          	mov    %edx,0x8(%esp)
 84a5a45:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a5a49:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84a5a4c:	89 04 24             	mov    %eax,(%esp)
 84a5a4f:	e8 e6 09 00 00       	call   84a643a <_ZN8fair_pvp6JobKeyC1E17ENUM_CHARACTERJOBh>
 84a5a54:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5a57:	8d 48 08             	lea    0x8(%eax),%ecx
 84a5a5a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84a5a5d:	8d 55 b8             	lea    -0x48(%ebp),%edx
 84a5a60:	89 54 24 08          	mov    %edx,0x8(%esp)
 84a5a64:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84a5a68:	89 04 24             	mov    %eax,(%esp)
 84a5a6b:	e8 ca 0d 00 00       	call   84a683a <_ZNSt3mapIN8fair_pvp6JobKeyE25FAIR_PVP_SCORE_MODE_COUNTSt4lessIS1_ESaISt4pairIKS1_S2_EEE4findERS6_>
 84a5a70:	83 ec 04             	sub    $0x4,%esp
 84a5a73:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5a76:	8d 50 08             	lea    0x8(%eax),%edx
 84a5a79:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84a5a7c:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a5a80:	89 04 24             	mov    %eax,(%esp)
 84a5a83:	e8 de 0d 00 00       	call   84a6866 <_ZNSt3mapIN8fair_pvp6JobKeyE25FAIR_PVP_SCORE_MODE_COUNTSt4lessIS1_ESaISt4pairIKS1_S2_EEE3endEv>
 84a5a88:	83 ec 04             	sub    $0x4,%esp
 84a5a8b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84a5a8e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a5a92:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84a5a95:	89 04 24             	mov    %eax,(%esp)
 84a5a98:	e8 ef 0d 00 00       	call   84a688c <_ZNKSt17_Rb_tree_iteratorISt4pairIKN8fair_pvp6JobKeyE25FAIR_PVP_SCORE_MODE_COUNTEEneERKS6_>
 84a5a9d:	84 c0                	test   %al,%al
 84a5a9f:	74 47                	je     84a5ae8 <_ZN8fair_pvp13CFairPvPScore11UpdateScoreEiiiiiii+0xc0>
 84a5aa1:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84a5aa4:	89 04 24             	mov    %eax,(%esp)
 84a5aa7:	e8 f4 0d 00 00       	call   84a68a0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN8fair_pvp6JobKeyE25FAIR_PVP_SCORE_MODE_COUNTEEptEv>
 84a5aac:	8b 48 08             	mov    0x8(%eax),%ecx
 84a5aaf:	8b 55 18             	mov    0x18(%ebp),%edx
 84a5ab2:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 84a5ab5:	89 50 08             	mov    %edx,0x8(%eax)
 84a5ab8:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84a5abb:	89 04 24             	mov    %eax,(%esp)
 84a5abe:	e8 dd 0d 00 00       	call   84a68a0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN8fair_pvp6JobKeyE25FAIR_PVP_SCORE_MODE_COUNTEEptEv>
 84a5ac3:	8b 48 0c             	mov    0xc(%eax),%ecx
 84a5ac6:	8b 55 1c             	mov    0x1c(%ebp),%edx
 84a5ac9:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 84a5acc:	89 50 0c             	mov    %edx,0xc(%eax)
 84a5acf:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84a5ad2:	89 04 24             	mov    %eax,(%esp)
 84a5ad5:	e8 c6 0d 00 00       	call   84a68a0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN8fair_pvp6JobKeyE25FAIR_PVP_SCORE_MODE_COUNTEEptEv>
 84a5ada:	8b 48 10             	mov    0x10(%eax),%ecx
 84a5add:	8b 55 20             	mov    0x20(%ebp),%edx
 84a5ae0:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 84a5ae3:	89 50 10             	mov    %edx,0x10(%eax)
 84a5ae6:	eb 5f                	jmp    84a5b47 <_ZN8fair_pvp13CFairPvPScore11UpdateScoreEiiiiiii+0x11f>
 84a5ae8:	8b 45 18             	mov    0x18(%ebp),%eax
 84a5aeb:	89 45 a8             	mov    %eax,-0x58(%ebp)
 84a5aee:	8b 45 1c             	mov    0x1c(%ebp),%eax
 84a5af1:	89 45 ac             	mov    %eax,-0x54(%ebp)
 84a5af4:	8b 45 20             	mov    0x20(%ebp),%eax
 84a5af7:	89 45 b0             	mov    %eax,-0x50(%ebp)
 84a5afa:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84a5afd:	8d 55 a8             	lea    -0x58(%ebp),%edx
 84a5b00:	89 54 24 08          	mov    %edx,0x8(%esp)
 84a5b04:	8d 55 b8             	lea    -0x48(%ebp),%edx
 84a5b07:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a5b0b:	89 04 24             	mov    %eax,(%esp)
 84a5b0e:	e8 9a 0d 00 00       	call   84a68ad <_ZSt9make_pairIRN8fair_pvp6JobKeyER25FAIR_PVP_SCORE_MODE_COUNTESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
 84a5b13:	83 ec 04             	sub    $0x4,%esp
 84a5b16:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84a5b19:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a5b1d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84a5b20:	89 04 24             	mov    %eax,(%esp)
 84a5b23:	e8 14 0b 00 00       	call   84a663c <_ZNSt4pairIKN8fair_pvp6JobKeyE25FAIR_PVP_SCORE_MODE_COUNTEC1IS1_S3_EEOS_IT_T0_E>
 84a5b28:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5b2b:	8d 48 08             	lea    0x8(%eax),%ecx
 84a5b2e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84a5b31:	8d 55 cc             	lea    -0x34(%ebp),%edx
 84a5b34:	89 54 24 08          	mov    %edx,0x8(%esp)
 84a5b38:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84a5b3c:	89 04 24             	mov    %eax,(%esp)
 84a5b3f:	e8 40 0b 00 00       	call   84a6684 <_ZNSt3mapIN8fair_pvp6JobKeyE25FAIR_PVP_SCORE_MODE_COUNTSt4lessIS1_ESaISt4pairIKS1_S2_EEE6insertERKS7_>
 84a5b44:	83 ec 04             	sub    $0x4,%esp
 84a5b47:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5b4a:	8b 50 28             	mov    0x28(%eax),%edx
 84a5b4d:	8b 45 18             	mov    0x18(%ebp),%eax
 84a5b50:	01 c2                	add    %eax,%edx
 84a5b52:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5b55:	89 50 28             	mov    %edx,0x28(%eax)
 84a5b58:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5b5b:	8b 50 2c             	mov    0x2c(%eax),%edx
 84a5b5e:	8b 45 1c             	mov    0x1c(%ebp),%eax
 84a5b61:	01 c2                	add    %eax,%edx
 84a5b63:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5b66:	89 50 2c             	mov    %edx,0x2c(%eax)
 84a5b69:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5b6c:	8b 50 30             	mov    0x30(%eax),%edx
 84a5b6f:	8b 45 20             	mov    0x20(%ebp),%eax
 84a5b72:	01 c2                	add    %eax,%edx
 84a5b74:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5b77:	89 50 30             	mov    %edx,0x30(%eax)
 84a5b7a:	eb 5f                	jmp    84a5bdb <_ZN8fair_pvp13CFairPvPScore11UpdateScoreEiiiiiii+0x1b3>
 84a5b7c:	83 7d 24 02          	cmpl   $0x2,0x24(%ebp)
 84a5b80:	75 11                	jne    84a5b93 <_ZN8fair_pvp13CFairPvPScore11UpdateScoreEiiiiiii+0x16b>
 84a5b82:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5b85:	8b 40 40             	mov    0x40(%eax),%eax
 84a5b88:	8d 50 01             	lea    0x1(%eax),%edx
 84a5b8b:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5b8e:	89 50 40             	mov    %edx,0x40(%eax)
 84a5b91:	eb 15                	jmp    84a5ba8 <_ZN8fair_pvp13CFairPvPScore11UpdateScoreEiiiiiii+0x180>
 84a5b93:	83 7d 24 03          	cmpl   $0x3,0x24(%ebp)
 84a5b97:	75 0f                	jne    84a5ba8 <_ZN8fair_pvp13CFairPvPScore11UpdateScoreEiiiiiii+0x180>
 84a5b99:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5b9c:	8b 40 44             	mov    0x44(%eax),%eax
 84a5b9f:	8d 50 01             	lea    0x1(%eax),%edx
 84a5ba2:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5ba5:	89 50 44             	mov    %edx,0x44(%eax)
 84a5ba8:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5bab:	8b 50 34             	mov    0x34(%eax),%edx
 84a5bae:	8b 45 18             	mov    0x18(%ebp),%eax
 84a5bb1:	01 c2                	add    %eax,%edx
 84a5bb3:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5bb6:	89 50 34             	mov    %edx,0x34(%eax)
 84a5bb9:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5bbc:	8b 50 38             	mov    0x38(%eax),%edx
 84a5bbf:	8b 45 1c             	mov    0x1c(%ebp),%eax
 84a5bc2:	01 c2                	add    %eax,%edx
 84a5bc4:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5bc7:	89 50 38             	mov    %edx,0x38(%eax)
 84a5bca:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5bcd:	8b 50 3c             	mov    0x3c(%eax),%edx
 84a5bd0:	8b 45 20             	mov    0x20(%ebp),%eax
 84a5bd3:	01 c2                	add    %eax,%edx
 84a5bd5:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5bd8:	89 50 3c             	mov    %edx,0x3c(%eax)
 84a5bdb:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 84a5bdf:	74 1b                	je     84a5bfc <_ZN8fair_pvp13CFairPvPScore11UpdateScoreEiiiiiii+0x1d4>
 84a5be1:	c6 45 f5 01          	movb   $0x1,-0xb(%ebp)
 84a5be5:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5be8:	8d 50 20             	lea    0x20(%eax),%edx
 84a5beb:	8d 45 f5             	lea    -0xb(%ebp),%eax
 84a5bee:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a5bf2:	89 14 24             	mov    %edx,(%esp)
 84a5bf5:	e8 f2 0c 00 00       	call   84a68ec <_ZNSt4listIhSaIhEE9push_backEOh>
 84a5bfa:	eb 40                	jmp    84a5c3c <_ZN8fair_pvp13CFairPvPScore11UpdateScoreEiiiiiii+0x214>
 84a5bfc:	83 7d 1c 00          	cmpl   $0x0,0x1c(%ebp)
 84a5c00:	74 1b                	je     84a5c1d <_ZN8fair_pvp13CFairPvPScore11UpdateScoreEiiiiiii+0x1f5>
 84a5c02:	c6 45 f6 02          	movb   $0x2,-0xa(%ebp)
 84a5c06:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5c09:	8d 50 20             	lea    0x20(%eax),%edx
 84a5c0c:	8d 45 f6             	lea    -0xa(%ebp),%eax
 84a5c0f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a5c13:	89 14 24             	mov    %edx,(%esp)
 84a5c16:	e8 d1 0c 00 00       	call   84a68ec <_ZNSt4listIhSaIhEE9push_backEOh>
 84a5c1b:	eb 1f                	jmp    84a5c3c <_ZN8fair_pvp13CFairPvPScore11UpdateScoreEiiiiiii+0x214>
 84a5c1d:	83 7d 20 00          	cmpl   $0x0,0x20(%ebp)
 84a5c21:	74 19                	je     84a5c3c <_ZN8fair_pvp13CFairPvPScore11UpdateScoreEiiiiiii+0x214>
 84a5c23:	c6 45 f7 03          	movb   $0x3,-0x9(%ebp)
 84a5c27:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5c2a:	8d 50 20             	lea    0x20(%eax),%edx
 84a5c2d:	8d 45 f7             	lea    -0x9(%ebp),%eax
 84a5c30:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a5c34:	89 14 24             	mov    %edx,(%esp)
 84a5c37:	e8 b0 0c 00 00       	call   84a68ec <_ZNSt4listIhSaIhEE9push_backEOh>
 84a5c3c:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5c3f:	83 c0 20             	add    $0x20,%eax
 84a5c42:	89 04 24             	mov    %eax,(%esp)
 84a5c45:	e8 ea 0c 00 00       	call   84a6934 <_ZNKSt4listIhSaIhEE4sizeEv>
 84a5c4a:	83 f8 0a             	cmp    $0xa,%eax
 84a5c4d:	0f 97 c0             	seta   %al
 84a5c50:	84 c0                	test   %al,%al
 84a5c52:	74 0e                	je     84a5c62 <_ZN8fair_pvp13CFairPvPScore11UpdateScoreEiiiiiii+0x23a>
 84a5c54:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5c57:	83 c0 20             	add    $0x20,%eax
 84a5c5a:	89 04 24             	mov    %eax,(%esp)
 84a5c5d:	e8 16 0d 00 00       	call   84a6978 <_ZNSt4listIhSaIhEE9pop_frontEv>
 84a5c62:	83 7d 1c 00          	cmpl   $0x0,0x1c(%ebp)
 84a5c66:	74 0c                	je     84a5c74 <_ZN8fair_pvp13CFairPvPScore11UpdateScoreEiiiiiii+0x24c>
 84a5c68:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5c6b:	c7 40 48 00 00 00 00 	movl   $0x0,0x48(%eax)
 84a5c72:	eb 31                	jmp    84a5ca5 <_ZN8fair_pvp13CFairPvPScore11UpdateScoreEiiiiiii+0x27d>
 84a5c74:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 84a5c78:	74 2b                	je     84a5ca5 <_ZN8fair_pvp13CFairPvPScore11UpdateScoreEiiiiiii+0x27d>
 84a5c7a:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5c7d:	8b 40 48             	mov    0x48(%eax),%eax
 84a5c80:	8d 50 01             	lea    0x1(%eax),%edx
 84a5c83:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5c86:	89 50 48             	mov    %edx,0x48(%eax)
 84a5c89:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5c8c:	8b 50 4c             	mov    0x4c(%eax),%edx
 84a5c8f:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5c92:	8b 40 48             	mov    0x48(%eax),%eax
 84a5c95:	39 c2                	cmp    %eax,%edx
 84a5c97:	73 0c                	jae    84a5ca5 <_ZN8fair_pvp13CFairPvPScore11UpdateScoreEiiiiiii+0x27d>
 84a5c99:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5c9c:	8b 50 48             	mov    0x48(%eax),%edx
 84a5c9f:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5ca2:	89 50 4c             	mov    %edx,0x4c(%eax)
 84a5ca5:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5ca8:	8b 40 50             	mov    0x50(%eax),%eax
 84a5cab:	8d 50 01             	lea    0x1(%eax),%edx
 84a5cae:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5cb1:	89 50 50             	mov    %edx,0x50(%eax)
 84a5cb4:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5cb7:	89 04 24             	mov    %eax,(%esp)
 84a5cba:	e8 05 2f c2 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 84a5cbf:	c9                   	leave
 84a5cc0:	c3                   	ret
 84a5cc1:	90                   	nop

```

```c
// fair_pvp::CFairPvPScore::UpdateScore @ 0x84a5a28

/* fair_pvp::CFairPvPScore::UpdateScore(int, int, int, int, int, int, int) */

void __thiscall
fair_pvp::CFairPvPScore::UpdateScore
          (CFairPvPScore *this,int param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6,int param_7)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  JobKey local_50 [4];
  JobKey local_4c [8];
  map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
  local_44 [4];
  pair local_40 [8];
  pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT> local_38 [20];
  JobKey local_24 [21];
  uchar local_f [11];
  
  if (param_3 == 1) {
    JobKey::JobKey(local_4c,param_1,param_2 & 0xff);
    std::
    map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
    ::find(local_50);
    std::
    map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
    ::end(local_44);
    cVar1 = std::_Rb_tree_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>::
            operator!=((_Rb_tree_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>
                        *)local_50,(_Rb_tree_iterator *)local_44);
    if (cVar1 == '\0') {
      std::make_pair<fair_pvp::JobKey&,FAIR_PVP_SCORE_MODE_COUNT&>
                (local_24,(FAIR_PVP_SCORE_MODE_COUNT *)local_4c);
      std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>::
      pair<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT>(local_38,local_24);
      std::
      map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
      ::insert(local_40);
    }
    else {
      iVar2 = std::_Rb_tree_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>::
              operator->((_Rb_tree_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>
                          *)local_50);
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + param_4;
      iVar2 = std::_Rb_tree_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>::
              operator->((_Rb_tree_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>
                          *)local_50);
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + param_5;
      iVar2 = std::_Rb_tree_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>::
              operator->((_Rb_tree_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>
                          *)local_50);
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + param_6;
    }
    *(int *)(this + 0x28) = *(int *)(this + 0x28) + param_4;
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + param_5;
    *(int *)(this + 0x30) = *(int *)(this + 0x30) + param_6;
  }
  else {
    if (param_7 == 2) {
      *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
    }
    else if (param_7 == 3) {
      *(int *)(this + 0x44) = *(int *)(this + 0x44) + 1;
    }
    *(int *)(this + 0x34) = *(int *)(this + 0x34) + param_4;
    *(int *)(this + 0x38) = *(int *)(this + 0x38) + param_5;
    *(int *)(this + 0x3c) = *(int *)(this + 0x3c) + param_6;
  }
  if (param_4 == 0) {
    if (param_5 == 0) {
      if (param_6 != 0) {
        local_f[2] = 3;
        std::list<unsigned_char,std::allocator<unsigned_char>>::push_back
                  ((list<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x20),local_f + 2);
      }
    }
    else {
      local_f[1] = 2;
      std::list<unsigned_char,std::allocator<unsigned_char>>::push_back
                ((list<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x20),local_f + 1);
    }
  }
  else {
    local_f[0] = '\x01';
    std::list<unsigned_char,std::allocator<unsigned_char>>::push_back
              ((list<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x20),local_f);
  }
  uVar3 = std::list<unsigned_char,std::allocator<unsigned_char>>::size();
  if (10 < uVar3) {
    std::list<unsigned_char,std::allocator<unsigned_char>>::pop_front
              ((list<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x20));
  }
  if (param_5 == 0) {
    if ((param_4 != 0) &&
       (*(int *)(this + 0x48) = *(int *)(this + 0x48) + 1,
       *(uint *)(this + 0x4c) < *(uint *)(this + 0x48))) {
      *(undefined4 *)(this + 0x4c) = *(undefined4 *)(this + 0x48);
    }
  }
  else {
    *(undefined4 *)(this + 0x48) = 0;
  }
  *(int *)(this + 0x50) = *(int *)(this + 0x50) + 1;
  charac_expand::CData::alter((CData *)this);
  return;
}

```

---

## _reset

```asm
// === 084a5942 fair_pvp::CFairPvPScore::_reset  [0x084a5942-0x84a5a27] ===
 84a5942:	55                   	push   %ebp
 84a5943:	89 e5                	mov    %esp,%ebp
 84a5945:	83 ec 28             	sub    $0x28,%esp
 84a5948:	8b 45 08             	mov    0x8(%ebp),%eax
 84a594b:	83 c0 08             	add    $0x8,%eax
 84a594e:	89 04 24             	mov    %eax,(%esp)
 84a5951:	e8 b2 0e 00 00       	call   84a6808 <_ZNSt3mapIN8fair_pvp6JobKeyE25FAIR_PVP_SCORE_MODE_COUNTSt4lessIS1_ESaISt4pairIKS1_S2_EEE5clearEv>
 84a5956:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5959:	83 c0 20             	add    $0x20,%eax
 84a595c:	89 04 24             	mov    %eax,(%esp)
 84a595f:	e8 b8 0e 00 00       	call   84a681c <_ZNSt4listIhSaIhEE5clearEv>
 84a5964:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84a596b:	eb 55                	jmp    84a59c2 <_ZN8fair_pvp13CFairPvPScore6_resetEv+0x80>
 84a596d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84a5970:	8b 4d 08             	mov    0x8(%ebp),%ecx
 84a5973:	89 d0                	mov    %edx,%eax
 84a5975:	01 c0                	add    %eax,%eax
 84a5977:	01 d0                	add    %edx,%eax
 84a5979:	c1 e0 02             	shl    $0x2,%eax
 84a597c:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84a597f:	83 c0 28             	add    $0x28,%eax
 84a5982:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 84a5988:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84a598b:	8b 4d 08             	mov    0x8(%ebp),%ecx
 84a598e:	89 d0                	mov    %edx,%eax
 84a5990:	01 c0                	add    %eax,%eax
 84a5992:	01 d0                	add    %edx,%eax
 84a5994:	c1 e0 02             	shl    $0x2,%eax
 84a5997:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84a599a:	83 c0 2c             	add    $0x2c,%eax
 84a599d:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 84a59a3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84a59a6:	8b 4d 08             	mov    0x8(%ebp),%ecx
 84a59a9:	89 d0                	mov    %edx,%eax
 84a59ab:	01 c0                	add    %eax,%eax
 84a59ad:	01 d0                	add    %edx,%eax
 84a59af:	c1 e0 02             	shl    $0x2,%eax
 84a59b2:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84a59b5:	83 c0 30             	add    $0x30,%eax
 84a59b8:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 84a59be:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84a59c2:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 84a59c6:	0f 9e c0             	setle  %al
 84a59c9:	84 c0                	test   %al,%al
 84a59cb:	75 a0                	jne    84a596d <_ZN8fair_pvp13CFairPvPScore6_resetEv+0x2b>
 84a59cd:	8b 45 08             	mov    0x8(%ebp),%eax
 84a59d0:	c7 40 40 00 00 00 00 	movl   $0x0,0x40(%eax)
 84a59d7:	8b 45 08             	mov    0x8(%ebp),%eax
 84a59da:	c7 40 44 00 00 00 00 	movl   $0x0,0x44(%eax)
 84a59e1:	8b 45 08             	mov    0x8(%ebp),%eax
 84a59e4:	c7 40 48 00 00 00 00 	movl   $0x0,0x48(%eax)
 84a59eb:	8b 45 08             	mov    0x8(%ebp),%eax
 84a59ee:	c7 40 4c 00 00 00 00 	movl   $0x0,0x4c(%eax)
 84a59f5:	8b 45 08             	mov    0x8(%ebp),%eax
 84a59f8:	c7 40 50 00 00 00 00 	movl   $0x0,0x50(%eax)
 84a59ff:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5a02:	c7 40 54 00 00 00 00 	movl   $0x0,0x54(%eax)
 84a5a09:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5a0c:	c6 40 58 00          	movb   $0x0,0x58(%eax)
 84a5a10:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5a13:	c6 40 59 00          	movb   $0x0,0x59(%eax)
 84a5a17:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5a1a:	c6 40 5a 00          	movb   $0x0,0x5a(%eax)
 84a5a1e:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5a21:	c6 40 5b 00          	movb   $0x0,0x5b(%eax)
 84a5a25:	c9                   	leave
 84a5a26:	c3                   	ret
 84a5a27:	90                   	nop

```

```c
// fair_pvp::CFairPvPScore::_reset @ 0x84a5942

/* fair_pvp::CFairPvPScore::_reset() */

void __thiscall fair_pvp::CFairPvPScore::_reset(CFairPvPScore *this)

{
  int local_10;
  
  std::
  map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
  ::clear((map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
           *)(this + 8));
  std::list<unsigned_char,std::allocator<unsigned_char>>::clear
            ((list<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x20));
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    *(undefined4 *)(this + local_10 * 0xc + 0x28) = 0;
    *(undefined4 *)(this + local_10 * 0xc + 0x2c) = 0;
    *(undefined4 *)(this + local_10 * 0xc + 0x30) = 0;
  }
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  this[0x58] = (CFairPvPScore)0x0;
  this[0x59] = (CFairPvPScore)0x0;
  this[0x5a] = (CFairPvPScore)0x0;
  this[0x5b] = (CFairPvPScore)0x0;
  return;
}

```

---

## _saveData

```asm
// === 084a57fe fair_pvp::CFairPvPScore::_saveData  [0x084a57fe-0x84a5941] ===
 84a57fe:	55                   	push   %ebp
 84a57ff:	89 e5                	mov    %esp,%ebp
 84a5801:	56                   	push   %esi
 84a5802:	53                   	push   %ebx
 84a5803:	83 ec 20             	sub    $0x20,%esp
 84a5806:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84a580b:	c7 44 24 08 0a 01 00 	movl   $0x10a,0x8(%esp)
 84a5812:	00 
 84a5813:	c7 44 24 04 1f df c7 	movl   $0x8c7df1f,0x4(%esp)
 84a581a:	08 
 84a581b:	89 04 24             	mov    %eax,(%esp)
 84a581e:	e8 63 a2 de ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84a5823:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84a582a:	00 
 84a582b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a582f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84a5832:	89 04 24             	mov    %eax,(%esp)
 84a5835:	e8 ec 33 c2 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84a583a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84a583d:	89 04 24             	mov    %eax,(%esp)
 84a5840:	e8 01 34 c2 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84a5845:	c7 44 24 04 61 02 00 	movl   $0x261,0x4(%esp)
 84a584c:	00 
 84a584d:	89 04 24             	mov    %eax,(%esp)
 84a5850:	e8 01 34 c2 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84a5855:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a5858:	89 04 24             	mov    %eax,(%esp)
 84a585b:	e8 36 34 c2 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84a5860:	89 c3                	mov    %eax,%ebx
 84a5862:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84a5865:	89 04 24             	mov    %eax,(%esp)
 84a5868:	e8 d9 33 c2 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84a586d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a5871:	89 04 24             	mov    %eax,(%esp)
 84a5874:	e8 dd 33 c2 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84a5879:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84a587c:	89 04 24             	mov    %eax,(%esp)
 84a587f:	e8 ca 33 c2 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84a5884:	89 04 24             	mov    %eax,(%esp)
 84a5887:	e8 66 0f 00 00       	call   84a67f2 <_ZN12CStreamGuard11GetInBufferI18SIG_FAIR_PVP_SCOREEEPT_v>
 84a588c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a588f:	c7 44 24 08 88 06 00 	movl   $0x688,0x8(%esp)
 84a5896:	00 
 84a5897:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84a589e:	00 
 84a589f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a58a2:	89 04 24             	mov    %eax,(%esp)
 84a58a5:	e8 16 84 bd ff       	call   807dcc0 <memset@plt>
 84a58aa:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84a58b1:	ff 
 84a58b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a58b5:	89 04 24             	mov    %eax,(%esp)
 84a58b8:	e8 e3 86 1a 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84a58bd:	89 c2                	mov    %eax,%edx
 84a58bf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a58c2:	89 10                	mov    %edx,(%eax)
 84a58c4:	8b 45 08             	mov    0x8(%ebp),%eax
 84a58c7:	8b 00                	mov    (%eax),%eax
 84a58c9:	83 c0 08             	add    $0x8,%eax
 84a58cc:	8b 10                	mov    (%eax),%edx
 84a58ce:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a58d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a58d5:	8b 45 08             	mov    0x8(%ebp),%eax
 84a58d8:	89 04 24             	mov    %eax,(%esp)
 84a58db:	ff d2                	call   *%edx
 84a58dd:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84a58e4:	e8 b5 63 c2 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84a58e9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84a58ec:	89 82 80 06 00 00    	mov    %eax,0x680(%edx)
 84a58f2:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84a58f7:	8d 55 ec             	lea    -0x14(%ebp),%edx
 84a58fa:	89 54 24 08          	mov    %edx,0x8(%esp)
 84a58fe:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84a5905:	00 
 84a5906:	89 04 24             	mov    %eax,(%esp)
 84a5909:	e8 d0 b6 0c 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84a590e:	bb 01 00 00 00       	mov    $0x1,%ebx
 84a5913:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84a5916:	89 04 24             	mov    %eax,(%esp)
 84a5919:	e8 b4 6f 17 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84a591e:	89 d8                	mov    %ebx,%eax
 84a5920:	83 c4 20             	add    $0x20,%esp
 84a5923:	5b                   	pop    %ebx
 84a5924:	5e                   	pop    %esi
 84a5925:	5d                   	pop    %ebp
 84a5926:	c3                   	ret
 84a5927:	89 d3                	mov    %edx,%ebx
 84a5929:	89 c6                	mov    %eax,%esi
 84a592b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84a592e:	89 04 24             	mov    %eax,(%esp)
 84a5931:	e8 9c 6f 17 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84a5936:	89 f0                	mov    %esi,%eax
 84a5938:	89 da                	mov    %ebx,%edx
 84a593a:	89 04 24             	mov    %eax,(%esp)
 84a593d:	e8 0e de 63 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// fair_pvp::CFairPvPScore::_saveData @ 0x84a57fe

/* fair_pvp::CFairPvPScore::_saveData(CUser*) */

undefined4 __thiscall fair_pvp::CFairPvPScore::_saveData(CFairPvPScore *this,CUser *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  CStreamGuard local_18 [8];
  SIG_FAIR_PVP_SCORE *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"FairPvPScore.cpp",0x10a);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 084a5850 to 084a590d has its CatchHandler @ 084a5927 */
  CStreamGuard::operator<<(pCVar2,0x261);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_FAIR_PVP_SCORE>(pCVar2);
  memset(local_10,0,0x688);
  uVar4 = CUser::get_charac_no(param_1,-1);
  *(undefined4 *)local_10 = uVar4;
  (**(code **)(*(int *)this + 8))(this,local_10);
  uVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(local_10 + 0x680) = uVar4;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}

```

---

## getData

```asm
// === 084a55a8 fair_pvp::CFairPvPScore::getData  [0x084a55a8-0x84a57fd] ===
 84a55a8:	55                   	push   %ebp
 84a55a9:	89 e5                	mov    %esp,%ebp
 84a55ab:	56                   	push   %esi
 84a55ac:	53                   	push   %ebx
 84a55ad:	83 ec 30             	sub    $0x30,%esp
 84a55b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a55b3:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84a55b6:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84a55bd:	8b 45 08             	mov    0x8(%ebp),%eax
 84a55c0:	8d 50 08             	lea    0x8(%eax),%edx
 84a55c3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84a55c6:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a55ca:	89 04 24             	mov    %eax,(%esp)
 84a55cd:	e8 14 11 00 00       	call   84a66e6 <_ZNKSt3mapIN8fair_pvp6JobKeyE25FAIR_PVP_SCORE_MODE_COUNTSt4lessIS1_ESaISt4pairIKS1_S2_EEE5beginEv>
 84a55d2:	83 ec 04             	sub    $0x4,%esp
 84a55d5:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84a55dc:	e9 8b 00 00 00       	jmp    84a566c <_ZNK8fair_pvp13CFairPvPScore7getDataEPc+0xc4>
 84a55e1:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 84a55e4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84a55e7:	89 04 24             	mov    %eax,(%esp)
 84a55ea:	e8 75 11 00 00       	call   84a6764 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKN8fair_pvp6JobKeyE25FAIR_PVP_SCORE_MODE_COUNTEEptEv>
 84a55ef:	8b 00                	mov    (%eax),%eax
 84a55f1:	89 c2                	mov    %eax,%edx
 84a55f3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84a55f6:	8d 4b 02             	lea    0x2(%ebx),%ecx
 84a55f9:	c1 e1 04             	shl    $0x4,%ecx
 84a55fc:	88 54 01 10          	mov    %dl,0x10(%ecx,%eax,1)
 84a5600:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 84a5603:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84a5606:	89 04 24             	mov    %eax,(%esp)
 84a5609:	e8 56 11 00 00       	call   84a6764 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKN8fair_pvp6JobKeyE25FAIR_PVP_SCORE_MODE_COUNTEEptEv>
 84a560e:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 84a5612:	89 c2                	mov    %eax,%edx
 84a5614:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84a5617:	8d 4b 02             	lea    0x2(%ebx),%ecx
 84a561a:	c1 e1 04             	shl    $0x4,%ecx
 84a561d:	88 54 01 11          	mov    %dl,0x11(%ecx,%eax,1)
 84a5621:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 84a5624:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84a5627:	89 04 24             	mov    %eax,(%esp)
 84a562a:	e8 35 11 00 00       	call   84a6764 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKN8fair_pvp6JobKeyE25FAIR_PVP_SCORE_MODE_COUNTEEptEv>
 84a562f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84a5632:	8d 4b 02             	lea    0x2(%ebx),%ecx
 84a5635:	c1 e1 04             	shl    $0x4,%ecx
 84a5638:	8b 58 08             	mov    0x8(%eax),%ebx
 84a563b:	89 5c 11 14          	mov    %ebx,0x14(%ecx,%edx,1)
 84a563f:	8b 58 0c             	mov    0xc(%eax),%ebx
 84a5642:	89 5c 11 18          	mov    %ebx,0x18(%ecx,%edx,1)
 84a5646:	8b 40 10             	mov    0x10(%eax),%eax
 84a5649:	89 44 11 1c          	mov    %eax,0x1c(%ecx,%edx,1)
 84a564d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84a5650:	0f b6 40 2c          	movzbl 0x2c(%eax),%eax
 84a5654:	8d 50 01             	lea    0x1(%eax),%edx
 84a5657:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84a565a:	88 50 2c             	mov    %dl,0x2c(%eax)
 84a565d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84a5660:	89 04 24             	mov    %eax,(%esp)
 84a5663:	e8 de 10 00 00       	call   84a6746 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKN8fair_pvp6JobKeyE25FAIR_PVP_SCORE_MODE_COUNTEEppEv>
 84a5668:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84a566c:	8b 45 08             	mov    0x8(%ebp),%eax
 84a566f:	8d 50 08             	lea    0x8(%eax),%edx
 84a5672:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84a5675:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a5679:	89 04 24             	mov    %eax,(%esp)
 84a567c:	e8 8b 10 00 00       	call   84a670c <_ZNKSt3mapIN8fair_pvp6JobKeyE25FAIR_PVP_SCORE_MODE_COUNTSt4lessIS1_ESaISt4pairIKS1_S2_EEE3endEv>
 84a5681:	83 ec 04             	sub    $0x4,%esp
 84a5684:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84a5687:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a568b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84a568e:	89 04 24             	mov    %eax,(%esp)
 84a5691:	e8 9c 10 00 00       	call   84a6732 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKN8fair_pvp6JobKeyE25FAIR_PVP_SCORE_MODE_COUNTEEneERKS6_>
 84a5696:	84 c0                	test   %al,%al
 84a5698:	74 0d                	je     84a56a7 <_ZNK8fair_pvp13CFairPvPScore7getDataEPc+0xff>
 84a569a:	83 7d f4 63          	cmpl   $0x63,-0xc(%ebp)
 84a569e:	7f 07                	jg     84a56a7 <_ZNK8fair_pvp13CFairPvPScore7getDataEPc+0xff>
 84a56a0:	b8 01 00 00 00       	mov    $0x1,%eax
 84a56a5:	eb 05                	jmp    84a56ac <_ZNK8fair_pvp13CFairPvPScore7getDataEPc+0x104>
 84a56a7:	b8 00 00 00 00       	mov    $0x0,%eax
 84a56ac:	84 c0                	test   %al,%al
 84a56ae:	0f 85 2d ff ff ff    	jne    84a55e1 <_ZNK8fair_pvp13CFairPvPScore7getDataEPc+0x39>
 84a56b4:	8b 45 08             	mov    0x8(%ebp),%eax
 84a56b7:	8d 50 20             	lea    0x20(%eax),%edx
 84a56ba:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84a56bd:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a56c1:	89 04 24             	mov    %eax,(%esp)
 84a56c4:	e8 a9 10 00 00       	call   84a6772 <_ZNKSt4listIhSaIhEE5beginEv>
 84a56c9:	83 ec 04             	sub    $0x4,%esp
 84a56cc:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84a56d3:	eb 2a                	jmp    84a56ff <_ZNK8fair_pvp13CFairPvPScore7getDataEPc+0x157>
 84a56d5:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 84a56d8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84a56db:	89 04 24             	mov    %eax,(%esp)
 84a56de:	e8 01 11 00 00       	call   84a67e4 <_ZNKSt20_List_const_iteratorIhEdeEv>
 84a56e3:	0f b6 10             	movzbl (%eax),%edx
 84a56e6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84a56e9:	88 94 18 70 06 00 00 	mov    %dl,0x670(%eax,%ebx,1)
 84a56f0:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84a56f4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84a56f7:	89 04 24             	mov    %eax,(%esp)
 84a56fa:	e8 d1 10 00 00       	call   84a67d0 <_ZNSt20_List_const_iteratorIhEppEv>
 84a56ff:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5702:	8d 50 20             	lea    0x20(%eax),%edx
 84a5705:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84a5708:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a570c:	89 04 24             	mov    %eax,(%esp)
 84a570f:	e8 84 10 00 00       	call   84a6798 <_ZNKSt4listIhSaIhEE3endEv>
 84a5714:	83 ec 04             	sub    $0x4,%esp
 84a5717:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84a571a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a571e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84a5721:	89 04 24             	mov    %eax,(%esp)
 84a5724:	e8 93 10 00 00       	call   84a67bc <_ZNKSt20_List_const_iteratorIhEneERKS0_>
 84a5729:	84 c0                	test   %al,%al
 84a572b:	74 0d                	je     84a573a <_ZNK8fair_pvp13CFairPvPScore7getDataEPc+0x192>
 84a572d:	83 7d f4 09          	cmpl   $0x9,-0xc(%ebp)
 84a5731:	7f 07                	jg     84a573a <_ZNK8fair_pvp13CFairPvPScore7getDataEPc+0x192>
 84a5733:	b8 01 00 00 00       	mov    $0x1,%eax
 84a5738:	eb 05                	jmp    84a573f <_ZNK8fair_pvp13CFairPvPScore7getDataEPc+0x197>
 84a573a:	b8 00 00 00 00       	mov    $0x0,%eax
 84a573f:	84 c0                	test   %al,%al
 84a5741:	75 92                	jne    84a56d5 <_ZNK8fair_pvp13CFairPvPScore7getDataEPc+0x12d>
 84a5743:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84a574a:	eb 3d                	jmp    84a5789 <_ZNK8fair_pvp13CFairPvPScore7getDataEPc+0x1e1>
 84a574c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84a574f:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 84a5752:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 84a5755:	89 d0                	mov    %edx,%eax
 84a5757:	01 c0                	add    %eax,%eax
 84a5759:	01 d0                	add    %edx,%eax
 84a575b:	c1 e0 02             	shl    $0x2,%eax
 84a575e:	8b 75 08             	mov    0x8(%ebp),%esi
 84a5761:	89 da                	mov    %ebx,%edx
 84a5763:	01 d2                	add    %edx,%edx
 84a5765:	01 da                	add    %ebx,%edx
 84a5767:	c1 e2 02             	shl    $0x2,%edx
 84a576a:	8d 14 16             	lea    (%esi,%edx,1),%edx
 84a576d:	83 c2 20             	add    $0x20,%edx
 84a5770:	8b 5a 08             	mov    0x8(%edx),%ebx
 84a5773:	89 5c 08 04          	mov    %ebx,0x4(%eax,%ecx,1)
 84a5777:	8b 5a 0c             	mov    0xc(%edx),%ebx
 84a577a:	89 5c 08 08          	mov    %ebx,0x8(%eax,%ecx,1)
 84a577e:	8b 52 10             	mov    0x10(%edx),%edx
 84a5781:	89 54 08 0c          	mov    %edx,0xc(%eax,%ecx,1)
 84a5785:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84a5789:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 84a578d:	0f 9e c0             	setle  %al
 84a5790:	84 c0                	test   %al,%al
 84a5792:	75 b8                	jne    84a574c <_ZNK8fair_pvp13CFairPvPScore7getDataEPc+0x1a4>
 84a5794:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5797:	8b 50 40             	mov    0x40(%eax),%edx
 84a579a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84a579d:	89 50 1c             	mov    %edx,0x1c(%eax)
 84a57a0:	8b 45 08             	mov    0x8(%ebp),%eax
 84a57a3:	8b 50 44             	mov    0x44(%eax),%edx
 84a57a6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84a57a9:	89 50 20             	mov    %edx,0x20(%eax)
 84a57ac:	8b 45 08             	mov    0x8(%ebp),%eax
 84a57af:	8b 50 48             	mov    0x48(%eax),%edx
 84a57b2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84a57b5:	89 50 24             	mov    %edx,0x24(%eax)
 84a57b8:	8b 45 08             	mov    0x8(%ebp),%eax
 84a57bb:	8b 50 4c             	mov    0x4c(%eax),%edx
 84a57be:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84a57c1:	89 50 28             	mov    %edx,0x28(%eax)
 84a57c4:	8b 45 08             	mov    0x8(%ebp),%eax
 84a57c7:	8b 50 50             	mov    0x50(%eax),%edx
 84a57ca:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84a57cd:	89 90 7c 06 00 00    	mov    %edx,0x67c(%eax)
 84a57d3:	8b 45 08             	mov    0x8(%ebp),%eax
 84a57d6:	8b 40 54             	mov    0x54(%eax),%eax
 84a57d9:	89 c2                	mov    %eax,%edx
 84a57db:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84a57de:	89 90 80 06 00 00    	mov    %edx,0x680(%eax)
 84a57e4:	8b 45 08             	mov    0x8(%ebp),%eax
 84a57e7:	0f b6 50 5b          	movzbl 0x5b(%eax),%edx
 84a57eb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84a57ee:	88 90 84 06 00 00    	mov    %dl,0x684(%eax)
 84a57f4:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84a57f7:	83 c4 00             	add    $0x0,%esp
 84a57fa:	5b                   	pop    %ebx
 84a57fb:	5e                   	pop    %esi
 84a57fc:	5d                   	pop    %ebp
 84a57fd:	c3                   	ret

```

```c
// fair_pvp::CFairPvPScore::getData @ 0x84a55a8

/* fair_pvp::CFairPvPScore::getData(char*) const */

void __thiscall fair_pvp::CFairPvPScore::getData(CFairPvPScore *this,char *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  _List_const_iterator<unsigned_char> local_24 [4];
  map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
  local_20 [4];
  map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
  local_1c [4];
  _List_const_iterator local_18 [4];
  char *local_14;
  int local_10;
  
  local_14 = param_1;
  local_10 = 0;
  std::
  map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
  ::begin(local_20);
  local_10 = 0;
  while( true ) {
    std::
    map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
    ::end(local_1c);
    cVar2 = std::
            _Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>::
            operator!=((_Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>
                        *)local_20,(_Rb_tree_const_iterator *)local_1c);
    iVar7 = local_10;
    if ((cVar2 == '\0') || (99 < local_10)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    puVar3 = (undefined4 *)
             std::
             _Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>::
             operator->((_Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>
                         *)local_20);
    iVar5 = local_10;
    local_14[(iVar7 + 2) * 0x10 + 0x10] = (char)*puVar3;
    iVar4 = std::
            _Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>::
            operator->((_Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>
                        *)local_20);
    iVar7 = local_10;
    local_14[(iVar5 + 2) * 0x10 + 0x11] = *(char *)(iVar4 + 4);
    iVar5 = std::
            _Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>::
            operator->((_Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>
                        *)local_20);
    iVar7 = (iVar7 + 2) * 0x10;
    *(undefined4 *)(local_14 + iVar7 + 0x14) = *(undefined4 *)(iVar5 + 8);
    *(undefined4 *)(local_14 + iVar7 + 0x18) = *(undefined4 *)(iVar5 + 0xc);
    *(undefined4 *)(local_14 + iVar7 + 0x1c) = *(undefined4 *)(iVar5 + 0x10);
    local_14[0x2c] = local_14[0x2c] + '\x01';
    std::_Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>::
    operator++((_Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>
                *)local_20);
    local_10 = local_10 + 1;
  }
  std::list<unsigned_char,std::allocator<unsigned_char>>::begin();
  local_10 = 0;
  while( true ) {
    std::list<unsigned_char,std::allocator<unsigned_char>>::end();
    cVar2 = std::_List_const_iterator<unsigned_char>::operator!=(local_24,local_18);
    iVar7 = local_10;
    if ((cVar2 == '\0') || (9 < local_10)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    pcVar6 = (char *)std::_List_const_iterator<unsigned_char>::operator*(local_24);
    local_14[iVar7 + 0x670] = *pcVar6;
    local_10 = local_10 + 1;
    std::_List_const_iterator<unsigned_char>::operator++(local_24);
  }
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    iVar7 = local_10 * 0xc;
    *(undefined4 *)(local_14 + iVar7 + 4) = *(undefined4 *)(this + local_10 * 0xc + 0x28);
    *(undefined4 *)(local_14 + iVar7 + 8) = *(undefined4 *)(this + local_10 * 0xc + 0x2c);
    *(undefined4 *)(local_14 + iVar7 + 0xc) = *(undefined4 *)(this + local_10 * 0xc + 0x30);
  }
  *(undefined4 *)(local_14 + 0x1c) = *(undefined4 *)(this + 0x40);
  *(undefined4 *)(local_14 + 0x20) = *(undefined4 *)(this + 0x44);
  *(undefined4 *)(local_14 + 0x24) = *(undefined4 *)(this + 0x48);
  *(undefined4 *)(local_14 + 0x28) = *(undefined4 *)(this + 0x4c);
  *(undefined4 *)(local_14 + 0x67c) = *(undefined4 *)(this + 0x50);
  *(undefined4 *)(local_14 + 0x680) = *(undefined4 *)(this + 0x54);
  *(CFairPvPScore *)(local_14 + 0x684) = this[0x5b];
  return;
}

```

---

## loadData

```asm
// === 084a48f8 fair_pvp::CFairPvPScore::loadData  [0x084a48f8-0x84a55a7] ===
 84a48f8:	55                   	push   %ebp
 84a48f9:	89 e5                	mov    %esp,%ebp
 84a48fb:	57                   	push   %edi
 84a48fc:	56                   	push   %esi
 84a48fd:	53                   	push   %ebx
 84a48fe:	81 ec 2c 02 00 00    	sub    $0x22c,%esp
 84a4904:	8b 45 10             	mov    0x10(%ebp),%eax
 84a4907:	89 45 c8             	mov    %eax,-0x38(%ebp)
 84a490a:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 84a4911:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 84a4918:	e9 ff 00 00 00       	jmp    84a4a1c <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x124>
 84a491d:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84a4920:	83 c0 02             	add    $0x2,%eax
 84a4923:	c1 e0 04             	shl    $0x4,%eax
 84a4926:	03 45 c8             	add    -0x38(%ebp),%eax
 84a4929:	8d 58 14             	lea    0x14(%eax),%ebx
 84a492c:	8b 55 cc             	mov    -0x34(%ebp),%edx
 84a492f:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84a4932:	83 c2 02             	add    $0x2,%edx
 84a4935:	c1 e2 04             	shl    $0x4,%edx
 84a4938:	0f b6 44 02 11       	movzbl 0x11(%edx,%eax,1),%eax
 84a493d:	0f b6 d0             	movzbl %al,%edx
 84a4940:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 84a4943:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84a4946:	83 c1 02             	add    $0x2,%ecx
 84a4949:	c1 e1 04             	shl    $0x4,%ecx
 84a494c:	0f b6 44 01 10       	movzbl 0x10(%ecx,%eax,1),%eax
 84a4951:	0f b6 c0             	movzbl %al,%eax
 84a4954:	89 54 24 08          	mov    %edx,0x8(%esp)
 84a4958:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a495c:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84a495f:	89 04 24             	mov    %eax,(%esp)
 84a4962:	e8 d3 1a 00 00       	call   84a643a <_ZN8fair_pvp6JobKeyC1E17ENUM_CHARACTERJOBh>
 84a4967:	8d 45 a0             	lea    -0x60(%ebp),%eax
 84a496a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84a496e:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 84a4971:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a4975:	89 04 24             	mov    %eax,(%esp)
 84a4978:	e8 80 1c 00 00       	call   84a65fd <_ZSt9make_pairIN8fair_pvp6JobKeyER25FAIR_PVP_SCORE_MODE_COUNTESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 84a497d:	83 ec 04             	sub    $0x4,%esp
 84a4980:	8d 45 a0             	lea    -0x60(%ebp),%eax
 84a4983:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a4987:	8d 45 8c             	lea    -0x74(%ebp),%eax
 84a498a:	89 04 24             	mov    %eax,(%esp)
 84a498d:	e8 aa 1c 00 00       	call   84a663c <_ZNSt4pairIKN8fair_pvp6JobKeyE25FAIR_PVP_SCORE_MODE_COUNTEC1IS1_S3_EEOS_IT_T0_E>
 84a4992:	8b 45 08             	mov    0x8(%ebp),%eax
 84a4995:	8d 48 08             	lea    0x8(%eax),%ecx
 84a4998:	8d 45 84             	lea    -0x7c(%ebp),%eax
 84a499b:	8d 55 8c             	lea    -0x74(%ebp),%edx
 84a499e:	89 54 24 08          	mov    %edx,0x8(%esp)
 84a49a2:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84a49a6:	89 04 24             	mov    %eax,(%esp)
 84a49a9:	e8 d6 1c 00 00       	call   84a6684 <_ZNSt3mapIN8fair_pvp6JobKeyE25FAIR_PVP_SCORE_MODE_COUNTSt4lessIS1_ESaISt4pairIKS1_S2_EEE6insertERKS7_>
 84a49ae:	83 ec 04             	sub    $0x4,%esp
 84a49b1:	0f b6 45 88          	movzbl -0x78(%ebp),%eax
 84a49b5:	83 f0 01             	xor    $0x1,%eax
 84a49b8:	84 c0                	test   %al,%al
 84a49ba:	74 5c                	je     84a4a18 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x120>
 84a49bc:	8b 55 cc             	mov    -0x34(%ebp),%edx
 84a49bf:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84a49c2:	83 c2 02             	add    $0x2,%edx
 84a49c5:	c1 e2 04             	shl    $0x4,%edx
 84a49c8:	0f b6 44 02 11       	movzbl 0x11(%edx,%eax,1),%eax
 84a49cd:	0f b6 d0             	movzbl %al,%edx
 84a49d0:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 84a49d3:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84a49d6:	83 c1 02             	add    $0x2,%ecx
 84a49d9:	c1 e1 04             	shl    $0x4,%ecx
 84a49dc:	0f b6 44 01 10       	movzbl 0x10(%ecx,%eax,1),%eax
 84a49e1:	0f b6 c0             	movzbl %al,%eax
 84a49e4:	89 54 24 18          	mov    %edx,0x18(%esp)
 84a49e8:	89 44 24 14          	mov    %eax,0x14(%esp)
 84a49ec:	c7 44 24 10 00 df c7 	movl   $0x8c7df00,0x10(%esp)
 84a49f3:	08 
 84a49f4:	c7 44 24 0c 20 00 00 	movl   $0x20,0xc(%esp)
 84a49fb:	00 
 84a49fc:	c7 44 24 08 c0 eb c7 	movl   $0x8c7ebc0,0x8(%esp)
 84a4a03:	08 
 84a4a04:	c7 44 24 04 1f df c7 	movl   $0x8c7df1f,0x4(%esp)
 84a4a0b:	08 
 84a4a0c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84a4a13:	e8 f2 f1 62 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84a4a18:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 84a4a1c:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84a4a1f:	0f b6 40 2c          	movzbl 0x2c(%eax),%eax
 84a4a23:	0f b6 c0             	movzbl %al,%eax
 84a4a26:	3b 45 cc             	cmp    -0x34(%ebp),%eax
 84a4a29:	7e 0d                	jle    84a4a38 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x140>
 84a4a2b:	83 7d cc 63          	cmpl   $0x63,-0x34(%ebp)
 84a4a2f:	7f 07                	jg     84a4a38 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x140>
 84a4a31:	b8 01 00 00 00       	mov    $0x1,%eax
 84a4a36:	eb 05                	jmp    84a4a3d <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x145>
 84a4a38:	b8 00 00 00 00       	mov    $0x0,%eax
 84a4a3d:	84 c0                	test   %al,%al
 84a4a3f:	0f 85 d8 fe ff ff    	jne    84a491d <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x25>
 84a4a45:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 84a4a4c:	eb 36                	jmp    84a4a84 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x18c>
 84a4a4e:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84a4a51:	8b 55 c8             	mov    -0x38(%ebp),%edx
 84a4a54:	0f b6 84 02 70 06 00 	movzbl 0x670(%edx,%eax,1),%eax
 84a4a5b:	00 
 84a4a5c:	84 c0                	test   %al,%al
 84a4a5e:	74 31                	je     84a4a91 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x199>
 84a4a60:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84a4a63:	05 60 06 00 00       	add    $0x660,%eax
 84a4a68:	03 45 c8             	add    -0x38(%ebp),%eax
 84a4a6b:	8d 50 10             	lea    0x10(%eax),%edx
 84a4a6e:	8b 45 08             	mov    0x8(%ebp),%eax
 84a4a71:	83 c0 20             	add    $0x20,%eax
 84a4a74:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a4a78:	89 04 24             	mov    %eax,(%esp)
 84a4a7b:	e8 30 1c 00 00       	call   84a66b0 <_ZNSt4listIhSaIhEE9push_backERKh>
 84a4a80:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 84a4a84:	83 7d cc 09          	cmpl   $0x9,-0x34(%ebp)
 84a4a88:	0f 9e c0             	setle  %al
 84a4a8b:	84 c0                	test   %al,%al
 84a4a8d:	75 bf                	jne    84a4a4e <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x156>
 84a4a8f:	eb 01                	jmp    84a4a92 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x19a>
 84a4a91:	90                   	nop
 84a4a92:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 84a4a99:	eb 3d                	jmp    84a4ad8 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x1e0>
 84a4a9b:	8b 55 cc             	mov    -0x34(%ebp),%edx
 84a4a9e:	8b 5d cc             	mov    -0x34(%ebp),%ebx
 84a4aa1:	8b 4d 08             	mov    0x8(%ebp),%ecx
 84a4aa4:	89 d0                	mov    %edx,%eax
 84a4aa6:	01 c0                	add    %eax,%eax
 84a4aa8:	01 d0                	add    %edx,%eax
 84a4aaa:	c1 e0 02             	shl    $0x2,%eax
 84a4aad:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84a4ab0:	8d 48 20             	lea    0x20(%eax),%ecx
 84a4ab3:	8b 55 c8             	mov    -0x38(%ebp),%edx
 84a4ab6:	89 d8                	mov    %ebx,%eax
 84a4ab8:	01 c0                	add    %eax,%eax
 84a4aba:	01 d8                	add    %ebx,%eax
 84a4abc:	c1 e0 02             	shl    $0x2,%eax
 84a4abf:	8b 5c 10 04          	mov    0x4(%eax,%edx,1),%ebx
 84a4ac3:	89 59 08             	mov    %ebx,0x8(%ecx)
 84a4ac6:	8b 5c 10 08          	mov    0x8(%eax,%edx,1),%ebx
 84a4aca:	89 59 0c             	mov    %ebx,0xc(%ecx)
 84a4acd:	8b 44 10 0c          	mov    0xc(%eax,%edx,1),%eax
 84a4ad1:	89 41 10             	mov    %eax,0x10(%ecx)
 84a4ad4:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 84a4ad8:	83 7d cc 01          	cmpl   $0x1,-0x34(%ebp)
 84a4adc:	0f 9e c0             	setle  %al
 84a4adf:	84 c0                	test   %al,%al
 84a4ae1:	75 b8                	jne    84a4a9b <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x1a3>
 84a4ae3:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84a4ae6:	8b 50 1c             	mov    0x1c(%eax),%edx
 84a4ae9:	8b 45 08             	mov    0x8(%ebp),%eax
 84a4aec:	89 50 40             	mov    %edx,0x40(%eax)
 84a4aef:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84a4af2:	8b 50 20             	mov    0x20(%eax),%edx
 84a4af5:	8b 45 08             	mov    0x8(%ebp),%eax
 84a4af8:	89 50 44             	mov    %edx,0x44(%eax)
 84a4afb:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84a4afe:	8b 50 24             	mov    0x24(%eax),%edx
 84a4b01:	8b 45 08             	mov    0x8(%ebp),%eax
 84a4b04:	89 50 48             	mov    %edx,0x48(%eax)
 84a4b07:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84a4b0a:	8b 50 28             	mov    0x28(%eax),%edx
 84a4b0d:	8b 45 08             	mov    0x8(%ebp),%eax
 84a4b10:	89 50 4c             	mov    %edx,0x4c(%eax)
 84a4b13:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84a4b16:	8b 90 7c 06 00 00    	mov    0x67c(%eax),%edx
 84a4b1c:	8b 45 08             	mov    0x8(%ebp),%eax
 84a4b1f:	89 50 50             	mov    %edx,0x50(%eax)
 84a4b22:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84a4b25:	8b 80 80 06 00 00    	mov    0x680(%eax),%eax
 84a4b2b:	89 c2                	mov    %eax,%edx
 84a4b2d:	8b 45 08             	mov    0x8(%ebp),%eax
 84a4b30:	89 50 54             	mov    %edx,0x54(%eax)
 84a4b33:	e8 6f 58 c3 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84a4b38:	89 04 24             	mov    %eax,(%esp)
 84a4b3b:	e8 e0 1f c7 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 84a4b40:	83 f8 0f             	cmp    $0xf,%eax
 84a4b43:	74 12                	je     84a4b57 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x25f>
 84a4b45:	e8 5d 58 c3 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84a4b4a:	89 04 24             	mov    %eax,(%esp)
 84a4b4d:	e8 ce 1f c7 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 84a4b52:	83 f8 10             	cmp    $0x10,%eax
 84a4b55:	75 14                	jne    84a4b6b <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x273>
 84a4b57:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84a4b5a:	8b 80 80 06 00 00    	mov    0x680(%eax),%eax
 84a4b60:	85 c0                	test   %eax,%eax
 84a4b62:	75 07                	jne    84a4b6b <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x273>
 84a4b64:	b8 01 00 00 00       	mov    $0x1,%eax
 84a4b69:	eb 05                	jmp    84a4b70 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x278>
 84a4b6b:	b8 00 00 00 00       	mov    $0x0,%eax
 84a4b70:	84 c0                	test   %al,%al
 84a4b72:	0f 84 32 03 00 00    	je     84a4eaa <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x5b2>
 84a4b78:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 84a4b7e:	89 04 24             	mov    %eax,(%esp)
 84a4b81:	e8 50 fe c8 ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 84a4b86:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a4b89:	89 04 24             	mov    %eax,(%esp)
 84a4b8c:	e8 cd a5 d8 ff       	call   822f15e <_ZNK15CUserCharacInfo16getPVPResultRefREv>
 84a4b91:	8b 58 14             	mov    0x14(%eax),%ebx
 84a4b94:	e8 02 76 c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a4b99:	83 c0 68             	add    $0x68,%eax
 84a4b9c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a4ba0:	89 04 24             	mov    %eax,(%esp)
 84a4ba3:	e8 3a 15 00 00       	call   84a60e2 <_ZNK21ServerParameterScript18GetTraningSealGiveEi>
 84a4ba8:	89 85 68 ff ff ff    	mov    %eax,-0x98(%ebp)
 84a4bae:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 84a4bb4:	85 c0                	test   %eax,%eax
 84a4bb6:	7e 38                	jle    84a4bf0 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x2f8>
 84a4bb8:	c7 45 c4 f0 0c 00 00 	movl   $0xcf0,-0x3c(%ebp)
 84a4bbf:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 84a4bc5:	89 44 24 08          	mov    %eax,0x8(%esp)
 84a4bc9:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84a4bcc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a4bd0:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84a4bd3:	89 04 24             	mov    %eax,(%esp)
 84a4bd6:	e8 a7 62 c3 ff       	call   80dae82 <_ZNSt4pairIiiEC1IiRiEEOT_OT0_>
 84a4bdb:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84a4bde:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a4be2:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 84a4be8:	89 04 24             	mov    %eax,(%esp)
 84a4beb:	e8 16 8a c3 ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 84a4bf0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a4bf3:	89 04 24             	mov    %eax,(%esp)
 84a4bf6:	e8 4f a2 cf ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 84a4bfb:	89 c6                	mov    %eax,%esi
 84a4bfd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a4c00:	89 04 24             	mov    %eax,(%esp)
 84a4c03:	e8 8c c0 c6 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 84a4c08:	0f be f8             	movsbl %al,%edi
 84a4c0b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a4c0e:	89 04 24             	mov    %eax,(%esp)
 84a4c11:	e8 0a 93 c5 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 84a4c16:	89 c3                	mov    %eax,%ebx
 84a4c18:	e8 7e 75 c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a4c1d:	8d 50 68             	lea    0x68(%eax),%edx
 84a4c20:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 84a4c26:	89 44 24 10          	mov    %eax,0x10(%esp)
 84a4c2a:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84a4c2e:	89 7c 24 08          	mov    %edi,0x8(%esp)
 84a4c32:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a4c36:	89 14 24             	mov    %edx,(%esp)
 84a4c39:	e8 86 15 00 00       	call   84a61c4 <_ZN21ServerParameterScript19GetTraningFirstGiveEiiiRSt6vectorISt4pairIiiESaIS2_EE>
 84a4c3e:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 84a4c44:	89 04 24             	mov    %eax,(%esp)
 84a4c47:	e8 4e c5 c6 ff       	call   811119a <_ZNKSt6vectorISt4pairIiiESaIS1_EE5emptyEv>
 84a4c4c:	83 f0 01             	xor    $0x1,%eax
 84a4c4f:	84 c0                	test   %al,%al
 84a4c51:	0f 84 06 02 00 00    	je     84a4e5d <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x565>
 84a4c57:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 84a4c5d:	89 04 24             	mov    %eax,(%esp)
 84a4c60:	e8 47 95 be ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 84a4c65:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a4c68:	89 04 24             	mov    %eax,(%esp)
 84a4c6b:	e8 1e 56 c3 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84a4c70:	c7 44 24 1c 30 df c7 	movl   $0x8c7df30,0x1c(%esp)
 84a4c77:	08 
 84a4c78:	c7 44 24 18 44 df c7 	movl   $0x8c7df44,0x18(%esp)
 84a4c7f:	08 
 84a4c80:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 84a4c87:	00 
 84a4c88:	c7 44 24 10 08 00 00 	movl   $0x8,0x10(%esp)
 84a4c8f:	00 
 84a4c90:	c7 44 24 0c 03 00 00 	movl   $0x3,0xc(%esp)
 84a4c97:	00 
 84a4c98:	8d 95 5c ff ff ff    	lea    -0xa4(%ebp),%edx
 84a4c9e:	89 54 24 08          	mov    %edx,0x8(%esp)
 84a4ca2:	8d 95 6c ff ff ff    	lea    -0x94(%ebp),%edx
 84a4ca8:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a4cac:	89 04 24             	mov    %eax,(%esp)
 84a4caf:	e8 fe 1e 06 00       	call   8506bb2 <_ZN10CInventory18insert_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEE15eMoneyAddReason14eItemAddReasonbPKcSD_>
 84a4cb4:	89 45 d0             	mov    %eax,-0x30(%ebp)
 84a4cb7:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 84a4cbb:	7e 1a                	jle    84a4cd7 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x3df>
 84a4cbd:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 84a4cc3:	89 04 24             	mov    %eax,(%esp)
 84a4cc6:	e8 f5 94 be ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 84a4ccb:	83 f8 02             	cmp    $0x2,%eax
 84a4cce:	76 07                	jbe    84a4cd7 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x3df>
 84a4cd0:	b8 01 00 00 00       	mov    $0x1,%eax
 84a4cd5:	eb 05                	jmp    84a4cdc <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x3e4>
 84a4cd7:	b8 00 00 00 00       	mov    $0x0,%eax
 84a4cdc:	84 c0                	test   %al,%al
 84a4cde:	0f 84 6b 01 00 00    	je     84a4e4f <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x557>
 84a4ce4:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 84a4cea:	89 04 24             	mov    %eax,(%esp)
 84a4ced:	e8 5a 90 0e 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84a4cf2:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 84a4cf9:	00 
 84a4cfa:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84a4d01:	00 
 84a4d02:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 84a4d08:	89 04 24             	mov    %eax,(%esp)
 84a4d0b:	e8 ec 6b c2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84a4d10:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84a4d17:	00 
 84a4d18:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 84a4d1e:	89 04 24             	mov    %eax,(%esp)
 84a4d21:	e8 fa 6b c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84a4d26:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 84a4d2c:	89 04 24             	mov    %eax,(%esp)
 84a4d2f:	e8 18 be c6 ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 84a4d34:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
 84a4d3a:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 84a4d41:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84a4d44:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a4d48:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 84a4d4e:	89 04 24             	mov    %eax,(%esp)
 84a4d51:	e8 4e 51 c3 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84a4d56:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 84a4d5d:	eb 4c                	jmp    84a4dab <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x4b3>
 84a4d5f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84a4d62:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a4d66:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 84a4d6c:	89 04 24             	mov    %eax,(%esp)
 84a4d6f:	e8 68 94 be ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 84a4d74:	8b 18                	mov    (%eax),%ebx
 84a4d76:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a4d79:	89 04 24             	mov    %eax,(%esp)
 84a4d7c:	e8 fd 54 c3 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 84a4d81:	8d 95 50 ff ff ff    	lea    -0xb0(%ebp),%edx
 84a4d87:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84a4d8b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84a4d8f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84a4d96:	00 
 84a4d97:	89 04 24             	mov    %eax,(%esp)
 84a4d9a:	e8 1d 79 05 00       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 84a4d9f:	84 c0                	test   %al,%al
 84a4da1:	74 04                	je     84a4da7 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x4af>
 84a4da3:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 84a4da7:	83 45 d8 03          	addl   $0x3,-0x28(%ebp)
 84a4dab:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 84a4db1:	89 04 24             	mov    %eax,(%esp)
 84a4db4:	e8 07 94 be ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 84a4db9:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 84a4dbc:	0f 97 c0             	seta   %al
 84a4dbf:	84 c0                	test   %al,%al
 84a4dc1:	75 9c                	jne    84a4d5f <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x467>
 84a4dc3:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84a4dc6:	89 44 24 08          	mov    %eax,0x8(%esp)
 84a4dca:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 84a4dd0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a4dd4:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 84a4dda:	89 04 24             	mov    %eax,(%esp)
 84a4ddd:	e8 26 1b c7 ff       	call   8116908 <_ZN18InterfacePacketBuf9put_shortERii>
 84a4de2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84a4de9:	00 
 84a4dea:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 84a4df0:	89 04 24             	mov    %eax,(%esp)
 84a4df3:	e8 60 6b c2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84a4df8:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 84a4dfe:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a4e02:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a4e05:	89 04 24             	mov    %eax,(%esp)
 84a4e08:	e8 ad 37 1a 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84a4e0d:	eb 18                	jmp    84a4e27 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x52f>
 84a4e0f:	89 d3                	mov    %edx,%ebx
 84a4e11:	89 c6                	mov    %eax,%esi
 84a4e13:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 84a4e19:	89 04 24             	mov    %eax,(%esp)
 84a4e1c:	e8 5f 90 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84a4e21:	89 f0                	mov    %esi,%eax
 84a4e23:	89 da                	mov    %ebx,%edx
 84a4e25:	eb 10                	jmp    84a4e37 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x53f>
 84a4e27:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 84a4e2d:	89 04 24             	mov    %eax,(%esp)
 84a4e30:	e8 4b 90 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84a4e35:	eb 18                	jmp    84a4e4f <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x557>
 84a4e37:	89 d3                	mov    %edx,%ebx
 84a4e39:	89 c6                	mov    %eax,%esi
 84a4e3b:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 84a4e41:	89 04 24             	mov    %eax,(%esp)
 84a4e44:	e8 91 ef bd ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 84a4e49:	89 f0                	mov    %esi,%eax
 84a4e4b:	89 da                	mov    %ebx,%edx
 84a4e4d:	eb 3d                	jmp    84a4e8c <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x594>
 84a4e4f:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 84a4e55:	89 04 24             	mov    %eax,(%esp)
 84a4e58:	e8 7d ef bd ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 84a4e5d:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84a4e64:	e8 35 6e c2 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84a4e69:	89 c2                	mov    %eax,%edx
 84a4e6b:	8b 45 08             	mov    0x8(%ebp),%eax
 84a4e6e:	89 50 54             	mov    %edx,0x54(%eax)
 84a4e71:	8b 45 08             	mov    0x8(%ebp),%eax
 84a4e74:	89 04 24             	mov    %eax,(%esp)
 84a4e77:	e8 48 3d c2 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 84a4e7c:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 84a4e82:	89 04 24             	mov    %eax,(%esp)
 84a4e85:	e8 60 fb c8 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 84a4e8a:	eb 1e                	jmp    84a4eaa <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x5b2>
 84a4e8c:	89 d3                	mov    %edx,%ebx
 84a4e8e:	89 c6                	mov    %eax,%esi
 84a4e90:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 84a4e96:	89 04 24             	mov    %eax,(%esp)
 84a4e99:	e8 4c fb c8 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 84a4e9e:	89 f0                	mov    %esi,%eax
 84a4ea0:	89 da                	mov    %ebx,%edx
 84a4ea2:	89 04 24             	mov    %eax,(%esp)
 84a4ea5:	e8 a6 e8 63 00       	call   8ae3750 <_Unwind_Resume>
 84a4eaa:	e8 ec 72 c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a4eaf:	0f b7 80 e0 49 00 00 	movzwl 0x49e0(%eax),%eax
 84a4eb6:	0f b7 d0             	movzwl %ax,%edx
 84a4eb9:	8b 45 08             	mov    0x8(%ebp),%eax
 84a4ebc:	8b 40 50             	mov    0x50(%eax),%eax
 84a4ebf:	39 c2                	cmp    %eax,%edx
 84a4ec1:	0f 96 c0             	setbe  %al
 84a4ec4:	84 c0                	test   %al,%al
 84a4ec6:	74 09                	je     84a4ed1 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x5d9>
 84a4ec8:	8b 45 08             	mov    0x8(%ebp),%eax
 84a4ecb:	c6 40 5a 00          	movb   $0x0,0x5a(%eax)
 84a4ecf:	eb 1c                	jmp    84a4eed <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x5f5>
 84a4ed1:	e8 c5 72 c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a4ed6:	0f b7 80 e0 49 00 00 	movzwl 0x49e0(%eax),%eax
 84a4edd:	89 c2                	mov    %eax,%edx
 84a4edf:	8b 45 08             	mov    0x8(%ebp),%eax
 84a4ee2:	8b 40 50             	mov    0x50(%eax),%eax
 84a4ee5:	28 c2                	sub    %al,%dl
 84a4ee7:	8b 45 08             	mov    0x8(%ebp),%eax
 84a4eea:	88 50 5a             	mov    %dl,0x5a(%eax)
 84a4eed:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 84a4ef3:	89 04 24             	mov    %eax,(%esp)
 84a4ef6:	e8 51 8e 0e 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84a4efb:	c7 44 24 08 52 01 00 	movl   $0x152,0x8(%esp)
 84a4f02:	00 
 84a4f03:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84a4f0a:	00 
 84a4f0b:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 84a4f11:	89 04 24             	mov    %eax,(%esp)
 84a4f14:	e8 e3 69 c2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84a4f19:	8b 45 08             	mov    0x8(%ebp),%eax
 84a4f1c:	0f b6 40 5a          	movzbl 0x5a(%eax),%eax
 84a4f20:	0f b6 c0             	movzbl %al,%eax
 84a4f23:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a4f27:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 84a4f2d:	89 04 24             	mov    %eax,(%esp)
 84a4f30:	e8 6f 4f c3 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84a4f35:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84a4f3c:	00 
 84a4f3d:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 84a4f43:	89 04 24             	mov    %eax,(%esp)
 84a4f46:	e8 0d 6a c2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84a4f4b:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 84a4f51:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a4f55:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a4f58:	89 04 24             	mov    %eax,(%esp)
 84a4f5b:	e8 5a 36 1a 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84a4f60:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84a4f63:	0f b6 90 84 06 00 00 	movzbl 0x684(%eax),%edx
 84a4f6a:	8b 45 08             	mov    0x8(%ebp),%eax
 84a4f6d:	88 50 5b             	mov    %dl,0x5b(%eax)
 84a4f70:	e8 32 54 c3 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84a4f75:	89 04 24             	mov    %eax,(%esp)
 84a4f78:	e8 a3 1b c7 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 84a4f7d:	83 f8 0f             	cmp    $0xf,%eax
 84a4f80:	74 12                	je     84a4f94 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x69c>
 84a4f82:	e8 20 54 c3 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84a4f87:	89 04 24             	mov    %eax,(%esp)
 84a4f8a:	e8 91 1b c7 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 84a4f8f:	83 f8 10             	cmp    $0x10,%eax
 84a4f92:	75 07                	jne    84a4f9b <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x6a3>
 84a4f94:	b8 01 00 00 00       	mov    $0x1,%eax
 84a4f99:	eb 05                	jmp    84a4fa0 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x6a8>
 84a4f9b:	b8 00 00 00 00       	mov    $0x0,%eax
 84a4fa0:	84 c0                	test   %al,%al
 84a4fa2:	0f 84 8b 00 00 00    	je     84a5033 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x73b>
 84a4fa8:	8b 45 08             	mov    0x8(%ebp),%eax
 84a4fab:	0f b6 40 5b          	movzbl 0x5b(%eax),%eax
 84a4faf:	0f b6 f0             	movzbl %al,%esi
 84a4fb2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a4fb5:	89 04 24             	mov    %eax,(%esp)
 84a4fb8:	e8 8d 9e cf ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 84a4fbd:	89 c3                	mov    %eax,%ebx
 84a4fbf:	e8 d7 71 c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a4fc4:	83 c0 68             	add    $0x68,%eax
 84a4fc7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a4fcb:	89 04 24             	mov    %eax,(%esp)
 84a4fce:	e8 29 5e d8 ff       	call   822adfc <_ZN21ServerParameterScript17get_pvp_item_giveEi>
 84a4fd3:	39 c6                	cmp    %eax,%esi
 84a4fd5:	0f 9e c0             	setle  %al
 84a4fd8:	84 c0                	test   %al,%al
 84a4fda:	74 57                	je     84a5033 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x73b>
 84a4fdc:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 84a4fe2:	89 04 24             	mov    %eax,(%esp)
 84a4fe5:	e8 fc 68 c2 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84a4fea:	c7 44 24 08 61 01 00 	movl   $0x161,0x8(%esp)
 84a4ff1:	00 
 84a4ff2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84a4ff9:	00 
 84a4ffa:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 84a5000:	89 04 24             	mov    %eax,(%esp)
 84a5003:	e8 f4 68 c2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84a5008:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84a500f:	00 
 84a5010:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 84a5016:	89 04 24             	mov    %eax,(%esp)
 84a5019:	e8 3a 69 c2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84a501e:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 84a5024:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a5028:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a502b:	89 04 24             	mov    %eax,(%esp)
 84a502e:	e8 87 35 1a 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84a5033:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5036:	8b 40 54             	mov    0x54(%eax),%eax
 84a5039:	85 c0                	test   %eax,%eax
 84a503b:	0f 84 26 05 00 00    	je     84a5567 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0xc6f>
 84a5041:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5044:	8b 40 54             	mov    0x54(%eax),%eax
 84a5047:	3d ef 89 dd 4d       	cmp    $0x4ddd89ef,%eax
 84a504c:	0f 87 15 05 00 00    	ja     84a5567 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0xc6f>
 84a5052:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 84a5059:	8b 45 08             	mov    0x8(%ebp),%eax
 84a505c:	8b 40 28             	mov    0x28(%eax),%eax
 84a505f:	8d 14 00             	lea    (%eax,%eax,1),%edx
 84a5062:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84a5065:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84a5068:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84a506b:	8b 45 08             	mov    0x8(%ebp),%eax
 84a506e:	8b 50 2c             	mov    0x2c(%eax),%edx
 84a5071:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5074:	8b 40 30             	mov    0x30(%eax),%eax
 84a5077:	01 c2                	add    %eax,%edx
 84a5079:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84a507c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84a507f:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84a5082:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5085:	8b 50 34             	mov    0x34(%eax),%edx
 84a5088:	89 d0                	mov    %edx,%eax
 84a508a:	01 c0                	add    %eax,%eax
 84a508c:	8d 14 10             	lea    (%eax,%edx,1),%edx
 84a508f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84a5092:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84a5095:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84a5098:	8b 45 08             	mov    0x8(%ebp),%eax
 84a509b:	8b 50 38             	mov    0x38(%eax),%edx
 84a509e:	8b 45 08             	mov    0x8(%ebp),%eax
 84a50a1:	8b 40 3c             	mov    0x3c(%eax),%eax
 84a50a4:	01 c2                	add    %eax,%edx
 84a50a6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84a50a9:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84a50ac:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84a50af:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 84a50b6:	8b 45 08             	mov    0x8(%ebp),%eax
 84a50b9:	8b 50 28             	mov    0x28(%eax),%edx
 84a50bc:	8b 45 08             	mov    0x8(%ebp),%eax
 84a50bf:	8b 40 2c             	mov    0x2c(%eax),%eax
 84a50c2:	01 c2                	add    %eax,%edx
 84a50c4:	8b 45 08             	mov    0x8(%ebp),%eax
 84a50c7:	8b 40 30             	mov    0x30(%eax),%eax
 84a50ca:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84a50cd:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84a50d0:	83 7d e0 09          	cmpl   $0x9,-0x20(%ebp)
 84a50d4:	7e 0d                	jle    84a50e3 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x7eb>
 84a50d6:	83 7d e0 31          	cmpl   $0x31,-0x20(%ebp)
 84a50da:	7f 07                	jg     84a50e3 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x7eb>
 84a50dc:	b8 0a 00 00 00       	mov    $0xa,%eax
 84a50e1:	eb 05                	jmp    84a50e8 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x7f0>
 84a50e3:	b8 00 00 00 00       	mov    $0x0,%eax
 84a50e8:	01 45 dc             	add    %eax,-0x24(%ebp)
 84a50eb:	83 7d e0 31          	cmpl   $0x31,-0x20(%ebp)
 84a50ef:	7e 07                	jle    84a50f8 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x800>
 84a50f1:	b8 3c 00 00 00       	mov    $0x3c,%eax
 84a50f6:	eb 05                	jmp    84a50fd <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x805>
 84a50f8:	b8 00 00 00 00       	mov    $0x0,%eax
 84a50fd:	01 45 dc             	add    %eax,-0x24(%ebp)
 84a5100:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5103:	8b 40 28             	mov    0x28(%eax),%eax
 84a5106:	83 f8 09             	cmp    $0x9,%eax
 84a5109:	76 12                	jbe    84a511d <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x825>
 84a510b:	8b 45 08             	mov    0x8(%ebp),%eax
 84a510e:	8b 40 28             	mov    0x28(%eax),%eax
 84a5111:	83 f8 31             	cmp    $0x31,%eax
 84a5114:	77 07                	ja     84a511d <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x825>
 84a5116:	b8 0f 00 00 00       	mov    $0xf,%eax
 84a511b:	eb 05                	jmp    84a5122 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x82a>
 84a511d:	b8 00 00 00 00       	mov    $0x0,%eax
 84a5122:	01 45 dc             	add    %eax,-0x24(%ebp)
 84a5125:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5128:	8b 40 28             	mov    0x28(%eax),%eax
 84a512b:	83 f8 31             	cmp    $0x31,%eax
 84a512e:	76 07                	jbe    84a5137 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x83f>
 84a5130:	b8 5a 00 00 00       	mov    $0x5a,%eax
 84a5135:	eb 05                	jmp    84a513c <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x844>
 84a5137:	b8 00 00 00 00       	mov    $0x0,%eax
 84a513c:	01 45 dc             	add    %eax,-0x24(%ebp)
 84a513f:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5142:	8b 50 34             	mov    0x34(%eax),%edx
 84a5145:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5148:	8b 40 38             	mov    0x38(%eax),%eax
 84a514b:	01 c2                	add    %eax,%edx
 84a514d:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5150:	8b 40 3c             	mov    0x3c(%eax),%eax
 84a5153:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84a5156:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84a5159:	83 7d e0 09          	cmpl   $0x9,-0x20(%ebp)
 84a515d:	7e 0d                	jle    84a516c <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x874>
 84a515f:	83 7d e0 31          	cmpl   $0x31,-0x20(%ebp)
 84a5163:	7f 07                	jg     84a516c <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x874>
 84a5165:	b8 0a 00 00 00       	mov    $0xa,%eax
 84a516a:	eb 05                	jmp    84a5171 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x879>
 84a516c:	b8 00 00 00 00       	mov    $0x0,%eax
 84a5171:	01 45 dc             	add    %eax,-0x24(%ebp)
 84a5174:	83 7d e0 31          	cmpl   $0x31,-0x20(%ebp)
 84a5178:	7e 07                	jle    84a5181 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x889>
 84a517a:	b8 3c 00 00 00       	mov    $0x3c,%eax
 84a517f:	eb 05                	jmp    84a5186 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x88e>
 84a5181:	b8 00 00 00 00       	mov    $0x0,%eax
 84a5186:	01 45 dc             	add    %eax,-0x24(%ebp)
 84a5189:	8b 45 08             	mov    0x8(%ebp),%eax
 84a518c:	8b 40 34             	mov    0x34(%eax),%eax
 84a518f:	83 f8 09             	cmp    $0x9,%eax
 84a5192:	76 12                	jbe    84a51a6 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x8ae>
 84a5194:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5197:	8b 40 34             	mov    0x34(%eax),%eax
 84a519a:	83 f8 31             	cmp    $0x31,%eax
 84a519d:	77 07                	ja     84a51a6 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x8ae>
 84a519f:	b8 0f 00 00 00       	mov    $0xf,%eax
 84a51a4:	eb 05                	jmp    84a51ab <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x8b3>
 84a51a6:	b8 00 00 00 00       	mov    $0x0,%eax
 84a51ab:	01 45 dc             	add    %eax,-0x24(%ebp)
 84a51ae:	8b 45 08             	mov    0x8(%ebp),%eax
 84a51b1:	8b 40 34             	mov    0x34(%eax),%eax
 84a51b4:	83 f8 31             	cmp    $0x31,%eax
 84a51b7:	76 07                	jbe    84a51c0 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x8c8>
 84a51b9:	b8 5a 00 00 00       	mov    $0x5a,%eax
 84a51be:	eb 05                	jmp    84a51c5 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x8cd>
 84a51c0:	b8 00 00 00 00       	mov    $0x0,%eax
 84a51c5:	01 45 dc             	add    %eax,-0x24(%ebp)
 84a51c8:	8b 45 08             	mov    0x8(%ebp),%eax
 84a51cb:	8b 40 28             	mov    0x28(%eax),%eax
 84a51ce:	8d 14 00             	lea    (%eax,%eax,1),%edx
 84a51d1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84a51d4:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84a51d7:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84a51da:	8b 45 08             	mov    0x8(%ebp),%eax
 84a51dd:	8b 40 34             	mov    0x34(%eax),%eax
 84a51e0:	8d 14 00             	lea    (%eax,%eax,1),%edx
 84a51e3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84a51e6:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84a51e9:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84a51ec:	8d 85 fa fe ff ff    	lea    -0x106(%ebp),%eax
 84a51f2:	89 04 24             	mov    %eax,(%esp)
 84a51f5:	e8 5a 66 c2 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 84a51fa:	8d 95 fa fd ff ff    	lea    -0x206(%ebp),%edx
 84a5200:	bb 00 01 00 00       	mov    $0x100,%ebx
 84a5205:	b8 00 00 00 00       	mov    $0x0,%eax
 84a520a:	89 d1                	mov    %edx,%ecx
 84a520c:	83 e1 02             	and    $0x2,%ecx
 84a520f:	85 c9                	test   %ecx,%ecx
 84a5211:	74 09                	je     84a521c <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x924>
 84a5213:	66 89 02             	mov    %ax,(%edx)
 84a5216:	83 c2 02             	add    $0x2,%edx
 84a5219:	83 eb 02             	sub    $0x2,%ebx
 84a521c:	89 d9                	mov    %ebx,%ecx
 84a521e:	c1 e9 02             	shr    $0x2,%ecx
 84a5221:	89 d7                	mov    %edx,%edi
 84a5223:	f3 ab                	rep stos %eax,%es:(%edi)
 84a5225:	89 fa                	mov    %edi,%edx
 84a5227:	89 d9                	mov    %ebx,%ecx
 84a5229:	83 e1 02             	and    $0x2,%ecx
 84a522c:	85 c9                	test   %ecx,%ecx
 84a522e:	74 06                	je     84a5236 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x93e>
 84a5230:	66 89 02             	mov    %ax,(%edx)
 84a5233:	83 c2 02             	add    $0x2,%edx
 84a5236:	89 d9                	mov    %ebx,%ecx
 84a5238:	83 e1 01             	and    $0x1,%ecx
 84a523b:	85 c9                	test   %ecx,%ecx
 84a523d:	74 05                	je     84a5244 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x94c>
 84a523f:	88 02                	mov    %al,(%edx)
 84a5241:	83 c2 01             	add    $0x1,%edx
 84a5244:	8d 85 37 ff ff ff    	lea    -0xc9(%ebp),%eax
 84a524a:	ba 15 00 00 00       	mov    $0x15,%edx
 84a524f:	b9 00 00 00 00       	mov    $0x0,%ecx
 84a5254:	89 c3                	mov    %eax,%ebx
 84a5256:	83 e3 01             	and    $0x1,%ebx
 84a5259:	85 db                	test   %ebx,%ebx
 84a525b:	74 08                	je     84a5265 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x96d>
 84a525d:	88 08                	mov    %cl,(%eax)
 84a525f:	83 c0 01             	add    $0x1,%eax
 84a5262:	83 ea 01             	sub    $0x1,%edx
 84a5265:	89 c3                	mov    %eax,%ebx
 84a5267:	83 e3 02             	and    $0x2,%ebx
 84a526a:	85 db                	test   %ebx,%ebx
 84a526c:	74 09                	je     84a5277 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x97f>
 84a526e:	66 89 08             	mov    %cx,(%eax)
 84a5271:	83 c0 02             	add    $0x2,%eax
 84a5274:	83 ea 02             	sub    $0x2,%edx
 84a5277:	89 d6                	mov    %edx,%esi
 84a5279:	83 e6 fc             	and    $0xfffffffc,%esi
 84a527c:	bb 00 00 00 00       	mov    $0x0,%ebx
 84a5281:	89 0c 18             	mov    %ecx,(%eax,%ebx,1)
 84a5284:	83 c3 04             	add    $0x4,%ebx
 84a5287:	39 f3                	cmp    %esi,%ebx
 84a5289:	72 f6                	jb     84a5281 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x989>
 84a528b:	01 d8                	add    %ebx,%eax
 84a528d:	89 d3                	mov    %edx,%ebx
 84a528f:	83 e3 02             	and    $0x2,%ebx
 84a5292:	85 db                	test   %ebx,%ebx
 84a5294:	74 06                	je     84a529c <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x9a4>
 84a5296:	66 89 08             	mov    %cx,(%eax)
 84a5299:	83 c0 02             	add    $0x2,%eax
 84a529c:	83 e2 01             	and    $0x1,%edx
 84a529f:	85 d2                	test   %edx,%edx
 84a52a1:	74 05                	je     84a52a8 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x9b0>
 84a52a3:	88 08                	mov    %cl,(%eax)
 84a52a5:	83 c0 01             	add    $0x1,%eax
 84a52a8:	c7 85 fc fe ff ff f0 	movl   $0xcf0,-0x104(%ebp)
 84a52af:	0c 00 00 
 84a52b2:	8b 85 fc fe ff ff    	mov    -0x104(%ebp),%eax
 84a52b8:	89 c3                	mov    %eax,%ebx
 84a52ba:	e8 dc 6e c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a52bf:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a52c3:	89 04 24             	mov    %eax,(%esp)
 84a52c6:	e8 67 a7 eb ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84a52cb:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84a52ce:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 84a52d2:	75 0a                	jne    84a52de <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0x9e6>
 84a52d4:	bb 00 00 00 00       	mov    $0x0,%ebx
 84a52d9:	e9 ae 02 00 00       	jmp    84a558c <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0xc94>
 84a52de:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84a52e1:	05 c8 00 00 00       	add    $0xc8,%eax
 84a52e6:	89 85 01 ff ff ff    	mov    %eax,-0xff(%ebp)
 84a52ec:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84a52ef:	8b 00                	mov    (%eax),%eax
 84a52f1:	83 c0 08             	add    $0x8,%eax
 84a52f4:	8b 10                	mov    (%eax),%edx
 84a52f6:	8d 85 fa fe ff ff    	lea    -0x106(%ebp),%eax
 84a52fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a5300:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84a5303:	89 04 24             	mov    %eax,(%esp)
 84a5306:	ff d2                	call   *%edx
 84a5308:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84a530f:	00 
 84a5310:	c7 44 24 08 44 df c7 	movl   $0x8c7df44,0x8(%esp)
 84a5317:	08 
 84a5318:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84a531f:	00 
 84a5320:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84a5327:	e8 d2 04 60 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84a532c:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 84a5333:	00 
 84a5334:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a5338:	8d 85 37 ff ff ff    	lea    -0xc9(%ebp),%eax
 84a533e:	89 04 24             	mov    %eax,(%esp)
 84a5341:	e8 8a 85 bd ff       	call   807d8d0 <strncpy@plt>
 84a5346:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84a534d:	00 
 84a534e:	c7 44 24 08 58 df c7 	movl   $0x8c7df58,0x8(%esp)
 84a5355:	08 
 84a5356:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84a535d:	00 
 84a535e:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84a5365:	e8 94 04 60 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84a536a:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 84a5371:	00 
 84a5372:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a5376:	8d 85 fa fd ff ff    	lea    -0x206(%ebp),%eax
 84a537c:	89 04 24             	mov    %eax,(%esp)
 84a537f:	e8 4c 85 bd ff       	call   807d8d0 <strncpy@plt>
 84a5384:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a5387:	89 04 24             	mov    %eax,(%esp)
 84a538a:	e8 01 69 c2 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84a538f:	89 c3                	mov    %eax,%ebx
 84a5391:	8d 85 fa fd ff ff    	lea    -0x206(%ebp),%eax
 84a5397:	89 04 24             	mov    %eax,(%esp)
 84a539a:	e8 11 90 bd ff       	call   807e3b0 <strlen@plt>
 84a539f:	89 c6                	mov    %eax,%esi
 84a53a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a53a4:	89 04 24             	mov    %eax,(%esp)
 84a53a7:	e8 a2 68 c2 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84a53ac:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 84a53b3:	00 
 84a53b4:	c7 44 24 20 01 00 00 	movl   $0x1,0x20(%esp)
 84a53bb:	00 
 84a53bc:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 84a53c0:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 84a53c7:	00 
 84a53c8:	89 74 24 14          	mov    %esi,0x14(%esp)
 84a53cc:	8d 95 fa fd ff ff    	lea    -0x206(%ebp),%edx
 84a53d2:	89 54 24 10          	mov    %edx,0x10(%esp)
 84a53d6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84a53da:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84a53e1:	00 
 84a53e2:	8d 85 fa fe ff ff    	lea    -0x106(%ebp),%eax
 84a53e8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a53ec:	8d 85 37 ff ff ff    	lea    -0xc9(%ebp),%eax
 84a53f2:	89 04 24             	mov    %eax,(%esp)
 84a53f5:	e8 ee 01 0b 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 84a53fa:	c7 85 fc fe ff ff 88 	movl   $0x289788,-0x104(%ebp)
 84a5401:	97 28 00 
 84a5404:	8b 85 fc fe ff ff    	mov    -0x104(%ebp),%eax
 84a540a:	89 c3                	mov    %eax,%ebx
 84a540c:	e8 8a 6d c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a5411:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a5415:	89 04 24             	mov    %eax,(%esp)
 84a5418:	e8 15 a6 eb ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84a541d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84a5420:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 84a5424:	75 0a                	jne    84a5430 <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0xb38>
 84a5426:	bb 00 00 00 00       	mov    $0x0,%ebx
 84a542b:	e9 5c 01 00 00       	jmp    84a558c <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0xc94>
 84a5430:	c7 85 01 ff ff ff 01 	movl   $0x1,-0xff(%ebp)
 84a5437:	00 00 00 
 84a543a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84a543d:	8b 00                	mov    (%eax),%eax
 84a543f:	83 c0 08             	add    $0x8,%eax
 84a5442:	8b 10                	mov    (%eax),%edx
 84a5444:	8d 85 fa fe ff ff    	lea    -0x106(%ebp),%eax
 84a544a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a544e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84a5451:	89 04 24             	mov    %eax,(%esp)
 84a5454:	ff d2                	call   *%edx
 84a5456:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84a545d:	00 
 84a545e:	c7 44 24 08 44 df c7 	movl   $0x8c7df44,0x8(%esp)
 84a5465:	08 
 84a5466:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84a546d:	00 
 84a546e:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84a5475:	e8 84 03 60 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84a547a:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 84a5481:	00 
 84a5482:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a5486:	8d 85 37 ff ff ff    	lea    -0xc9(%ebp),%eax
 84a548c:	89 04 24             	mov    %eax,(%esp)
 84a548f:	e8 3c 84 bd ff       	call   807d8d0 <strncpy@plt>
 84a5494:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84a549b:	00 
 84a549c:	c7 44 24 08 6c df c7 	movl   $0x8c7df6c,0x8(%esp)
 84a54a3:	08 
 84a54a4:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84a54ab:	00 
 84a54ac:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84a54b3:	e8 46 03 60 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84a54b8:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 84a54bf:	00 
 84a54c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a54c4:	8d 85 fa fd ff ff    	lea    -0x206(%ebp),%eax
 84a54ca:	89 04 24             	mov    %eax,(%esp)
 84a54cd:	e8 fe 83 bd ff       	call   807d8d0 <strncpy@plt>
 84a54d2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a54d5:	89 04 24             	mov    %eax,(%esp)
 84a54d8:	e8 b3 67 c2 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84a54dd:	89 c3                	mov    %eax,%ebx
 84a54df:	8d 85 fa fd ff ff    	lea    -0x206(%ebp),%eax
 84a54e5:	89 04 24             	mov    %eax,(%esp)
 84a54e8:	e8 c3 8e bd ff       	call   807e3b0 <strlen@plt>
 84a54ed:	89 c6                	mov    %eax,%esi
 84a54ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a54f2:	89 04 24             	mov    %eax,(%esp)
 84a54f5:	e8 54 67 c2 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84a54fa:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 84a5501:	00 
 84a5502:	c7 44 24 20 01 00 00 	movl   $0x1,0x20(%esp)
 84a5509:	00 
 84a550a:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 84a550e:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 84a5515:	00 
 84a5516:	89 74 24 14          	mov    %esi,0x14(%esp)
 84a551a:	8d 95 fa fd ff ff    	lea    -0x206(%ebp),%edx
 84a5520:	89 54 24 10          	mov    %edx,0x10(%esp)
 84a5524:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84a5528:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84a552f:	00 
 84a5530:	8d 85 fa fe ff ff    	lea    -0x106(%ebp),%eax
 84a5536:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a553a:	8d 85 37 ff ff ff    	lea    -0xc9(%ebp),%eax
 84a5540:	89 04 24             	mov    %eax,(%esp)
 84a5543:	e8 a0 00 0b 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 84a5548:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84a554f:	e8 4a 67 c2 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84a5554:	89 c2                	mov    %eax,%edx
 84a5556:	8b 45 08             	mov    0x8(%ebp),%eax
 84a5559:	89 50 54             	mov    %edx,0x54(%eax)
 84a555c:	8b 45 08             	mov    0x8(%ebp),%eax
 84a555f:	89 04 24             	mov    %eax,(%esp)
 84a5562:	e8 5d 36 c2 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 84a5567:	bb 01 00 00 00       	mov    $0x1,%ebx
 84a556c:	eb 1e                	jmp    84a558c <_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc+0xc94>
 84a556e:	89 d3                	mov    %edx,%ebx
 84a5570:	89 c6                	mov    %eax,%esi
 84a5572:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 84a5578:	89 04 24             	mov    %eax,(%esp)
 84a557b:	e8 00 89 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84a5580:	89 f0                	mov    %esi,%eax
 84a5582:	89 da                	mov    %ebx,%edx
 84a5584:	89 04 24             	mov    %eax,(%esp)
 84a5587:	e8 c4 e1 63 00       	call   8ae3750 <_Unwind_Resume>
 84a558c:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 84a5592:	89 04 24             	mov    %eax,(%esp)
 84a5595:	e8 e6 88 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84a559a:	89 d8                	mov    %ebx,%eax
 84a559c:	8d 65 f4             	lea    -0xc(%ebp),%esp
 84a559f:	83 c4 00             	add    $0x0,%esp
 84a55a2:	5b                   	pop    %ebx
 84a55a3:	5e                   	pop    %esi
 84a55a4:	5f                   	pop    %edi
 84a55a5:	5d                   	pop    %ebp
 84a55a6:	c3                   	ret
 84a55a7:	90                   	nop

```

```c
// fair_pvp::CFairPvPScore::loadData @ 0x84a48f8

/* WARNING: Removing unreachable block (ram,0x084a523f) */
/* fair_pvp::CFairPvPScore::loadData(CUser*, char*) */

undefined4 __thiscall
fair_pvp::CFairPvPScore::loadData(CFairPvPScore *this,CUser *param_1,char *param_2)

{
  char *pcVar1;
  CFairPvPScore CVar2;
  char cVar3;
  GameWorld *pGVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  CInventory *pCVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  char *pcVar17;
  CDataManager *pCVar18;
  size_t sVar19;
  undefined4 uVar20;
  uint uVar21;
  bool bVar22;
  byte bVar23;
  char local_20a [256];
  Inven_Item local_10a [2];
  undefined4 local_108;
  int local_103;
  char local_cd;
  char local_cc [20];
  int local_b8;
  PacketGuard local_b4 [12];
  vector<int,std::allocator<int>> local_a8 [12];
  int local_9c;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_98 [12];
  PacketGuard local_8c [12];
  pair local_80 [4];
  char local_7c;
  pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT> local_78 [20];
  JobKey local_64 [20];
  JobKey local_50 [8];
  pair<int,int> local_48 [8];
  int local_40;
  char *local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int *local_20;
  
  bVar23 = 0;
  local_3c = param_2;
  local_38 = 0;
  while( true ) {
    if ((local_38 < (int)(uint)(byte)local_3c[0x2c]) && (local_38 < 100)) {
      bVar22 = true;
    }
    else {
      bVar22 = false;
    }
    if (!bVar22) break;
    JobKey::JobKey(local_50,local_3c[(local_38 + 2) * 0x10 + 0x10],
                   local_3c[(local_38 + 2) * 0x10 + 0x11]);
    std::make_pair<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT&>
              (local_64,(FAIR_PVP_SCORE_MODE_COUNT *)local_50);
    std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>::
    pair<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT>(local_78,local_64);
    std::
    map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
    ::insert(local_80);
    if (local_7c != '\x01') {
      LogManager::logFormat
                (1,"FairPvPScore.cpp",
                 "virtual bool fair_pvp::CFairPvPScore::loadData(CUser*, char*)",0x20,
                 "job_score_.insert error(%d,%d)",(uint)(byte)local_3c[(local_38 + 2) * 0x10 + 0x10]
                 ,(uint)(byte)local_3c[(local_38 + 2) * 0x10 + 0x11]);
    }
    local_38 = local_38 + 1;
  }
  for (local_38 = 0; (local_38 < 10 && (local_3c[local_38 + 0x670] != '\0'));
      local_38 = local_38 + 1) {
    std::list<unsigned_char,std::allocator<unsigned_char>>::push_back
              ((list<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x20),
               (uchar *)(local_3c + local_38 + 0x670));
  }
  for (local_38 = 0; local_38 < 2; local_38 = local_38 + 1) {
    iVar5 = local_38 * 0xc;
    *(undefined4 *)(this + local_38 * 0xc + 0x28) = *(undefined4 *)(local_3c + iVar5 + 4);
    *(undefined4 *)(this + local_38 * 0xc + 0x2c) = *(undefined4 *)(local_3c + iVar5 + 8);
    *(undefined4 *)(this + local_38 * 0xc + 0x30) = *(undefined4 *)(local_3c + iVar5 + 0xc);
  }
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(local_3c + 0x1c);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(local_3c + 0x20);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(local_3c + 0x24);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(local_3c + 0x28);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(local_3c + 0x67c);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(local_3c + 0x680);
  pGVar4 = (GameWorld *)G_GameWorld();
  iVar5 = GameWorld::GetChannelType(pGVar4);
  if (iVar5 == 0xf) {
LAB_084a4b57:
    if (*(int *)(local_3c + 0x680) != 0) goto LAB_084a4b6b;
    bVar22 = true;
  }
  else {
    pGVar4 = (GameWorld *)G_GameWorld();
    iVar5 = GameWorld::GetChannelType(pGVar4);
    if (iVar5 == 0x10) goto LAB_084a4b57;
LAB_084a4b6b:
    bVar22 = false;
  }
  if (bVar22) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_98);
    CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)param_1);
                    /* try { // try from 084a4b94 to 084a4c64 has its CatchHandler @ 084a4e8c */
    iVar5 = G_CDataManager();
    local_9c = ServerParameterScript::GetTraningSealGive(iVar5 + 0x68);
    if (0 < local_9c) {
      local_40 = 0xcf0;
      std::pair<int,int>::pair<int,int&>(local_48,&local_40,&local_9c);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                (local_98,local_48);
    }
    iVar5 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1);
    cVar3 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
    iVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    iVar7 = G_CDataManager();
    ServerParameterScript::GetTraningFirstGive
              ((ServerParameterScript *)(iVar7 + 0x68),iVar6,(int)cVar3,iVar5,(vector *)local_98);
    cVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
    if (cVar3 != '\x01') {
      std::vector<int,std::allocator<int>>::vector(local_a8);
      pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    /* try { // try from 084a4caf to 084a4cf1 has its CatchHandler @ 084a4e37 */
      local_34 = CInventory::insert_event_items
                           (pCVar8,local_98,local_a8,3,8,1,"game_server_msg_171",
                            "game_server_msg_172");
      if ((local_34 < 1) ||
         (uVar9 = std::vector<int,std::allocator<int>>::size(local_a8), uVar9 < 3)) {
        bVar22 = false;
      }
      else {
        bVar22 = true;
      }
      if (bVar22) {
        PacketGuard::PacketGuard(local_b4);
                    /* try { // try from 084a4d0b to 084a4e0c has its CatchHandler @ 084a4e0f */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b4,0,0xe);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b4,0);
        local_b8 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_b4);
        local_30 = 0;
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_b4,0);
        local_2c = 0;
        while (uVar9 = std::vector<int,std::allocator<int>>::size(local_a8), local_2c < uVar9) {
          puVar10 = (undefined4 *)
                    std::vector<int,std::allocator<int>>::operator[](local_a8,local_2c);
          uVar11 = *puVar10;
          pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
          cVar3 = CInventory::MakeItemPacket(pCVar8,1,uVar11,local_b4);
          if (cVar3 != '\0') {
            local_30 = local_30 + 1;
          }
          local_2c = local_2c + 3;
        }
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_b4,&local_b8,local_30);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b4,true);
        CUser::Send(param_1,local_b4);
                    /* try { // try from 084a4e30 to 084a4e34 has its CatchHandler @ 084a4e37 */
        PacketGuard::~PacketGuard(local_b4);
      }
                    /* try { // try from 084a4e58 to 084a4e5c has its CatchHandler @ 084a4e8c */
      std::vector<int,std::allocator<int>>::~vector(local_a8);
    }
    uVar11 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    *(undefined4 *)(this + 0x54) = uVar11;
    charac_expand::CData::alter((CData *)this);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_98);
  }
  iVar5 = G_CDataManager();
  if (*(uint *)(this + 0x50) < (uint)*(ushort *)(iVar5 + 0x49e0)) {
    iVar5 = G_CDataManager();
    this[0x5a] = (CFairPvPScore)
                 ((char)*(undefined2 *)(iVar5 + 0x49e0) - (char)*(undefined4 *)(this + 0x50));
  }
  else {
    this[0x5a] = (CFairPvPScore)0x0;
  }
  PacketGuard::PacketGuard(local_8c);
                    /* try { // try from 084a4f14 to 084a5547 has its CatchHandler @ 084a556e */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_8c,0,0x152);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_8c,(uint)(byte)this[0x5a]);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_8c,true);
  CUser::Send(param_1,local_8c);
  this[0x5b] = *(CFairPvPScore *)(local_3c + 0x684);
  pGVar4 = (GameWorld *)G_GameWorld();
  iVar5 = GameWorld::GetChannelType(pGVar4);
  if (iVar5 == 0xf) {
LAB_084a4f94:
    bVar22 = true;
  }
  else {
    pGVar4 = (GameWorld *)G_GameWorld();
    iVar5 = GameWorld::GetChannelType(pGVar4);
    if (iVar5 == 0x10) goto LAB_084a4f94;
    bVar22 = false;
  }
  if (bVar22) {
    CVar2 = this[0x5b];
    iVar5 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1);
    iVar6 = G_CDataManager();
    iVar5 = ServerParameterScript::get_pvp_item_give((ServerParameterScript *)(iVar6 + 0x68),iVar5);
    if ((int)(uint)(byte)CVar2 <= iVar5) {
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_8c);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_8c,0,0x161);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_8c,true);
      CUser::Send(param_1,local_8c);
    }
  }
  if ((*(int *)(this + 0x54) != 0) && (*(uint *)(this + 0x54) < 0x4ddd89f0)) {
    iVar5 = *(int *)(this + 0x28) + *(int *)(this + 0x2c) + *(int *)(this + 0x30);
    if ((iVar5 < 10) || (0x31 < iVar5)) {
      iVar6 = 0;
    }
    else {
      iVar6 = 10;
    }
    if (iVar5 < 0x32) {
      iVar5 = 0;
    }
    else {
      iVar5 = 0x3c;
    }
    if ((*(uint *)(this + 0x28) < 10) || (0x31 < *(uint *)(this + 0x28))) {
      iVar7 = 0;
    }
    else {
      iVar7 = 0xf;
    }
    if (*(uint *)(this + 0x28) < 0x32) {
      iVar12 = 0;
    }
    else {
      iVar12 = 0x5a;
    }
    local_24 = *(int *)(this + 0x34) + *(int *)(this + 0x38) + *(int *)(this + 0x3c);
    if ((local_24 < 10) || (0x31 < local_24)) {
      iVar13 = 0;
    }
    else {
      iVar13 = 10;
    }
    if (local_24 < 0x32) {
      iVar14 = 0;
    }
    else {
      iVar14 = 0x3c;
    }
    if ((*(uint *)(this + 0x34) < 10) || (0x31 < *(uint *)(this + 0x34))) {
      iVar15 = 0;
    }
    else {
      iVar15 = 0xf;
    }
    if (*(uint *)(this + 0x34) < 0x32) {
      iVar16 = 0;
    }
    else {
      iVar16 = 0x5a;
    }
    local_28 = *(int *)(this + 0x34) * 2 +
               *(int *)(this + 0x28) * 2 +
               *(int *)(this + 0x38) + *(int *)(this + 0x3c) +
               *(int *)(this + 0x34) * 3 +
               *(int *)(this + 0x2c) + *(int *)(this + 0x30) + *(int *)(this + 0x28) * 2 + iVar6 +
               iVar5 + iVar7 + iVar12 + iVar13 + iVar14 + iVar15 + iVar16;
    Inven_Item::Inven_Item(local_10a);
    pcVar17 = local_20a;
    uVar9 = 0x100;
    bVar22 = ((uint)pcVar17 & 2) != 0;
    if (bVar22) {
      local_20a[0] = '\0';
      local_20a[1] = '\0';
      pcVar17 = local_20a + 2;
      uVar9 = 0xfe;
    }
    for (uVar9 = uVar9 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      pcVar17[0] = '\0';
      pcVar17[1] = '\0';
      pcVar17[2] = '\0';
      pcVar17[3] = '\0';
      pcVar17 = pcVar17 + ((uint)bVar23 * -2 + 1) * 4;
    }
    if (bVar22) {
      pcVar17[0] = '\0';
      pcVar17[1] = '\0';
    }
    pcVar17 = &local_cd;
    uVar9 = 0x15;
    bVar22 = ((uint)pcVar17 & 1) != 0;
    if (bVar22) {
      local_cd = '\0';
      pcVar17 = local_cc;
      uVar9 = 0x14;
    }
    if (((uint)pcVar17 & 2) != 0) {
      pcVar17[0] = '\0';
      pcVar17[1] = '\0';
      pcVar17 = pcVar17 + 2;
      uVar9 = uVar9 - 2;
    }
    uVar21 = 0;
    do {
      pcVar1 = pcVar17 + uVar21;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      uVar21 = uVar21 + 4;
    } while (uVar21 < (uVar9 & 0xfffffffc));
    pcVar17 = pcVar17 + uVar21;
    if ((uVar9 & 2) != 0) {
      pcVar17[0] = '\0';
      pcVar17[1] = '\0';
      pcVar17 = pcVar17 + 2;
    }
    if (!bVar22) {
      *pcVar17 = '\0';
    }
    local_108 = 0xcf0;
    pCVar18 = (CDataManager *)G_CDataManager();
    local_20 = (int *)CDataManager::find_item(pCVar18,0xcf0);
    if (local_20 == (int *)0x0) {
      uVar11 = 0;
      local_20 = (int *)0x0;
      goto LAB_084a558c;
    }
    local_103 = local_28 + 200;
    (**(code **)(*local_20 + 8))(local_20,local_10a);
    pcVar17 = (char *)RDARScriptStringManager::findString
                                ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                 "game_server_msg_171",(bool *)0x0);
    strncpy(&local_cd,pcVar17,0x14);
    pcVar17 = (char *)RDARScriptStringManager::findString
                                ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                 "game_server_msg_177",(bool *)0x0);
    strncpy(local_20a,pcVar17,0xff);
    uVar11 = CUser::GetServerGroup(param_1);
    sVar19 = strlen(local_20a);
    uVar20 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
              (&local_cd,local_10a,0,uVar20,local_20a,sVar19,0,uVar11,1,0);
    local_108 = 0x289788;
    pCVar18 = (CDataManager *)G_CDataManager();
    local_20 = (int *)CDataManager::find_item(pCVar18,0x289788);
    if (local_20 == (int *)0x0) {
      uVar11 = 0;
      goto LAB_084a558c;
    }
    local_103 = 1;
    (**(code **)(*local_20 + 8))(local_20,local_10a);
    pcVar17 = (char *)RDARScriptStringManager::findString
                                ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                 "game_server_msg_171",(bool *)0x0);
    strncpy(&local_cd,pcVar17,0x14);
    pcVar17 = (char *)RDARScriptStringManager::findString
                                ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                 "game_server_msg_178",(bool *)0x0);
    strncpy(local_20a,pcVar17,0xff);
    uVar11 = CUser::GetServerGroup(param_1);
    sVar19 = strlen(local_20a);
    uVar20 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
              (&local_cd,local_10a,0,uVar20,local_20a,sVar19,0,uVar11,1,0);
    uVar11 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    *(undefined4 *)(this + 0x54) = uVar11;
    charac_expand::CData::alter((CData *)this);
  }
  uVar11 = 1;
LAB_084a558c:
  PacketGuard::~PacketGuard(local_8c);
  return uVar11;
}

```

---

## ~CFairPvPScore

```asm
// === 084a4850 fair_pvp::CFairPvPScore::~CFairPvPScore  [0x084a4850-0x84a48d9] ===
 84a4850:	55                   	push   %ebp
 84a4851:	89 e5                	mov    %esp,%ebp
 84a4853:	56                   	push   %esi
 84a4854:	53                   	push   %ebx
 84a4855:	83 ec 10             	sub    $0x10,%esp
 84a4858:	8b 45 08             	mov    0x8(%ebp),%eax
 84a485b:	c7 00 08 ec c7 08    	movl   $0x8c7ec08,(%eax)
 84a4861:	8b 45 08             	mov    0x8(%ebp),%eax
 84a4864:	83 c0 20             	add    $0x20,%eax
 84a4867:	89 04 24             	mov    %eax,(%esp)
 84a486a:	e8 fb 1b 00 00       	call   84a646a <_ZNSt4listIhSaIhEED1Ev>
 84a486f:	eb 18                	jmp    84a4889 <_ZN8fair_pvp13CFairPvPScoreD1Ev+0x39>
 84a4871:	89 d3                	mov    %edx,%ebx
 84a4873:	89 c6                	mov    %eax,%esi
 84a4875:	8b 45 08             	mov    0x8(%ebp),%eax
 84a4878:	83 c0 08             	add    $0x8,%eax
 84a487b:	89 04 24             	mov    %eax,(%esp)
 84a487e:	e8 fb 1b 00 00       	call   84a647e <_ZNSt3mapIN8fair_pvp6JobKeyE25FAIR_PVP_SCORE_MODE_COUNTSt4lessIS1_ESaISt4pairIKS1_S2_EEED1Ev>
 84a4883:	89 f0                	mov    %esi,%eax
 84a4885:	89 da                	mov    %ebx,%edx
 84a4887:	eb 10                	jmp    84a4899 <_ZN8fair_pvp13CFairPvPScoreD1Ev+0x49>
 84a4889:	8b 45 08             	mov    0x8(%ebp),%eax
 84a488c:	83 c0 08             	add    $0x8,%eax
 84a488f:	89 04 24             	mov    %eax,(%esp)
 84a4892:	e8 e7 1b 00 00       	call   84a647e <_ZNSt3mapIN8fair_pvp6JobKeyE25FAIR_PVP_SCORE_MODE_COUNTSt4lessIS1_ESaISt4pairIKS1_S2_EEED1Ev>
 84a4897:	eb 1b                	jmp    84a48b4 <_ZN8fair_pvp13CFairPvPScoreD1Ev+0x64>
 84a4899:	89 d3                	mov    %edx,%ebx
 84a489b:	89 c6                	mov    %eax,%esi
 84a489d:	8b 45 08             	mov    0x8(%ebp),%eax
 84a48a0:	89 04 24             	mov    %eax,(%esp)
 84a48a3:	e8 3a 43 c2 ff       	call   80c8be2 <_ZN13charac_expand5CDataD1Ev>
 84a48a8:	89 f0                	mov    %esi,%eax
 84a48aa:	89 da                	mov    %ebx,%edx
 84a48ac:	89 04 24             	mov    %eax,(%esp)
 84a48af:	e8 9c ee 63 00       	call   8ae3750 <_Unwind_Resume>
 84a48b4:	8b 45 08             	mov    0x8(%ebp),%eax
 84a48b7:	89 04 24             	mov    %eax,(%esp)
 84a48ba:	e8 23 43 c2 ff       	call   80c8be2 <_ZN13charac_expand5CDataD1Ev>
 84a48bf:	b8 00 00 00 00       	mov    $0x0,%eax
 84a48c4:	84 c0                	test   %al,%al
 84a48c6:	74 0b                	je     84a48d3 <_ZN8fair_pvp13CFairPvPScoreD1Ev+0x83>
 84a48c8:	8b 45 08             	mov    0x8(%ebp),%eax
 84a48cb:	89 04 24             	mov    %eax,(%esp)
 84a48ce:	e8 1d fc 27 00       	call   87244f0 <_ZdlPv>
 84a48d3:	83 c4 10             	add    $0x10,%esp
 84a48d6:	5b                   	pop    %ebx
 84a48d7:	5e                   	pop    %esi
 84a48d8:	5d                   	pop    %ebp
 84a48d9:	c3                   	ret

```

```c
// fair_pvp::CFairPvPScore::~CFairPvPScore @ 0x84a4850

/* WARNING: Removing unreachable block (ram,0x084a48c8) */
/* fair_pvp::CFairPvPScore::~CFairPvPScore() */

void __thiscall fair_pvp::CFairPvPScore::~CFairPvPScore(CFairPvPScore *this)

{
  *(undefined ***)this = &PTR_ResetDailyMidnight_08c7ec08;
                    /* try { // try from 084a486a to 084a486e has its CatchHandler @ 084a4871 */
  std::list<unsigned_char,std::allocator<unsigned_char>>::~list
            ((list<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x20));
                    /* try { // try from 084a4892 to 084a4896 has its CatchHandler @ 084a4899 */
  std::
  map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
  ::~map((map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
          *)(this + 8));
  charac_expand::CData::~CData((CData *)this);
  return;
}

```

---

## ~CFairPvPScore_084a48da

```asm
// === 084a48da fair_pvp::CFairPvPScore::~CFairPvPScore  [0x084a48da-0x84a48f7] ===
 84a48da:	55                   	push   %ebp
 84a48db:	89 e5                	mov    %esp,%ebp
 84a48dd:	83 ec 18             	sub    $0x18,%esp
 84a48e0:	8b 45 08             	mov    0x8(%ebp),%eax
 84a48e3:	89 04 24             	mov    %eax,(%esp)
 84a48e6:	e8 65 ff ff ff       	call   84a4850 <_ZN8fair_pvp13CFairPvPScoreD1Ev>
 84a48eb:	8b 45 08             	mov    0x8(%ebp),%eax
 84a48ee:	89 04 24             	mov    %eax,(%esp)
 84a48f1:	e8 fa fb 27 00       	call   87244f0 <_ZdlPv>
 84a48f6:	c9                   	leave
 84a48f7:	c3                   	ret

```

```c
// fair_pvp::CFairPvPScore::~CFairPvPScore @ 0x84a48da

/* fair_pvp::CFairPvPScore::~CFairPvPScore() */

void __thiscall fair_pvp::CFairPvPScore::~CFairPvPScore(CFairPvPScore *this)

{
  ~CFairPvPScore(this);
  operator_delete(this);
  return;
}

```

