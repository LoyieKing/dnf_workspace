# dispatch_sig

`_ZN26Inter_UpdateServerSnapShot12dispatch_sigEP5CUserPci`

`Inter_UpdateServerSnapShot::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_UpdateServerSnapShot` | `0x084e8064` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e8064  _ZN26Inter_UpdateServerSnapShot12dispatch_sigEP5CUserPci
#           Inter_UpdateServerSnapShot::dispatch_sig(CUser*, char*, int)
# range [0x084e8064, 0x084e807d]
084e8064 +0x00:  push   %ebp
084e8065 +0x01:  mov    %esp,%ebp
084e8067 +0x03:  sub    $0x18,%esp
084e806a +0x06:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084e806f +0x0b:  mov    %eax,(%esp)
084e8072 +0x0e:  call   086d14d4 <_ZN9GameWorld20UpdateServerSnapShotEv>  ; GameWorld::UpdateServerSnapShot()
084e8077 +0x13:  mov    $0x0,%eax
084e807c +0x18:  leave
084e807d +0x19:  ret
```

## 反编译 C

```c
// Inter_UpdateServerSnapShot::dispatch_sig @ 0x84e8064

/* Inter_UpdateServerSnapShot::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_UpdateServerSnapShot::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  G_GameWorld();
  GameWorld::UpdateServerSnapShot();
  return 0;
}
```
