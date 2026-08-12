# _ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item

`StatisticManager::WriteHellPartyStatisticItem(Packet_HellParty_Statistic_Item*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8071138` | `0x210` | `0x8071106` | `0x212` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,152 +1,155 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0xa0,%esp
 lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN27STHellPartyStatisticItemKeyC1Ev>
 mov    0xc(%ebp),%eax
 movzbl 0xa(%eax),%eax
+test   %al,%al
+setne  %al
 mov    %al,-0x74(%ebp)
 mov    0xc(%ebp),%eax
 mov    0xb(%eax),%eax
 mov    %eax,-0x70(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0xf(%eax),%eax
 mov    %al,-0x6c(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0x10(%eax),%eax
 mov    %al,-0x6b(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0x11(%eax),%eax
 mov    %al,-0x6a(%ebp)
 lea    -0x90(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18HellPartyItenmDataC1Ev>
 mov    0xc(%ebp),%eax
 add    $0x12,%eax
 movl   $0x18,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x90(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    0x8(%ebp),%eax
 lea    0x128(%eax),%ecx
 lea    -0x94(%ebp),%eax
 lea    -0x74(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI27STHellPartyStatisticItemKey18HellPartyItenmDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 add    $0x128,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapI27STHellPartyStatisticItemKey18HellPartyItenmDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE5emptyEv>
 test   %al,%al
-jne    <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0xe5>
+jne    <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0xea>
 mov    0x8(%ebp),%eax
 lea    0x128(%eax),%edx
 lea    -0x68(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI27STHellPartyStatisticItemKey18HellPartyItenmDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x68(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x94(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK27STHellPartyStatisticItemKey18HellPartyItenmDataEEeqERKS5_>
 test   %al,%al
-je     <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0xec>
+je     <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0xf1>
 mov    $0x1,%eax
-jmp    <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0xf1>
+jmp    <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0xf6>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0x191>
+je     <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0x195>
 lea    -0x34(%ebp),%eax
 lea    -0x90(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x74(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIR27STHellPartyStatisticItemKeyR18HellPartyItenmDataESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 sub    $0x4,%esp
 lea    -0x34(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK27STHellPartyStatisticItemKey18HellPartyItenmDataEC1IS0_S2_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x128(%eax),%ecx
 lea    -0x64(%ebp),%eax
 lea    -0x5c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI27STHellPartyStatisticItemKey18HellPartyItenmDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE6insertERKS6_>
 sub    $0x4,%esp
 lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK27STHellPartyStatisticItemKey18HellPartyItenmDataED1Ev>
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairI27STHellPartyStatisticItemKey18HellPartyItenmDataED1Ev>
-jmp    <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0x1ed>
+jmp    <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0x188>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK27STHellPartyStatisticItemKey18HellPartyItenmDataED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0x17c>
+jmp    <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0x173>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairI27STHellPartyStatisticItemKey18HellPartyItenmDataED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0x1bc>
+jmp    <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0x1ba>
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairI27STHellPartyStatisticItemKey18HellPartyItenmDataED1Ev>
+jmp    <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0x1d2>
 lea    -0x94(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK27STHellPartyStatisticItemKey18HellPartyItenmDataEEptEv>
-add    $0xc,%eax
-mov    %eax,-0xc(%ebp)
+lea    0xc(%eax),%edx
 lea    -0x90(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZN18HellPartyItenmDatapLERKS_>
-jmp    <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0x1ed>
+jmp    <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0x1d2>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x90(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18HellPartyItenmDataD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
+jmp    <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0x1e2>
+lea    -0x90(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN18HellPartyItenmDataD1Ev>
+jmp    <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0x1fd>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN27STHellPartyStatisticItemKeyD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x90(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN18HellPartyItenmDataD1Ev>
 lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN27STHellPartyStatisticItemKeyD1Ev>
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::WriteHellPartyStatisticItem(Packet_HellParty_Statistic_Item*) */

void __thiscall
StatisticManager::
_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item
          (StatisticManager *this,Packet_HellParty_Statistic_Item *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  STHellPartyStatisticItemKey local_98 [4];
  HellPartyItenmData local_94 [4];
  undefined1 auStack_90 [24];
  Packet_HellParty_Statistic_Item local_78 [4];
  undefined4 local_74;
  Packet_HellParty_Statistic_Item local_70;
  Packet_HellParty_Statistic_Item local_6f;
  Packet_HellParty_Statistic_Item local_6e;
  map<STHellPartyStatisticItemKey,HellPartyItenmData,std::less<STHellPartyStatisticItemKey>,std::allocator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>>
  local_6c [4];
  pair local_68 [8];
  pair<STHellPartyStatisticItemKey_const,HellPartyItenmData> local_60 [40];
  STHellPartyStatisticItemKey local_38 [40];
  HellPartyItenmData *local_10;
  
  STHellPartyStatisticItemKey::STHellPartyStatisticItemKey((STHellPartyStatisticItemKey *)local_78);
  local_78[0] = param_1[10];
  local_74 = *(undefined4 *)(param_1 + 0xb);
  local_70 = param_1[0xf];
  local_6f = param_1[0x10];
  local_6e = param_1[0x11];
  HellPartyItenmData::HellPartyItenmData(local_94);
  memcpy(auStack_90,param_1 + 0x12,0x18);
                    /* try { // try from 080711cd to 0807124c has its CatchHandler @ 080712f4 */
  std::
  map<STHellPartyStatisticItemKey,HellPartyItenmData,std::less<STHellPartyStatisticItemKey>,std::allocator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>>
  ::find(local_98);
  cVar2 = std::
          map<STHellPartyStatisticItemKey,HellPartyItenmData,std::less<STHellPartyStatisticItemKey>,std::allocator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>>
          ::empty((map<STHellPartyStatisticItemKey,HellPartyItenmData,std::less<STHellPartyStatisticItemKey>,std::allocator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>>
                   *)(this + 0x128));
  if (cVar2 == '\0') {
    std::
    map<STHellPartyStatisticItemKey,HellPartyItenmData,std::less<STHellPartyStatisticItemKey>,std::allocator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>>
    ::end(local_6c);
    cVar2 = std::_Rb_tree_iterator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>
            ::operator==((_Rb_tree_iterator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>
                          *)local_98,(_Rb_tree_iterator *)local_6c);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_08071229;
    }
  }
  bVar1 = true;
LAB_08071229:
  if (bVar1) {
    std::make_pair<STHellPartyStatisticItemKey&,HellPartyItenmData&>
              (local_38,(HellPartyItenmData *)local_78);
                    /* try { // try from 0807125d to 08071261 has its CatchHandler @ 080712b4 */
    std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>::
    pair<STHellPartyStatisticItemKey,HellPartyItenmData>(local_60,local_38);
                    /* try { // try from 0807127c to 08071280 has its CatchHandler @ 0807129f */
    std::
    map<STHellPartyStatisticItemKey,HellPartyItenmData,std::less<STHellPartyStatisticItemKey>,std::allocator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>>
    ::insert(local_68);
    std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>::~pair(local_60);
    std::pair<STHellPartyStatisticItemKey,HellPartyItenmData>::~pair
              ((pair<STHellPartyStatisticItemKey,HellPartyItenmData> *)local_38);
  }
  else {
    iVar3 = std::_Rb_tree_iterator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>
            ::operator->((_Rb_tree_iterator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>
                          *)local_98);
    local_10 = (HellPartyItenmData *)(iVar3 + 0xc);
    HellPartyItenmData::operator+=(local_10,local_94);
  }
  HellPartyItenmData::~HellPartyItenmData(local_94);
  STHellPartyStatisticItemKey::~STHellPartyStatisticItemKey((STHellPartyStatisticItemKey *)local_78)
  ;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 781 行）：

```cpp
void StatisticManager::WriteHellPartyStatisticItem(Packet_HellParty_Statistic_Item* pkt)
{
    struct __attribute__((packed)) Wire
    {
        char m_hdr[0xa];
        char m_f0a;
        unsigned int m_f0b;
        char m_f0f;
        char m_f10;
        char m_f11;
    };
    int m_padFrame;
    STHellPartyStatisticItemKey key;
    key.m_field0 = ((Wire*)pkt)->m_f0a;
    key.m_field4 = ((Wire*)pkt)->m_f0b;
    key.m_field8 = ((Wire*)pkt)->m_f0f;
    key.m_field9 = ((Wire*)pkt)->m_f10;
    key.m_fielda = ((Wire*)pkt)->m_f11;
    HellPartyItenmData value;
    memcpy(value.m_data, (char*)pkt + 0x12, 0x18);
    std::map<STHellPartyStatisticItemKey, HellPartyItenmData>::iterator it =
        m_hellParty.find(key);
    if (m_hellParty.empty() || it == m_hellParty.end())
    {
        m_hellParty.insert(std::make_pair(key, value));
    }
    else
    {
        it->second += value;
    }
}
```
