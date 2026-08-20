# dispatch_sig

`_ZN21Inter_AuctionSubMoney12dispatch_sigEP5CUserPci`

`Inter_AuctionSubMoney::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_AuctionSubMoney` | `0x084e8004` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e8004  _ZN21Inter_AuctionSubMoney12dispatch_sigEP5CUserPci
#           Inter_AuctionSubMoney::dispatch_sig(CUser*, char*, int)
# range [0x084e8004, 0x084e8063]
084e8004 +0x00:  push   %ebp
084e8005 +0x01:  mov    %esp,%ebp
084e8007 +0x03:  push   %esi
084e8008 +0x04:  push   %ebx
084e8009 +0x05:  sub    $0x30,%esp
084e800c +0x08:  mov    0x10(%ebp),%eax
084e800f +0x0b:  mov    %eax,-0xc(%ebp)
084e8012 +0x0e:  cmpl   $0x0,0xc(%ebp)
084e8016 +0x12:  je     084e8057 <+0x53>
084e8018 +0x14:  mov    -0xc(%ebp),%eax
084e801b +0x17:  mov    0x4(%eax),%eax
084e801e +0x1a:  mov    %eax,%esi
084e8020 +0x1c:  mov    -0xc(%ebp),%eax
084e8023 +0x1f:  mov    (%eax),%ebx
084e8025 +0x21:  mov    0xc(%ebp),%eax
084e8028 +0x24:  mov    %eax,(%esp)
084e802b +0x27:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
084e8030 +0x2c:  mov    %esi,0x14(%esp)
084e8034 +0x30:  mov    %ebx,0x10(%esp)
084e8038 +0x34:  movl   $0x1,0xc(%esp)
084e8040 +0x3c:  movl   $0x2d3,0x8(%esp)
084e8048 +0x44:  mov    0xc(%ebp),%edx
084e804b +0x47:  mov    %edx,0x4(%esp)
084e804f +0x4b:  mov    %eax,(%esp)
084e8052 +0x4e:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
084e8057 +0x53:  mov    $0x0,%eax
084e805c +0x58:  add    $0x30,%esp
084e805f +0x5b:  pop    %ebx
084e8060 +0x5c:  pop    %esi
084e8061 +0x5d:  pop    %ebp
084e8062 +0x5e:  ret
084e8063 +0x5f:  nop
```

## 反编译 C

```c
// Inter_AuctionSubMoney::dispatch_sig @ 0x84e8004

/* Inter_AuctionSubMoney::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_AuctionSubMoney::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CHackAnalyzer *pCVar3;
  
  if (param_2 != (char *)0x0) {
    uVar1 = *(undefined4 *)(param_3 + 4);
    uVar2 = *(undefined4 *)param_3;
    pCVar3 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar3,param_2,0x2d3,1,uVar2,uVar1);
  }
  return 0;
}
```
