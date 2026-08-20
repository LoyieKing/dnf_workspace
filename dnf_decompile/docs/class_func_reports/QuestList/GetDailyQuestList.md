# GetDailyQuestList

`_ZN9QuestList17GetDailyQuestListERSt4listIiSaIiEE`

`QuestList::GetDailyQuestList(std::list<int, std::allocator<int> >&)`

| 类 | 地址 |
|---|---|
| `QuestList` | `0x0835589e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0835589e  _ZN9QuestList17GetDailyQuestListERSt4listIiSaIiEE
#           QuestList::GetDailyQuestList(std::list<int, std::allocator<int> >&)
# range [0x0835589e, 0x08355a0f]
0835589e +0x000:  push   %ebp
0835589f +0x001:  mov    %esp,%ebp
083558a1 +0x003:  sub    $0x58,%esp
083558a4 +0x006:  lea    -0x24(%ebp),%eax
083558a7 +0x009:  mov    %eax,(%esp)
083558aa +0x00c:  call   0838f320 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1edc0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1edc0
083558af +0x011:  movl   $0x0,-0xc(%ebp)
083558b6 +0x018:  lea    -0x34(%ebp),%eax
083558b9 +0x01b:  mov    %eax,(%esp)
083558bc +0x01e:  call   08391c8a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2172a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2172a
083558c1 +0x023:  mov    0x8(%ebp),%eax
083558c4 +0x026:  lea    0xe0(%eax),%edx
083558ca +0x02c:  lea    -0x3c(%ebp),%eax
083558cd +0x02f:  mov    %edx,0x4(%esp)
083558d1 +0x033:  mov    %eax,(%esp)
083558d4 +0x036:  call   082373c8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xca72>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xca72
083558d9 +0x03b:  sub    $0x4,%esp
083558dc +0x03e:  mov    -0x3c(%ebp),%eax
083558df +0x041:  mov    %eax,-0x24(%ebp)
083558e2 +0x044:  jmp    083559d9 <+0x13b>
083558e7 +0x049:  lea    -0x24(%ebp),%eax
083558ea +0x04c:  mov    %eax,(%esp)
083558ed +0x04f:  call   0823742a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcad4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcad4
083558f2 +0x054:  mov    (%eax),%eax
083558f4 +0x056:  mov    %eax,-0x28(%ebp)
083558f7 +0x059:  mov    0x8(%ebp),%eax
083558fa +0x05c:  lea    0xbc(%eax),%ecx
08355900 +0x062:  lea    -0x1c(%ebp),%eax
08355903 +0x065:  lea    -0x28(%ebp),%edx
08355906 +0x068:  mov    %edx,0x8(%esp)
0835590a +0x06c:  mov    %ecx,0x4(%esp)
0835590e +0x070:  mov    %eax,(%esp)
08355911 +0x073:  call   0838f3c8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1ee68>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1ee68
08355916 +0x078:  sub    $0x4,%esp
08355919 +0x07b:  lea    -0x1c(%ebp),%eax
0835591c +0x07e:  mov    %eax,0x4(%esp)
08355920 +0x082:  lea    -0x34(%ebp),%eax
08355923 +0x085:  mov    %eax,(%esp)
08355926 +0x088:  call   08391d0c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x217ac>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x217ac
0835592b +0x08d:  mov    -0x34(%ebp),%eax
0835592e +0x090:  mov    %eax,-0x38(%ebp)
08355931 +0x093:  jmp    0835599f <+0x101>
08355933 +0x095:  lea    -0x38(%ebp),%eax
08355936 +0x098:  mov    %eax,(%esp)
08355939 +0x09b:  call   080c6f10 <_GLOBAL__I_g_ServerString_+0x47b>  ; global constructors keyed to g_ServerString_+0x47b
0835593e +0x0a0:  mov    0x4(%eax),%eax
08355941 +0x0a3:  mov    %eax,-0x2c(%ebp)
08355944 +0x0a6:  mov    -0x2c(%ebp),%eax
08355947 +0x0a9:  mov    %eax,0x4(%esp)
0835594b +0x0ad:  mov    0x8(%ebp),%eax
0835594e +0x0b0:  mov    %eax,(%esp)
08355951 +0x0b3:  call   08355a5c <_ZN9QuestList10find_questEi>  ; QuestList::find_quest(int)
08355956 +0x0b8:  mov    %eax,-0xc(%ebp)
08355959 +0x0bb:  cmpl   $0x0,-0xc(%ebp)
0835595d +0x0bf:  je     0835597e <+0xe0>
0835595f +0x0c1:  mov    -0xc(%ebp),%eax
08355962 +0x0c4:  mov    0x8(%eax),%eax
08355965 +0x0c7:  cmp    $0x3,%eax
08355968 +0x0ca:  jne    08355981 <+0xe3>
0835596a +0x0cc:  lea    -0x2c(%ebp),%eax
0835596d +0x0cf:  mov    %eax,0x4(%esp)
08355971 +0x0d3:  mov    0xc(%ebp),%eax
08355974 +0x0d6:  mov    %eax,(%esp)
08355977 +0x0d9:  call   0826cbae <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x147c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x147c
0835597c +0x0de:  jmp    08355982 <+0xe4>
0835597e +0x0e0:  nop
0835597f +0x0e1:  jmp    08355982 <+0xe4>
08355981 +0x0e3:  nop
08355982 +0x0e4:  lea    -0x14(%ebp),%eax
08355985 +0x0e7:  movl   $0x0,0x8(%esp)
0835598d +0x0ef:  lea    -0x38(%ebp),%edx
08355990 +0x0f2:  mov    %edx,0x4(%esp)
08355994 +0x0f6:  mov    %eax,(%esp)
08355997 +0x0f9:  call   08342b56 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4c23>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4c23
0835599c +0x0fe:  sub    $0x4,%esp
0835599f +0x101:  lea    -0x34(%ebp),%eax
083559a2 +0x104:  add    $0x4,%eax
083559a5 +0x107:  mov    %eax,0x4(%esp)
083559a9 +0x10b:  lea    -0x38(%ebp),%eax
083559ac +0x10e:  mov    %eax,(%esp)
083559af +0x111:  call   080c6efc <_GLOBAL__I_g_ServerString_+0x467>  ; global constructors keyed to g_ServerString_+0x467
083559b4 +0x116:  test   %al,%al
083559b6 +0x118:  jne    08355933 <+0x95>
083559bc +0x11e:  lea    -0x10(%ebp),%eax
083559bf +0x121:  movl   $0x0,0x8(%esp)
083559c7 +0x129:  lea    -0x24(%ebp),%edx
083559ca +0x12c:  mov    %edx,0x4(%esp)
083559ce +0x130:  mov    %eax,(%esp)
083559d1 +0x133:  call   08391bd2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x21672>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x21672
083559d6 +0x138:  sub    $0x4,%esp
083559d9 +0x13b:  mov    0x8(%ebp),%eax
083559dc +0x13e:  lea    0xe0(%eax),%edx
083559e2 +0x144:  lea    -0x20(%ebp),%eax
083559e5 +0x147:  mov    %edx,0x4(%esp)
083559e9 +0x14b:  mov    %eax,(%esp)
083559ec +0x14e:  call   0826c43e <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xd0c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xd0c
083559f1 +0x153:  sub    $0x4,%esp
083559f4 +0x156:  lea    -0x20(%ebp),%eax
083559f7 +0x159:  mov    %eax,0x4(%esp)
083559fb +0x15d:  lea    -0x24(%ebp),%eax
083559fe +0x160:  mov    %eax,(%esp)
08355a01 +0x163:  call   0826c462 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xd30>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xd30
08355a06 +0x168:  test   %al,%al
08355a08 +0x16a:  jne    083558e7 <+0x49>
08355a0e +0x170:  leave
08355a0f +0x171:  ret
```

