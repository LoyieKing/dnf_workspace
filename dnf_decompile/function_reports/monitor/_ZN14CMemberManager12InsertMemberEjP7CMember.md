# _ZN14CMemberManager12InsertMemberEjP7CMember

`CMemberManager::InsertMember(unsigned int, CMember*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8099d2a` | `0xf2` | `0x80626d2` | `0xdf` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,62 +1,57 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
-sub    $0x44,%esp
+sub    $0x34,%esp
 mov    0x10(%ebp),%eax
 test   %eax,%eax
-je     <T> <_ZN14CMemberManager12InsertMemberEjP7CMember+0xab>
+jne    <T> <_ZN14CMemberManager12InsertMemberEjP7CMember+0x55>
+mov    0xc(%ebp),%ebx
+movl   $0x87,0x8(%esp)
+movl   $&_ZZN14CMemberManager12InsertMemberEjP7CMemberE12__FUNCTION__,0x4(%esp)
 lea    -0x20(%ebp),%eax
-lea    0x10(%ebp),%edx
-mov    %edx,0x8(%esp)
-lea    0xc(%ebp),%edx
-mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <_ZSt9make_pairIRjRP7CMemberESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
-sub    $0x4,%esp
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %ebx,0xc(%esp)
+movl   $"[INSERT_ERR] Member Key : %d\tpclMember == 0",0x8(%esp)
+movl   $"./log/Member",0x4(%esp)
 lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN14CMemberManager12InsertMemberEjP7CMember+0xda>
+lea    0x10(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNSt4pairIKjP7CMemberEC1IjS2_EEOS_IT_T0_E>
+call   <T> <_ZNSt4pairIKjP7CMemberEC1IRjRS2_EEOT_OT0_>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
-lea    -0x30(%ebp),%eax
-lea    -0x28(%ebp),%edx
+lea    -0x28(%ebp),%eax
+lea    -0x18(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP7CMemberSt4lessIjESaISt4pairIKjS1_EEE6insertERKS6_>
 sub    $0x4,%esp
-movzbl -0x2c(%ebp),%eax
+movzbl -0x24(%ebp),%eax
+xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN14CMemberManager12InsertMemberEjP7CMember+0xa4>
+je     <T> <_ZN14CMemberManager12InsertMemberEjP7CMember+0xd5>
 mov    0xc(%ebp),%ebx
 movl   $0x83,0x8(%esp)
 movl   $&_ZZN14CMemberManager12InsertMemberEjP7CMemberE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"[INSERT_ERR] Member Key : %d\tAlready Member Exist",0x8(%esp)
 movl   $"./log/Member",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x1,%eax
-jmp    <T> <_ZN14CMemberManager12InsertMemberEjP7CMember+0xed>
-mov    0xc(%ebp),%ebx
-movl   $0x87,0x8(%esp)
-movl   $&_ZZN14CMemberManager12InsertMemberEjP7CMemberE12__FUNCTION__,0x4(%esp)
-lea    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"[INSERT_ERR] Member Key : %d\tpclMember == 0",0x8(%esp)
-movl   $"./log/Member",0x4(%esp)
-lea    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemberManager::InsertMember(unsigned int, CMember*) */

undefined4 __thiscall
CMemberManager::_ZN14CMemberManager12InsertMemberEjP7CMember
          (CMemberManager *this,uint param_1,CMember *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  pair local_34 [4];
  char local_30;
  pair<unsigned_int_const,CMember*> local_2c [8];
  uint local_24 [2];
  CMyFileLog local_1c [8];
  CMyFileLog local_14 [12];
  
  uVar1 = param_1;
  if (param_2 == (CMember *)0x0) {
    CMyFileLog::CMyFileLog(local_14,"InsertMember",0x87);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_14,"./log/Member","[INSERT_ERR] Member Key : %d\tpclMember == 0",uVar1);
    uVar2 = 0;
  }
  else {
    std::make_pair<unsigned_int&,CMember*&>(local_24,(CMember **)&param_1);
    std::pair<unsigned_int_const,CMember*>::pair<unsigned_int,CMember*>(local_2c,(pair *)local_24);
    std::
    map<unsigned_int,CMember*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CMember*>>>
    ::insert(local_34);
    uVar1 = param_1;
    if (local_30 == '\0') {
      CMyFileLog::CMyFileLog(local_1c,"InsertMember",0x83);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_1c,"./log/Member","[INSERT_ERR] Member Key : %d\tAlready Member Exist",uVar1)
      ;
    }
    uVar2 = 1;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMemberManager.cpp](source/DNFServer/GameServer/Monitor/DNFMemberManager.cpp)（约第 346 行）：

```cpp
int CMemberManager::InsertMember(unsigned int key, CMember* member)
{
    if (member == 0)
    {
        DNF_LOG_SCOPE_LINE(0x87, "./log/Member", "[INSERT_ERR] Member Key : %d\tpclMember == 0", key);
        return 0;
    }
    else
    {
        std::pair<std::map<unsigned int, CMember*>::iterator, bool> r =
            m_members.insert(std::pair<const unsigned int, CMember*>(key, member));
        if (!r.second)
        {
            DNF_LOG_SCOPE_LINE(0x83, "./log/Member", "[INSERT_ERR] Member Key : %d\tAlready Member Exist", key);
        }
        return 1;
    }
}
```
