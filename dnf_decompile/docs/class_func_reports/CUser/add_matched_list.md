# add_matched_list

`_ZN5CUser16add_matched_listERSt6vectorISt4pairIiiESaIS2_EEii`

`CUser::add_matched_list(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, int, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086650b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086650b2  _ZN5CUser16add_matched_listERSt6vectorISt4pairIiiESaIS2_EEii
#           CUser::add_matched_list(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, int, int)
# range [0x086650b2, 0x08665149]
086650b2 +0x00:  push   %ebp
086650b3 +0x01:  mov    %esp,%ebp
086650b5 +0x03:  sub    $0x28,%esp
086650b8 +0x06:  movl   $0x0,-0xc(%ebp)
086650bf +0x0d:  jmp    08665105 <+0x53>
086650c1 +0x0f:  mov    -0xc(%ebp),%eax
086650c4 +0x12:  mov    %eax,0x4(%esp)
086650c8 +0x16:  mov    0x8(%ebp),%eax
086650cb +0x19:  mov    %eax,(%esp)
086650ce +0x1c:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
086650d3 +0x21:  mov    (%eax),%edx
086650d5 +0x23:  mov    0xc(%ebp),%eax
086650d8 +0x26:  cmp    %eax,%edx
086650da +0x28:  sete   %al
086650dd +0x2b:  test   %al,%al
086650df +0x2d:  je     08665101 <+0x4f>
086650e1 +0x2f:  mov    -0xc(%ebp),%eax
086650e4 +0x32:  mov    %eax,0x4(%esp)
086650e8 +0x36:  mov    0x8(%ebp),%eax
086650eb +0x39:  mov    %eax,(%esp)
086650ee +0x3c:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
086650f3 +0x41:  mov    0x4(%eax),%ecx
086650f6 +0x44:  mov    0x10(%ebp),%edx
086650f9 +0x47:  lea    (%ecx,%edx,1),%edx
086650fc +0x4a:  mov    %edx,0x4(%eax)
086650ff +0x4d:  jmp    08665148 <+0x96>
08665101 +0x4f:  addl   $0x1,-0xc(%ebp)
08665105 +0x53:  mov    0x8(%ebp),%eax
08665108 +0x56:  mov    %eax,(%esp)
0866510b +0x59:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08665110 +0x5e:  cmp    -0xc(%ebp),%eax
08665113 +0x61:  seta   %al
08665116 +0x64:  test   %al,%al
08665118 +0x66:  jne    086650c1 <+0xf>
0866511a +0x68:  lea    -0x14(%ebp),%eax
0866511d +0x6b:  lea    0x10(%ebp),%edx
08665120 +0x6e:  mov    %edx,0x8(%esp)
08665124 +0x72:  lea    0xc(%ebp),%edx
08665127 +0x75:  mov    %edx,0x4(%esp)
0866512b +0x79:  mov    %eax,(%esp)
0866512e +0x7c:  call   081112b2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x7c4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x7c4
08665133 +0x81:  sub    $0x4,%esp
08665136 +0x84:  lea    -0x14(%ebp),%eax
08665139 +0x87:  mov    %eax,0x4(%esp)
0866513d +0x8b:  mov    0x8(%ebp),%eax
08665140 +0x8e:  mov    %eax,(%esp)
08665143 +0x91:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08665148 +0x96:  leave
08665149 +0x97:  ret
```

## 反编译 C

```c
// CUser::add_matched_list @ 0x86650b2

/* CUser::add_matched_list(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&,
   int, int) */

void CUser::add_matched_list(vector *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int local_18 [2];
  uint local_10;
  
  local_10 = 0;
  while( true ) {
    uVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1);
    if (uVar3 <= local_10) {
      std::make_pair<int&,int&>(local_18,&param_2);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1,
                 (pair *)local_18);
      return;
    }
    piVar1 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                               param_1,local_10);
    if (*piVar1 == param_2) break;
    local_10 = local_10 + 1;
  }
  iVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1,
                     local_10);
  *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + param_3;
  return;
}
```
