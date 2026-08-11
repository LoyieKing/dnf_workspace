# _ZN12CBuddyHandle11printBuddysEPc

`CBuddyHandle::printBuddys(char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809f036` | `0x184` | `0x805807c` | `0x165` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,114 +1,107 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x6c,%esp
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN12CBuddyHandle11printBuddysEPc+0x175>
+je     <T> <_ZN12CBuddyHandle11printBuddysEPc+0x2c>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapISsP6CBuddySt4lessISsESaISt4pairIKSsS1_EEE5emptyEv>
+xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN12CBuddyHandle11printBuddysEPc+0x178>
+je     <T> <_ZN12CBuddyHandle11printBuddysEPc+0x2c>
+mov    $0x1,%eax
+jmp    <T> <_ZN12CBuddyHandle11printBuddysEPc+0x31>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN12CBuddyHandle11printBuddysEPc+0x15a>
 mov    0x8(%ebp),%edx
 lea    -0x28(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapISsP6CBuddySt4lessISsESaISt4pairIKSsS1_EEE5beginEv>
 sub    $0x4,%esp
-mov    0x8(%ebp),%edx
-lea    -0x2c(%ebp),%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapISsP6CBuddySt4lessISsESaISt4pairIKSsS1_EEE3endEv>
-sub    $0x4,%esp
-jmp    <T> <_ZN12CBuddyHandle11printBuddysEPc+0x159>
+jmp    <T> <_ZN12CBuddyHandle11printBuddysEPc+0x12b>
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP6CBuddyEEptEv>
 mov    0x4(%eax),%eax
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CBuddy14getBuddyDBInfoEv>
-movzbl 0x26(%eax),%eax
-movsbl %al,%eax
-mov    %eax,-0x48(%ebp)
+mov    %eax,-0x1c(%ebp)
+movl   $0x16e,0x8(%esp)
+movl   $"printBuddys",0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CBuddy14getBuddyDBInfoEv>
-mov    0x22(%eax),%eax
-mov    %eax,-0x44(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CBuddy14getBuddyDBInfoEv>
-movzbl 0x21(%eax),%eax
+add    $0x26,%eax
+movzbl (%eax),%eax
 movsbl %al,%eax
 mov    %eax,-0x40(%ebp)
 mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CBuddy14getBuddyDBInfoEv>
-movzbl 0x20(%eax),%eax
-movsbl %al,%eax
+add    $0x22,%eax
+mov    (%eax),%eax
 mov    %eax,-0x3c(%ebp)
 mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CBuddy14getBuddyDBInfoEv>
-movzwl 0x1e(%eax),%eax
-movswl %ax,%edi
+add    $0x21,%eax
+movzbl (%eax),%eax
+movsbl %al,%edi
 mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CBuddy14getBuddyDBInfoEv>
-mov    %eax,%esi
+add    $0x20,%eax
+movzbl (%eax),%eax
+movsbl %al,%esi
+mov    -0x1c(%ebp),%eax
+add    $0x1e,%eax
+movzwl (%eax),%eax
+movswl %ax,%ebx
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
-mov    %eax,%ebx
-movl   $0x16e,0x8(%esp)
-movl   $"printBuddys",0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x48(%ebp),%eax
-mov    %eax,0x28(%esp)
-mov    -0x44(%ebp),%eax
-mov    %eax,0x24(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,0x20(%esp)
-mov    -0x3c(%ebp),%eax
-mov    %eax,0x1c(%esp)
-mov    %edi,0x18(%esp)
-mov    %esi,0x14(%esp)
-mov    %ebx,0x10(%esp)
+mov    -0x40(%ebp),%edx
+mov    %edx,0x28(%esp)
+mov    -0x3c(%ebp),%edx
+mov    %edx,0x24(%esp)
+mov    %edi,0x20(%esp)
+mov    %esi,0x1c(%esp)
+mov    %ebx,0x18(%esp)
+mov    -0x1c(%ebp),%edx
+mov    %edx,0x14(%esp)
+mov    %eax,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"[%s] name(%s) fname(%s) flevel(%d) fjob(%d) fgrowtype(%d) fcharNo(%d) fsex(%d)",0x8(%esp)
 movl   $"./log/buddy",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKSsP6CBuddyEEppEv>
-lea    -0x2c(%ebp),%eax
+mov    0x8(%ebp),%edx
+lea    -0x24(%ebp),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapISsP6CBuddySt4lessISsESaISt4pairIKSsS1_EEE3endEv>
+sub    $0x4,%esp
+lea    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP6CBuddyEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN12CBuddyHandle11printBuddysEPc+0x59>
-jmp    <T> <_ZN12CBuddyHandle11printBuddysEPc+0x179>
-nop
-jmp    <T> <_ZN12CBuddyHandle11printBuddysEPc+0x179>
-nop
+jne    <T> <_ZN12CBuddyHandle11printBuddysEPc+0x53>
 lea    -0xc(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CBuddyHandle::printBuddys(char*) */

void __thiscall CBuddyHandle::_ZN12CBuddyHandle11printBuddysEPc(CBuddyHandle *this,char *param_1)

{
  char cVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
  local_30 [4];
  map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
  local_2c [4];
  CMyFileLog local_28 [8];
  CBuddy *local_20;
  
  if ((*(int *)(this + 0x18) != 0) &&
     (cVar5 = std::
              map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
              ::empty((map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
                       *)this), cVar5 == '\0')) {
    std::
    map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
    ::begin(local_2c);
    std::
    map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
    ::end(local_30);
    while (cVar5 = std::_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>>::operator!=
                             ((_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>> *)local_2c,
                              (_Rb_tree_iterator *)local_30), cVar5 != '\0') {
      iVar6 = std::_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>>::operator->
                        ((_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>> *)local_2c);
      local_20 = *(CBuddy **)(iVar6 + 4);
      iVar6 = CBuddy::getBuddyDBInfo(local_20);
      cVar5 = *(char *)(iVar6 + 0x26);
      iVar6 = CBuddy::getBuddyDBInfo(local_20);
      uVar4 = *(undefined4 *)(iVar6 + 0x22);
      iVar6 = CBuddy::getBuddyDBInfo(local_20);
      cVar1 = *(char *)(iVar6 + 0x21);
      iVar6 = CBuddy::getBuddyDBInfo(local_20);
      cVar2 = *(char *)(iVar6 + 0x20);
      iVar6 = CBuddy::getBuddyDBInfo(local_20);
      sVar3 = *(short *)(iVar6 + 0x1e);
      uVar7 = CBuddy::getBuddyDBInfo(local_20);
      uVar8 = CUser::GetCharName(*(CUser **)(this + 0x18));
      CMyFileLog::CMyFileLog(local_28,"printBuddys",0x16e);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_28,"./log/buddy",
                 "[%s] name(%s) fname(%s) flevel(%d) fjob(%d) fgrowtype(%d) fcharNo(%d) fsex(%d)",
                 param_1,uVar8,uVar7,(int)sVar3,(int)cVar2,(int)cVar1,uVar4,(int)cVar5);
      std::_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>>::operator++
                ((_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>> *)local_2c);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFBuddyHandle.cpp](source/DNFServer/GameServer/Monitor/DNFBuddyHandle.cpp)（约第 243 行）：

```cpp
void CBuddyHandle::printBuddys(char* out)
{
    if (m_prUser != 0 && !m_buddies.empty())
    {
        for (std::map<std::string, CBuddy*>::iterator it = m_buddies.begin();
             it != m_buddies.end(); ++it)
        {
            CBuddy* buddy = it->second;
            char* info = (char*)buddy->getBuddyDBInfo();
            DNF_LOG_SCOPE_LINE(0x16e,"./log/buddy",
                "[%s] name(%s) fname(%s) flevel(%d) fjob(%d) fgrowtype(%d) fcharNo(%d) "
                "fsex(%d)",
                out, m_prUser->GetCharName(), info, (int)*(short*)(info + 0x1e),
                (int)*(char*)(info + 0x20), (int)*(char*)(info + 0x21),
                *(int*)(info + 0x22), (int)*(char*)(info + 0x26));
        }
    }
}
```
