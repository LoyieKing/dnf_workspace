# SubLog

`_ZN10AvatarCoin10HistoryLog6SubLogEP5CUserj`

`AvatarCoin::HistoryLog::SubLog(CUser*, unsigned int)`

| 类 | 地址 |
|---|---|
| `AvatarCoin::HistoryLog` | `0x0817ff54` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817ff54  _ZN10AvatarCoin10HistoryLog6SubLogEP5CUserj
#           AvatarCoin::HistoryLog::SubLog(CUser*, unsigned int)
# range [0x0817ff54, 0x0817ff9b]
0817ff54 +0x00:  push   %ebp
0817ff55 +0x01:  mov    %esp,%ebp
0817ff57 +0x03:  sub    $0x18,%esp
0817ff5a +0x06:  cmpl   $0x0,0x8(%ebp)
0817ff5e +0x0a:  je     0817ff98 <+0x44>
0817ff60 +0x0c:  mov    0x8(%ebp),%eax
0817ff63 +0x0f:  mov    %eax,(%esp)
0817ff66 +0x12:  call   081803ca <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x61>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x61
0817ff6b +0x17:  add    $0x658,%eax
0817ff70 +0x1c:  mov    %eax,(%esp)
0817ff73 +0x1f:  call   0817fef0 <_ZNK10AvatarCoin3GetEv>  ; AvatarCoin::Get() const
0817ff78 +0x24:  mov    %eax,0xc(%esp)
0817ff7c +0x28:  mov    0xc(%ebp),%eax
0817ff7f +0x2b:  mov    %eax,0x8(%esp)
0817ff83 +0x2f:  movl   $"AvatarCoin-,%d,%d",0x4(%esp)
0817ff8b +0x37:  mov    0x8(%ebp),%eax
0817ff8e +0x3a:  mov    %eax,(%esp)
0817ff91 +0x3d:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
0817ff96 +0x42:  jmp    0817ff99 <+0x45>
0817ff98 +0x44:  nop
0817ff99 +0x45:  leave
0817ff9a +0x46:  ret
0817ff9b +0x47:  nop
```

## 反编译 C

```c
// AvatarCoin::HistoryLog::SubLog @ 0x817ff54

/* AvatarCoin::HistoryLog::SubLog(CUser*, unsigned int) */

void AvatarCoin::HistoryLog::SubLog(CUser *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != (CUser *)0x0) {
    iVar1 = CUserCharacInfo::getCurCharacInvenRefR((CUserCharacInfo *)param_1);
    uVar2 = AvatarCoin::Get((AvatarCoin *)(iVar1 + 0x658));
    CUser::LogHistory(param_1,"AvatarCoin-,%d,%d",param_2,uVar2);
  }
  return;
}
```
