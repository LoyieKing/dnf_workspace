# _ZN12CUserManager17InsertUser_CharNoEjP5CUser

`CUserManager::InsertUser_CharNo(unsigned int, CUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80694aa` | `0xdf` | `0x808b91c` | `0xe4` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,66 +1,63 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
-push   %esi
-push   %ebx
-sub    $0x4c,%esp
+sub    $0x58,%esp
 mov    0x10(%ebp),%eax
 test   %eax,%eax
-je     <T> <_ZN12CUserManager17InsertUser_CharNoEjP5CUser+0xcf>
-lea    -0x28(%ebp),%eax
+jne    <T> <_ZN12CUserManager17InsertUser_CharNoEjP5CUser+0x17>
+mov    $0x0,%eax
+jmp    <T> <_ZN12CUserManager17InsertUser_CharNoEjP5CUser+0xe2>
+lea    -0x18(%ebp),%eax
 lea    0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <_ZSt9make_pairIRKjRP5CUserESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
+call   <T> <_ZSt9make_pairIRjRP5CUserESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 sub    $0x4,%esp
-lea    -0x28(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKjP5CUserEC1IjS2_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x18(%eax),%ecx
-lea    -0x38(%ebp),%eax
-lea    -0x30(%ebp),%edx
+lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKjP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEE6insertERKS6_>
 sub    $0x4,%esp
-movzbl -0x34(%ebp),%eax
+movzbl -0x24(%ebp),%eax
+xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN12CUserManager17InsertUser_CharNoEjP5CUser+0x70>
-mov    $0x1,%eax
-jmp    <T> <_ZN12CUserManager17InsertUser_CharNoEjP5CUser+0xd4>
+je     <T> <_ZN12CUserManager17InsertUser_CharNoEjP5CUser+0xdd>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
-mov    %eax,%esi
+mov    %eax,-0x10(%ebp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser7GetDBIDEv>
-mov    %eax,%ebx
-mov    0xc(%ebp),%edi
+mov    %eax,-0xc(%ebp)
 movl   $0x163,0x8(%esp)
 movl   $&_ZZN12CUserManager17InsertUser_CharNoEjP5CUserE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x14(%esp)
-mov    %ebx,0x10(%esp)
-mov    %edi,0xc(%esp)
+mov    0xc(%ebp),%eax
+mov    -0x10(%ebp),%edx
+mov    %edx,0x14(%esp)
+mov    -0xc(%ebp),%edx
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"[INSERT_ERR]Already Exist!\tChar No : %d\tDB No : %d\tChar_Name : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-lea    -0xc(%ebp),%esp
-add    $0x0,%esp
-pop    %ebx
-pop    %esi
-pop    %edi
-pop    %ebp
+jmp    <T> <_ZN12CUserManager17InsertUser_CharNoEjP5CUser+0xe2>
+mov    $0x1,%eax
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUserManager::InsertUser_CharNo(unsigned int, CUser*) */

undefined4 __thiscall
CUserManager::_ZN12CUserManager17InsertUser_CharNoEjP5CUser
          (CUserManager *this,uint param_1,CUser *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  pair local_3c [4];
  char local_38;
  pair<unsigned_int_const,CUser*> local_34 [8];
  uint local_2c [2];
  CMyFileLog local_24 [20];
  
  if (param_2 != (CUser *)0x0) {
    std::make_pair<unsigned_int_const&,CUser*&>(local_2c,(CUser **)&param_1);
    std::pair<unsigned_int_const,CUser*>::pair<unsigned_int,CUser*>(local_34,(pair *)local_2c);
    std::
    map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::insert(local_3c);
    if (local_38 != '\0') {
      return 1;
    }
    uVar2 = CUser::GetCharName(param_2);
    uVar3 = CUser::GetDBID(param_2);
    uVar1 = param_1;
    CMyFileLog::CMyFileLog(local_24,"InsertUser_CharNo",0x163);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_24,"./log/Except",
               "[INSERT_ERR]Already Exist!\tChar No : %d\tDB No : %d\tChar_Name : %s\n",uVar1,uVar3,
               uVar2);
  }
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUserManager.cpp](source/DNFServer/GameServer/Guild/DNFUserManager.cpp)（约第 318 行）：

```cpp
bool CUserManager::InsertUser_CharNo(unsigned int charNo, CUser* user)
{
    if (user == 0)
    {
        return 0;
    }
    if (!m_charNoUsers.insert(std::make_pair(charNo, user)).second)
    {
        char* name = user->GetCharName();
        unsigned int dbid = user->GetDBID();
        CMyFileLog log(__FUNCTION__, 0x163);
        log("./log/Except",
            "[INSERT_ERR]Already Exist!\tChar No : %d\tDB No : %d\tChar_Name : %s\n",
            charNo, dbid, name);
        return 0;
    }
    return 1;
}
```
