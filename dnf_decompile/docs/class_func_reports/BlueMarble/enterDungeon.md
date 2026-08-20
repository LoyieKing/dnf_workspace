# enterDungeon

`_ZN10BlueMarble12enterDungeonEP5CUser`

`BlueMarble::enterDungeon(CUser*)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d94f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d94f6  _ZN10BlueMarble12enterDungeonEP5CUser
#           BlueMarble::enterDungeon(CUser*)
# range [0x080d94f6, 0x080d9571]
080d94f6 +0x00:  push   %ebp
080d94f7 +0x01:  mov    %esp,%ebp
080d94f9 +0x03:  sub    $0x38,%esp
080d94fc +0x06:  cmpl   $0x0,0xc(%ebp)
080d9500 +0x0a:  je     080d956e <+0x78>
080d9502 +0x0c:  mov    0xc(%ebp),%eax
080d9505 +0x0f:  mov    %eax,0x4(%esp)
080d9509 +0x13:  mov    0x8(%ebp),%eax
080d950c +0x16:  mov    %eax,(%esp)
080d950f +0x19:  call   080d9074 <_ZNK10BlueMarble11getUserSlotEP5CUser>  ; BlueMarble::getUserSlot(CUser*) const
080d9514 +0x1e:  mov    %eax,-0xc(%ebp)
080d9517 +0x21:  cmpl   $0xffffffff,-0xc(%ebp)
080d951b +0x25:  jne    080d9552 <+0x5c>
080d951d +0x27:  mov    -0xc(%ebp),%eax
080d9520 +0x2a:  mov    %eax,0x14(%esp)
080d9524 +0x2e:  movl   $"BlueMarble::enterDungeon slot(%d)",0x10(%esp)
080d952c +0x36:  movl   $0x45c,0xc(%esp)
080d9534 +0x3e:  movl   $&_ZZN10BlueMarble12enterDungeonEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
080d953c +0x46:  movl   $"BlueMarble.cpp",0x4(%esp)
080d9544 +0x4e:  movl   $0x1,(%esp)
080d954b +0x55:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
080d9550 +0x5a:  jmp    080d956f <+0x79>
080d9552 +0x5c:  movl   $0x2,0x8(%esp)
080d955a +0x64:  mov    -0xc(%ebp),%eax
080d955d +0x67:  mov    %eax,0x4(%esp)
080d9561 +0x6b:  mov    0x8(%ebp),%eax
080d9564 +0x6e:  mov    %eax,(%esp)
080d9567 +0x71:  call   080d793a <_ZN10BlueMarble12setUserStateEiN19BlueMarbleUserState1TE>  ; BlueMarble::setUserState(int, BlueMarbleUserState::T)
080d956c +0x76:  jmp    080d956f <+0x79>
080d956e +0x78:  nop
080d956f +0x79:  leave
080d9570 +0x7a:  ret
080d9571 +0x7b:  nop
```

## 反编译 C

```c
// BlueMarble::enterDungeon @ 0x80d94f6

/* BlueMarble::enterDungeon(CUser*) */

void __thiscall BlueMarble::enterDungeon(BlueMarble *this,CUser *param_1)

{
  int iVar1;
  
  if (param_1 != (CUser *)0x0) {
    iVar1 = getUserSlot(this,param_1);
    if (iVar1 == -1) {
      LogManager::logFormat
                (1,"BlueMarble.cpp","void BlueMarble::enterDungeon(CUser*)",0x45c,
                 "BlueMarble::enterDungeon slot(%d)",0xffffffff);
    }
    else {
      setUserState(this,iVar1,2);
    }
  }
  return;
}
```
