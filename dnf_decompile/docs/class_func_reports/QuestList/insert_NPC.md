# insert_NPC

`_ZN9QuestList10insert_NPCEi`

`QuestList::insert_NPC(int)`

| 类 | 地址 |
|---|---|
| `QuestList` | `0x08354f02` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08354f02  _ZN9QuestList10insert_NPCEi
#           QuestList::insert_NPC(int)
# range [0x08354f02, 0x08354fc7]
08354f02 +0x00:  push   %ebp
08354f03 +0x01:  mov    %esp,%ebp
08354f05 +0x03:  sub    $0x38,%esp
08354f08 +0x06:  mov    0xc(%ebp),%eax
08354f0b +0x09:  test   %eax,%eax
08354f0d +0x0b:  je     08354fc2 <+0xc0>
08354f13 +0x11:  lea    -0x14(%ebp),%eax
08354f16 +0x14:  mov    %eax,(%esp)
08354f19 +0x17:  call   0838f320 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1edc0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1edc0
08354f1e +0x1c:  mov    0x8(%ebp),%eax
08354f21 +0x1f:  lea    0xe0(%eax),%edx
08354f27 +0x25:  lea    -0x1c(%ebp),%eax
08354f2a +0x28:  mov    %edx,0x4(%esp)
08354f2e +0x2c:  mov    %eax,(%esp)
08354f31 +0x2f:  call   082373c8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xca72>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xca72
08354f36 +0x34:  sub    $0x4,%esp
08354f39 +0x37:  mov    -0x1c(%ebp),%eax
08354f3c +0x3a:  mov    %eax,-0x14(%ebp)
08354f3f +0x3d:  jmp    08354f77 <+0x75>
08354f41 +0x3f:  lea    -0x14(%ebp),%eax
08354f44 +0x42:  mov    %eax,(%esp)
08354f47 +0x45:  call   0823742a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcad4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcad4
08354f4c +0x4a:  mov    (%eax),%edx
08354f4e +0x4c:  mov    0xc(%ebp),%eax
08354f51 +0x4f:  cmp    %eax,%edx
08354f53 +0x51:  sete   %al
08354f56 +0x54:  test   %al,%al
08354f58 +0x56:  jne    08354fc5 <+0xc3>
08354f5a +0x58:  lea    -0xc(%ebp),%eax
08354f5d +0x5b:  movl   $0x0,0x8(%esp)
08354f65 +0x63:  lea    -0x14(%ebp),%edx
08354f68 +0x66:  mov    %edx,0x4(%esp)
08354f6c +0x6a:  mov    %eax,(%esp)
08354f6f +0x6d:  call   08391bd2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x21672>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x21672
08354f74 +0x72:  sub    $0x4,%esp
08354f77 +0x75:  mov    0x8(%ebp),%eax
08354f7a +0x78:  lea    0xe0(%eax),%edx
08354f80 +0x7e:  lea    -0x10(%ebp),%eax
08354f83 +0x81:  mov    %edx,0x4(%esp)
08354f87 +0x85:  mov    %eax,(%esp)
08354f8a +0x88:  call   0826c43e <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xd0c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xd0c
08354f8f +0x8d:  sub    $0x4,%esp
08354f92 +0x90:  lea    -0x10(%ebp),%eax
08354f95 +0x93:  mov    %eax,0x4(%esp)
08354f99 +0x97:  lea    -0x14(%ebp),%eax
08354f9c +0x9a:  mov    %eax,(%esp)
08354f9f +0x9d:  call   0826c462 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xd30>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xd30
08354fa4 +0xa2:  test   %al,%al
08354fa6 +0xa4:  jne    08354f41 <+0x3f>
08354fa8 +0xa6:  mov    0x8(%ebp),%eax
08354fab +0xa9:  lea    0xe0(%eax),%edx
08354fb1 +0xaf:  lea    0xc(%ebp),%eax
08354fb4 +0xb2:  mov    %eax,0x4(%esp)
08354fb8 +0xb6:  mov    %edx,(%esp)
08354fbb +0xb9:  call   0826cbae <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x147c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x147c
08354fc0 +0xbe:  jmp    08354fc6 <+0xc4>
08354fc2 +0xc0:  nop
08354fc3 +0xc1:  jmp    08354fc6 <+0xc4>
08354fc5 +0xc3:  nop
08354fc6 +0xc4:  leave
08354fc7 +0xc5:  ret
```

## 反编译 C

```c
// QuestList::insert_NPC @ 0x8354f02

/* QuestList::insert_NPC(int) */

void __thiscall QuestList::insert_NPC(QuestList *this,int param_1)

{
  char cVar1;
  int *piVar2;
  _List_iterator<int> local_18 [4];
  _List_iterator local_14 [4];
  _List_iterator<int> local_10 [12];
  
  if (param_1 != 0) {
    std::_List_iterator<int>::_List_iterator(local_18);
    std::list<int,std::allocator<int>>::begin();
    while( true ) {
      std::list<int,std::allocator<int>>::end();
      cVar1 = std::_List_iterator<int>::operator!=(local_18,local_14);
      if (cVar1 == '\0') break;
      piVar2 = (int *)std::_List_iterator<int>::operator*(local_18);
      if (*piVar2 == param_1) {
        return;
      }
      std::_List_iterator<int>::operator++(local_10,(int)local_18);
    }
    std::list<int,std::allocator<int>>::push_back
              ((list<int,std::allocator<int>> *)(this + 0xe0),&param_1);
  }
  return;
}
```
