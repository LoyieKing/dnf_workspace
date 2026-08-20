# get_guildSkillNeedGold

`_ZNK6CSkill22get_guildSkillNeedGoldEi`

`CSkill::get_guildSkillNeedGold(int) const`

| 类 | 地址 |
|---|---|
| `CSkill` | `0x0835013a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0835013a  _ZNK6CSkill22get_guildSkillNeedGoldEi
#           CSkill::get_guildSkillNeedGold(int) const
# range [0x0835013a, 0x08350181]
0835013a +0x00:  push   %ebp
0835013b +0x01:  mov    %esp,%ebp
0835013d +0x03:  sub    $0x18,%esp
08350140 +0x06:  mov    0x8(%ebp),%eax
08350143 +0x09:  add    $0xf0,%eax
08350148 +0x0e:  mov    %eax,(%esp)
0835014b +0x11:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08350150 +0x16:  mov    0xc(%ebp),%edx
08350153 +0x19:  cmp    %edx,%eax
08350155 +0x1b:  setb   %al
08350158 +0x1e:  test   %al,%al
0835015a +0x20:  je     08350163 <+0x29>
0835015c +0x22:  mov    $0xffffffff,%eax
08350161 +0x27:  jmp    08350180 <+0x46>
08350163 +0x29:  mov    0xc(%ebp),%eax
08350166 +0x2c:  sub    $0x1,%eax
08350169 +0x2f:  mov    0x8(%ebp),%edx
0835016c +0x32:  add    $0xf0,%edx
08350172 +0x38:  mov    %eax,0x4(%esp)
08350176 +0x3c:  mov    %edx,(%esp)
08350179 +0x3f:  call   083878f6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x17396>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x17396
0835017e +0x44:  mov    (%eax),%eax
08350180 +0x46:  leave
08350181 +0x47:  ret
```

## 反编译 C

```c
// CSkill::get_guildSkillNeedGold @ 0x835013a

/* CSkill::get_guildSkillNeedGold(int) const */

undefined4 __thiscall CSkill::get_guildSkillNeedGold(CSkill *this,int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  uVar1 = std::vector<int,std::allocator<int>>::size
                    ((vector<int,std::allocator<int>> *)(this + 0xf0));
  if (uVar1 < (uint)param_1) {
    uVar2 = 0xffffffff;
  }
  else {
    puVar3 = (undefined4 *)
             std::vector<int,std::allocator<int>>::at
                       ((vector<int,std::allocator<int>> *)(this + 0xf0),param_1 - 1);
    uVar2 = *puVar3;
  }
  return uVar2;
}
```
