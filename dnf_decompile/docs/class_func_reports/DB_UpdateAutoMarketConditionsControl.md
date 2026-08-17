# DB_UpdateAutoMarketConditionsControl

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08433bb8 DB_UpdateAutoMarketConditionsControl::dispatch  [0x08433bb8-0x8433d6f] ===
 8433bb8:	55                   	push   %ebp
 8433bb9:	89 e5                	mov    %esp,%ebp
 8433bbb:	57                   	push   %edi
 8433bbc:	56                   	push   %esi
 8433bbd:	53                   	push   %ebx
 8433bbe:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 8433bc4:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8433bc9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8433bd0:	00 
 8433bd1:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8433bd8:	00 
 8433bd9:	89 04 24             	mov    %eax,(%esp)
 8433bdc:	e8 5d 16 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8433be1:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8433be4:	8b 45 14             	mov    0x14(%ebp),%eax
 8433be7:	89 04 24             	mov    %eax,(%esp)
 8433bea:	e8 85 f4 01 00       	call   8453074 <_ZN6Stream12GetOutBufferI41SIG_UPDATE_AUTO_MARKET_CONDITIONS_CONTROLEEPT_v>
 8433bef:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8433bf2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8433bf5:	8b 40 28             	mov    0x28(%eax),%eax
 8433bf8:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8433bfb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8433bfe:	8b 78 24             	mov    0x24(%eax),%edi
 8433c01:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8433c04:	8b 70 20             	mov    0x20(%eax),%esi
 8433c07:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8433c0a:	8b 48 10             	mov    0x10(%eax),%ecx
 8433c0d:	8b 58 14             	mov    0x14(%eax),%ebx
 8433c10:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8433c13:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8433c16:	8b 55 b0             	mov    -0x50(%ebp),%edx
 8433c19:	8b 42 18             	mov    0x18(%edx),%eax
 8433c1c:	8b 52 1c             	mov    0x1c(%edx),%edx
 8433c1f:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8433c22:	89 55 b4             	mov    %edx,-0x4c(%ebp)
 8433c25:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8433c28:	89 44 24 20          	mov    %eax,0x20(%esp)
 8433c2c:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 8433c30:	89 74 24 18          	mov    %esi,0x18(%esp)
 8433c34:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8433c38:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8433c3c:	8b 55 b0             	mov    -0x50(%ebp),%edx
 8433c3f:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 8433c42:	89 54 24 08          	mov    %edx,0x8(%esp)
 8433c46:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8433c4a:	c7 44 24 04 e8 28 c5 	movl   $0x8c528e8,0x4(%esp)
 8433c51:	08 
 8433c52:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8433c55:	89 04 24             	mov    %eax,(%esp)
 8433c58:	e8 63 05 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8433c5d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8433c64:	00 
 8433c65:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8433c68:	89 04 24             	mov    %eax,(%esp)
 8433c6b:	e8 b6 06 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8433c70:	83 f0 01             	xor    $0x1,%eax
 8433c73:	84 c0                	test   %al,%al
 8433c75:	74 0a                	je     8433c81 <_ZN36DB_UpdateAutoMarketConditionsControl8dispatchEiiP6Stream+0xc9>
 8433c77:	b8 00 00 00 00       	mov    $0x0,%eax
 8433c7c:	e9 e4 00 00 00       	jmp    8433d65 <_ZN36DB_UpdateAutoMarketConditionsControl8dispatchEiiP6Stream+0x1ad>
 8433c81:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8433c84:	89 04 24             	mov    %eax,(%esp)
 8433c87:	e8 84 06 fc ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8433c8c:	09 d0                	or     %edx,%eax
 8433c8e:	85 c0                	test   %eax,%eax
 8433c90:	0f 94 c0             	sete   %al
 8433c93:	84 c0                	test   %al,%al
 8433c95:	0f 84 c5 00 00 00    	je     8433d60 <_ZN36DB_UpdateAutoMarketConditionsControl8dispatchEiiP6Stream+0x1a8>
 8433c9b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8433c9e:	8b 40 28             	mov    0x28(%eax),%eax
 8433ca1:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8433ca4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8433ca7:	8b 40 24             	mov    0x24(%eax),%eax
 8433caa:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8433cad:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8433cb0:	8b 40 20             	mov    0x20(%eax),%eax
 8433cb3:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8433cb6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8433cb9:	8b 50 10             	mov    0x10(%eax),%edx
 8433cbc:	8b 48 14             	mov    0x14(%eax),%ecx
 8433cbf:	89 55 d0             	mov    %edx,-0x30(%ebp)
 8433cc2:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
 8433cc5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8433cc8:	8b 70 18             	mov    0x18(%eax),%esi
 8433ccb:	8b 78 1c             	mov    0x1c(%eax),%edi
 8433cce:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8433cd1:	8b 48 08             	mov    0x8(%eax),%ecx
 8433cd4:	8b 58 0c             	mov    0xc(%eax),%ebx
 8433cd7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8433cda:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8433cdd:	8b 55 b0             	mov    -0x50(%ebp),%edx
 8433ce0:	8b 02                	mov    (%edx),%eax
 8433ce2:	8b 52 04             	mov    0x4(%edx),%edx
 8433ce5:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8433ce8:	89 55 b4             	mov    %edx,-0x4c(%ebp)
 8433ceb:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8433cee:	89 44 24 30          	mov    %eax,0x30(%esp)
 8433cf2:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8433cf5:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 8433cf9:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8433cfc:	89 44 24 28          	mov    %eax,0x28(%esp)
 8433d00:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8433d03:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8433d06:	89 44 24 20          	mov    %eax,0x20(%esp)
 8433d0a:	89 54 24 24          	mov    %edx,0x24(%esp)
 8433d0e:	89 74 24 18          	mov    %esi,0x18(%esp)
 8433d12:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 8433d16:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8433d1a:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8433d1e:	8b 55 b0             	mov    -0x50(%ebp),%edx
 8433d21:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 8433d24:	89 54 24 08          	mov    %edx,0x8(%esp)
 8433d28:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8433d2c:	c7 44 24 04 8c 29 c5 	movl   $0x8c5298c,0x4(%esp)
 8433d33:	08 
 8433d34:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8433d37:	89 04 24             	mov    %eax,(%esp)
 8433d3a:	e8 81 04 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8433d3f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8433d46:	00 
 8433d47:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8433d4a:	89 04 24             	mov    %eax,(%esp)
 8433d4d:	e8 d4 05 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8433d52:	83 f0 01             	xor    $0x1,%eax
 8433d55:	84 c0                	test   %al,%al
 8433d57:	74 07                	je     8433d60 <_ZN36DB_UpdateAutoMarketConditionsControl8dispatchEiiP6Stream+0x1a8>
 8433d59:	b8 00 00 00 00       	mov    $0x0,%eax
 8433d5e:	eb 05                	jmp    8433d65 <_ZN36DB_UpdateAutoMarketConditionsControl8dispatchEiiP6Stream+0x1ad>
 8433d60:	b8 01 00 00 00       	mov    $0x1,%eax
 8433d65:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 8433d6b:	5b                   	pop    %ebx
 8433d6c:	5e                   	pop    %esi
 8433d6d:	5f                   	pop    %edi
 8433d6e:	5d                   	pop    %ebp
 8433d6f:	c3                   	ret

