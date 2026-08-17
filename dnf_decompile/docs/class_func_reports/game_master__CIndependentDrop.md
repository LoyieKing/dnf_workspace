# game_master__CIndependentDrop

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## PrintItemDropList

```asm
// === 084b1756 game_master::CIndependentDrop::PrintItemDropList  [0x084b1756-0x84b1b5d] ===
 84b1756:	55                   	push   %ebp
 84b1757:	89 e5                	mov    %esp,%ebp
 84b1759:	57                   	push   %edi
 84b175a:	53                   	push   %ebx
 84b175b:	81 ec 70 04 00 00    	sub    $0x470,%esp
 84b1761:	8b 45 14             	mov    0x14(%ebp),%eax
 84b1764:	88 85 c4 fb ff ff    	mov    %al,-0x43c(%ebp)
 84b176a:	8d 9d d4 fb ff ff    	lea    -0x42c(%ebp),%ebx
 84b1770:	b8 00 00 00 00       	mov    $0x0,%eax
 84b1775:	ba 00 01 00 00       	mov    $0x100,%edx
 84b177a:	89 df                	mov    %ebx,%edi
 84b177c:	89 d1                	mov    %edx,%ecx
 84b177e:	f3 ab                	rep stos %eax,%es:(%edi)
 84b1780:	0f b6 85 c4 fb ff ff 	movzbl -0x43c(%ebp),%eax
 84b1787:	83 f0 01             	xor    $0x1,%eax
 84b178a:	84 c0                	test   %al,%al
 84b178c:	74 64                	je     84b17f2 <_ZN11game_master16CIndependentDrop17PrintItemDropListERK26stMonsterIndependentDrop_tPcb+0x9c>
 84b178e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b1791:	8b 18                	mov    (%eax),%ebx
 84b1793:	e8 03 aa c1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84b1798:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84b179c:	89 04 24             	mov    %eax,(%esp)
 84b179f:	e8 8e e2 ea ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84b17a4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84b17a7:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 84b17ab:	74 78                	je     84b1825 <_ZN11game_master16CIndependentDrop17PrintItemDropListERK26stMonsterIndependentDrop_tPcb+0xcf>
 84b17ad:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84b17b0:	89 04 24             	mov    %eax,(%esp)
 84b17b3:	e8 ca d5 c6 ff       	call   811ed82 <_ZNK5CItem11GetItemNameEv>
 84b17b8:	8b 55 0c             	mov    0xc(%ebp),%edx
 84b17bb:	8b 12                	mov    (%edx),%edx
 84b17bd:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84b17c1:	89 54 24 08          	mov    %edx,0x8(%esp)
 84b17c5:	c7 44 24 04 d8 02 c8 	movl   $0x8c802d8,0x4(%esp)
 84b17cc:	08 
 84b17cd:	8d 85 d4 fb ff ff    	lea    -0x42c(%ebp),%eax
 84b17d3:	89 04 24             	mov    %eax,(%esp)
 84b17d6:	e8 65 cc bc ff       	call   807e440 <sprintf@plt>
 84b17db:	8d 85 d4 fb ff ff    	lea    -0x42c(%ebp),%eax
 84b17e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b17e5:	8b 45 10             	mov    0x10(%ebp),%eax
 84b17e8:	89 04 24             	mov    %eax,(%esp)
 84b17eb:	e8 70 c5 bc ff       	call   807dd60 <strcat@plt>
 84b17f0:	eb 33                	jmp    84b1825 <_ZN11game_master16CIndependentDrop17PrintItemDropListERK26stMonsterIndependentDrop_tPcb+0xcf>
 84b17f2:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 84b17f9:	00 
 84b17fa:	c7 44 24 04 df 02 c8 	movl   $0x8c802df,0x4(%esp)
 84b1801:	08 
 84b1802:	8d 85 d4 fb ff ff    	lea    -0x42c(%ebp),%eax
 84b1808:	89 04 24             	mov    %eax,(%esp)
 84b180b:	e8 90 c0 bc ff       	call   807d8a0 <memcpy@plt>
 84b1810:	8d 85 d4 fb ff ff    	lea    -0x42c(%ebp),%eax
 84b1816:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b181a:	8b 45 10             	mov    0x10(%ebp),%eax
 84b181d:	89 04 24             	mov    %eax,(%esp)
 84b1820:	e8 3b c5 bc ff       	call   807dd60 <strcat@plt>
 84b1825:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 84b182c:	e9 14 03 00 00       	jmp    84b1b45 <_ZN11game_master16CIndependentDrop17PrintItemDropListERK26stMonsterIndependentDrop_tPcb+0x3ef>
 84b1831:	8b 55 e8             	mov    -0x18(%ebp),%edx
 84b1834:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b1837:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 84b183b:	85 c0                	test   %eax,%eax
 84b183d:	0f 84 fd 02 00 00    	je     84b1b40 <_ZN11game_master16CIndependentDrop17PrintItemDropListERK26stMonsterIndependentDrop_tPcb+0x3ea>
 84b1843:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84b1846:	89 44 24 08          	mov    %eax,0x8(%esp)
 84b184a:	c7 44 24 04 ec 02 c8 	movl   $0x8c802ec,0x4(%esp)
 84b1851:	08 
 84b1852:	8d 85 d4 fb ff ff    	lea    -0x42c(%ebp),%eax
 84b1858:	89 04 24             	mov    %eax,(%esp)
 84b185b:	e8 e0 cb bc ff       	call   807e440 <sprintf@plt>
 84b1860:	8d 85 d4 fb ff ff    	lea    -0x42c(%ebp),%eax
 84b1866:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b186a:	8b 45 10             	mov    0x10(%ebp),%eax
 84b186d:	89 04 24             	mov    %eax,(%esp)
 84b1870:	e8 eb c4 bc ff       	call   807dd60 <strcat@plt>
 84b1875:	8b 55 e8             	mov    -0x18(%ebp),%edx
 84b1878:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b187b:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 84b187f:	89 85 c0 fb ff ff    	mov    %eax,-0x440(%ebp)
 84b1885:	db 85 c0 fb ff ff    	fildl  -0x440(%ebp)
 84b188b:	d9 05 74 14 c8 08    	flds   0x8c81474
 84b1891:	de f9                	fdivrp %st,%st(1)
 84b1893:	dd 5c 24 08          	fstpl  0x8(%esp)
 84b1897:	c7 44 24 04 f7 02 c8 	movl   $0x8c802f7,0x4(%esp)
 84b189e:	08 
 84b189f:	8d 85 d4 fb ff ff    	lea    -0x42c(%ebp),%eax
 84b18a5:	89 04 24             	mov    %eax,(%esp)
 84b18a8:	e8 93 cb bc ff       	call   807e440 <sprintf@plt>
 84b18ad:	8d 85 d4 fb ff ff    	lea    -0x42c(%ebp),%eax
 84b18b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b18b7:	8b 45 10             	mov    0x10(%ebp),%eax
 84b18ba:	89 04 24             	mov    %eax,(%esp)
 84b18bd:	e8 9e c4 bc ff       	call   807dd60 <strcat@plt>
 84b18c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b18c5:	8b 58 24             	mov    0x24(%eax),%ebx
 84b18c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b18cb:	8b 48 20             	mov    0x20(%eax),%ecx
 84b18ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b18d1:	8b 50 1c             	mov    0x1c(%eax),%edx
 84b18d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b18d7:	8b 40 18             	mov    0x18(%eax),%eax
 84b18da:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 84b18de:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84b18e2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84b18e6:	89 44 24 08          	mov    %eax,0x8(%esp)
 84b18ea:	c7 44 24 04 06 03 c8 	movl   $0x8c80306,0x4(%esp)
 84b18f1:	08 
 84b18f2:	8d 85 d4 fb ff ff    	lea    -0x42c(%ebp),%eax
 84b18f8:	89 04 24             	mov    %eax,(%esp)
 84b18fb:	e8 40 cb bc ff       	call   807e440 <sprintf@plt>
 84b1900:	8d 85 d4 fb ff ff    	lea    -0x42c(%ebp),%eax
 84b1906:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b190a:	8b 45 10             	mov    0x10(%ebp),%eax
 84b190d:	89 04 24             	mov    %eax,(%esp)
 84b1910:	e8 4b c4 bc ff       	call   807dd60 <strcat@plt>
 84b1915:	8b 55 e8             	mov    -0x18(%ebp),%edx
 84b1918:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b191b:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 84b191f:	89 85 c0 fb ff ff    	mov    %eax,-0x440(%ebp)
 84b1925:	db 85 c0 fb ff ff    	fildl  -0x440(%ebp)
 84b192b:	d9 05 74 14 c8 08    	flds   0x8c81474
 84b1931:	de f9                	fdivrp %st,%st(1)
 84b1933:	d9 5d ec             	fstps  -0x14(%ebp)
 84b1936:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b1939:	8b 40 24             	mov    0x24(%eax),%eax
 84b193c:	89 85 c0 fb ff ff    	mov    %eax,-0x440(%ebp)
 84b1942:	db 85 c0 fb ff ff    	fildl  -0x440(%ebp)
 84b1948:	d8 4d ec             	fmuls  -0x14(%ebp)
 84b194b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b194e:	8b 40 20             	mov    0x20(%eax),%eax
 84b1951:	89 85 c0 fb ff ff    	mov    %eax,-0x440(%ebp)
 84b1957:	db 85 c0 fb ff ff    	fildl  -0x440(%ebp)
 84b195d:	d8 4d ec             	fmuls  -0x14(%ebp)
 84b1960:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b1963:	8b 40 1c             	mov    0x1c(%eax),%eax
 84b1966:	89 85 c0 fb ff ff    	mov    %eax,-0x440(%ebp)
 84b196c:	db 85 c0 fb ff ff    	fildl  -0x440(%ebp)
 84b1972:	d8 4d ec             	fmuls  -0x14(%ebp)
 84b1975:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b1978:	8b 40 18             	mov    0x18(%eax),%eax
 84b197b:	89 85 c0 fb ff ff    	mov    %eax,-0x440(%ebp)
 84b1981:	db 85 c0 fb ff ff    	fildl  -0x440(%ebp)
 84b1987:	d8 4d ec             	fmuls  -0x14(%ebp)
 84b198a:	d9 cb                	fxch   %st(3)
 84b198c:	dd 5c 24 20          	fstpl  0x20(%esp)
 84b1990:	d9 c9                	fxch   %st(1)
 84b1992:	dd 5c 24 18          	fstpl  0x18(%esp)
 84b1996:	dd 5c 24 10          	fstpl  0x10(%esp)
 84b199a:	dd 5c 24 08          	fstpl  0x8(%esp)
 84b199e:	c7 44 24 04 1a 03 c8 	movl   $0x8c8031a,0x4(%esp)
 84b19a5:	08 
 84b19a6:	8d 85 d4 fb ff ff    	lea    -0x42c(%ebp),%eax
 84b19ac:	89 04 24             	mov    %eax,(%esp)
 84b19af:	e8 8c ca bc ff       	call   807e440 <sprintf@plt>
 84b19b4:	8d 85 d4 fb ff ff    	lea    -0x42c(%ebp),%eax
 84b19ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b19be:	8b 45 10             	mov    0x10(%ebp),%eax
 84b19c1:	89 04 24             	mov    %eax,(%esp)
 84b19c4:	e8 97 c3 bc ff       	call   807dd60 <strcat@plt>
 84b19c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b19cc:	8b 40 28             	mov    0x28(%eax),%eax
 84b19cf:	89 44 24 08          	mov    %eax,0x8(%esp)
 84b19d3:	c7 44 24 04 35 03 c8 	movl   $0x8c80335,0x4(%esp)
 84b19da:	08 
 84b19db:	8d 85 d4 fb ff ff    	lea    -0x42c(%ebp),%eax
 84b19e1:	89 04 24             	mov    %eax,(%esp)
 84b19e4:	e8 57 ca bc ff       	call   807e440 <sprintf@plt>
 84b19e9:	8d 85 d4 fb ff ff    	lea    -0x42c(%ebp),%eax
 84b19ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b19f3:	8b 45 10             	mov    0x10(%ebp),%eax
 84b19f6:	89 04 24             	mov    %eax,(%esp)
 84b19f9:	e8 62 c3 bc ff       	call   807dd60 <strcat@plt>
 84b19fe:	80 bd c4 fb ff ff 00 	cmpb   $0x0,-0x43c(%ebp)
 84b1a05:	0f 84 36 01 00 00    	je     84b1b41 <_ZN11game_master16CIndependentDrop17PrintItemDropListERK26stMonsterIndependentDrop_tPcb+0x3eb>
 84b1a0b:	c7 44 24 08 0f 00 00 	movl   $0xf,0x8(%esp)
 84b1a12:	00 
 84b1a13:	c7 44 24 04 42 03 c8 	movl   $0x8c80342,0x4(%esp)
 84b1a1a:	08 
 84b1a1b:	8d 85 d4 fb ff ff    	lea    -0x42c(%ebp),%eax
 84b1a21:	89 04 24             	mov    %eax,(%esp)
 84b1a24:	e8 77 be bc ff       	call   807d8a0 <memcpy@plt>
 84b1a29:	8d 85 d4 fb ff ff    	lea    -0x42c(%ebp),%eax
 84b1a2f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b1a33:	8b 45 10             	mov    0x10(%ebp),%eax
 84b1a36:	89 04 24             	mov    %eax,(%esp)
 84b1a39:	e8 22 c3 bc ff       	call   807dd60 <strcat@plt>
 84b1a3e:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84b1a45:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b1a48:	8d 50 30             	lea    0x30(%eax),%edx
 84b1a4b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84b1a4e:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b1a52:	89 04 24             	mov    %eax,(%esp)
 84b1a55:	e8 c6 f7 c5 ff       	call   8111220 <_ZNKSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 84b1a5a:	83 ec 04             	sub    $0x4,%esp
 84b1a5d:	e9 a3 00 00 00       	jmp    84b1b05 <_ZN11game_master16CIndependentDrop17PrintItemDropListERK26stMonsterIndependentDrop_tPcb+0x3af>
 84b1a62:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84b1a65:	89 04 24             	mov    %eax,(%esp)
 84b1a68:	e8 4d 41 d8 ff       	call   8235bba <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEdeEv>
 84b1a6d:	8b 50 04             	mov    0x4(%eax),%edx
 84b1a70:	8b 00                	mov    (%eax),%eax
 84b1a72:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84b1a75:	89 55 d8             	mov    %edx,-0x28(%ebp)
 84b1a78:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 84b1a7b:	e8 1b a7 c1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84b1a80:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84b1a84:	89 04 24             	mov    %eax,(%esp)
 84b1a87:	e8 a6 df ea ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84b1a8c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84b1a8f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84b1a93:	74 65                	je     84b1afa <_ZN11game_master16CIndependentDrop17PrintItemDropListERK26stMonsterIndependentDrop_tPcb+0x3a4>
 84b1a95:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b1a98:	89 04 24             	mov    %eax,(%esp)
 84b1a9b:	e8 e2 d2 c6 ff       	call   811ed82 <_ZNK5CItem11GetItemNameEv>
 84b1aa0:	8b 55 d8             	mov    -0x28(%ebp),%edx
 84b1aa3:	2b 55 f0             	sub    -0x10(%ebp),%edx
 84b1aa6:	89 95 c0 fb ff ff    	mov    %edx,-0x440(%ebp)
 84b1aac:	db 85 c0 fb ff ff    	fildl  -0x440(%ebp)
 84b1ab2:	d9 05 74 14 c8 08    	flds   0x8c81474
 84b1ab8:	de f9                	fdivrp %st,%st(1)
 84b1aba:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 84b1abd:	89 44 24 14          	mov    %eax,0x14(%esp)
 84b1ac1:	dd 5c 24 0c          	fstpl  0xc(%esp)
 84b1ac5:	89 54 24 08          	mov    %edx,0x8(%esp)
 84b1ac9:	c7 44 24 04 51 03 c8 	movl   $0x8c80351,0x4(%esp)
 84b1ad0:	08 
 84b1ad1:	8d 85 d4 fb ff ff    	lea    -0x42c(%ebp),%eax
 84b1ad7:	89 04 24             	mov    %eax,(%esp)
 84b1ada:	e8 61 c9 bc ff       	call   807e440 <sprintf@plt>
 84b1adf:	8d 85 d4 fb ff ff    	lea    -0x42c(%ebp),%eax
 84b1ae5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b1ae9:	8b 45 10             	mov    0x10(%ebp),%eax
 84b1aec:	89 04 24             	mov    %eax,(%esp)
 84b1aef:	e8 6c c2 bc ff       	call   807dd60 <strcat@plt>
 84b1af4:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84b1af7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84b1afa:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84b1afd:	89 04 24             	mov    %eax,(%esp)
 84b1b00:	e8 cb c1 d8 ff       	call   823dcd0 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 84b1b05:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b1b08:	8d 50 30             	lea    0x30(%eax),%edx
 84b1b0b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84b1b0e:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b1b12:	89 04 24             	mov    %eax,(%esp)
 84b1b15:	e8 32 f7 c5 ff       	call   811124c <_ZNKSt6vectorISt4pairIiiESaIS1_EE3endEv>
 84b1b1a:	83 ec 04             	sub    $0x4,%esp
 84b1b1d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84b1b20:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b1b24:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84b1b27:	89 04 24             	mov    %eax,(%esp)
 84b1b2a:	e8 b6 1d ce ff       	call   81938e5 <_ZN9__gnu_cxxneIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 84b1b2f:	84 c0                	test   %al,%al
 84b1b31:	0f 85 2b ff ff ff    	jne    84b1a62 <_ZN11game_master16CIndependentDrop17PrintItemDropListERK26stMonsterIndependentDrop_tPcb+0x30c>
 84b1b37:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84b1b3e:	eb 01                	jmp    84b1b41 <_ZN11game_master16CIndependentDrop17PrintItemDropListERK26stMonsterIndependentDrop_tPcb+0x3eb>
 84b1b40:	90                   	nop
 84b1b41:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 84b1b45:	83 7d e8 04          	cmpl   $0x4,-0x18(%ebp)
 84b1b49:	0f 9e c0             	setle  %al
 84b1b4c:	84 c0                	test   %al,%al
 84b1b4e:	0f 85 dd fc ff ff    	jne    84b1831 <_ZN11game_master16CIndependentDrop17PrintItemDropListERK26stMonsterIndependentDrop_tPcb+0xdb>
 84b1b54:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84b1b57:	83 c4 00             	add    $0x0,%esp
 84b1b5a:	5b                   	pop    %ebx
 84b1b5b:	5f                   	pop    %edi
 84b1b5c:	5d                   	pop    %ebp
 84b1b5d:	c3                   	ret

```

