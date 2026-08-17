# CQueryCounter

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## CQueryCounter

```asm
// === 085ecaec CQueryCounter::CQueryCounter  [0x085ecaec-0x85ecb89] ===
 85ecaec:	55                   	push   %ebp
 85ecaed:	89 e5                	mov    %esp,%ebp
 85ecaef:	56                   	push   %esi
 85ecaf0:	53                   	push   %ebx
 85ecaf1:	83 ec 20             	sub    $0x20,%esp
 85ecaf4:	8b 45 08             	mov    0x8(%ebp),%eax
 85ecaf7:	83 c0 04             	add    $0x4,%eax
 85ecafa:	89 04 24             	mov    %eax,(%esp)
 85ecafd:	e8 48 0d 00 00       	call   85ed84a <_ZNSt3mapIiN13CQueryCounter10QUERY_INFOESt4lessIiESaISt4pairIKiS1_EEEC1Ev>
 85ecb02:	8b 45 08             	mov    0x8(%ebp),%eax
 85ecb05:	83 c0 1c             	add    $0x1c,%eax
 85ecb08:	89 04 24             	mov    %eax,(%esp)
 85ecb0b:	e8 b4 0d 00 00       	call   85ed8c4 <_ZNSt3mapISsSt17_Rb_tree_iteratorISt4pairIKiN13CQueryCounter10QUERY_INFOEEESt4lessISsESaIS1_IKSsS6_EEEC1Ev>
 85ecb10:	8b 45 08             	mov    0x8(%ebp),%eax
 85ecb13:	83 c0 34             	add    $0x34,%eax
 85ecb16:	89 04 24             	mov    %eax,(%esp)
 85ecb19:	e8 20 0e 00 00       	call   85ed93e <_ZNSt17_Rb_tree_iteratorISt4pairIKiN13CQueryCounter10QUERY_INFOEEEC1Ev>
 85ecb1e:	8b 45 08             	mov    0x8(%ebp),%eax
 85ecb21:	8d 50 04             	lea    0x4(%eax),%edx
 85ecb24:	8b 5d 08             	mov    0x8(%ebp),%ebx
 85ecb27:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85ecb2a:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ecb2e:	89 04 24             	mov    %eax,(%esp)
 85ecb31:	e8 f6 48 e6 ff       	call   845142c <_ZNSt3mapIiN13CQueryCounter10QUERY_INFOESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 85ecb36:	83 ec 04             	sub    $0x4,%esp
 85ecb39:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85ecb3c:	89 43 34             	mov    %eax,0x34(%ebx)
 85ecb3f:	8b 45 08             	mov    0x8(%ebp),%eax
 85ecb42:	c7 40 38 00 00 00 00 	movl   $0x0,0x38(%eax)
 85ecb49:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85ecb4c:	83 c4 00             	add    $0x0,%esp
 85ecb4f:	5b                   	pop    %ebx
 85ecb50:	5e                   	pop    %esi
 85ecb51:	5d                   	pop    %ebp
 85ecb52:	c3                   	ret
 85ecb53:	89 d3                	mov    %edx,%ebx
 85ecb55:	89 c6                	mov    %eax,%esi
 85ecb57:	8b 45 08             	mov    0x8(%ebp),%eax
 85ecb5a:	83 c0 1c             	add    $0x1c,%eax
 85ecb5d:	89 04 24             	mov    %eax,(%esp)
 85ecb60:	e8 bd 0c 00 00       	call   85ed822 <_ZNSt3mapISsSt17_Rb_tree_iteratorISt4pairIKiN13CQueryCounter10QUERY_INFOEEESt4lessISsESaIS1_IKSsS6_EEED1Ev>
 85ecb65:	89 f0                	mov    %esi,%eax
 85ecb67:	89 da                	mov    %ebx,%edx
 85ecb69:	eb 00                	jmp    85ecb6b <_ZN13CQueryCounterC1Ev+0x7f>
 85ecb6b:	89 d3                	mov    %edx,%ebx
 85ecb6d:	89 c6                	mov    %eax,%esi
 85ecb6f:	8b 45 08             	mov    0x8(%ebp),%eax
 85ecb72:	83 c0 04             	add    $0x4,%eax
 85ecb75:	89 04 24             	mov    %eax,(%esp)
 85ecb78:	e8 91 0c 00 00       	call   85ed80e <_ZNSt3mapIiN13CQueryCounter10QUERY_INFOESt4lessIiESaISt4pairIKiS1_EEED1Ev>
 85ecb7d:	89 f0                	mov    %esi,%eax
 85ecb7f:	89 da                	mov    %ebx,%edx
 85ecb81:	89 04 24             	mov    %eax,(%esp)
 85ecb84:	e8 c7 6b 4f 00       	call   8ae3750 <_Unwind_Resume>
 85ecb89:	90                   	nop

```

```c
// CQueryCounter::CQueryCounter @ 0x85ecaec

/* CQueryCounter::CQueryCounter() */

void __thiscall CQueryCounter::CQueryCounter(CQueryCounter *this)

{
  undefined4 local_10;
  
  std::
  map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
  ::map((map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
         *)(this + 4));
                    /* try { // try from 085ecb0b to 085ecb0f has its CatchHandler @ 085ecb6b */
  std::
  map<std::string,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>>>
  ::map((map<std::string,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>>>
         *)(this + 0x1c));
  std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>> *)(this + 0x34));
                    /* try { // try from 085ecb31 to 085ecb35 has its CatchHandler @ 085ecb53 */
  std::
  map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
  ::end((map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
         *)&local_10);
  *(undefined4 *)(this + 0x34) = local_10;
  *(undefined4 *)(this + 0x38) = 0;
  return;
}

```

---

## IncreaseQueryCount

