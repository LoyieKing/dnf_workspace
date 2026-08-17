# Inter_PointAuctionLogMessage

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d7c4c Inter_PointAuctionLogMessage::dispatch_sig  [0x084d7c4c-0x84d7c83] ===
 84d7c4c:	55                   	push   %ebp
 84d7c4d:	89 e5                	mov    %esp,%ebp
 84d7c4f:	83 ec 28             	sub    $0x28,%esp
 84d7c52:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84d7c56:	75 07                	jne    84d7c5f <_ZN28Inter_PointAuctionLogMessage12dispatch_sigEP5CUserPci+0x13>
 84d7c58:	b8 00 00 00 00       	mov    $0x0,%eax
 84d7c5d:	eb 23                	jmp    84d7c82 <_ZN28Inter_PointAuctionLogMessage12dispatch_sigEP5CUserPci+0x36>
 84d7c5f:	8b 45 10             	mov    0x10(%ebp),%eax
 84d7c62:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d7c65:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d7c68:	8d 90 00 97 07 00    	lea    0x79700(%eax),%edx
 84d7c6e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d7c71:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d7c75:	89 14 24             	mov    %edx,(%esp)
 84d7c78:	e8 d7 d9 1a 00       	call   8685654 <_ZN15cUserHistoryLog12AuctionPointEP26SIG_AUCTION_LOG_MESSAGE_PG>
 84d7c7d:	b8 00 00 00 00       	mov    $0x0,%eax
 84d7c82:	c9                   	leave
 84d7c83:	c3                   	ret

```

```c
// Inter_PointAuctionLogMessage::dispatch_sig @ 0x84d7c4c

/* Inter_PointAuctionLogMessage::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_PointAuctionLogMessage::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  if (param_2 != (char *)0x0) {
    cUserHistoryLog::AuctionPoint
              ((cUserHistoryLog *)(param_2 + 0x79700),(SIG_AUCTION_LOG_MESSAGE_PG *)param_3);
  }
  return 0;
}

```