```c
// game_master::CIndependentDrop::PrintItemDropList @ 0x84b1756

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* game_master::CIndependentDrop::PrintItemDropList(stMonsterIndependentDrop_t const&, char*, bool)
    */

void __thiscall
game_master::CIndependentDrop::PrintItemDropList
          (CIndependentDrop *this,stMonsterIndependentDrop_t *param_1,char *param_2,bool param_3)

{
  double dVar1;
  bool bVar2;
  CDataManager *pCVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  char local_430 [1024];
  int local_30;
  int local_2c;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_28 [4];
  __normal_iterator local_24 [4];
  CItem *local_20;
  int local_1c;
  float local_18;
  int local_14;
  CItem *local_10;
  
  pcVar7 = local_430;
  for (iVar6 = 0x100; iVar6 != 0; iVar6 = iVar6 + -1) {
    pcVar7[0] = '\0';
    pcVar7[1] = '\0';
    pcVar7[2] = '\0';
    pcVar7[3] = '\0';
    pcVar7 = pcVar7 + 4;
  }
  if (param_3) {
    memcpy(local_430,&DAT_08c802df,0xd);
    strcat(param_2,local_430);
  }
  else {
    iVar6 = *(int *)param_1;
    pCVar3 = (CDataManager *)G_CDataManager();
    local_20 = (CItem *)CDataManager::find_item(pCVar3,iVar6);
    if (local_20 != (CItem *)0x0) {
      uVar4 = CItem::GetItemName(local_20);
      sprintf(local_430,"%d\t%s\n",*(undefined4 *)param_1,uVar4);
      strcat(param_2,local_430);
    }
  }
  for (local_1c = 0; local_1c < 5; local_1c = local_1c + 1) {
    if (*(int *)(param_1 + local_1c * 4 + 4) != 0) {
      sprintf(local_430,&DAT_08c802ec,local_1c);
      strcat(param_2,local_430);
      sprintf(local_430,&DAT_08c802f7,
              SUB84((double)((float)*(int *)(param_1 + local_1c * 4 + 4) / _DAT_08c81474),0),
              (int)((ulonglong)(double)((float)*(int *)(param_1 + local_1c * 4 + 4) / _DAT_08c81474)
                   >> 0x20));
      strcat(param_2,local_430);
      sprintf(local_430,&DAT_08c80306,*(undefined4 *)(param_1 + 0x18),
              *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
              *(undefined4 *)(param_1 + 0x24));
      strcat(param_2,local_430);
      local_18 = (float)*(int *)(param_1 + local_1c * 4 + 4) / _DAT_08c81474;
      sprintf(local_430,&DAT_08c8031a,SUB84((double)((float)*(int *)(param_1 + 0x18) * local_18),0),
              (int)((ulonglong)(double)((float)*(int *)(param_1 + 0x18) * local_18) >> 0x20),
              SUB84((double)((float)*(int *)(param_1 + 0x1c) * local_18),0),
              (int)((ulonglong)(double)((float)*(int *)(param_1 + 0x1c) * local_18) >> 0x20),
              (double)((float)*(int *)(param_1 + 0x20) * local_18),
              (double)((float)*(int *)(param_1 + 0x24) * local_18));
      strcat(param_2,local_430);
      sprintf(local_430,&DAT_08c80335,*(undefined4 *)(param_1 + 0x28));
      strcat(param_2,local_430);
      if (param_3) {
        memcpy(local_430,&DAT_08c80342,0xf);
        strcat(param_2,local_430);
        local_14 = 0;
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
        while( true ) {
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
          bVar2 = __gnu_cxx::operator!=(local_28,local_24);
          if (!bVar2) break;
          piVar5 = (int *)__gnu_cxx::
                          __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                          ::operator*(local_28);
          local_2c = piVar5[1];
          iVar6 = *piVar5;
          local_30 = iVar6;
          pCVar3 = (CDataManager *)G_CDataManager();
          local_10 = (CItem *)CDataManager::find_item(pCVar3,iVar6);
          if (local_10 != (CItem *)0x0) {
            uVar4 = CItem::GetItemName(local_10);
            dVar1 = (double)((float)(local_2c - local_14) / _DAT_08c81474);
            sprintf(local_430,"%d\t%f\t%s\n",local_30,SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20)
                    ,uVar4);
            strcat(param_2,local_430);
            local_14 = local_2c;
          }
          __gnu_cxx::
          __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
          ::operator++(local_28);
        }
        local_14 = 0;
      }
    }
  }
  return;
}

```

---

## ResultToStr

```asm
// === 084b165c game_master::CIndependentDrop::ResultToStr  [0x084b165c-0x84b1755] ===
 84b165c:	55                   	push   %ebp
 84b165d:	89 e5                	mov    %esp,%ebp
 84b165f:	56                   	push   %esi
 84b1660:	53                   	push   %ebx
 84b1661:	83 ec 60             	sub    $0x60,%esp
 84b1664:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84b1667:	8b 55 0c             	mov    0xc(%ebp),%edx
 84b166a:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b166e:	89 04 24             	mov    %eax,(%esp)
 84b1671:	e8 d8 6c ed ff       	call   838834e <_ZNKSt6vectorI26stMonsterIndependentDrop_tSaIS0_EE5beginEv>
 84b1676:	83 ec 04             	sub    $0x4,%esp
 84b1679:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84b167c:	8b 55 0c             	mov    0xc(%ebp),%edx
 84b167f:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b1683:	89 04 24             	mov    %eax,(%esp)
 84b1686:	e8 ef 6c ed ff       	call   838837a <_ZNKSt6vectorI26stMonsterIndependentDrop_tSaIS0_EE3endEv>
 84b168b:	83 ec 04             	sub    $0x4,%esp
 84b168e:	e9 9f 00 00 00       	jmp    84b1732 <_ZN11game_master16CIndependentDrop11ResultToStrERKSt6vectorI26stMonsterIndependentDrop_tSaIS2_EEPc+0xd6>
 84b1693:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84b1696:	89 04 24             	mov    %eax,(%esp)
 84b1699:	e8 4a 6d ed ff       	call   83883e8 <_ZNK9__gnu_cxx17__normal_iteratorIPK26stMonsterIndependentDrop_tSt6vectorIS1_SaIS1_EEEdeEv>
 84b169e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b16a2:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84b16a5:	89 04 24             	mov    %eax,(%esp)
 84b16a8:	e8 05 55 ec ff       	call   8376bb2 <_ZN26stMonsterIndependentDrop_tC1ERKS_>
 84b16ad:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84b16b0:	85 c0                	test   %eax,%eax
 84b16b2:	75 23                	jne    84b16d7 <_ZN11game_master16CIndependentDrop11ResultToStrERKSt6vectorI26stMonsterIndependentDrop_tSaIS2_EEPc+0x7b>
 84b16b4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84b16bb:	00 
 84b16bc:	8b 45 10             	mov    0x10(%ebp),%eax
 84b16bf:	89 44 24 08          	mov    %eax,0x8(%esp)
 84b16c3:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84b16c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b16ca:	8b 45 08             	mov    0x8(%ebp),%eax
 84b16cd:	89 04 24             	mov    %eax,(%esp)
 84b16d0:	e8 81 00 00 00       	call   84b1756 <_ZN11game_master16CIndependentDrop17PrintItemDropListERK26stMonsterIndependentDrop_tPcb>
 84b16d5:	eb 45                	jmp    84b171c <_ZN11game_master16CIndependentDrop11ResultToStrERKSt6vectorI26stMonsterIndependentDrop_tSaIS2_EEPc+0xc0>
 84b16d7:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84b16da:	85 c0                	test   %eax,%eax
 84b16dc:	74 3e                	je     84b171c <_ZN11game_master16CIndependentDrop11ResultToStrERKSt6vectorI26stMonsterIndependentDrop_tSaIS2_EEPc+0xc0>
 84b16de:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84b16e5:	00 
 84b16e6:	8b 45 10             	mov    0x10(%ebp),%eax
 84b16e9:	89 44 24 08          	mov    %eax,0x8(%esp)
 84b16ed:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84b16f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b16f4:	8b 45 08             	mov    0x8(%ebp),%eax
 84b16f7:	89 04 24             	mov    %eax,(%esp)
 84b16fa:	e8 57 00 00 00       	call   84b1756 <_ZN11game_master16CIndependentDrop17PrintItemDropListERK26stMonsterIndependentDrop_tPcb>
 84b16ff:	eb 1b                	jmp    84b171c <_ZN11game_master16CIndependentDrop11ResultToStrERKSt6vectorI26stMonsterIndependentDrop_tSaIS2_EEPc+0xc0>
 84b1701:	89 d3                	mov    %edx,%ebx
 84b1703:	89 c6                	mov    %eax,%esi
 84b1705:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84b1708:	89 04 24             	mov    %eax,(%esp)
 84b170b:	e8 4a 55 ec ff       	call   8376c5a <_ZN26stMonsterIndependentDrop_tD1Ev>
 84b1710:	89 f0                	mov    %esi,%eax
 84b1712:	89 da                	mov    %ebx,%edx
 84b1714:	89 04 24             	mov    %eax,(%esp)
 84b1717:	e8 34 20 63 00       	call   8ae3750 <_Unwind_Resume>
 84b171c:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84b171f:	89 04 24             	mov    %eax,(%esp)
 84b1722:	e8 33 55 ec ff       	call   8376c5a <_ZN26stMonsterIndependentDrop_tD1Ev>
 84b1727:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84b172a:	89 04 24             	mov    %eax,(%esp)
 84b172d:	e8 a0 6c ed ff       	call   83883d2 <_ZN9__gnu_cxx17__normal_iteratorIPK26stMonsterIndependentDrop_tSt6vectorIS1_SaIS1_EEEppEv>
 84b1732:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84b1735:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b1739:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84b173c:	89 04 24             	mov    %eax,(%esp)
 84b173f:	e8 62 6c ed ff       	call   83883a6 <_ZN9__gnu_cxxneIPK26stMonsterIndependentDrop_tSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 84b1744:	84 c0                	test   %al,%al
 84b1746:	0f 85 47 ff ff ff    	jne    84b1693 <_ZN11game_master16CIndependentDrop11ResultToStrERKSt6vectorI26stMonsterIndependentDrop_tSaIS2_EEPc+0x37>
 84b174c:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84b174f:	83 c4 00             	add    $0x0,%esp
 84b1752:	5b                   	pop    %ebx
 84b1753:	5e                   	pop    %esi
 84b1754:	5d                   	pop    %ebp
 84b1755:	c3                   	ret

```

