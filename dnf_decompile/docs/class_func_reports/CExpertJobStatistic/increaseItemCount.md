# increaseItemCount

`_ZN19CExpertJobStatistic17increaseItemCountE20ENUM_EXPERT_JOB_TYPEmi`

`CExpertJobStatistic::increaseItemCount(ENUM_EXPERT_JOB_TYPE, unsigned long, int)`

| 类 | 地址 |
|---|---|
| `CExpertJobStatistic` | `0x0860f9d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860f9d4  _ZN19CExpertJobStatistic17increaseItemCountE20ENUM_EXPERT_JOB_TYPEmi
#           CExpertJobStatistic::increaseItemCount(ENUM_EXPERT_JOB_TYPE, unsigned long, int)
# range [0x0860f9d4, 0x0860fac9]
0860f9d4 +0x00:  push   %ebp
0860f9d5 +0x01:  mov    %esp,%ebp
0860f9d7 +0x03:  push   %ebx
0860f9d8 +0x04:  sub    $0x54,%esp
0860f9db +0x07:  mov    0x10(%ebp),%eax
0860f9de +0x0a:  mov    %eax,0x8(%esp)
0860f9e2 +0x0e:  mov    0xc(%ebp),%eax
0860f9e5 +0x11:  mov    %eax,0x4(%esp)
0860f9e9 +0x15:  lea    -0x3c(%ebp),%eax
0860f9ec +0x18:  mov    %eax,(%esp)
0860f9ef +0x1b:  call   08610720 <_GLOBAL__I__ZN10StatisticsC2Ev+0x79e>  ; global constructors keyed to Statistics::Statistics()+0x79e
0860f9f4 +0x20:  mov    0x8(%ebp),%edx
0860f9f7 +0x23:  lea    -0x40(%ebp),%eax
0860f9fa +0x26:  lea    -0x3c(%ebp),%ecx
0860f9fd +0x29:  mov    %ecx,0x8(%esp)
0860fa01 +0x2d:  mov    %edx,0x4(%esp)
0860fa05 +0x31:  mov    %eax,(%esp)
0860fa08 +0x34:  call   08611bdc <_GLOBAL__I__ZN10StatisticsC2Ev+0x1c5a>  ; global constructors keyed to Statistics::Statistics()+0x1c5a
0860fa0d +0x39:  sub    $0x4,%esp
0860fa10 +0x3c:  mov    0x8(%ebp),%edx
0860fa13 +0x3f:  lea    -0x34(%ebp),%eax
0860fa16 +0x42:  mov    %edx,0x4(%esp)
0860fa1a +0x46:  mov    %eax,(%esp)
0860fa1d +0x49:  call   08611c08 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1c86>  ; global constructors keyed to Statistics::Statistics()+0x1c86
0860fa22 +0x4e:  sub    $0x4,%esp
0860fa25 +0x51:  lea    -0x34(%ebp),%eax
0860fa28 +0x54:  mov    %eax,0x4(%esp)
0860fa2c +0x58:  lea    -0x40(%ebp),%eax
0860fa2f +0x5b:  mov    %eax,(%esp)
0860fa32 +0x5e:  call   08611c2e <_GLOBAL__I__ZN10StatisticsC2Ev+0x1cac>  ; global constructors keyed to Statistics::Statistics()+0x1cac
0860fa37 +0x63:  test   %al,%al
0860fa39 +0x65:  je     0860fa61 <+0x8d>
0860fa3b +0x67:  lea    -0x40(%ebp),%eax
0860fa3e +0x6a:  mov    %eax,(%esp)
0860fa41 +0x6d:  call   08611c42 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1cc0>  ; global constructors keyed to Statistics::Statistics()+0x1cc0
0860fa46 +0x72:  mov    %eax,%ebx
0860fa48 +0x74:  lea    -0x40(%ebp),%eax
0860fa4b +0x77:  mov    %eax,(%esp)
0860fa4e +0x7a:  call   08611c42 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1cc0>  ; global constructors keyed to Statistics::Statistics()+0x1cc0
0860fa53 +0x7f:  mov    0x8(%eax),%edx
0860fa56 +0x82:  mov    0x14(%ebp),%eax
0860fa59 +0x85:  lea    (%edx,%eax,1),%eax
0860fa5c +0x88:  mov    %eax,0x8(%ebx)
0860fa5f +0x8b:  jmp    0860fac4 <+0xf0>
0860fa61 +0x8d:  mov    0x10(%ebp),%eax
0860fa64 +0x90:  mov    %eax,0x8(%esp)
0860fa68 +0x94:  mov    0xc(%ebp),%eax
0860fa6b +0x97:  mov    %eax,0x4(%esp)
0860fa6f +0x9b:  lea    -0x10(%ebp),%eax
0860fa72 +0x9e:  mov    %eax,(%esp)
0860fa75 +0xa1:  call   08610720 <_GLOBAL__I__ZN10StatisticsC2Ev+0x79e>  ; global constructors keyed to Statistics::Statistics()+0x79e
0860fa7a +0xa6:  lea    -0x1c(%ebp),%eax
0860fa7d +0xa9:  lea    0x14(%ebp),%edx
0860fa80 +0xac:  mov    %edx,0x8(%esp)
0860fa84 +0xb0:  lea    -0x10(%ebp),%edx
0860fa87 +0xb3:  mov    %edx,0x4(%esp)
0860fa8b +0xb7:  mov    %eax,(%esp)
0860fa8e +0xba:  call   08611c4f <_GLOBAL__I__ZN10StatisticsC2Ev+0x1ccd>  ; global constructors keyed to Statistics::Statistics()+0x1ccd
0860fa93 +0xbf:  sub    $0x4,%esp
0860fa96 +0xc2:  lea    -0x1c(%ebp),%eax
0860fa99 +0xc5:  mov    %eax,0x4(%esp)
0860fa9d +0xc9:  lea    -0x28(%ebp),%eax
0860faa0 +0xcc:  mov    %eax,(%esp)
0860faa3 +0xcf:  call   08611c8e <_GLOBAL__I__ZN10StatisticsC2Ev+0x1d0c>  ; global constructors keyed to Statistics::Statistics()+0x1d0c
0860faa8 +0xd4:  mov    0x8(%ebp),%edx
0860faab +0xd7:  lea    -0x30(%ebp),%eax
0860faae +0xda:  lea    -0x28(%ebp),%ecx
0860fab1 +0xdd:  mov    %ecx,0x8(%esp)
0860fab5 +0xe1:  mov    %edx,0x4(%esp)
0860fab9 +0xe5:  mov    %eax,(%esp)
0860fabc +0xe8:  call   08611cca <_GLOBAL__I__ZN10StatisticsC2Ev+0x1d48>  ; global constructors keyed to Statistics::Statistics()+0x1d48
0860fac1 +0xed:  sub    $0x4,%esp
0860fac4 +0xf0:  mov    -0x4(%ebp),%ebx
0860fac7 +0xf3:  leave
0860fac8 +0xf4:  ret
0860fac9 +0xf5:  nop
```

