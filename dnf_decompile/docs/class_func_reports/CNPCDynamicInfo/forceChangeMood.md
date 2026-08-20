# forceChangeMood

`_ZN15CNPCDynamicInfo15forceChangeMoodE13ENUM_NPC_MOOD`

`CNPCDynamicInfo::forceChangeMood(ENUM_NPC_MOOD)`

| 类 | 地址 |
|---|---|
| `CNPCDynamicInfo` | `0x0858053e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858053e  _ZN15CNPCDynamicInfo15forceChangeMoodE13ENUM_NPC_MOOD
#           CNPCDynamicInfo::forceChangeMood(ENUM_NPC_MOOD)
# range [0x0858053e, 0x08580583]
0858053e +0x00:  push   %ebp
0858053f +0x01:  mov    %esp,%ebp
08580541 +0x03:  sub    $0x18,%esp
08580544 +0x06:  mov    0x8(%ebp),%eax
08580547 +0x09:  mov    %eax,(%esp)
0858054a +0x0c:  call   08581910 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0xa2>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0xa2
0858054f +0x11:  cmp    0xc(%ebp),%eax
08580552 +0x14:  sete   %al
08580555 +0x17:  test   %al,%al
08580557 +0x19:  je     08580560 <+0x22>
08580559 +0x1b:  mov    $0x0,%eax
0858055e +0x20:  jmp    08580582 <+0x44>
08580560 +0x22:  movl   $0x1,0x4(%esp)
08580568 +0x2a:  mov    0x8(%ebp),%eax
0858056b +0x2d:  mov    %eax,(%esp)
0858056e +0x30:  call   085804b2 <_ZN15CNPCDynamicInfo10changeMoodEb>  ; CNPCDynamicInfo::changeMood(bool)
08580573 +0x35:  cmp    0xc(%ebp),%eax
08580576 +0x38:  setne  %al
08580579 +0x3b:  test   %al,%al
0858057b +0x3d:  jne    08580560 <+0x22>
0858057d +0x3f:  mov    $0x1,%eax
08580582 +0x44:  leave
08580583 +0x45:  ret
```

## 反编译 C

```c
// CNPCDynamicInfo::forceChangeMood @ 0x858053e

/* CNPCDynamicInfo::forceChangeMood(ENUM_NPC_MOOD) */

undefined4 __thiscall CNPCDynamicInfo::forceChangeMood(CNPCDynamicInfo *this,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = getMood(this);
  if (iVar1 == param_2) {
    uVar2 = 0;
  }
  else {
    do {
      iVar1 = changeMood(this,true);
    } while (iVar1 != param_2);
    uVar2 = 1;
  }
  return uVar2;
}
```
