# _ZN12CUserManager18DeleteProhibitUserEjc

`CUserManager::DeleteProhibitUser(unsigned int, char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x807193a` | `0x1d0` | `0x808bda4` | `0x1d0` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,129 +1,129 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x5c,%esp
 mov    0x10(%ebp),%eax
 mov    %al,-0x3c(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x60,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIKjP16CDNFProhibitUserSt4lessIS0_ESaISt4pairIS0_S2_EEE5emptyEv>
 test   %al,%al
 je     <T> <_ZN12CUserManager18DeleteProhibitUserEjc+0x2b>
 mov    $0x0,%eax
 jmp    <T> <_ZN12CUserManager18DeleteProhibitUserEjc+0x1c8>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager16FindProhibitUserEj>
 mov    %eax,-0x1c(%ebp)
 cmpl   $0x0,-0x1c(%ebp)
-setne  %al
-test   %al,%al
+setne  %bl
+test   %bl,%bl
 je     <T> <_ZN12CUserManager18DeleteProhibitUserEjc+0x1c3>
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CDNFProhibitUser12GetChannelNoEv>
 cmp    $0xff,%al
 je     <T> <_ZN12CUserManager18DeleteProhibitUserEjc+0x75>
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CDNFProhibitUser12GetChannelNoEv>
 cmp    -0x3c(%ebp),%al
 je     <T> <_ZN12CUserManager18DeleteProhibitUserEjc+0x75>
 mov    $0x1,%eax
 jmp    <T> <_ZN12CUserManager18DeleteProhibitUserEjc+0x7a>
 mov    $0x0,%eax
 test   %al,%al
 je     <T> <_ZN12CUserManager18DeleteProhibitUserEjc+0xf1>
 movsbl -0x3c(%ebp),%edi
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CDNFProhibitUser12GetChannelNoEv>
 movsbl %al,%esi
 mov    0xc(%ebp),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
 mov    %eax,%ebx
 movl   $0x2c7,0x8(%esp)
 movl   $&_ZZN12CUserManager18DeleteProhibitUserEjcE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"[PROHIBIT DELETE USER Err] Disconnected User DB ID : %s, first ch(%d)/complete ch(%d)",0x8(%esp)
 movl   $"./log/User",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
 jmp    <T> <_ZN12CUserManager18DeleteProhibitUserEjc+0x1c8>
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CDNFProhibitUser7fromWebEv>
 test   %al,%al
 je     <T> <_ZN12CUserManager18DeleteProhibitUserEjc+0x10d>
 cmpb   $0xff,-0x3c(%ebp)
 je     <T> <_ZN12CUserManager18DeleteProhibitUserEjc+0x10d>
 mov    $0x1,%eax
 jmp    <T> <_ZN12CUserManager18DeleteProhibitUserEjc+0x112>
 mov    $0x0,%eax
 test   %al,%al
 je     <T> <_ZN12CUserManager18DeleteProhibitUserEjc+0x186>
 movsbl -0x3c(%ebp),%edi
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CDNFProhibitUser12GetChannelNoEv>
 movsbl %al,%esi
 mov    0xc(%ebp),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
 mov    %eax,%ebx
 movl   $0x2ce,0x8(%esp)
 movl   $&_ZZN12CUserManager18DeleteProhibitUserEjcE12__FUNCTION__,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"[PROHIBIT DELETE USER Err From Web] Disconnected User DB ID : %s, first ch(%d)/complete ch(%d)",0x8(%esp)
 movl   $"./log/User",0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
 jmp    <T> <_ZN12CUserManager18DeleteProhibitUserEjc+0x1c8>
 mov    0x8(%ebp),%eax
 lea    0x60(%eax),%edx
 lea    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt3mapIKjP16CDNFProhibitUserSt4lessIS0_ESaISt4pairIS0_S2_EEE5eraseERS0_>
 cmp    $0x1,%eax
 sete   %al
 test   %al,%al
 je     <T> <_ZN12CUserManager18DeleteProhibitUserEjc+0x1c3>
 mov    -0x1c(%ebp),%ebx
 test   %ebx,%ebx
 je     <T> <_ZN12CUserManager18DeleteProhibitUserEjc+0x1bc>
 mov    %ebx,(%esp)
 call   <T> <_ZN16CDNFProhibitUserD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZN16CDNFProhibitUserdlEPv>
 mov    $0x1,%eax
 jmp    <T> <_ZN12CUserManager18DeleteProhibitUserEjc+0x1c8>
 mov    $0x0,%eax
 add    $0x5c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUserManager::DeleteProhibitUser(unsigned int, char) */

undefined4 __thiscall
CUserManager::_ZN12CUserManager18DeleteProhibitUserEjc(CUserManager *this,uint param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  CDNFProhibitUser *this_00;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined3 in_stack_0000000d;
  uint *puVar6;
  CMyFileLog local_30 [8];
  CMyFileLog local_28 [8];
  CDNFProhibitUser *local_20;
  
  cVar2 = param_2;
  cVar3 = std::
          map<unsigned_int_const,CDNFProhibitUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CDNFProhibitUser*>>>
          ::empty((map<unsigned_int_const,CDNFProhibitUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CDNFProhibitUser*>>>
                   *)(this + 0x60));
  if (cVar3 != '\0') {
    return 0;
  }
  local_20 = (CDNFProhibitUser *)FindProhibitUser((uint)this);
  if (local_20 != (CDNFProhibitUser *)0x0) {
    cVar3 = CDNFProhibitUser::GetChannelNo(local_20);
    if ((cVar3 == -1) || (cVar3 = CDNFProhibitUser::GetChannelNo(local_20), cVar3 == cVar2)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cVar3 = CDNFProhibitUser::GetChannelNo(local_20);
      uVar4 = NumberToString(param_1,0);
      CMyFileLog::CMyFileLog(local_30,"DeleteProhibitUser",0x2c7);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_30,"./log/User",
                 "[PROHIBIT DELETE USER Err] Disconnected User DB ID : %s, first ch(%d)/complete ch(%d)"
                 ,uVar4,(int)cVar3,(int)cVar2);
      return 0;
    }
    cVar3 = CDNFProhibitUser::fromWeb(local_20);
    if ((cVar3 == '\0') || (cVar2 == -1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cVar3 = CDNFProhibitUser::GetChannelNo(local_20);
      uVar4 = NumberToString(param_1,0);
      CMyFileLog::CMyFileLog(local_28,"DeleteProhibitUser",0x2ce);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_28,"./log/User",
                 "[PROHIBIT DELETE USER Err From Web] Disconnected User DB ID : %s, first ch(%d)/complete ch(%d)"
                 ,uVar4,(int)cVar3,(int)cVar2);
      return 0;
    }
    puVar6 = &param_1;
    iVar5 = std::
            map<unsigned_int_const,CDNFProhibitUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CDNFProhibitUser*>>>
            ::erase((uint *)(this + 0x60));
    this_00 = local_20;
    if (iVar5 == 1) {
      if (local_20 != (CDNFProhibitUser *)0x0) {
        CDNFProhibitUser::~CDNFProhibitUser(local_20);
        CDNFProhibitUser::operator_delete(this_00,puVar6);
      }
      return 1;
    }
  }
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUserManager.cpp](source/DNFServer/GameServer/Monitor/DNFUserManager.cpp)（约第 391 行）：

```cpp
int CUserManager::DeleteProhibitUser(unsigned int dbid, char channel)
{
    if (m_prohibitUsers.empty())
    {
        return 0;
    }
    CDNFProhibitUser* pu = FindProhibitUser(dbid);
    register bool hasPu = pu != 0;
    if (hasPu)
    {
        if (pu->GetChannelNo() != -1 && pu->GetChannelNo() != channel)
        {
            DNF_LOG_SCOPE_LINE(0x2c7,"./log/User",
                "[PROHIBIT DELETE USER Err] Disconnected User DB ID : %s, first ch(%d)/complete ch(%d)",
                NumberToString(dbid, 0), (int)pu->GetChannelNo(), (int)channel);
            return 0;
        }
        if (pu->fromWeb() != 0 && channel != -1)
        {
            DNF_LOG_SCOPE_LINE(0x2ce,"./log/User",
                "[PROHIBIT DELETE USER Err From Web] Disconnected User DB ID : %s, first ch(%d)/complete ch(%d)",
                NumberToString(dbid, 0), (int)pu->GetChannelNo(), (int)channel);
            return 0;
        }
        if (m_prohibitUsers.erase(dbid) == 1)
        {
            delete pu;
            return 1;
        }
    }
    return 0;
}
```
