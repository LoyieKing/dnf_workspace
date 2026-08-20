# BuyProcess

`_ZN10AvatarCoin10BuyProcessEP5CUserR10Inven_Item`

`AvatarCoin::BuyProcess(CUser*, Inven_Item&)`

| 类 | 地址 |
|---|---|
| `AvatarCoin` | `0x081801d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081801d0  _ZN10AvatarCoin10BuyProcessEP5CUserR10Inven_Item
#           AvatarCoin::BuyProcess(CUser*, Inven_Item&)
# range [0x081801d0, 0x08180289]
081801d0 +0x00:  push   %ebp
081801d1 +0x01:  mov    %esp,%ebp
081801d3 +0x03:  push   %ebx
081801d4 +0x04:  sub    $0x24,%esp
081801d7 +0x07:  mov    0xc(%ebp),%eax
081801da +0x0a:  mov    0x2(%eax),%edx
081801dd +0x0d:  mov    &_ZN10GlobalData17s_pAvatarRouletteE,%eax
081801e2 +0x12:  mov    %edx,0x4(%esp)
081801e6 +0x16:  mov    %eax,(%esp)
081801e9 +0x19:  call   0817fb0a <_ZN20AvatarRouletteServer15isAvatarPotteryEm>  ; AvatarRouletteServer::isAvatarPottery(unsigned long)
081801ee +0x1e:  test   %al,%al
081801f0 +0x20:  je     0818027f <+0xaf>
081801f6 +0x26:  mov    0xc(%ebp),%eax
081801f9 +0x29:  mov    0x7(%eax),%eax
081801fc +0x2c:  mov    %eax,%ebx
081801fe +0x2e:  mov    0x8(%ebp),%eax
08180201 +0x31:  mov    %eax,(%esp)
08180204 +0x34:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08180209 +0x39:  add    $0x658,%eax
0818020e +0x3e:  mov    %ebx,0x4(%esp)
08180212 +0x42:  mov    %eax,(%esp)
08180215 +0x45:  call   0817fefa <_ZN10AvatarCoin3AddEj>  ; AvatarCoin::Add(unsigned int)
0818021a +0x4a:  mov    0x8(%ebp),%eax
0818021d +0x4d:  mov    %eax,(%esp)
08180220 +0x50:  call   081800d6 <_ZN10AvatarCoin8SaveToDBEP5CUser>  ; AvatarCoin::SaveToDB(CUser*)
08180225 +0x55:  xor    $0x1,%eax
08180228 +0x58:  test   %al,%al
0818022a +0x5a:  je     08180258 <+0x88>
0818022c +0x5c:  movl   $"SaveAvatarCoin failed",0x10(%esp)
08180234 +0x64:  movl   $0x19d,0xc(%esp)
0818023c +0x6c:  movl   $&_ZZN10AvatarCoin10BuyProcessEP5CUserR10Inven_ItemE19__PRETTY_FUNCTION__,0x8(%esp)
08180244 +0x74:  movl   $"localjapan/Arad_AvatarRoulette.cpp",0x4(%esp)
0818024c +0x7c:  movl   $0x1,(%esp)
08180253 +0x83:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08180258 +0x88:  mov    0xc(%ebp),%eax
0818025b +0x8b:  mov    0x7(%eax),%eax
0818025e +0x8e:  mov    %eax,0x4(%esp)
08180262 +0x92:  mov    0x8(%ebp),%eax
08180265 +0x95:  mov    %eax,(%esp)
08180268 +0x98:  call   0817ff9c <_ZN10AvatarCoin10HistoryLog6AddLogEP5CUserj>  ; AvatarCoin::HistoryLog::AddLog(CUser*, unsigned int)
0818026d +0x9d:  mov    0x8(%ebp),%eax
08180270 +0xa0:  mov    %eax,(%esp)
08180273 +0xa3:  call   0817ffe4 <_ZN10AvatarCoin14SendSyncPacketEP5CUser>  ; AvatarCoin::SendSyncPacket(CUser*)
08180278 +0xa8:  mov    $0x1,%eax
0818027d +0xad:  jmp    08180284 <+0xb4>
0818027f +0xaf:  mov    $0x0,%eax
08180284 +0xb4:  add    $0x24,%esp
08180287 +0xb7:  pop    %ebx
08180288 +0xb8:  pop    %ebp
08180289 +0xb9:  ret
```

## 反编译 C

```c
// AvatarCoin::BuyProcess @ 0x81801d0

/* AvatarCoin::BuyProcess(CUser*, Inven_Item&) */

undefined4 AvatarCoin::BuyProcess(CUser *param_1,Inven_Item *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  cVar2 = AvatarRouletteServer::isAvatarPottery
                    (GlobalData::s_pAvatarRoulette,*(ulong *)(param_2 + 2));
  if (cVar2 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 7);
    iVar3 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    Add((AvatarCoin *)(iVar3 + 0x658),uVar1);
    cVar2 = SaveToDB(param_1);
    if (cVar2 != '\x01') {
      LogManager::logFormat
                (1,"localjapan/Arad_AvatarRoulette.cpp",
                 "static bool AvatarCoin::BuyProcess(CUser*, Inven_Item&)",0x19d,
                 "SaveAvatarCoin failed");
    }
    HistoryLog::AddLog(param_1,*(uint *)(param_2 + 7));
    SendSyncPacket(param_1);
    uVar4 = 1;
  }
  return uVar4;
}
```
