# _ZN22CLoginLogoutStatistics11LoginLogoutE17ENUM_LOGIN_LOGOUTh

`CLoginLogoutStatistics::LoginLogout(ENUM_LOGIN_LOGOUT, unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a642c` | `0x12c` | `0x809653c` | `0x137` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,93 +1,95 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x58,%esp
+push   %ebx
+sub    $0x54,%esp
 mov    0x10(%ebp),%eax
 mov    %al,-0x3c(%ebp)
 mov    0xc(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x3,%eax
 add    0x8(%ebp),%eax
 lea    0x4(%eax),%ecx
 lea    -0x2c(%ebp),%eax
 lea    -0x3c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIh13stLoginLogoutSt4lessIhESaISt4pairIKhS0_EEE4findERS4_>
 sub    $0x4,%esp
 mov    0xc(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x3,%eax
 add    0x8(%ebp),%eax
 lea    0x4(%eax),%edx
 lea    -0x28(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIh13stLoginLogoutSt4lessIhESaISt4pairIKhS0_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKh13stLoginLogoutEEneERKS4_>
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKh13stLoginLogoutEEeqERKS4_>
 test   %al,%al
-je     <T> <_ZN22CLoginLogoutStatistics11LoginLogoutE17ENUM_LOGIN_LOGOUTh+0x8a>
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKh13stLoginLogoutEEptEv>
-mov    0x4(%eax),%edx
-add    $0x1,%edx
-mov    %edx,0x4(%eax)
-jmp    <T> <_ZN22CLoginLogoutStatistics11LoginLogoutE17ENUM_LOGIN_LOGOUTh+0x12a>
+je     <T> <_ZN22CLoginLogoutStatistics11LoginLogoutE17ENUM_LOGIN_LOGOUTh+0x111>
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN22CLoginLogoutStatistics11LoginLogoutE17ENUM_LOGIN_LOGOUTh+0x102>
-lea    -0x30(%ebp),%eax
+jmp    <T> <_ZN22CLoginLogoutStatistics11LoginLogoutE17ENUM_LOGIN_LOGOUTh+0xe7>
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13stLoginLogoutC1Ev>
+movl   $0x0,-0x38(%ebp)
+movl   $0x0,-0x34(%ebp)
 movl   $0x0,-0x30(%ebp)
-lea    -0x14(%ebp),%eax
-lea    -0x30(%ebp),%edx
-mov    %edx,0x8(%esp)
-lea    -0x3c(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZSt9make_pairIRhR13stLoginLogoutESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
-sub    $0x4,%esp
-lea    -0x14(%ebp),%eax
+lea    -0x38(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    -0x3c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNSt4pairIKh13stLoginLogoutEC1IhS1_EEOS_IT_T0_E>
+call   <T> <_ZNSt4pairIKh13stLoginLogoutEC1IRhRS1_EEOT_OT0_>
 mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x3,%eax
 add    0x8(%ebp),%eax
 lea    0x4(%eax),%ecx
 lea    -0x24(%ebp),%eax
 lea    -0x1c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIh13stLoginLogoutSt4lessIhESaISt4pairIKhS0_EEE6insertERKS5_>
 sub    $0x4,%esp
 addl   $0x1,-0xc(%ebp)
 cmpl   $0x6,-0xc(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN22CLoginLogoutStatistics11LoginLogoutE17ENUM_LOGIN_LOGOUTh+0x93>
+jne    <T> <_ZN22CLoginLogoutStatistics11LoginLogoutE17ENUM_LOGIN_LOGOUTh+0x7f>
 movzbl -0x3c(%ebp),%eax
 movzbl %al,%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN22CLoginLogoutStatistics11LoginLogoutE17ENUM_LOGIN_LOGOUTh>
+jmp    <T> <_ZN22CLoginLogoutStatistics11LoginLogoutE17ENUM_LOGIN_LOGOUTh+0x132>
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKh13stLoginLogoutEEptEv>
+mov    %eax,%ebx
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKh13stLoginLogoutEEptEv>
+mov    0x8(%eax),%eax
+add    $0x1,%eax
+mov    %eax,0x8(%ebx)
+mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CLoginLogoutStatistics::LoginLogout(ENUM_LOGIN_LOGOUT, unsigned char) */

void __thiscall
CLoginLogoutStatistics::_ZN22CLoginLogoutStatistics11LoginLogoutE17ENUM_LOGIN_LOGOUTh
          (CLoginLogoutStatistics *this,undefined4 param_2,stLoginLogout param_3)

{
  char cVar1;
  int iVar2;
  stLoginLogout local_40 [12];
  undefined4 local_34;
  _Rb_tree_iterator<std::pair<unsigned_char_const,stLoginLogout>> local_30 [4];
  map<unsigned_char,stLoginLogout,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stLoginLogout>>>
  local_2c [4];
  pair local_28 [8];
  pair<unsigned_char_const,stLoginLogout> local_20 [8];
  uchar local_18 [8];
  int local_10;
  
  local_40[0] = param_3;
  std::
  map<unsigned_char,stLoginLogout,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stLoginLogout>>>
  ::find((uchar *)local_30);
  std::
  map<unsigned_char,stLoginLogout,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stLoginLogout>>>
  ::end(local_2c);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,stLoginLogout>>::operator!=
                    (local_30,(_Rb_tree_iterator *)local_2c);
  if (cVar1 == '\0') {
    for (local_10 = 0; local_10 < 7; local_10 = local_10 + 1) {
      stLoginLogout::stLoginLogout((stLoginLogout *)&local_34);
      local_34 = 0;
      std::make_pair<unsigned_char&,stLoginLogout&>(local_18,local_40);
      std::pair<unsigned_char_const,stLoginLogout>::pair<unsigned_char,stLoginLogout>
                (local_20,local_18);
      std::
      map<unsigned_char,stLoginLogout,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stLoginLogout>>>
      ::insert(local_28);
    }
    _ZN22CLoginLogoutStatistics11LoginLogoutE17ENUM_LOGIN_LOGOUTh(this,param_2,local_40[0]);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,stLoginLogout>>::operator->
                      (local_30);
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/LoginLogoutStatistics.cpp](source/DNFServer/GameServer/Monitor/LoginLogoutStatistics.cpp)（约第 63 行）：

```cpp
void CLoginLogoutStatistics::LoginLogout(ENUM_LOGIN_LOGOUT type, unsigned char channel)
{
    std::map<unsigned char, stLoginLogout>::iterator it = m_maps[(int)type].find(channel);
    if (it == m_maps[(int)type].end())
    {
        for (int i = 0; i < 7; i++)
        {
            stLoginLogout st;
            st.m_field0 = 0;
            st.m_count = 0;
            st.m_field8 = 0;
            m_maps[i].insert(std::pair<const unsigned char, stLoginLogout>(channel, st));
        }
        LoginLogout(type, channel);
    }
    else
    {
        it->second.m_count = it->second.m_count + 1;
    }
}
```
