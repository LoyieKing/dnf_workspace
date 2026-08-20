# punish_check_by_ARS

`_ZN4ARAD12PUNISH_CHECK19punish_check_by_ARSEP14SIG_LOGIN_DATAli`

`ARAD::PUNISH_CHECK::punish_check_by_ARS(SIG_LOGIN_DATA*, long, int)`

| 类 | 地址 |
|---|---|
| `ARAD::PUNISH_CHECK` | `0x08196d51` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08196d51  _ZN4ARAD12PUNISH_CHECK19punish_check_by_ARSEP14SIG_LOGIN_DATAli
#           ARAD::PUNISH_CHECK::punish_check_by_ARS(SIG_LOGIN_DATA*, long, int)
# range [0x08196d51, 0x08196d87]
08196d51 +0x00:  push   %ebp
08196d52 +0x01:  mov    %esp,%ebp
08196d54 +0x03:  cmpl   $0x1,0x10(%ebp)
08196d58 +0x07:  jne    08196d81 <+0x30>
08196d5a +0x09:  mov    0x8(%ebp),%eax
08196d5d +0x0c:  movl   $0x4,0xb8(%eax)
08196d67 +0x16:  cmpl   $0x0,0xc(%ebp)
08196d6b +0x1a:  jne    08196d7a <+0x29>
08196d6d +0x1c:  mov    0x8(%ebp),%eax
08196d70 +0x1f:  movl   $0x3eb,0xb8(%eax)
08196d7a +0x29:  mov    $0x0,%eax
08196d7f +0x2e:  jmp    08196d86 <+0x35>
08196d81 +0x30:  mov    $0x1,%eax
08196d86 +0x35:  pop    %ebp
08196d87 +0x36:  ret
```

## 反编译 C

```c
// ARAD::PUNISH_CHECK::punish_check_by_ARS @ 0x8196d51

/* ARAD::PUNISH_CHECK::punish_check_by_ARS(SIG_LOGIN_DATA*, long, int) */

undefined4 ARAD::PUNISH_CHECK::punish_check_by_ARS(SIG_LOGIN_DATA *param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 1) {
    *(undefined4 *)(param_1 + 0xb8) = 4;
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0xb8) = 0x3eb;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