## 反编译 C

```c
// CExpertJobStatistic::increaseItemCount @ 0x860f9d4

/* CExpertJobStatistic::increaseItemCount(ENUM_EXPERT_JOB_TYPE, unsigned long, int) */

void __thiscall
CExpertJobStatistic::increaseItemCount
          (undefined4 this,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ExpertJobKey local_44 [4];
  ExpertJobKey local_40 [8];
  map<CExpertJobStatistic::ExpertJobKey,int,std::less<CExpertJobStatistic::ExpertJobKey>,std::allocator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>>
  local_38 [4];
  pair local_34 [8];
  pair<CExpertJobStatistic::ExpertJobKey_const,int> local_2c [12];
  ExpertJobKey local_20 [12];
  ExpertJobKey local_14 [12];
  
  ExpertJobKey::ExpertJobKey(local_40,param_2,param_3);
  std::
  map<CExpertJobStatistic::ExpertJobKey,int,std::less<CExpertJobStatistic::ExpertJobKey>,std::allocator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>>
  ::find(local_44);
  std::
  map<CExpertJobStatistic::ExpertJobKey,int,std::less<CExpertJobStatistic::ExpertJobKey>,std::allocator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>>
  ::end(local_38);
  cVar1 = std::_Rb_tree_iterator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>::operator!=
                    ((_Rb_tree_iterator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>> *)
                     local_44,(_Rb_tree_iterator *)local_38);
  if (cVar1 == '\0') {
    ExpertJobKey::ExpertJobKey(local_14,param_2,param_3);
    std::make_pair<CExpertJobStatistic::ExpertJobKey,int&>(local_20,(int *)local_14);
    std::pair<CExpertJobStatistic::ExpertJobKey_const,int>::
    pair<CExpertJobStatistic::ExpertJobKey,int>(local_2c,local_20);
    std::
    map<CExpertJobStatistic::ExpertJobKey,int,std::less<CExpertJobStatistic::ExpertJobKey>,std::allocator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>>
    ::insert(local_34);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>::
            operator->((_Rb_tree_iterator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>> *)
                       local_44);
    iVar3 = std::_Rb_tree_iterator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>::
            operator->((_Rb_tree_iterator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>> *)
                       local_44);
    *(int *)(iVar2 + 8) = *(int *)(iVar3 + 8) + param_4;
  }
  return;
}
```
