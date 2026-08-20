# get_additional_item

`_ZN10expert_job19get_additional_itemERKSt6vectorI16stItemSelectRateSaIS1_EEiRS1_i`

`expert_job::get_additional_item(std::vector<stItemSelectRate, std::allocator<stItemSelectRate> > const&, int, stItemSelectRate&, int)`

| 类 | 地址 |
|---|---|
| `expert_job` | `0x0896d6ab` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0896d6ab  _ZN10expert_job19get_additional_itemERKSt6vectorI16stItemSelectRateSaIS1_EEiRS1_i
#           expert_job::get_additional_item(std::vector<stItemSelectRate, std::allocator<stItemSelectRate> > const&, int, stItemSelectRate&, int)
# range [0x0896d6ab, 0x0896d75c]
0896d6ab +0x00:  push   %ebp
0896d6ac +0x01:  mov    %esp,%ebp
0896d6ae +0x03:  sub    $0x28,%esp
0896d6b1 +0x06:  lea    -0xc(%ebp),%eax
0896d6b4 +0x09:  mov    0x8(%ebp),%edx
0896d6b7 +0x0c:  mov    %edx,0x4(%esp)
0896d6bb +0x10:  mov    %eax,(%esp)
0896d6be +0x13:  call   0896fbb6 <_GLOBAL__I_g_expertJobScriptBaseDirectory+0x2006>  ; global constructors keyed to g_expertJobScriptBaseDirectory+0x2006
0896d6c3 +0x18:  sub    $0x4,%esp
0896d6c6 +0x1b:  lea    -0x10(%ebp),%eax
0896d6c9 +0x1e:  mov    0x8(%ebp),%edx
0896d6cc +0x21:  mov    %edx,0x4(%esp)
0896d6d0 +0x25:  mov    %eax,(%esp)
0896d6d3 +0x28:  call   0896fbe2 <_GLOBAL__I_g_expertJobScriptBaseDirectory+0x2032>  ; global constructors keyed to g_expertJobScriptBaseDirectory+0x2032
0896d6d8 +0x2d:  sub    $0x4,%esp
0896d6db +0x30:  jmp    0896d742 <+0x97>
0896d6dd +0x32:  lea    -0xc(%ebp),%eax
0896d6e0 +0x35:  mov    %eax,(%esp)
0896d6e3 +0x38:  call   0896fc50 <_GLOBAL__I_g_expertJobScriptBaseDirectory+0x20a0>  ; global constructors keyed to g_expertJobScriptBaseDirectory+0x20a0
0896d6e8 +0x3d:  mov    0x10(%ebp),%edx
0896d6eb +0x40:  mov    (%eax),%ecx
0896d6ed +0x42:  mov    %ecx,(%edx)
0896d6ef +0x44:  mov    0x4(%eax),%ecx
0896d6f2 +0x47:  mov    %ecx,0x4(%edx)
0896d6f5 +0x4a:  mov    0x8(%eax),%ecx
0896d6f8 +0x4d:  mov    %ecx,0x8(%edx)
0896d6fb +0x50:  mov    0xc(%eax),%ecx
0896d6fe +0x53:  mov    %ecx,0xc(%edx)
0896d701 +0x56:  mov    0x10(%eax),%eax
0896d704 +0x59:  mov    %eax,0x10(%edx)
0896d707 +0x5c:  mov    0x10(%ebp),%eax
0896d70a +0x5f:  mov    0xc(%eax),%eax
0896d70d +0x62:  cmp    0x14(%ebp),%eax
0896d710 +0x65:  jg     0896d733 <+0x88>
0896d712 +0x67:  mov    0x10(%ebp),%eax
0896d715 +0x6a:  mov    0x10(%eax),%eax
0896d718 +0x6d:  cmp    0x14(%ebp),%eax
0896d71b +0x70:  jl     0896d736 <+0x8b>
0896d71d +0x72:  mov    0x10(%ebp),%eax
0896d720 +0x75:  mov    0x4(%eax),%eax
0896d723 +0x78:  cmp    0xc(%ebp),%eax
0896d726 +0x7b:  jge    0896d75a <+0xaf>
0896d728 +0x7d:  mov    0x10(%ebp),%eax
0896d72b +0x80:  mov    0x4(%eax),%eax
0896d72e +0x83:  sub    %eax,0xc(%ebp)
0896d731 +0x86:  jmp    0896d737 <+0x8c>
0896d733 +0x88:  nop
0896d734 +0x89:  jmp    0896d737 <+0x8c>
0896d736 +0x8b:  nop
0896d737 +0x8c:  lea    -0xc(%ebp),%eax
0896d73a +0x8f:  mov    %eax,(%esp)
0896d73d +0x92:  call   0896fc3a <_GLOBAL__I_g_expertJobScriptBaseDirectory+0x208a>  ; global constructors keyed to g_expertJobScriptBaseDirectory+0x208a
0896d742 +0x97:  lea    -0x10(%ebp),%eax
0896d745 +0x9a:  mov    %eax,0x4(%esp)
0896d749 +0x9e:  lea    -0xc(%ebp),%eax
0896d74c +0xa1:  mov    %eax,(%esp)
0896d74f +0xa4:  call   0896fc0e <_GLOBAL__I_g_expertJobScriptBaseDirectory+0x205e>  ; global constructors keyed to g_expertJobScriptBaseDirectory+0x205e
0896d754 +0xa9:  test   %al,%al
0896d756 +0xab:  jne    0896d6dd <+0x32>
0896d758 +0xad:  jmp    0896d75b <+0xb0>
0896d75a +0xaf:  nop
0896d75b +0xb0:  leave
0896d75c +0xb1:  ret
```

## 反编译 C

```c
// expert_job::get_additional_item @ 0x896d6ab

/* expert_job::get_additional_item(std::vector<stItemSelectRate, std::allocator<stItemSelectRate> >
   const&, int, stItemSelectRate&, int) */

void expert_job::get_additional_item
               (vector *param_1,int param_2,stItemSelectRate *param_3,int param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  __normal_iterator local_14 [4];
  __normal_iterator<stItemSelectRate_const*,std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>>
  local_10 [12];
  
  std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>::begin();
  std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>::end();
  do {
    bVar1 = __gnu_cxx::operator!=(local_10,local_14);
    if (!bVar1) {
      return;
    }
    puVar2 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<stItemSelectRate_const*,std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>>
             ::operator*(local_10);
    *(undefined4 *)param_3 = *puVar2;
    *(undefined4 *)(param_3 + 4) = puVar2[1];
    *(undefined4 *)(param_3 + 8) = puVar2[2];
    *(undefined4 *)(param_3 + 0xc) = puVar2[3];
    *(undefined4 *)(param_3 + 0x10) = puVar2[4];
    if ((*(int *)(param_3 + 0xc) <= param_4) && (param_4 <= *(int *)(param_3 + 0x10))) {
      if (param_2 <= *(int *)(param_3 + 4)) {
        return;
      }
      param_2 = param_2 - *(int *)(param_3 + 4);
    }
    __gnu_cxx::
    __normal_iterator<stItemSelectRate_const*,std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>>
    ::operator++(local_10);
  } while( true );
}
```
