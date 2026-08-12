# _ZN12CUserManager19InsertUser_CharNameEPcP5CUser

`CUserManager::InsertUser_CharName(char*, CUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80696b0` | `0xdf` | `0x808bb04` | `0xe5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,66 +1,68 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 mov    0x10(%ebp),%eax
 test   %eax,%eax
-je     <T> <_ZN12CUserManager19InsertUser_CharNameEPcP5CUser+0xd0>
+jne    <T> <_ZN12CUserManager19InsertUser_CharNameEPcP5CUser+0x19>
+mov    $0x0,%eax
+jmp    <T> <_ZN12CUserManager19InsertUser_CharNameEPcP5CUser+0xdb>
 lea    0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 lea    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKSsP5CUserEC1IRPcRS2_EEOT_OT0_>
 mov    0x8(%ebp),%eax
 lea    0x30(%eax),%ecx
-lea    -0x20(%ebp),%eax
-lea    -0x18(%ebp),%edx
+lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKSsP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEE6insertERKS6_>
 sub    $0x4,%esp
-movzbl -0x1c(%ebp),%ebx
-lea    -0x18(%ebp),%eax
+movzbl -0x14(%ebp),%ebx
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKSsP5CUserED1Ev>
 test   %bl,%bl
-jne    <T> <_ZN12CUserManager19InsertUser_CharNameEPcP5CUser+0x7b>
-jmp    <T> <_ZN12CUserManager19InsertUser_CharNameEPcP5CUser+0x82>
+jne    <T> <_ZN12CUserManager19InsertUser_CharNameEPcP5CUser+0x81>
+jmp    <T> <_ZN12CUserManager19InsertUser_CharNameEPcP5CUser+0x88>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKSsP5CUserED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    $0x1,%eax
-jmp    <T> <_ZN12CUserManager19InsertUser_CharNameEPcP5CUser+0xd5>
+jmp    <T> <_ZN12CUserManager19InsertUser_CharNameEPcP5CUser+0xdb>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser7GetDBIDEv>
-mov    %eax,%ebx
-mov    0xc(%ebp),%esi
+mov    %eax,%esi
+mov    0xc(%ebp),%ebx
 movl   $0x1a6,0x8(%esp)
 movl   $&_ZZN12CUserManager19InsertUser_CharNameEPcP5CUserE12__FUNCTION__,0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0x10(%esp)
-mov    %esi,0xc(%esp)
+mov    %esi,0x10(%esp)
+mov    %ebx,0xc(%esp)
 movl   $"[INSERT_ERR]Already Exist!\tChar Name : %s\tDB No : %d\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUserManager::InsertUser_CharName(char*, CUser*) */

undefined4 __thiscall
CUserManager::_ZN12CUserManager19InsertUser_CharNameEPcP5CUser
          (CUserManager *this,char *param_1,CUser *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  pair local_24 [4];
  char local_20;
  pair<std::string_const,CUser*> local_1c [8];
  CMyFileLog local_14 [8];
  
  if (param_2 != (CUser *)0x0) {
    std::pair<std::string_const,CUser*>::pair<char*&,CUser*&>(local_1c,&param_1,&param_2);
                    /* try { // try from 080696f3 to 080696f7 has its CatchHandler @ 08069710 */
    std::
    map<std::string_const,CUser*,std::less<std::string_const>,std::allocator<std::pair<std::string_const,CUser*>>>
    ::insert(local_24);
    std::pair<std::string_const,CUser*>::~pair(local_1c);
    if (local_20 != '\0') {
      return 1;
    }
    uVar2 = CUser::GetDBID(param_2);
    pcVar1 = param_1;
    CMyFileLog::CMyFileLog(local_14,"InsertUser_CharName",0x1a6);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_14,"./log/Except","[INSERT_ERR]Already Exist!\tChar Name : %s\tDB No : %d\n",
               pcVar1,uVar2);
  }
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUserManager.cpp](source/DNFServer/GameServer/Guild/DNFUserManager.cpp)（约第 358 行）：

```cpp
bool CUserManager::InsertUser_CharName(char* name, CUser* user)
{
    if (user == 0)
    {
        return 0;
    }
    if (m_charNameUsers.insert(std::pair<const std::string, CUser*>(name, user)).second)
    {
        return 1;
    }
    register unsigned int dbid = user->GetDBID();
    register char* nName = name;
    CMyFileLog log(__FUNCTION__, 0x1a6);
    log("./log/Except", "[INSERT_ERR]Already Exist!\tChar Name : %s\tDB No : %d\n",
        nName, dbid);
    return 0;
}
```