```c
// game_master::CIndependentDrop::ResultToStr @ 0x84b165c

/* game_master::CIndependentDrop::ResultToStr(std::vector<stMonsterIndependentDrop_t,
   std::allocator<stMonsterIndependentDrop_t> > const&, char*) */

void __thiscall
game_master::CIndependentDrop::ResultToStr(CIndependentDrop *this,vector *param_1,char *param_2)

{
  bool bVar1;
  stMonsterIndependentDrop_t *psVar2;
  stMonsterIndependentDrop_t local_5c [44];
  int local_30;
  __normal_iterator local_14 [4];
  __normal_iterator<stMonsterIndependentDrop_t_const*,std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>>
  local_10 [4];
  
  std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>::begin();
  std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_10,local_14);
    if (!bVar1) break;
    psVar2 = (stMonsterIndependentDrop_t *)
             __gnu_cxx::
             __normal_iterator<stMonsterIndependentDrop_t_const*,std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>>
             ::operator*(local_10);
    stMonsterIndependentDrop_t::stMonsterIndependentDrop_t(local_5c,psVar2);
    if (local_30 == 0) {
                    /* try { // try from 084b16d0 to 084b16fe has its CatchHandler @ 084b1701 */
      PrintItemDropList(this,local_5c,param_2,false);
    }
    else if (local_30 != 0) {
      PrintItemDropList(this,local_5c,param_2,true);
    }
    stMonsterIndependentDrop_t::~stMonsterIndependentDrop_t(local_5c);
    __gnu_cxx::
    __normal_iterator<stMonsterIndependentDrop_t_const*,std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>>
    ::operator++(local_10);
  }
  return;
}

```

---

## SendChatMsg

```asm
// === 084b15c4 game_master::CIndependentDrop::SendChatMsg  [0x084b15c4-0x84b165b] ===
 84b15c4:	55                   	push   %ebp
 84b15c5:	89 e5                	mov    %esp,%ebp
 84b15c7:	56                   	push   %esi
 84b15c8:	53                   	push   %ebx
 84b15c9:	83 ec 30             	sub    $0x30,%esp
 84b15cc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b15cf:	89 04 24             	mov    %eax,(%esp)
 84b15d2:	e8 75 c7 0d 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84b15d7:	8b 45 10             	mov    0x10(%ebp),%eax
 84b15da:	89 04 24             	mov    %eax,(%esp)
 84b15dd:	e8 ce cd bc ff       	call   807e3b0 <strlen@plt>
 84b15e2:	89 c3                	mov    %eax,%ebx
 84b15e4:	e8 be 8d c2 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84b15e9:	c7 44 24 18 0c 00 00 	movl   $0xc,0x18(%esp)
 84b15f0:	00 
 84b15f1:	c7 44 24 14 02 00 00 	movl   $0x2,0x14(%esp)
 84b15f8:	00 
 84b15f9:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84b15fd:	8b 55 10             	mov    0x10(%ebp),%edx
 84b1600:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84b1604:	8b 55 0c             	mov    0xc(%ebp),%edx
 84b1607:	89 54 24 08          	mov    %edx,0x8(%esp)
 84b160b:	8d 55 ec             	lea    -0x14(%ebp),%edx
 84b160e:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b1612:	89 04 24             	mov    %eax,(%esp)
 84b1615:	e8 32 7f 21 00       	call   86c954c <_ZN9GameWorld20make_packet_chat_msgER11PacketGuardP5CUserPcic15ENUM_NOTIPACKET>
 84b161a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b161d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b1621:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b1624:	89 04 24             	mov    %eax,(%esp)
 84b1627:	e8 8e 6f 19 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84b162c:	eb 1b                	jmp    84b1649 <_ZN11game_master16CIndependentDrop11SendChatMsgEP5CUserPc+0x85>
 84b162e:	89 d3                	mov    %edx,%ebx
 84b1630:	89 c6                	mov    %eax,%esi
 84b1632:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b1635:	89 04 24             	mov    %eax,(%esp)
 84b1638:	e8 43 c8 0d 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84b163d:	89 f0                	mov    %esi,%eax
 84b163f:	89 da                	mov    %ebx,%edx
 84b1641:	89 04 24             	mov    %eax,(%esp)
 84b1644:	e8 07 21 63 00       	call   8ae3750 <_Unwind_Resume>
 84b1649:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b164c:	89 04 24             	mov    %eax,(%esp)
 84b164f:	e8 2c c8 0d 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84b1654:	83 c4 30             	add    $0x30,%esp
 84b1657:	5b                   	pop    %ebx
 84b1658:	5e                   	pop    %esi
 84b1659:	5d                   	pop    %ebp
 84b165a:	c3                   	ret
 84b165b:	90                   	nop

```

