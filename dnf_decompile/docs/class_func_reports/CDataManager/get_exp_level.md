# get_exp_level

`_ZNK12CDataManager13get_exp_levelEi`

`CDataManager::get_exp_level(int) const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08360470` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08360470  _ZNK12CDataManager13get_exp_levelEi
#           CDataManager::get_exp_level(int) const
# range [0x08360470, 0x083604b5]
08360470 +0x00:  push   %ebp
08360471 +0x01:  mov    %esp,%ebp
08360473 +0x03:  sub    $0x18,%esp
08360476 +0x06:  movl   $0x1,-0x4(%ebp)
0836047d +0x0d:  jmp    0836049f <+0x2f>
0836047f +0x0f:  mov    -0x4(%ebp),%eax
08360482 +0x12:  mov    %eax,0x4(%esp)
08360486 +0x16:  mov    0x8(%ebp),%eax
08360489 +0x19:  mov    %eax,(%esp)
0836048c +0x1c:  call   08360442 <_ZNK12CDataManager13get_level_expEi>  ; CDataManager::get_level_exp(int) const
08360491 +0x21:  cmp    0xc(%ebp),%eax
08360494 +0x24:  setg   %al
08360497 +0x27:  test   %al,%al
08360499 +0x29:  jne    083604ac <+0x3c>
0836049b +0x2b:  addl   $0x1,-0x4(%ebp)
0836049f +0x2f:  cmpl   $0x63,-0x4(%ebp)
083604a3 +0x33:  setle  %al
083604a6 +0x36:  test   %al,%al
083604a8 +0x38:  jne    0836047f <+0xf>
083604aa +0x3a:  jmp    083604ad <+0x3d>
083604ac +0x3c:  nop
083604ad +0x3d:  mov    -0x4(%ebp),%eax
083604b0 +0x40:  sub    $0x1,%eax
083604b3 +0x43:  leave
083604b4 +0x44:  ret
083604b5 +0x45:  nop
```

## 反编译 C

```c
// CDataManager::get_exp_level @ 0x8360470

/* CDataManager::get_exp_level(int) const */

int __thiscall CDataManager::get_exp_level(CDataManager *this,int param_1)

{
  int iVar1;
  int local_8;
  
  local_8 = 1;
  while ((local_8 < 100 && (iVar1 = get_level_exp(this,local_8), iVar1 <= param_1))) {
    local_8 = local_8 + 1;
  }
  return local_8 + -1;
}
```
