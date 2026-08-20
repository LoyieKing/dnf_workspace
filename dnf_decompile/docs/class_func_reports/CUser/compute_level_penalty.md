# compute_level_penalty

`_ZN5CUser21compute_level_penaltyEi`

`CUser::compute_level_penalty(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866e3a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866e3a8  _ZN5CUser21compute_level_penaltyEi
#           CUser::compute_level_penalty(int)
# range [0x0866e3a8, 0x0866e3e1]
0866e3a8 +0x00:  push   %ebp
0866e3a9 +0x01:  mov    %esp,%ebp
0866e3ab +0x03:  sub    $0x8,%esp
0866e3ae +0x06:  cmpl   $0x6,0xc(%ebp)
0866e3b2 +0x0a:  jle    0866e3c7 <+0x1f>
0866e3b4 +0x0c:  cmpl   $0xb,0xc(%ebp)
0866e3b8 +0x10:  jg     0866e3c7 <+0x1f>
0866e3ba +0x12:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866e3bf +0x17:  mov    0x8ce0(%eax),%eax
0866e3c5 +0x1d:  jmp    0866e3df <+0x37>
0866e3c7 +0x1f:  cmpl   $0xb,0xc(%ebp)
0866e3cb +0x23:  jle    0866e3da <+0x32>
0866e3cd +0x25:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866e3d2 +0x2a:  mov    0x8ce4(%eax),%eax
0866e3d8 +0x30:  jmp    0866e3df <+0x37>
0866e3da +0x32:  mov    $0x64,%eax
0866e3df +0x37:  leave
0866e3e0 +0x38:  ret
0866e3e1 +0x39:  nop
```

## 反编译 C

```c
// CUser::compute_level_penalty @ 0x866e3a8

/* CUser::compute_level_penalty(int) */

undefined4 __thiscall CUser::compute_level_penalty(CUser *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 < 7) || (0xb < param_1)) {
    if (param_1 < 0xc) {
      uVar2 = 100;
    }
    else {
      iVar1 = G_CDataManager();
      uVar2 = *(undefined4 *)(iVar1 + 0x8ce4);
    }
  }
  else {
    iVar1 = G_CDataManager();
    uVar2 = *(undefined4 *)(iVar1 + 0x8ce0);
  }
  return uVar2;
}
```
