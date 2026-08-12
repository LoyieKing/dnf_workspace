# _ZN12CUserManager14GetSchoolCountEjPjRh

`CUserManager::GetSchoolCount(unsigned int, unsigned int*, unsigned char&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80724c6` | `0x227` | `0x808bbfc` | `0x21f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,152 +1,146 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
-push   %esi
 push   %ebx
-sub    $0x6c,%esp
+sub    $0x64,%esp
 mov    0x8(%ebp),%edx
-lea    -0x48(%ebp),%eax
+lea    -0x28(%ebp),%eax
 lea    0xc(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKjS_IhjSt4lessIhESaISt4pairIKhjEEES1_IS0_ESaIS3_IS0_S7_EEE4findERS0_>
 sub    $0x4,%esp
 mov    0xc(%ebp),%ebx
 movl   $0x418,0x8(%esp)
 movl   $&_ZZN12CUserManager14GetSchoolCountEjPjRhE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"GetSchoolCount(%u)",0x8(%esp)
 movl   $"./log/School",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%edx
-lea    -0x3c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKjS_IhjSt4lessIhESaISt4pairIKhjEEES1_IS0_ESaIS3_IS0_S7_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x3c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt3mapIhjSt4lessIhESaIS0_IKhjEEEEEneERKSA_>
 test   %al,%al
-je     <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0x21c>
-movl   $0x0,-0x24(%ebp)
-movl   $0x0,-0x20(%ebp)
-lea    -0x48(%ebp),%eax
+je     <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0x21a>
+movl   $0x0,-0x14(%ebp)
+movl   $0x0,-0x10(%ebp)
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt3mapIhjSt4lessIhESaIS0_IKhjEEEEEptEv>
 add    $0x4,%eax
-mov    %eax,-0x1c(%ebp)
-lea    -0x4c(%ebp),%eax
-mov    -0x1c(%ebp),%edx
+mov    %eax,-0xc(%ebp)
+lea    -0x34(%ebp),%eax
+mov    -0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIhjSt4lessIhESaISt4pairIKhjEEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0x17b>
-mov    -0x24(%ebp),%eax
+jmp    <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0x179>
+mov    -0x14(%ebp),%eax
 shl    $0x2,%eax
 mov    %eax,%ebx
 add    0x10(%ebp),%ebx
-lea    -0x4c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKhjEEptEv>
 movzbl (%eax),%eax
 movzbl %al,%eax
 mov    %eax,(%ebx)
-addl   $0x1,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
+addl   $0x1,-0x14(%ebp)
+mov    -0x14(%ebp),%eax
 shl    $0x2,%eax
 mov    %eax,%ebx
 add    0x10(%ebp),%ebx
-lea    -0x4c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKhjEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,(%ebx)
-addl   $0x1,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
+addl   $0x1,-0x14(%ebp)
+movl   $0x423,0x8(%esp)
+movl   $&_ZZN12CUserManager14GetSchoolCountEjPjRhE12__FUNCTION__,0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x14(%ebp),%eax
 sub    $0x1,%eax
 shl    $0x2,%eax
 add    0x10(%ebp),%eax
-mov    (%eax),%edi
-mov    -0x24(%ebp),%eax
+mov    (%eax),%ecx
+mov    -0x14(%ebp),%eax
 sub    $0x2,%eax
 shl    $0x2,%eax
 add    0x10(%ebp),%eax
-mov    (%eax),%esi
-mov    0xc(%ebp),%ebx
-movl   $0x423,0x8(%esp)
-movl   $&_ZZN12CUserManager14GetSchoolCountEjPjRhE12__FUNCTION__,0x4(%esp)
+mov    (%eax),%edx
+mov    0xc(%ebp),%eax
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
+movl   $"GetSchoolCount(%u) channelNo(%u) Count(%u)",0x8(%esp)
+movl   $"./log/School",0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+addl   $0x1,-0x10(%ebp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"GetSchoolCount(%u) channelNo(%u) Count(%u)",0x8(%esp)
-movl   $"./log/School",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKhjEEppEv>
-addl   $0x1,-0x20(%ebp)
-lea    -0x38(%ebp),%eax
-mov    -0x1c(%ebp),%edx
+lea    -0x18(%ebp),%eax
+mov    -0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIhjSt4lessIhESaISt4pairIKhjEEE3endEv>
 sub    $0x4,%esp
-lea    -0x38(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKhjEEneERKS3_>
 test   %al,%al
-je     <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0x1bb>
+je     <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0x1b9>
 mov    0x14(%ebp),%eax
 movzbl (%eax),%eax
 movzbl %al,%eax
-cmp    -0x20(%ebp),%eax
-jle    <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0x1bb>
+cmp    -0x10(%ebp),%eax
+jle    <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0x1b9>
 mov    $0x1,%eax
-jmp    <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0x1c0>
+jmp    <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0x1be>
 mov    $0x0,%eax
 test   %al,%al
-jne    <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0xca>
-mov    -0x20(%ebp),%eax
+jne    <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0xc8>
+mov    -0x10(%ebp),%eax
 mov    %eax,%edx
 mov    0x14(%ebp),%eax
 mov    %dl,(%eax)
+movl   $0x426,0x8(%esp)
+movl   $&_ZZN12CUserManager14GetSchoolCountEjPjRhE12__FUNCTION__,0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x14(%ebp),%eax
 movzbl (%eax),%eax
-movzbl %al,%esi
-mov    0xc(%ebp),%ebx
-movl   $0x426,0x8(%esp)
-movl   $&_ZZN12CUserManager14GetSchoolCountEjPjRhE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+movzbl %al,%edx
+mov    0xc(%ebp),%eax
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"GetSchoolCount(%u) size(%d)",0x8(%esp)
 movl   $"./log/School",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-lea    -0xc(%ebp),%esp
-add    $0x0,%esp
-pop    %ebx
-pop    %esi
-pop    %edi
-pop    %ebp
+mov    -0x4(%ebp),%ebx
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUserManager::GetSchoolCount(unsigned int, unsigned int*, unsigned char&) */

void __thiscall
CUserManager::_ZN12CUserManager14GetSchoolCountEjPjRh
          (CUserManager *this,uint param_1,uint *param_2,uchar *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  byte *pbVar6;
  int iVar7;
  uint *puVar8;
  map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>
  local_50 [4];
  _Rb_tree_iterator<std::pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>>
  local_4c [4];
  CMyFileLog local_48 [8];
  map<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>>>
  local_40 [4];
  map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>
  local_3c [4];
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [8];
  int local_28;
  int local_24;
  int local_20;
  
  std::
  map<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>>>
  ::find((uint *)local_4c);
  CMyFileLog::CMyFileLog(local_48,"GetSchoolCount",0x418);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_48,"./log/School","GetSchoolCount(%u)",param_1);
  std::
  map<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>>>
  ::end(local_40);
  cVar5 = std::
          _Rb_tree_iterator<std::pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>>
          ::operator!=(local_4c,(_Rb_tree_iterator *)local_40);
  if (cVar5 != '\0') {
    local_28 = 0;
    local_24 = 0;
    local_20 = std::
               _Rb_tree_iterator<std::pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>>
               ::operator->(local_4c);
    local_20 = local_20 + 4;
    std::
    map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>
    ::begin(local_50);
    while( true ) {
      std::
      map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>
      ::end(local_3c);
      cVar5 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,unsigned_int>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_char_const,unsigned_int>> *)local_50,
                         (_Rb_tree_iterator *)local_3c);
      if ((cVar5 == '\0') || ((int)(uint)*param_3 <= local_24)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) break;
      puVar8 = param_2 + local_28;
      pbVar6 = (byte *)std::_Rb_tree_iterator<std::pair<unsigned_char_const,unsigned_int>>::
                       operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,unsigned_int>> *)
                                  local_50);
      *puVar8 = (uint)*pbVar6;
      local_28 = local_28 + 1;
      puVar8 = param_2 + local_28;
      iVar7 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,unsigned_int>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_char_const,unsigned_int>> *)local_50)
      ;
      *puVar8 = *(uint *)(iVar7 + 4);
      uVar2 = param_2[local_28];
      uVar3 = param_2[local_28 + -1];
      local_28 = local_28 + 1;
      CMyFileLog::CMyFileLog(local_38,"GetSchoolCount",0x423);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_38,"./log/School","GetSchoolCount(%u) channelNo(%u) Count(%u)",param_1,uVar3,
                 uVar2);
      std::_Rb_tree_iterator<std::pair<unsigned_char_const,unsigned_int>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_char_const,unsigned_int>> *)local_50);
      local_24 = local_24 + 1;
    }
    *param_3 = (uchar)local_24;
    bVar1 = *param_3;
    CMyFileLog::CMyFileLog(local_30,"GetSchoolCount",0x426);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_30,"./log/School","GetSchoolCount(%u) size(%d)",param_1,(uint)bVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUserManager.cpp](source/DNFServer/GameServer/Monitor/DNFUserManager.cpp)（约第 351 行）：

```cpp
void CUserManager::GetSchoolCount(unsigned int school, unsigned int* out, unsigned char& idx)
{
    std::map<const unsigned int, std::map<unsigned char, unsigned int> >::iterator it =
        m_mapSchools.find(school);
    DNF_LOG_SCOPE_LINE(0x418, "./log/School", "GetSchoolCount(%u)", school);
    if (it != m_mapSchools.end())
    {
        int pos = 0;
        int n = 0;
        std::map<unsigned char, unsigned int>* inner = &it->second;
        for (std::map<unsigned char, unsigned int>::iterator c = inner->begin();
             c != inner->end() && n < (int)idx; ++c)
        {
            out[pos] = (unsigned int)c->first;
            pos++;
            out[pos] = c->second;
            pos++;
            CMyFileLog log2(__FUNCTION__, 0x423);
            log2("./log/School", "GetSchoolCount(%u) channelNo(%u) Count(%u)", school,
                 out[pos - 2], out[pos - 1]);
            n++;
        }
        idx = (unsigned char)n;
        CMyFileLog log3(__FUNCTION__, 0x426);
        log3("./log/School", "GetSchoolCount(%u) size(%d)", school, (unsigned int)idx);
    }
}
```