```asm
// === 085ecc5e CQueryCounter::IncreaseQueryCount  [0x085ecc5e-0x85ecee5] ===
 85ecc5e:	55                   	push   %ebp
 85ecc5f:	89 e5                	mov    %esp,%ebp
 85ecc61:	56                   	push   %esi
 85ecc62:	53                   	push   %ebx
 85ecc63:	83 ec 30             	sub    $0x30,%esp
 85ecc66:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85ecc6d:	00 
 85ecc6e:	c7 44 24 04 9f e4 cc 	movl   $0x8cce49f,0x4(%esp)
 85ecc75:	08 
 85ecc76:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ecc79:	89 04 24             	mov    %eax,(%esp)
 85ecc7c:	e8 bf 9f 11 00       	call   8706c40 <_ZNKSs4findEPKcj>
 85ecc81:	83 f8 ff             	cmp    $0xffffffff,%eax
 85ecc84:	0f 95 c0             	setne  %al
 85ecc87:	84 c0                	test   %al,%al
 85ecc89:	0f 85 45 02 00 00    	jne    85eced4 <_ZN13CQueryCounter18IncreaseQueryCountERKSs+0x276>
 85ecc8f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85ecc96:	00 
 85ecc97:	c7 44 24 04 ad e4 cc 	movl   $0x8cce4ad,0x4(%esp)
 85ecc9e:	08 
 85ecc9f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ecca2:	89 04 24             	mov    %eax,(%esp)
 85ecca5:	e8 96 9f 11 00       	call   8706c40 <_ZNKSs4findEPKcj>
 85eccaa:	83 f8 ff             	cmp    $0xffffffff,%eax
 85eccad:	0f 95 c0             	setne  %al
 85eccb0:	84 c0                	test   %al,%al
 85eccb2:	0f 85 1f 02 00 00    	jne    85eced7 <_ZN13CQueryCounter18IncreaseQueryCountERKSs+0x279>
 85eccb8:	8b 45 08             	mov    0x8(%ebp),%eax
 85eccbb:	8d 48 1c             	lea    0x1c(%eax),%ecx
 85eccbe:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85eccc1:	8b 55 0c             	mov    0xc(%ebp),%edx
 85eccc4:	89 54 24 08          	mov    %edx,0x8(%esp)
 85eccc8:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85ecccc:	89 04 24             	mov    %eax,(%esp)
 85ecccf:	e8 96 0c 00 00       	call   85ed96a <_ZNSt3mapISsSt17_Rb_tree_iteratorISt4pairIKiN13CQueryCounter10QUERY_INFOEEESt4lessISsESaIS1_IKSsS6_EEE4findERS9_>
 85eccd4:	83 ec 04             	sub    $0x4,%esp
 85eccd7:	8b 45 08             	mov    0x8(%ebp),%eax
 85eccda:	8d 50 1c             	lea    0x1c(%eax),%edx
 85eccdd:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85ecce0:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ecce4:	89 04 24             	mov    %eax,(%esp)
 85ecce7:	e8 aa 0c 00 00       	call   85ed996 <_ZNSt3mapISsSt17_Rb_tree_iteratorISt4pairIKiN13CQueryCounter10QUERY_INFOEEESt4lessISsESaIS1_IKSsS6_EEE3endEv>
 85eccec:	83 ec 04             	sub    $0x4,%esp
 85eccef:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85eccf2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85eccf6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85eccf9:	89 04 24             	mov    %eax,(%esp)
 85eccfc:	e8 bb 0c 00 00       	call   85ed9bc <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsS_IS0_IKiN13CQueryCounter10QUERY_INFOEEEEEeqERKS8_>
 85ecd01:	84 c0                	test   %al,%al
 85ecd03:	0f 84 75 01 00 00    	je     85ece7e <_ZN13CQueryCounter18IncreaseQueryCountERKSs+0x220>
 85ecd09:	8b 45 08             	mov    0x8(%ebp),%eax
 85ecd0c:	0f b6 00             	movzbl (%eax),%eax
 85ecd0f:	84 c0                	test   %al,%al
 85ecd11:	0f 84 0c 01 00 00    	je     85ece23 <_ZN13CQueryCounter18IncreaseQueryCountERKSs+0x1c5>
 85ecd17:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 85ecd1c:	c7 44 24 08 d2 01 00 	movl   $0x1d2,0x8(%esp)
 85ecd23:	00 
 85ecd24:	c7 44 24 04 bd e4 cc 	movl   $0x8cce4bd,0x4(%esp)
 85ecd2b:	08 
 85ecd2c:	89 04 24             	mov    %eax,(%esp)
 85ecd2f:	e8 52 2d ca ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 85ecd34:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85ecd3b:	00 
 85ecd3c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ecd40:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85ecd43:	89 04 24             	mov    %eax,(%esp)
 85ecd46:	e8 db be ad ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 85ecd4b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85ecd4e:	89 04 24             	mov    %eax,(%esp)
 85ecd51:	e8 f0 be ad ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85ecd56:	c7 44 24 04 be 00 00 	movl   $0xbe,0x4(%esp)
 85ecd5d:	00 
 85ecd5e:	89 04 24             	mov    %eax,(%esp)
 85ecd61:	e8 f0 be ad ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 85ecd66:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85ecd69:	89 04 24             	mov    %eax,(%esp)
 85ecd6c:	e8 d5 be ad ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85ecd71:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 85ecd78:	ff 
 85ecd79:	89 04 24             	mov    %eax,(%esp)
 85ecd7c:	e8 d5 be ad ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 85ecd81:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ecd84:	89 04 24             	mov    %eax,(%esp)
 85ecd87:	e8 d4 98 11 00       	call   8706660 <_ZNKSs4sizeEv>
 85ecd8c:	89 c3                	mov    %eax,%ebx
 85ecd8e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85ecd91:	89 04 24             	mov    %eax,(%esp)
 85ecd94:	e8 ad be ad ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85ecd99:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85ecd9d:	89 04 24             	mov    %eax,(%esp)
 85ecda0:	e8 b1 be ad ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 85ecda5:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ecda8:	89 04 24             	mov    %eax,(%esp)
 85ecdab:	e8 b0 98 11 00       	call   8706660 <_ZNKSs4sizeEv>
 85ecdb0:	89 c6                	mov    %eax,%esi
 85ecdb2:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ecdb5:	89 04 24             	mov    %eax,(%esp)
 85ecdb8:	e8 33 97 11 00       	call   87064f0 <_ZNKSs5c_strEv>
 85ecdbd:	89 c3                	mov    %eax,%ebx
 85ecdbf:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85ecdc2:	89 04 24             	mov    %eax,(%esp)
 85ecdc5:	e8 84 be ad ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 85ecdca:	89 74 24 08          	mov    %esi,0x8(%esp)
 85ecdce:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85ecdd2:	89 04 24             	mov    %eax,(%esp)
 85ecdd5:	e8 78 18 af ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 85ecdda:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 85ecddf:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 85ecde2:	89 54 24 08          	mov    %edx,0x8(%esp)
 85ecde6:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 85ecded:	00 
 85ecdee:	89 04 24             	mov    %eax,(%esp)
 85ecdf1:	e8 e8 41 f8 ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 85ecdf6:	eb 1b                	jmp    85ece13 <_ZN13CQueryCounter18IncreaseQueryCountERKSs+0x1b5>
 85ecdf8:	89 d3                	mov    %edx,%ebx
 85ecdfa:	89 c6                	mov    %eax,%esi
 85ecdfc:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85ecdff:	89 04 24             	mov    %eax,(%esp)
 85ece02:	e8 cb fa 02 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 85ece07:	89 f0                	mov    %esi,%eax
 85ece09:	89 da                	mov    %ebx,%edx
 85ece0b:	89 04 24             	mov    %eax,(%esp)
 85ece0e:	e8 3d 69 4f 00       	call   8ae3750 <_Unwind_Resume>
 85ece13:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85ece16:	89 04 24             	mov    %eax,(%esp)
 85ece19:	e8 b4 fa 02 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 85ece1e:	e9 b8 00 00 00       	jmp    85ecedb <_ZN13CQueryCounter18IncreaseQueryCountERKSs+0x27d>
 85ece23:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 85ece2a:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ece2d:	89 04 24             	mov    %eax,(%esp)
 85ece30:	e8 bb 96 11 00       	call   87064f0 <_ZNKSs5c_strEv>
 85ece35:	8d 55 e0             	lea    -0x20(%ebp),%edx
 85ece38:	89 54 24 08          	mov    %edx,0x8(%esp)
 85ece3c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ece40:	8b 45 08             	mov    0x8(%ebp),%eax
 85ece43:	89 04 24             	mov    %eax,(%esp)
 85ece46:	e8 57 05 00 00       	call   85ed3a2 <_ZN13CQueryCounter9SaveQueryEPKcRi>
 85ece4b:	84 c0                	test   %al,%al
 85ece4d:	0f 84 87 00 00 00    	je     85eceda <_ZN13CQueryCounter18IncreaseQueryCountERKSs+0x27c>
 85ece53:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 85ece56:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ece59:	89 04 24             	mov    %eax,(%esp)
 85ece5c:	e8 8f 96 11 00       	call   87064f0 <_ZNKSs5c_strEv>
 85ece61:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85ece68:	00 
 85ece69:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85ece6d:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ece71:	8b 45 08             	mov    0x8(%ebp),%eax
 85ece74:	89 04 24             	mov    %eax,(%esp)
 85ece77:	e8 32 07 00 00       	call   85ed5ae <_ZN13CQueryCounter13RegisterQueryEPKcii>
 85ece7c:	eb 5d                	jmp    85ecedb <_ZN13CQueryCounter18IncreaseQueryCountERKSs+0x27d>
 85ece7e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85ece81:	89 04 24             	mov    %eax,(%esp)
 85ece84:	e8 47 0b 00 00       	call   85ed9d0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsS_IS0_IKiN13CQueryCounter10QUERY_INFOEEEEEptEv>
 85ece89:	8b 40 04             	mov    0x4(%eax),%eax
 85ece8c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85ece8f:	8b 45 08             	mov    0x8(%ebp),%eax
 85ece92:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85ece95:	89 50 34             	mov    %edx,0x34(%eax)
 85ece98:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85ece9b:	89 04 24             	mov    %eax,(%esp)
 85ece9e:	e8 01 46 e6 ff       	call   84514a4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN13CQueryCounter10QUERY_INFOEEEptEv>
 85ecea3:	8b 40 04             	mov    0x4(%eax),%eax
 85ecea6:	85 c0                	test   %eax,%eax
 85ecea8:	0f 94 c0             	sete   %al
 85eceab:	84 c0                	test   %al,%al
 85ecead:	74 0f                	je     85ecebe <_ZN13CQueryCounter18IncreaseQueryCountERKSs+0x260>
 85eceaf:	8b 45 08             	mov    0x8(%ebp),%eax
 85eceb2:	8b 40 38             	mov    0x38(%eax),%eax
 85eceb5:	8d 50 01             	lea    0x1(%eax),%edx
 85eceb8:	8b 45 08             	mov    0x8(%ebp),%eax
 85ecebb:	89 50 38             	mov    %edx,0x38(%eax)
 85ecebe:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85ecec1:	89 04 24             	mov    %eax,(%esp)
 85ecec4:	e8 db 45 e6 ff       	call   84514a4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN13CQueryCounter10QUERY_INFOEEEptEv>
 85ecec9:	8b 50 04             	mov    0x4(%eax),%edx
 85ececc:	83 c2 01             	add    $0x1,%edx
 85ececf:	89 50 04             	mov    %edx,0x4(%eax)
 85eced2:	eb 07                	jmp    85ecedb <_ZN13CQueryCounter18IncreaseQueryCountERKSs+0x27d>
 85eced4:	90                   	nop
 85eced5:	eb 04                	jmp    85ecedb <_ZN13CQueryCounter18IncreaseQueryCountERKSs+0x27d>
 85eced7:	90                   	nop
 85eced8:	eb 01                	jmp    85ecedb <_ZN13CQueryCounter18IncreaseQueryCountERKSs+0x27d>
 85eceda:	90                   	nop
 85ecedb:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85ecede:	83 c4 00             	add    $0x0,%esp
 85ecee1:	5b                   	pop    %ebx
 85ecee2:	5e                   	pop    %esi
 85ecee3:	5d                   	pop    %ebp
 85ecee4:	c3                   	ret
 85ecee5:	90                   	nop

```