```c
// game_master::CIndependentDrop::SendChatMsg @ 0x84b15c4

/* game_master::CIndependentDrop::SendChatMsg(CUser*, char*) */

void __thiscall
game_master::CIndependentDrop::SendChatMsg(CIndependentDrop *this,CUser *param_1,char *param_2)

{
  size_t sVar1;
  GameWorld *pGVar2;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
  sVar1 = strlen(param_2);
                    /* try { // try from 084b15e4 to 084b162b has its CatchHandler @ 084b162e */
  pGVar2 = (GameWorld *)G_GameWorld();
  GameWorld::make_packet_chat_msg(pGVar2,local_18,param_1,param_2,sVar1,2,0xc);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## execute

```asm
// === 084b0b4e game_master::CIndependentDrop::execute  [0x084b0b4e-0x84b14b7] ===
 84b0b4e:	55                   	push   %ebp
 84b0b4f:	89 e5                	mov    %esp,%ebp
 84b0b51:	57                   	push   %edi
 84b0b52:	56                   	push   %esi
 84b0b53:	53                   	push   %ebx
 84b0b54:	81 ec 3c 7c 01 00    	sub    $0x17c3c,%esp
 84b0b5a:	8b 45 08             	mov    0x8(%ebp),%eax
 84b0b5d:	89 04 24             	mov    %eax,(%esp)
 84b0b60:	e8 55 34 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b0b65:	89 45 c0             	mov    %eax,-0x40(%ebp)
 84b0b68:	83 7d c0 00          	cmpl   $0x0,-0x40(%ebp)
 84b0b6c:	0f 84 34 09 00 00    	je     84b14a6 <_ZN11game_master16CIndependentDrop7executeEv+0x958>
 84b0b72:	8b 45 c0             	mov    -0x40(%ebp),%eax
 84b0b75:	89 04 24             	mov    %eax,(%esp)
 84b0b78:	e8 cf 45 1a 00       	call   865514c <_ZN5CUser8GetPartyEv>
 84b0b7d:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 84b0b80:	83 7d c4 00          	cmpl   $0x0,-0x3c(%ebp)
 84b0b84:	0f 84 1f 09 00 00    	je     84b14a9 <_ZN11game_master16CIndependentDrop7executeEv+0x95b>
 84b0b8a:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 84b0b8d:	89 04 24             	mov    %eax,(%esp)
 84b0b90:	e8 7f 4e df ff       	call   82a5a14 <_ZNK6CParty12getDungIndexEv>
 84b0b95:	0f b7 d8             	movzwl %ax,%ebx
 84b0b98:	e8 fe b5 c1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84b0b9d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84b0ba1:	89 04 24             	mov    %eax,(%esp)
 84b0ba4:	e8 4f ee ea ff       	call   835f9f8 <_ZNK12CDataManager12find_dungeonEi>
 84b0ba9:	89 45 c8             	mov    %eax,-0x38(%ebp)
 84b0bac:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 84b0bb0:	0f 84 f6 08 00 00    	je     84b14ac <_ZN11game_master16CIndependentDrop7executeEv+0x95e>
 84b0bb6:	8d 9d f8 fa ff ff    	lea    -0x508(%ebp),%ebx
 84b0bbc:	b8 00 00 00 00       	mov    $0x0,%eax
 84b0bc1:	ba 00 01 00 00       	mov    $0x100,%edx
 84b0bc6:	89 df                	mov    %ebx,%edi
 84b0bc8:	89 d1                	mov    %edx,%ecx
 84b0bca:	f3 ab                	rep stos %eax,%es:(%edi)
 84b0bcc:	8d 85 e0 83 fe ff    	lea    -0x17c20(%ebp),%eax
 84b0bd2:	ba 18 73 01 00       	mov    $0x17318,%edx
 84b0bd7:	89 54 24 08          	mov    %edx,0x8(%esp)
 84b0bdb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84b0be2:	00 
 84b0be3:	89 04 24             	mov    %eax,(%esp)
 84b0be6:	e8 d5 d0 bc ff       	call   807dcc0 <memset@plt>
 84b0beb:	8d 85 3a ff ff ff    	lea    -0xc6(%ebp),%eax
 84b0bf1:	bb 1e 00 00 00       	mov    $0x1e,%ebx
 84b0bf6:	ba 00 00 00 00       	mov    $0x0,%edx
 84b0bfb:	89 c1                	mov    %eax,%ecx
 84b0bfd:	83 e1 02             	and    $0x2,%ecx
 84b0c00:	85 c9                	test   %ecx,%ecx
 84b0c02:	74 09                	je     84b0c0d <_ZN11game_master16CIndependentDrop7executeEv+0xbf>
 84b0c04:	66 89 10             	mov    %dx,(%eax)
 84b0c07:	83 c0 02             	add    $0x2,%eax
 84b0c0a:	83 eb 02             	sub    $0x2,%ebx
 84b0c0d:	89 de                	mov    %ebx,%esi
 84b0c0f:	83 e6 fc             	and    $0xfffffffc,%esi
 84b0c12:	b9 00 00 00 00       	mov    $0x0,%ecx
 84b0c17:	89 14 08             	mov    %edx,(%eax,%ecx,1)
 84b0c1a:	83 c1 04             	add    $0x4,%ecx
 84b0c1d:	39 f1                	cmp    %esi,%ecx
 84b0c1f:	72 f6                	jb     84b0c17 <_ZN11game_master16CIndependentDrop7executeEv+0xc9>
 84b0c21:	01 c8                	add    %ecx,%eax
 84b0c23:	89 d9                	mov    %ebx,%ecx
 84b0c25:	83 e1 02             	and    $0x2,%ecx
 84b0c28:	85 c9                	test   %ecx,%ecx
 84b0c2a:	74 06                	je     84b0c32 <_ZN11game_master16CIndependentDrop7executeEv+0xe4>
 84b0c2c:	66 89 10             	mov    %dx,(%eax)
 84b0c2f:	83 c0 02             	add    $0x2,%eax
 84b0c32:	89 d9                	mov    %ebx,%ecx
 84b0c34:	83 e1 01             	and    $0x1,%ecx
 84b0c37:	85 c9                	test   %ecx,%ecx
 84b0c39:	74 05                	je     84b0c40 <_ZN11game_master16CIndependentDrop7executeEv+0xf2>
 84b0c3b:	88 10                	mov    %dl,(%eax)
 84b0c3d:	83 c0 01             	add    $0x1,%eax
 84b0c40:	8d 9d f8 f6 ff ff    	lea    -0x908(%ebp),%ebx
 84b0c46:	b8 00 00 00 00       	mov    $0x0,%eax
 84b0c4b:	ba 00 01 00 00       	mov    $0x100,%edx
 84b0c50:	89 df                	mov    %ebx,%edi
 84b0c52:	89 d1                	mov    %edx,%ecx
 84b0c54:	f3 ab                	rep stos %eax,%es:(%edi)
 84b0c56:	8b 45 08             	mov    0x8(%ebp),%eax
 84b0c59:	83 c0 0c             	add    $0xc,%eax
 84b0c5c:	89 04 24             	mov    %eax,(%esp)
 84b0c5f:	e8 f2 97 c2 ff       	call   80da456 <_ZNSt3setIiSt4lessIiESaIiEE5clearEv>
 84b0c64:	8b 45 08             	mov    0x8(%ebp),%eax
 84b0c67:	83 c0 24             	add    $0x24,%eax
 84b0c6a:	89 04 24             	mov    %eax,(%esp)
 84b0c6d:	e8 e4 97 c2 ff       	call   80da456 <_ZNSt3setIiSt4lessIiESaIiEE5clearEv>
 84b0c72:	8b 45 08             	mov    0x8(%ebp),%eax
 84b0c75:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84b0c79:	83 f0 01             	xor    $0x1,%eax
 84b0c7c:	84 c0                	test   %al,%al
 84b0c7e:	0f 84 2e 01 00 00    	je     84b0db2 <_ZN11game_master16CIndependentDrop7executeEv+0x264>
 84b0c84:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 84b0c87:	05 24 0b 00 00       	add    $0xb24,%eax
 84b0c8c:	89 04 24             	mov    %eax,(%esp)
 84b0c8f:	e8 38 bf d7 ff       	call   822cbcc <_ZN13CBattle_Field17GetCurrentMapInfoEv>
 84b0c94:	89 45 d0             	mov    %eax,-0x30(%ebp)
 84b0c97:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84b0c9a:	8d 50 0c             	lea    0xc(%eax),%edx
 84b0c9d:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 84b0ca3:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b0ca7:	89 04 24             	mov    %eax,(%esp)
 84b0caa:	e8 59 19 ca ff       	call   8152608 <_ZNSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 84b0caf:	83 ec 04             	sub    $0x4,%esp
 84b0cb2:	e9 bb 00 00 00       	jmp    84b0d72 <_ZN11game_master16CIndependentDrop7executeEv+0x224>
 84b0cb7:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 84b0cbd:	89 04 24             	mov    %eax,(%esp)
 84b0cc0:	e8 87 19 ca ff       	call   815264c <_ZNKSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEptEv>
 84b0cc5:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 84b0cc9:	3c 03                	cmp    $0x3,%al
 84b0ccb:	0f 9e c0             	setle  %al
 84b0cce:	84 c0                	test   %al,%al
 84b0cd0:	74 32                	je     84b0d04 <_ZN11game_master16CIndependentDrop7executeEv+0x1b6>
 84b0cd2:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 84b0cd8:	89 04 24             	mov    %eax,(%esp)
 84b0cdb:	e8 6c 19 ca ff       	call   815264c <_ZNKSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEptEv>
 84b0ce0:	8d 48 10             	lea    0x10(%eax),%ecx
 84b0ce3:	8b 45 08             	mov    0x8(%ebp),%eax
 84b0ce6:	8d 50 0c             	lea    0xc(%eax),%edx
 84b0ce9:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 84b0cef:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84b0cf3:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b0cf7:	89 04 24             	mov    %eax,(%esp)
 84b0cfa:	e8 c7 98 c2 ff       	call   80da5c6 <_ZNSt3setIiSt4lessIiESaIiEE6insertERKi>
 84b0cff:	83 ec 04             	sub    $0x4,%esp
 84b0d02:	eb 4b                	jmp    84b0d4f <_ZN11game_master16CIndependentDrop7executeEv+0x201>
 84b0d04:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 84b0d0a:	89 04 24             	mov    %eax,(%esp)
 84b0d0d:	e8 3a 19 ca ff       	call   815264c <_ZNKSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEptEv>
 84b0d12:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 84b0d16:	3c 08                	cmp    $0x8,%al
 84b0d18:	0f 9e c0             	setle  %al
 84b0d1b:	84 c0                	test   %al,%al
 84b0d1d:	74 30                	je     84b0d4f <_ZN11game_master16CIndependentDrop7executeEv+0x201>
 84b0d1f:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 84b0d25:	89 04 24             	mov    %eax,(%esp)
 84b0d28:	e8 1f 19 ca ff       	call   815264c <_ZNKSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEptEv>
 84b0d2d:	8d 48 10             	lea    0x10(%eax),%ecx
 84b0d30:	8b 45 08             	mov    0x8(%ebp),%eax
 84b0d33:	8d 50 24             	lea    0x24(%eax),%edx
 84b0d36:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 84b0d3c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84b0d40:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b0d44:	89 04 24             	mov    %eax,(%esp)
 84b0d47:	e8 7a 98 c2 ff       	call   80da5c6 <_ZNSt3setIiSt4lessIiESaIiEE6insertERKi>
 84b0d4c:	83 ec 04             	sub    $0x4,%esp
 84b0d4f:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 84b0d55:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84b0d5c:	00 
 84b0d5d:	8d 95 2c ff ff ff    	lea    -0xd4(%ebp),%edx
 84b0d63:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b0d67:	89 04 24             	mov    %eax,(%esp)
 84b0d6a:	e8 1d 4e ca ff       	call   8155b8c <_ZNSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEppEi>
 84b0d6f:	83 ec 04             	sub    $0x4,%esp
 84b0d72:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84b0d75:	8d 50 0c             	lea    0xc(%eax),%edx
 84b0d78:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 84b0d7e:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b0d82:	89 04 24             	mov    %eax,(%esp)
 84b0d85:	e8 fc 16 ca ff       	call   8152486 <_ZNSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 84b0d8a:	83 ec 04             	sub    $0x4,%esp
 84b0d8d:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 84b0d93:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b0d97:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 84b0d9d:	89 04 24             	mov    %eax,(%esp)
 84b0da0:	e8 07 17 ca ff       	call   81524ac <_ZNKSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEneERKS4_>
 84b0da5:	84 c0                	test   %al,%al
 84b0da7:	0f 85 0a ff ff ff    	jne    84b0cb7 <_ZN11game_master16CIndependentDrop7executeEv+0x169>
 84b0dad:	e9 de 02 00 00       	jmp    84b1090 <_ZN11game_master16CIndependentDrop7executeEv+0x542>
 84b0db2:	e8 e4 b3 c1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84b0db7:	8b 40 04             	mov    0x4(%eax),%eax
 84b0dba:	89 04 24             	mov    %eax,(%esp)
 84b0dbd:	e8 8c 33 00 00       	call   84b414e <_ZN8CMapList10GetMapListEv>
 84b0dc2:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84b0dc5:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 84b0dcb:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 84b0dce:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b0dd2:	89 04 24             	mov    %eax,(%esp)
 84b0dd5:	e8 32 95 ed ff       	call   838a30c <_ZNK9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EE5beginEv>
 84b0dda:	83 ec 04             	sub    $0x4,%esp
 84b0ddd:	e9 76 02 00 00       	jmp    84b1058 <_ZN11game_master16CIndependentDrop7executeEv+0x50a>
 84b0de2:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 84b0de8:	89 04 24             	mov    %eax,(%esp)
 84b0deb:	e8 b2 95 ed ff       	call   838a3a2 <_ZNK9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKiP4CMapEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 84b0df0:	8b 40 04             	mov    0x4(%eax),%eax
 84b0df3:	89 04 24             	mov    %eax,(%esp)
 84b0df6:	e8 0d 31 ec ff       	call   8373f08 <_ZNK4CMap15getDungeonListsEv>
 84b0dfb:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84b0dfe:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84b0e01:	89 04 24             	mov    %eax,(%esp)
 84b0e04:	e8 e7 ce c4 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 84b0e09:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 84b0e0f:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 84b0e15:	8b 55 d8             	mov    -0x28(%ebp),%edx
 84b0e18:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b0e1c:	89 04 24             	mov    %eax,(%esp)
 84b0e1f:	e8 76 7b d8 ff       	call   823899a <_ZNKSt4listIiSaIiEE3endEv>
 84b0e24:	83 ec 04             	sub    $0x4,%esp
 84b0e27:	8d 45 80             	lea    -0x80(%ebp),%eax
 84b0e2a:	8b 55 d8             	mov    -0x28(%ebp),%edx
 84b0e2d:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b0e31:	89 04 24             	mov    %eax,(%esp)
 84b0e34:	e8 3b 7b d8 ff       	call   8238974 <_ZNKSt4listIiSaIiEE5beginEv>
 84b0e39:	83 ec 04             	sub    $0x4,%esp
 84b0e3c:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 84b0e42:	8d 95 78 ff ff ff    	lea    -0x88(%ebp),%edx
 84b0e48:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84b0e4c:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 84b0e52:	89 54 24 08          	mov    %edx,0x8(%esp)
 84b0e56:	8b 55 80             	mov    -0x80(%ebp),%edx
 84b0e59:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b0e5d:	89 04 24             	mov    %eax,(%esp)
 84b0e60:	e8 a4 3c 00 00       	call   84b4b09 <_ZSt4findISt20_List_const_iteratorIiEiET_S2_S2_RKT0_>
 84b0e65:	83 ec 04             	sub    $0x4,%esp
 84b0e68:	8d 45 84             	lea    -0x7c(%ebp),%eax
 84b0e6b:	8b 55 d8             	mov    -0x28(%ebp),%edx
 84b0e6e:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b0e72:	89 04 24             	mov    %eax,(%esp)
 84b0e75:	e8 20 7b d8 ff       	call   823899a <_ZNKSt4listIiSaIiEE3endEv>
 84b0e7a:	83 ec 04             	sub    $0x4,%esp
 84b0e7d:	8d 45 84             	lea    -0x7c(%ebp),%eax
 84b0e80:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b0e84:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 84b0e8a:	89 04 24             	mov    %eax,(%esp)
 84b0e8d:	e8 fc d0 d8 ff       	call   823df8e <_ZNKSt20_List_const_iteratorIiEneERKS0_>
 84b0e92:	84 c0                	test   %al,%al
 84b0e94:	0f 84 9e 01 00 00    	je     84b1038 <_ZN11game_master16CIndependentDrop7executeEv+0x4ea>
 84b0e9a:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 84b0ea0:	89 04 24             	mov    %eax,(%esp)
 84b0ea3:	e8 fa 94 ed ff       	call   838a3a2 <_ZNK9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKiP4CMapEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 84b0ea8:	8b 50 04             	mov    0x4(%eax),%edx
 84b0eab:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 84b0eb1:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b0eb5:	89 04 24             	mov    %eax,(%esp)
 84b0eb8:	e8 d9 38 c8 ff       	call   8134796 <_ZNK4CMap16get_monster_listEv>
 84b0ebd:	83 ec 04             	sub    $0x4,%esp
 84b0ec0:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 84b0ec6:	8d 95 18 ff ff ff    	lea    -0xe8(%ebp),%edx
 84b0ecc:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b0ed0:	89 04 24             	mov    %eax,(%esp)
 84b0ed3:	e8 44 19 ca ff       	call   815281c <_ZNSt4listI11_mapMonsterSaIS0_EE5beginEv>
 84b0ed8:	83 ec 04             	sub    $0x4,%esp
 84b0edb:	eb 4c                	jmp    84b0f29 <_ZN11game_master16CIndependentDrop7executeEv+0x3db>
 84b0edd:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 84b0ee3:	89 04 24             	mov    %eax,(%esp)
 84b0ee6:	e8 6b 08 e6 ff       	call   8311756 <_ZNKSt14_List_iteratorI11_mapMonsterEptEv>
 84b0eeb:	89 c2                	mov    %eax,%edx
 84b0eed:	8b 45 08             	mov    0x8(%ebp),%eax
 84b0ef0:	8d 48 0c             	lea    0xc(%eax),%ecx
 84b0ef3:	8d 45 8c             	lea    -0x74(%ebp),%eax
 84b0ef6:	89 54 24 08          	mov    %edx,0x8(%esp)
 84b0efa:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84b0efe:	89 04 24             	mov    %eax,(%esp)
 84b0f01:	e8 c0 96 c2 ff       	call   80da5c6 <_ZNSt3setIiSt4lessIiESaIiEE6insertERKi>
 84b0f06:	83 ec 04             	sub    $0x4,%esp
 84b0f09:	8d 45 94             	lea    -0x6c(%ebp),%eax
 84b0f0c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84b0f13:	00 
 84b0f14:	8d 95 14 ff ff ff    	lea    -0xec(%ebp),%edx
 84b0f1a:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b0f1e:	89 04 24             	mov    %eax,(%esp)
 84b0f21:	e8 3e 08 e6 ff       	call   8311764 <_ZNSt14_List_iteratorI11_mapMonsterEppEi>
 84b0f26:	83 ec 04             	sub    $0x4,%esp
 84b0f29:	8d 45 88             	lea    -0x78(%ebp),%eax
 84b0f2c:	8d 95 18 ff ff ff    	lea    -0xe8(%ebp),%edx
 84b0f32:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b0f36:	89 04 24             	mov    %eax,(%esp)
 84b0f39:	e8 ce aa c8 ff       	call   813ba0c <_ZNSt4listI11_mapMonsterSaIS0_EE3endEv>
 84b0f3e:	83 ec 04             	sub    $0x4,%esp
 84b0f41:	8d 45 88             	lea    -0x78(%ebp),%eax
 84b0f44:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b0f48:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 84b0f4e:	89 04 24             	mov    %eax,(%esp)
 84b0f51:	e8 ec 07 e6 ff       	call   8311742 <_ZNKSt14_List_iteratorI11_mapMonsterEneERKS1_>
 84b0f56:	84 c0                	test   %al,%al
 84b0f58:	75 83                	jne    84b0edd <_ZN11game_master16CIndependentDrop7executeEv+0x38f>
 84b0f5a:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 84b0f60:	89 04 24             	mov    %eax,(%esp)
 84b0f63:	e8 3a 94 ed ff       	call   838a3a2 <_ZNK9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKiP4CMapEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 84b0f68:	8b 40 04             	mov    0x4(%eax),%eax
 84b0f6b:	89 04 24             	mov    %eax,(%esp)
 84b0f6e:	e8 89 f9 c9 ff       	call   81508fc <_ZNK4CMap15getAICharactersEv>
 84b0f73:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84b0f76:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 84b0f7c:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84b0f7f:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b0f83:	89 04 24             	mov    %eax,(%esp)
 84b0f86:	e8 97 17 ca ff       	call   8152722 <_ZNKSt6vectorI27STAICharacterMapArrangeDataSaIS0_EE5beginEv>
 84b0f8b:	83 ec 04             	sub    $0x4,%esp
 84b0f8e:	eb 4c                	jmp    84b0fdc <_ZN11game_master16CIndependentDrop7executeEv+0x48e>
 84b0f90:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 84b0f96:	89 04 24             	mov    %eax,(%esp)
 84b0f99:	e8 c0 3b 00 00       	call   84b4b5e <_ZNK9__gnu_cxx17__normal_iteratorIPK27STAICharacterMapArrangeDataSt6vectorIS1_SaIS1_EEEptEv>
 84b0f9e:	89 c2                	mov    %eax,%edx
 84b0fa0:	8b 45 08             	mov    0x8(%ebp),%eax
 84b0fa3:	8d 48 24             	lea    0x24(%eax),%ecx
 84b0fa6:	8d 45 9c             	lea    -0x64(%ebp),%eax
 84b0fa9:	89 54 24 08          	mov    %edx,0x8(%esp)
 84b0fad:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84b0fb1:	89 04 24             	mov    %eax,(%esp)
 84b0fb4:	e8 0d 96 c2 ff       	call   80da5c6 <_ZNSt3setIiSt4lessIiESaIiEE6insertERKi>
 84b0fb9:	83 ec 04             	sub    $0x4,%esp
 84b0fbc:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84b0fbf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84b0fc6:	00 
 84b0fc7:	8d 95 10 ff ff ff    	lea    -0xf0(%ebp),%edx
 84b0fcd:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b0fd1:	89 04 24             	mov    %eax,(%esp)
 84b0fd4:	e8 8f 3b 00 00       	call   84b4b68 <_ZN9__gnu_cxx17__normal_iteratorIPK27STAICharacterMapArrangeDataSt6vectorIS1_SaIS1_EEEppEi>
 84b0fd9:	83 ec 04             	sub    $0x4,%esp
 84b0fdc:	8d 45 98             	lea    -0x68(%ebp),%eax
 84b0fdf:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84b0fe2:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b0fe6:	89 04 24             	mov    %eax,(%esp)
 84b0fe9:	e8 60 17 ca ff       	call   815274e <_ZNKSt6vectorI27STAICharacterMapArrangeDataSaIS0_EE3endEv>
 84b0fee:	83 ec 04             	sub    $0x4,%esp
 84b0ff1:	8d 45 98             	lea    -0x68(%ebp),%eax
 84b0ff4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b0ff8:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 84b0ffe:	89 04 24             	mov    %eax,(%esp)
 84b1001:	e8 74 17 ca ff       	call   815277a <_ZN9__gnu_cxxneIPK27STAICharacterMapArrangeDataSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 84b1006:	84 c0                	test   %al,%al
 84b1008:	75 86                	jne    84b0f90 <_ZN11game_master16CIndependentDrop7executeEv+0x442>
 84b100a:	eb 1e                	jmp    84b102a <_ZN11game_master16CIndependentDrop7executeEv+0x4dc>
 84b100c:	89 d3                	mov    %edx,%ebx
 84b100e:	89 c6                	mov    %eax,%esi
 84b1010:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 84b1016:	89 04 24             	mov    %eax,(%esp)
 84b1019:	e8 64 37 c8 ff       	call   8134782 <_ZNSt4listI11_mapMonsterSaIS0_EED1Ev>
 84b101e:	89 f0                	mov    %esi,%eax
 84b1020:	89 da                	mov    %ebx,%edx
 84b1022:	89 04 24             	mov    %eax,(%esp)
 84b1025:	e8 26 27 63 00       	call   8ae3750 <_Unwind_Resume>
 84b102a:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 84b1030:	89 04 24             	mov    %eax,(%esp)
 84b1033:	e8 4a 37 c8 ff       	call   8134782 <_ZNSt4listI11_mapMonsterSaIS0_EED1Ev>
 84b1038:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84b103b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84b1042:	00 
 84b1043:	8d 95 24 ff ff ff    	lea    -0xdc(%ebp),%edx
 84b1049:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b104d:	89 04 24             	mov    %eax,(%esp)
 84b1050:	e8 dd 92 ed ff       	call   838a332 <_ZN9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKiP4CMapEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEppEi>
 84b1055:	83 ec 04             	sub    $0x4,%esp
 84b1058:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84b105e:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 84b1061:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b1065:	89 04 24             	mov    %eax,(%esp)
 84b1068:	e8 fb 92 ed ff       	call   838a368 <_ZNK9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 84b106d:	83 ec 04             	sub    $0x4,%esp
 84b1070:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84b1076:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b107a:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 84b1080:	89 04 24             	mov    %eax,(%esp)
 84b1083:	e8 22 35 ee ff       	call   83945aa <_ZNK9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKiP4CMapEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEneERKSD_>
 84b1088:	84 c0                	test   %al,%al
 84b108a:	0f 85 52 fd ff ff    	jne    84b0de2 <_ZN11game_master16CIndependentDrop7executeEv+0x294>
 84b1090:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 84b1097:	8b 45 08             	mov    0x8(%ebp),%eax
 84b109a:	8d 50 0c             	lea    0xc(%eax),%edx
 84b109d:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 84b10a3:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b10a7:	89 04 24             	mov    %eax,(%esp)
 84b10aa:	e8 b7 50 c3 ff       	call   80e6166 <_ZNKSt3setIiSt4lessIiESaIiEE5beginEv>
 84b10af:	83 ec 04             	sub    $0x4,%esp
 84b10b2:	e9 41 01 00 00       	jmp    84b11f8 <_ZN11game_master16CIndependentDrop7executeEv+0x6aa>
 84b10b7:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 84b10bd:	89 04 24             	mov    %eax,(%esp)
 84b10c0:	e8 e5 50 c3 ff       	call   80e61aa <_ZNKSt23_Rb_tree_const_iteratorIiEdeEv>
 84b10c5:	8b 18                	mov    (%eax),%ebx
 84b10c7:	e8 cf b0 c1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84b10cc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84b10d0:	89 04 24             	mov    %eax,(%esp)
 84b10d3:	e8 ac ec ea ff       	call   835fd84 <_ZNK12CDataManager12find_monsterEi>
 84b10d8:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84b10db:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 84b10df:	0f 84 12 01 00 00    	je     84b11f7 <_ZN11game_master16CIndependentDrop7executeEv+0x6a9>
 84b10e5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84b10e8:	89 04 24             	mov    %eax,(%esp)
 84b10eb:	e8 d6 d5 e5 ff       	call   830e6c6 <_ZNK8CMonster16getMonsterScriptEv>
 84b10f0:	05 ac 03 00 00       	add    $0x3ac,%eax
 84b10f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b10f9:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 84b10ff:	89 04 24             	mov    %eax,(%esp)
 84b1102:	e8 45 34 00 00       	call   84b454c <_ZNSt6vectorI26stMonsterIndependentDrop_tSaIS0_EEC1ERKS2_>
 84b1107:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 84b110d:	89 04 24             	mov    %eax,(%esp)
 84b1110:	e8 87 3a 00 00       	call   84b4b9c <_ZNKSt6vectorI26stMonsterIndependentDrop_tSaIS0_EE5emptyEv>
 84b1115:	83 f0 01             	xor    $0x1,%eax
 84b1118:	84 c0                	test   %al,%al
 84b111a:	0f 84 89 00 00 00    	je     84b11a9 <_ZN11game_master16CIndependentDrop7executeEv+0x65b>
 84b1120:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84b1123:	89 04 24             	mov    %eax,(%esp)
 84b1126:	e8 9b d5 e5 ff       	call   830e6c6 <_ZNK8CMonster16getMonsterScriptEv>
 84b112b:	83 c0 04             	add    $0x4,%eax
 84b112e:	89 04 24             	mov    %eax,(%esp)
 84b1131:	e8 ba 53 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84b1136:	89 c3                	mov    %eax,%ebx
 84b1138:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 84b113e:	89 04 24             	mov    %eax,(%esp)
 84b1141:	e8 64 50 c3 ff       	call   80e61aa <_ZNKSt23_Rb_tree_const_iteratorIiEdeEv>
 84b1146:	8b 00                	mov    (%eax),%eax
 84b1148:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84b114c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84b1150:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84b1157:	00 
 84b1158:	c7 44 24 04 52 02 c8 	movl   $0x8c80252,0x4(%esp)
 84b115f:	08 
 84b1160:	8d 85 f8 fa ff ff    	lea    -0x508(%ebp),%eax
 84b1166:	89 04 24             	mov    %eax,(%esp)
 84b1169:	e8 d2 d2 bc ff       	call   807e440 <sprintf@plt>
 84b116e:	8d 85 f8 fa ff ff    	lea    -0x508(%ebp),%eax
 84b1174:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b1178:	8d 85 e0 83 fe ff    	lea    -0x17c20(%ebp),%eax
 84b117e:	89 04 24             	mov    %eax,(%esp)
 84b1181:	e8 da cb bc ff       	call   807dd60 <strcat@plt>
 84b1186:	8d 85 e0 83 fe ff    	lea    -0x17c20(%ebp),%eax
 84b118c:	89 44 24 08          	mov    %eax,0x8(%esp)
 84b1190:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 84b1196:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b119a:	8b 45 08             	mov    0x8(%ebp),%eax
 84b119d:	89 04 24             	mov    %eax,(%esp)
 84b11a0:	e8 b7 04 00 00       	call   84b165c <_ZN11game_master16CIndependentDrop11ResultToStrERKSt6vectorI26stMonsterIndependentDrop_tSaIS2_EEPc>
 84b11a5:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 84b11a9:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84b11ac:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84b11b3:	00 
 84b11b4:	8d 95 34 ff ff ff    	lea    -0xcc(%ebp),%edx
 84b11ba:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b11be:	89 04 24             	mov    %eax,(%esp)
 84b11c1:	e8 1a 3a 00 00       	call   84b4be0 <_ZNSt23_Rb_tree_const_iteratorIiEppEi>
 84b11c6:	83 ec 04             	sub    $0x4,%esp
 84b11c9:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 84b11cf:	89 04 24             	mov    %eax,(%esp)
 84b11d2:	e8 09 07 ed ff       	call   83818e0 <_ZNSt6vectorI26stMonsterIndependentDrop_tSaIS0_EED1Ev>
 84b11d7:	eb 1f                	jmp    84b11f8 <_ZN11game_master16CIndependentDrop7executeEv+0x6aa>
 84b11d9:	89 d3                	mov    %edx,%ebx
 84b11db:	89 c6                	mov    %eax,%esi
 84b11dd:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 84b11e3:	89 04 24             	mov    %eax,(%esp)
 84b11e6:	e8 f5 06 ed ff       	call   83818e0 <_ZNSt6vectorI26stMonsterIndependentDrop_tSaIS0_EED1Ev>
 84b11eb:	89 f0                	mov    %esi,%eax
 84b11ed:	89 da                	mov    %ebx,%edx
 84b11ef:	89 04 24             	mov    %eax,(%esp)
 84b11f2:	e8 59 25 63 00       	call   8ae3750 <_Unwind_Resume>
 84b11f7:	90                   	nop
 84b11f8:	8b 45 08             	mov    0x8(%ebp),%eax
 84b11fb:	8d 50 0c             	lea    0xc(%eax),%edx
 84b11fe:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84b1201:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b1205:	89 04 24             	mov    %eax,(%esp)
 84b1208:	e8 89 92 c2 ff       	call   80da496 <_ZNKSt3setIiSt4lessIiESaIiEE3endEv>
 84b120d:	83 ec 04             	sub    $0x4,%esp
 84b1210:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84b1213:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b1217:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 84b121d:	89 04 24             	mov    %eax,(%esp)
 84b1220:	e8 2d 4f c3 ff       	call   80e6152 <_ZNKSt23_Rb_tree_const_iteratorIiEneERKS0_>
 84b1225:	84 c0                	test   %al,%al
 84b1227:	0f 85 8a fe ff ff    	jne    84b10b7 <_ZN11game_master16CIndependentDrop7executeEv+0x569>
 84b122d:	8b 45 08             	mov    0x8(%ebp),%eax
 84b1230:	8d 50 24             	lea    0x24(%eax),%edx
 84b1233:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 84b1239:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b123d:	89 04 24             	mov    %eax,(%esp)
 84b1240:	e8 21 4f c3 ff       	call   80e6166 <_ZNKSt3setIiSt4lessIiESaIiEE5beginEv>
 84b1245:	83 ec 04             	sub    $0x4,%esp
 84b1248:	e9 30 01 00 00       	jmp    84b137d <_ZN11game_master16CIndependentDrop7executeEv+0x82f>
 84b124d:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 84b1253:	89 04 24             	mov    %eax,(%esp)
 84b1256:	e8 4f 4f c3 ff       	call   80e61aa <_ZNKSt23_Rb_tree_const_iteratorIiEdeEv>
 84b125b:	8b 00                	mov    (%eax),%eax
 84b125d:	89 c3                	mov    %eax,%ebx
 84b125f:	e8 37 af c1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84b1264:	8b 80 9c 86 00 00    	mov    0x869c(%eax),%eax
 84b126a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84b126e:	89 04 24             	mov    %eax,(%esp)
 84b1271:	e8 5c 97 e9 ff       	call   834a9d2 <_ZN16CAICharacterList3getEj>
 84b1276:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84b1279:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 84b127d:	0f 84 f9 00 00 00    	je     84b137c <_ZN11game_master16CIndependentDrop7executeEv+0x82e>
 84b1283:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 84b1289:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84b128c:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b1290:	89 04 24             	mov    %eax,(%esp)
 84b1293:	e8 76 2e 00 00       	call   84b410e <_ZNK12CAICharacter19getIndepentDropItemEv>
 84b1298:	83 ec 04             	sub    $0x4,%esp
 84b129b:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 84b12a1:	89 04 24             	mov    %eax,(%esp)
 84b12a4:	e8 f3 38 00 00       	call   84b4b9c <_ZNKSt6vectorI26stMonsterIndependentDrop_tSaIS0_EE5emptyEv>
 84b12a9:	83 f0 01             	xor    $0x1,%eax
 84b12ac:	84 c0                	test   %al,%al
 84b12ae:	74 7e                	je     84b132e <_ZN11game_master16CIndependentDrop7executeEv+0x7e0>
 84b12b0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84b12b3:	89 04 24             	mov    %eax,(%esp)
 84b12b6:	e8 7d 2e 00 00       	call   84b4138 <_ZNK12CAICharacter7GetNameEv>
 84b12bb:	89 c3                	mov    %eax,%ebx
 84b12bd:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 84b12c3:	89 04 24             	mov    %eax,(%esp)
 84b12c6:	e8 df 4e c3 ff       	call   80e61aa <_ZNKSt23_Rb_tree_const_iteratorIiEdeEv>
 84b12cb:	8b 00                	mov    (%eax),%eax
 84b12cd:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84b12d1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84b12d5:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84b12dc:	00 
 84b12dd:	c7 44 24 04 52 02 c8 	movl   $0x8c80252,0x4(%esp)
 84b12e4:	08 
 84b12e5:	8d 85 f8 fa ff ff    	lea    -0x508(%ebp),%eax
 84b12eb:	89 04 24             	mov    %eax,(%esp)
 84b12ee:	e8 4d d1 bc ff       	call   807e440 <sprintf@plt>
 84b12f3:	8d 85 f8 fa ff ff    	lea    -0x508(%ebp),%eax
 84b12f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b12fd:	8d 85 e0 83 fe ff    	lea    -0x17c20(%ebp),%eax
 84b1303:	89 04 24             	mov    %eax,(%esp)
 84b1306:	e8 55 ca bc ff       	call   807dd60 <strcat@plt>
 84b130b:	8d 85 e0 83 fe ff    	lea    -0x17c20(%ebp),%eax
 84b1311:	89 44 24 08          	mov    %eax,0x8(%esp)
 84b1315:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 84b131b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b131f:	8b 45 08             	mov    0x8(%ebp),%eax
 84b1322:	89 04 24             	mov    %eax,(%esp)
 84b1325:	e8 32 03 00 00       	call   84b165c <_ZN11game_master16CIndependentDrop11ResultToStrERKSt6vectorI26stMonsterIndependentDrop_tSaIS2_EEPc>
 84b132a:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 84b132e:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84b1331:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84b1338:	00 
 84b1339:	8d 95 30 ff ff ff    	lea    -0xd0(%ebp),%edx
 84b133f:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b1343:	89 04 24             	mov    %eax,(%esp)
 84b1346:	e8 95 38 00 00       	call   84b4be0 <_ZNSt23_Rb_tree_const_iteratorIiEppEi>
 84b134b:	83 ec 04             	sub    $0x4,%esp
 84b134e:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 84b1354:	89 04 24             	mov    %eax,(%esp)
 84b1357:	e8 84 05 ed ff       	call   83818e0 <_ZNSt6vectorI26stMonsterIndependentDrop_tSaIS0_EED1Ev>
 84b135c:	eb 1f                	jmp    84b137d <_ZN11game_master16CIndependentDrop7executeEv+0x82f>
 84b135e:	89 d3                	mov    %edx,%ebx
 84b1360:	89 c6                	mov    %eax,%esi
 84b1362:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 84b1368:	89 04 24             	mov    %eax,(%esp)
 84b136b:	e8 70 05 ed ff       	call   83818e0 <_ZNSt6vectorI26stMonsterIndependentDrop_tSaIS0_EED1Ev>
 84b1370:	89 f0                	mov    %esi,%eax
 84b1372:	89 da                	mov    %ebx,%edx
 84b1374:	89 04 24             	mov    %eax,(%esp)
 84b1377:	e8 d4 23 63 00       	call   8ae3750 <_Unwind_Resume>
 84b137c:	90                   	nop
 84b137d:	8b 45 08             	mov    0x8(%ebp),%eax
 84b1380:	8d 50 24             	lea    0x24(%eax),%edx
 84b1383:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84b1386:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b138a:	89 04 24             	mov    %eax,(%esp)
 84b138d:	e8 04 91 c2 ff       	call   80da496 <_ZNKSt3setIiSt4lessIiESaIiEE3endEv>
 84b1392:	83 ec 04             	sub    $0x4,%esp
 84b1395:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84b1398:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b139c:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 84b13a2:	89 04 24             	mov    %eax,(%esp)
 84b13a5:	e8 a8 4d c3 ff       	call   80e6152 <_ZNKSt23_Rb_tree_const_iteratorIiEneERKS0_>
 84b13aa:	84 c0                	test   %al,%al
 84b13ac:	0f 85 9b fe ff ff    	jne    84b124d <_ZN11game_master16CIndependentDrop7executeEv+0x6ff>
 84b13b2:	8b 45 08             	mov    0x8(%ebp),%eax
 84b13b5:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84b13b9:	83 f0 01             	xor    $0x1,%eax
 84b13bc:	84 c0                	test   %al,%al
 84b13be:	74 27                	je     84b13e7 <_ZN11game_master16CIndependentDrop7executeEv+0x899>
 84b13c0:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84b13c3:	89 04 24             	mov    %eax,(%esp)
 84b13c6:	e8 db 41 c9 ff       	call   81455a6 <_ZNK8CDungeon14GetDungeonNameEv>
 84b13cb:	89 44 24 08          	mov    %eax,0x8(%esp)
 84b13cf:	c7 44 24 04 5c 02 c8 	movl   $0x8c8025c,0x4(%esp)
 84b13d6:	08 
 84b13d7:	8d 85 3a ff ff ff    	lea    -0xc6(%ebp),%eax
 84b13dd:	89 04 24             	mov    %eax,(%esp)
 84b13e0:	e8 5b d0 bc ff       	call   807e440 <sprintf@plt>
 84b13e5:	eb 25                	jmp    84b140c <_ZN11game_master16CIndependentDrop7executeEv+0x8be>
 84b13e7:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84b13ea:	89 04 24             	mov    %eax,(%esp)
 84b13ed:	e8 b4 41 c9 ff       	call   81455a6 <_ZNK8CDungeon14GetDungeonNameEv>
 84b13f2:	89 44 24 08          	mov    %eax,0x8(%esp)
 84b13f6:	c7 44 24 04 78 02 c8 	movl   $0x8c80278,0x4(%esp)
 84b13fd:	08 
 84b13fe:	8d 85 3a ff ff ff    	lea    -0xc6(%ebp),%eax
 84b1404:	89 04 24             	mov    %eax,(%esp)
 84b1407:	e8 34 d0 bc ff       	call   807e440 <sprintf@plt>
 84b140c:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 84b1410:	74 50                	je     84b1462 <_ZN11game_master16CIndependentDrop7executeEv+0x914>
 84b1412:	8b 45 08             	mov    0x8(%ebp),%eax
 84b1415:	89 04 24             	mov    %eax,(%esp)
 84b1418:	e8 9d 2b 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b141d:	8d 95 e0 83 fe ff    	lea    -0x17c20(%ebp),%edx
 84b1423:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84b1427:	8d 95 3a ff ff ff    	lea    -0xc6(%ebp),%edx
 84b142d:	89 54 24 08          	mov    %edx,0x8(%esp)
 84b1431:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b1435:	8b 45 08             	mov    0x8(%ebp),%eax
 84b1438:	89 04 24             	mov    %eax,(%esp)
 84b143b:	e8 78 00 00 00       	call   84b14b8 <_ZN11game_master16CIndependentDrop11printClientEP5CUserPKcS4_>
 84b1440:	8d 85 3a ff ff ff    	lea    -0xc6(%ebp),%eax
 84b1446:	89 44 24 08          	mov    %eax,0x8(%esp)
 84b144a:	c7 44 24 04 98 02 c8 	movl   $0x8c80298,0x4(%esp)
 84b1451:	08 
 84b1452:	8d 85 f8 f6 ff ff    	lea    -0x908(%ebp),%eax
 84b1458:	89 04 24             	mov    %eax,(%esp)
 84b145b:	e8 e0 cf bc ff       	call   807e440 <sprintf@plt>
 84b1460:	eb 1e                	jmp    84b1480 <_ZN11game_master16CIndependentDrop7executeEv+0x932>
 84b1462:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 84b1469:	00 
 84b146a:	c7 44 24 04 b4 02 c8 	movl   $0x8c802b4,0x4(%esp)
 84b1471:	08 
 84b1472:	8d 85 f8 f6 ff ff    	lea    -0x908(%ebp),%eax
 84b1478:	89 04 24             	mov    %eax,(%esp)
 84b147b:	e8 20 c4 bc ff       	call   807d8a0 <memcpy@plt>
 84b1480:	8b 45 08             	mov    0x8(%ebp),%eax
 84b1483:	89 04 24             	mov    %eax,(%esp)
 84b1486:	e8 2f 2b 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b148b:	8d 95 f8 f6 ff ff    	lea    -0x908(%ebp),%edx
 84b1491:	89 54 24 08          	mov    %edx,0x8(%esp)
 84b1495:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b1499:	8b 45 08             	mov    0x8(%ebp),%eax
 84b149c:	89 04 24             	mov    %eax,(%esp)
 84b149f:	e8 20 01 00 00       	call   84b15c4 <_ZN11game_master16CIndependentDrop11SendChatMsgEP5CUserPc>
 84b14a4:	eb 07                	jmp    84b14ad <_ZN11game_master16CIndependentDrop7executeEv+0x95f>
 84b14a6:	90                   	nop
 84b14a7:	eb 04                	jmp    84b14ad <_ZN11game_master16CIndependentDrop7executeEv+0x95f>
 84b14a9:	90                   	nop
 84b14aa:	eb 01                	jmp    84b14ad <_ZN11game_master16CIndependentDrop7executeEv+0x95f>
 84b14ac:	90                   	nop
 84b14ad:	8d 65 f4             	lea    -0xc(%ebp),%esp
 84b14b0:	83 c4 00             	add    $0x0,%esp
 84b14b3:	5b                   	pop    %ebx
 84b14b4:	5e                   	pop    %esi
 84b14b5:	5f                   	pop    %edi
 84b14b6:	5d                   	pop    %ebp
 84b14b7:	c3                   	ret

