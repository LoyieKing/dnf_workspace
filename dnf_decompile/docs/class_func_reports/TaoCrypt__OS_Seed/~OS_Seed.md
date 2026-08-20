# ~OS_Seed

`_ZN8TaoCrypt7OS_SeedD1Ev`

`TaoCrypt::OS_Seed::~OS_Seed()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::OS_Seed` | `0x08767840` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08767840  _ZN8TaoCrypt7OS_SeedD1Ev
#           TaoCrypt::OS_Seed::~OS_Seed()
# range [0x08767840, 0x08767869]
08767840 +0x00:  push   %ebp
08767841 +0x01:  mov    %esp,%ebp
08767843 +0x03:  push   %ebx
08767844 +0x04:  sub    $0x14,%esp
08767847 +0x07:  mov    0x8(%ebp),%eax
0876784a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0876784f +0x0f:  add    $0xc05349,%ebx
08767855 +0x15:  mov    (%eax),%eax
08767857 +0x17:  mov    %eax,(%esp)
0876785a +0x1a:  call   0807d860 <_init+0x158>
0876785f +0x1f:  add    $0x14,%esp
08767862 +0x22:  pop    %ebx
08767863 +0x23:  pop    %ebp
08767864 +0x24:  ret
08767865 +0x25:  nop
08767866 +0x26:  lea    0x0(%esi),%esi
08767869 +0x29:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::OS_Seed::~OS_Seed @ 0x8767840

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::OS_Seed::~OS_Seed() */

void __thiscall TaoCrypt::OS_Seed::~OS_Seed(OS_Seed *this)

{
  close(*(int *)this);
  return;
}
```
