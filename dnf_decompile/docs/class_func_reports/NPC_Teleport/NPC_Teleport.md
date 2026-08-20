# NPC_Teleport

`_ZN12NPC_TeleportC1Ev`

`NPC_Teleport::NPC_Teleport()`

| 类 | 地址 |
|---|---|
| `NPC_Teleport` | `0x082840da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082840da  _ZN12NPC_TeleportC1Ev
#           NPC_Teleport::NPC_Teleport()
# range [0x082840da, 0x082840f5]
082840da +0x00:  push   %ebp
082840db +0x01:  mov    %esp,%ebp
082840dd +0x03:  sub    $0x18,%esp
082840e0 +0x06:  mov    0x8(%ebp),%eax
082840e3 +0x09:  mov    %eax,(%esp)
082840e6 +0x0c:  call   08283c30 <_ZN8TeleportC1Ev>  ; Teleport::Teleport()
082840eb +0x11:  mov    0x8(%ebp),%eax
082840ee +0x14:  movl   $&_ZTV12NPC_Teleport+0x8,(%eax)
082840f4 +0x1a:  leave
082840f5 +0x1b:  ret
```

## 反编译 C

```c
// NPC_Teleport::NPC_Teleport @ 0x82840da

/* NPC_Teleport::NPC_Teleport() */

void __thiscall NPC_Teleport::NPC_Teleport(NPC_Teleport *this)

{
  Teleport::Teleport((Teleport *)this);
  *(undefined ***)this = &PTR__NPC_Teleport_08c0b230;
  return;
}
```
