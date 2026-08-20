# IsUsableEmoticons

`_ZN12CDataManager17IsUsableEmoticonsERK5CUserRKSt6vectorIiSaIiEE`

`CDataManager::IsUsableEmoticons(CUser const&, std::vector<int, std::allocator<int> > const&)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x0835fc9a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0835fc9a  _ZN12CDataManager17IsUsableEmoticonsERK5CUserRKSt6vectorIiSaIiEE
#           CDataManager::IsUsableEmoticons(CUser const&, std::vector<int, std::allocator<int> > const&)
# range [0x0835fc9a, 0x0835fd81]
0835fc9a +0x00:  push   %ebp
0835fc9b +0x01:  mov    %esp,%ebp
0835fc9d +0x03:  push   %edi
0835fc9e +0x04:  push   %esi
0835fc9f +0x05:  push   %ebx
0835fca0 +0x06:  sub    $0x2c,%esp
0835fca3 +0x09:  mov    0x8(%ebp),%ebx
0835fca6 +0x0c:  mov    %ebx,%eax
0835fca8 +0x0e:  mov    %eax,(%esp)
0835fcab +0x11:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0835fcb0 +0x16:  mov    0xc(%ebp),%eax
0835fcb3 +0x19:  mov    0x28(%eax),%eax
0835fcb6 +0x1c:  test   %eax,%eax
0835fcb8 +0x1e:  je     0835fd75 <+0xdb>
0835fcbe +0x24:  movl   $0x0,-0x1c(%ebp)
0835fcc5 +0x2b:  jmp    0835fd40 <+0xa6>
0835fcc7 +0x2d:  mov    -0x1c(%ebp),%eax
0835fcca +0x30:  mov    %eax,0x4(%esp)
0835fcce +0x34:  mov    0x14(%ebp),%eax
0835fcd1 +0x37:  mov    %eax,(%esp)
0835fcd4 +0x3a:  call   080ea574 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x1ad>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x1ad
0835fcd9 +0x3f:  mov    (%eax),%edx
0835fcdb +0x41:  mov    0xc(%ebp),%eax
0835fcde +0x44:  mov    0x28(%eax),%eax
0835fce1 +0x47:  mov    %edx,0x4(%esp)
0835fce5 +0x4b:  mov    %eax,(%esp)
0835fce8 +0x4e:  call   080e581c <_ZN21CChattingEmoticonList13find_emoticonEi>  ; CChattingEmoticonList::find_emoticon(int)
0835fced +0x53:  mov    %eax,-0x20(%ebp)
0835fcf0 +0x56:  cmpl   $0x0,-0x20(%ebp)
0835fcf4 +0x5a:  je     0835fd38 <+0x9e>
0835fcf6 +0x5c:  mov    -0x20(%ebp),%eax
0835fcf9 +0x5f:  mov    (%eax),%eax
0835fcfb +0x61:  add    $0x8,%eax
0835fcfe +0x64:  mov    (%eax),%edx
0835fd00 +0x66:  mov    0x10(%ebp),%eax
0835fd03 +0x69:  mov    %eax,0x4(%esp)
0835fd07 +0x6d:  mov    -0x20(%ebp),%eax
0835fd0a +0x70:  mov    %eax,(%esp)
0835fd0d +0x73:  call   *%edx
0835fd0f +0x75:  xor    $0x1,%eax
0835fd12 +0x78:  test   %al,%al
0835fd14 +0x7a:  jne    0835fd3b <+0xa1>
0835fd16 +0x7c:  mov    -0x1c(%ebp),%eax
0835fd19 +0x7f:  mov    %eax,0x4(%esp)
0835fd1d +0x83:  mov    0x14(%ebp),%eax
0835fd20 +0x86:  mov    %eax,(%esp)
0835fd23 +0x89:  call   080ea574 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x1ad>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x1ad
0835fd28 +0x8e:  mov    %ebx,%edx
0835fd2a +0x90:  mov    %eax,0x4(%esp)
0835fd2e +0x94:  mov    %edx,(%esp)
0835fd31 +0x97:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
0835fd36 +0x9c:  jmp    0835fd3c <+0xa2>
0835fd38 +0x9e:  nop
0835fd39 +0x9f:  jmp    0835fd3c <+0xa2>
0835fd3b +0xa1:  nop
0835fd3c +0xa2:  addl   $0x1,-0x1c(%ebp)
0835fd40 +0xa6:  mov    0x14(%ebp),%eax
0835fd43 +0xa9:  mov    %eax,(%esp)
0835fd46 +0xac:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0835fd4b +0xb1:  cmp    -0x1c(%ebp),%eax
0835fd4e +0xb4:  seta   %al
0835fd51 +0xb7:  test   %al,%al
0835fd53 +0xb9:  jne    0835fcc7 <+0x2d>
0835fd59 +0xbf:  jmp    0835fd76 <+0xdc>
0835fd5b +0xc1:  mov    %edx,%esi
0835fd5d +0xc3:  mov    %eax,%edi
0835fd5f +0xc5:  mov    %ebx,%eax
0835fd61 +0xc7:  mov    %eax,(%esp)
0835fd64 +0xca:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0835fd69 +0xcf:  mov    %edi,%eax
0835fd6b +0xd1:  mov    %esi,%edx
0835fd6d +0xd3:  mov    %eax,(%esp)
0835fd70 +0xd6:  call   08ae3750 <_Unwind_Resume>
0835fd75 +0xdb:  nop
0835fd76 +0xdc:  mov    %ebx,%eax
0835fd78 +0xde:  mov    %ebx,%eax
0835fd7a +0xe0:  add    $0x2c,%esp
0835fd7d +0xe3:  pop    %ebx
0835fd7e +0xe4:  pop    %esi
0835fd7f +0xe5:  pop    %edi
0835fd80 +0xe6:  pop    %ebp
0835fd81 +0xe7:  ret    $0x4
```

## 反编译 C

```c
// CDataManager::IsUsableEmoticons @ 0x835fc9a

/* CDataManager::IsUsableEmoticons(CUser const&, std::vector<int, std::allocator<int> > const&) */

CUser * CDataManager::IsUsableEmoticons(CUser *param_1,vector *param_2)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  undefined4 in_stack_0000000c;
  vector<int,std::allocator<int>> *in_stack_00000010;
  uint local_20;
  
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)param_1);
  if (*(int *)(param_2 + 0x28) != 0) {
    for (local_20 = 0; uVar3 = std::vector<int,std::allocator<int>>::size(in_stack_00000010),
        local_20 < uVar3; local_20 = local_20 + 1) {
      std::vector<int,std::allocator<int>>::operator[](in_stack_00000010,local_20);
                    /* try { // try from 0835fce8 to 0835fd35 has its CatchHandler @ 0835fd5b */
      piVar2 = (int *)CChattingEmoticonList::find_emoticon(*(int *)(param_2 + 0x28));
      if ((piVar2 != (int *)0x0) &&
         (cVar1 = (**(code **)(*piVar2 + 8))(piVar2,in_stack_0000000c), cVar1 == '\x01')) {
        piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[](in_stack_00000010,local_20)
        ;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)param_1,piVar2);
      }
    }
  }
  return param_1;
}
```
