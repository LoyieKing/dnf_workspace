# _ZN14CMemberManager16CheckEmptyMemberEP7CMemberP5CUser

`CMemberManager::CheckEmptyMember(CMember*, CUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809a496` | `0xa2` | `0x8062b8c` | `0xb3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,47 +1,52 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 cmpl   $0x0,0x10(%ebp)
 je     <T> <_ZN14CMemberManager16CheckEmptyMemberEP7CMemberP5CUser+0x28>
 cmpl   $0x0,0xc(%ebp)
 je     <T> <_ZN14CMemberManager16CheckEmptyMemberEP7CMemberP5CUser+0x28>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember7IsEmptyEv>
 test   %al,%al
 je     <T> <_ZN14CMemberManager16CheckEmptyMemberEP7CMemberP5CUser+0x28>
 mov    $0x1,%eax
 jmp    <T> <_ZN14CMemberManager16CheckEmptyMemberEP7CMemberP5CUser+0x2d>
 mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN14CMemberManager16CheckEmptyMemberEP7CMemberP5CUser+0x9b>
-lea    -0x1a(%ebp),%eax
+mov    %al,-0xd(%ebp)
+cmpb   $0x0,-0xd(%ebp)
+je     <T> <_ZN14CMemberManager16CheckEmptyMemberEP7CMemberP5CUser+0x9f>
+lea    -0x1f(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN38Packet_Monitor_Notice_Delete_Member_IdC1Ev>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x10(%ebp)
+mov    %eax,-0x15(%ebp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0xc(%ebp)
-lea    -0x1a(%ebp),%eax
+mov    %eax,-0x11(%ebp)
+lea    -0x1f(%ebp),%eax
 movl   $0x12,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0xc(%ebp)
 movl   $0x1,0x8(%esp)
+mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager12DeleteMemberEjb>
+cmpb   $0x0,-0xd(%ebp)
+je     <T> <_ZN14CMemberManager16CheckEmptyMemberEP7CMemberP5CUser+0xac>
 mov    $0x1,%eax
-jmp    <T> <_ZN14CMemberManager16CheckEmptyMemberEP7CMemberP5CUser+0xa0>
+jmp    <T> <_ZN14CMemberManager16CheckEmptyMemberEP7CMemberP5CUser+0xb1>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemberManager::CheckEmptyMember(CMember*, CUser*) */

bool __thiscall
CMemberManager::_ZN14CMemberManager16CheckEmptyMemberEP7CMemberP5CUser
          (CMemberManager *this,CMember *param_1,CUser *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  Packet_Monitor_Notice_Delete_Member_Id local_1e [10];
  undefined4 local_14;
  undefined4 local_10;
  
  if (((param_2 == (CUser *)0x0) || (param_1 == (CMember *)0x0)) ||
     (cVar2 = CMember::IsEmpty(param_1), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    Packet_Monitor_Notice_Delete_Member_Id::Packet_Monitor_Notice_Delete_Member_Id(local_1e);
    local_14 = CUser::GetIdByChannel(param_2);
    local_10 = CUser::GetUniqCharNo(param_2);
    CUser::SendToGameserver(param_2,(char *)local_1e,0x12);
    uVar3 = CUser::GetUniqCharNo(param_2);
    _ZN14CMemberManager12DeleteMemberEjb(this,uVar3,true);
  }
  return bVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMemberManager.cpp](source/DNFServer/GameServer/Monitor/DNFMemberManager.cpp)（约第 486 行）：

```cpp
char CMemberManager::CheckEmptyMember(CMember* member, CUser* user)
{
    bool empty = user != 0 && member != 0 && member->IsEmpty() != 0;
    if (empty)
    {
        Packet_Monitor_Notice_Delete_Member_Id pkt;
        pkt.m_idByChannel = user->GetIdByChannel();
        pkt.m_uniqCharNo = user->GetUniqCharNo();
        user->SendToGameserver((char*)&pkt, 0x12);
        unsigned int charNo = user->GetUniqCharNo();
        DeleteMember(charNo, true);
    }
    return empty ? 1 : 0;
}
```