## 反编译 C

```c
// QuestList::GetDailyQuestList @ 0x835589e

/* QuestList::GetDailyQuestList(std::list<int, std::allocator<int> >&) */

void __thiscall QuestList::GetDailyQuestList(QuestList *this,list *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_3c;
  undefined4 local_38;
  _Rb_tree_const_iterator a_Stack_34 [4];
  int local_30;
  undefined4 local_2c;
  _List_iterator<int> local_28 [4];
  _List_iterator local_24 [4];
  int local_20 [2];
  _Rb_tree_const_iterator<std::pair<int_const,int>> local_18 [4];
  _List_iterator<int> local_14 [4];
  int local_10;
  
  std::_List_iterator<int>::_List_iterator(local_28);
  local_10 = 0;
  std::
  pair<std::_Rb_tree_const_iterator<std::pair<int_const,int>>,std::_Rb_tree_const_iterator<std::pair<int_const,int>>>
  ::pair((pair<std::_Rb_tree_const_iterator<std::pair<int_const,int>>,std::_Rb_tree_const_iterator<std::pair<int_const,int>>>
          *)&local_38);
  std::list<int,std::allocator<int>>::begin();
  while( true ) {
    std::list<int,std::allocator<int>>::end();
    cVar1 = std::_List_iterator<int>::operator!=(local_28,local_24);
    if (cVar1 == '\0') break;
    puVar2 = (undefined4 *)std::_List_iterator<int>::operator*(local_28);
    local_2c = *puVar2;
    std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::equal_range
              (local_20);
    std::
    pair<std::_Rb_tree_const_iterator<std::pair<int_const,int>>,std::_Rb_tree_const_iterator<std::pair<int_const,int>>>
    ::operator=((pair<std::_Rb_tree_const_iterator<std::pair<int_const,int>>,std::_Rb_tree_const_iterator<std::pair<int_const,int>>>
                 *)&local_38,(pair *)local_20);
    local_3c = local_38;
    while (cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator!=
                             ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_3c,
                              a_Stack_34), cVar1 != '\0') {
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_3c);
      local_30 = *(int *)(iVar3 + 4);
      local_10 = find_quest((int)this);
      if ((local_10 != 0) && (*(int *)(local_10 + 8) == 3)) {
        std::list<int,std::allocator<int>>::push_back
                  ((list<int,std::allocator<int>> *)param_1,&local_30);
      }
      std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator++(local_18,(int)&local_3c);
    }
    std::_List_iterator<int>::operator++(local_14,(int)local_28);
  }
  return;
}
```
