# STMonsterScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## Clear

```asm
// === 08a398aa STMonsterScript::Clear  [0x08a398aa-0x8a3a537] ===
 8a398aa:	55                   	push   %ebp
 8a398ab:	89 e5                	mov    %esp,%ebp
 8a398ad:	53                   	push   %ebx
 8a398ae:	83 ec 34             	sub    $0x34,%esp
 8a398b1:	8b 45 08             	mov    0x8(%ebp),%eax
 8a398b4:	c6 80 50 0c 00 00 00 	movb   $0x0,0xc50(%eax)
 8a398bb:	8b 45 08             	mov    0x8(%ebp),%eax
 8a398be:	c6 80 a8 03 00 00 00 	movb   $0x0,0x3a8(%eax)
 8a398c5:	8b 45 08             	mov    0x8(%ebp),%eax
 8a398c8:	05 38 01 00 00       	add    $0x138,%eax
 8a398cd:	89 04 24             	mov    %eax,(%esp)
 8a398d0:	e8 ff da 92 ff       	call   83673d4 <_ZN14STAIInfoScript5clearEv>
 8a398d5:	8b 45 08             	mov    0x8(%ebp),%eax
 8a398d8:	c6 80 3c 03 00 00 01 	movb   $0x1,0x33c(%eax)
 8a398df:	8b 45 08             	mov    0x8(%ebp),%eax
 8a398e2:	c6 80 68 03 00 00 01 	movb   $0x1,0x368(%eax)
 8a398e9:	8b 45 08             	mov    0x8(%ebp),%eax
 8a398ec:	c7 80 6c 03 00 00 00 	movl   $0x0,0x36c(%eax)
 8a398f3:	00 00 00 
 8a398f6:	8b 45 08             	mov    0x8(%ebp),%eax
 8a398f9:	c7 80 70 03 00 00 00 	movl   $0x0,0x370(%eax)
 8a39900:	00 00 00 
 8a39903:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39906:	c6 80 74 03 00 00 00 	movb   $0x0,0x374(%eax)
 8a3990d:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39910:	c7 80 78 03 00 00 00 	movl   $0x0,0x378(%eax)
 8a39917:	00 00 00 
 8a3991a:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3991d:	c7 80 7c 03 00 00 00 	movl   $0x0,0x37c(%eax)
 8a39924:	00 00 00 
 8a39927:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3992a:	c7 80 80 03 00 00 00 	movl   $0x0,0x380(%eax)
 8a39931:	00 00 00 
 8a39934:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39937:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8a3993d:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39940:	83 c0 04             	add    $0x4,%eax
 8a39943:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a3994a:	08 
 8a3994b:	89 04 24             	mov    %eax,(%esp)
 8a3994e:	e8 cd ed cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a39953:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39956:	83 c0 08             	add    $0x8,%eax
 8a39959:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a39960:	08 
 8a39961:	89 04 24             	mov    %eax,(%esp)
 8a39964:	e8 b7 ed cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a39969:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3996c:	c7 40 0c 28 00 00 00 	movl   $0x28,0xc(%eax)
 8a39973:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39976:	c7 40 10 14 00 00 00 	movl   $0x14,0x10(%eax)
 8a3997d:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39980:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 8a39987:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3998a:	c7 40 18 01 00 00 00 	movl   $0x1,0x18(%eax)
 8a39991:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39994:	83 c0 1c             	add    $0x1c,%eax
 8a39997:	89 04 24             	mov    %eax,(%esp)
 8a3999a:	e8 cf d1 65 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 8a3999f:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8a399a6:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8a399ad:	eb 21                	jmp    8a399d0 <_ZN15STMonsterScript5ClearEv+0x126>
 8a399af:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8a399b2:	89 d0                	mov    %edx,%eax
 8a399b4:	01 c0                	add    %eax,%eax
 8a399b6:	01 d0                	add    %edx,%eax
 8a399b8:	c1 e0 02             	shl    $0x2,%eax
 8a399bb:	83 c0 20             	add    $0x20,%eax
 8a399be:	03 45 08             	add    0x8(%ebp),%eax
 8a399c1:	83 c0 08             	add    $0x8,%eax
 8a399c4:	89 04 24             	mov    %eax,(%esp)
 8a399c7:	e8 76 09 74 ff       	call   817a342 <_ZNSt6vectorISt4pairIiiESaIS1_EE5clearEv>
 8a399cc:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8a399d0:	83 7d e0 03          	cmpl   $0x3,-0x20(%ebp)
 8a399d4:	0f 9e c0             	setle  %al
 8a399d7:	84 c0                	test   %al,%al
 8a399d9:	75 d4                	jne    8a399af <_ZN15STMonsterScript5ClearEv+0x105>
 8a399db:	8b 45 08             	mov    0x8(%ebp),%eax
 8a399de:	83 c0 7c             	add    $0x7c,%eax
 8a399e1:	89 04 24             	mov    %eax,(%esp)
 8a399e4:	e8 87 58 00 00       	call   8a3f270 <_ZNSt6vectorI26STMonsterParameterCategorySaIS0_EE5clearEv>
 8a399e9:	8b 45 08             	mov    0x8(%ebp),%eax
 8a399ec:	c6 80 b8 03 00 00 01 	movb   $0x1,0x3b8(%eax)
 8a399f3:	8b 45 08             	mov    0x8(%ebp),%eax
 8a399f6:	c7 80 bc 03 00 00 00 	movl   $0x0,0x3bc(%eax)
 8a399fd:	00 00 00 
 8a39a00:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39a03:	c7 80 c0 03 00 00 00 	movl   $0x0,0x3c0(%eax)
 8a39a0a:	00 00 00 
 8a39a0d:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8a39a14:	eb 19                	jmp    8a39a2f <_ZN15STMonsterScript5ClearEv+0x185>
 8a39a16:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8a39a19:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39a1c:	8d 8a f0 00 00 00    	lea    0xf0(%edx),%ecx
 8a39a22:	ba 00 00 00 00       	mov    $0x0,%edx
 8a39a27:	89 54 88 04          	mov    %edx,0x4(%eax,%ecx,4)
 8a39a2b:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8a39a2f:	83 7d e0 09          	cmpl   $0x9,-0x20(%ebp)
 8a39a33:	0f 9e c0             	setle  %al
 8a39a36:	84 c0                	test   %al,%al
 8a39a38:	75 dc                	jne    8a39a16 <_ZN15STMonsterScript5ClearEv+0x16c>
 8a39a3a:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8a39a41:	e9 d0 01 00 00       	jmp    8a39c16 <_ZN15STMonsterScript5ClearEv+0x36c>
 8a39a46:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8a39a4d:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8a39a54:	eb 20                	jmp    8a39a76 <_ZN15STMonsterScript5ClearEv+0x1cc>
 8a39a56:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 8a39a59:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8a39a5c:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39a5f:	01 c9                	add    %ecx,%ecx
 8a39a61:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8a39a64:	81 c2 fc 00 00 00    	add    $0xfc,%edx
 8a39a6a:	c7 44 90 04 00 00 00 	movl   $0x0,0x4(%eax,%edx,4)
 8a39a71:	00 
 8a39a72:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8a39a76:	83 7d e4 03          	cmpl   $0x3,-0x1c(%ebp)
 8a39a7a:	0f 9e c0             	setle  %al
 8a39a7d:	84 c0                	test   %al,%al
 8a39a7f:	75 d5                	jne    8a39a56 <_ZN15STMonsterScript5ClearEv+0x1ac>
 8a39a81:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8a39a88:	eb 20                	jmp    8a39aaa <_ZN15STMonsterScript5ClearEv+0x200>
 8a39a8a:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 8a39a8d:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8a39a90:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39a93:	01 c9                	add    %ecx,%ecx
 8a39a95:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8a39a98:	81 c2 04 01 00 00    	add    $0x104,%edx
 8a39a9e:	c7 44 90 04 00 00 00 	movl   $0x0,0x4(%eax,%edx,4)
 8a39aa5:	00 
 8a39aa6:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8a39aaa:	83 7d e4 10          	cmpl   $0x10,-0x1c(%ebp)
 8a39aae:	0f 9e c0             	setle  %al
 8a39ab1:	84 c0                	test   %al,%al
 8a39ab3:	75 d5                	jne    8a39a8a <_ZN15STMonsterScript5ClearEv+0x1e0>
 8a39ab5:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8a39ab8:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39abb:	81 c2 24 01 00 00    	add    $0x124,%edx
 8a39ac1:	c7 44 90 0c 00 00 00 	movl   $0x0,0xc(%eax,%edx,4)
 8a39ac8:	00 
 8a39ac9:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8a39acc:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39acf:	81 c2 28 01 00 00    	add    $0x128,%edx
 8a39ad5:	c7 44 90 04 00 00 00 	movl   $0x0,0x4(%eax,%edx,4)
 8a39adc:	00 
 8a39add:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8a39ae0:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39ae3:	81 c2 28 01 00 00    	add    $0x128,%edx
 8a39ae9:	c7 44 90 0c 00 00 00 	movl   $0x0,0xc(%eax,%edx,4)
 8a39af0:	00 
 8a39af1:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8a39af4:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39af7:	81 c2 2c 01 00 00    	add    $0x12c,%edx
 8a39afd:	c7 44 90 04 00 00 00 	movl   $0x0,0x4(%eax,%edx,4)
 8a39b04:	00 
 8a39b05:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8a39b08:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39b0b:	81 c2 2c 01 00 00    	add    $0x12c,%edx
 8a39b11:	c7 44 90 0c 00 00 00 	movl   $0x0,0xc(%eax,%edx,4)
 8a39b18:	00 
 8a39b19:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8a39b1c:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39b1f:	81 c2 30 01 00 00    	add    $0x130,%edx
 8a39b25:	c7 44 90 04 00 00 00 	movl   $0x0,0x4(%eax,%edx,4)
 8a39b2c:	00 
 8a39b2d:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8a39b30:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39b33:	81 c2 30 01 00 00    	add    $0x130,%edx
 8a39b39:	c7 44 90 0c 00 00 00 	movl   $0x0,0xc(%eax,%edx,4)
 8a39b40:	00 
 8a39b41:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8a39b44:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39b47:	81 c2 34 01 00 00    	add    $0x134,%edx
 8a39b4d:	c7 44 90 04 64 00 00 	movl   $0x64,0x4(%eax,%edx,4)
 8a39b54:	00 
 8a39b55:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8a39b58:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39b5b:	81 c2 34 01 00 00    	add    $0x134,%edx
 8a39b61:	c7 44 90 0c 00 00 00 	movl   $0x0,0xc(%eax,%edx,4)
 8a39b68:	00 
 8a39b69:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8a39b6c:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39b6f:	81 c2 38 01 00 00    	add    $0x138,%edx
 8a39b75:	c7 44 90 04 00 00 00 	movl   $0x0,0x4(%eax,%edx,4)
 8a39b7c:	00 
 8a39b7d:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8a39b80:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39b83:	81 c2 38 01 00 00    	add    $0x138,%edx
 8a39b89:	c7 44 90 0c 00 00 00 	movl   $0x0,0xc(%eax,%edx,4)
 8a39b90:	00 
 8a39b91:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8a39b94:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39b97:	81 c2 9e 00 00 00    	add    $0x9e,%edx
 8a39b9d:	c7 44 d0 04 00 00 00 	movl   $0x0,0x4(%eax,%edx,8)
 8a39ba4:	00 
 8a39ba5:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8a39ba8:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39bab:	c7 84 d0 f8 04 00 00 	movl   $0x0,0x4f8(%eax,%edx,8)
 8a39bb2:	00 00 00 00 
 8a39bb6:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8a39bbd:	eb 20                	jmp    8a39bdf <_ZN15STMonsterScript5ClearEv+0x335>
 8a39bbf:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 8a39bc2:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8a39bc5:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39bc8:	01 c9                	add    %ecx,%ecx
 8a39bca:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8a39bcd:	81 c2 40 01 00 00    	add    $0x140,%edx
 8a39bd3:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 8a39bda:	00 
 8a39bdb:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8a39bdf:	83 7d e4 03          	cmpl   $0x3,-0x1c(%ebp)
 8a39be3:	0f 9e c0             	setle  %al
 8a39be6:	84 c0                	test   %al,%al
 8a39be8:	75 d5                	jne    8a39bbf <_ZN15STMonsterScript5ClearEv+0x315>
 8a39bea:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8a39bed:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39bf0:	81 c2 48 01 00 00    	add    $0x148,%edx
 8a39bf6:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 8a39bfd:	00 
 8a39bfe:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8a39c01:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39c04:	81 c2 f8 00 00 00    	add    $0xf8,%edx
 8a39c0a:	c7 44 90 0c 00 00 00 	movl   $0x0,0xc(%eax,%edx,4)
 8a39c11:	00 
 8a39c12:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8a39c16:	83 7d e0 01          	cmpl   $0x1,-0x20(%ebp)
 8a39c1a:	0f 9e c0             	setle  %al
 8a39c1d:	84 c0                	test   %al,%al
 8a39c1f:	0f 85 21 fe ff ff    	jne    8a39a46 <_ZN15STMonsterScript5ClearEv+0x19c>
 8a39c25:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39c28:	c7 80 04 05 00 00 c8 	movl   $0xc8,0x504(%eax)
 8a39c2f:	00 00 00 
 8a39c32:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39c35:	05 30 05 00 00       	add    $0x530,%eax
 8a39c3a:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a39c41:	08 
 8a39c42:	89 04 24             	mov    %eax,(%esp)
 8a39c45:	e8 d6 ea cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a39c4a:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39c4d:	05 34 05 00 00       	add    $0x534,%eax
 8a39c52:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a39c59:	08 
 8a39c5a:	89 04 24             	mov    %eax,(%esp)
 8a39c5d:	e8 be ea cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a39c62:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39c65:	c7 80 38 05 00 00 64 	movl   $0x64,0x538(%eax)
 8a39c6c:	00 00 00 
 8a39c6f:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39c72:	c7 80 3c 05 00 00 c8 	movl   $0xc8,0x53c(%eax)
 8a39c79:	00 00 00 
 8a39c7c:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39c7f:	ba 00 00 80 bf       	mov    $0xbf800000,%edx
 8a39c84:	89 90 40 05 00 00    	mov    %edx,0x540(%eax)
 8a39c8a:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39c8d:	ba 00 00 80 bf       	mov    $0xbf800000,%edx
 8a39c92:	89 90 44 05 00 00    	mov    %edx,0x544(%eax)
 8a39c98:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39c9b:	c6 80 48 05 00 00 00 	movb   $0x0,0x548(%eax)
 8a39ca2:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39ca5:	ba 00 00 a0 41       	mov    $0x41a00000,%edx
 8a39caa:	89 90 4c 05 00 00    	mov    %edx,0x54c(%eax)
 8a39cb0:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39cb3:	ba 00 00 96 c3       	mov    $0xc3960000,%edx
 8a39cb8:	89 90 50 05 00 00    	mov    %edx,0x550(%eax)
 8a39cbe:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39cc1:	05 54 05 00 00       	add    $0x554,%eax
 8a39cc6:	89 04 24             	mov    %eax,(%esp)
 8a39cc9:	e8 a0 ce 65 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 8a39cce:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39cd1:	05 60 05 00 00       	add    $0x560,%eax
 8a39cd6:	89 04 24             	mov    %eax,(%esp)
 8a39cd9:	e8 90 ce 65 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 8a39cde:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39ce1:	c6 80 6c 05 00 00 00 	movb   $0x0,0x56c(%eax)
 8a39ce8:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39ceb:	c7 80 74 05 00 00 e8 	movl   $0x3e8,0x574(%eax)
 8a39cf2:	03 00 00 
 8a39cf5:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39cf8:	c6 80 80 05 00 00 00 	movb   $0x0,0x580(%eax)
 8a39cff:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39d02:	c6 80 81 05 00 00 00 	movb   $0x0,0x581(%eax)
 8a39d09:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39d0c:	c7 80 84 05 00 00 00 	movl   $0x0,0x584(%eax)
 8a39d13:	00 00 00 
 8a39d16:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39d19:	c7 80 88 05 00 00 00 	movl   $0x0,0x588(%eax)
 8a39d20:	00 00 00 
 8a39d23:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39d26:	c7 80 8c 05 00 00 00 	movl   $0x0,0x58c(%eax)
 8a39d2d:	00 00 00 
 8a39d30:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39d33:	c6 80 90 05 00 00 00 	movb   $0x0,0x590(%eax)
 8a39d3a:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39d3d:	c6 80 91 05 00 00 00 	movb   $0x0,0x591(%eax)
 8a39d44:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39d47:	c6 80 92 05 00 00 00 	movb   $0x0,0x592(%eax)
 8a39d4e:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39d51:	c7 80 94 05 00 00 00 	movl   $0x0,0x594(%eax)
 8a39d58:	00 00 00 
 8a39d5b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39d5e:	c7 80 98 05 00 00 00 	movl   $0x0,0x598(%eax)
 8a39d65:	00 00 00 
 8a39d68:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39d6b:	c7 80 9c 05 00 00 00 	movl   $0x0,0x59c(%eax)
 8a39d72:	00 00 00 
 8a39d75:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39d78:	c7 80 a0 05 00 00 00 	movl   $0x0,0x5a0(%eax)
 8a39d7f:	00 00 00 
 8a39d82:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39d85:	c6 80 a4 05 00 00 00 	movb   $0x0,0x5a4(%eax)
 8a39d8c:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39d8f:	c7 80 78 05 00 00 32 	movl   $0x32,0x578(%eax)
 8a39d96:	00 00 00 
 8a39d99:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39d9c:	c7 80 7c 05 00 00 e8 	movl   $0x3e8,0x57c(%eax)
 8a39da3:	03 00 00 
 8a39da6:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39da9:	c6 80 a5 05 00 00 00 	movb   $0x0,0x5a5(%eax)
 8a39db0:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39db3:	c7 80 a8 05 00 00 00 	movl   $0x0,0x5a8(%eax)
 8a39dba:	00 00 00 
 8a39dbd:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39dc0:	05 ac 05 00 00       	add    $0x5ac,%eax
 8a39dc5:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a39dcc:	08 
 8a39dcd:	89 04 24             	mov    %eax,(%esp)
 8a39dd0:	e8 4b e9 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a39dd5:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39dd8:	c7 80 b0 05 00 00 00 	movl   $0x0,0x5b0(%eax)
 8a39ddf:	00 00 00 
 8a39de2:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39de5:	05 b4 05 00 00       	add    $0x5b4,%eax
 8a39dea:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a39df1:	08 
 8a39df2:	89 04 24             	mov    %eax,(%esp)
 8a39df5:	e8 26 e9 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a39dfa:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39dfd:	05 b8 05 00 00       	add    $0x5b8,%eax
 8a39e02:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a39e09:	08 
 8a39e0a:	89 04 24             	mov    %eax,(%esp)
 8a39e0d:	e8 0e e9 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a39e12:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39e15:	05 c8 05 00 00       	add    $0x5c8,%eax
 8a39e1a:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a39e21:	08 
 8a39e22:	89 04 24             	mov    %eax,(%esp)
 8a39e25:	e8 f6 e8 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a39e2a:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8a39e31:	eb 25                	jmp    8a39e58 <_ZN15STMonsterScript5ClearEv+0x5ae>
 8a39e33:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8a39e36:	05 70 01 00 00       	add    $0x170,%eax
 8a39e3b:	c1 e0 02             	shl    $0x2,%eax
 8a39e3e:	03 45 08             	add    0x8(%ebp),%eax
 8a39e41:	83 c0 0c             	add    $0xc,%eax
 8a39e44:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a39e4b:	08 
 8a39e4c:	89 04 24             	mov    %eax,(%esp)
 8a39e4f:	e8 cc e8 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a39e54:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8a39e58:	83 7d e0 01          	cmpl   $0x1,-0x20(%ebp)
 8a39e5c:	0f 9e c0             	setle  %al
 8a39e5f:	84 c0                	test   %al,%al
 8a39e61:	75 d0                	jne    8a39e33 <_ZN15STMonsterScript5ClearEv+0x589>
 8a39e63:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39e66:	05 d4 05 00 00       	add    $0x5d4,%eax
 8a39e6b:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a39e72:	08 
 8a39e73:	89 04 24             	mov    %eax,(%esp)
 8a39e76:	e8 a5 e8 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a39e7b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39e7e:	05 d8 05 00 00       	add    $0x5d8,%eax
 8a39e83:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a39e8a:	08 
 8a39e8b:	89 04 24             	mov    %eax,(%esp)
 8a39e8e:	e8 8d e8 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a39e93:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39e96:	05 dc 05 00 00       	add    $0x5dc,%eax
 8a39e9b:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a39ea2:	08 
 8a39ea3:	89 04 24             	mov    %eax,(%esp)
 8a39ea6:	e8 75 e8 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a39eab:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39eae:	05 e0 05 00 00       	add    $0x5e0,%eax
 8a39eb3:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a39eba:	08 
 8a39ebb:	89 04 24             	mov    %eax,(%esp)
 8a39ebe:	e8 5d e8 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a39ec3:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39ec6:	05 e4 05 00 00       	add    $0x5e4,%eax
 8a39ecb:	89 04 24             	mov    %eax,(%esp)
 8a39ece:	e8 f5 77 90 ff       	call   83416c8 <_ZNSt6vectorISsSaISsEE5clearEv>
 8a39ed3:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39ed6:	05 f0 05 00 00       	add    $0x5f0,%eax
 8a39edb:	89 04 24             	mov    %eax,(%esp)
 8a39ede:	e8 e5 77 90 ff       	call   83416c8 <_ZNSt6vectorISsSaISsEE5clearEv>
 8a39ee3:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39ee6:	05 b4 06 00 00       	add    $0x6b4,%eax
 8a39eeb:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a39ef2:	08 
 8a39ef3:	89 04 24             	mov    %eax,(%esp)
 8a39ef6:	e8 25 e8 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a39efb:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39efe:	05 b8 06 00 00       	add    $0x6b8,%eax
 8a39f03:	89 04 24             	mov    %eax,(%esp)
 8a39f06:	e8 bd 77 90 ff       	call   83416c8 <_ZNSt6vectorISsSaISsEE5clearEv>
 8a39f0b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39f0e:	05 c4 06 00 00       	add    $0x6c4,%eax
 8a39f13:	89 04 24             	mov    %eax,(%esp)
 8a39f16:	e8 ad 77 90 ff       	call   83416c8 <_ZNSt6vectorISsSaISsEE5clearEv>
 8a39f1b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39f1e:	05 d4 06 00 00       	add    $0x6d4,%eax
 8a39f23:	89 04 24             	mov    %eax,(%esp)
 8a39f26:	e8 43 cc 65 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 8a39f2b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39f2e:	c7 80 e0 06 00 00 ff 	movl   $0xffffffff,0x6e0(%eax)
 8a39f35:	ff ff ff 
 8a39f38:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39f3b:	c6 80 e4 06 00 00 00 	movb   $0x0,0x6e4(%eax)
 8a39f42:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39f45:	05 e8 06 00 00       	add    $0x6e8,%eax
 8a39f4a:	89 04 24             	mov    %eax,(%esp)
 8a39f4d:	e8 ae 53 00 00       	call   8a3f300 <_ZNSt6vectorI14STAttackMethodSaIS0_EE5clearEv>
 8a39f52:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39f55:	05 fc 05 00 00       	add    $0x5fc,%eax
 8a39f5a:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a39f61:	08 
 8a39f62:	89 04 24             	mov    %eax,(%esp)
 8a39f65:	e8 b6 e7 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a39f6a:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39f6d:	05 00 06 00 00       	add    $0x600,%eax
 8a39f72:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a39f79:	08 
 8a39f7a:	89 04 24             	mov    %eax,(%esp)
 8a39f7d:	e8 9e e7 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a39f82:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39f85:	05 04 06 00 00       	add    $0x604,%eax
 8a39f8a:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a39f91:	08 
 8a39f92:	89 04 24             	mov    %eax,(%esp)
 8a39f95:	e8 86 e7 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a39f9a:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39f9d:	05 08 06 00 00       	add    $0x608,%eax
 8a39fa2:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a39fa9:	08 
 8a39faa:	89 04 24             	mov    %eax,(%esp)
 8a39fad:	e8 6e e7 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a39fb2:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39fb5:	05 0c 06 00 00       	add    $0x60c,%eax
 8a39fba:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a39fc1:	08 
 8a39fc2:	89 04 24             	mov    %eax,(%esp)
 8a39fc5:	e8 56 e7 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a39fca:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39fcd:	05 10 06 00 00       	add    $0x610,%eax
 8a39fd2:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a39fd9:	08 
 8a39fda:	89 04 24             	mov    %eax,(%esp)
 8a39fdd:	e8 3e e7 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a39fe2:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8a39fe9:	eb 25                	jmp    8a3a010 <_ZN15STMonsterScript5ClearEv+0x766>
 8a39feb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8a39fee:	05 84 01 00 00       	add    $0x184,%eax
 8a39ff3:	c1 e0 02             	shl    $0x2,%eax
 8a39ff6:	03 45 08             	add    0x8(%ebp),%eax
 8a39ff9:	83 c0 04             	add    $0x4,%eax
 8a39ffc:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a3a003:	08 
 8a3a004:	89 04 24             	mov    %eax,(%esp)
 8a3a007:	e8 14 e7 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a3a00c:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8a3a010:	83 7d e0 01          	cmpl   $0x1,-0x20(%ebp)
 8a3a014:	0f 9e c0             	setle  %al
 8a3a017:	84 c0                	test   %al,%al
 8a3a019:	75 d0                	jne    8a39feb <_ZN15STMonsterScript5ClearEv+0x741>
 8a3a01b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a01e:	05 1c 06 00 00       	add    $0x61c,%eax
 8a3a023:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a3a02a:	08 
 8a3a02b:	89 04 24             	mov    %eax,(%esp)
 8a3a02e:	e8 ed e6 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a3a033:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a036:	05 20 06 00 00       	add    $0x620,%eax
 8a3a03b:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a3a042:	08 
 8a3a043:	89 04 24             	mov    %eax,(%esp)
 8a3a046:	e8 d5 e6 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a3a04b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a04e:	05 24 06 00 00       	add    $0x624,%eax
 8a3a053:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a3a05a:	08 
 8a3a05b:	89 04 24             	mov    %eax,(%esp)
 8a3a05e:	e8 bd e6 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a3a063:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a066:	05 28 06 00 00       	add    $0x628,%eax
 8a3a06b:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a3a072:	08 
 8a3a073:	89 04 24             	mov    %eax,(%esp)
 8a3a076:	e8 a5 e6 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a3a07b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a07e:	05 2c 06 00 00       	add    $0x62c,%eax
 8a3a083:	89 04 24             	mov    %eax,(%esp)
 8a3a086:	e8 3d 76 90 ff       	call   83416c8 <_ZNSt6vectorISsSaISsEE5clearEv>
 8a3a08b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a08e:	05 38 06 00 00       	add    $0x638,%eax
 8a3a093:	89 04 24             	mov    %eax,(%esp)
 8a3a096:	e8 2d 76 90 ff       	call   83416c8 <_ZNSt6vectorISsSaISsEE5clearEv>
 8a3a09b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a09e:	05 44 06 00 00       	add    $0x644,%eax
 8a3a0a3:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a3a0aa:	08 
 8a3a0ab:	89 04 24             	mov    %eax,(%esp)
 8a3a0ae:	e8 6d e6 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a3a0b3:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a0b6:	05 48 06 00 00       	add    $0x648,%eax
 8a3a0bb:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a3a0c2:	08 
 8a3a0c3:	89 04 24             	mov    %eax,(%esp)
 8a3a0c6:	e8 55 e6 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a3a0cb:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a0ce:	05 88 06 00 00       	add    $0x688,%eax
 8a3a0d3:	89 04 24             	mov    %eax,(%esp)
 8a3a0d6:	e8 5d 87 94 ff       	call   8382838 <_ZNSt6vectorIS_IiSaIiEESaIS1_EE5clearEv>
 8a3a0db:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a0de:	05 94 06 00 00       	add    $0x694,%eax
 8a3a0e3:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a3a0ea:	08 
 8a3a0eb:	89 04 24             	mov    %eax,(%esp)
 8a3a0ee:	e8 2d e6 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a3a0f3:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a0f6:	05 98 06 00 00       	add    $0x698,%eax
 8a3a0fb:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a3a102:	08 
 8a3a103:	89 04 24             	mov    %eax,(%esp)
 8a3a106:	e8 15 e6 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a3a10b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a10e:	05 9c 06 00 00       	add    $0x69c,%eax
 8a3a113:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a3a11a:	08 
 8a3a11b:	89 04 24             	mov    %eax,(%esp)
 8a3a11e:	e8 fd e5 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a3a123:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a126:	05 a0 06 00 00       	add    $0x6a0,%eax
 8a3a12b:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a3a132:	08 
 8a3a133:	89 04 24             	mov    %eax,(%esp)
 8a3a136:	e8 e5 e5 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a3a13b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a13e:	05 a4 06 00 00       	add    $0x6a4,%eax
 8a3a143:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a3a14a:	08 
 8a3a14b:	89 04 24             	mov    %eax,(%esp)
 8a3a14e:	e8 cd e5 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a3a153:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a156:	05 a8 06 00 00       	add    $0x6a8,%eax
 8a3a15b:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a3a162:	08 
 8a3a163:	89 04 24             	mov    %eax,(%esp)
 8a3a166:	e8 b5 e5 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a3a16b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a16e:	05 ac 06 00 00       	add    $0x6ac,%eax
 8a3a173:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a3a17a:	08 
 8a3a17b:	89 04 24             	mov    %eax,(%esp)
 8a3a17e:	e8 9d e5 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a3a183:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a186:	05 b0 06 00 00       	add    $0x6b0,%eax
 8a3a18b:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a3a192:	08 
 8a3a193:	89 04 24             	mov    %eax,(%esp)
 8a3a196:	e8 85 e5 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a3a19b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a19e:	c7 80 f4 06 00 00 00 	movl   $0x0,0x6f4(%eax)
 8a3a1a5:	00 00 00 
 8a3a1a8:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a1ab:	c7 80 f8 06 00 00 00 	movl   $0x0,0x6f8(%eax)
 8a3a1b2:	00 00 00 
 8a3a1b5:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a1b8:	c7 80 fc 06 00 00 ff 	movl   $0xffffffff,0x6fc(%eax)
 8a3a1bf:	ff ff ff 
 8a3a1c2:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a1c5:	c7 80 00 07 00 00 00 	movl   $0x0,0x700(%eax)
 8a3a1cc:	00 00 00 
 8a3a1cf:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a1d2:	c7 80 04 07 00 00 00 	movl   $0x0,0x704(%eax)
 8a3a1d9:	00 00 00 
 8a3a1dc:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a1df:	05 08 07 00 00       	add    $0x708,%eax
 8a3a1e4:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a3a1eb:	08 
 8a3a1ec:	89 04 24             	mov    %eax,(%esp)
 8a3a1ef:	e8 2c e5 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a3a1f4:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8a3a1fb:	eb 23                	jmp    8a3a220 <_ZN15STMonsterScript5ClearEv+0x976>
 8a3a1fd:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8a3a200:	89 d0                	mov    %edx,%eax
 8a3a202:	01 c0                	add    %eax,%eax
 8a3a204:	01 d0                	add    %edx,%eax
 8a3a206:	c1 e0 02             	shl    $0x2,%eax
 8a3a209:	05 00 07 00 00       	add    $0x700,%eax
 8a3a20e:	03 45 08             	add    0x8(%ebp),%eax
 8a3a211:	83 c0 0c             	add    $0xc,%eax
 8a3a214:	89 04 24             	mov    %eax,(%esp)
 8a3a217:	e8 ac 74 90 ff       	call   83416c8 <_ZNSt6vectorISsSaISsEE5clearEv>
 8a3a21c:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8a3a220:	83 7d e8 6e          	cmpl   $0x6e,-0x18(%ebp)
 8a3a224:	0f 9e c0             	setle  %al
 8a3a227:	84 c0                	test   %al,%al
 8a3a229:	75 d2                	jne    8a3a1fd <_ZN15STMonsterScript5ClearEv+0x953>
 8a3a22b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a22e:	05 40 0c 00 00       	add    $0xc40,%eax
 8a3a233:	89 04 24             	mov    %eax,(%esp)
 8a3a236:	e8 33 c9 65 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 8a3a23b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a23e:	c7 80 4c 0c 00 00 00 	movl   $0x0,0xc4c(%eax)
 8a3a245:	00 00 00 
 8a3a248:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a24b:	c7 80 88 00 00 00 00 	movl   $0x0,0x88(%eax)
 8a3a252:	00 00 00 
 8a3a255:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a258:	05 8c 00 00 00       	add    $0x8c,%eax
 8a3a25d:	89 04 24             	mov    %eax,(%esp)
 8a3a260:	e8 dd 00 74 ff       	call   817a342 <_ZNSt6vectorISt4pairIiiESaIS1_EE5clearEv>
 8a3a265:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a268:	ba 00 00 00 00       	mov    $0x0,%edx
 8a3a26d:	89 90 54 0c 00 00    	mov    %edx,0xc54(%eax)
 8a3a273:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a276:	ba 00 00 00 00       	mov    $0x0,%edx
 8a3a27b:	89 90 58 0c 00 00    	mov    %edx,0xc58(%eax)
 8a3a281:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a284:	83 c0 58             	add    $0x58,%eax
 8a3a287:	89 04 24             	mov    %eax,(%esp)
 8a3a28a:	e8 b3 00 74 ff       	call   817a342 <_ZNSt6vectorISt4pairIiiESaIS1_EE5clearEv>
 8a3a28f:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8a3a296:	eb 18                	jmp    8a3a2b0 <_ZN15STMonsterScript5ClearEv+0xa06>
 8a3a298:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8a3a29b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a29e:	81 c2 14 03 00 00    	add    $0x314,%edx
 8a3a2a4:	c7 44 90 0c 00 00 00 	movl   $0x0,0xc(%eax,%edx,4)
 8a3a2ab:	00 
 8a3a2ac:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8a3a2b0:	83 7d ec 04          	cmpl   $0x4,-0x14(%ebp)
 8a3a2b4:	0f 9e c0             	setle  %al
 8a3a2b7:	84 c0                	test   %al,%al
 8a3a2b9:	75 dd                	jne    8a3a298 <_ZN15STMonsterScript5ClearEv+0x9ee>
 8a3a2bb:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a2be:	05 ac 03 00 00       	add    $0x3ac,%eax
 8a3a2c3:	89 04 24             	mov    %eax,(%esp)
 8a3a2c6:	e8 5f 25 e9 ff       	call   88cc82a <_ZNSt6vectorI26stMonsterIndependentDrop_tSaIS0_EE5clearEv>
 8a3a2cb:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a2ce:	c6 80 70 0c 00 00 00 	movb   $0x0,0xc70(%eax)
 8a3a2d5:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a2d8:	c6 80 71 0c 00 00 00 	movb   $0x0,0xc71(%eax)
 8a3a2df:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a2e2:	c7 80 74 0c 00 00 00 	movl   $0x0,0xc74(%eax)
 8a3a2e9:	00 00 00 
 8a3a2ec:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a2ef:	c7 80 78 0c 00 00 00 	movl   $0x0,0xc78(%eax)
 8a3a2f6:	00 00 00 
 8a3a2f9:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a2fc:	c7 80 7c 0c 00 00 00 	movl   $0x0,0xc7c(%eax)
 8a3a303:	00 00 00 
 8a3a306:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a309:	05 80 0c 00 00       	add    $0xc80,%eax
 8a3a30e:	89 04 24             	mov    %eax,(%esp)
 8a3a311:	e8 58 c8 65 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 8a3a316:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a319:	05 8c 0c 00 00       	add    $0xc8c,%eax
 8a3a31e:	89 04 24             	mov    %eax,(%esp)
 8a3a321:	e8 48 c8 65 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 8a3a326:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a329:	05 98 0c 00 00       	add    $0xc98,%eax
 8a3a32e:	89 04 24             	mov    %eax,(%esp)
 8a3a331:	e8 d6 1d e9 ff       	call   88cc10c <_ZN23stEnamyDropAvatarInfo_t5clearEv>
 8a3a336:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a339:	c6 80 d4 0c 00 00 00 	movb   $0x0,0xcd4(%eax)
 8a3a340:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a343:	c7 80 9c 1c 00 00 03 	movl   $0x3,0x1c9c(%eax)
 8a3a34a:	00 00 00 
 8a3a34d:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a350:	c7 80 a0 1c 00 00 00 	movl   $0x0,0x1ca0(%eax)
 8a3a357:	00 00 00 
 8a3a35a:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a35d:	ba 00 00 00 00       	mov    $0x0,%edx
 8a3a362:	89 90 a4 1c 00 00    	mov    %edx,0x1ca4(%eax)
 8a3a368:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8a3a36f:	eb 3d                	jmp    8a3a3ae <_ZN15STMonsterScript5ClearEv+0xb04>
 8a3a371:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8a3a378:	eb 25                	jmp    8a3a39f <_ZN15STMonsterScript5ClearEv+0xaf5>
 8a3a37a:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8a3a37d:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8a3a380:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8a3a383:	89 d0                	mov    %edx,%eax
 8a3a385:	c1 e0 02             	shl    $0x2,%eax
 8a3a388:	01 d0                	add    %edx,%eax
 8a3a38a:	01 d8                	add    %ebx,%eax
 8a3a38c:	8d 90 3c 03 00 00    	lea    0x33c(%eax),%edx
 8a3a392:	b8 00 00 80 bf       	mov    $0xbf800000,%eax
 8a3a397:	89 44 91 04          	mov    %eax,0x4(%ecx,%edx,4)
 8a3a39b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8a3a39f:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 8a3a3a3:	0f 9e c0             	setle  %al
 8a3a3a6:	84 c0                	test   %al,%al
 8a3a3a8:	75 d0                	jne    8a3a37a <_ZN15STMonsterScript5ClearEv+0xad0>
 8a3a3aa:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8a3a3ae:	81 7d f0 c7 00 00 00 	cmpl   $0xc7,-0x10(%ebp)
 8a3a3b5:	0f 9e c0             	setle  %al
 8a3a3b8:	84 c0                	test   %al,%al
 8a3a3ba:	75 b5                	jne    8a3a371 <_ZN15STMonsterScript5ClearEv+0xac7>
 8a3a3bc:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a3bf:	c7 80 94 1c 00 00 00 	movl   $0x0,0x1c94(%eax)
 8a3a3c6:	00 00 00 
 8a3a3c9:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a3cc:	c7 80 98 1c 00 00 00 	movl   $0x0,0x1c98(%eax)
 8a3a3d3:	00 00 00 
 8a3a3d6:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a3d9:	c6 80 a8 1c 00 00 00 	movb   $0x0,0x1ca8(%eax)
 8a3a3e0:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a3e3:	83 c0 70             	add    $0x70,%eax
 8a3a3e6:	89 04 24             	mov    %eax,(%esp)
 8a3a3e9:	e8 a2 6c 00 00       	call   8a41090 <_ZNSt6vectorI13CatchItemInfoSaIS0_EE5clearEv>
 8a3a3ee:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a3f1:	c7 80 ac 1c 00 00 ff 	movl   $0xffffffff,0x1cac(%eax)
 8a3a3f8:	ff ff ff 
 8a3a3fb:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a3fe:	c7 80 b0 1c 00 00 ff 	movl   $0xffffffff,0x1cb0(%eax)
 8a3a405:	ff ff ff 
 8a3a408:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a40b:	05 b4 1c 00 00       	add    $0x1cb4,%eax
 8a3a410:	89 04 24             	mov    %eax,(%esp)
 8a3a413:	e8 56 c7 65 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 8a3a418:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a41b:	05 4c 06 00 00       	add    $0x64c,%eax
 8a3a420:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a3a427:	08 
 8a3a428:	89 04 24             	mov    %eax,(%esp)
 8a3a42b:	e8 f0 e2 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a3a430:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a433:	05 50 06 00 00       	add    $0x650,%eax
 8a3a438:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a3a43f:	08 
 8a3a440:	89 04 24             	mov    %eax,(%esp)
 8a3a443:	e8 d8 e2 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a3a448:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a44b:	05 54 06 00 00       	add    $0x654,%eax
 8a3a450:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a3a457:	08 
 8a3a458:	89 04 24             	mov    %eax,(%esp)
 8a3a45b:	e8 c0 e2 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a3a460:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a463:	c7 80 58 06 00 00 ff 	movl   $0xffffffff,0x658(%eax)
 8a3a46a:	ff ff ff 
 8a3a46d:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a470:	c7 80 5c 06 00 00 00 	movl   $0x0,0x65c(%eax)
 8a3a477:	00 00 00 
 8a3a47a:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a47d:	c7 80 60 06 00 00 00 	movl   $0x0,0x660(%eax)
 8a3a484:	00 00 00 
 8a3a487:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a48a:	c7 80 64 06 00 00 00 	movl   $0x0,0x664(%eax)
 8a3a491:	00 00 00 
 8a3a494:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a497:	c7 80 68 06 00 00 00 	movl   $0x0,0x668(%eax)
 8a3a49e:	00 00 00 
 8a3a4a1:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a4a4:	ba 00 00 00 00       	mov    $0x0,%edx
 8a3a4a9:	89 90 6c 06 00 00    	mov    %edx,0x66c(%eax)
 8a3a4af:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a4b2:	ba 00 00 00 00       	mov    $0x0,%edx
 8a3a4b7:	89 90 70 06 00 00    	mov    %edx,0x670(%eax)
 8a3a4bd:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a4c0:	c6 80 74 06 00 00 00 	movb   $0x0,0x674(%eax)
 8a3a4c7:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a4ca:	c7 80 78 06 00 00 ff 	movl   $0xff,0x678(%eax)
 8a3a4d1:	00 00 00 
 8a3a4d4:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a4d7:	c7 80 7c 06 00 00 ff 	movl   $0xff,0x67c(%eax)
 8a3a4de:	00 00 00 
 8a3a4e1:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a4e4:	c6 80 80 06 00 00 00 	movb   $0x0,0x680(%eax)
 8a3a4eb:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a4ee:	c7 80 84 06 00 00 04 	movl   $0x4,0x684(%eax)
 8a3a4f5:	00 00 00 
 8a3a4f8:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a4fb:	c7 80 d8 0c 00 00 04 	movl   $0x4,0xcd8(%eax)
 8a3a502:	00 00 00 
 8a3a505:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a508:	05 20 01 00 00       	add    $0x120,%eax
 8a3a50d:	89 04 24             	mov    %eax,(%esp)
 8a3a510:	e8 59 c6 65 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 8a3a515:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a518:	05 2c 01 00 00       	add    $0x12c,%eax
 8a3a51d:	89 04 24             	mov    %eax,(%esp)
 8a3a520:	e8 03 58 00 00       	call   8a3fd28 <_ZNSt6vectorI20MonsterBaseParameterSaIS0_EE5clearEv>
 8a3a525:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a528:	c7 80 c0 1c 00 00 00 	movl   $0x0,0x1cc0(%eax)
 8a3a52f:	00 00 00 
 8a3a532:	83 c4 34             	add    $0x34,%esp
 8a3a535:	5b                   	pop    %ebx
 8a3a536:	5d                   	pop    %ebp
 8a3a537:	c3                   	ret

```

