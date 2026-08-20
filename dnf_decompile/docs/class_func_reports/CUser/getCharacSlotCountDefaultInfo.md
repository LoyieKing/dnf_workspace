# getCharacSlotCountDefaultInfo

`_ZN5CUser29getCharacSlotCountDefaultInfoEv`

`CUser::getCharacSlotCountDefaultInfo()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868b4fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868b4fc  _ZN5CUser29getCharacSlotCountDefaultInfoEv
#           CUser::getCharacSlotCountDefaultInfo()
# range [0x0868b4fc, 0x0868b551]
0868b4fc +0x00:  push   %ebp
0868b4fd +0x01:  mov    %esp,%ebp
0868b4ff +0x03:  sub    $0x8,%esp
0868b502 +0x06:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0868b507 +0x0b:  mov    0x1a8(%eax),%eax
0868b50d +0x11:  cmp    $0x1,%eax
0868b510 +0x14:  je     0868b519 <+0x1d>
0868b512 +0x16:  cmp    $0x2,%eax
0868b515 +0x19:  je     0868b520 <+0x24>
0868b517 +0x1b:  jmp    0868b527 <+0x2b>
0868b519 +0x1d:  mov    $0x1,%eax
0868b51e +0x22:  jmp    0868b54f <+0x53>
0868b520 +0x24:  mov    $0x3,%eax
0868b525 +0x29:  jmp    0868b54f <+0x53>
0868b527 +0x2b:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0868b52c +0x30:  mov    0x378(%eax),%eax
0868b532 +0x36:  cmp    $0x5,%eax
0868b535 +0x39:  je     0868b543 <+0x47>
0868b537 +0x3b:  cmp    $0xb,%eax
0868b53a +0x3e:  jne    0868b54a <+0x4e>
0868b53c +0x40:  mov    $0x18,%eax
0868b541 +0x45:  jmp    0868b54f <+0x53>
0868b543 +0x47:  mov    $0x18,%eax
0868b548 +0x4c:  jmp    0868b54f <+0x53>
0868b54a +0x4e:  mov    $0x11,%eax
0868b54f +0x53:  leave
0868b550 +0x54:  ret
0868b551 +0x55:  nop
```

## 反编译 C

```c
// CUser::getCharacSlotCountDefaultInfo @ 0x868b4fc

/* CUser::getCharacSlotCountDefaultInfo() */

undefined4 CUser::getCharacSlotCountDefaultInfo(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = G_CEnvironment();
  if (*(int *)(iVar1 + 0x1a8) == 1) {
    uVar2 = 1;
  }
  else if (*(int *)(iVar1 + 0x1a8) == 2) {
    uVar2 = 3;
  }
  else {
    iVar1 = G_CEnvironment();
    if (*(int *)(iVar1 + 0x378) == 5) {
      uVar2 = 0x18;
    }
    else if (*(int *)(iVar1 + 0x378) == 0xb) {
      uVar2 = 0x18;
    }
    else {
      uVar2 = 0x11;
    }
  }
  return uVar2;
}
```
