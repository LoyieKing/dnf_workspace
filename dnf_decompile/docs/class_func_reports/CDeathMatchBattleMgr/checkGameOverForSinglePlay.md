# checkGameOverForSinglePlay

`_ZN20CDeathMatchBattleMgr26checkGameOverForSinglePlayEi`

`CDeathMatchBattleMgr::checkGameOverForSinglePlay(int)`

| 类 | 地址 |
|---|---|
| `CDeathMatchBattleMgr` | `0x085df012` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085df012  _ZN20CDeathMatchBattleMgr26checkGameOverForSinglePlayEi
#           CDeathMatchBattleMgr::checkGameOverForSinglePlay(int)
# range [0x085df012, 0x085df125]
085df012 +0x000:  push   %ebp
085df013 +0x001:  mov    %esp,%ebp
085df015 +0x003:  sub    $0x4,%esp
085df018 +0x006:  cmpl   $0x0,0xc(%ebp)
085df01c +0x00a:  jne    085df028 <+0x16>
085df01e +0x00c:  mov    $0x1,%eax
085df023 +0x011:  jmp    085df123 <+0x111>
085df028 +0x016:  cmpl   $0x8,0xc(%ebp)
085df02c +0x01a:  ja     085df11e <+0x10c>
085df032 +0x020:  mov    0xc(%ebp),%eax
085df035 +0x023:  shl    $0x2,%eax
085df038 +0x026:  mov    &data#cfdeb49b(.rodata)(%eax),%eax
085df03e +0x02c:  jmp    *%eax
085df040 +0x02e:  mov    0x8(%ebp),%eax
085df043 +0x031:  mov    %eax,(%esp)
085df046 +0x034:  call   085defcc <_ZN20CDeathMatchBattleMgr15getMaxKillCountEv>  ; CDeathMatchBattleMgr::getMaxKillCount()
085df04b +0x039:  cmp    $0x6,%eax
085df04e +0x03c:  setg   %al
085df051 +0x03f:  test   %al,%al
085df053 +0x041:  je     085df05f <+0x4d>
085df055 +0x043:  mov    $0x1,%eax
085df05a +0x048:  jmp    085df123 <+0x111>
085df05f +0x04d:  mov    $0x0,%eax
085df064 +0x052:  jmp    085df123 <+0x111>
085df069 +0x057:  mov    0x8(%ebp),%eax
085df06c +0x05a:  mov    %eax,(%esp)
085df06f +0x05d:  call   085defcc <_ZN20CDeathMatchBattleMgr15getMaxKillCountEv>  ; CDeathMatchBattleMgr::getMaxKillCount()
085df074 +0x062:  cmp    $0x5,%eax
085df077 +0x065:  setg   %al
085df07a +0x068:  test   %al,%al
085df07c +0x06a:  je     085df088 <+0x76>
085df07e +0x06c:  mov    $0x1,%eax
085df083 +0x071:  jmp    085df123 <+0x111>
085df088 +0x076:  mov    $0x0,%eax
085df08d +0x07b:  jmp    085df123 <+0x111>
085df092 +0x080:  mov    0x8(%ebp),%eax
085df095 +0x083:  mov    %eax,(%esp)
085df098 +0x086:  call   085defcc <_ZN20CDeathMatchBattleMgr15getMaxKillCountEv>  ; CDeathMatchBattleMgr::getMaxKillCount()
085df09d +0x08b:  cmp    $0x4,%eax
085df0a0 +0x08e:  setg   %al
085df0a3 +0x091:  test   %al,%al
085df0a5 +0x093:  je     085df0ae <+0x9c>
085df0a7 +0x095:  mov    $0x1,%eax
085df0ac +0x09a:  jmp    085df123 <+0x111>
085df0ae +0x09c:  mov    $0x0,%eax
085df0b3 +0x0a1:  jmp    085df123 <+0x111>
085df0b5 +0x0a3:  mov    0x8(%ebp),%eax
085df0b8 +0x0a6:  mov    %eax,(%esp)
085df0bb +0x0a9:  call   085defcc <_ZN20CDeathMatchBattleMgr15getMaxKillCountEv>  ; CDeathMatchBattleMgr::getMaxKillCount()
085df0c0 +0x0ae:  cmp    $0x3,%eax
085df0c3 +0x0b1:  setg   %al
085df0c6 +0x0b4:  test   %al,%al
085df0c8 +0x0b6:  je     085df0d1 <+0xbf>
085df0ca +0x0b8:  mov    $0x1,%eax
085df0cf +0x0bd:  jmp    085df123 <+0x111>
085df0d1 +0x0bf:  mov    $0x0,%eax
085df0d6 +0x0c4:  jmp    085df123 <+0x111>
085df0d8 +0x0c6:  mov    0x8(%ebp),%eax
085df0db +0x0c9:  mov    %eax,(%esp)
085df0de +0x0cc:  call   085defcc <_ZN20CDeathMatchBattleMgr15getMaxKillCountEv>  ; CDeathMatchBattleMgr::getMaxKillCount()
085df0e3 +0x0d1:  cmp    $0x2,%eax
085df0e6 +0x0d4:  setg   %al
085df0e9 +0x0d7:  test   %al,%al
085df0eb +0x0d9:  je     085df0f4 <+0xe2>
085df0ed +0x0db:  mov    $0x1,%eax
085df0f2 +0x0e0:  jmp    085df123 <+0x111>
085df0f4 +0x0e2:  mov    $0x0,%eax
085df0f9 +0x0e7:  jmp    085df123 <+0x111>
085df0fb +0x0e9:  mov    0x8(%ebp),%eax
085df0fe +0x0ec:  mov    %eax,(%esp)
085df101 +0x0ef:  call   085defcc <_ZN20CDeathMatchBattleMgr15getMaxKillCountEv>  ; CDeathMatchBattleMgr::getMaxKillCount()
085df106 +0x0f4:  cmp    $0x1,%eax
085df109 +0x0f7:  setg   %al
085df10c +0x0fa:  test   %al,%al
085df10e +0x0fc:  je     085df117 <+0x105>
085df110 +0x0fe:  mov    $0x1,%eax
085df115 +0x103:  jmp    085df123 <+0x111>
085df117 +0x105:  mov    $0x0,%eax
085df11c +0x10a:  jmp    085df123 <+0x111>
085df11e +0x10c:  mov    $0x1,%eax
085df123 +0x111:  leave
085df124 +0x112:  ret
085df125 +0x113:  nop
```

## 反编译 C

```c
// CDeathMatchBattleMgr::checkGameOverForSinglePlay @ 0x85df012

/* CDeathMatchBattleMgr::checkGameOverForSinglePlay(int) */

undefined4 __thiscall
CDeathMatchBattleMgr::checkGameOverForSinglePlay(CDeathMatchBattleMgr *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    uVar1 = 1;
  }
  else {
    switch(param_1) {
    default:
      uVar1 = 1;
      break;
    case 2:
    case 3:
      iVar2 = getMaxKillCount(this);
      if (iVar2 < 2) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
      break;
    case 4:
      iVar2 = getMaxKillCount(this);
      if (iVar2 < 3) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
      break;
    case 5:
      iVar2 = getMaxKillCount(this);
      if (iVar2 < 4) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
      break;
    case 6:
      iVar2 = getMaxKillCount(this);
      if (iVar2 < 5) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
      break;
    case 7:
      iVar2 = getMaxKillCount(this);
      if (iVar2 < 6) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
      break;
    case 8:
      iVar2 = getMaxKillCount(this);
      if (iVar2 < 7) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}
```
