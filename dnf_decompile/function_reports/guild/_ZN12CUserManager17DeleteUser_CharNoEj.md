# _ZN12CUserManager17DeleteUser_CharNoEj

`CUserManager::DeleteUser_CharNo(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | NEAR | `0x806958a` | `0xbb` | `0x808cb2c` | `0xbb` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,57 +1,57 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIKjP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEE5emptyEv>
 test   %al,%al
 jne    <T> <_ZN12CUserManager17DeleteUser_CharNoEj+0x21>
 mov    0xc(%ebp),%eax
 test   %eax,%eax
 jne    <T> <_ZN12CUserManager17DeleteUser_CharNoEj+0x28>
 mov    $0x1,%eax
 jmp    <T> <_ZN12CUserManager17DeleteUser_CharNoEj+0x2d>
 mov    $0x0,%eax
 test   %al,%al
 je     <T> <_ZN12CUserManager17DeleteUser_CharNoEj+0x38>
 mov    $0x0,%eax
 jmp    <T> <_ZN12CUserManager17DeleteUser_CharNoEj+0xb4>
 mov    0x8(%ebp),%eax
 lea    0x18(%eax),%edx
 lea    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt3mapIKjP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEE5eraseERS0_>
 cmp    $0x1,%eax
 sete   %al
 test   %al,%al
 je     <T> <_ZN12CUserManager17DeleteUser_CharNoEj+0x5e>
 mov    $0x1,%eax
 jmp    <T> <_ZN12CUserManager17DeleteUser_CharNoEj+0xb4>
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIKjP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEE4sizeEv>
-mov    %eax,%ebx
-mov    0xc(%ebp),%esi
+mov    %eax,%esi
+mov    0xc(%ebp),%ebx
 movl   $0x17e,0x8(%esp)
 movl   $&_ZZN12CUserManager17DeleteUser_CharNoEjE12__FUNCTION__,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0x10(%esp)
-mov    %esi,0xc(%esp)
+mov    %esi,0x10(%esp)
+mov    %ebx,0xc(%esp)
 movl   $"[EXCEPT]CUserManager::DeleteUser_CharNo() : Erase Fail!\tChar No : %d\tChar_No Map Count : %d\n",0x8(%esp)
 movl   $"./log/User",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
 add    $0x30,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUserManager::DeleteUser_CharNo(unsigned int) */

undefined4 __thiscall
CUserManager::_ZN12CUserManager17DeleteUser_CharNoEj(CUserManager *this,uint param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  CMyFileLog local_14 [8];
  
  cVar2 = std::
          map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
          ::empty((map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                   *)(this + 0x18));
  if ((cVar2 == '\0') && (param_1 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    iVar4 = std::
            map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
            ::erase((uint *)(this + 0x18));
    if (iVar4 == 1) {
      uVar3 = 1;
    }
    else {
      uVar3 = std::
              map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
              ::size((map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                      *)(this + 0x18));
      CMyFileLog::CMyFileLog(local_14,"DeleteUser_CharNo",0x17e);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_14,"./log/User",
                 "[EXCEPT]CUserManager::DeleteUser_CharNo() : Erase Fail!\tChar No : %d\tChar_No Map Count : %d\n"
                 ,param_1,uVar3);
      uVar3 = 0;
    }
  }
  return uVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUserManager.cpp](source/DNFServer/GameServer/Guild/DNFUserManager.cpp)（约第 336 行）：

```cpp
int CUserManager::DeleteUser_CharNo(unsigned int charNo)
{
    if (m_charNoUsers.empty() || charNo == 0)
    {
        return 0;
    }
    if (m_charNoUsers.erase(charNo) == 1)
    {
        return 1;
    }
    register int nSize = m_charNoUsers.size();
    register unsigned int nCharNo = charNo;
    CMyFileLog log(__FUNCTION__, 0x17e);
    log("./log/User",
        "[EXCEPT]CUserManager::DeleteUser_CharNo() : Erase Fail!\tChar No : %d\tChar_No Map Count : %d\n",
        nCharNo, nSize);
    return 0;
}
```