```c
// STMonsterScript::Clear @ 0x8a398aa

/* STMonsterScript::Clear() */

void __thiscall STMonsterScript::Clear(STMonsterScript *this)

{
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  this[0xc50] = (STMonsterScript)0x0;
  this[0x3a8] = (STMonsterScript)0x0;
  STAIInfoScript::clear((STAIInfoScript *)(this + 0x138));
  this[0x33c] = (STMonsterScript)0x1;
  this[0x368] = (STMonsterScript)0x1;
  *(undefined4 *)(this + 0x36c) = 0;
  *(undefined4 *)(this + 0x370) = 0;
  this[0x374] = (STMonsterScript)0x0;
  *(undefined4 *)(this + 0x378) = 0;
  *(undefined4 *)(this + 0x37c) = 0;
  *(undefined4 *)(this + 0x380) = 0;
  *(undefined4 *)this = 0;
  std::string::operator=((string *)(this + 4),"");
  std::string::operator=((string *)(this + 8),"");
  *(undefined4 *)(this + 0xc) = 0x28;
  *(undefined4 *)(this + 0x10) = 0x14;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 1;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x1c));
  for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
               (this + local_24 * 0xc + 0x28));
  }
  std::vector<STMonsterParameterCategory,std::allocator<STMonsterParameterCategory>>::clear
            ((vector<STMonsterParameterCategory,std::allocator<STMonsterParameterCategory>> *)
             (this + 0x7c));
  this[0x3b8] = (STMonsterScript)0x1;
  *(undefined4 *)(this + 0x3bc) = 0;
  *(undefined4 *)(this + 0x3c0) = 0;
  for (local_24 = 0; local_24 < 10; local_24 = local_24 + 1) {
    *(undefined4 *)(this + (local_24 + 0xf0) * 4 + 4) = 0;
  }
  for (local_24 = 0; local_24 < 2; local_24 = local_24 + 1) {
    for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
      *(undefined4 *)(this + (local_20 * 2 + local_24 + 0xfc) * 4 + 4) = 0;
    }
    for (local_20 = 0; local_20 < 0x11; local_20 = local_20 + 1) {
      *(undefined4 *)(this + (local_20 * 2 + local_24 + 0x104) * 4 + 4) = 0;
    }
    *(undefined4 *)(this + (local_24 + 0x124) * 4 + 0xc) = 0;
    *(undefined4 *)(this + (local_24 + 0x128) * 4 + 4) = 0;
    *(undefined4 *)(this + (local_24 + 0x128) * 4 + 0xc) = 0;
    *(undefined4 *)(this + (local_24 + 300) * 4 + 4) = 0;
    *(undefined4 *)(this + (local_24 + 300) * 4 + 0xc) = 0;
    *(undefined4 *)(this + (local_24 + 0x130) * 4 + 4) = 0;
    *(undefined4 *)(this + (local_24 + 0x130) * 4 + 0xc) = 0;
    *(undefined4 *)(this + (local_24 + 0x134) * 4 + 4) = 100;
    *(undefined4 *)(this + (local_24 + 0x134) * 4 + 0xc) = 0;
    *(undefined4 *)(this + (local_24 + 0x138) * 4 + 4) = 0;
    *(undefined4 *)(this + (local_24 + 0x138) * 4 + 0xc) = 0;
    *(undefined4 *)(this + (local_24 + 0x9e) * 8 + 4) = 0;
    *(undefined4 *)(this + local_24 * 8 + 0x4f8) = 0;
    for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
      *(undefined4 *)(this + (local_20 * 2 + local_24 + 0x140) * 4 + 8) = 0;
    }
    *(undefined4 *)(this + (local_24 + 0x148) * 4 + 8) = 0;
    *(undefined4 *)(this + (local_24 + 0xf8) * 4 + 0xc) = 0;
  }
  *(undefined4 *)(this + 0x504) = 200;
  std::string::operator=((string *)(this + 0x530),"");
  std::string::operator=((string *)(this + 0x534),"");
  *(undefined4 *)(this + 0x538) = 100;
  *(undefined4 *)(this + 0x53c) = 200;
  *(undefined4 *)(this + 0x540) = 0xbf800000;
  *(undefined4 *)(this + 0x544) = 0xbf800000;
  this[0x548] = (STMonsterScript)0x0;
  *(undefined4 *)(this + 0x54c) = 0x41a00000;
  *(undefined4 *)(this + 0x550) = 0xc3960000;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x554));
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x560));
  this[0x56c] = (STMonsterScript)0x0;
  *(undefined4 *)(this + 0x574) = 1000;
  this[0x580] = (STMonsterScript)0x0;
  this[0x581] = (STMonsterScript)0x0;
  *(undefined4 *)(this + 0x584) = 0;
  *(undefined4 *)(this + 0x588) = 0;
  *(undefined4 *)(this + 0x58c) = 0;
  this[0x590] = (STMonsterScript)0x0;
  this[0x591] = (STMonsterScript)0x0;
  this[0x592] = (STMonsterScript)0x0;
  *(undefined4 *)(this + 0x594) = 0;
  *(undefined4 *)(this + 0x598) = 0;
  *(undefined4 *)(this + 0x59c) = 0;
  *(undefined4 *)(this + 0x5a0) = 0;
  this[0x5a4] = (STMonsterScript)0x0;
  *(undefined4 *)(this + 0x578) = 0x32;
  *(undefined4 *)(this + 0x57c) = 1000;
  this[0x5a5] = (STMonsterScript)0x0;
  *(undefined4 *)(this + 0x5a8) = 0;
  std::string::operator=((string *)(this + 0x5ac),"");
  *(undefined4 *)(this + 0x5b0) = 0;
  std::string::operator=((string *)(this + 0x5b4),"");
  std::string::operator=((string *)(this + 0x5b8),"");
  std::string::operator=((string *)(this + 0x5c8),"");
  for (local_24 = 0; local_24 < 2; local_24 = local_24 + 1) {
    std::string::operator=((string *)(this + (local_24 + 0x170) * 4 + 0xc),"");
  }
  std::string::operator=((string *)(this + 0x5d4),"");
  std::string::operator=((string *)(this + 0x5d8),"");
  std::string::operator=((string *)(this + 0x5dc),"");
  std::string::operator=((string *)(this + 0x5e0),"");
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x5e4));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x5f0));
  std::string::operator=((string *)(this + 0x6b4),"");
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x6b8));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x6c4));
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x6d4));
  *(undefined4 *)(this + 0x6e0) = 0xffffffff;
  this[0x6e4] = (STMonsterScript)0x0;
  std::vector<STAttackMethod,std::allocator<STAttackMethod>>::clear
            ((vector<STAttackMethod,std::allocator<STAttackMethod>> *)(this + 0x6e8));
  std::string::operator=((string *)(this + 0x5fc),"");
  std::string::operator=((string *)(this + 0x600),"");
  std::string::operator=((string *)(this + 0x604),"");
  std::string::operator=((string *)(this + 0x608),"");
  std::string::operator=((string *)(this + 0x60c),"");
  std::string::operator=((string *)(this + 0x610),"");
  for (local_24 = 0; local_24 < 2; local_24 = local_24 + 1) {
    std::string::operator=((string *)(this + (local_24 + 0x184) * 4 + 4),"");
  }
  std::string::operator=((string *)(this + 0x61c),"");
  std::string::operator=((string *)(this + 0x620),"");
  std::string::operator=((string *)(this + 0x624),"");
  std::string::operator=((string *)(this + 0x628),"");
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x62c));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x638));
  std::string::operator=((string *)(this + 0x644),"");
  std::string::operator=((string *)(this + 0x648),"");
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::clear((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
           *)(this + 0x688));
  std::string::operator=((string *)(this + 0x694),"");
  std::string::operator=((string *)(this + 0x698),"");
  std::string::operator=((string *)(this + 0x69c),"");
  std::string::operator=((string *)(this + 0x6a0),"");
  std::string::operator=((string *)(this + 0x6a4),"");
  std::string::operator=((string *)(this + 0x6a8),"");
  std::string::operator=((string *)(this + 0x6ac),"");
  std::string::operator=((string *)(this + 0x6b0),"");
  *(undefined4 *)(this + 0x6f4) = 0;
  *(undefined4 *)(this + 0x6f8) = 0;
  *(undefined4 *)(this + 0x6fc) = 0xffffffff;
  *(undefined4 *)(this + 0x700) = 0;
  *(undefined4 *)(this + 0x704) = 0;
  std::string::operator=((string *)(this + 0x708),"");
  for (local_1c = 0; local_1c < 0x6f; local_1c = local_1c + 1) {
    std::vector<std::string,std::allocator<std::string>>::clear
              ((vector<std::string,std::allocator<std::string>> *)(this + local_1c * 0xc + 0x70c));
  }
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0xc40));
  *(undefined4 *)(this + 0xc4c) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x8c));
  *(undefined4 *)(this + 0xc54) = 0;
  *(undefined4 *)(this + 0xc58) = 0;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x58));
  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
    *(undefined4 *)(this + (local_18 + 0x314) * 4 + 0xc) = 0;
  }
  std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>::clear
            ((vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>> *)
             (this + 0x3ac));
  this[0xc70] = (STMonsterScript)0x0;
  this[0xc71] = (STMonsterScript)0x0;
  *(undefined4 *)(this + 0xc74) = 0;
  *(undefined4 *)(this + 0xc78) = 0;
  *(undefined4 *)(this + 0xc7c) = 0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0xc80));
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0xc8c));
  stEnamyDropAvatarInfo_t::clear((stEnamyDropAvatarInfo_t *)(this + 0xc98));
  this[0xcd4] = (STMonsterScript)0x0;
  *(undefined4 *)(this + 0x1c9c) = 3;
  *(undefined4 *)(this + 0x1ca0) = 0;
  *(undefined4 *)(this + 0x1ca4) = 0;
  for (local_14 = 0; local_14 < 200; local_14 = local_14 + 1) {
    for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
      *(undefined4 *)(this + (local_14 * 5 + local_10 + 0x33c) * 4 + 4) = 0xbf800000;
    }
  }
  *(undefined4 *)(this + 0x1c94) = 0;
  *(undefined4 *)(this + 0x1c98) = 0;
  this[0x1ca8] = (STMonsterScript)0x0;
  std::vector<CatchItemInfo,std::allocator<CatchItemInfo>>::clear
            ((vector<CatchItemInfo,std::allocator<CatchItemInfo>> *)(this + 0x70));
  *(undefined4 *)(this + 0x1cac) = 0xffffffff;
  *(undefined4 *)(this + 0x1cb0) = 0xffffffff;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x1cb4));
  std::string::operator=((string *)(this + 0x64c),"");
  std::string::operator=((string *)(this + 0x650),"");
  std::string::operator=((string *)(this + 0x654),"");
  *(undefined4 *)(this + 0x658) = 0xffffffff;
  *(undefined4 *)(this + 0x65c) = 0;
  *(undefined4 *)(this + 0x660) = 0;
  *(undefined4 *)(this + 0x664) = 0;
  *(undefined4 *)(this + 0x668) = 0;
  *(undefined4 *)(this + 0x66c) = 0;
  *(undefined4 *)(this + 0x670) = 0;
  this[0x674] = (STMonsterScript)0x0;
  *(undefined4 *)(this + 0x678) = 0xff;
  *(undefined4 *)(this + 0x67c) = 0xff;
  this[0x680] = (STMonsterScript)0x0;
  *(undefined4 *)(this + 0x684) = 4;
  *(undefined4 *)(this + 0xcd8) = 4;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x120));
  std::vector<MonsterBaseParameter,std::allocator<MonsterBaseParameter>>::clear
            ((vector<MonsterBaseParameter,std::allocator<MonsterBaseParameter>> *)(this + 300));
  *(undefined4 *)(this + 0x1cc0) = 0;
  return;
}

```

