# _ZN14CServerHandler16RegistGameServerEP12stServerInfo

`CServerHandler::RegistGameServer(stServerInfo*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x807a614` | `0xfc` | `0x8080452` | `0x118` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,82 +1,90 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x3c,%esp
+sub    $0x4c,%esp
 mov    0xc(%ebp),%eax
 movzbl 0x1(%eax),%eax
 movzbl %al,%eax
-mov    %eax,-0x30(%ebp)
+mov    %eax,-0x34(%ebp)
 mov    0x8(%ebp),%edx
-lea    -0x34(%ebp),%eax
-lea    -0x30(%ebp),%ecx
+lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CGameServerSt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%edx
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CGameServerSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CGameServerEEneERKS5_>
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CGameServerEEeqERKS5_>
 test   %al,%al
-je     <T> <_ZN14CServerHandler16RegistGameServerEP12stServerInfo+0x67>
-mov    $0x0,%eax
-jmp    <T> <_ZN14CServerHandler16RegistGameServerEP12stServerInfo+0xf1>
+je     <T> <_ZN14CServerHandler16RegistGameServerEP12stServerInfo+0xe6>
 movl   $0x14,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11CGameServerC1EP12stServerInfo>
-jmp    <T> <_ZN14CServerHandler16RegistGameServerEP12stServerInfo+0xa0>
+jmp    <T> <_ZN14CServerHandler16RegistGameServerEP12stServerInfo+0x9a>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %ebx,%eax
-mov    %eax,-0x38(%ebp)
-mov    -0x38(%ebp),%eax
+mov    %eax,-0x3c(%ebp)
+mov    -0x3c(%ebp),%eax
 mov    (%eax),%eax
-mov    (%eax),%edx
-mov    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0x3c(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    0xc(%ebp),%eax
 lea    0x1(%eax),%edx
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKjP11CGameServerEC1IRhRS2_EEOT_OT0_>
 mov    0x8(%ebp),%edx
-lea    -0x28(%ebp),%eax
-lea    -0x20(%ebp),%ecx
+lea    -0x2c(%ebp),%eax
+lea    -0x24(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CGameServerSt4lessIjESaISt4pairIKjS1_EEE6insertERKS6_>
 sub    $0x4,%esp
-mov    $0x1,%eax
+mov    0x8(%ebp),%edx
+lea    -0x1c(%ebp),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIjP11CGameServerSt4lessIjESaISt4pairIKjS1_EEE3endEv>
+sub    $0x4,%esp
+lea    -0x1c(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CGameServerEEeqERKS5_>
 lea    -0xc(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::RegistGameServer(stServerInfo*) */

bool __thiscall
CServerHandler::_ZN14CServerHandler16RegistGameServerEP12stServerInfo
          (CServerHandler *this,stServerInfo *param_1)

{
  char cVar1;
  CGameServer *this_00;
  CGameServer *local_3c;
  _Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>> local_38 [4];
  uint local_34;
  map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
  local_30 [4];
  pair local_2c [8];
  pair<unsigned_int_const,CGameServer*> local_24 [20];
  
  local_34 = (uint)(byte)param_1[1];
  std::
  map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
  ::find((uint *)local_38);
  std::
  map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
  ::end(local_30);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>>::operator!=
                    (local_38,(_Rb_tree_iterator *)local_30);
  if (cVar1 == '\0') {
    this_00 = operator_new(0x14);
                    /* try { // try from 0807a695 to 0807a699 has its CatchHandler @ 0807a69c */
    CGameServer::_ZN11CGameServerC2EP12stServerInfo(this_00,param_1);
    local_3c = this_00;
    (*(code *)**(undefined4 **)this_00)(this_00);
    std::pair<unsigned_int_const,CGameServer*>::pair<unsigned_char&,CGameServer*&>
              (local_24,(uchar *)(param_1 + 1),&local_3c);
    std::
    map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
    ::insert(local_2c);
  }
  return cVar1 == '\0';
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFServerHandler.cpp](source/DNFServer/GameServer/Guild/DNFServerHandler.cpp)（约第 423 行）：

```cpp
bool CServerHandler::RegistGameServer(stServerInfo* info)
{
    unsigned int group = (unsigned int)(unsigned char)info->m_field1;
    std::map<unsigned int, CGameServer*>::iterator it = m_gameServers.find(group);
    if (it != m_gameServers.end())
    {
        return false;
    }
    CGameServer* gs = new CGameServer(info);
    gs->Initialize();
    m_gameServers.insert(std::make_pair((unsigned int)(unsigned char)info->m_field1, gs));
    return true;
}
```
