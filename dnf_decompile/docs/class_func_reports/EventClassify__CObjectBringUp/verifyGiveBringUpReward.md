# verifyGiveBringUpReward

`_ZN13EventClassify14CObjectBringUp23verifyGiveBringUpRewardERN19ObjectBringUpScript17ObjectBringUpRuleEi`

`EventClassify::CObjectBringUp::verifyGiveBringUpReward(ObjectBringUpScript::ObjectBringUpRule&, int)`

| 类 | 地址 |
|---|---|
| `EventClassify::CObjectBringUp` | `0x0810fe1a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810fe1a  _ZN13EventClassify14CObjectBringUp23verifyGiveBringUpRewardERN19ObjectBringUpScript17ObjectBringUpRuleEi
#           EventClassify::CObjectBringUp::verifyGiveBringUpReward(ObjectBringUpScript::ObjectBringUpRule&, int)
# range [0x0810fe1a, 0x0810fe8f]
0810fe1a +0x00:  push   %ebp
0810fe1b +0x01:  mov    %esp,%ebp
0810fe1d +0x03:  sub    $0x4,%esp
0810fe20 +0x06:  mov    0xc(%ebp),%eax
0810fe23 +0x09:  mov    0x8(%eax),%eax
0810fe26 +0x0c:  test   %eax,%eax
0810fe28 +0x0e:  jne    0810fe42 <+0x28>
0810fe2a +0x10:  mov    0xc(%ebp),%eax
0810fe2d +0x13:  mov    (%eax),%eax
0810fe2f +0x15:  cmp    0x10(%ebp),%eax
0810fe32 +0x18:  jne    0810fe3b <+0x21>
0810fe34 +0x1a:  mov    $0x1,%eax
0810fe39 +0x1f:  jmp    0810fe8e <+0x74>
0810fe3b +0x21:  mov    $0x0,%eax
0810fe40 +0x26:  jmp    0810fe8e <+0x74>
0810fe42 +0x28:  mov    0xc(%ebp),%eax
0810fe45 +0x2b:  mov    (%eax),%eax
0810fe47 +0x2d:  cmp    0x10(%ebp),%eax
0810fe4a +0x30:  jg     0810fe89 <+0x6f>
0810fe4c +0x32:  mov    0xc(%ebp),%eax
0810fe4f +0x35:  mov    0x4(%eax),%eax
0810fe52 +0x38:  cmp    0x10(%ebp),%eax
0810fe55 +0x3b:  jge    0810fe61 <+0x47>
0810fe57 +0x3d:  mov    0xc(%ebp),%eax
0810fe5a +0x40:  mov    0x4(%eax),%eax
0810fe5d +0x43:  test   %eax,%eax
0810fe5f +0x45:  jne    0810fe89 <+0x6f>
0810fe61 +0x47:  mov    0xc(%ebp),%eax
0810fe64 +0x4a:  mov    (%eax),%eax
0810fe66 +0x4c:  mov    0x10(%ebp),%edx
0810fe69 +0x4f:  sub    %eax,%edx
0810fe6b +0x51:  mov    0xc(%ebp),%eax
0810fe6e +0x54:  mov    0x8(%eax),%eax
0810fe71 +0x57:  mov    %eax,-0x4(%ebp)
0810fe74 +0x5a:  mov    %edx,%eax
0810fe76 +0x5c:  sar    $0x1f,%edx
0810fe79 +0x5f:  idivl  -0x4(%ebp)
0810fe7c +0x62:  mov    %edx,%eax
0810fe7e +0x64:  test   %eax,%eax
0810fe80 +0x66:  jne    0810fe89 <+0x6f>
0810fe82 +0x68:  mov    $0x1,%eax
0810fe87 +0x6d:  jmp    0810fe8e <+0x74>
0810fe89 +0x6f:  mov    $0x0,%eax
0810fe8e +0x74:  leave
0810fe8f +0x75:  ret
```

## 反编译 C

```c
// EventClassify::CObjectBringUp::verifyGiveBringUpReward @ 0x810fe1a

/* EventClassify::CObjectBringUp::verifyGiveBringUpReward(ObjectBringUpScript::ObjectBringUpRule&,
   int) */

undefined4 __thiscall
EventClassify::CObjectBringUp::verifyGiveBringUpReward
          (CObjectBringUp *this,ObjectBringUpRule *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    if (*(int *)param_1 == param_2) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else if ((param_2 < *(int *)param_1) ||
          (((*(int *)(param_1 + 4) < param_2 && (*(int *)(param_1 + 4) != 0)) ||
           ((param_2 - *(int *)param_1) % *(int *)(param_1 + 8) != 0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
