# dispatch_sig

`_ZN26Inter_AuctionResultBidding12dispatch_sigEP5CUserPci`

`Inter_AuctionResultBidding::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_AuctionResultBidding` | `0x084d6ca4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d6ca4  _ZN26Inter_AuctionResultBidding12dispatch_sigEP5CUserPci
#           Inter_AuctionResultBidding::dispatch_sig(CUser*, char*, int)
# range [0x084d6ca4, 0x084d6cd9]
084d6ca4 +0x00:  push   %ebp
084d6ca5 +0x01:  mov    %esp,%ebp
084d6ca7 +0x03:  sub    $0x18,%esp
084d6caa +0x06:  cmpl   $0x0,0xc(%ebp)
084d6cae +0x0a:  jne    084d6cb7 <+0x13>
084d6cb0 +0x0c:  mov    $0x0,%eax
084d6cb5 +0x11:  jmp    084d6cd7 <+0x33>
084d6cb7 +0x13:  mov    0x14(%ebp),%eax
084d6cba +0x16:  mov    %eax,0xc(%esp)
084d6cbe +0x1a:  mov    0x10(%ebp),%eax
084d6cc1 +0x1d:  mov    %eax,0x8(%esp)
084d6cc5 +0x21:  mov    0xc(%ebp),%eax
084d6cc8 +0x24:  mov    %eax,0x4(%esp)
084d6ccc +0x28:  mov    0x8(%ebp),%eax
084d6ccf +0x2b:  mov    %eax,(%esp)
084d6cd2 +0x2e:  call   084d6cda <_ZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPci>  ; Inter_AuctionResultBidding::dispatch_sig_taiwan(CUser*, char*, int)
084d6cd7 +0x33:  leave
084d6cd8 +0x34:  ret
084d6cd9 +0x35:  nop
```

## 反编译 C

```c
// Inter_AuctionResultBidding::dispatch_sig @ 0x84d6ca4

/* Inter_AuctionResultBidding::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_AuctionResultBidding::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_2 == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = dispatch_sig_taiwan(param_1,param_2,param_3);
  }
  return uVar1;
}
```
