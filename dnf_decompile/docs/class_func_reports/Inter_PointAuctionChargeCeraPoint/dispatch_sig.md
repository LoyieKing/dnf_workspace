# dispatch_sig

`_ZN33Inter_PointAuctionChargeCeraPoint12dispatch_sigEP5CUserPci`

`Inter_PointAuctionChargeCeraPoint::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_PointAuctionChargeCeraPoint` | `0x084d7c84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d7c84  _ZN33Inter_PointAuctionChargeCeraPoint12dispatch_sigEP5CUserPci
#           Inter_PointAuctionChargeCeraPoint::dispatch_sig(CUser*, char*, int)
# range [0x084d7c84, 0x084d7c8d]
084d7c84 +0x00:  push   %ebp
084d7c85 +0x01:  mov    %esp,%ebp
084d7c87 +0x03:  mov    $0x0,%eax
084d7c8c +0x08:  pop    %ebp
084d7c8d +0x09:  ret
```

## 反编译 C

```c
// Inter_PointAuctionChargeCeraPoint::dispatch_sig @ 0x84d7c84

/* Inter_PointAuctionChargeCeraPoint::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_PointAuctionChargeCeraPoint::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  return 0;
}
```