```c
// CQueryCounter::IncreaseQueryCount @ 0x85ecc5e

/* CQueryCounter::IncreaseQueryCount(std::string const&) */

void __thiscall CQueryCounter::IncreaseQueryCount(CQueryCounter *this,string *param_1)

{
  char cVar1;
  int iVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  void *pvVar5;
  char *pcVar6;
  int iVar7;
  int local_24;
  CStreamGuard local_20 [8];
  undefined4 local_18;
  string local_14;
  map<std::string,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>>>
  local_10 [4];
  
  iVar2 = std::string::find((string *)param_1,"log_query_ref",0);
  if ((iVar2 == -1) &&
     (iVar2 = std::string::find((string *)param_1,"from db_connect",0), iVar2 == -1)) {
    std::
    map<std::string,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>>>
    ::find(&local_14);
    std::
    map<std::string,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>>>
    ::end(local_10);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<std::string_const,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>>
            ::operator==((_Rb_tree_iterator<std::pair<std::string_const,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>>
                          *)&local_14,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') {
      iVar2 = std::
              _Rb_tree_iterator<std::pair<std::string_const,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>>
              ::operator->((_Rb_tree_iterator<std::pair<std::string_const,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>>
                            *)&local_14);
      local_18 = *(undefined4 *)(iVar2 + 4);
      *(undefined4 *)(this + 0x34) = local_18;
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>> *)
                         &local_18);
      if (*(int *)(iVar2 + 4) == 0) {
        *(int *)(this + 0x38) = *(int *)(this + 0x38) + 1;
      }
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>> *)
                         &local_18);
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    }
    else if (*this == (CQueryCounter)0x0) {
      local_24 = 0;
      pcVar6 = (char *)std::string::c_str((string *)param_1);
      cVar1 = SaveQuery(this,pcVar6,&local_24);
      iVar2 = local_24;
      if (cVar1 != '\0') {
        iVar7 = std::string::c_str((string *)param_1);
        RegisterQuery((char *)this,iVar7,iVar2);
      }
    }
    else {
      pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"QueryCounter.cpp",0x1d2);
      CStreamGuard::CStreamGuard(local_20,pSVar3,true);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 085ecd61 to 085ecdf5 has its CatchHandler @ 085ecdf8 */
      CStreamGuard::operator<<(pCVar4,0xbe);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_20);
      CStreamGuard::operator<<(pCVar4,-1);
      iVar2 = std::string::size((string *)param_1);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_20);
      CStreamGuard::operator<<(pCVar4,iVar2);
      iVar2 = std::string::size((string *)param_1);
      pvVar5 = (void *)std::string::c_str((string *)param_1);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_20);
      CStreamGuard::put_binary(pCVar4,pvVar5,iVar2);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_20);
      CStreamGuard::~CStreamGuard(local_20);
    }
  }
  return;
}

```

---

## LoadQueryTable

```asm
// === 085ed18a CQueryCounter::LoadQueryTable  [0x085ed18a-0x85ed3a1] ===
 85ed18a:	55                   	push   %ebp
 85ed18b:	89 e5                	mov    %esp,%ebp
 85ed18d:	81 ec 68 60 00 00    	sub    $0x6068,%esp
 85ed193:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 85ed198:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85ed19f:	00 
 85ed1a0:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 85ed1a7:	00 
 85ed1a8:	89 04 24             	mov    %eax,(%esp)
 85ed1ab:	e8 8e 80 e0 ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 85ed1b0:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85ed1b3:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85ed1ba:	c7 44 24 04 d0 e4 cc 	movl   $0x8cce4d0,0x4(%esp)
 85ed1c1:	08 
 85ed1c2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85ed1c5:	89 04 24             	mov    %eax,(%esp)
 85ed1c8:	e8 f3 6f e0 ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 85ed1cd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85ed1d4:	00 
 85ed1d5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85ed1d8:	89 04 24             	mov    %eax,(%esp)
 85ed1db:	e8 46 71 e0 ff       	call   83f4326 <_ZN5MySQL4execEb>
 85ed1e0:	83 f0 01             	xor    $0x1,%eax
 85ed1e3:	84 c0                	test   %al,%al
 85ed1e5:	74 0a                	je     85ed1f1 <_ZN13CQueryCounter14LoadQueryTableEv+0x67>
 85ed1e7:	b8 00 00 00 00       	mov    $0x0,%eax
 85ed1ec:	e9 af 01 00 00       	jmp    85ed3a0 <_ZN13CQueryCounter14LoadQueryTableEv+0x216>
 85ed1f1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85ed1f4:	89 04 24             	mov    %eax,(%esp)
 85ed1f7:	e8 70 51 af ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 85ed1fc:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85ed1ff:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85ed206:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85ed20d:	e9 78 01 00 00       	jmp    85ed38a <_ZN13CQueryCounter14LoadQueryTableEv+0x200>
 85ed212:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 85ed219:	8d 85 b3 9f ff ff    	lea    -0x604d(%ebp),%eax
 85ed21f:	ba 01 60 00 00       	mov    $0x6001,%edx
 85ed224:	89 54 24 08          	mov    %edx,0x8(%esp)
 85ed228:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85ed22f:	00 
 85ed230:	89 04 24             	mov    %eax,(%esp)
 85ed233:	e8 88 0a a9 ff       	call   807dcc0 <memset@plt>
 85ed238:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85ed23b:	89 04 24             	mov    %eax,(%esp)
 85ed23e:	e8 79 72 e0 ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 85ed243:	83 f0 01             	xor    $0x1,%eax
 85ed246:	84 c0                	test   %al,%al
 85ed248:	74 40                	je     85ed28a <_ZN13CQueryCounter14LoadQueryTableEv+0x100>
 85ed24a:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85ed251:	00 
 85ed252:	c7 44 24 08 2f 02 00 	movl   $0x22f,0x8(%esp)
 85ed259:	00 
 85ed25a:	c7 44 24 04 e0 f2 cc 	movl   $0x8ccf2e0,0x4(%esp)
 85ed261:	08 
 85ed262:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85ed265:	89 04 24             	mov    %eax,(%esp)
 85ed268:	e8 ab 24 f6 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85ed26d:	c7 44 24 04 f5 e4 cc 	movl   $0x8cce4f5,0x4(%esp)
 85ed274:	08 
 85ed275:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85ed278:	89 04 24             	mov    %eax,(%esp)
 85ed27b:	e8 08 25 f6 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85ed280:	b8 00 00 00 00       	mov    $0x0,%eax
 85ed285:	e9 16 01 00 00       	jmp    85ed3a0 <_ZN13CQueryCounter14LoadQueryTableEv+0x216>
 85ed28a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85ed28d:	89 44 24 08          	mov    %eax,0x8(%esp)
 85ed291:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85ed298:	00 
 85ed299:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85ed29c:	89 04 24             	mov    %eax,(%esp)
 85ed29f:	e8 88 96 b2 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 85ed2a4:	83 f0 01             	xor    $0x1,%eax
 85ed2a7:	84 c0                	test   %al,%al
 85ed2a9:	74 40                	je     85ed2eb <_ZN13CQueryCounter14LoadQueryTableEv+0x161>
 85ed2ab:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85ed2b2:	00 
 85ed2b3:	c7 44 24 08 35 02 00 	movl   $0x235,0x8(%esp)
 85ed2ba:	00 
 85ed2bb:	c7 44 24 04 e0 f2 cc 	movl   $0x8ccf2e0,0x4(%esp)
 85ed2c2:	08 
 85ed2c3:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85ed2c6:	89 04 24             	mov    %eax,(%esp)
 85ed2c9:	e8 4a 24 f6 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85ed2ce:	c7 44 24 04 14 e5 cc 	movl   $0x8cce514,0x4(%esp)
 85ed2d5:	08 
 85ed2d6:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85ed2d9:	89 04 24             	mov    %eax,(%esp)
 85ed2dc:	e8 a7 24 f6 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85ed2e1:	b8 00 00 00 00       	mov    $0x0,%eax
 85ed2e6:	e9 b5 00 00 00       	jmp    85ed3a0 <_ZN13CQueryCounter14LoadQueryTableEv+0x216>
 85ed2eb:	c7 44 24 0c 00 60 00 	movl   $0x6000,0xc(%esp)
 85ed2f2:	00 
 85ed2f3:	8d 85 b3 9f ff ff    	lea    -0x604d(%ebp),%eax
 85ed2f9:	89 44 24 08          	mov    %eax,0x8(%esp)
 85ed2fd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85ed304:	00 
 85ed305:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85ed308:	89 04 24             	mov    %eax,(%esp)
 85ed30b:	e8 da fa af ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 85ed310:	83 f0 01             	xor    $0x1,%eax
 85ed313:	84 c0                	test   %al,%al
 85ed315:	74 3d                	je     85ed354 <_ZN13CQueryCounter14LoadQueryTableEv+0x1ca>
 85ed317:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85ed31e:	00 
 85ed31f:	c7 44 24 08 3b 02 00 	movl   $0x23b,0x8(%esp)
 85ed326:	00 
 85ed327:	c7 44 24 04 e0 f2 cc 	movl   $0x8ccf2e0,0x4(%esp)
 85ed32e:	08 
 85ed32f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85ed332:	89 04 24             	mov    %eax,(%esp)
 85ed335:	e8 de 23 f6 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85ed33a:	c7 44 24 04 38 e5 cc 	movl   $0x8cce538,0x4(%esp)
 85ed341:	08 
 85ed342:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85ed345:	89 04 24             	mov    %eax,(%esp)
 85ed348:	e8 3b 24 f6 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85ed34d:	b8 00 00 00 00       	mov    $0x0,%eax
 85ed352:	eb 4c                	jmp    85ed3a0 <_ZN13CQueryCounter14LoadQueryTableEv+0x216>
 85ed354:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 85ed357:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85ed35e:	00 
 85ed35f:	89 44 24 08          	mov    %eax,0x8(%esp)
 85ed363:	8d 85 b3 9f ff ff    	lea    -0x604d(%ebp),%eax
 85ed369:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ed36d:	8b 45 08             	mov    0x8(%ebp),%eax
 85ed370:	89 04 24             	mov    %eax,(%esp)
 85ed373:	e8 36 02 00 00       	call   85ed5ae <_ZN13CQueryCounter13RegisterQueryEPKcii>
 85ed378:	83 f0 01             	xor    $0x1,%eax
 85ed37b:	84 c0                	test   %al,%al
 85ed37d:	74 07                	je     85ed386 <_ZN13CQueryCounter14LoadQueryTableEv+0x1fc>
 85ed37f:	b8 00 00 00 00       	mov    $0x0,%eax
 85ed384:	eb 1a                	jmp    85ed3a0 <_ZN13CQueryCounter14LoadQueryTableEv+0x216>
 85ed386:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85ed38a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85ed38d:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 85ed390:	0f 9c c0             	setl   %al
 85ed393:	84 c0                	test   %al,%al
 85ed395:	0f 85 77 fe ff ff    	jne    85ed212 <_ZN13CQueryCounter14LoadQueryTableEv+0x88>
 85ed39b:	b8 01 00 00 00       	mov    $0x1,%eax
 85ed3a0:	c9                   	leave
 85ed3a1:	c3                   	ret

```

