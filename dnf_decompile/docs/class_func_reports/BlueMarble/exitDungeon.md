# exitDungeon

`_ZN10BlueMarble11exitDungeonEP5CUser`

`BlueMarble::exitDungeon(CUser*)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d978c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d978c  _ZN10BlueMarble11exitDungeonEP5CUser
#           BlueMarble::exitDungeon(CUser*)
# range [0x080d978c, 0x080d9807]
080d978c +0x00:  push   %ebp
080d978d +0x01:  mov    %esp,%ebp
080d978f +0x03:  sub    $0x38,%esp
080d9792 +0x06:  cmpl   $0x0,0xc(%ebp)
080d9796 +0x0a:  je     080d9804 <+0x78>
080d9798 +0x0c:  mov    0xc(%ebp),%eax
080d979b +0x0f:  mov    %eax,0x4(%esp)
080d979f +0x13:  mov    0x8(%ebp),%eax
080d97a2 +0x16:  mov    %eax,(%esp)
080d97a5 +0x19:  call   080d9074 <_ZNK10BlueMarble11getUserSlotEP5CUser>  ; BlueMarble::getUserSlot(CUser*) const
080d97aa +0x1e:  mov    %eax,-0xc(%ebp)
080d97ad +0x21:  cmpl   $0xffffffff,-0xc(%ebp)
080d97b1 +0x25:  jne    080d97e8 <+0x5c>
080d97b3 +0x27:  mov    -0xc(%ebp),%eax
080d97b6 +0x2a:  mov    %eax,0x14(%esp)
080d97ba +0x2e:  movl   $"BlueMarble::exitDungeon slot(%d)",0x10(%esp)
080d97c2 +0x36:  movl   $0x49d,0xc(%esp)
080d97ca +0x3e:  movl   $&_ZZN10BlueMarble11exitDungeonEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
080d97d2 +0x46:  movl   $"BlueMarble.cpp",0x4(%esp)
080d97da +0x4e:  movl   $0x1,(%esp)
080d97e1 +0x55:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
080d97e6 +0x5a:  jmp    080d9805 <+0x79>
080d97e8 +0x5c:  movl   $0x1,0x8(%esp)
080d97f0 +0x64:  mov    -0xc(%ebp),%eax
080d97f3 +0x67:  mov    %eax,0x4(%esp)
080d97f7 +0x6b:  mov    0x8(%ebp),%eax
080d97fa +0x6e:  mov    %eax,(%esp)
080d97fd +0x71:  call   080d793a <_ZN10BlueMarble12setUserStateEiN19BlueMarbleUserState1TE>  ; BlueMarble::setUserState(int, BlueMarbleUserState::T)
080d9802 +0x76:  jmp    080d9805 <+0x79>
080d9804 +0x78:  nop
080d9805 +0x79:  leave
080d9806 +0x7a:  ret
080d9807 +0x7b:  nop
```

## 反编译 C

```c
// BlueMarble::exitDungeon @ 0x80d978c

/* BlueMarble::exitDungeon(CUser*) */

void __thiscall BlueMarble::exitDungeon(BlueMarble *this,CUser *param_1)

{
  int iVar1;
  
  if (param_1 != (CUser *)0x0) {
    iVar1 = getUserSlot(this,param_1);
    if (iVar1 == -1) {
      LogManager::logFormat
                (1,"BlueMarble.cpp","void BlueMarble::exitDungeon(CUser*)",0x49d,
                 "BlueMarble::exitDungeon slot(%d)",0xffffffff);
    }
    else {
      setUserState(this,iVar1,1);
    }
  }
  return;
}
```