```

```c
// game_master::CIndependentDrop::execute @ 0x84b0b4e

/* WARNING: Removing unreachable block (ram,0x084b0c3b) */
/* game_master::CIndependentDrop::execute() */

void __thiscall game_master::CIndependentDrop::execute(CIndependentDrop *this)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  bool bVar11;
  byte bVar12;
  int aiStack_17c54 [2];
  int aiStack_17c40 [7];
  undefined1 auStack_17c24 [95000];
  undefined4 local_90c [256];
  undefined4 local_50c [256];
  undefined1 local_10c [12];
  undefined1 local_100 [12];
  undefined1 local_f4 [4];
  undefined1 local_f0 [4];
  undefined1 local_ec [8];
  undefined1 local_e4 [4];
  hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> local_e0 [8];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_d8 [4];
  undefined1 local_d4 [4];
  undefined1 local_d0 [6];
  undefined2 local_ca;
  undefined2 local_c8 [14];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_ac [4];
  int local_a8 [2];
  int local_a0 [2];
  _Rb_tree_iterator<std::pair<int_const,map_monster>> local_98 [4];
  undefined1 local_94 [8];
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  undefined1 local_78 [8];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [8];
  undefined1 local_60 [4];
  undefined1 local_5c [8];
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  CUser *local_44;
  CParty *local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  
  bVar12 = 0;
  piVar9 = (int *)&stack0xfffe83b4;
  local_44 = (CUser *)CCommand::GetUser((CCommand *)this);
  if ((local_44 != (CUser *)0x0) &&
     (local_40 = (CParty *)CUser::GetParty(local_44), local_40 != (CParty *)0x0)) {
    CParty::getDungIndex(local_40);
    iVar2 = G_CDataManager();
    local_3c = CDataManager::find_dungeon(iVar2);
    if (local_3c != 0) {
      puVar10 = local_50c;
      for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
      }
      memset(auStack_17c24,0,95000);
      puVar3 = &local_ca;
      uVar8 = 0x1e;
      bVar11 = ((uint)puVar3 & 2) != 0;
      if (bVar11) {
        local_ca = 0;
        puVar3 = local_c8;
        uVar8 = 0x1c;
      }
      uVar7 = 0;
      do {
        *(undefined4 *)((int)puVar3 + uVar7) = 0;
        uVar7 = uVar7 + 4;
      } while (uVar7 < (uVar8 & 0xfffffffc));
      if (!bVar11) {
        *(undefined2 *)((int)puVar3 + uVar7) = 0;
      }
      puVar10 = local_90c;
      for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
      }
      std::set<int,std::less<int>,std::allocator<int>>::clear
                ((set<int,std::less<int>,std::allocator<int>> *)(this + 0xc));
      std::set<int,std::less<int>,std::allocator<int>>::clear
                ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x24));
      if (this[8] == (CIndependentDrop)0x1) {
        iVar2 = G_CDataManager();
        local_30 = CMapList::GetMapList(*(CMapList **)(iVar2 + 4));
        __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>
        ::begin(local_e0);
        piVar9 = (int *)&stack0xfffe83b4;
        while( true ) {
          piVar9[1] = local_30;
          *piVar9 = (int)local_94;
          piVar9[-1] = 0x84b106d;
          __gnu_cxx::
          hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::end
                    ((hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>
                      *)*piVar9);
          piVar9[1] = (int)local_94;
          *piVar9 = (int)local_e0;
          piVar9[-1] = 0x84b1088;
          cVar1 = __gnu_cxx::
                  _Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                  ::operator!=((_Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                                *)*piVar9,(_Hashtable_const_iterator *)piVar9[1]);
          if (cVar1 == '\0') break;
          *piVar9 = (int)local_e0;
          piVar9[-1] = 0x84b0df0;
          iVar2 = __gnu_cxx::
                  _Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                  ::operator->((_Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                                *)*piVar9);
          *piVar9 = *(undefined4 *)(iVar2 + 4);
          piVar9[-1] = 0x84b0dfb;
          local_2c = CMap::getDungeonLists((CMap *)*piVar9);
          *piVar9 = local_3c;
          piVar9[-1] = 0x84b0e09;
          local_8c = CDungeon::get_index((CDungeon *)*piVar9);
          piVar9[1] = local_2c;
          *piVar9 = (int)&local_88;
          piVar9[-1] = 0x84b0e24;
          std::list<int,std::allocator<int>>::end();
          piVar9[1] = local_2c;
          *piVar9 = (int)&local_84;
          piVar9[-1] = 0x84b0e39;
          std::list<int,std::allocator<int>>::begin();
          piVar9[3] = (int)&local_8c;
          piVar9[2] = local_88;
          piVar9[1] = local_84;
          *piVar9 = (int)local_e4;
          piVar9[-1] = 0x84b0e65;
          std::find<std::_List_const_iterator<int>,int>();
          *piVar9 = local_2c;
          piVar9[-1] = (int)local_80;
          piVar9[-2] = 0x84b0e7a;
          std::list<int,std::allocator<int>>::end();
          *piVar9 = (int)local_80;
          piVar9[-1] = (int)local_e4;
          piVar9[-2] = 0x84b0e92;
          cVar1 = std::_List_const_iterator<int>::operator!=
                            ((_List_const_iterator<int> *)piVar9[-1],(_List_const_iterator *)*piVar9
                            );
          if (cVar1 != '\0') {
            piVar9[-1] = (int)local_e0;
            piVar9[-2] = 0x84b0ea8;
            iVar2 = __gnu_cxx::
                    _Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                    ::operator->((_Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                                  *)piVar9[-1]);
            *piVar9 = *(undefined4 *)(iVar2 + 4);
            piVar9[-1] = (int)local_ec;
            piVar9[-2] = 0x84b0ebd;
            CMap::get_monster_list();
            *piVar9 = (int)local_ec;
            piVar9[-1] = (int)local_f0;
                    /* try { // try from 084b0ed3 to 084b1005 has its CatchHandler @ 084b100c */
            piVar9[-2] = 0x84b0ed8;
            std::list<_mapMonster,std::allocator<_mapMonster>>::begin();
            while( true ) {
              *piVar9 = (int)local_ec;
              piVar9[-1] = (int)local_7c;
              piVar9[-2] = 0x84b0f3e;
              std::list<_mapMonster,std::allocator<_mapMonster>>::end();
              *piVar9 = (int)local_7c;
              piVar9[-1] = (int)local_f0;
              piVar9[-2] = 0x84b0f56;
              cVar1 = std::_List_iterator<_mapMonster>::operator!=
                                ((_List_iterator<_mapMonster> *)piVar9[-1],(_List_iterator *)*piVar9
                                );
              if (cVar1 == '\0') break;
              piVar9[-1] = (int)local_f0;
              piVar9[-2] = 0x84b0eeb;
              iVar2 = std::_List_iterator<_mapMonster>::operator->
                                ((_List_iterator<_mapMonster> *)piVar9[-1]);
              piVar9[1] = iVar2;
              *piVar9 = (int)(this + 0xc);
              piVar9[-1] = (int)local_78;
              piVar9[-2] = 0x84b0f06;
              std::set<int,std::less<int>,std::allocator<int>>::insert((int *)piVar9[-1]);
              piVar9[1] = 0;
              *piVar9 = (int)local_f0;
              piVar9[-1] = (int)local_70;
              piVar9[-2] = 0x84b0f26;
              std::_List_iterator<_mapMonster>::operator++
                        ((_List_iterator<_mapMonster> *)piVar9[-1],*piVar9);
            }
            piVar9[-1] = (int)local_e0;
            piVar9[-2] = 0x84b0f68;
            iVar2 = __gnu_cxx::
                    _Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                    ::operator->((_Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                                  *)piVar9[-1]);
            piVar9[-1] = *(undefined4 *)(iVar2 + 4);
            piVar9[-2] = 0x84b0f73;
            local_28 = CMap::getAICharacters((CMap *)piVar9[-1]);
            *piVar9 = local_28;
            piVar9[-1] = (int)local_f4;
            piVar9[-2] = 0x84b0f8b;
            std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>::
            begin();
            while( true ) {
              *piVar9 = local_28;
              piVar9[-1] = (int)local_6c;
              piVar9[-2] = 0x84b0fee;
              std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>::
              end();
              *piVar9 = (int)local_6c;
              piVar9[-1] = (int)local_f4;
              piVar9[-2] = 0x84b1006;
              bVar11 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)piVar9[-1],(__normal_iterator *)*piVar9);
              if (!bVar11) break;
              piVar9[-1] = (int)local_f4;
              piVar9[-2] = 0x84b0f9e;
              iVar2 = __gnu_cxx::
                      __normal_iterator<STAICharacterMapArrangeData_const*,std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>>
                      ::operator->((__normal_iterator<STAICharacterMapArrangeData_const*,std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>>
                                    *)piVar9[-1]);
              piVar9[1] = iVar2;
              *piVar9 = (int)(this + 0x24);
              piVar9[-1] = (int)local_68;
              piVar9[-2] = 0x84b0fb9;
              std::set<int,std::less<int>,std::allocator<int>>::insert((int *)piVar9[-1]);
              piVar9[1] = 0;
              *piVar9 = (int)local_f4;
              piVar9[-1] = (int)local_60;
              piVar9[-2] = 0x84b0fd9;
              __gnu_cxx::
              __normal_iterator<STAICharacterMapArrangeData_const*,std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>>
              ::operator++((__normal_iterator<STAICharacterMapArrangeData_const*,std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>>
                            *)piVar9[-1],*piVar9);
            }
            piVar9[-1] = (int)local_ec;
            piVar9[-2] = 0x84b1038;
            std::list<_mapMonster,std::allocator<_mapMonster>>::~list
                      ((list<_mapMonster,std::allocator<_mapMonster>> *)piVar9[-1]);
          }
          piVar9[1] = 0;
          *piVar9 = (int)local_e0;
          piVar9[-1] = (int)local_5c;
          piVar9[-2] = 0x84b1055;
          __gnu_cxx::
          _Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
          ::operator++((_Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                        *)piVar9[-1],*piVar9);
          piVar9 = piVar9 + -1;
        }
      }
      else {
        local_34 = CBattle_Field::GetCurrentMapInfo((CBattle_Field *)(local_40 + 0xb24));
        std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
        begin(local_d8);
        while( true ) {
          std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
          ::end(local_ac);
          cVar1 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator!=
                            ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_d8,
                             (_Rb_tree_iterator *)local_ac);
          if (cVar1 == '\0') break;
          iVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                            ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_d8);
          if (*(char *)(iVar2 + 0xc) < '\x04') {
            std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_d8);
            std::set<int,std::less<int>,std::allocator<int>>::insert(local_a8);
          }
          else {
            iVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                              ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_d8);
            if (*(char *)(iVar2 + 0xc) < '\t') {
              std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_d8);
              std::set<int,std::less<int>,std::allocator<int>>::insert(local_a0);
            }
          }
          std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator++
                    (local_98,(int)local_d8);
        }
      }
      local_38 = 0;
      piVar9[1] = (int)(this + 0xc);
      *piVar9 = (int)local_d0;
      piVar9[-1] = 0x84b10af;
      std::set<int,std::less<int>,std::allocator<int>>::begin
                ((set<int,std::less<int>,std::allocator<int>> *)*piVar9);
      while( true ) {
        piVar9[1] = (int)(this + 0xc);
        *piVar9 = (int)local_54;
        piVar9[-1] = 0x84b120d;
        std::set<int,std::less<int>,std::allocator<int>>::end
                  ((set<int,std::less<int>,std::allocator<int>> *)*piVar9);
        piVar9[1] = (int)local_54;
        *piVar9 = (int)local_d0;
        piVar9[-1] = 0x84b1225;
        cVar1 = std::_Rb_tree_const_iterator<int>::operator!=
                          ((_Rb_tree_const_iterator<int> *)*piVar9,
                           (_Rb_tree_const_iterator *)piVar9[1]);
        if (cVar1 == '\0') break;
        *piVar9 = (int)local_d0;
        piVar9[-1] = 0x84b10c5;
        piVar5 = (int *)std::_Rb_tree_const_iterator<int>::operator*
                                  ((_Rb_tree_const_iterator<int> *)*piVar9);
        iVar2 = *piVar5;
        piVar9[-1] = 0x84b10cc;
        uVar4 = G_CDataManager();
        piVar9[1] = iVar2;
        *piVar9 = uVar4;
        piVar9[-1] = 0x84b10d8;
        local_24 = CDataManager::find_monster(*piVar9);
        if (local_24 != 0) {
          *piVar9 = local_24;
          piVar9[-1] = 0x84b10f0;
          iVar2 = CMonster::getMonsterScript((CMonster *)*piVar9);
          piVar9[1] = iVar2 + 0x3ac;
          *piVar9 = (int)local_100;
          piVar9[-1] = 0x84b1107;
          std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>::vector
                    ((vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>
                      *)*piVar9,(vector *)piVar9[1]);
          *piVar9 = (int)local_100;
                    /* try { // try from 084b1110 to 084b11c5 has its CatchHandler @ 084b11d9 */
          piVar9[-1] = 0x84b1115;
          cVar1 = std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>
                  ::empty();
          if (cVar1 != '\x01') {
            *piVar9 = local_24;
            piVar9[-1] = 0x84b112b;
            iVar2 = CMonster::getMonsterScript((CMonster *)*piVar9);
            *piVar9 = iVar2 + 4;
            piVar9[-1] = 0x84b1136;
            iVar6 = std::string::c_str((string *)*piVar9);
            *piVar9 = (int)local_d0;
            piVar9[-1] = 0x84b1146;
            piVar5 = (int *)std::_Rb_tree_const_iterator<int>::operator*
                                      ((_Rb_tree_const_iterator<int> *)*piVar9);
            iVar2 = *piVar5;
            piVar9[4] = iVar6;
            piVar9[3] = iVar2;
            piVar9[2] = 0;
            piVar9[1] = (int)"%d\t%d\t%s\n";
            *piVar9 = (int)local_50c;
            piVar9[-1] = 0x84b116e;
            sprintf((char *)*piVar9,(char *)piVar9[1]);
            piVar9[1] = (int)local_50c;
            *piVar9 = (int)auStack_17c24;
            piVar9[-1] = 0x84b1186;
            strcat((char *)*piVar9,(char *)piVar9[1]);
            piVar9[2] = (int)auStack_17c24;
            piVar9[1] = (int)local_100;
            *piVar9 = (int)this;
            piVar9[-1] = 0x84b11a5;
            ResultToStr((CIndependentDrop *)*piVar9,(vector *)piVar9[1],(char *)piVar9[2]);
            local_38 = local_38 + 1;
          }
          piVar9[2] = 0;
          piVar9[1] = (int)local_d0;
          *piVar9 = (int)local_50;
          piVar9[-1] = 0x84b11c6;
          std::_Rb_tree_const_iterator<int>::operator++
                    ((_Rb_tree_const_iterator<int> *)*piVar9,piVar9[1]);
          *piVar9 = (int)local_100;
          piVar9[-1] = 0x84b11d7;
          std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>::
          ~vector((vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>> *)
                  *piVar9);
        }
      }
      piVar9[1] = (int)(this + 0x24);
      *piVar9 = (int)local_d4;
      piVar9[-1] = 0x84b1245;
      std::set<int,std::less<int>,std::allocator<int>>::begin
                ((set<int,std::less<int>,std::allocator<int>> *)*piVar9);
      while( true ) {
        piVar9[1] = (int)(this + 0x24);
        *piVar9 = (int)local_4c;
        piVar9[-1] = 0x84b1392;
        std::set<int,std::less<int>,std::allocator<int>>::end
                  ((set<int,std::less<int>,std::allocator<int>> *)*piVar9);
        piVar9[1] = (int)local_4c;
        *piVar9 = (int)local_d4;
        piVar9[-1] = 0x84b13aa;
        cVar1 = std::_Rb_tree_const_iterator<int>::operator!=
                          ((_Rb_tree_const_iterator<int> *)*piVar9,
                           (_Rb_tree_const_iterator *)piVar9[1]);
        if (cVar1 == '\0') break;
        *piVar9 = (int)local_d4;
        piVar9[-1] = 0x84b125b;
        piVar5 = (int *)std::_Rb_tree_const_iterator<int>::operator*
                                  ((_Rb_tree_const_iterator<int> *)*piVar9);
        iVar2 = *piVar5;
        piVar9[-1] = 0x84b1264;
        iVar6 = G_CDataManager();
        uVar4 = *(undefined4 *)(iVar6 + 0x869c);
        piVar9[1] = iVar2;
        *piVar9 = uVar4;
        piVar9[-1] = 0x84b1276;
        local_20 = CAICharacterList::get((CAICharacterList *)*piVar9,piVar9[1]);
        if (local_20 != 0) {
          piVar9[1] = local_20;
          *piVar9 = (int)local_10c;
          piVar9[-1] = 0x84b1298;
          CAICharacter::getIndepentDropItem();
          *piVar9 = (int)local_10c;
                    /* try { // try from 084b12a4 to 084b134a has its CatchHandler @ 084b135e */
          piVar9[-1] = 0x84b12a9;
          cVar1 = std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>
                  ::empty();
          if (cVar1 != '\x01') {
            *piVar9 = local_20;
            piVar9[-1] = 0x84b12bb;
            iVar6 = CAICharacter::GetName((CAICharacter *)*piVar9);
            *piVar9 = (int)local_d4;
            piVar9[-1] = 0x84b12cb;
            piVar5 = (int *)std::_Rb_tree_const_iterator<int>::operator*
                                      ((_Rb_tree_const_iterator<int> *)*piVar9);
            iVar2 = *piVar5;
            piVar9[4] = iVar6;
            piVar9[3] = iVar2;
            piVar9[2] = 1;
            piVar9[1] = (int)"%d\t%d\t%s\n";
            *piVar9 = (int)local_50c;
            piVar9[-1] = 0x84b12f3;
            sprintf((char *)*piVar9,(char *)piVar9[1]);
            piVar9[1] = (int)local_50c;
            *piVar9 = (int)auStack_17c24;
            piVar9[-1] = 0x84b130b;
            strcat((char *)*piVar9,(char *)piVar9[1]);
            piVar9[2] = (int)auStack_17c24;
            piVar9[1] = (int)local_10c;
            *piVar9 = (int)this;
            piVar9[-1] = 0x84b132a;
            ResultToStr((CIndependentDrop *)*piVar9,(vector *)piVar9[1],(char *)piVar9[2]);
            local_38 = local_38 + 1;
          }
          piVar9[2] = 0;
          piVar9[1] = (int)local_d4;
          *piVar9 = (int)local_48;
          piVar9[-1] = 0x84b134b;
          std::_Rb_tree_const_iterator<int>::operator++
                    ((_Rb_tree_const_iterator<int> *)*piVar9,piVar9[1]);
          *piVar9 = (int)local_10c;
          piVar9[-1] = 0x84b135c;
          std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>::
          ~vector((vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>> *)
                  *piVar9);
        }
      }
      if (this[8] == (CIndependentDrop)0x1) {
        *piVar9 = local_3c;
        piVar9[-1] = 0x84b13f2;
        iVar2 = CDungeon::GetDungeonName((CDungeon *)*piVar9);
        piVar9[2] = iVar2;
        piVar9[1] = (int)"item_indepedent_drop_all_%s.txt";
        *piVar9 = (int)&local_ca;
        piVar9[-1] = 0x84b140c;
        sprintf((char *)*piVar9,(char *)piVar9[1]);
      }
      else {
        *piVar9 = local_3c;
        piVar9[-1] = 0x84b13cb;
        iVar2 = CDungeon::GetDungeonName((CDungeon *)*piVar9);
        piVar9[2] = iVar2;
        piVar9[1] = (int)"item_indepedent_drop_%s.txt";
        *piVar9 = (int)&local_ca;
        piVar9[-1] = 0x84b13e5;
        sprintf((char *)*piVar9,(char *)piVar9[1]);
      }
      if (local_38 == 0) {
        piVar9[2] = 0x24;
        piVar9[1] = (int)&DAT_08c802b4;
        *piVar9 = (int)local_90c;
        piVar9[-1] = 0x84b1480;
        memcpy((void *)*piVar9,(void *)piVar9[1],piVar9[2]);
      }
      else {
        *piVar9 = (int)this;
        piVar9[-1] = 0x84b141d;
        iVar2 = CCommand::GetUser((CCommand *)*piVar9);
        piVar9[3] = (int)auStack_17c24;
        piVar9[2] = (int)&local_ca;
        piVar9[1] = iVar2;
        *piVar9 = (int)this;
        piVar9[-1] = 0x84b1440;
        printClient((CIndependentDrop *)*piVar9,(CUser *)piVar9[1],(char *)piVar9[2],
                    (char *)piVar9[3]);
        piVar9[2] = (int)&local_ca;
        piVar9[1] = (int)&DAT_08c80298;
        *piVar9 = (int)local_90c;
        piVar9[-1] = 0x84b1460;
        sprintf((char *)*piVar9,(char *)piVar9[1]);
      }
      *piVar9 = (int)this;
      piVar9[-1] = 0x84b148b;
      iVar2 = CCommand::GetUser((CCommand *)*piVar9);
      piVar9[2] = (int)local_90c;
      piVar9[1] = iVar2;
      *piVar9 = (int)this;
      piVar9[-1] = 0x84b14a4;
      SendChatMsg((CIndependentDrop *)*piVar9,(CUser *)piVar9[1],(char *)piVar9[2]);
    }
  }
  return;
}