```c
// CQueryCounter::LoadQueryTable @ 0x85ed18a

/* CQueryCounter::LoadQueryTable() */

undefined4 __thiscall CQueryCounter::LoadQueryTable(CQueryCounter *this)

{
  char cVar1;
  undefined4 uVar2;
  char local_6051 [24577];
  int local_50;
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  cMyTrace local_2c [16];
  MySQL *local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_18 = 0;
  MySQL::set_query(local_1c,"seLect q_id,query from log_query_ref");
  cVar1 = MySQL::exec(local_1c,true);
  if (cVar1 == '\x01') {
    local_14 = MySQL::get_n_rows(local_1c);
    for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
      local_50 = 0;
      memset(local_6051,0,0x6001);
      cVar1 = MySQL::fetch(local_1c);
      if (cVar1 != '\x01') {
        cMyTrace::cMyTrace(local_4c,"bool CQueryCounter::LoadQueryTable()",0x22f,5);
        cMyTrace::operator()(local_4c,"LoadQueryTable, fatch ERROR");
        return 0;
      }
      cVar1 = MySQL::get_int(local_1c,0,&local_50);
      if (cVar1 != '\x01') {
        cMyTrace::cMyTrace(local_3c,"bool CQueryCounter::LoadQueryTable()",0x235,5);
        cMyTrace::operator()(local_3c,"LoadQueryTable, get_int(0) ERROR");
        return 0;
      }
      cVar1 = MySQL::get_str(local_1c,1,local_6051,0x6000);
      if (cVar1 != '\x01') {
        cMyTrace::cMyTrace(local_2c,"bool CQueryCounter::LoadQueryTable()",0x23b,5);
        cMyTrace::operator()(local_2c,"LoadQueryTable, get_str(1) ERROR");
        return 0;
      }
      cVar1 = RegisterQuery((char *)this,(int)local_6051,local_50);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## RegisterQuery

```asm
// === 085ed5ae CQueryCounter::RegisterQuery  [0x085ed5ae-0x85ed6f4] ===
 85ed5ae:	55                   	push   %ebp
 85ed5af:	89 e5                	mov    %esp,%ebp
 85ed5b1:	56                   	push   %esi
 85ed5b2:	53                   	push   %ebx
 85ed5b3:	83 ec 70             	sub    $0x70,%esp
 85ed5b6:	8d 45 ac             	lea    -0x54(%ebp),%eax
 85ed5b9:	89 04 24             	mov    %eax,(%esp)
 85ed5bc:	e8 9f 01 00 00       	call   85ed760 <_ZN13CQueryCounter10QUERY_INFOC1Ev>
 85ed5c1:	8b 45 14             	mov    0x14(%ebp),%eax
 85ed5c4:	89 45 ac             	mov    %eax,-0x54(%ebp)
 85ed5c7:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85ed5ca:	8d 55 ac             	lea    -0x54(%ebp),%edx
 85ed5cd:	89 54 24 08          	mov    %edx,0x8(%esp)
 85ed5d1:	8d 55 10             	lea    0x10(%ebp),%edx
 85ed5d4:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ed5d8:	89 04 24             	mov    %eax,(%esp)
 85ed5db:	e8 fd 03 00 00       	call   85ed9dd <_ZSt9make_pairIRiRN13CQueryCounter10QUERY_INFOEESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 85ed5e0:	83 ec 04             	sub    $0x4,%esp
 85ed5e3:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85ed5e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ed5ea:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85ed5ed:	89 04 24             	mov    %eax,(%esp)
 85ed5f0:	e8 27 04 00 00       	call   85eda1c <_ZNSt4pairIKiN13CQueryCounter10QUERY_INFOEEC1IiS2_EEOS_IT_T0_E>
 85ed5f5:	8b 45 08             	mov    0x8(%ebp),%eax
 85ed5f8:	8d 48 04             	lea    0x4(%eax),%ecx
 85ed5fb:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85ed5fe:	8d 55 b8             	lea    -0x48(%ebp),%edx
 85ed601:	89 54 24 08          	mov    %edx,0x8(%esp)
 85ed605:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85ed609:	89 04 24             	mov    %eax,(%esp)
 85ed60c:	e8 47 04 00 00       	call   85eda58 <_ZNSt3mapIiN13CQueryCounter10QUERY_INFOESt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 85ed611:	83 ec 04             	sub    $0x4,%esp
 85ed614:	0f b6 45 a8          	movzbl -0x58(%ebp),%eax
 85ed618:	83 f0 01             	xor    $0x1,%eax
 85ed61b:	84 c0                	test   %al,%al
 85ed61d:	74 0a                	je     85ed629 <_ZN13CQueryCounter13RegisterQueryEPKcii+0x7b>
 85ed61f:	b8 00 00 00 00       	mov    $0x0,%eax
 85ed624:	e9 c2 00 00 00       	jmp    85ed6eb <_ZN13CQueryCounter13RegisterQueryEPKcii+0x13d>
 85ed629:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85ed62c:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 85ed62f:	89 54 24 08          	mov    %edx,0x8(%esp)
 85ed633:	8d 55 0c             	lea    0xc(%ebp),%edx
 85ed636:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ed63a:	89 04 24             	mov    %eax,(%esp)
 85ed63d:	e8 42 04 00 00       	call   85eda84 <_ZSt9make_pairIRPKcRSt17_Rb_tree_iteratorISt4pairIKiN13CQueryCounter10QUERY_INFOEEEES4_INSt17__decay_and_stripIT_E6__typeENSB_IT0_E6__typeEEOSC_OSF_>
 85ed642:	83 ec 04             	sub    $0x4,%esp
 85ed645:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85ed648:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ed64c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85ed64f:	89 04 24             	mov    %eax,(%esp)
 85ed652:	e8 6b 04 00 00       	call   85edac2 <_ZNSt4pairIKSsSt17_Rb_tree_iteratorIS_IKiN13CQueryCounter10QUERY_INFOEEEEC1IPKcS6_EEOS_IT_T0_E>
 85ed657:	8b 45 08             	mov    0x8(%ebp),%eax
 85ed65a:	8d 48 1c             	lea    0x1c(%eax),%ecx
 85ed65d:	8d 45 9c             	lea    -0x64(%ebp),%eax
 85ed660:	8d 55 d8             	lea    -0x28(%ebp),%edx
 85ed663:	89 54 24 08          	mov    %edx,0x8(%esp)
 85ed667:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85ed66b:	89 04 24             	mov    %eax,(%esp)
 85ed66e:	e8 cb 04 00 00       	call   85edb3e <_ZNSt3mapISsSt17_Rb_tree_iteratorISt4pairIKiN13CQueryCounter10QUERY_INFOEEESt4lessISsESaIS1_IKSsS6_EEE6insertERKSA_>
 85ed673:	83 ec 04             	sub    $0x4,%esp
 85ed676:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85ed679:	89 04 24             	mov    %eax,(%esp)
 85ed67c:	e8 b5 01 00 00       	call   85ed836 <_ZNSt4pairIKSsSt17_Rb_tree_iteratorIS_IKiN13CQueryCounter10QUERY_INFOEEEED1Ev>
 85ed681:	0f b6 45 a0          	movzbl -0x60(%ebp),%eax
 85ed685:	83 f0 01             	xor    $0x1,%eax
 85ed688:	84 c0                	test   %al,%al
 85ed68a:	74 5a                	je     85ed6e6 <_ZN13CQueryCounter13RegisterQueryEPKcii+0x138>
 85ed68c:	eb 1b                	jmp    85ed6a9 <_ZN13CQueryCounter13RegisterQueryEPKcii+0xfb>
 85ed68e:	89 d3                	mov    %edx,%ebx
 85ed690:	89 c6                	mov    %eax,%esi
 85ed692:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85ed695:	89 04 24             	mov    %eax,(%esp)
 85ed698:	e8 99 01 00 00       	call   85ed836 <_ZNSt4pairIKSsSt17_Rb_tree_iteratorIS_IKiN13CQueryCounter10QUERY_INFOEEEED1Ev>
 85ed69d:	89 f0                	mov    %esi,%eax
 85ed69f:	89 da                	mov    %ebx,%edx
 85ed6a1:	89 04 24             	mov    %eax,(%esp)
 85ed6a4:	e8 a7 60 4f 00       	call   8ae3750 <_Unwind_Resume>
 85ed6a9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85ed6b0:	00 
 85ed6b1:	c7 44 24 08 91 02 00 	movl   $0x291,0x8(%esp)
 85ed6b8:	00 
 85ed6b9:	c7 44 24 04 60 f2 cc 	movl   $0x8ccf260,0x4(%esp)
 85ed6c0:	08 
 85ed6c1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85ed6c4:	89 04 24             	mov    %eax,(%esp)
 85ed6c7:	e8 4c 20 f6 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85ed6cc:	c7 44 24 04 34 e6 cc 	movl   $0x8cce634,0x4(%esp)
 85ed6d3:	08 
 85ed6d4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85ed6d7:	89 04 24             	mov    %eax,(%esp)
 85ed6da:	e8 a9 20 f6 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85ed6df:	b8 00 00 00 00       	mov    $0x0,%eax
 85ed6e4:	eb 05                	jmp    85ed6eb <_ZN13CQueryCounter13RegisterQueryEPKcii+0x13d>
 85ed6e6:	b8 01 00 00 00       	mov    $0x1,%eax
 85ed6eb:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85ed6ee:	83 c4 00             	add    $0x0,%esp
 85ed6f1:	5b                   	pop    %ebx
 85ed6f2:	5e                   	pop    %esi
 85ed6f3:	5d                   	pop    %ebp
 85ed6f4:	c3                   	ret

