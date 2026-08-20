# clearDungeon

`_ZN10BlueMarble12clearDungeonEP5CUser`

`BlueMarble::clearDungeon(CUser*)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d96f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d96f4  _ZN10BlueMarble12clearDungeonEP5CUser
#           BlueMarble::clearDungeon(CUser*)
# range [0x080d96f4, 0x080d978b]
080d96f4 +0x00:  push   %ebp
080d96f5 +0x01:  mov    %esp,%ebp
080d96f7 +0x03:  sub    $0x38,%esp
080d96fa +0x06:  cmpl   $0x0,0xc(%ebp)
080d96fe +0x0a:  je     080d9789 <+0x95>
080d9704 +0x10:  mov    0xc(%ebp),%eax
080d9707 +0x13:  mov    %eax,0x4(%esp)
080d970b +0x17:  mov    0x8(%ebp),%eax
080d970e +0x1a:  mov    %eax,(%esp)
080d9711 +0x1d:  call   080d9074 <_ZNK10BlueMarble11getUserSlotEP5CUser>  ; BlueMarble::getUserSlot(CUser*) const
080d9716 +0x22:  mov    %eax,-0xc(%ebp)
080d9719 +0x25:  cmpl   $0xffffffff,-0xc(%ebp)
080d971d +0x29:  jne    080d9754 <+0x60>
080d971f +0x2b:  mov    -0xc(%ebp),%eax
080d9722 +0x2e:  mov    %eax,0x14(%esp)
080d9726 +0x32:  movl   $"BlueMarble::clearDungeon slot(%d)",0x10(%esp)
080d972e +0x3a:  movl   $0x48a,0xc(%esp)
080d9736 +0x42:  movl   $&_ZZN10BlueMarble12clearDungeonEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
080d973e +0x4a:  movl   $"BlueMarble.cpp",0x4(%esp)
080d9746 +0x52:  movl   $0x1,(%esp)
080d974d +0x59:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
080d9752 +0x5e:  jmp    080d978a <+0x96>
080d9754 +0x60:  mov    -0xc(%ebp),%eax
080d9757 +0x63:  mov    %eax,0x4(%esp)
080d975b +0x67:  mov    0x8(%ebp),%eax
080d975e +0x6a:  mov    %eax,(%esp)
080d9761 +0x6d:  call   080d798c <_ZN10BlueMarble25checkLastZoneDungeonClearEi>  ; BlueMarble::checkLastZoneDungeonClear(int)
080d9766 +0x72:  test   %al,%al
080d9768 +0x74:  je     080d978a <+0x96>
080d976a +0x76:  mov    -0xc(%ebp),%eax
080d976d +0x79:  mov    %eax,0x4(%esp)
080d9771 +0x7d:  mov    0x8(%ebp),%eax
080d9774 +0x80:  mov    %eax,(%esp)
080d9777 +0x83:  call   080d79ee <_ZN10BlueMarble16finishBlueMarbleEi>  ; BlueMarble::finishBlueMarble(int)
080d977c +0x88:  mov    0x8(%ebp),%eax
080d977f +0x8b:  mov    %eax,(%esp)
080d9782 +0x8e:  call   080d7dde <_ZN10BlueMarble12resultRewardEv>  ; BlueMarble::resultReward()
080d9787 +0x93:  jmp    080d978a <+0x96>
080d9789 +0x95:  nop
080d978a +0x96:  leave
080d978b +0x97:  ret
```

## 反编译 C

```c
// BlueMarble::clearDungeon @ 0x80d96f4

/* BlueMarble::clearDungeon(CUser*) */

void __thiscall BlueMarble::clearDungeon(BlueMarble *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  
  if (param_1 != (CUser *)0x0) {
    iVar2 = getUserSlot(this,param_1);
    if (iVar2 == -1) {
      LogManager::logFormat
                (1,"BlueMarble.cpp","void BlueMarble::clearDungeon(CUser*)",0x48a,
                 "BlueMarble::clearDungeon slot(%d)",0xffffffff);
    }
    else {
      cVar1 = checkLastZoneDungeonClear(this,iVar2);
      if (cVar1 != '\0') {
        finishBlueMarble(this,iVar2);
        resultReward(this);
      }
    }
  }
  return;
}
```
