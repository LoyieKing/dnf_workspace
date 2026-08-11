# _ZN5CUser15send_buddy_listEv

`CUser::send_buddy_list()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| community | DIFF | `0x8053618` | `0x307` | `0x80540be` | `0x300` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,238 +1,239 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x594,%esp
-lea    -0x57e(%ebp),%eax
+lea    -0x57d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN35Packet_Response_PvP_Buddy_Conn_ListC1Ev>
 mov    0x8(%ebp),%eax
 mov    0xe(%eax),%eax
-mov    %eax,-0x574(%ebp)
+mov    %eax,-0x573(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x9(%eax),%eax
-mov    %eax,-0x570(%ebp)
+mov    %eax,-0x56f(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x34,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CBuddyManager8get_sizeEv>
-mov    %eax,-0x56c(%ebp)
+mov    %eax,-0x56b(%ebp)
 movl   $0x0,-0x14(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x34(%eax),%edx
-lea    -0x48(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorI16STPvPBuddyDBInfoSaIS0_EE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN5CUser15send_buddy_listEv+0x2a8>
+jmp    <T> <_ZN5CUser15send_buddy_listEv+0x2a1>
 cmpl   $0x1f,-0x14(%ebp)
-jg     <T> <_ZN5CUser15send_buddy_listEv+0x2dc>
-lea    -0x48(%ebp),%eax
+jg     <T> <_ZN5CUser15send_buddy_listEv+0x2d5>
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIP16STPvPBuddyDBInfoSt6vectorIS1_SaIS1_EEEdeEv>
 add    $0x9,%eax
 mov    %eax,%ebx
-lea    -0x48(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIP16STPvPBuddyDBInfoSt6vectorIS1_SaIS1_EEEdeEv>
 movzbl (%eax),%eax
 movsbl %al,%eax
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
 movl   $&g_user_manager,(%esp)
 call   <T> <_ZN12CUserManager9find_userEcPKc>
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
 je     <T> <_ZN5CUser15send_buddy_listEv+0xf4>
 mov    -0x14(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x3,%eax
 add    %edx,%eax
 lea    -0x8(%ebp),%edx
 lea    (%edx,%eax,1),%eax
-sub    $0x566,%eax
-movb   $0x1,0x8(%eax)
+sub    $0x55d,%eax
+movb   $0x1,(%eax)
 mov    -0x14(%ebp),%edx
 mov    -0x10(%ebp),%eax
-movzbl 0xd(%eax),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-lea    -0x8(%ebp),%edx
-lea    (%edx,%eax,1),%eax
-sub    $0x566,%eax
-mov    %cl,0x7(%eax)
-jmp    <T> <_ZN5CUser15send_buddy_listEv+0x130>
-mov    -0x14(%ebp),%edx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-lea    -0x8(%ebp),%edx
-lea    (%edx,%eax,1),%eax
-sub    $0x566,%eax
-movb   $0x0,0x8(%eax)
-mov    -0x14(%ebp),%edx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-lea    -0x8(%ebp),%edx
-lea    (%edx,%eax,1),%eax
-sub    $0x566,%eax
-movb   $0xff,0x7(%eax)
-lea    -0x48(%ebp),%eax
+movzbl 0xd(%eax),%eax
+mov    %eax,%ecx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+shl    $0x3,%eax
+add    %edx,%eax
+lea    -0x8(%ebp),%edx
+lea    (%edx,%eax,1),%eax
+sub    $0x55e,%eax
+mov    %cl,(%eax)
+jmp    <T> <_ZN5CUser15send_buddy_listEv+0x12e>
+mov    -0x14(%ebp),%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+shl    $0x3,%eax
+add    %edx,%eax
+lea    -0x8(%ebp),%edx
+lea    (%edx,%eax,1),%eax
+sub    $0x55d,%eax
+movb   $0x0,(%eax)
+mov    -0x14(%ebp),%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+shl    $0x3,%eax
+add    %edx,%eax
+lea    -0x8(%ebp),%edx
+lea    (%edx,%eax,1),%eax
+sub    $0x55e,%eax
+movb   $0xff,(%eax)
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIP16STPvPBuddyDBInfoSt6vectorIS1_SaIS1_EEEdeEv>
 mov    (%eax),%edx
+mov    %edx,-0x47(%ebp)
+mov    0x4(%eax),%edx
+mov    %edx,-0x43(%ebp)
+mov    0x8(%eax),%edx
 mov    %edx,-0x3f(%ebp)
-mov    0x4(%eax),%edx
+mov    0xc(%eax),%edx
 mov    %edx,-0x3b(%ebp)
-mov    0x8(%eax),%edx
+mov    0x10(%eax),%edx
 mov    %edx,-0x37(%ebp)
-mov    0xc(%eax),%edx
+mov    0x14(%eax),%edx
 mov    %edx,-0x33(%ebp)
-mov    0x10(%eax),%edx
+mov    0x18(%eax),%edx
 mov    %edx,-0x2f(%ebp)
-mov    0x14(%eax),%edx
+mov    0x1c(%eax),%edx
 mov    %edx,-0x2b(%ebp)
-mov    0x18(%eax),%edx
+mov    0x20(%eax),%edx
 mov    %edx,-0x27(%ebp)
-mov    0x1c(%eax),%edx
+mov    0x24(%eax),%edx
 mov    %edx,-0x23(%ebp)
-mov    0x20(%eax),%edx
-mov    %edx,-0x1f(%ebp)
-mov    0x24(%eax),%edx
-mov    %edx,-0x1b(%ebp)
 movzwl 0x28(%eax),%edx
-mov    %dx,-0x17(%ebp)
+mov    %dx,-0x1f(%ebp)
 movzbl 0x2a(%eax),%eax
-mov    %al,-0x15(%ebp)
-lea    -0x3f(%ebp),%eax
+mov    %al,-0x1d(%ebp)
+lea    -0x47(%ebp),%eax
 mov    %eax,-0xc(%ebp)
 mov    -0x14(%ebp),%edx
 mov    -0xc(%ebp),%eax
 movzbl (%eax),%ecx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x3,%eax
 add    %edx,%eax
 lea    -0x8(%ebp),%edx
 lea    (%edx,%eax,1),%eax
-sub    $0x566,%eax
-mov    %cl,0x6(%eax)
+sub    $0x55f,%eax
+mov    %cl,(%eax)
 mov    -0x14(%ebp),%edx
 mov    -0xc(%ebp),%eax
 mov    0x5(%eax),%ecx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x3,%eax
 add    %edx,%eax
 lea    -0x8(%ebp),%edx
 lea    (%edx,%eax,1),%eax
-sub    $0x566,%eax
+sub    $0x565,%eax
 mov    %ecx,0x9(%eax)
 mov    -0x14(%ebp),%edx
 mov    -0xc(%ebp),%eax
 movzbl 0x27(%eax),%ecx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x3,%eax
 add    %edx,%eax
 lea    -0x8(%ebp),%edx
 lea    (%edx,%eax,1),%eax
-sub    $0x546,%eax
-mov    %cl,0xb(%eax)
+sub    $0x53a,%eax
+mov    %cl,(%eax)
 mov    -0x14(%ebp),%edx
 mov    -0xc(%ebp),%eax
 movzbl 0x28(%eax),%ecx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x3,%eax
 add    %edx,%eax
 lea    -0x8(%ebp),%edx
 lea    (%edx,%eax,1),%eax
-sub    $0x546,%eax
-mov    %cl,0xc(%eax)
+sub    $0x539,%eax
+mov    %cl,(%eax)
 mov    -0x14(%ebp),%edx
 mov    -0xc(%ebp),%eax
 movzbl 0x29(%eax),%ecx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x3,%eax
 add    %edx,%eax
 lea    -0x8(%ebp),%edx
 lea    (%edx,%eax,1),%eax
-sub    $0x546,%eax
-mov    %cl,0xd(%eax)
+sub    $0x538,%eax
+mov    %cl,(%eax)
 mov    -0x14(%ebp),%edx
 mov    -0xc(%ebp),%eax
 movzbl 0x2a(%eax),%ecx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x3,%eax
 add    %edx,%eax
 lea    -0x8(%ebp),%edx
 lea    (%edx,%eax,1),%eax
-sub    $0x546,%eax
-mov    %cl,0xe(%eax)
+sub    $0x537,%eax
+mov    %cl,(%eax)
 mov    -0xc(%ebp),%eax
 lea    0x9(%eax),%ecx
 mov    -0x14(%ebp),%edx
-lea    -0x57e(%ebp),%ebx
+lea    -0x57d(%ebp),%ebx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x3,%eax
 add    %edx,%eax
 add    $0x10,%eax
 lea    (%ebx,%eax,1),%eax
 add    $0xd,%eax
 movl   $0x1d,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
 addl   $0x1,-0x14(%ebp)
-lea    -0x48(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIP16STPvPBuddyDBInfoSt6vectorIS1_SaIS1_EEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x34(%eax),%edx
-lea    -0x44(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorI16STPvPBuddyDBInfoSaIS0_EE3endEv>
 sub    $0x4,%esp
-lea    -0x44(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxxneIP16STPvPBuddyDBInfoSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 test   %al,%al
 jne    <T> <_ZN5CUser15send_buddy_listEv+0x68>
-jmp    <T> <_ZN5CUser15send_buddy_listEv+0x2dd>
+jmp    <T> <_ZN5CUser15send_buddy_listEv+0x2d6>
 nop
-movzwl -0x57c(%ebp),%eax
+movzwl -0x57b(%ebp),%eax
 movzwl %ax,%ecx
-lea    -0x57e(%ebp),%edx
+lea    -0x57d(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN15CNetworkSession4SendEPKci>
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* CUser::send_buddy_list() */

void __thiscall CUser::_ZN5CUser15send_buddy_listEv(CUser *this)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  Packet_Response_PvP_Buddy_Conn_List local_582 [2];
  ushort local_580;
  undefined4 local_578;
  undefined4 local_574;
  undefined4 local_570;
  undefined1 auStack_56c [3];
  undefined4 uStack_569;
  undefined1 auStack_565 [30];
  undefined1 auStack_547 [1275];
  __normal_iterator<STPvPBuddyDBInfo*,std::vector<STPvPBuddyDBInfo,std::allocator<STPvPBuddyDBInfo>>>
  local_4c [4];
  __normal_iterator local_48 [5];
  undefined4 local_43;
  undefined4 local_3f;
  undefined4 local_3b;
  undefined4 local_37;
  undefined4 local_33;
  undefined4 local_2f;
  undefined4 local_2b;
  undefined4 local_27;
  undefined4 local_23;
  undefined4 local_1f;
  undefined2 local_1b;
  undefined1 local_19;
  int local_18;
  int local_14;
  undefined4 *local_10;
  
  Packet_Response_PvP_Buddy_Conn_List::_ZN35Packet_Response_PvP_Buddy_Conn_ListC2Ev(local_582);
  local_578 = *(undefined4 *)(this + 0xe);
  local_574 = *(undefined4 *)(this + 9);
  local_570 = CBuddyManager::_ZN13CBuddyManager8get_sizeEv((CBuddyManager *)(this + 0x34));
  local_18 = 0;
  std::vector<STPvPBuddyDBInfo,std::allocator<STPvPBuddyDBInfo>>::begin();
  while( true ) {
    std::vector<STPvPBuddyDBInfo,std::allocator<STPvPBuddyDBInfo>>::end();
    bVar1 = __gnu_cxx::operator!=(local_4c,local_48);
    if ((!bVar1) || (0x1f < local_18)) break;
    iVar2 = __gnu_cxx::
            __normal_iterator<STPvPBuddyDBInfo*,std::vector<STPvPBuddyDBInfo,std::allocator<STPvPBuddyDBInfo>>>
            ::operator*(local_4c);
    pcVar3 = (char *)__gnu_cxx::
                     __normal_iterator<STPvPBuddyDBInfo*,std::vector<STPvPBuddyDBInfo,std::allocator<STPvPBuddyDBInfo>>>
                     ::operator*(local_4c);
    local_14 = CUserManager::_ZN12CUserManager9find_userEcPKc
                         ((CUserManager *)g_user_manager,*pcVar3,(char *)(iVar2 + 9));
    if (local_14 == 0) {
      auStack_56c[local_18 * 0x29 + 2] = 0;
      auStack_56c[local_18 * 0x29 + 1] = 0xff;
    }
    else {
      auStack_56c[local_18 * 0x29 + 2] = 1;
      auStack_56c[local_18 * 0x29 + 1] = *(undefined1 *)(local_14 + 0xd);
    }
    puVar4 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<STPvPBuddyDBInfo*,std::vector<STPvPBuddyDBInfo,std::allocator<STPvPBuddyDBInfo>>>
             ::operator*(local_4c);
    local_43 = *puVar4;
    local_3f = puVar4[1];
    local_3b = puVar4[2];
    local_37 = puVar4[3];
    local_33 = puVar4[4];
    local_2f = puVar4[5];
    local_2b = puVar4[6];
    local_27 = puVar4[7];
    local_23 = puVar4[8];
    local_1f = puVar4[9];
    local_1b = *(undefined2 *)(puVar4 + 10);
    local_19 = *(undefined1 *)((int)puVar4 + 0x2a);
    local_10 = &local_43;
    auStack_56c[local_18 * 0x29] = (undefined1)local_43;
    *(undefined4 *)(auStack_56c + local_18 * 0x29 + 3) = *(undefined4 *)((int)local_10 + 5);
    auStack_547[local_18 * 0x29] = *(undefined1 *)((int)local_10 + 0x27);
    auStack_547[local_18 * 0x29 + 1] = *(undefined1 *)(local_10 + 10);
    auStack_547[local_18 * 0x29 + 2] = *(undefined1 *)((int)local_10 + 0x29);
    auStack_547[local_18 * 0x29 + 3] = *(undefined1 *)((int)local_10 + 0x2a);
    memcpy(auStack_565 + local_18 * 0x29,(void *)((int)local_10 + 9),0x1d);
    local_18 = local_18 + 1;
    __gnu_cxx::
    __normal_iterator<STPvPBuddyDBInfo*,std::vector<STPvPBuddyDBInfo,std::allocator<STPvPBuddyDBInfo>>>
    ::operator++(local_4c);
  }
  CNetworkSession::_ZN15CNetworkSession4SendEPKci
            (*(CNetworkSession **)this,(char *)local_582,(uint)local_580);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/Community/User.cpp](source/Community/User.cpp)（约第 218 行）：

```cpp
void CUser::send_buddy_list() {
    Packet_Response_PvP_Buddy_Conn_List packet;
    packet.charac_no = stGameUserInfo.charac_no;
    packet.sTGameUserInfo_what3_0x05 = stGameUserInfo.what_0x5;
    packet.buddyCount = buddyManager.get_size();
    // 原始：i = 0 初始化在 begin() 调用之前（ORIG movl $0x0,-0x14 先于 begin call）；
    // iBuddy 为 copy-init（iterator iBuddy = begin()），避免默认构造调用。
    int i = 0;
    std::vector<STPvPBuddyDBInfo>::iterator iBuddy = buddyManager.buddies.begin();
    while (iBuddy != buddyManager.buddies.end()) {
        if (i > 31) {
            break;
        }
        CUser* user = g_user_manager.find_user((*iBuddy).server_id, (*iBuddy).buddy_n_user_id_what);
        // 原始：user != NULL 分支内联在前（je 跳 NULL 分支），极性以 ORIG 反汇编为准
        if (user != NULL) {
            packet.buddies[i].isOnline = true;
            packet.buddies[i].channel_no = user->stGameUserInfo.channel_no;
        } else {
            packet.buddies[i].isOnline = false;
            packet.buddies[i].channel_no = -1;
        }
        STPvPBuddyDBInfo buddy = *iBuddy;
        // 原始：Ghidra 还原出 local_10 = &local_43 的指针形态（-0xc 槽），
        // 字段访问经指针重载（mov -0xc,%eax; movzbl (%eax)），非直接栈槽偏移。
        STPvPBuddyDBInfo *buddyPtr = &buddy;
        packet.buddies[i].server_id = buddyPtr->server_id;
        packet.buddies[i].charac_no = buddyPtr->charac_no;
        packet.buddies[i].variable_what1 = buddyPtr->variable_what1;
        packet.buddies[i].buddy_n_user_what2 = buddyPtr->buddy_n_user_what2;
        packet.buddies[i].variable_what2 = buddyPtr->variable_what2;
        packet.buddies[i].buddy_n_user_what3 = buddyPtr->buddy_n_user_what3;
        memcpy(packet.buddies[i].buddy_n_user_id_what, buddyPtr->buddy_n_user_id_what, 0x1d);
        i++;
        ++iBuddy;
    }
    networkSession->Send((char *)&packet, packet.packetSize);
}
```