```

```c
// CQueryCounter::RegisterQuery @ 0x85ed5ae

/* CQueryCounter::RegisterQuery(char const*, int, int) */

undefined4 CQueryCounter::RegisterQuery(char *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 in_stack_00000010;
  pair local_68 [4];
  char local_64;
  pair local_60 [4];
  char local_5c;
  undefined4 local_58 [3];
  pair<int_const,CQueryCounter::QUERY_INFO> local_4c [16];
  int local_3c [4];
  pair<std::string_const,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
  local_2c [8];
  char *local_24 [2];
  cMyTrace local_1c [16];
  
  QUERY_INFO::QUERY_INFO((QUERY_INFO *)local_58);
  local_58[0] = in_stack_00000010;
  std::make_pair<int&,CQueryCounter::QUERY_INFO&>(local_3c,(QUERY_INFO *)&param_3);
  std::pair<int_const,CQueryCounter::QUERY_INFO>::pair<int,CQueryCounter::QUERY_INFO>
            (local_4c,(pair *)local_3c);
  std::
  map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
  ::insert(local_60);
  if (local_5c == '\x01') {
    std::
    make_pair<char_const*&,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>&>
              (local_24,(_Rb_tree_iterator *)&param_2);
    std::
    pair<std::string_const,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>::
    pair<char_const*,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
              (local_2c,(pair *)local_24);
                    /* try { // try from 085ed66e to 085ed672 has its CatchHandler @ 085ed68e */
    std::
    map<std::string,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>>>
    ::insert(local_68);
    std::
    pair<std::string_const,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>::
    ~pair(local_2c);
    if (local_64 == '\x01') {
      uVar1 = 1;
    }
    else {
      cMyTrace::cMyTrace(local_1c,"bool CQueryCounter::RegisterQuery(const char*, int, int)",0x291,0
                        );
      cMyTrace::operator()(local_1c,"LoadQueryTable,  query_id_map_.insert ERROR");
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## Reset

```asm
// === 085ecbd6 CQueryCounter::Reset  [0x085ecbd6-0x85ecc5d] ===
 85ecbd6:	55                   	push   %ebp
 85ecbd7:	89 e5                	mov    %esp,%ebp
 85ecbd9:	83 ec 28             	sub    $0x28,%esp
 85ecbdc:	8b 45 08             	mov    0x8(%ebp),%eax
 85ecbdf:	8d 50 04             	lea    0x4(%eax),%edx
 85ecbe2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85ecbe5:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ecbe9:	89 04 24             	mov    %eax,(%esp)
 85ecbec:	e8 15 48 e6 ff       	call   8451406 <_ZNSt3mapIiN13CQueryCounter10QUERY_INFOESt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 85ecbf1:	83 ec 04             	sub    $0x4,%esp
 85ecbf4:	eb 2d                	jmp    85ecc23 <_ZN13CQueryCounter5ResetEv+0x4d>
 85ecbf6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85ecbf9:	89 04 24             	mov    %eax,(%esp)
 85ecbfc:	e8 a3 48 e6 ff       	call   84514a4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN13CQueryCounter10QUERY_INFOEEEptEv>
 85ecc01:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 85ecc08:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85ecc0b:	89 04 24             	mov    %eax,(%esp)
 85ecc0e:	e8 91 48 e6 ff       	call   84514a4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN13CQueryCounter10QUERY_INFOEEEptEv>
 85ecc13:	d9 ee                	fldz
 85ecc15:	dd 58 08             	fstpl  0x8(%eax)
 85ecc18:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85ecc1b:	89 04 24             	mov    %eax,(%esp)
 85ecc1e:	e8 29 0d 00 00       	call   85ed94c <_ZNSt17_Rb_tree_iteratorISt4pairIKiN13CQueryCounter10QUERY_INFOEEEppEv>
 85ecc23:	8b 45 08             	mov    0x8(%ebp),%eax
 85ecc26:	8d 50 04             	lea    0x4(%eax),%edx
 85ecc29:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85ecc2c:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ecc30:	89 04 24             	mov    %eax,(%esp)
 85ecc33:	e8 f4 47 e6 ff       	call   845142c <_ZNSt3mapIiN13CQueryCounter10QUERY_INFOESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 85ecc38:	83 ec 04             	sub    $0x4,%esp
 85ecc3b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85ecc3e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ecc42:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85ecc45:	89 04 24             	mov    %eax,(%esp)
 85ecc48:	e8 05 48 e6 ff       	call   8451452 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN13CQueryCounter10QUERY_INFOEEEneERKS5_>
 85ecc4d:	84 c0                	test   %al,%al
 85ecc4f:	75 a5                	jne    85ecbf6 <_ZN13CQueryCounter5ResetEv+0x20>
 85ecc51:	8b 45 08             	mov    0x8(%ebp),%eax
 85ecc54:	c7 40 38 00 00 00 00 	movl   $0x0,0x38(%eax)
 85ecc5b:	c9                   	leave
 85ecc5c:	c3                   	ret
 85ecc5d:	90                   	nop

```

```c
// CQueryCounter::Reset @ 0x85ecbd6

/* CQueryCounter::Reset() */

void __thiscall CQueryCounter::Reset(CQueryCounter *this)

{
  char cVar1;
  int iVar2;
  map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
  local_14 [4];
  map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
  local_10 [12];
  
  std::
  map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
  ::begin(local_14);
  while( true ) {
    std::
    map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>> *)local_14
                       ,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>> *)local_14
                      );
    *(undefined4 *)(iVar2 + 4) = 0;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>> *)local_14
                      );
    *(undefined8 *)(iVar2 + 8) = 0;
    std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>> *)local_14);
  }
  *(undefined4 *)(this + 0x38) = 0;
  return;
}

```

---

## SaveQuery

```asm
// === 085ed3a2 CQueryCounter::SaveQuery  [0x085ed3a2-0x85ed5ad] ===
 85ed3a2:	55                   	push   %ebp
 85ed3a3:	89 e5                	mov    %esp,%ebp
 85ed3a5:	81 ec 58 c0 00 00    	sub    $0xc058,%esp
 85ed3ab:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 85ed3b0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85ed3b7:	00 
 85ed3b8:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 85ed3bf:	00 
 85ed3c0:	89 04 24             	mov    %eax,(%esp)
 85ed3c3:	e8 76 7e e0 ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 85ed3c8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85ed3cb:	8d 85 c3 3f ff ff    	lea    -0xc03d(%ebp),%eax
 85ed3d1:	ba 01 c0 00 00       	mov    $0xc001,%edx
 85ed3d6:	89 54 24 08          	mov    %edx,0x8(%esp)
 85ed3da:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85ed3e1:	00 
 85ed3e2:	89 04 24             	mov    %eax,(%esp)
 85ed3e5:	e8 d6 08 a9 ff       	call   807dcc0 <memset@plt>
 85ed3ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ed3ed:	89 44 24 08          	mov    %eax,0x8(%esp)
 85ed3f1:	8d 85 c3 3f ff ff    	lea    -0xc03d(%ebp),%eax
 85ed3f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ed3fb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85ed3fe:	89 04 24             	mov    %eax,(%esp)
 85ed401:	e8 a4 74 e0 ff       	call   83f48aa <_ZN5MySQL13escape_stringEPcPKc>
 85ed406:	8d 85 c3 3f ff ff    	lea    -0xc03d(%ebp),%eax
 85ed40c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85ed410:	8d 85 c3 3f ff ff    	lea    -0xc03d(%ebp),%eax
 85ed416:	89 44 24 08          	mov    %eax,0x8(%esp)
 85ed41a:	c7 44 24 04 5c e5 cc 	movl   $0x8cce55c,0x4(%esp)
 85ed421:	08 
 85ed422:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85ed425:	89 04 24             	mov    %eax,(%esp)
 85ed428:	e8 93 6d e0 ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 85ed42d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85ed434:	00 
 85ed435:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85ed438:	89 04 24             	mov    %eax,(%esp)
 85ed43b:	e8 e6 6e e0 ff       	call   83f4326 <_ZN5MySQL4execEb>
 85ed440:	83 f0 01             	xor    $0x1,%eax
 85ed443:	84 c0                	test   %al,%al
 85ed445:	0f 84 49 01 00 00    	je     85ed594 <_ZN13CQueryCounter9SaveQueryEPKcRi+0x1f2>
 85ed44b:	8d 85 c3 3f ff ff    	lea    -0xc03d(%ebp),%eax
 85ed451:	89 44 24 08          	mov    %eax,0x8(%esp)
 85ed455:	c7 44 24 04 a8 e5 cc 	movl   $0x8cce5a8,0x4(%esp)
 85ed45c:	08 
 85ed45d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85ed460:	89 04 24             	mov    %eax,(%esp)
 85ed463:	e8 58 6d e0 ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 85ed468:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85ed46f:	00 
 85ed470:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85ed473:	89 04 24             	mov    %eax,(%esp)
 85ed476:	e8 ab 6e e0 ff       	call   83f4326 <_ZN5MySQL4execEb>
 85ed47b:	83 f0 01             	xor    $0x1,%eax
 85ed47e:	84 c0                	test   %al,%al
 85ed480:	74 40                	je     85ed4c2 <_ZN13CQueryCounter9SaveQueryEPKcRi+0x120>
 85ed482:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85ed489:	00 
 85ed48a:	c7 44 24 08 65 02 00 	movl   $0x265,0x8(%esp)
 85ed491:	00 
 85ed492:	c7 44 24 04 a0 f2 cc 	movl   $0x8ccf2a0,0x4(%esp)
 85ed499:	08 
 85ed49a:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85ed49d:	89 04 24             	mov    %eax,(%esp)
 85ed4a0:	e8 73 22 f6 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85ed4a5:	c7 44 24 04 e7 e5 cc 	movl   $0x8cce5e7,0x4(%esp)
 85ed4ac:	08 
 85ed4ad:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85ed4b0:	89 04 24             	mov    %eax,(%esp)
 85ed4b3:	e8 d0 22 f6 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85ed4b8:	b8 00 00 00 00       	mov    $0x0,%eax
 85ed4bd:	e9 e9 00 00 00       	jmp    85ed5ab <_ZN13CQueryCounter9SaveQueryEPKcRi+0x209>
 85ed4c2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85ed4c5:	89 04 24             	mov    %eax,(%esp)
 85ed4c8:	e8 9f 4e af ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 85ed4cd:	85 c0                	test   %eax,%eax
 85ed4cf:	0f 94 c0             	sete   %al
 85ed4d2:	84 c0                	test   %al,%al
 85ed4d4:	74 0a                	je     85ed4e0 <_ZN13CQueryCounter9SaveQueryEPKcRi+0x13e>
 85ed4d6:	b8 00 00 00 00       	mov    $0x0,%eax
 85ed4db:	e9 cb 00 00 00       	jmp    85ed5ab <_ZN13CQueryCounter9SaveQueryEPKcRi+0x209>
 85ed4e0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85ed4e3:	89 04 24             	mov    %eax,(%esp)
 85ed4e6:	e8 d1 6f e0 ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 85ed4eb:	83 f0 01             	xor    $0x1,%eax
 85ed4ee:	84 c0                	test   %al,%al
 85ed4f0:	74 3d                	je     85ed52f <_ZN13CQueryCounter9SaveQueryEPKcRi+0x18d>
 85ed4f2:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85ed4f9:	00 
 85ed4fa:	c7 44 24 08 71 02 00 	movl   $0x271,0x8(%esp)
 85ed501:	00 
 85ed502:	c7 44 24 04 a0 f2 cc 	movl   $0x8ccf2a0,0x4(%esp)
 85ed509:	08 
 85ed50a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85ed50d:	89 04 24             	mov    %eax,(%esp)
 85ed510:	e8 03 22 f6 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85ed515:	c7 44 24 04 ff e5 cc 	movl   $0x8cce5ff,0x4(%esp)
 85ed51c:	08 
 85ed51d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85ed520:	89 04 24             	mov    %eax,(%esp)
 85ed523:	e8 60 22 f6 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85ed528:	b8 00 00 00 00       	mov    $0x0,%eax
 85ed52d:	eb 7c                	jmp    85ed5ab <_ZN13CQueryCounter9SaveQueryEPKcRi+0x209>
 85ed52f:	8b 45 10             	mov    0x10(%ebp),%eax
 85ed532:	89 44 24 08          	mov    %eax,0x8(%esp)
 85ed536:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85ed53d:	00 
 85ed53e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85ed541:	89 04 24             	mov    %eax,(%esp)
 85ed544:	e8 e3 93 b2 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 85ed549:	83 f0 01             	xor    $0x1,%eax
 85ed54c:	84 c0                	test   %al,%al
 85ed54e:	74 3d                	je     85ed58d <_ZN13CQueryCounter9SaveQueryEPKcRi+0x1eb>
 85ed550:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85ed557:	00 
 85ed558:	c7 44 24 08 77 02 00 	movl   $0x277,0x8(%esp)
 85ed55f:	00 
 85ed560:	c7 44 24 04 a0 f2 cc 	movl   $0x8ccf2a0,0x4(%esp)
 85ed567:	08 
 85ed568:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85ed56b:	89 04 24             	mov    %eax,(%esp)
 85ed56e:	e8 a5 21 f6 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85ed573:	c7 44 24 04 18 e6 cc 	movl   $0x8cce618,0x4(%esp)
 85ed57a:	08 
 85ed57b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85ed57e:	89 04 24             	mov    %eax,(%esp)
 85ed581:	e8 02 22 f6 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85ed586:	b8 00 00 00 00       	mov    $0x0,%eax
 85ed58b:	eb 1e                	jmp    85ed5ab <_ZN13CQueryCounter9SaveQueryEPKcRi+0x209>
 85ed58d:	b8 01 00 00 00       	mov    $0x1,%eax
 85ed592:	eb 17                	jmp    85ed5ab <_ZN13CQueryCounter9SaveQueryEPKcRi+0x209>
 85ed594:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85ed597:	89 04 24             	mov    %eax,(%esp)
 85ed59a:	e8 c7 e6 e0 ff       	call   83fbc66 <_Z17GetIdentityFromDBP5MySQL>
 85ed59f:	89 c2                	mov    %eax,%edx
 85ed5a1:	8b 45 10             	mov    0x10(%ebp),%eax
 85ed5a4:	89 10                	mov    %edx,(%eax)
 85ed5a6:	b8 01 00 00 00       	mov    $0x1,%eax
 85ed5ab:	c9                   	leave
 85ed5ac:	c3                   	ret
 85ed5ad:	90                   	nop

```

```c
// CQueryCounter::SaveQuery @ 0x85ed3a2

/* CQueryCounter::SaveQuery(char const*, int&) */

undefined4 __thiscall CQueryCounter::SaveQuery(CQueryCounter *this,char *param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char local_c041 [49153];
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  memset(local_c041,0,0xc001);
  MySQL::escape_string(local_10,local_c041,param_1);
  pcVar4 = local_c041;
  MySQL::set_query(local_10,
                   "inSert into log_query_ref(query, query_hash) values(\'%s\',password(\'%s\'))",
                   local_c041,pcVar4);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 == '\x01') {
    iVar3 = GetIdentityFromDB(local_10);
    *param_2 = iVar3;
    uVar2 = 1;
  }
  else {
    MySQL::set_query(local_10,"seLect q_id from log_query_ref where query_hash=password(\'%s\')",
                     local_c041,pcVar4);
    cVar1 = MySQL::exec(local_10,true);
    if (cVar1 == '\x01') {
      iVar3 = MySQL::get_n_rows(local_10);
      if (iVar3 == 0) {
        uVar2 = 0;
      }
      else {
        cVar1 = MySQL::fetch(local_10);
        if (cVar1 == '\x01') {
          cVar1 = MySQL::get_int(local_10,0,param_2);
          if (cVar1 == '\x01') {
            uVar2 = 1;
          }
          else {
            cMyTrace::cMyTrace(local_20,"bool CQueryCounter::SaveQuery(const char*, int&)",0x277,5);
            cMyTrace::operator()(local_20,"SaveQuery, get_int(0) ERROR");
            uVar2 = 0;
          }
        }
        else {
          cMyTrace::cMyTrace(local_30,"bool CQueryCounter::SaveQuery(const char*, int&)",0x271,5);
          cMyTrace::operator()(local_30,"SaveQuery, fetch() ERROR");
          uVar2 = 0;
        }
      }
    }
    else {
      cMyTrace::cMyTrace(local_40,"bool CQueryCounter::SaveQuery(const char*, int&)",0x265,5);
      cMyTrace::operator()(local_40,"SaveQuery, exec() ERROR");
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

---

## SetResponseTime

```asm
// === 085ed108 CQueryCounter::SetResponseTime  [0x085ed108-0x85ed189] ===
 85ed108:	55                   	push   %ebp
 85ed109:	89 e5                	mov    %esp,%ebp
 85ed10b:	53                   	push   %ebx
 85ed10c:	83 ec 34             	sub    $0x34,%esp
 85ed10f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ed112:	89 45 e0             	mov    %eax,-0x20(%ebp)
 85ed115:	8b 45 10             	mov    0x10(%ebp),%eax
 85ed118:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85ed11b:	8b 45 08             	mov    0x8(%ebp),%eax
 85ed11e:	8d 50 04             	lea    0x4(%eax),%edx
 85ed121:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85ed124:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ed128:	89 04 24             	mov    %eax,(%esp)
 85ed12b:	e8 fc 42 e6 ff       	call   845142c <_ZNSt3mapIiN13CQueryCounter10QUERY_INFOESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 85ed130:	83 ec 04             	sub    $0x4,%esp
 85ed133:	8b 45 08             	mov    0x8(%ebp),%eax
 85ed136:	8d 50 34             	lea    0x34(%eax),%edx
 85ed139:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85ed13c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ed140:	89 14 24             	mov    %edx,(%esp)
 85ed143:	e8 0a 43 e6 ff       	call   8451452 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN13CQueryCounter10QUERY_INFOEEEneERKS5_>
 85ed148:	84 c0                	test   %al,%al
 85ed14a:	74 38                	je     85ed184 <_ZN13CQueryCounter15SetResponseTimeEd+0x7c>
 85ed14c:	8b 45 08             	mov    0x8(%ebp),%eax
 85ed14f:	83 c0 34             	add    $0x34,%eax
 85ed152:	89 04 24             	mov    %eax,(%esp)
 85ed155:	e8 4a 43 e6 ff       	call   84514a4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN13CQueryCounter10QUERY_INFOEEEptEv>
 85ed15a:	dd 40 08             	fldl   0x8(%eax)
 85ed15d:	dc 45 e0             	faddl  -0x20(%ebp)
 85ed160:	dd 58 08             	fstpl  0x8(%eax)
 85ed163:	8b 45 08             	mov    0x8(%ebp),%eax
 85ed166:	8d 50 04             	lea    0x4(%eax),%edx
 85ed169:	8b 5d 08             	mov    0x8(%ebp),%ebx
 85ed16c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85ed16f:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ed173:	89 04 24             	mov    %eax,(%esp)
 85ed176:	e8 b1 42 e6 ff       	call   845142c <_ZNSt3mapIiN13CQueryCounter10QUERY_INFOESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 85ed17b:	83 ec 04             	sub    $0x4,%esp
 85ed17e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85ed181:	89 43 34             	mov    %eax,0x34(%ebx)
 85ed184:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 85ed187:	c9                   	leave
 85ed188:	c3                   	ret
 85ed189:	90                   	nop

```

```c
// CQueryCounter::SetResponseTime @ 0x85ed108

/* CQueryCounter::SetResponseTime(double) */

void CQueryCounter::SetResponseTime(double param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_stack_0000000c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
  local_10 [8];
  
  local_24 = param_1._4_4_;
  uStack_20 = in_stack_0000000c;
  std::
  map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>::operator!=
                    ((_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>> *)
                     (param_1._0_4_ + 0x34),(_Rb_tree_iterator *)local_10);
  if (cVar1 != '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>> *)
                       (param_1._0_4_ + 0x34));
    *(double *)(iVar2 + 8) = *(double *)(iVar2 + 8) + (double)CONCAT44(uStack_20,local_24);
    std::
    map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
    ::end((map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
           *)&local_28);
    *(undefined4 *)(param_1._0_4_ + 0x34) = local_28;
  }
  return;
}

```

---

## UpdateQueryCounter

```asm
// === 085ecee6 CQueryCounter::UpdateQueryCounter  [0x085ecee6-0x85ed107] ===
 85ecee6:	55                   	push   %ebp
 85ecee7:	89 e5                	mov    %esp,%ebp
 85ecee9:	56                   	push   %esi
 85eceea:	53                   	push   %ebx
 85eceeb:	83 ec 50             	sub    $0x50,%esp
 85eceee:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 85ecef3:	c7 44 24 08 f1 01 00 	movl   $0x1f1,0x8(%esp)
 85ecefa:	00 
 85ecefb:	c7 44 24 04 bd e4 cc 	movl   $0x8cce4bd,0x4(%esp)
 85ecf02:	08 
 85ecf03:	89 04 24             	mov    %eax,(%esp)
 85ecf06:	e8 7b 2b ca ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 85ecf0b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85ecf12:	00 
 85ecf13:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ecf17:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85ecf1a:	89 04 24             	mov    %eax,(%esp)
 85ecf1d:	e8 04 bd ad ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 85ecf22:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85ecf25:	89 04 24             	mov    %eax,(%esp)
 85ecf28:	e8 19 bd ad ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85ecf2d:	c7 44 24 04 7d 00 00 	movl   $0x7d,0x4(%esp)
 85ecf34:	00 
 85ecf35:	89 04 24             	mov    %eax,(%esp)
 85ecf38:	e8 19 bd ad ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 85ecf3d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85ecf40:	89 04 24             	mov    %eax,(%esp)
 85ecf43:	e8 fe bc ad ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85ecf48:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 85ecf4f:	ff 
 85ecf50:	89 04 24             	mov    %eax,(%esp)
 85ecf53:	e8 fe bc ad ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 85ecf58:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 85ecf5f:	e8 ec 07 a9 ff       	call   807d750 <time@plt>
 85ecf64:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85ecf67:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85ecf6a:	89 04 24             	mov    %eax,(%esp)
 85ecf6d:	e8 d4 bc ad ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85ecf72:	8b 55 e8             	mov    -0x18(%ebp),%edx
 85ecf75:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ecf79:	89 04 24             	mov    %eax,(%esp)
 85ecf7c:	e8 d5 bc ad ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 85ecf81:	8b 45 08             	mov    0x8(%ebp),%eax
 85ecf84:	8b 58 38             	mov    0x38(%eax),%ebx
 85ecf87:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85ecf8a:	89 04 24             	mov    %eax,(%esp)
 85ecf8d:	e8 b4 bc ad ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85ecf92:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85ecf96:	89 04 24             	mov    %eax,(%esp)
 85ecf99:	e8 b8 bc ad ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 85ecf9e:	8b 45 08             	mov    0x8(%ebp),%eax
 85ecfa1:	8d 50 04             	lea    0x4(%eax),%edx
 85ecfa4:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85ecfa7:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ecfab:	89 04 24             	mov    %eax,(%esp)
 85ecfae:	e8 53 44 e6 ff       	call   8451406 <_ZNSt3mapIiN13CQueryCounter10QUERY_INFOESt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 85ecfb3:	83 ec 04             	sub    $0x4,%esp
 85ecfb6:	e9 c1 00 00 00       	jmp    85ed07c <_ZN13CQueryCounter18UpdateQueryCounterEv+0x196>
 85ecfbb:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85ecfbe:	89 04 24             	mov    %eax,(%esp)
 85ecfc1:	e8 de 44 e6 ff       	call   84514a4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN13CQueryCounter10QUERY_INFOEEEptEv>
 85ecfc6:	8b 00                	mov    (%eax),%eax
 85ecfc8:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85ecfcb:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85ecfce:	89 04 24             	mov    %eax,(%esp)
 85ecfd1:	e8 ce 44 e6 ff       	call   84514a4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN13CQueryCounter10QUERY_INFOEEEptEv>
 85ecfd6:	8b 40 04             	mov    0x4(%eax),%eax
 85ecfd9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85ecfdc:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85ecfdf:	89 04 24             	mov    %eax,(%esp)
 85ecfe2:	e8 bd 44 e6 ff       	call   84514a4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN13CQueryCounter10QUERY_INFOEEEptEv>
 85ecfe7:	dd 40 08             	fldl   0x8(%eax)
 85ecfea:	dd 05 10 f3 cc 08    	fldl   0x8ccf310
 85ecff0:	de c9                	fmulp  %st,%st(1)
 85ecff2:	d9 7d c6             	fnstcw -0x3a(%ebp)
 85ecff5:	0f b7 45 c6          	movzwl -0x3a(%ebp),%eax
 85ecff9:	b4 0c                	mov    $0xc,%ah
 85ecffb:	66 89 45 c4          	mov    %ax,-0x3c(%ebp)
 85ecfff:	d9 6d c4             	fldcw  -0x3c(%ebp)
 85ed002:	db 5d f4             	fistpl -0xc(%ebp)
 85ed005:	d9 6d c6             	fldcw  -0x3a(%ebp)
 85ed008:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 85ed00c:	7e 50                	jle    85ed05e <_ZN13CQueryCounter18UpdateQueryCounterEv+0x178>
 85ed00e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85ed011:	89 04 24             	mov    %eax,(%esp)
 85ed014:	e8 2d bc ad ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85ed019:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85ed01c:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ed020:	89 04 24             	mov    %eax,(%esp)
 85ed023:	e8 2e bc ad ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 85ed028:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85ed02b:	89 04 24             	mov    %eax,(%esp)
 85ed02e:	e8 13 bc ad ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85ed033:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85ed036:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ed03a:	89 04 24             	mov    %eax,(%esp)
 85ed03d:	e8 14 bc ad ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 85ed042:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85ed045:	89 04 24             	mov    %eax,(%esp)
 85ed048:	e8 f9 bb ad ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85ed04d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85ed050:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ed054:	89 04 24             	mov    %eax,(%esp)
 85ed057:	e8 fa bb ad ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 85ed05c:	eb 01                	jmp    85ed05f <_ZN13CQueryCounter18UpdateQueryCounterEv+0x179>
 85ed05e:	90                   	nop
 85ed05f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85ed062:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85ed069:	00 
 85ed06a:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 85ed06d:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ed071:	89 04 24             	mov    %eax,(%esp)
 85ed074:	e8 ed 43 e6 ff       	call   8451466 <_ZNSt17_Rb_tree_iteratorISt4pairIKiN13CQueryCounter10QUERY_INFOEEEppEi>
 85ed079:	83 ec 04             	sub    $0x4,%esp
 85ed07c:	8b 45 08             	mov    0x8(%ebp),%eax
 85ed07f:	8d 50 04             	lea    0x4(%eax),%edx
 85ed082:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85ed085:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ed089:	89 04 24             	mov    %eax,(%esp)
 85ed08c:	e8 9b 43 e6 ff       	call   845142c <_ZNSt3mapIiN13CQueryCounter10QUERY_INFOESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 85ed091:	83 ec 04             	sub    $0x4,%esp
 85ed094:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85ed097:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ed09b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85ed09e:	89 04 24             	mov    %eax,(%esp)
 85ed0a1:	e8 ac 43 e6 ff       	call   8451452 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN13CQueryCounter10QUERY_INFOEEEneERKS5_>
 85ed0a6:	84 c0                	test   %al,%al
 85ed0a8:	0f 85 0d ff ff ff    	jne    85ecfbb <_ZN13CQueryCounter18UpdateQueryCounterEv+0xd5>
 85ed0ae:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 85ed0b3:	8d 55 d8             	lea    -0x28(%ebp),%edx
 85ed0b6:	89 54 24 08          	mov    %edx,0x8(%esp)
 85ed0ba:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 85ed0c1:	00 
 85ed0c2:	89 04 24             	mov    %eax,(%esp)
 85ed0c5:	e8 14 3f f8 ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 85ed0ca:	8b 45 08             	mov    0x8(%ebp),%eax
 85ed0cd:	89 04 24             	mov    %eax,(%esp)
 85ed0d0:	e8 01 fb ff ff       	call   85ecbd6 <_ZN13CQueryCounter5ResetEv>
 85ed0d5:	eb 1b                	jmp    85ed0f2 <_ZN13CQueryCounter18UpdateQueryCounterEv+0x20c>
 85ed0d7:	89 d3                	mov    %edx,%ebx
 85ed0d9:	89 c6                	mov    %eax,%esi
 85ed0db:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85ed0de:	89 04 24             	mov    %eax,(%esp)
 85ed0e1:	e8 ec f7 02 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 85ed0e6:	89 f0                	mov    %esi,%eax
 85ed0e8:	89 da                	mov    %ebx,%edx
 85ed0ea:	89 04 24             	mov    %eax,(%esp)
 85ed0ed:	e8 5e 66 4f 00       	call   8ae3750 <_Unwind_Resume>
 85ed0f2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85ed0f5:	89 04 24             	mov    %eax,(%esp)
 85ed0f8:	e8 d5 f7 02 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 85ed0fd:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85ed100:	83 c4 00             	add    $0x0,%esp
 85ed103:	5b                   	pop    %ebx
 85ed104:	5e                   	pop    %esi
 85ed105:	5d                   	pop    %ebp
 85ed106:	c3                   	ret
 85ed107:	90                   	nop

```

```c
// CQueryCounter::UpdateQueryCounter @ 0x85ecee6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CQueryCounter::UpdateQueryCounter() */

void __thiscall CQueryCounter::UpdateQueryCounter(CQueryCounter *this)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int *piVar4;
  int iVar5;
  map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
  local_30 [4];
  CStreamGuard local_2c [8];
  map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
  local_24 [4];
  _Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>> local_20 [4];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"QueryCounter.cpp",0x1f1);
  CStreamGuard::CStreamGuard(local_2c,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
                    /* try { // try from 085ecf38 to 085ed0d4 has its CatchHandler @ 085ed0d7 */
  CStreamGuard::operator<<(pCVar3,0x7d);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
  CStreamGuard::operator<<(pCVar3,-1);
  local_1c = time((time_t *)0x0);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
  CStreamGuard::operator<<(pCVar3,local_1c);
  iVar5 = *(int *)(this + 0x38);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
  CStreamGuard::operator<<(pCVar3,iVar5);
  std::
  map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
  ::begin(local_30);
  while( true ) {
    std::
    map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
    ::end(local_24);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>> *)local_30
                       ,(_Rb_tree_iterator *)local_24);
    if (cVar1 == '\0') break;
    piVar4 = (int *)std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>> *)
                               local_30);
    local_18 = *piVar4;
    iVar5 = std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>> *)local_30
                      );
    local_14 = *(int *)(iVar5 + 4);
    iVar5 = std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>> *)local_30
                      );
    local_10 = (int)ROUND(_DAT_08ccf310 * *(double *)(iVar5 + 8));
    if (0 < local_14) {
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
      CStreamGuard::operator<<(pCVar3,local_18);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
      CStreamGuard::operator<<(pCVar3,local_14);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
      CStreamGuard::operator<<(pCVar3,local_10);
    }
    std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>::operator++
              (local_20,(int)local_30);
  }
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_2c);
  Reset(this);
  CStreamGuard::~CStreamGuard(local_2c);
  return;
}

