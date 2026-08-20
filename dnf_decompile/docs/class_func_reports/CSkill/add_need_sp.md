# add_need_sp

`_ZN6CSkill11add_need_spEi`

`CSkill::add_need_sp(int)`

| 类 | 地址 |
|---|---|
| `CSkill` | `0x0834ffe8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834ffe8  _ZN6CSkill11add_need_spEi
#           CSkill::add_need_sp(int)
# range [0x0834ffe8, 0x08350005]
0834ffe8 +0x00:  push   %ebp
0834ffe9 +0x01:  mov    %esp,%ebp
0834ffeb +0x03:  sub    $0x18,%esp
0834ffee +0x06:  mov    0x8(%ebp),%eax
0834fff1 +0x09:  lea    0x8(%eax),%edx
0834fff4 +0x0c:  lea    0xc(%ebp),%eax
0834fff7 +0x0f:  mov    %eax,0x4(%esp)
0834fffb +0x13:  mov    %edx,(%esp)
0834fffe +0x16:  call   0826cbae <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x147c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x147c
08350003 +0x1b:  leave
08350004 +0x1c:  ret
08350005 +0x1d:  nop
```

## 反编译 C

```c
// CSkill::add_need_sp @ 0x834ffe8

/* CSkill::add_need_sp(int) */

void CSkill::add_need_sp(int param_1)

{
  std::list<int,std::allocator<int>>::push_back
            ((list<int,std::allocator<int>> *)(param_1 + 8),(int *)&stack0x00000008);
  return;
}
```
