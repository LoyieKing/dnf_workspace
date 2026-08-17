# DBSelectPcroomDailyReward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0815ca94 DBSelectPcroomDailyReward::dispatch  [0x0815ca94-0x815cf05] ===
 815ca94:	55                   	push   %ebp
 815ca95:	89 e5                	mov    %esp,%ebp
 815ca97:	56                   	push   %esi
 815ca98:	53                   	push   %ebx
 815ca99:	83 ec 70             	sub    $0x70,%esp
 815ca9c:	c6 45 eb 01          	movb   $0x1,-0x15(%ebp)
 815caa0:	8b 45 14             	mov    0x14(%ebp),%eax
 815caa3:	89 04 24             	mov    %eax,(%esp)
 815caa6:	e8 9f 21 00 00       	call   815ec4a <_ZN6Stream12GetOutBufferIN25DBSelectPcroomDailyReward3MSGEEEPT_v>
 815caab:	89 45 ec             	mov    %eax,-0x14(%ebp)
 815caae:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 815cab2:	75 2c                	jne    815cae0 <_ZN25DBSelectPcroomDailyReward8dispatchEiiP6Stream+0x4c>
 815cab4:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815cabb:	e8 40 8d 5c 00       	call   8725800 <__cxa_allocate_exception>
 815cac0:	89 c2                	mov    %eax,%edx
 815cac2:	c7 02 0d 78 b7 08    	movl   $0x8b7780d,(%edx)
 815cac8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815cacf:	00 
 815cad0:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815cad7:	09 
 815cad8:	89 04 24             	mov    %eax,(%esp)
 815cadb:	e8 70 81 5c 00       	call   8724c50 <__cxa_throw>
 815cae0:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 815cae7:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 815caee:	c6 45 af 00          	movb   $0x0,-0x51(%ebp)
 815caf2:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 815caf7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815cafe:	00 
 815caff:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 815cb06:	00 
 815cb07:	89 04 24             	mov    %eax,(%esp)
 815cb0a:	e8 2f 87 29 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 815cb0f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 815cb12:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 815cb16:	75 2c                	jne    815cb44 <_ZN25DBSelectPcroomDailyReward8dispatchEiiP6Stream+0xb0>
 815cb18:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815cb1f:	e8 dc 8c 5c 00       	call   8725800 <__cxa_allocate_exception>
 815cb24:	89 c2                	mov    %eax,%edx
 815cb26:	c7 02 03 72 b7 08    	movl   $0x8b77203,(%edx)
 815cb2c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815cb33:	00 
 815cb34:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815cb3b:	09 
 815cb3c:	89 04 24             	mov    %eax,(%esp)
 815cb3f:	e8 0c 81 5c 00       	call   8724c50 <__cxa_throw>
 815cb44:	e8 38 f6 f6 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 815cb49:	8b 98 7c 03 00 00    	mov    0x37c(%eax),%ebx
 815cb4f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815cb52:	8b 00                	mov    (%eax),%eax
 815cb54:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 815cb5b:	00 
 815cb5c:	89 04 24             	mov    %eax,(%esp)
 815cb5f:	e8 e7 c4 fa ff       	call   810904b <_Z14NumberToStringji>
 815cb64:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 815cb68:	89 44 24 08          	mov    %eax,0x8(%esp)
 815cb6c:	c7 44 24 04 30 7b b7 	movl   $0x8b77b30,0x4(%esp)
 815cb73:	08 
 815cb74:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815cb77:	89 04 24             	mov    %eax,(%esp)
 815cb7a:	e8 41 76 29 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 815cb7f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 815cb86:	00 
 815cb87:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815cb8a:	89 04 24             	mov    %eax,(%esp)
 815cb8d:	e8 94 77 29 00       	call   83f4326 <_ZN5MySQL4execEb>
 815cb92:	83 f0 01             	xor    $0x1,%eax
 815cb95:	84 c0                	test   %al,%al
 815cb97:	74 2c                	je     815cbc5 <_ZN25DBSelectPcroomDailyReward8dispatchEiiP6Stream+0x131>
 815cb99:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815cba0:	e8 5b 8c 5c 00       	call   8725800 <__cxa_allocate_exception>
 815cba5:	89 c2                	mov    %eax,%edx
 815cba7:	c7 02 f9 74 b7 08    	movl   $0x8b774f9,(%edx)
 815cbad:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815cbb4:	00 
 815cbb5:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815cbbc:	09 
 815cbbd:	89 04 24             	mov    %eax,(%esp)
 815cbc0:	e8 8b 80 5c 00       	call   8724c50 <__cxa_throw>
 815cbc5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815cbc8:	89 04 24             	mov    %eax,(%esp)
 815cbcb:	e8 9c 57 f8 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 815cbd0:	85 c0                	test   %eax,%eax
 815cbd2:	0f 94 c0             	sete   %al
 815cbd5:	84 c0                	test   %al,%al
 815cbd7:	74 70                	je     815cc49 <_ZN25DBSelectPcroomDailyReward8dispatchEiiP6Stream+0x1b5>
 815cbd9:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 815cbdc:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 815cbe3:	00 
 815cbe4:	89 44 24 04          	mov    %eax,0x4(%esp)
 815cbe8:	8b 45 10             	mov    0x10(%ebp),%eax
 815cbeb:	89 04 24             	mov    %eax,(%esp)
 815cbee:	e8 a9 4b 00 00       	call   816179c <_ZN28InterSelectPcroomDailyReward11makeRequestEijc>
 815cbf3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815cbf6:	8b 00                	mov    (%eax),%eax
 815cbf8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 815cbff:	00 
 815cc00:	89 04 24             	mov    %eax,(%esp)
 815cc03:	e8 43 c4 fa ff       	call   810904b <_Z14NumberToStringji>
 815cc08:	89 c3                	mov    %eax,%ebx
 815cc0a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 815cc11:	00 
 815cc12:	c7 44 24 08 00 03 00 	movl   $0x300,0x8(%esp)
 815cc19:	00 
 815cc1a:	c7 44 24 04 40 8e b7 	movl   $0x8b78e40,0x4(%esp)
 815cc21:	08 
 815cc22:	8d 45 b8             	lea    -0x48(%ebp),%eax
 815cc25:	89 04 24             	mov    %eax,(%esp)
 815cc28:	e8 eb 2a 3f 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 815cc2d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 815cc31:	c7 44 24 04 98 7b b7 	movl   $0x8b77b98,0x4(%esp)
 815cc38:	08 
 815cc39:	8d 45 b8             	lea    -0x48(%ebp),%eax
 815cc3c:	89 04 24             	mov    %eax,(%esp)
 815cc3f:	e8 44 2b 3f 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 815cc44:	e9 ae 02 00 00       	jmp    815cef7 <_ZN25DBSelectPcroomDailyReward8dispatchEiiP6Stream+0x463>
 815cc49:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815cc4c:	89 04 24             	mov    %eax,(%esp)
 815cc4f:	e8 68 78 29 00       	call   83f44bc <_ZN5MySQL5fetchEv>
 815cc54:	83 f0 01             	xor    $0x1,%eax
 815cc57:	84 c0                	test   %al,%al
 815cc59:	74 2c                	je     815cc87 <_ZN25DBSelectPcroomDailyReward8dispatchEiiP6Stream+0x1f3>
 815cc5b:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815cc62:	e8 99 8b 5c 00       	call   8725800 <__cxa_allocate_exception>
 815cc67:	89 c2                	mov    %eax,%edx
 815cc69:	c7 02 45 75 b7 08    	movl   $0x8b77545,(%edx)
 815cc6f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815cc76:	00 
 815cc77:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815cc7e:	09 
 815cc7f:	89 04 24             	mov    %eax,(%esp)
 815cc82:	e8 c9 7f 5c 00       	call   8724c50 <__cxa_throw>
 815cc87:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 815cc8a:	89 44 24 08          	mov    %eax,0x8(%esp)
 815cc8e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 815cc95:	00 
 815cc96:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815cc99:	89 04 24             	mov    %eax,(%esp)
 815cc9c:	e8 0d 56 f8 ff       	call   80e22ae <_ZN5MySQL7get_intEiRj>
 815cca1:	83 f0 01             	xor    $0x1,%eax
 815cca4:	84 c0                	test   %al,%al
 815cca6:	74 2c                	je     815ccd4 <_ZN25DBSelectPcroomDailyReward8dispatchEiiP6Stream+0x240>
 815cca8:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815ccaf:	e8 4c 8b 5c 00       	call   8725800 <__cxa_allocate_exception>
 815ccb4:	89 c2                	mov    %eax,%edx
 815ccb6:	c7 02 4e 77 b7 08    	movl   $0x8b7774e,(%edx)
 815ccbc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815ccc3:	00 
 815ccc4:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815cccb:	09 
 815cccc:	89 04 24             	mov    %eax,(%esp)
 815cccf:	e8 7c 7f 5c 00       	call   8724c50 <__cxa_throw>
 815ccd4:	8d 45 af             	lea    -0x51(%ebp),%eax
 815ccd7:	89 44 24 08          	mov    %eax,0x8(%esp)
 815ccdb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 815cce2:	00 
 815cce3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815cce6:	89 04 24             	mov    %eax,(%esp)
 815cce9:	e8 66 11 fa ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 815ccee:	83 f0 01             	xor    $0x1,%eax
 815ccf1:	84 c0                	test   %al,%al
 815ccf3:	74 2c                	je     815cd21 <_ZN25DBSelectPcroomDailyReward8dispatchEiiP6Stream+0x28d>
 815ccf5:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815ccfc:	e8 ff 8a 5c 00       	call   8725800 <__cxa_allocate_exception>
 815cd01:	89 c2                	mov    %eax,%edx
 815cd03:	c7 02 58 77 b7 08    	movl   $0x8b77758,(%edx)
 815cd09:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815cd10:	00 
 815cd11:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815cd18:	09 
 815cd19:	89 04 24             	mov    %eax,(%esp)
 815cd1c:	e8 2f 7f 5c 00       	call   8724c50 <__cxa_throw>
 815cd21:	8d 45 b0             	lea    -0x50(%ebp),%eax
 815cd24:	89 44 24 08          	mov    %eax,0x8(%esp)
 815cd28:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 815cd2f:	00 
 815cd30:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815cd33:	89 04 24             	mov    %eax,(%esp)
 815cd36:	e8 73 55 f8 ff       	call   80e22ae <_ZN5MySQL7get_intEiRj>
 815cd3b:	83 f0 01             	xor    $0x1,%eax
 815cd3e:	84 c0                	test   %al,%al
 815cd40:	74 2c                	je     815cd6e <_ZN25DBSelectPcroomDailyReward8dispatchEiiP6Stream+0x2da>
 815cd42:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815cd49:	e8 b2 8a 5c 00       	call   8725800 <__cxa_allocate_exception>
 815cd4e:	89 c2                	mov    %eax,%edx
 815cd50:	c7 02 62 77 b7 08    	movl   $0x8b77762,(%edx)
 815cd56:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815cd5d:	00 
 815cd5e:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815cd65:	09 
 815cd66:	89 04 24             	mov    %eax,(%esp)
 815cd69:	e8 e2 7e 5c 00       	call   8724c50 <__cxa_throw>
 815cd6e:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 815cd75:	e8 24 ef f6 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 815cd7a:	89 c3                	mov    %eax,%ebx
 815cd7c:	8b 45 b0             	mov    -0x50(%ebp),%eax
 815cd7f:	89 c6                	mov    %eax,%esi
 815cd81:	e8 fb f3 f6 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 815cd86:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 815cd8c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 815cd90:	89 74 24 04          	mov    %esi,0x4(%esp)
 815cd94:	89 04 24             	mov    %eax,(%esp)
 815cd97:	e8 0c f3 30 00       	call   846c0a8 <_Z22CheckDailyScheduleTimeill>
 815cd9c:	84 c0                	test   %al,%al
 815cd9e:	74 70                	je     815ce10 <_ZN25DBSelectPcroomDailyReward8dispatchEiiP6Stream+0x37c>
 815cda0:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 815cda3:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 815cdaa:	00 
 815cdab:	89 44 24 04          	mov    %eax,0x4(%esp)
 815cdaf:	8b 45 10             	mov    0x10(%ebp),%eax
 815cdb2:	89 04 24             	mov    %eax,(%esp)
 815cdb5:	e8 e2 49 00 00       	call   816179c <_ZN28InterSelectPcroomDailyReward11makeRequestEijc>
 815cdba:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815cdbd:	8b 00                	mov    (%eax),%eax
 815cdbf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 815cdc6:	00 
 815cdc7:	89 04 24             	mov    %eax,(%esp)
 815cdca:	e8 7c c2 fa ff       	call   810904b <_Z14NumberToStringji>
 815cdcf:	89 c3                	mov    %eax,%ebx
 815cdd1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 815cdd8:	00 
 815cdd9:	c7 44 24 08 11 03 00 	movl   $0x311,0x8(%esp)
 815cde0:	00 
 815cde1:	c7 44 24 04 40 8e b7 	movl   $0x8b78e40,0x4(%esp)
 815cde8:	08 
 815cde9:	8d 45 c8             	lea    -0x38(%ebp),%eax
 815cdec:	89 04 24             	mov    %eax,(%esp)
 815cdef:	e8 24 29 3f 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 815cdf4:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 815cdf8:	c7 44 24 04 d8 7b b7 	movl   $0x8b77bd8,0x4(%esp)
 815cdff:	08 
 815ce00:	8d 45 c8             	lea    -0x38(%ebp),%eax
 815ce03:	89 04 24             	mov    %eax,(%esp)
 815ce06:	e8 7d 29 3f 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 815ce0b:	e9 e7 00 00 00       	jmp    815cef7 <_ZN25DBSelectPcroomDailyReward8dispatchEiiP6Stream+0x463>
 815ce10:	0f b6 45 af          	movzbl -0x51(%ebp),%eax
 815ce14:	0f be d0             	movsbl %al,%edx
 815ce17:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 815ce1a:	89 54 24 08          	mov    %edx,0x8(%esp)
 815ce1e:	89 44 24 04          	mov    %eax,0x4(%esp)
 815ce22:	8b 45 10             	mov    0x10(%ebp),%eax
 815ce25:	89 04 24             	mov    %eax,(%esp)
 815ce28:	e8 6f 49 00 00       	call   816179c <_ZN28InterSelectPcroomDailyReward11makeRequestEijc>
 815ce2d:	0f b6 45 af          	movzbl -0x51(%ebp),%eax
 815ce31:	0f be f0             	movsbl %al,%esi
 815ce34:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815ce37:	8b 00                	mov    (%eax),%eax
 815ce39:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 815ce40:	00 
 815ce41:	89 04 24             	mov    %eax,(%esp)
 815ce44:	e8 02 c2 fa ff       	call   810904b <_Z14NumberToStringji>
 815ce49:	89 c3                	mov    %eax,%ebx
 815ce4b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 815ce52:	00 
 815ce53:	c7 44 24 08 16 03 00 	movl   $0x316,0x8(%esp)
 815ce5a:	00 
 815ce5b:	c7 44 24 04 40 8e b7 	movl   $0x8b78e40,0x4(%esp)
 815ce62:	08 
 815ce63:	8d 45 d8             	lea    -0x28(%ebp),%eax
 815ce66:	89 04 24             	mov    %eax,(%esp)
 815ce69:	e8 aa 28 3f 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 815ce6e:	89 74 24 0c          	mov    %esi,0xc(%esp)
 815ce72:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 815ce76:	c7 44 24 04 14 7c b7 	movl   $0x8b77c14,0x4(%esp)
 815ce7d:	08 
 815ce7e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 815ce81:	89 04 24             	mov    %eax,(%esp)
 815ce84:	e8 ff 28 3f 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 815ce89:	eb 6c                	jmp    815cef7 <_ZN25DBSelectPcroomDailyReward8dispatchEiiP6Stream+0x463>
 815ce8b:	83 fa 01             	cmp    $0x1,%edx
 815ce8e:	74 08                	je     815ce98 <_ZN25DBSelectPcroomDailyReward8dispatchEiiP6Stream+0x404>
 815ce90:	89 04 24             	mov    %eax,(%esp)
 815ce93:	e8 b8 68 98 00       	call   8ae3750 <_Unwind_Resume>
 815ce98:	89 04 24             	mov    %eax,(%esp)
 815ce9b:	e8 40 8e 5c 00       	call   8725ce0 <__cxa_begin_catch>
 815cea0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815cea3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815cea6:	89 44 24 14          	mov    %eax,0x14(%esp)
 815ceaa:	c7 44 24 10 64 7c b7 	movl   $0x8b77c64,0x10(%esp)
 815ceb1:	08 
 815ceb2:	c7 44 24 0c 1c 03 00 	movl   $0x31c,0xc(%esp)
 815ceb9:	00 
 815ceba:	c7 44 24 08 40 8e b7 	movl   $0x8b78e40,0x8(%esp)
 815cec1:	08 
 815cec2:	c7 44 24 04 d4 72 b7 	movl   $0x8b772d4,0x4(%esp)
 815cec9:	08 
 815ceca:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 815ced1:	e8 34 6d 97 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 815ced6:	bb 00 00 00 00       	mov    $0x0,%ebx
 815cedb:	e8 50 8d 5c 00       	call   8725c30 <__cxa_end_catch>
 815cee0:	eb 1a                	jmp    815cefc <_ZN25DBSelectPcroomDailyReward8dispatchEiiP6Stream+0x468>
 815cee2:	89 d3                	mov    %edx,%ebx
 815cee4:	89 c6                	mov    %eax,%esi
 815cee6:	e8 45 8d 5c 00       	call   8725c30 <__cxa_end_catch>
 815ceeb:	89 f0                	mov    %esi,%eax
 815ceed:	89 da                	mov    %ebx,%edx
 815ceef:	89 04 24             	mov    %eax,(%esp)
 815cef2:	e8 59 68 98 00       	call   8ae3750 <_Unwind_Resume>
 815cef7:	bb 01 00 00 00       	mov    $0x1,%ebx
 815cefc:	89 d8                	mov    %ebx,%eax
 815cefe:	83 c4 70             	add    $0x70,%esp
 815cf01:	5b                   	pop    %ebx
 815cf02:	5e                   	pop    %esi
 815cf03:	5d                   	pop    %ebp
 815cf04:	c3                   	ret
 815cf05:	90                   	nop

