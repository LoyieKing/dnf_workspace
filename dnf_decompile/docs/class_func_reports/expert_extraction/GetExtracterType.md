# GetExtracterType

`_ZN17expert_extraction16GetExtracterTypeE20ENUM_EXPERT_JOB_TYPE`

`expert_extraction::GetExtracterType(ENUM_EXPERT_JOB_TYPE)`

| 类 | 地址 |
|---|---|
| `expert_extraction` | `0x084a2904` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a2904  _ZN17expert_extraction16GetExtracterTypeE20ENUM_EXPERT_JOB_TYPE
#           expert_extraction::GetExtracterType(ENUM_EXPERT_JOB_TYPE)
# range [0x084a2904, 0x084a2937]
084a2904 +0x00:  push   %ebp
084a2905 +0x01:  mov    %esp,%ebp
084a2907 +0x03:  mov    0x8(%ebp),%eax
084a290a +0x06:  cmp    $0x2,%eax
084a290d +0x09:  je     084a291b <+0x17>
084a290f +0x0b:  cmp    $0x4,%eax
084a2912 +0x0e:  je     084a2922 <+0x1e>
084a2914 +0x10:  cmp    $0x1,%eax
084a2917 +0x13:  je     084a2929 <+0x25>
084a2919 +0x15:  jmp    084a2930 <+0x2c>
084a291b +0x17:  mov    $0x0,%eax
084a2920 +0x1c:  jmp    084a2935 <+0x31>
084a2922 +0x1e:  mov    $0x2,%eax
084a2927 +0x23:  jmp    084a2935 <+0x31>
084a2929 +0x25:  mov    $0x1,%eax
084a292e +0x2a:  jmp    084a2935 <+0x31>
084a2930 +0x2c:  mov    $0x3,%eax
084a2935 +0x31:  pop    %ebp
084a2936 +0x32:  ret
084a2937 +0x33:  nop
```

## 反编译 C

```c
// expert_extraction::GetExtracterType @ 0x84a2904

/* expert_extraction::GetExtracterType(ENUM_EXPERT_JOB_TYPE) */

undefined4 expert_extraction::GetExtracterType(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 2) {
    uVar1 = 0;
  }
  else if (param_1 == 4) {
    uVar1 = 2;
  }
  else if (param_1 == 1) {
    uVar1 = 1;
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}
```
