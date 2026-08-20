# dispatch_sig

`_ZN28Inter_PointAuctionLogMessage12dispatch_sigEP5CUserPci`

`Inter_PointAuctionLogMessage::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_PointAuctionLogMessage` | `0x084d7c4c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d7c4c  _ZN28Inter_PointAuctionLogMessage12dispatch_sigEP5CUserPci
#           Inter_PointAuctionLogMessage::dispatch_sig(CUser*, char*, int)
# range [0x084d7c4c, 0x084d7c83]
084d7c4c +0x00:  push   %ebp
084d7c4d +0x01:  mov    %esp,%ebp
084d7c4f +0x03:  sub    $0x28,%esp
084d7c52 +0x06:  cmpl   $0x0,0xc(%ebp)
084d7c56 +0x0a:  jne    084d7c5f <+0x13>
084d7c58 +0x0c:  mov    $0x0,%eax
084d7c5d +0x11:  jmp    084d7c82 <+0x36>
084d7c5f +0x13:  mov    0x10(%ebp),%eax
084d7c62 +0x16:  mov    %eax,-0xc(%ebp)
084d7c65 +0x19:  mov    0xc(%ebp),%eax
084d7c68 +0x1c:  lea    0x79700(%eax),%edx
084d7c6e +0x22:  mov    -0xc(%ebp),%eax
084d7c71 +0x25:  mov    %eax,0x4(%esp)
084d7c75 +0x29:  mov    %edx,(%esp)
084d7c78 +0x2c:  call   08685654 <_ZN15cUserHistoryLog12AuctionPointEP26SIG_AUCTION_LOG_MESSAGE_PG>  ; cUserHistoryLog::AuctionPoint(SIG_AUCTION_LOG_MESSAGE_PG*)
084d7c7d +0x31:  mov    $0x0,%eax
084d7c82 +0x36:  leave
084d7c83 +0x37:  ret
```

## 反编译 C

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
