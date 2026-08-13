# _ZN12CUserManager15ProcessByMinuteEv

`CUserManager::ProcessByMinute()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8071776` | `0x15c` | `0x808b122` | `0x16f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,98 +1,102 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
 push   %ebx
-sub    $0x40,%esp
+sub    $0x54,%esp
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP16CDNFProhibitUserEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x60,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIKjP16CDNFProhibitUserSt4lessIS0_ESaISt4pairIS0_S2_EEE5emptyEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN12CUserManager15ProcessByMinuteEv+0x152>
+je     <T> <_ZN12CUserManager15ProcessByMinuteEv+0x16a>
 mov    0x8(%ebp),%eax
 lea    0x60(%eax),%edx
-lea    -0x20(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKjP16CDNFProhibitUserSt4lessIS0_ESaISt4pairIS0_S2_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN12CUserManager15ProcessByMinuteEv+0x120>
+mov    -0x2c(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+jmp    <T> <_ZN12CUserManager15ProcessByMinuteEv+0x138>
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP16CDNFProhibitUserEEdeEv>
 mov    0x4(%eax),%eax
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
 setne  %al
 test   %al,%al
-je     <T> <_ZN12CUserManager15ProcessByMinuteEv+0x120>
-mov    -0xc(%ebp),%eax
+je     <T> <_ZN12CUserManager15ProcessByMinuteEv+0x138>
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CDNFProhibitUser20IsTimeOutConnectableEv>
 test   %al,%al
-je     <T> <_ZN12CUserManager15ProcessByMinuteEv+0x115>
-mov    -0xc(%ebp),%eax
+je     <T> <_ZN12CUserManager15ProcessByMinuteEv+0x12d>
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CDNFProhibitUser21GetProhibitRemainTimeEv>
-movswl %ax,%esi
-mov    -0xc(%ebp),%eax
+cwtl
+mov    %eax,-0x10(%ebp)
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CDNFProhibitUser7GetDBIDEv>
-mov    %eax,%ebx
+mov    %eax,-0xc(%ebp)
 movl   $0x292,0x8(%esp)
 movl   $&_ZZN12CUserManager15ProcessByMinuteEvE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"[PROHIBIT CONNECT USER TIME_OUT] Prohibit User DB ID : %d\t Remain time(%d)\n",0x8(%esp)
 movl   $"./log/User",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0xc(%ebp),%ebx
+mov    -0x14(%ebp),%ebx
 test   %ebx,%ebx
-je     <T> <_ZN12CUserManager15ProcessByMinuteEv+0xe1>
+je     <T> <_ZN12CUserManager15ProcessByMinuteEv+0xf9>
 mov    %ebx,(%esp)
 call   <T> <_ZN16CDNFProhibitUserD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZN16CDNFProhibitUserdlEPv>
-lea    -0x10(%ebp),%eax
+lea    -0x18(%ebp),%eax
 movl   $0x0,0x8(%esp)
 lea    -0x20(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP16CDNFProhibitUserEEppEi>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x60(%eax),%edx
-mov    -0x10(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt3mapIKjP16CDNFProhibitUserSt4lessIS0_ESaISt4pairIS0_S2_EEE5eraseESt17_Rb_tree_iteratorIS6_E>
-jmp    <T> <_ZN12CUserManager15ProcessByMinuteEv+0x120>
+jmp    <T> <_ZN12CUserManager15ProcessByMinuteEv+0x138>
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP16CDNFProhibitUserEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x60(%eax),%edx
 lea    -0x1c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKjP16CDNFProhibitUserSt4lessIS0_ESaISt4pairIS0_S2_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP16CDNFProhibitUserEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN12CUserManager15ProcessByMinuteEv+0x3e>
-lea    -0x8(%ebp),%esp
-add    $0x0,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+jne    <T> <_ZN12CUserManager15ProcessByMinuteEv+0x4e>
+mov    -0x4(%ebp),%ebx
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUserManager::ProcessByMinute() */

void __thiscall CUserManager::_ZN12CUserManager15ProcessByMinuteEv(CUserManager *this)

{
  CDNFProhibitUser *this_00;
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  map<unsigned_int_const,CDNFProhibitUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CDNFProhibitUser*>>>
  local_24 [4];
  map<unsigned_int_const,CDNFProhibitUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CDNFProhibitUser*>>>
  local_20 [4];
  CMyFileLog local_1c [8];
  undefined4 local_14;
  CDNFProhibitUser *local_10;
  
  cVar1 = std::
          map<unsigned_int_const,CDNFProhibitUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CDNFProhibitUser*>>>
          ::empty((map<unsigned_int_const,CDNFProhibitUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CDNFProhibitUser*>>>
                   *)(this + 0x60));
  if (cVar1 != '\x01') {
    std::
    map<unsigned_int_const,CDNFProhibitUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CDNFProhibitUser*>>>
    ::begin(local_24);
    while( true ) {
      std::
      map<unsigned_int_const,CDNFProhibitUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CDNFProhibitUser*>>>
      ::end(local_20);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CDNFProhibitUser*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CDNFProhibitUser*>> *)
                         local_24,(_Rb_tree_iterator *)local_20);
      if (cVar1 == '\0') break;
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CDNFProhibitUser*>>::operator*
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CDNFProhibitUser*>> *)
                         local_24);
      local_10 = *(CDNFProhibitUser **)(iVar3 + 4);
      if (local_10 != (CDNFProhibitUser *)0x0) {
        cVar1 = CDNFProhibitUser::IsTimeOutConnectable(local_10);
        if (cVar1 == '\0') {
          std::_Rb_tree_iterator<std::pair<unsigned_int_const,CDNFProhibitUser*>>::operator++
                    ((_Rb_tree_iterator<std::pair<unsigned_int_const,CDNFProhibitUser*>> *)local_24)
          ;
        }
        else {
          sVar2 = CDNFProhibitUser::GetProhibitRemainTime(local_10);
          uVar4 = CDNFProhibitUser::GetDBID(local_10);
          CMyFileLog::CMyFileLog(local_1c,"ProcessByMinute",0x292);
          pcVar5 = "./log/User";
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_1c,"./log/User",
                     "[PROHIBIT CONNECT USER TIME_OUT] Prohibit User DB ID : %d\t Remain time(%d)\n"
                     ,uVar4,(int)sVar2);
          this_00 = local_10;
          if (local_10 != (CDNFProhibitUser *)0x0) {
            CDNFProhibitUser::~CDNFProhibitUser(local_10);
            CDNFProhibitUser::operator_delete(this_00,pcVar5);
          }
          uVar4 = 0;
          std::_Rb_tree_iterator<std::pair<unsigned_int_const,CDNFProhibitUser*>>::operator++
                    ((_Rb_tree_iterator<std::pair<unsigned_int_const,CDNFProhibitUser*>> *)&local_14
                     ,(int)local_24);
          std::
          map<unsigned_int_const,CDNFProhibitUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CDNFProhibitUser*>>>
          ::erase((map<unsigned_int_const,CDNFProhibitUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CDNFProhibitUser*>>>
                   *)(this + 0x60),local_14,uVar4);
        }
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUserManager.cpp](source/DNFServer/GameServer/Monitor/DNFUserManager.cpp)（约第 83 行）：

```cpp
void CUserManager::ProcessByMinute()
{
    std::map<const unsigned int, CDNFProhibitUser*>::iterator it;
    if (!m_prohibitUsers.empty())
    {
        it = m_prohibitUsers.begin();
        while (it != m_prohibitUsers.end())
        {
            CDNFProhibitUser* pu;
            if ((pu = (*it).second) != 0)
            {
                if (pu->IsTimeOutConnectable())
                {
                    int remain = (short)pu->GetProhibitRemainTime();
                    unsigned int dbid = pu->GetDBID();
                    CMyFileLog log(__FUNCTION__, 0x292);
                    log("./log/User",
                        "[PROHIBIT CONNECT USER TIME_OUT] Prohibit User DB ID : %d\t Remain time(%d)\n",
                        dbid, remain);
                    delete pu;
                    m_prohibitUsers.erase(it++);
                }
                else
                {
                    ++it;
                }
            }
        }
    }
}
```
