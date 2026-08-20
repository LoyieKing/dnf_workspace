# _reset

`_ZN16CItemMakingSkill6_resetEv`

`CItemMakingSkill::_reset()`

| 类 | 地址 |
|---|---|
| `CItemMakingSkill` | `0x085453ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085453ba  _ZN16CItemMakingSkill6_resetEv
#           CItemMakingSkill::_reset()
# range [0x085453ba, 0x085453df]
085453ba +0x00:  push   %ebp
085453bb +0x01:  mov    %esp,%ebp
085453bd +0x03:  sub    $0x18,%esp
085453c0 +0x06:  mov    0x8(%ebp),%eax
085453c3 +0x09:  add    $0x6,%eax
085453c6 +0x0c:  movl   $0x16,0x8(%esp)
085453ce +0x14:  movl   $0x0,0x4(%esp)
085453d6 +0x1c:  mov    %eax,(%esp)
085453d9 +0x1f:  call   0807dcc0 <_init+0x5b8>
085453de +0x24:  leave
085453df +0x25:  ret
```

## 反编译 C

```c
// CItemMakingSkill::_reset @ 0x85453ba

/* CItemMakingSkill::_reset() */

void __thiscall CItemMakingSkill::_reset(CItemMakingSkill *this)

{
  memset(this + 6,0,0x16);
  return;
}
```
