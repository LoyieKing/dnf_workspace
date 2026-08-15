# _ZNK6CGuild28PopGuildMemberChanglableInfoEjR26STGuildMemberChangableInfo

`CGuild::PopGuildMemberChanglableInfo(unsigned int, STGuildMemberChangableInfo&) const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80915e4` | `0x95` | `0x805705c` | `0x9b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,45 +1,48 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
+push   %ebx
+sub    $0x24,%esp
 mov    0x8(%ebp),%eax
 add    $0x4d98,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIj26STGuildMemberChangableInfoSt4lessIjESaISt4pairIKjS0_EEE5emptyEv>
 test   %al,%al
-je     <T> <_ZNK6CGuild28PopGuildMemberChanglableInfoEjR26STGuildMemberChangableInfo+0x21>
+je     <T> <_ZNK6CGuild28PopGuildMemberChanglableInfoEjR26STGuildMemberChangableInfo+0x22>
 mov    $0x0,%eax
-jmp    <T> <_ZNK6CGuild28PopGuildMemberChanglableInfoEjR26STGuildMemberChangableInfo+0x93>
+jmp    <T> <_ZNK6CGuild28PopGuildMemberChanglableInfoEjR26STGuildMemberChangableInfo+0x96>
 mov    0x8(%ebp),%eax
 lea    0x4d98(%eax),%ecx
 lea    -0x10(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIj26STGuildMemberChangableInfoSt4lessIjESaISt4pairIKjS0_EEE4findERS4_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x4d98(%eax),%edx
 lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIj26STGuildMemberChangableInfoSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 sub    $0x4,%esp
+lea    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKj26STGuildMemberChangableInfoEEneERKS4_>
 test   %al,%al
-je     <T> <_ZNK6CGuild28PopGuildMemberChanglableInfoEjR26STGuildMemberChangableInfo+0x8e>
+je     <T> <_ZNK6CGuild28PopGuildMemberChanglableInfoEjR26STGuildMemberChangableInfo+0x91>
+mov    0x10(%ebp),%ebx
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKj26STGuildMemberChangableInfoEEptEv>
-mov    0x10(%ebp),%edx
-mov    0x4(%eax),%eax
-mov    %eax,(%edx)
+add    $0x4,%eax
+mov    (%eax),%eax
+mov    %eax,(%ebx)
 mov    $0x1,%eax
-jmp    <T> <_ZNK6CGuild28PopGuildMemberChanglableInfoEjR26STGuildMemberChangableInfo+0x93>
+jmp    <T> <_ZNK6CGuild28PopGuildMemberChanglableInfoEjR26STGuildMemberChangableInfo+0x96>
 mov    $0x0,%eax
+mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::PopGuildMemberChanglableInfo(unsigned int, STGuildMemberChangableInfo&) const */

undefined4 __thiscall
CGuild::_ZNK6CGuild28PopGuildMemberChanglableInfoEjR26STGuildMemberChangableInfo
          (CGuild *this,uint param_1,STGuildMemberChangableInfo *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_const_iterator local_14 [4];
  map<unsigned_int,STGuildMemberChangableInfo,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildMemberChangableInfo>>>
  local_10 [12];
  
  cVar1 = std::
          map<unsigned_int,STGuildMemberChangableInfo,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildMemberChangableInfo>>>
          ::empty((map<unsigned_int,STGuildMemberChangableInfo,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildMemberChangableInfo>>>
                   *)(this + 0x4d98));
  if (cVar1 == '\0') {
    std::
    map<unsigned_int,STGuildMemberChangableInfo,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildMemberChangableInfo>>>
    ::find((uint *)local_14);
    std::
    map<unsigned_int,STGuildMemberChangableInfo,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildMemberChangableInfo>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,STGuildMemberChangableInfo>>::
            operator!=((_Rb_tree_const_iterator<std::pair<unsigned_int_const,STGuildMemberChangableInfo>>
                        *)local_10,local_14);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      iVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,STGuildMemberChangableInfo>>
              ::operator->((_Rb_tree_const_iterator<std::pair<unsigned_int_const,STGuildMemberChangableInfo>>
                            *)local_14);
      *(undefined4 *)param_2 = *(undefined4 *)(iVar3 + 4);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Guild/DNFGuild.cpp, source/DNFServer/GameServer/Guild/BlackUser.h, source/DNFServer/GameServer/Guild/CashObject.h, source/DNFServer/GameServer/Guild/DNFAppConfig.h, source/DNFServer/GameServer/Guild/DNFAppStartInit.h, source/DNFServer/GameServer/Guild/DNFAppStopInit.h, source/DNFServer/GameServer/Guild/DNFApplication.h, source/DNFServer/GameServer/Guild/DNFDBServer.h 等 280 个文件*
