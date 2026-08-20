# get_give_skill

`_ZNK10CCharacter14get_give_skillEiiRSt6vectorISt4pairIiiESaIS2_EEj`

`CCharacter::get_give_skill(int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, unsigned int) const`

| 类 | 地址 |
|---|---|
| `CCharacter` | `0x08348798` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08348798  _ZNK10CCharacter14get_give_skillEiiRSt6vectorISt4pairIiiESaIS2_EEj
#           CCharacter::get_give_skill(int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, unsigned int) const
# range [0x08348798, 0x0834883d]
08348798 +0x00:  push   %ebp
08348799 +0x01:  mov    %esp,%ebp
0834879b +0x03:  sub    $0x28,%esp
0834879e +0x06:  cmpl   $0x0,0x18(%ebp)
083487a2 +0x0a:  jne    083487e5 <+0x4d>
083487a4 +0x0c:  mov    0x14(%ebp),%eax
083487a7 +0x0f:  mov    %eax,0x8(%esp)
083487ab +0x13:  mov    0xc(%ebp),%eax
083487ae +0x16:  mov    %eax,0x4(%esp)
083487b2 +0x1a:  mov    0x8(%ebp),%eax
083487b5 +0x1d:  mov    %eax,(%esp)
083487b8 +0x20:  call   083485d8 <_ZNK10CCharacter28get_give_skill_firstGrowtypeEiRSt6vectorISt4pairIiiESaIS2_EE>  ; CCharacter::get_give_skill_firstGrowtype(int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&) const
083487bd +0x25:  mov    %al,-0x9(%ebp)
083487c0 +0x28:  mov    0x14(%ebp),%eax
083487c3 +0x2b:  mov    %eax,0xc(%esp)
083487c7 +0x2f:  mov    0x10(%ebp),%eax
083487ca +0x32:  mov    %eax,0x8(%esp)
083487ce +0x36:  mov    0xc(%ebp),%eax
083487d1 +0x39:  mov    %eax,0x4(%esp)
083487d5 +0x3d:  mov    0x8(%ebp),%eax
083487d8 +0x40:  mov    %eax,(%esp)
083487db +0x43:  call   08348694 <_ZNK10CCharacter29get_give_skill_secondGrowtypeEiiRSt6vectorISt4pairIiiESaIS2_EE>  ; CCharacter::get_give_skill_secondGrowtype(int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&) const
083487e0 +0x48:  mov    %al,-0x9(%ebp)
083487e3 +0x4b:  jmp    08348838 <+0xa0>
083487e5 +0x4d:  cmpl   $0x1,0x18(%ebp)
083487e9 +0x51:  jne    08348809 <+0x71>
083487eb +0x53:  mov    0x14(%ebp),%eax
083487ee +0x56:  mov    %eax,0x8(%esp)
083487f2 +0x5a:  mov    0xc(%ebp),%eax
083487f5 +0x5d:  mov    %eax,0x4(%esp)
083487f9 +0x61:  mov    0x8(%ebp),%eax
083487fc +0x64:  mov    %eax,(%esp)
083487ff +0x67:  call   083485d8 <_ZNK10CCharacter28get_give_skill_firstGrowtypeEiRSt6vectorISt4pairIiiESaIS2_EE>  ; CCharacter::get_give_skill_firstGrowtype(int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&) const
08348804 +0x6c:  mov    %al,-0x9(%ebp)
08348807 +0x6f:  jmp    08348838 <+0xa0>
08348809 +0x71:  cmpl   $0x2,0x18(%ebp)
0834880d +0x75:  jne    08348834 <+0x9c>
0834880f +0x77:  mov    0x14(%ebp),%eax
08348812 +0x7a:  mov    %eax,0xc(%esp)
08348816 +0x7e:  mov    0x10(%ebp),%eax
08348819 +0x81:  mov    %eax,0x8(%esp)
0834881d +0x85:  mov    0xc(%ebp),%eax
08348820 +0x88:  mov    %eax,0x4(%esp)
08348824 +0x8c:  mov    0x8(%ebp),%eax
08348827 +0x8f:  mov    %eax,(%esp)
0834882a +0x92:  call   08348694 <_ZNK10CCharacter29get_give_skill_secondGrowtypeEiiRSt6vectorISt4pairIiiESaIS2_EE>  ; CCharacter::get_give_skill_secondGrowtype(int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&) const
0834882f +0x97:  mov    %al,-0x9(%ebp)
08348832 +0x9a:  jmp    08348838 <+0xa0>
08348834 +0x9c:  movb   $0x0,-0x9(%ebp)
08348838 +0xa0:  movzbl -0x9(%ebp),%eax
0834883c +0xa4:  leave
0834883d +0xa5:  ret
```

## 反编译 C

```c
// CCharacter::get_give_skill @ 0x8348798

/* CCharacter::get_give_skill(int, int, std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > >&, unsigned int) const */

undefined1 __thiscall
CCharacter::get_give_skill(CCharacter *this,int param_1,int param_2,vector *param_3,uint param_4)

{
  undefined1 local_d;
  
  if (param_4 == 0) {
    get_give_skill_firstGrowtype(this,param_1,param_3);
    local_d = get_give_skill_secondGrowtype(this,param_1,param_2,param_3);
  }
  else if (param_4 == 1) {
    local_d = get_give_skill_firstGrowtype(this,param_1,param_3);
  }
  else if (param_4 == 2) {
    local_d = get_give_skill_secondGrowtype(this,param_1,param_2,param_3);
  }
  else {
    local_d = 0;
  }
  return local_d;
}
```
