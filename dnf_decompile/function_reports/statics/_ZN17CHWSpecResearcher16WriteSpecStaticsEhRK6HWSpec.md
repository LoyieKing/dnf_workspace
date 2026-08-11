# _ZN17CHWSpecResearcher16WriteSpecStaticsEhRK6HWSpec

`CHWSpecResearcher::WriteSpecStatics(unsigned char, HWSpec const&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8062ea2` | `0x14d` | `0x80676c0` | `0x170` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,96 +1,110 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x74,%esp
+sub    $0x78,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x5c(%ebp)
 cmpb   $0x2,-0x5c(%ebp)
-jbe    <T> <_ZN17CHWSpecResearcher16WriteSpecStaticsEhRK6HWSpec+0x56>
-movzbl -0x5c(%ebp),%ebx
+jbe    <T> <_ZN17CHWSpecResearcher16WriteSpecStaticsEhRK6HWSpec+0x55>
 movl   $0x27,0x8(%esp)
 movl   $"WriteSpecStatics",0x4(%esp)
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movzbl -0x5c(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CHWSpecResearcher::WriteSpecStatics Over db_type(%d)",0x8(%esp)
+movl   $"./log/HWSpec.log",0x4(%esp)
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CHWSpecResearcher16WriteSpecStaticsEhRK6HWSpec+0x16e>
+mov    0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CHWSpecResearcher::WriteSpecStatics Over db_type(%d)",0x8(%esp)
-movl   $"./log/HWSpec.log",0x4(%esp)
-lea    -0x44(%ebp),%eax
+call   <T> <_ZN12STSpecStaticC1ERK6HWSpec>
+movzbl -0x5c(%ebp),%edx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x3,%eax
+mov    %eax,%edx
+add    0x8(%ebp),%edx
+lea    -0x48(%ebp),%eax
+lea    -0x44(%ebp),%ecx
+mov    %ecx,0x8(%esp)
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CHWSpecResearcher16WriteSpecStaticsEhRK6HWSpec+0x148>
+call   <T> <_ZNSt3mapI12STSpecStaticjSt4lessIS0_ESaISt4pairIKS0_jEEE4findERS4_>
+sub    $0x4,%esp
 movzbl -0x5c(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x3,%eax
 add    0x8(%ebp),%eax
-mov    %eax,-0xc(%ebp)
-mov    0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12STSpecStaticC1ERK6HWSpec>
-lea    -0x54(%ebp),%eax
-lea    -0x50(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    -0xc(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapI12STSpecStaticjSt4lessIS0_ESaISt4pairIKS0_jEEE4findERS4_>
-sub    $0x4,%esp
-mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapI12STSpecStaticjSt4lessIS0_ESaISt4pairIKS0_jEEE5emptyEv>
 test   %al,%al
-jne    <T> <_ZN17CHWSpecResearcher16WriteSpecStaticsEhRK6HWSpec+0xd1>
-lea    -0x3c(%ebp),%eax
-mov    -0xc(%ebp),%edx
+jne    <T> <_ZN17CHWSpecResearcher16WriteSpecStaticsEhRK6HWSpec+0xe8>
+movzbl -0x5c(%ebp),%edx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x3,%eax
+mov    %eax,%edx
+add    0x8(%ebp),%edx
+lea    -0x38(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI12STSpecStaticjSt4lessIS0_ESaISt4pairIKS0_jEEE3endEv>
 sub    $0x4,%esp
-lea    -0x3c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK12STSpecStaticjEEeqERKS4_>
 test   %al,%al
-je     <T> <_ZN17CHWSpecResearcher16WriteSpecStaticsEhRK6HWSpec+0xd8>
+je     <T> <_ZN17CHWSpecResearcher16WriteSpecStaticsEhRK6HWSpec+0xef>
 mov    $0x1,%eax
-jmp    <T> <_ZN17CHWSpecResearcher16WriteSpecStaticsEhRK6HWSpec+0xdd>
+jmp    <T> <_ZN17CHWSpecResearcher16WriteSpecStaticsEhRK6HWSpec+0xf4>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN17CHWSpecResearcher16WriteSpecStaticsEhRK6HWSpec+0x134>
-movl   $0x1,-0x10(%ebp)
-lea    -0x20(%ebp),%eax
-lea    -0x10(%ebp),%edx
+je     <T> <_ZN17CHWSpecResearcher16WriteSpecStaticsEhRK6HWSpec+0x15a>
+movl   $0x1,-0xc(%ebp)
+lea    -0x1c(%ebp),%eax
+lea    -0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
-lea    -0x50(%ebp),%edx
+lea    -0x44(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIR12STSpecStaticiESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 sub    $0x4,%esp
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK12STSpecStaticjEC1IS0_iEEOS_IT_T0_E>
-lea    -0x38(%ebp),%eax
-lea    -0x30(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    -0xc(%ebp),%edx
+movzbl -0x5c(%ebp),%edx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x3,%eax
+mov    %eax,%edx
+add    0x8(%ebp),%edx
+lea    -0x34(%ebp),%eax
+lea    -0x2c(%ebp),%ecx
+mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI12STSpecStaticjSt4lessIS0_ESaISt4pairIKS0_jEEE6insertERKS5_>
 sub    $0x4,%esp
-jmp    <T> <_ZN17CHWSpecResearcher16WriteSpecStaticsEhRK6HWSpec+0x148>
-lea    -0x54(%ebp),%eax
+jmp    <T> <_ZN17CHWSpecResearcher16WriteSpecStaticsEhRK6HWSpec+0x16e>
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK12STSpecStaticjEEptEv>
 mov    0xc(%eax),%edx
 add    $0x1,%edx
 mov    %edx,0xc(%eax)
-mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CHWSpecResearcher::WriteSpecStatics(unsigned char, HWSpec const&) */

void __thiscall
CHWSpecResearcher::_ZN17CHWSpecResearcher16WriteSpecStaticsEhRK6HWSpec
          (CHWSpecResearcher *this,uchar param_1,HWSpec *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  STSpecStatic local_58 [4];
  STSpecStatic local_54 [12];
  CMyFileLog local_48 [8];
  map<STSpecStatic,unsigned_int,std::less<STSpecStatic>,std::allocator<std::pair<STSpecStatic_const,unsigned_int>>>
  local_40 [4];
  pair local_3c [8];
  pair<STSpecStatic_const,unsigned_int> local_34 [16];
  STSpecStatic local_24 [16];
  undefined4 local_14;
  CHWSpecResearcher *local_10;
  
  if (2 < param_1) {
    CMyFileLog::CMyFileLog(local_48,"WriteSpecStatics",0x27);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_48,"./log/HWSpec.log","CHWSpecResearcher::WriteSpecStatics Over db_type(%d)",
               (uint)param_1);
    return;
  }
  local_10 = this + (uint)param_1 * 0x18;
  STSpecStatic::STSpecStatic(local_54,param_2);
  std::
  map<STSpecStatic,unsigned_int,std::less<STSpecStatic>,std::allocator<std::pair<STSpecStatic_const,unsigned_int>>>
  ::find(local_58);
  cVar2 = std::
          map<STSpecStatic,unsigned_int,std::less<STSpecStatic>,std::allocator<std::pair<STSpecStatic_const,unsigned_int>>>
          ::empty((map<STSpecStatic,unsigned_int,std::less<STSpecStatic>,std::allocator<std::pair<STSpecStatic_const,unsigned_int>>>
                   *)local_10);
  if (cVar2 == '\0') {
    std::
    map<STSpecStatic,unsigned_int,std::less<STSpecStatic>,std::allocator<std::pair<STSpecStatic_const,unsigned_int>>>
    ::end(local_40);
    cVar2 = std::_Rb_tree_iterator<std::pair<STSpecStatic_const,unsigned_int>>::operator==
                      ((_Rb_tree_iterator<std::pair<STSpecStatic_const,unsigned_int>> *)local_58,
                       (_Rb_tree_iterator *)local_40);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_08062f7f;
    }
  }
  bVar1 = true;
LAB_08062f7f:
  if (bVar1) {
    local_14 = 1;
    std::make_pair<STSpecStatic&,int>(local_24,(int *)local_54);
    std::pair<STSpecStatic_const,unsigned_int>::pair<STSpecStatic,int>(local_34,local_24);
    std::
    map<STSpecStatic,unsigned_int,std::less<STSpecStatic>,std::allocator<std::pair<STSpecStatic_const,unsigned_int>>>
    ::insert(local_3c);
  }
  else {
    iVar3 = std::_Rb_tree_iterator<std::pair<STSpecStatic_const,unsigned_int>>::operator->
                      ((_Rb_tree_iterator<std::pair<STSpecStatic_const,unsigned_int>> *)local_58);
    *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + 1;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/HWSpecResearcher.cpp](source/DNFServer/GameServer/Statics/HWSpecResearcher.cpp)（约第 28 行）：

```cpp
void CHWSpecResearcher::WriteSpecStatics(unsigned char param, const HWSpec& spec)
{
    if (2 < param)
    {
        DNF_LOG_SCOPE_LINE(0x27, "./log/HWSpec.log", "CHWSpecResearcher::WriteSpecStatics Over db_type(%d)",
            (unsigned int)param);
        return;
    }
    STSpecStatic key(spec);
    std::map<STSpecStatic, unsigned int>::iterator it = m_spec[param].find(key);
    if (m_spec[param].empty() || it == m_spec[param].end())
    {
        m_spec[param].insert(std::make_pair(key, 1));
    }
    else
    {
        it->second += 1;
    }
}
```
