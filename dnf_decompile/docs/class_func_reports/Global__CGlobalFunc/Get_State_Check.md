# Get_State_Check

`_ZN6Global11CGlobalFunc15Get_State_CheckE8ch_state`

`Global::CGlobalFunc::Get_State_Check(ch_state)`

| 类 | 地址 |
|---|---|
| `Global::CGlobalFunc` | `0x081466f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081466f0  _ZN6Global11CGlobalFunc15Get_State_CheckE8ch_state
#           Global::CGlobalFunc::Get_State_Check(ch_state)
# range [0x081466f0, 0x08146721]
081466f0 +0x00:  push   %ebp
081466f1 +0x01:  mov    %esp,%ebp
081466f3 +0x03:  push   %ebx
081466f4 +0x04:  mov    0x8(%ebp),%eax
081466f7 +0x07:  cmp    $0xd,%eax
081466fa +0x0a:  ja     08146719 <+0x29>
081466fc +0x0c:  mov    $0x1,%edx
08146701 +0x11:  mov    %edx,%ebx
08146703 +0x13:  mov    %eax,%ecx
08146705 +0x15:  shl    %cl,%ebx
08146707 +0x17:  mov    %ebx,%eax
08146709 +0x19:  and    $0x3420,%eax
0814670e +0x1e:  test   %eax,%eax
08146710 +0x20:  je     08146719 <+0x29>
08146712 +0x22:  mov    $0x1,%eax
08146717 +0x27:  jmp    0814671e <+0x2e>
08146719 +0x29:  mov    $0x0,%eax
0814671e +0x2e:  pop    %ebx
0814671f +0x2f:  pop    %ebp
08146720 +0x30:  ret
08146721 +0x31:  nop
```

## 反编译 C

```c
// Global::CGlobalFunc::Get_State_Check @ 0x81466f0

/* Global::CGlobalFunc::Get_State_Check(ch_state) */

undefined4 Global::CGlobalFunc::Get_State_Check(uint param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0xe) && ((1 << ((byte)param_1 & 0x1f) & 0x3420U) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
