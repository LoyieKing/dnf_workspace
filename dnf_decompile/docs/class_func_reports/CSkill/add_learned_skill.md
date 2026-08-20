# add_learned_skill

`_ZN6CSkill17add_learned_skillE10_pre_skill`

`CSkill::add_learned_skill(_pre_skill)`

| 类 | 地址 |
|---|---|
| `CSkill` | `0x0834ffca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834ffca  _ZN6CSkill17add_learned_skillE10_pre_skill
#           CSkill::add_learned_skill(_pre_skill)
# range [0x0834ffca, 0x0834ffe7]
0834ffca +0x00:  push   %ebp
0834ffcb +0x01:  mov    %esp,%ebp
0834ffcd +0x03:  sub    $0x18,%esp
0834ffd0 +0x06:  mov    0x8(%ebp),%eax
0834ffd3 +0x09:  lea    0x18(%eax),%edx
0834ffd6 +0x0c:  lea    0xc(%ebp),%eax
0834ffd9 +0x0f:  mov    %eax,0x4(%esp)
0834ffdd +0x13:  mov    %edx,(%esp)
0834ffe0 +0x16:  call   0838f450 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1eef0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1eef0
0834ffe5 +0x1b:  leave
0834ffe6 +0x1c:  ret
0834ffe7 +0x1d:  nop
```

## 反编译 C

```c
// CSkill::add_learned_skill @ 0x834ffca

/* CSkill::add_learned_skill(_pre_skill) */

void CSkill::add_learned_skill(int param_1)

{
  std::list<_pre_skill,std::allocator<_pre_skill>>::push_back
            ((list<_pre_skill,std::allocator<_pre_skill>> *)(param_1 + 0x18),&stack0x00000008);
  return;
}
```
