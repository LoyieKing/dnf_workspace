# dispatch_sig

`_ZN29Inter_GoblinPadChagePwdReward12dispatch_sigEP5CUserPci`

`Inter_GoblinPadChagePwdReward::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_GoblinPadChagePwdReward` | `0x084e4354` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e4354  _ZN29Inter_GoblinPadChagePwdReward12dispatch_sigEP5CUserPci
#           Inter_GoblinPadChagePwdReward::dispatch_sig(CUser*, char*, int)
# range [0x084e4354, 0x084e4387]
084e4354 +0x00:  push   %ebp
084e4355 +0x01:  mov    %esp,%ebp
084e4357 +0x03:  sub    $0x28,%esp
084e435a +0x06:  mov    0x10(%ebp),%eax
084e435d +0x09:  mov    %eax,-0xc(%ebp)
084e4360 +0x0c:  cmpl   $0x0,0xc(%ebp)
084e4364 +0x10:  je     084e4380 <+0x2c>
084e4366 +0x12:  mov    0xc(%ebp),%eax
084e4369 +0x15:  mov    %eax,(%esp)
084e436c +0x18:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
084e4371 +0x1d:  mov    0xc(%ebp),%edx
084e4374 +0x20:  mov    %edx,0x4(%esp)
084e4378 +0x24:  mov    %eax,(%esp)
084e437b +0x27:  call   085997b8 <_ZN8Sanicova4CPad18SendChagePwdRewardEP5CUser>  ; Sanicova::CPad::SendChagePwdReward(CUser*)
084e4380 +0x2c:  mov    $0x0,%eax
084e4385 +0x31:  leave
084e4386 +0x32:  ret
084e4387 +0x33:  nop
```

## 反编译 C

```c
// Inter_GoblinPadChagePwdReward::dispatch_sig @ 0x84e4354

/* Inter_GoblinPadChagePwdReward::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GoblinPadChagePwdReward::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  CPad *this;
  
  if (param_2 != (char *)0x0) {
    this = (CPad *)CUser::getPad((CUser *)param_2);
    Sanicova::CPad::SendChagePwdReward(this,(CUser *)param_2);
  }
  return 0;
}
```
