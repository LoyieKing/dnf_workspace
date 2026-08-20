# User_Teleport

`_ZN13User_TeleportC1Ev`

`User_Teleport::User_Teleport()`

| 类 | 地址 |
|---|---|
| `User_Teleport` | `0x08284142` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08284142  _ZN13User_TeleportC1Ev
#           User_Teleport::User_Teleport()
# range [0x08284142, 0x0828415d]
08284142 +0x00:  push   %ebp
08284143 +0x01:  mov    %esp,%ebp
08284145 +0x03:  sub    $0x18,%esp
08284148 +0x06:  mov    0x8(%ebp),%eax
0828414b +0x09:  mov    %eax,(%esp)
0828414e +0x0c:  call   08283c30 <_ZN8TeleportC1Ev>  ; Teleport::Teleport()
08284153 +0x11:  mov    0x8(%ebp),%eax
08284156 +0x14:  movl   $&_ZTV13User_Teleport+0x8,(%eax)
0828415c +0x1a:  leave
0828415d +0x1b:  ret
```

## 反编译 C

```c
// User_Teleport::User_Teleport @ 0x8284142

/* User_Teleport::User_Teleport() */

void __thiscall User_Teleport::User_Teleport(User_Teleport *this)

{
  Teleport::Teleport((Teleport *)this);
  *(undefined ***)this = &PTR__User_Teleport_08c0b218;
  return;
}
```
