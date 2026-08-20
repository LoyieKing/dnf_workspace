# ~ComboSkill

`_ZN10ComboSkillD1Ev`

`ComboSkill::~ComboSkill()`

| 类 | 地址 |
|---|---|
| `ComboSkill` | `0x080e9d26` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e9d26  _ZN10ComboSkillD1Ev
#           ComboSkill::~ComboSkill()
# range [0x080e9d26, 0x080e9d6b]
080e9d26 +0x00:  push   %ebp
080e9d27 +0x01:  mov    %esp,%ebp
080e9d29 +0x03:  push   %esi
080e9d2a +0x04:  push   %ebx
080e9d2b +0x05:  sub    $0x10,%esp
080e9d2e +0x08:  mov    0x8(%ebp),%eax
080e9d31 +0x0b:  add    $0x15,%eax
080e9d34 +0x0e:  mov    %eax,(%esp)
080e9d37 +0x11:  call   080ea3e4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x1d>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x1d
080e9d3c +0x16:  jmp    080e9d59 <+0x33>
080e9d3e +0x18:  mov    %edx,%ebx
080e9d40 +0x1a:  mov    %eax,%esi
080e9d42 +0x1c:  mov    0x8(%ebp),%eax
080e9d45 +0x1f:  mov    %eax,(%esp)
080e9d48 +0x22:  call   080ea3e4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x1d>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x1d
080e9d4d +0x27:  mov    %esi,%eax
080e9d4f +0x29:  mov    %ebx,%edx
080e9d51 +0x2b:  mov    %eax,(%esp)
080e9d54 +0x2e:  call   08ae3750 <_Unwind_Resume>
080e9d59 +0x33:  mov    0x8(%ebp),%eax
080e9d5c +0x36:  mov    %eax,(%esp)
080e9d5f +0x39:  call   080ea3e4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x1d>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x1d
080e9d64 +0x3e:  add    $0x10,%esp
080e9d67 +0x41:  pop    %ebx
080e9d68 +0x42:  pop    %esi
080e9d69 +0x43:  pop    %ebp
080e9d6a +0x44:  ret
080e9d6b +0x45:  nop
```

## 反编译 C

```c
// ComboSkill::~ComboSkill @ 0x80e9d26

/* ComboSkill::~ComboSkill() */

void __thiscall ComboSkill::~ComboSkill(ComboSkill *this)

{
                    /* try { // try from 080e9d37 to 080e9d3b has its CatchHandler @ 080e9d3e */
  std::
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  ::~map((map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
          *)(this + 0x15));
  std::
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  ::~map((map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
          *)this);
  return;
}
```