```

```c
// DB_UpdateAutoMarketConditionsControl::dispatch @ 0x8433bb8

/* DB_UpdateAutoMarketConditionsControl::dispatch(int, int, Stream*) */

undefined4 DB_UpdateAutoMarketConditionsControl::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  MySQL *this;
  SIG_UPDATE_AUTO_MARKET_CONDITIONS_CONTROL *pSVar2;
  undefined4 uVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  pSVar2 = Stream::GetOutBuffer<SIG_UPDATE_AUTO_MARKET_CONDITIONS_CONTROL>(in_stack_00000010);
  MySQL::set_query(this,
                   "upDate  auto_market_condition_ctrl_daily set optimum_gold_supply=%qd, over_gold=%qd, gold_phase=%d, item_phase=%d, durability_phase=%d where occ_time = CURDATE()"
                   ,*(undefined4 *)(pSVar2 + 0x18),*(undefined4 *)(pSVar2 + 0x1c),
                   *(undefined4 *)(pSVar2 + 0x10),*(undefined4 *)(pSVar2 + 0x14),
                   *(undefined4 *)(pSVar2 + 0x20),*(undefined4 *)(pSVar2 + 0x24),
                   *(undefined4 *)(pSVar2 + 0x28));
  cVar1 = MySQL::exec(this,true);
  if (cVar1 == '\x01') {
    lVar4 = MySQL::getAffectedRowCount(this);
    if (lVar4 == 0) {
      MySQL::set_query(this,
                       "inSert into auto_market_condition_ctrl_daily(occ_time, total_gold, auction_gold, optimum_gold_supply, over_gold, gold_phase, item_phase, durability_phase) values(CURDATE(),%qd,%qd,%qd,%qd,%d,%d,%d)"
                       ,*(undefined4 *)pSVar2,*(undefined4 *)(pSVar2 + 4),
                       *(undefined4 *)(pSVar2 + 8),*(undefined4 *)(pSVar2 + 0xc),
                       *(undefined4 *)(pSVar2 + 0x18),*(undefined4 *)(pSVar2 + 0x1c),
                       *(undefined4 *)(pSVar2 + 0x10),*(undefined4 *)(pSVar2 + 0x14),
                       *(undefined4 *)(pSVar2 + 0x20),*(undefined4 *)(pSVar2 + 0x24),
                       *(undefined4 *)(pSVar2 + 0x28));
      cVar1 = MySQL::exec(this,true);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## makeRequest

```asm
// === 08433d70 DB_UpdateAutoMarketConditionsControl::makeRequest  [0x08433d70-0x8433ec9] ===
 8433d70:	55                   	push   %ebp
 8433d71:	89 e5                	mov    %esp,%ebp
 8433d73:	56                   	push   %esi
 8433d74:	53                   	push   %ebx
 8433d75:	83 ec 40             	sub    $0x40,%esp
 8433d78:	8b 45 08             	mov    0x8(%ebp),%eax
 8433d7b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8433d7e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8433d81:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8433d84:	8b 45 10             	mov    0x10(%ebp),%eax
 8433d87:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8433d8a:	8b 45 14             	mov    0x14(%ebp),%eax
 8433d8d:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8433d90:	8b 45 18             	mov    0x18(%ebp),%eax
 8433d93:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8433d96:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8433d99:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8433d9c:	8b 45 20             	mov    0x20(%ebp),%eax
 8433d9f:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8433da2:	8b 45 24             	mov    0x24(%ebp),%eax
 8433da5:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8433da8:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8433dad:	c7 44 24 08 79 7c 00 	movl   $0x7c79,0x8(%esp)
 8433db4:	00 
 8433db5:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8433dbc:	08 
 8433dbd:	89 04 24             	mov    %eax,(%esp)
 8433dc0:	e8 c1 bc e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8433dc5:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8433dcc:	00 
 8433dcd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8433dd1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8433dd4:	89 04 24             	mov    %eax,(%esp)
 8433dd7:	e8 4a 4e c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8433ddc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8433ddf:	89 04 24             	mov    %eax,(%esp)
 8433de2:	e8 5f 4e c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8433de7:	c7 44 24 04 5b 01 00 	movl   $0x15b,0x4(%esp)
 8433dee:	00 
 8433def:	89 04 24             	mov    %eax,(%esp)
 8433df2:	e8 5f 4e c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8433df7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8433dfa:	89 04 24             	mov    %eax,(%esp)
 8433dfd:	e8 44 4e c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8433e02:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8433e09:	ff 
 8433e0a:	89 04 24             	mov    %eax,(%esp)
 8433e0d:	e8 44 4e c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8433e12:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8433e15:	89 04 24             	mov    %eax,(%esp)
 8433e18:	e8 31 4e c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8433e1d:	89 04 24             	mov    %eax,(%esp)
 8433e20:	e8 a3 f2 01 00       	call   84530c8 <_ZN12CStreamGuard11GetInBufferI41SIG_UPDATE_AUTO_MARKET_CONDITIONS_CONTROLEEPT_v>
 8433e25:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8433e28:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8433e2b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8433e2e:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8433e31:	89 01                	mov    %eax,(%ecx)
 8433e33:	89 51 04             	mov    %edx,0x4(%ecx)
 8433e36:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8433e39:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8433e3c:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8433e3f:	89 41 08             	mov    %eax,0x8(%ecx)
 8433e42:	89 51 0c             	mov    %edx,0xc(%ecx)
 8433e45:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8433e48:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8433e4b:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8433e4e:	89 41 10             	mov    %eax,0x10(%ecx)
 8433e51:	89 51 14             	mov    %edx,0x14(%ecx)
 8433e54:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8433e57:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8433e5a:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8433e5d:	89 41 18             	mov    %eax,0x18(%ecx)
 8433e60:	89 51 1c             	mov    %edx,0x1c(%ecx)
 8433e63:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8433e66:	8b 55 28             	mov    0x28(%ebp),%edx
 8433e69:	89 50 20             	mov    %edx,0x20(%eax)
 8433e6c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8433e6f:	8b 55 2c             	mov    0x2c(%ebp),%edx
 8433e72:	89 50 24             	mov    %edx,0x24(%eax)
 8433e75:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8433e78:	8b 55 30             	mov    0x30(%ebp),%edx
 8433e7b:	89 50 28             	mov    %edx,0x28(%eax)
 8433e7e:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8433e83:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8433e86:	89 54 24 08          	mov    %edx,0x8(%esp)
 8433e8a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8433e91:	00 
 8433e92:	89 04 24             	mov    %eax,(%esp)
 8433e95:	e8 44 d1 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8433e9a:	eb 1b                	jmp    8433eb7 <_ZN36DB_UpdateAutoMarketConditionsControl11makeRequestEyyyyiii+0x147>
 8433e9c:	89 d3                	mov    %edx,%ebx
 8433e9e:	89 c6                	mov    %eax,%esi
 8433ea0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8433ea3:	89 04 24             	mov    %eax,(%esp)
 8433ea6:	e8 27 8a 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8433eab:	89 f0                	mov    %esi,%eax
 8433ead:	89 da                	mov    %ebx,%edx
 8433eaf:	89 04 24             	mov    %eax,(%esp)
 8433eb2:	e8 99 f8 6a 00       	call   8ae3750 <_Unwind_Resume>
 8433eb7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8433eba:	89 04 24             	mov    %eax,(%esp)
 8433ebd:	e8 10 8a 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8433ec2:	83 c4 40             	add    $0x40,%esp
 8433ec5:	5b                   	pop    %ebx
 8433ec6:	5e                   	pop    %esi
 8433ec7:	5d                   	pop    %ebp
 8433ec8:	c3                   	ret
 8433ec9:	90                   	nop

```

```c
// DB_UpdateAutoMarketConditionsControl::makeRequest @ 0x8433d70

/* DB_UpdateAutoMarketConditionsControl::makeRequest(unsigned long long, unsigned long long,
   unsigned long long, unsigned long long, int, int, int) */

void DB_UpdateAutoMarketConditionsControl::makeRequest
               (ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,int param_5,
               int param_6,int param_7)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_UPDATE_AUTO_MARKET_CONDITIONS_CONTROL *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7c79);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08433df2 to 08433e99 has its CatchHandler @ 08433e9c */
  CStreamGuard::operator<<(pCVar2,0x15b);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_UPDATE_AUTO_MARKET_CONDITIONS_CONTROL>(pCVar2);
  *(ulonglong *)local_10 = param_1;
  *(ulonglong *)(local_10 + 8) = param_2;
  *(ulonglong *)(local_10 + 0x10) = param_3;
  *(ulonglong *)(local_10 + 0x18) = param_4;
  *(int *)(local_10 + 0x20) = param_5;
  *(int *)(local_10 + 0x24) = param_6;
  *(int *)(local_10 + 0x28) = param_7;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

