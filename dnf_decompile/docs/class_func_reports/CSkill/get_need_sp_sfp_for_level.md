# get_need_sp_sfp_for_level

`_ZNK6CSkill25get_need_sp_sfp_for_levelEii`

`CSkill::get_need_sp_sfp_for_level(int, int) const`

| 类 | 地址 |
|---|---|
| `CSkill` | `0x0835027c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0835027c  _ZNK6CSkill25get_need_sp_sfp_for_levelEii
#           CSkill::get_need_sp_sfp_for_level(int, int) const
# range [0x0835027c, 0x083502c7]
0835027c +0x00:  push   %ebp
0835027d +0x01:  mov    %esp,%ebp
0835027f +0x03:  sub    $0x18,%esp
08350282 +0x06:  mov    0x8(%ebp),%eax
08350285 +0x09:  mov    %eax,(%esp)
08350288 +0x0c:  call   0822b5b2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc5c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc5c
0835028d +0x11:  test   %al,%al
0835028f +0x13:  je     083502ac <+0x30>
08350291 +0x15:  mov    0x10(%ebp),%eax
08350294 +0x18:  mov    %eax,0x8(%esp)
08350298 +0x1c:  mov    0xc(%ebp),%eax
0835029b +0x1f:  mov    %eax,0x4(%esp)
0835029f +0x23:  mov    0x8(%ebp),%eax
083502a2 +0x26:  mov    %eax,(%esp)
083502a5 +0x29:  call   083501a6 <_ZNK6CSkill22get_need_sfp_for_levelEii>  ; CSkill::get_need_sfp_for_level(int, int) const
083502aa +0x2e:  jmp    083502c5 <+0x49>
083502ac +0x30:  mov    0x10(%ebp),%eax
083502af +0x33:  mov    %eax,0x8(%esp)
083502b3 +0x37:  mov    0xc(%ebp),%eax
083502b6 +0x3a:  mov    %eax,0x4(%esp)
083502ba +0x3e:  mov    0x8(%ebp),%eax
083502bd +0x41:  mov    %eax,(%esp)
083502c0 +0x44:  call   083502c8 <_ZNK6CSkill21get_need_sp_for_levelEii>  ; CSkill::get_need_sp_for_level(int, int) const
083502c5 +0x49:  leave
083502c6 +0x4a:  ret
083502c7 +0x4b:  nop
```

## 反编译 C

```c
// CSkill::get_need_sp_sfp_for_level @ 0x835027c

/* CSkill::get_need_sp_sfp_for_level(int, int) const */

void __thiscall CSkill::get_need_sp_sfp_for_level(CSkill *this,int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = IsSpecialSkill(this);
  if (cVar1 == '\0') {
    get_need_sp_for_level(this,param_1,param_2);
  }
  else {
    get_need_sfp_for_level(this,param_1,param_2);
  }
  return;
}
```