```

```c
// DBSelectPcroomDailyReward::dispatch @ 0x815ca94

/* DBSelectPcroomDailyReward::dispatch(int, int, Stream*) */

undefined4 __thiscall
DBSelectPcroomDailyReward::dispatch
          (DBSelectPcroomDailyReward *this,int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  char local_55;
  uint local_54;
  uint local_50;
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  cMyTrace local_2c [19];
  undefined1 local_19;
  MSG *local_18;
  MySQL *local_14;
  
  local_19 = 1;
                    /* try { // try from 0815caa6 to 0815ce88 has its CatchHandler @ 0815ce8b */
  local_18 = Stream::GetOutBuffer<DBSelectPcroomDailyReward::MSG>(param_3);
  if (local_18 == (MSG *)0x0) {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = "msg is null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&char_const*::typeinfo,0);
  }
  local_50 = 0;
  local_54 = 0;
  local_55 = '\0';
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  if (local_14 == (MySQL *)0x0) {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = "handle null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&char_const*::typeinfo,0);
  }
  iVar4 = G_CEnvironment();
  uVar6 = *(undefined4 *)(iVar4 + 0x37c);
  uVar5 = NumberToString(*(uint *)local_18,0);
  MySQL::set_query(local_14,
                   "seLect m_id, remain_reward_count, unix_timestamp(occ_date) FROM pcroom_daily_reward_tw WHERE m_id=%s"
                   ,uVar5,uVar6);
  cVar2 = MySQL::exec(local_14,true);
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = "select_exec";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&char_const*::typeinfo,0);
  }
  iVar4 = MySQL::get_n_rows(local_14);
  if (iVar4 == 0) {
    InterSelectPcroomDailyReward::makeRequest(param_2,local_50,'\x04');
    uVar6 = NumberToString(*(uint *)local_18,0);
    cMyTrace::cMyTrace(local_4c,
                       "virtual bool DBSelectPcroomDailyReward::dispatch(int, int, Stream*)",0x300,0
                      );
    cMyTrace::operator()
              (local_4c,"[Taiwan, Pcroom] pcroom_daily_reward_tw get_n_row==0 m_id:%s",uVar6);
  }
  else {
    cVar2 = MySQL::fetch(local_14);
    if (cVar2 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "fetch";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    cVar2 = MySQL::get_int(local_14,0,&local_50);
    if (cVar2 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "get_int 0";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    cVar2 = MySQL::get_byte(local_14,1,&local_55);
    if (cVar2 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "get_int 1";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    cVar2 = MySQL::get_int(local_14,2,&local_54);
    if (cVar2 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "get_int 2";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    lVar7 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    uVar1 = local_54;
    iVar4 = G_CEnvironment();
    cVar2 = CheckDailyScheduleTime(*(int *)(iVar4 + 0x37c),uVar1,lVar7);
    if (cVar2 == '\0') {
      InterSelectPcroomDailyReward::makeRequest(param_2,local_50,local_55);
      iVar4 = (int)local_55;
      uVar6 = NumberToString(*(uint *)local_18,0);
      cMyTrace::cMyTrace(local_2c,
                         "virtual bool DBSelectPcroomDailyReward::dispatch(int, int, Stream*)",0x316
                         ,0);
      cMyTrace::operator()
                (local_2c,
                 "[Taiwan, Pcroom] pcroom_daily_reward_tw today m_id:%s, remain_reward_count:%d",
                 uVar6,iVar4);
    }
    else {
      InterSelectPcroomDailyReward::makeRequest(param_2,local_50,'\x04');
      uVar6 = NumberToString(*(uint *)local_18,0);
      cMyTrace::cMyTrace(local_3c,
                         "virtual bool DBSelectPcroomDailyReward::dispatch(int, int, Stream*)",0x311
                         ,0);
      cMyTrace::operator()
                (local_3c,"[Taiwan, Pcroom] pcroom_daily_reward_tw yesterday m_id:%s",uVar6);
    }
  }
  return 1;
}

```

---

## makeRequest

```asm
// === 0815c986 DBSelectPcroomDailyReward::makeRequest  [0x0815c986-0x815ca93] ===
 815c986:	55                   	push   %ebp
 815c987:	89 e5                	mov    %esp,%ebp
 815c989:	56                   	push   %esi
 815c98a:	53                   	push   %ebx
 815c98b:	83 ec 30             	sub    $0x30,%esp
 815c98e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 815c993:	c7 44 24 08 d9 02 00 	movl   $0x2d9,0x8(%esp)
 815c99a:	00 
 815c99b:	c7 44 24 04 d4 72 b7 	movl   $0x8b772d4,0x4(%esp)
 815c9a2:	08 
 815c9a3:	89 04 24             	mov    %eax,(%esp)
 815c9a6:	e8 db 30 13 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 815c9ab:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 815c9b2:	00 
 815c9b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 815c9b7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 815c9ba:	89 04 24             	mov    %eax,(%esp)
 815c9bd:	e8 64 c2 f6 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 815c9c2:	8b 45 08             	mov    0x8(%ebp),%eax
 815c9c5:	89 04 24             	mov    %eax,(%esp)
 815c9c8:	e8 c9 c2 f6 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 815c9cd:	89 44 24 08          	mov    %eax,0x8(%esp)
 815c9d1:	c7 44 24 04 0d 00 00 	movl   $0xd,0x4(%esp)
 815c9d8:	00 
 815c9d9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 815c9dc:	89 04 24             	mov    %eax,(%esp)
 815c9df:	e8 6c 6f 00 00       	call   8163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>
 815c9e4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 815c9e7:	89 04 24             	mov    %eax,(%esp)
 815c9ea:	e8 5f c2 f6 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 815c9ef:	89 04 24             	mov    %eax,(%esp)
 815c9f2:	e8 3d 22 00 00       	call   815ec34 <_ZN12CStreamGuard11GetInBufferIN25DBSelectPcroomDailyReward3MSGEEEPT_v>
 815c9f7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815c9fa:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 815c9fe:	75 38                	jne    815ca38 <_ZN25DBSelectPcroomDailyReward11makeRequestEP5CUser+0xb2>
 815ca00:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 815ca07:	00 
 815ca08:	c7 44 24 08 df 02 00 	movl   $0x2df,0x8(%esp)
 815ca0f:	00 
 815ca10:	c7 44 24 04 a0 8e b7 	movl   $0x8b78ea0,0x4(%esp)
 815ca17:	08 
 815ca18:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 815ca1b:	89 04 24             	mov    %eax,(%esp)
 815ca1e:	e8 f5 2c 3f 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 815ca23:	c7 44 24 04 13 7b b7 	movl   $0x8b77b13,0x4(%esp)
 815ca2a:	08 
 815ca2b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 815ca2e:	89 04 24             	mov    %eax,(%esp)
 815ca31:	e8 52 2d 3f 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 815ca36:	eb 49                	jmp    815ca81 <_ZN25DBSelectPcroomDailyReward11makeRequestEP5CUser+0xfb>
 815ca38:	8b 45 08             	mov    0x8(%ebp),%eax
 815ca3b:	89 04 24             	mov    %eax,(%esp)
 815ca3e:	e8 2b d9 f7 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 815ca43:	8b 55 f4             	mov    -0xc(%ebp),%edx
 815ca46:	89 02                	mov    %eax,(%edx)
 815ca48:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 815ca4d:	8d 55 dc             	lea    -0x24(%ebp),%edx
 815ca50:	89 54 24 08          	mov    %edx,0x8(%esp)
 815ca54:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 815ca5b:	00 
 815ca5c:	89 04 24             	mov    %eax,(%esp)
 815ca5f:	e8 7a 45 41 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 815ca64:	eb 1b                	jmp    815ca81 <_ZN25DBSelectPcroomDailyReward11makeRequestEP5CUser+0xfb>
 815ca66:	89 d3                	mov    %edx,%ebx
 815ca68:	89 c6                	mov    %eax,%esi
 815ca6a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 815ca6d:	89 04 24             	mov    %eax,(%esp)
 815ca70:	e8 5d fe 4b 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 815ca75:	89 f0                	mov    %esi,%eax
 815ca77:	89 da                	mov    %ebx,%edx
 815ca79:	89 04 24             	mov    %eax,(%esp)
 815ca7c:	e8 cf 6c 98 00       	call   8ae3750 <_Unwind_Resume>
 815ca81:	8d 45 dc             	lea    -0x24(%ebp),%eax
 815ca84:	89 04 24             	mov    %eax,(%esp)
 815ca87:	e8 46 fe 4b 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 815ca8c:	83 c4 30             	add    $0x30,%esp
 815ca8f:	5b                   	pop    %ebx
 815ca90:	5e                   	pop    %esi
 815ca91:	5d                   	pop    %ebp
 815ca92:	c3                   	ret
 815ca93:	90                   	nop

```

```c
// DBSelectPcroomDailyReward::makeRequest @ 0x815c986

/* DBSelectPcroomDailyReward::makeRequest(CUser*) */

void DBSelectPcroomDailyReward::makeRequest(CUser *param_1)

{
  Stream *pSVar1;
  undefined4 uVar2;
  CStreamGuard *this;
  CStreamGuard local_28 [8];
  cMyTrace local_20 [16];
  MSG *local_10;
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,
                               "localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x2d9);
  CStreamGuard::CStreamGuard(local_28,pSVar1,true);
  uVar2 = CUser::GetUID(param_1);
                    /* try { // try from 0815c9df to 0815ca63 has its CatchHandler @ 0815ca66 */
  Taiwan::internal_stream(local_28,0xd,uVar2);
  this = (CStreamGuard *)CStreamGuard::operator->(local_28);
  local_10 = CStreamGuard::GetInBuffer<DBSelectPcroomDailyReward::MSG>(this);
  if (local_10 == (MSG *)0x0) {
    cMyTrace::cMyTrace(local_20,"static void DBSelectPcroomDailyReward::makeRequest(CUser*)",0x2df,0
                      );
    cMyTrace::operator()(local_20,"[Taiwan, Pcroom] msg is null");
  }
  else {
    uVar2 = CUser::get_acc_id(param_1);
    *(undefined4 *)local_10 = uVar2;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_28);
  }
  CStreamGuard::~CStreamGuard(local_28);
  return;
}

```