```

---

## parse

```asm
// === 084b0b08 game_master::CIndependentDrop::parse  [0x084b0b08-0x84b0b4d] ===
 84b0b08:	55                   	push   %ebp
 84b0b09:	89 e5                	mov    %esp,%ebp
 84b0b0b:	83 ec 18             	sub    $0x18,%esp
 84b0b0e:	8b 45 08             	mov    0x8(%ebp),%eax
 84b0b11:	8b 40 04             	mov    0x4(%eax),%eax
 84b0b14:	83 c0 0c             	add    $0xc,%eax
 84b0b17:	89 04 24             	mov    %eax,(%esp)
 84b0b1a:	e8 49 e5 de ff       	call   829f068 <_Z4trimRSs>
 84b0b1f:	8b 45 08             	mov    0x8(%ebp),%eax
 84b0b22:	8b 40 04             	mov    0x4(%eax),%eax
 84b0b25:	83 c0 0c             	add    $0xc,%eax
 84b0b28:	c7 44 24 04 4e 02 c8 	movl   $0x8c8024e,0x4(%esp)
 84b0b2f:	08 
 84b0b30:	89 04 24             	mov    %eax,(%esp)
 84b0b33:	e8 69 fe bc ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 84b0b38:	84 c0                	test   %al,%al
 84b0b3a:	74 09                	je     84b0b45 <_ZN11game_master16CIndependentDrop5parseEv+0x3d>
 84b0b3c:	8b 45 08             	mov    0x8(%ebp),%eax
 84b0b3f:	c6 40 08 01          	movb   $0x1,0x8(%eax)
 84b0b43:	eb 07                	jmp    84b0b4c <_ZN11game_master16CIndependentDrop5parseEv+0x44>
 84b0b45:	8b 45 08             	mov    0x8(%ebp),%eax
 84b0b48:	c6 40 08 00          	movb   $0x0,0x8(%eax)
 84b0b4c:	c9                   	leave
 84b0b4d:	c3                   	ret

