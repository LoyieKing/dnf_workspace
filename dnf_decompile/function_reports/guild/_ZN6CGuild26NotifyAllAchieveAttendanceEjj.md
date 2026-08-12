# _ZN6CGuild26NotifyAllAchieveAttendanceEjj

`CGuild::NotifyAllAchieveAttendance(unsigned int, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8092702` | `0xcc` | `0x8058402` | `0xf9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,61 +1,76 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x48,%esp
-movl   $0x0,-0xc(%ebp)
-lea    -0x2a(%ebp),%eax
+push   %ebx
+sub    $0x44,%esp
+lea    -0x26(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN31Packet_Achieve_Guild_AttendanceC1Ev>
+lea    -0x26(%ebp),%eax
+lea    0xa(%eax),%edx
 mov    0xc(%ebp),%eax
-mov    %eax,-0x18(%ebp)
+mov    %eax,(%edx)
+lea    -0x26(%ebp),%eax
+lea    0xe(%eax),%edx
 mov    0x10(%ebp),%eax
-mov    %eax,-0x14(%ebp)
+mov    %eax,(%edx)
 mov    0x8(%ebp),%edx
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN6CGuild26NotifyAllAchieveAttendanceEjj+0x9b>
-lea    -0x30(%ebp),%eax
+jmp    <T> <_ZN6CGuild26NotifyAllAchieveAttendanceEjj+0xc5>
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-sete   %al
+test   %eax,%eax
+setne  %al
 test   %al,%al
-jne    <T> <_ZN6CGuild26NotifyAllAchieveAttendanceEjj+0x8f>
-mov    -0xc(%ebp),%eax
+je     <T> <_ZN6CGuild26NotifyAllAchieveAttendanceEjj+0xba>
+lea    -0x26(%ebp),%eax
+lea    0x12(%eax),%ebx
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
+mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x1c(%ebp)
-mov    -0xc(%ebp),%eax
+mov    %eax,(%ebx)
+lea    -0x26(%ebp),%eax
+lea    0x16(%eax),%ebx
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
+mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x20(%ebp)
-lea    -0x2a(%ebp),%eax
+mov    %eax,(%ebx)
+lea    -0x26(%ebp),%ebx
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
+mov    0x4(%eax),%eax
 movl   $0x1a,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN6CGuild26NotifyAllAchieveAttendanceEjj+0x90>
-nop
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEppEv>
 mov    0x8(%ebp),%edx
-lea    -0x10(%ebp),%eax
+lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x10(%ebp),%eax
+lea    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN6CGuild26NotifyAllAchieveAttendanceEjj+0x3b>
+jne    <T> <_ZN6CGuild26NotifyAllAchieveAttendanceEjj+0x42>
+mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::NotifyAllAchieveAttendance(unsigned int, unsigned int) */

void __thiscall
CGuild::_ZN6CGuild26NotifyAllAchieveAttendanceEjj(CGuild *this,uint param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_34 [6];
  Packet_Achieve_Guild_Attendance local_2e [10];
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_14 [4];
  CUser *local_10;
  
  local_10 = (CUser *)0x0;
  Packet_Achieve_Guild_Attendance::_ZN31Packet_Achieve_Guild_AttendanceC2Ev(local_2e);
  local_1c = param_1;
  local_18 = param_2;
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::begin(local_34);
  while( true ) {
    std::
    map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::end(local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_34,
                       (_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_34);
    local_10 = *(CUser **)(iVar2 + 4);
    if (local_10 != (CUser *)0x0) {
      local_20 = CUser::GetIdByChannel(local_10);
      local_24 = CUser::GetUniqCharNo(local_10);
      CUser::SendToGameserver(local_10,(char *)local_2e,0x1a);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_34);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 2401 行）：

```cpp
void CGuild::NotifyAllAchieveAttendance(unsigned int charNo, unsigned int phase)
{
    Packet_Achieve_Guild_Attendance pkt;
    *(unsigned int*)((char*)&pkt + 0xa) = charNo;
    *(unsigned int*)((char*)&pkt + 0xe) = phase;
    for (std::map<unsigned int, CUser*>::iterator it = m_members.begin();
         it != m_members.end(); ++it)
    {
        if (it->second != 0)
        {
            *(unsigned int*)((char*)&pkt + 0x12) = it->second->GetIdByChannel();
            *(unsigned int*)((char*)&pkt + 0x16) = it->second->GetUniqCharNo();
            it->second->SendToGameserver((char*)&pkt, 0x1a);
        }
    }
}
```
