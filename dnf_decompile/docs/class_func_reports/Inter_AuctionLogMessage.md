# Inter_AuctionLogMessage

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d7a90 Inter_AuctionLogMessage::dispatch_sig  [0x084d7a90-0x84d7ac7] ===
 84d7a90:	55                   	push   %ebp
 84d7a91:	89 e5                	mov    %esp,%ebp
 84d7a93:	83 ec 28             	sub    $0x28,%esp
 84d7a96:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84d7a9a:	75 07                	jne    84d7aa3 <_ZN23Inter_AuctionLogMessage12dispatch_sigEP5CUserPci+0x13>
 84d7a9c:	b8 00 00 00 00       	mov    $0x0,%eax
 84d7aa1:	eb 23                	jmp    84d7ac6 <_ZN23Inter_AuctionLogMessage12dispatch_sigEP5CUserPci+0x36>
 84d7aa3:	8b 45 10             	mov    0x10(%ebp),%eax
 84d7aa6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d7aa9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d7aac:	8d 90 00 97 07 00    	lea    0x79700(%eax),%edx
 84d7ab2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d7ab5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d7ab9:	89 14 24             	mov    %edx,(%esp)
 84d7abc:	e8 91 d9 1a 00       	call   8685452 <_ZN15cUserHistoryLog7AuctionEP26SIG_AUCTION_LOG_MESSAGE_AG>
 84d7ac1:	b8 00 00 00 00       	mov    $0x0,%eax
 84d7ac6:	c9                   	leave
 84d7ac7:	c3                   	ret

```

```c
// Inter_AuctionLogMessage::dispatch_sig @ 0x84d7a90

/* Inter_AuctionLogMessage::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_AuctionLogMessage::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  if (param_2 != (char *)0x0) {
    cUserHistoryLog::Auction
              ((cUserHistoryLog *)(param_2 + 0x79700),(SIG_AUCTION_LOG_MESSAGE_AG *)param_3);
  }
  return 0;
}

```

