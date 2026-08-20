# punish_check_by_WEB

`_ZN4ARAD12PUNISH_CHECK19punish_check_by_WEBEP14SIG_LOGIN_DATAli`

`ARAD::PUNISH_CHECK::punish_check_by_WEB(SIG_LOGIN_DATA*, long, int)`

| 类 | 地址 |
|---|---|
| `ARAD::PUNISH_CHECK` | `0x08196d1a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08196d1a  _ZN4ARAD12PUNISH_CHECK19punish_check_by_WEBEP14SIG_LOGIN_DATAli
#           ARAD::PUNISH_CHECK::punish_check_by_WEB(SIG_LOGIN_DATA*, long, int)
# range [0x08196d1a, 0x08196d50]
08196d1a +0x00:  push   %ebp
08196d1b +0x01:  mov    %esp,%ebp
08196d1d +0x03:  cmpl   $0x1,0x10(%ebp)
08196d21 +0x07:  jne    08196d4a <+0x30>
08196d23 +0x09:  mov    0x8(%ebp),%eax
08196d26 +0x0c:  movl   $0x4,0xb8(%eax)
08196d30 +0x16:  cmpl   $0x0,0xc(%ebp)
08196d34 +0x1a:  jne    08196d43 <+0x29>
08196d36 +0x1c:  mov    0x8(%ebp),%eax
08196d39 +0x1f:  movl   $0x3e9,0xb8(%eax)
08196d43 +0x29:  mov    $0x0,%eax
08196d48 +0x2e:  jmp    08196d4f <+0x35>
08196d4a +0x30:  mov    $0x1,%eax
08196d4f +0x35:  pop    %ebp
08196d50 +0x36:  ret
```

## 反编译 C

```c
// ARAD::PUNISH_CHECK::punish_check_by_WEB @ 0x8196d1a

/* ARAD::PUNISH_CHECK::punish_check_by_WEB(SIG_LOGIN_DATA*, long, int) */

undefined4 ARAD::PUNISH_CHECK::punish_check_by_WEB(SIG_LOGIN_DATA *param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 1) {
    *(undefined4 *)(param_1 + 0xb8) = 4;
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0xb8) = 0x3e9;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
