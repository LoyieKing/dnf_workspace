# GetPackage

`_ZN10AvatarCoin10GetPackageEP5CUserib`

`AvatarCoin::GetPackage(CUser*, int, bool)`

| 类 | 地址 |
|---|---|
| `AvatarCoin` | `0x0818028a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818028a  _ZN10AvatarCoin10GetPackageEP5CUserib
#           AvatarCoin::GetPackage(CUser*, int, bool)
# range [0x0818028a, 0x08180328]
0818028a +0x00:  push   %ebp
0818028b +0x01:  mov    %esp,%ebp
0818028d +0x03:  push   %ebx
0818028e +0x04:  sub    $0x34,%esp
08180291 +0x07:  mov    0x10(%ebp),%eax
08180294 +0x0a:  mov    %al,-0xc(%ebp)
08180297 +0x0d:  cmpb   $0x0,-0xc(%ebp)
0818029b +0x11:  je     081802a4 <+0x1a>
0818029d +0x13:  mov    $0x1,%eax
081802a2 +0x18:  jmp    08180323 <+0x99>
081802a4 +0x1a:  mov    0xc(%ebp),%ebx
081802a7 +0x1d:  mov    0x8(%ebp),%eax
081802aa +0x20:  mov    %eax,(%esp)
081802ad +0x23:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081802b2 +0x28:  add    $0x658,%eax
081802b7 +0x2d:  mov    %ebx,0x4(%esp)
081802bb +0x31:  mov    %eax,(%esp)
081802be +0x34:  call   0817fefa <_ZN10AvatarCoin3AddEj>  ; AvatarCoin::Add(unsigned int)
081802c3 +0x39:  mov    0x8(%ebp),%eax
081802c6 +0x3c:  mov    %eax,(%esp)
081802c9 +0x3f:  call   081800d6 <_ZN10AvatarCoin8SaveToDBEP5CUser>  ; AvatarCoin::SaveToDB(CUser*)
081802ce +0x44:  xor    $0x1,%eax
081802d1 +0x47:  test   %al,%al
081802d3 +0x49:  je     08180301 <+0x77>
081802d5 +0x4b:  movl   $"SaveAvatarCoin failed",0x10(%esp)
081802dd +0x53:  movl   $0x1b0,0xc(%esp)
081802e5 +0x5b:  movl   $&_ZZN10AvatarCoin10GetPackageEP5CUseribE19__PRETTY_FUNCTION__,0x8(%esp)
081802ed +0x63:  movl   $"localjapan/Arad_AvatarRoulette.cpp",0x4(%esp)
081802f5 +0x6b:  movl   $0x1,(%esp)
081802fc +0x72:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08180301 +0x77:  mov    0xc(%ebp),%eax
08180304 +0x7a:  mov    %eax,0x4(%esp)
08180308 +0x7e:  mov    0x8(%ebp),%eax
0818030b +0x81:  mov    %eax,(%esp)
0818030e +0x84:  call   0817ff9c <_ZN10AvatarCoin10HistoryLog6AddLogEP5CUserj>  ; AvatarCoin::HistoryLog::AddLog(CUser*, unsigned int)
08180313 +0x89:  mov    0x8(%ebp),%eax
08180316 +0x8c:  mov    %eax,(%esp)
08180319 +0x8f:  call   0817ffe4 <_ZN10AvatarCoin14SendSyncPacketEP5CUser>  ; AvatarCoin::SendSyncPacket(CUser*)
0818031e +0x94:  mov    $0x1,%eax
08180323 +0x99:  add    $0x34,%esp
08180326 +0x9c:  pop    %ebx
08180327 +0x9d:  pop    %ebp
08180328 +0x9e:  ret
```

## 反编译 C

```c
// AvatarCoin::GetPackage @ 0x818028a

/* AvatarCoin::GetPackage(CUser*, int, bool) */

undefined4 AvatarCoin::GetPackage(CUser *param_1,int param_2,bool param_3)

{
  char cVar1;
  int iVar2;
  
  if (!param_3) {
    iVar2 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    Add((AvatarCoin *)(iVar2 + 0x658),param_2);
    cVar1 = SaveToDB(param_1);
    if (cVar1 != '\x01') {
      LogManager::logFormat
                (1,"localjapan/Arad_AvatarRoulette.cpp",
                 "static bool AvatarCoin::GetPackage(CUser*, int, bool)",0x1b0,
                 "SaveAvatarCoin failed");
    }
    HistoryLog::AddLog(param_1,param_2);
    SendSyncPacket(param_1);
  }
  return 1;
}
```
