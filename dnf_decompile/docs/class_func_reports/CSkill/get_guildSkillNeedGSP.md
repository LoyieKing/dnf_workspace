# get_guildSkillNeedGSP

`_ZNK6CSkill21get_guildSkillNeedGSPEi`

`CSkill::get_guildSkillNeedGSP(int) const`

| 类 | 地址 |
|---|---|
| `CSkill` | `0x083500f2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083500f2  _ZNK6CSkill21get_guildSkillNeedGSPEi
#           CSkill::get_guildSkillNeedGSP(int) const
# range [0x083500f2, 0x08350139]
083500f2 +0x00:  push   %ebp
083500f3 +0x01:  mov    %esp,%ebp
083500f5 +0x03:  sub    $0x18,%esp
083500f8 +0x06:  mov    0x8(%ebp),%eax
083500fb +0x09:  add    $0xe4,%eax
08350100 +0x0e:  mov    %eax,(%esp)
08350103 +0x11:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08350108 +0x16:  mov    0xc(%ebp),%edx
0835010b +0x19:  cmp    %edx,%eax
0835010d +0x1b:  setb   %al
08350110 +0x1e:  test   %al,%al
08350112 +0x20:  je     0835011b <+0x29>
08350114 +0x22:  mov    $0xffffffff,%eax
08350119 +0x27:  jmp    08350138 <+0x46>
0835011b +0x29:  mov    0xc(%ebp),%eax
0835011e +0x2c:  sub    $0x1,%eax
08350121 +0x2f:  mov    0x8(%ebp),%edx
08350124 +0x32:  add    $0xe4,%edx
0835012a +0x38:  mov    %eax,0x4(%esp)
0835012e +0x3c:  mov    %edx,(%esp)
08350131 +0x3f:  call   083878f6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x17396>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x17396
08350136 +0x44:  mov    (%eax),%eax
08350138 +0x46:  leave
08350139 +0x47:  ret
```

## 反编译 C

```c
// CSkill::get_guildSkillNeedGSP @ 0x83500f2

/* CSkill::get_guildSkillNeedGSP(int) const */

undefined4 __thiscall CSkill::get_guildSkillNeedGSP(CSkill *this,int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  uVar1 = std::vector<int,std::allocator<int>>::size
                    ((vector<int,std::allocator<int>> *)(this + 0xe4));
  if (uVar1 < (uint)param_1) {
    uVar2 = 0xffffffff;
  }
  else {
    puVar3 = (undefined4 *)
             std::vector<int,std::allocator<int>>::at
                       ((vector<int,std::allocator<int>> *)(this + 0xe4),param_1 - 1);
    uVar2 = *puVar3;
  }
  return uVar2;
}
```
