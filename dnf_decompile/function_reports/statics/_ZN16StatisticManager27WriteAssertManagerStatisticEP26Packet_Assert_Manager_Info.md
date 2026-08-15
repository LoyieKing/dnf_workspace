# _ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info

`StatisticManager::WriteAssertManagerStatistic(Packet_Assert_Manager_Info*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8070540` | `0x333` | `0x80706b2` | `0x32f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,200 +1,197 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x650,%esp
 cmpl   $0x0,0xc(%ebp)
-je     <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x328>
-lea    -0x642(%ebp),%eax
+je     <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x324>
+lea    -0x63e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18STAssertManagerKeyC1Ev>
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    0xc(%ebp),%edx
 add    $0xe,%edx
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
-lea    -0x642(%ebp),%eax
+lea    -0x63e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,0x8(%esp)
-lea    -0x642(%ebp),%eax
+lea    -0x63e(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager9AMDecryptEPvj>
 mov    0xc(%ebp),%eax
 movzwl 0x10e(%eax),%eax
-mov    %ax,-0x542(%ebp)
+mov    %ax,-0x53e(%ebp)
 mov    0xc(%ebp),%eax
 mov    0x110(%eax),%eax
 test   %eax,%eax
 js     <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x139>
 mov    0xc(%ebp),%eax
 mov    0x110(%eax),%eax
 cmp    $0x100,%eax
 jg     <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x139>
 mov    0xc(%ebp),%eax
 mov    0x110(%eax),%eax
 mov    0xc(%ebp),%edx
 add    $0x114,%edx
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
-lea    -0x642(%ebp),%eax
+lea    -0x63e(%ebp),%eax
 add    $0x102,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    0xc(%ebp),%eax
 mov    0x110(%eax),%eax
 mov    %eax,0x8(%esp)
-lea    -0x642(%ebp),%eax
+lea    -0x63e(%ebp),%eax
 add    $0x102,%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager9AMDecryptEPvj>
 movl   $0x2b5,0x8(%esp)
 movl   $&_ZZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_InfoE12__FUNCTION__,0x4(%esp)
-lea    -0x43c(%ebp),%eax
+lea    -0x438(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-lea    -0x642(%ebp),%eax
+lea    -0x63e(%ebp),%eax
 add    $0x102,%eax
 mov    %eax,0xc(%esp)
 movl   $"[AssertManager] Reason(%s)",0x8(%esp)
 movl   $"./log/Statistic",0x4(%esp)
-lea    -0x43c(%ebp),%eax
+lea    -0x438(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 add    $0xe0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapI18STAssertManagerKeyiSt4lessIS0_ESaISt4pairIKS0_iEEE4sizeEv>
 cmp    $0x63,%eax
 seta   %al
 test   %al,%al
 je     <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x194>
 movl   $0x2ba,0x8(%esp)
 movl   $&_ZZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_InfoE12__FUNCTION__,0x4(%esp)
-lea    -0x434(%ebp),%eax
+lea    -0x430(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"[AssertManager] Map 100 Over!!!",0x8(%esp)
 movl   $"./log/Statistic",0x4(%esp)
-lea    -0x434(%ebp),%eax
+lea    -0x430(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x318>
+jmp    <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x314>
 mov    0x8(%ebp),%eax
 lea    0xe0(%eax),%ecx
-lea    -0x440(%ebp),%eax
-lea    -0x642(%ebp),%edx
+lea    -0x43c(%ebp),%eax
+lea    -0x63e(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI18STAssertManagerKeyiSt4lessIS0_ESaISt4pairIKS0_iEEE4findERS4_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 add    $0xe0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapI18STAssertManagerKeyiSt4lessIS0_ESaISt4pairIKS0_iEEE5emptyEv>
 test   %al,%al
 jne    <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x20a>
 mov    0x8(%ebp),%eax
 lea    0xe0(%eax),%edx
-lea    -0x42c(%ebp),%eax
+lea    -0x428(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI18STAssertManagerKeyiSt4lessIS0_ESaISt4pairIKS0_iEEE3endEv>
 sub    $0x4,%esp
-lea    -0x42c(%ebp),%eax
+lea    -0x428(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x440(%ebp),%eax
+lea    -0x43c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK18STAssertManagerKeyiEEeqERKS4_>
 test   %al,%al
 je     <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x211>
 mov    $0x1,%eax
 jmp    <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x216>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x2d5>
-movl   $0x1,-0x10(%ebp)
-lea    -0x218(%ebp),%eax
-lea    -0x10(%ebp),%edx
+je     <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x2d7>
+movl   $0x1,-0xc(%ebp)
+lea    -0x214(%ebp),%eax
+lea    -0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
-lea    -0x642(%ebp),%edx
+lea    -0x63e(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIR18STAssertManagerKeyiESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 sub    $0x4,%esp
-lea    -0x218(%ebp),%eax
+lea    -0x214(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x420(%ebp),%eax
+lea    -0x41c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18STAssertManagerKeyiEC1IS0_iEEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0xe0(%eax),%ecx
-lea    -0x428(%ebp),%eax
-lea    -0x420(%ebp),%edx
+lea    -0x424(%ebp),%eax
+lea    -0x41c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI18STAssertManagerKeyiSt4lessIS0_ESaISt4pairIKS0_iEEE6insertERKS5_>
 sub    $0x4,%esp
-lea    -0x420(%ebp),%eax
+lea    -0x41c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18STAssertManagerKeyiED1Ev>
-lea    -0x218(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairI18STAssertManagerKeyiED1Ev>
-jmp    <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x318>
+jmp    <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x2c7>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x420(%ebp),%eax
+lea    -0x41c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18STAssertManagerKeyiED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x2bd>
+jmp    <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x2af>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x218(%ebp),%eax
+lea    -0x214(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairI18STAssertManagerKeyiED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x2fa>
-lea    -0x440(%ebp),%eax
+jmp    <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x2f6>
+lea    -0x214(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairI18STAssertManagerKeyiED1Ev>
+jmp    <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x314>
+lea    -0x43c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK18STAssertManagerKeyiEEptEv>
-add    $0x204,%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-mov    (%eax),%eax
-lea    0x1(%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %edx,(%eax)
-jmp    <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x318>
+mov    0x204(%eax),%edx
+add    $0x1,%edx
+mov    %edx,0x204(%eax)
+jmp    <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x314>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x642(%ebp),%eax
+lea    -0x63e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18STAssertManagerKeyD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x642(%ebp),%eax
+lea    -0x63e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18STAssertManagerKeyD1Ev>
-jmp    <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x329>
+jmp    <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x325>
 nop
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::WriteAssertManagerStatistic(Packet_Assert_Manager_Info*) */

void __thiscall
StatisticManager::_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info
          (StatisticManager *this,Packet_Assert_Manager_Info *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  STAssertManagerKey local_646 [256];
  undefined2 local_546;
  undefined1 auStack_544 [256];
  STAssertManagerKey local_444 [4];
  CMyFileLog local_440 [8];
  CMyFileLog local_438 [8];
  map<STAssertManagerKey,int,std::less<STAssertManagerKey>,std::allocator<std::pair<STAssertManagerKey_const,int>>>
  local_430 [4];
  pair local_42c [8];
  pair<STAssertManagerKey_const,int> local_424 [520];
  STAssertManagerKey local_21c [520];
  undefined4 local_14;
  int *local_10;
  
  if (param_1 == (Packet_Assert_Manager_Info *)0x0) {
    return;
  }
  STAssertManagerKey::STAssertManagerKey(local_646);
  memcpy(local_646,param_1 + 0xe,*(size_t *)(param_1 + 10));
  AMDecrypt(this,local_646,*(uint *)(param_1 + 10));
  local_546 = *(undefined2 *)(param_1 + 0x10e);
  if ((-1 < *(int *)(param_1 + 0x110)) && (*(int *)(param_1 + 0x110) < 0x101)) {
    memcpy(auStack_544,param_1 + 0x114,*(size_t *)(param_1 + 0x110));
    AMDecrypt(this,auStack_544,*(uint *)(param_1 + 0x110));
                    /* try { // try from 08070647 to 08070783 has its CatchHandler @ 0807083a */
    CMyFileLog::CMyFileLog(local_440,"WriteAssertManagerStatistic",0x2b5);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_440,"./log/Statistic","[AssertManager] Reason(%s)",auStack_544);
  }
  uVar3 = std::
          map<STAssertManagerKey,int,std::less<STAssertManagerKey>,std::allocator<std::pair<STAssertManagerKey_const,int>>>
          ::size((map<STAssertManagerKey,int,std::less<STAssertManagerKey>,std::allocator<std::pair<STAssertManagerKey_const,int>>>
                  *)(this + 0xe0));
  if (99 < uVar3) {
    CMyFileLog::CMyFileLog(local_438,"WriteAssertManagerStatistic",0x2ba);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_438,"./log/Statistic","[AssertManager] Map 100 Over!!!");
    goto LAB_08070858;
  }
  std::
  map<STAssertManagerKey,int,std::less<STAssertManagerKey>,std::allocator<std::pair<STAssertManagerKey_const,int>>>
  ::find(local_444);
  cVar2 = std::
          map<STAssertManagerKey,int,std::less<STAssertManagerKey>,std::allocator<std::pair<STAssertManagerKey_const,int>>>
          ::empty((map<STAssertManagerKey,int,std::less<STAssertManagerKey>,std::allocator<std::pair<STAssertManagerKey_const,int>>>
                   *)(this + 0xe0));
  if (cVar2 == '\0') {
    std::
    map<STAssertManagerKey,int,std::less<STAssertManagerKey>,std::allocator<std::pair<STAssertManagerKey_const,int>>>
    ::end(local_430);
    cVar2 = std::_Rb_tree_iterator<std::pair<STAssertManagerKey_const,int>>::operator==
                      ((_Rb_tree_iterator<std::pair<STAssertManagerKey_const,int>> *)local_444,
                       (_Rb_tree_iterator *)local_430);
    if (cVar2 != '\0') goto LAB_0807074a;
    bVar1 = false;
  }
  else {
LAB_0807074a:
    bVar1 = true;
  }
  if (bVar1) {
    local_14 = 1;
    std::make_pair<STAssertManagerKey&,int>(local_21c,(int *)local_646);
                    /* try { // try from 0807079a to 0807079e has its CatchHandler @ 080707fd */
    std::pair<STAssertManagerKey_const,int>::pair<STAssertManagerKey,int>(local_424,local_21c);
                    /* try { // try from 080707bf to 080707c3 has its CatchHandler @ 080707e5 */
    std::
    map<STAssertManagerKey,int,std::less<STAssertManagerKey>,std::allocator<std::pair<STAssertManagerKey_const,int>>>
    ::insert(local_42c);
    std::pair<STAssertManagerKey_const,int>::~pair(local_424);
    std::pair<STAssertManagerKey,int>::~pair((pair<STAssertManagerKey,int> *)local_21c);
  }
  else {
    iVar4 = std::_Rb_tree_iterator<std::pair<STAssertManagerKey_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<STAssertManagerKey_const,int>> *)local_444);
    local_10 = (int *)(iVar4 + 0x204);
    *local_10 = *local_10 + 1;
  }
LAB_08070858:
  STAssertManagerKey::~STAssertManagerKey(local_646);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 664 行）：

```cpp
void StatisticManager::WriteAssertManagerStatistic(Packet_Assert_Manager_Info* pkt)
{
    if (pkt == 0)
    {
        return;
    }
    struct __attribute__((packed)) Wire
    {
        char m_hdr[0xa];
        unsigned int m_f0a;
        char m_pad[0x100];
        unsigned short m_f10e;
        int m_f110;
    };
    STAssertManagerKey key;
    memcpy(key.m_fileName, (char*)pkt + 0xe, ((Wire*)pkt)->m_f0a);
    AMDecrypt(key.m_fileName, ((Wire*)pkt)->m_f0a);
    key.m_fileLine = ((Wire*)pkt)->m_f10e;
    if (-1 < ((Wire*)pkt)->m_f110 && ((Wire*)pkt)->m_f110 < 0x101)
    {
        memcpy(key.m_reason, (char*)pkt + 0x114, ((Wire*)pkt)->m_f110);
        AMDecrypt(key.m_reason, ((Wire*)pkt)->m_f110);
        DNF_LOG_SCOPE_LINE(0x2b5, "./log/Statistic", "[AssertManager] Reason(%s)", key.m_reason);
    }
    if (99 < m_assertManager.size())
    {
        DNF_LOG_SCOPE_LINE(0x2ba, "./log/Statistic", "[AssertManager] Map 100 Over!!!");
        return;
    }
    std::map<STAssertManagerKey, int>::iterator it = m_assertManager.find(key);
    if (m_assertManager.empty() || it == m_assertManager.end())
    {
        m_assertManager.insert(std::make_pair(key, 1));
    }
    else
    {
        it->second += 1;
    }
}
```
