# dispatch_sig

`_ZN23Inter_AuctionLogMessage12dispatch_sigEP5CUserPci`

`Inter_AuctionLogMessage::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_AuctionLogMessage` | `0x084d7a90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d7a90  _ZN23Inter_AuctionLogMessage12dispatch_sigEP5CUserPci
#           Inter_AuctionLogMessage::dispatch_sig(CUser*, char*, int)
# range [0x084d7a90, 0x084d7ac7]
084d7a90 +0x00:  push   %ebp
084d7a91 +0x01:  mov    %esp,%ebp
084d7a93 +0x03:  sub    $0x28,%esp
084d7a96 +0x06:  cmpl   $0x0,0xc(%ebp)
084d7a9a +0x0a:  jne    084d7aa3 <+0x13>
084d7a9c +0x0c:  mov    $0x0,%eax
084d7aa1 +0x11:  jmp    084d7ac6 <+0x36>
084d7aa3 +0x13:  mov    0x10(%ebp),%eax
084d7aa6 +0x16:  mov    %eax,-0xc(%ebp)
084d7aa9 +0x19:  mov    0xc(%ebp),%eax
084d7aac +0x1c:  lea    0x79700(%eax),%edx
084d7ab2 +0x22:  mov    -0xc(%ebp),%eax
084d7ab5 +0x25:  mov    %eax,0x4(%esp)
084d7ab9 +0x29:  mov    %edx,(%esp)
084d7abc +0x2c:  call   08685452 <_ZN15cUserHistoryLog7AuctionEP26SIG_AUCTION_LOG_MESSAGE_AG>  ; cUserHistoryLog::Auction(SIG_AUCTION_LOG_MESSAGE_AG*)
084d7ac1 +0x31:  mov    $0x0,%eax
084d7ac6 +0x36:  leave
084d7ac7 +0x37:  ret
```

## 反编译 C

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
