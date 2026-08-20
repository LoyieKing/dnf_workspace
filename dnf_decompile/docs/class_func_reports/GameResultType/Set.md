# Set

`_ZN14GameResultType3SetERKS_`

`GameResultType::Set(GameResultType const&)`

| 类 | 地址 |
|---|---|
| `GameResultType` | `0x084b741c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b741c  _ZN14GameResultType3SetERKS_
#           GameResultType::Set(GameResultType const&)
# range [0x084b741c, 0x084b7441]
084b741c +0x00:  push   %ebp
084b741d +0x01:  mov    %esp,%ebp
084b741f +0x03:  push   %edi
084b7420 +0x04:  push   %esi
084b7421 +0x05:  push   %ebx
084b7422 +0x06:  mov    0x8(%ebp),%edx
084b7425 +0x09:  mov    0xc(%ebp),%eax
084b7428 +0x0c:  mov    %eax,%ebx
084b742a +0x0e:  mov    $0x14,%eax
084b742f +0x13:  mov    %edx,%edi
084b7431 +0x15:  mov    %ebx,%esi
084b7433 +0x17:  mov    %eax,%ecx
084b7435 +0x19:  rep movsl %ds:(%esi),%es:(%edi)
084b7437 +0x1b:  mov    $0x1,%eax
084b743c +0x20:  pop    %ebx
084b743d +0x21:  pop    %esi
084b743e +0x22:  pop    %edi
084b743f +0x23:  pop    %ebp
084b7440 +0x24:  ret
084b7441 +0x25:  nop
```

## 反编译 C

```c
// GameResultType::Set @ 0x84b741c

/* GameResultType::Set(GameResultType const&) */

undefined4 __thiscall GameResultType::Set(GameResultType *this,GameResultType *param_1)

{
  int iVar1;
  
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)this = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    this = this + 4;
  }
  return 1;
}
```
