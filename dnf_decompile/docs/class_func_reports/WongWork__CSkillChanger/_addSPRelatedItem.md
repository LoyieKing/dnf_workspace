# _addSPRelatedItem

`_ZN8WongWork13CSkillChanger17_addSPRelatedItemEPiS1_ii`

`WongWork::CSkillChanger::_addSPRelatedItem(int*, int*, int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CSkillChanger` | `0x0860a868` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860a868  _ZN8WongWork13CSkillChanger17_addSPRelatedItemEPiS1_ii
#           WongWork::CSkillChanger::_addSPRelatedItem(int*, int*, int, int)
# range [0x0860a868, 0x0860a917]
0860a868 +0x00:  push   %ebp
0860a869 +0x01:  mov    %esp,%ebp
0860a86b +0x03:  sub    $0x10,%esp
0860a86e +0x06:  cmpl   $0x407,0x14(%ebp)
0860a875 +0x0d:  jne    0860a88b <+0x23>
0860a877 +0x0f:  mov    0xc(%ebp),%eax
0860a87a +0x12:  mov    (%eax),%eax
0860a87c +0x14:  mov    %eax,%edx
0860a87e +0x16:  add    0x18(%ebp),%edx
0860a881 +0x19:  mov    0xc(%ebp),%eax
0860a884 +0x1c:  mov    %edx,(%eax)
0860a886 +0x1e:  jmp    0860a916 <+0xae>
0860a88b +0x23:  cmpl   $0x40e,0x14(%ebp)
0860a892 +0x2a:  jne    0860a8a5 <+0x3d>
0860a894 +0x2c:  mov    0x10(%ebp),%eax
0860a897 +0x2f:  mov    (%eax),%eax
0860a899 +0x31:  mov    %eax,%edx
0860a89b +0x33:  add    0x18(%ebp),%edx
0860a89e +0x36:  mov    0x10(%ebp),%eax
0860a8a1 +0x39:  mov    %edx,(%eax)
0860a8a3 +0x3b:  jmp    0860a916 <+0xae>
0860a8a5 +0x3d:  mov    0x8(%ebp),%eax
0860a8a8 +0x40:  movzbl 0x90(%eax),%eax
0860a8af +0x47:  test   %al,%al
0860a8b1 +0x49:  je     0860a916 <+0xae>
0860a8b3 +0x4b:  movl   $0x1,-0x4(%ebp)
0860a8ba +0x52:  jmp    0860a907 <+0x9f>
0860a8bc +0x54:  mov    -0x4(%ebp),%eax
0860a8bf +0x57:  mov    &_ZN8WongWork13CSkillChanger16g_nStatUpItemIdxE(,%eax,4),%eax
0860a8c6 +0x5e:  cmp    0x14(%ebp),%eax
0860a8c9 +0x61:  jne    0860a903 <+0x9b>
0860a8cb +0x63:  mov    -0x4(%ebp),%ecx
0860a8ce +0x66:  mov    -0x4(%ebp),%edx
0860a8d1 +0x69:  mov    0x8(%ebp),%eax
0860a8d4 +0x6c:  add    $0x10,%edx
0860a8d7 +0x6f:  mov    0x8(%eax,%edx,4),%eax
0860a8db +0x73:  mov    %eax,%edx
0860a8dd +0x75:  add    0x18(%ebp),%edx
0860a8e0 +0x78:  mov    0x8(%ebp),%eax
0860a8e3 +0x7b:  add    $0x10,%ecx
0860a8e6 +0x7e:  mov    %edx,0x8(%eax,%ecx,4)
0860a8ea +0x82:  mov    -0x4(%ebp),%ecx
0860a8ed +0x85:  mov    -0x4(%ebp),%eax
0860a8f0 +0x88:  mov    &_ZN8WongWork13CSkillChanger16g_nElixerAbilityE(,%eax,4),%edx
0860a8f7 +0x8f:  mov    0x8(%ebp),%eax
0860a8fa +0x92:  add    $0x18,%ecx
0860a8fd +0x95:  mov    %edx,0xc(%eax,%ecx,4)
0860a901 +0x99:  jmp    0860a916 <+0xae>
0860a903 +0x9b:  addl   $0x1,-0x4(%ebp)
0860a907 +0x9f:  mov    &_ZN8WongWork13CSkillChanger16g_nStatUpItemIdxE,%eax
0860a90c +0xa4:  cmp    -0x4(%ebp),%eax
0860a90f +0xa7:  setge  %al
0860a912 +0xaa:  test   %al,%al
0860a914 +0xac:  jne    0860a8bc <+0x54>
0860a916 +0xae:  leave
0860a917 +0xaf:  ret
```

## 反编译 C

```c
// WongWork::CSkillChanger::_addSPRelatedItem @ 0x860a868

/* WongWork::CSkillChanger::_addSPRelatedItem(int*, int*, int, int) */

void __thiscall
WongWork::CSkillChanger::_addSPRelatedItem
          (CSkillChanger *this,int *param_1,int *param_2,int param_3,int param_4)

{
  int local_8;
  
  if (param_3 == 0x407) {
    *param_1 = *param_1 + param_4;
  }
  else if (param_3 == 0x40e) {
    *param_2 = *param_2 + param_4;
  }
  else if (this[0x90] != (CSkillChanger)0x0) {
    for (local_8 = 1; local_8 <= g_nStatUpItemIdx; local_8 = local_8 + 1) {
      if ((&g_nStatUpItemIdx)[local_8] == param_3) {
        *(int *)(this + (local_8 + 0x10) * 4 + 8) =
             *(int *)(this + (local_8 + 0x10) * 4 + 8) + param_4;
        *(undefined4 *)(this + (local_8 + 0x18) * 4 + 0xc) =
             *(undefined4 *)(g_nElixerAbility + local_8 * 4);
        return;
      }
    }
  }
  return;
}
```
