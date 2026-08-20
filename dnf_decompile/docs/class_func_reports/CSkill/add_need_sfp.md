# add_need_sfp

`_ZN6CSkill12add_need_sfpEi`

`CSkill::add_need_sfp(int)`

| 类 | 地址 |
|---|---|
| `CSkill` | `0x08350006` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08350006  _ZN6CSkill12add_need_sfpEi
#           CSkill::add_need_sfp(int)
# range [0x08350006, 0x08350023]
08350006 +0x00:  push   %ebp
08350007 +0x01:  mov    %esp,%ebp
08350009 +0x03:  sub    $0x18,%esp
0835000c +0x06:  mov    0x8(%ebp),%eax
0835000f +0x09:  lea    0x10(%eax),%edx
08350012 +0x0c:  lea    0xc(%ebp),%eax
08350015 +0x0f:  mov    %eax,0x4(%esp)
08350019 +0x13:  mov    %edx,(%esp)
0835001c +0x16:  call   0826cbae <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x147c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x147c
08350021 +0x1b:  leave
08350022 +0x1c:  ret
08350023 +0x1d:  nop
```

## 反编译 C

```c
// CSkill::add_need_sfp @ 0x8350006

/* CSkill::add_need_sfp(int) */

void CSkill::add_need_sfp(int param_1)

{
  std::list<int,std::allocator<int>>::push_back
            ((list<int,std::allocator<int>> *)(param_1 + 0x10),(int *)&stack0x00000008);
  return;
}
```