```

```c
// game_master::CIndependentDrop::parse @ 0x84b0b08

/* game_master::CIndependentDrop::parse() */

void __thiscall game_master::CIndependentDrop::parse(CIndependentDrop *this)

{
  bool bVar1;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  bVar1 = std::operator==((string *)(*(int *)(this + 4) + 0xc),"all");
  if (bVar1) {
    this[8] = (CIndependentDrop)0x1;
  }
  else {
    this[8] = (CIndependentDrop)0x0;
  }
  return;
}

```

---

## printClient

```asm
// === 084b14b8 game_master::CIndependentDrop::printClient  [0x084b14b8-0x84b15c3] ===
 84b14b8:	55                   	push   %ebp
 84b14b9:	89 e5                	mov    %esp,%ebp
 84b14bb:	56                   	push   %esi
 84b14bc:	53                   	push   %ebx
 84b14bd:	83 ec 20             	sub    $0x20,%esp
 84b14c0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b14c3:	89 04 24             	mov    %eax,(%esp)
 84b14c6:	e8 81 c8 0d 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84b14cb:	c7 44 24 08 3e 01 00 	movl   $0x13e,0x8(%esp)
 84b14d2:	00 
 84b14d3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84b14da:	00 
 84b14db:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b14de:	89 04 24             	mov    %eax,(%esp)
 84b14e1:	e8 16 a4 c1 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84b14e6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84b14ed:	00 
 84b14ee:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b14f1:	89 04 24             	mov    %eax,(%esp)
 84b14f4:	e8 27 a4 c1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84b14f9:	8b 45 10             	mov    0x10(%ebp),%eax
 84b14fc:	89 04 24             	mov    %eax,(%esp)
 84b14ff:	e8 ac ce bc ff       	call   807e3b0 <strlen@plt>
 84b1504:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b1508:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b150b:	89 04 24             	mov    %eax,(%esp)
 84b150e:	e8 29 a4 c1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84b1513:	8b 45 10             	mov    0x10(%ebp),%eax
 84b1516:	89 04 24             	mov    %eax,(%esp)
 84b1519:	e8 92 ce bc ff       	call   807e3b0 <strlen@plt>
 84b151e:	89 44 24 08          	mov    %eax,0x8(%esp)
 84b1522:	8b 45 10             	mov    0x10(%ebp),%eax
 84b1525:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b1529:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b152c:	89 04 24             	mov    %eax,(%esp)
 84b152f:	e8 3c a2 d7 ff       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 84b1534:	8b 45 14             	mov    0x14(%ebp),%eax
 84b1537:	89 04 24             	mov    %eax,(%esp)
 84b153a:	e8 71 ce bc ff       	call   807e3b0 <strlen@plt>
 84b153f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b1543:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b1546:	89 04 24             	mov    %eax,(%esp)
 84b1549:	e8 ee a3 c1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84b154e:	8b 45 14             	mov    0x14(%ebp),%eax
 84b1551:	89 04 24             	mov    %eax,(%esp)
 84b1554:	e8 57 ce bc ff       	call   807e3b0 <strlen@plt>
 84b1559:	89 44 24 08          	mov    %eax,0x8(%esp)
 84b155d:	8b 45 14             	mov    0x14(%ebp),%eax
 84b1560:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b1564:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b1567:	89 04 24             	mov    %eax,(%esp)
 84b156a:	e8 01 a2 d7 ff       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 84b156f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84b1576:	00 
 84b1577:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b157a:	89 04 24             	mov    %eax,(%esp)
 84b157d:	e8 d6 a3 c1 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84b1582:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b1585:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b1589:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b158c:	89 04 24             	mov    %eax,(%esp)
 84b158f:	e8 26 70 19 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84b1594:	eb 1b                	jmp    84b15b1 <_ZN11game_master16CIndependentDrop11printClientEP5CUserPKcS4_+0xf9>
 84b1596:	89 d3                	mov    %edx,%ebx
 84b1598:	89 c6                	mov    %eax,%esi
 84b159a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b159d:	89 04 24             	mov    %eax,(%esp)
 84b15a0:	e8 db c8 0d 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84b15a5:	89 f0                	mov    %esi,%eax
 84b15a7:	89 da                	mov    %ebx,%edx
 84b15a9:	89 04 24             	mov    %eax,(%esp)
 84b15ac:	e8 9f 21 63 00       	call   8ae3750 <_Unwind_Resume>
 84b15b1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b15b4:	89 04 24             	mov    %eax,(%esp)
 84b15b7:	e8 c4 c8 0d 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84b15bc:	83 c4 20             	add    $0x20,%esp
 84b15bf:	5b                   	pop    %ebx
 84b15c0:	5e                   	pop    %esi
 84b15c1:	5d                   	pop    %ebp
 84b15c2:	c3                   	ret
 84b15c3:	90                   	nop

```

```c
// game_master::CIndependentDrop::printClient @ 0x84b14b8

/* game_master::CIndependentDrop::printClient(CUser*, char const*, char const*) */

void __thiscall
game_master::CIndependentDrop::printClient
          (CIndependentDrop *this,CUser *param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 084b14e1 to 084b1593 has its CatchHandler @ 084b1596 */
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