```

---

## ~CQueryCounter

```asm
// === 085ecb8a CQueryCounter::~CQueryCounter  [0x085ecb8a-0x85ecbd5] ===
 85ecb8a:	55                   	push   %ebp
 85ecb8b:	89 e5                	mov    %esp,%ebp
 85ecb8d:	56                   	push   %esi
 85ecb8e:	53                   	push   %ebx
 85ecb8f:	83 ec 10             	sub    $0x10,%esp
 85ecb92:	8b 45 08             	mov    0x8(%ebp),%eax
 85ecb95:	83 c0 1c             	add    $0x1c,%eax
 85ecb98:	89 04 24             	mov    %eax,(%esp)
 85ecb9b:	e8 82 0c 00 00       	call   85ed822 <_ZNSt3mapISsSt17_Rb_tree_iteratorISt4pairIKiN13CQueryCounter10QUERY_INFOEEESt4lessISsESaIS1_IKSsS6_EEED1Ev>
 85ecba0:	eb 1e                	jmp    85ecbc0 <_ZN13CQueryCounterD1Ev+0x36>
 85ecba2:	89 d3                	mov    %edx,%ebx
 85ecba4:	89 c6                	mov    %eax,%esi
 85ecba6:	8b 45 08             	mov    0x8(%ebp),%eax
 85ecba9:	83 c0 04             	add    $0x4,%eax
 85ecbac:	89 04 24             	mov    %eax,(%esp)
 85ecbaf:	e8 5a 0c 00 00       	call   85ed80e <_ZNSt3mapIiN13CQueryCounter10QUERY_INFOESt4lessIiESaISt4pairIKiS1_EEED1Ev>
 85ecbb4:	89 f0                	mov    %esi,%eax
 85ecbb6:	89 da                	mov    %ebx,%edx
 85ecbb8:	89 04 24             	mov    %eax,(%esp)
 85ecbbb:	e8 90 6b 4f 00       	call   8ae3750 <_Unwind_Resume>
 85ecbc0:	8b 45 08             	mov    0x8(%ebp),%eax
 85ecbc3:	83 c0 04             	add    $0x4,%eax
 85ecbc6:	89 04 24             	mov    %eax,(%esp)
 85ecbc9:	e8 40 0c 00 00       	call   85ed80e <_ZNSt3mapIiN13CQueryCounter10QUERY_INFOESt4lessIiESaISt4pairIKiS1_EEED1Ev>
 85ecbce:	83 c4 10             	add    $0x10,%esp
 85ecbd1:	5b                   	pop    %ebx
 85ecbd2:	5e                   	pop    %esi
 85ecbd3:	5d                   	pop    %ebp
 85ecbd4:	c3                   	ret
 85ecbd5:	90                   	nop

```

```c
// CQueryCounter::~CQueryCounter @ 0x85ecb8a

/* CQueryCounter::~CQueryCounter() */

void __thiscall CQueryCounter::~CQueryCounter(CQueryCounter *this)

{
                    /* try { // try from 085ecb9b to 085ecb9f has its CatchHandler @ 085ecba2 */
  std::
  map<std::string,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>>>
  ::~map((map<std::string,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>>>
          *)(this + 0x1c));
  std::
  map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
  ::~map((map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
          *)(this + 4));
  return;
}

```

