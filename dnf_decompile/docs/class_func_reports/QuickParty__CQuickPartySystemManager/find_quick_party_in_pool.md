# find_quick_party_in_pool

`_ZN10QuickParty24CQuickPartySystemManager24find_quick_party_in_poolERSt4listIiSaIiEE`

`QuickParty::CQuickPartySystemManager::find_quick_party_in_pool(std::list<int, std::allocator<int> >&)`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickPartySystemManager` | `0x0826a9fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826a9fe  _ZN10QuickParty24CQuickPartySystemManager24find_quick_party_in_poolERSt4listIiSaIiEE
#           QuickParty::CQuickPartySystemManager::find_quick_party_in_pool(std::list<int, std::allocator<int> >&)
# range [0x0826a9fe, 0x0826aa99]
0826a9fe +0x00:  push   %ebp
0826a9ff +0x01:  mov    %esp,%ebp
0826aa01 +0x03:  sub    $0x38,%esp
0826aa04 +0x06:  movl   $0x0,-0x10(%ebp)
0826aa0b +0x0d:  jmp    0826aa7c <+0x7e>
0826aa0d +0x0f:  mov    0xc(%ebp),%eax
0826aa10 +0x12:  mov    %eax,(%esp)
0826aa13 +0x15:  call   0826bca0 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x56e>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x56e
0826aa18 +0x1a:  mov    (%eax),%eax
0826aa1a +0x1c:  mov    %eax,-0xc(%ebp)
0826aa1d +0x1f:  mov    0xc(%ebp),%eax
0826aa20 +0x22:  mov    %eax,(%esp)
0826aa23 +0x25:  call   0826bcc8 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x596>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x596
0826aa28 +0x2a:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0826aa2d +0x2f:  mov    -0xc(%ebp),%edx
0826aa30 +0x32:  mov    %edx,0x4(%esp)
0826aa34 +0x36:  mov    %eax,(%esp)
0826aa37 +0x39:  call   08295572 <_ZN12CGameManager13GetQuickPartyEi>  ; CGameManager::GetQuickParty(int)
0826aa3c +0x3e:  mov    %eax,-0x10(%ebp)
0826aa3f +0x41:  cmpl   $0x0,-0x10(%ebp)
0826aa43 +0x45:  jne    0826aa94 <+0x96>
0826aa45 +0x47:  movl   $0x5,0xc(%esp)
0826aa4d +0x4f:  movl   $0x29c,0x8(%esp)
0826aa55 +0x57:  movl   $&_ZZN10QuickParty24CQuickPartySystemManager24find_quick_party_in_poolERSt4listIiSaIiEEE19__PRETTY_FUNCTION__,0x4(%esp)
0826aa5d +0x5f:  lea    -0x20(%ebp),%eax
0826aa60 +0x62:  mov    %eax,(%esp)
0826aa63 +0x65:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0826aa68 +0x6a:  movl   $"QUICK_PARTY_LOG : NO INTENDED ROUTINE!!",0x4(%esp)
0826aa70 +0x72:  lea    -0x20(%ebp),%eax
0826aa73 +0x75:  mov    %eax,(%esp)
0826aa76 +0x78:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0826aa7b +0x7d:  nop
0826aa7c +0x7e:  mov    0xc(%ebp),%eax
0826aa7f +0x81:  mov    %eax,(%esp)
0826aa82 +0x84:  call   082373b6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xca60>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xca60
0826aa87 +0x89:  xor    $0x1,%eax
0826aa8a +0x8c:  test   %al,%al
0826aa8c +0x8e:  jne    0826aa0d <+0xf>
0826aa92 +0x94:  jmp    0826aa95 <+0x97>
0826aa94 +0x96:  nop
0826aa95 +0x97:  mov    -0x10(%ebp),%eax
0826aa98 +0x9a:  leave
0826aa99 +0x9b:  ret
```

## 反编译 C

```c
// QuickParty::CQuickPartySystemManager::find_quick_party_in_pool @ 0x826a9fe

/* QuickParty::CQuickPartySystemManager::find_quick_party_in_pool(std::list<int, std::allocator<int>
   >&) */

int __thiscall
QuickParty::CQuickPartySystemManager::find_quick_party_in_pool
          (CQuickPartySystemManager *this,list *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  cMyTrace local_24 [16];
  int local_14;
  undefined4 local_10;
  
  local_14 = 0;
  while( true ) {
    cVar1 = std::list<int,std::allocator<int>>::empty((list<int,std::allocator<int>> *)param_1);
    if (cVar1 == '\x01') {
      return local_14;
    }
    puVar2 = (undefined4 *)std::list<int,std::allocator<int>>::front();
    local_10 = *puVar2;
    std::list<int,std::allocator<int>>::pop_front((list<int,std::allocator<int>> *)param_1);
    iVar3 = G_CGameManager();
    local_14 = CGameManager::GetQuickParty(iVar3);
    if (local_14 != 0) break;
    cMyTrace::cMyTrace(local_24,
                       "QuickParty::CQuickParty* QuickParty::CQuickPartySystemManager::find_quick_party_in_pool(QuickParty::LIST_QUICK_PARTY&)"
                       ,0x29c,5);
    cMyTrace::operator()(local_24,"QUICK_PARTY_LOG : NO INTENDED ROUTINE!!");
  }
  return local_14;
}
```
