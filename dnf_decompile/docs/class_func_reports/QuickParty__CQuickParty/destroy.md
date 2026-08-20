# destroy

`_ZN10QuickParty11CQuickParty7destroyEv`

`QuickParty::CQuickParty::destroy()`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickParty` | `0x082695ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082695ca  _ZN10QuickParty11CQuickParty7destroyEv
#           QuickParty::CQuickParty::destroy()
# range [0x082695ca, 0x08269667]
082695ca +0x00:  push   %ebp
082695cb +0x01:  mov    %esp,%ebp
082695cd +0x03:  push   %esi
082695ce +0x04:  push   %ebx
082695cf +0x05:  sub    $0x20,%esp
082695d2 +0x08:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
082695d7 +0x0d:  mov    0x8(%ebp),%edx
082695da +0x10:  mov    %edx,0x4(%esp)
082695de +0x14:  mov    %eax,(%esp)
082695e1 +0x17:  call   08295608 <_ZN12CGameManager13PutQuickPartyEPN10QuickParty11CQuickPartyE>  ; CGameManager::PutQuickParty(QuickParty::CQuickParty*)
082695e6 +0x1c:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
082695eb +0x21:  add    $0x2d4,%eax
082695f0 +0x26:  mov    %eax,(%esp)
082695f3 +0x29:  call   0826ba60 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x32e>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x32e
082695f8 +0x2e:  mov    %eax,%ebx
082695fa +0x30:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
082695ff +0x35:  add    $0x1cc,%eax
08269604 +0x3a:  mov    %eax,(%esp)
08269607 +0x3d:  call   0826ba40 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x30e>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x30e
0826960c +0x42:  mov    %eax,%esi
0826960e +0x44:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08269613 +0x49:  add    $0x1cc,%eax
08269618 +0x4e:  mov    %eax,(%esp)
0826961b +0x51:  call   0826ba4a <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x318>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x318
08269620 +0x56:  sub    %eax,%esi
08269622 +0x58:  movl   $0x0,0xc(%esp)
0826962a +0x60:  movl   $0x32,0x8(%esp)
08269632 +0x68:  movl   $&_ZZN10QuickParty11CQuickParty7destroyEvE19__PRETTY_FUNCTION__,0x4(%esp)
0826963a +0x70:  lea    -0x18(%ebp),%eax
0826963d +0x73:  mov    %eax,(%esp)
08269640 +0x76:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08269645 +0x7b:  mov    %ebx,0xc(%esp)
08269649 +0x7f:  mov    %esi,0x8(%esp)
0826964d +0x83:  movl   $"QUICK_PARTY_LOG : QUICK 파티해제 됩니다. QUICK 파티수<%d>, 등록 QUICK 파티수<%d>",0x4(%esp)
08269655 +0x8b:  lea    -0x18(%ebp),%eax
08269658 +0x8e:  mov    %eax,(%esp)
0826965b +0x91:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08269660 +0x96:  add    $0x20,%esp
08269663 +0x99:  pop    %ebx
08269664 +0x9a:  pop    %esi
08269665 +0x9b:  pop    %ebp
08269666 +0x9c:  ret
08269667 +0x9d:  nop
```

## 反编译 C

```c
// QuickParty::CQuickParty::destroy @ 0x82695ca

/* QuickParty::CQuickParty::destroy() */

void __thiscall QuickParty::CQuickParty::destroy(CQuickParty *this)

{
  CGameManager *this_00;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  cMyTrace local_1c [16];
  
  this_00 = (CGameManager *)G_CGameManager();
  CGameManager::PutQuickParty(this_00,this);
  iVar1 = G_CGameManager();
  uVar2 = __gnu_cxx::
          hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
          ::size((hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
                  *)(iVar1 + 0x2d4));
  G_CGameManager();
  iVar1 = StaticPool<QuickParty::CQuickParty,300>::Size();
  iVar3 = G_CGameManager();
  iVar3 = StaticPool<QuickParty::CQuickParty,300>::Remain
                    ((StaticPool<QuickParty::CQuickParty,300> *)(iVar3 + 0x1cc));
  cMyTrace::cMyTrace(local_1c,"void QuickParty::CQuickParty::destroy()",0x32,0);
  cMyTrace::operator()(local_1c,&DAT_08bf5380,iVar1 - iVar3,uVar2);
  return;
}
```
