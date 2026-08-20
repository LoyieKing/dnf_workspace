# Init

`_ZN17Secu_HackLogCheck4InitEP5CUser`

`Secu_HackLogCheck::Init(CUser*)`

| 类 | 地址 |
|---|---|
| `Secu_HackLogCheck` | `0x0827a7d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827a7d0  _ZN17Secu_HackLogCheck4InitEP5CUser
#           Secu_HackLogCheck::Init(CUser*)
# range [0x0827a7d0, 0x0827a7f3]
0827a7d0 +0x00:  push   %ebp
0827a7d1 +0x01:  mov    %esp,%ebp
0827a7d3 +0x03:  sub    $0x18,%esp
0827a7d6 +0x06:  mov    0x8(%ebp),%eax
0827a7d9 +0x09:  mov    0xc(%ebp),%edx
0827a7dc +0x0c:  mov    %edx,0x34(%eax)
0827a7df +0x0f:  mov    0x8(%ebp),%eax
0827a7e2 +0x12:  mov    0xc(%ebp),%edx
0827a7e5 +0x15:  mov    %edx,0x4(%esp)
0827a7e9 +0x19:  mov    %eax,(%esp)
0827a7ec +0x1c:  call   0827abec <_ZN17Secu_MonsterCheck10SetUserPtrEP5CUser>  ; Secu_MonsterCheck::SetUserPtr(CUser*)
0827a7f1 +0x21:  leave
0827a7f2 +0x22:  ret
0827a7f3 +0x23:  nop
```

## 反编译 C

```c
// Secu_HackLogCheck::Init @ 0x827a7d0

/* Secu_HackLogCheck::Init(CUser*) */

void __thiscall Secu_HackLogCheck::Init(Secu_HackLogCheck *this,CUser *param_1)

{
  *(CUser **)(this + 0x34) = param_1;
  Secu_MonsterCheck::SetUserPtr((Secu_MonsterCheck *)this,param_1);
  return;
}
```
