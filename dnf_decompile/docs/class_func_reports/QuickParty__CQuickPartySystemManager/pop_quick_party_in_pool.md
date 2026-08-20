# pop_quick_party_in_pool

`_ZN10QuickParty24CQuickPartySystemManager23pop_quick_party_in_poolERiRNS_24STQuickPartyPoolMap_DataEiii`

`QuickParty::CQuickPartySystemManager::pop_quick_party_in_pool(int&, QuickParty::STQuickPartyPoolMap_Data&, int, int, int)`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickPartySystemManager` | `0x0826ae64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826ae64  _ZN10QuickParty24CQuickPartySystemManager23pop_quick_party_in_poolERiRNS_24STQuickPartyPoolMap_DataEiii
#           QuickParty::CQuickPartySystemManager::pop_quick_party_in_pool(int&, QuickParty::STQuickPartyPoolMap_Data&, int, int, int)
# range [0x0826ae64, 0x0826afb3]
0826ae64 +0x000:  push   %ebp
0826ae65 +0x001:  mov    %esp,%ebp
0826ae67 +0x003:  sub    $0x38,%esp
0826ae6a +0x006:  cmpl   $0x3,0x14(%ebp)
0826ae6e +0x00a:  jg     0826ae76 <+0x12>
0826ae70 +0x00c:  cmpl   $0x0,0x14(%ebp)
0826ae74 +0x010:  jns    0826ae80 <+0x1c>
0826ae76 +0x012:  mov    $0x0,%eax
0826ae7b +0x017:  jmp    0826afb2 <+0x14e>
0826ae80 +0x01c:  movl   $0x0,-0xc(%ebp)
0826ae87 +0x023:  cmpl   $0x0,0x14(%ebp)
0826ae8b +0x027:  jne    0826aee4 <+0x80>
0826ae8d +0x029:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0826ae92 +0x02e:  mov    %eax,(%esp)
0826ae95 +0x031:  call   08295450 <_ZN12CGameManager13GetQuickPartyEv>  ; CGameManager::GetQuickParty()
0826ae9a +0x036:  mov    %eax,-0xc(%ebp)
0826ae9d +0x039:  cmpl   $0x0,-0xc(%ebp)
0826aea1 +0x03d:  jne    0826aead <+0x49>
0826aea3 +0x03f:  mov    $0x0,%eax
0826aea8 +0x044:  jmp    0826afb2 <+0x14e>
0826aead +0x049:  mov    0x18(%ebp),%eax
0826aeb0 +0x04c:  mov    %eax,0x4(%esp)
0826aeb4 +0x050:  mov    -0xc(%ebp),%eax
0826aeb7 +0x053:  mov    %eax,(%esp)
0826aeba +0x056:  call   0826978c <_ZN10QuickParty11CQuickParty15set_party_indexEi>  ; QuickParty::CQuickParty::set_party_index(int)
0826aebf +0x05b:  mov    0xc(%ebp),%eax
0826aec2 +0x05e:  mov    0x1c(%ebp),%edx
0826aec5 +0x061:  mov    %edx,(%eax)
0826aec7 +0x063:  mov    0x1c(%ebp),%eax
0826aeca +0x066:  movsbl %al,%eax
0826aecd +0x069:  mov    %eax,0x4(%esp)
0826aed1 +0x06d:  mov    -0xc(%ebp),%eax
0826aed4 +0x070:  mov    %eax,(%esp)
0826aed7 +0x073:  call   0826b766 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x34>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x34
0826aedc +0x078:  mov    -0xc(%ebp),%eax
0826aedf +0x07b:  jmp    0826afb2 <+0x14e>
0826aee4 +0x080:  mov    0x14(%ebp),%eax
0826aee7 +0x083:  shl    $0x3,%eax
0826aeea +0x086:  add    0x10(%ebp),%eax
0826aeed +0x089:  mov    %eax,0x4(%esp)
0826aef1 +0x08d:  mov    0x8(%ebp),%eax
0826aef4 +0x090:  mov    %eax,(%esp)
0826aef7 +0x093:  call   0826a9fe <_ZN10QuickParty24CQuickPartySystemManager24find_quick_party_in_poolERSt4listIiSaIiEE>  ; QuickParty::CQuickPartySystemManager::find_quick_party_in_pool(std::list<int, std::allocator<int> >&)
0826aefc +0x098:  mov    %eax,-0xc(%ebp)
0826aeff +0x09b:  cmpl   $0x0,-0xc(%ebp)
0826af03 +0x09f:  jne    0826af8d <+0x129>
0826af09 +0x0a5:  movl   $0x5,0xc(%esp)
0826af11 +0x0ad:  movl   $0x352,0x8(%esp)
0826af19 +0x0b5:  movl   $&_ZZN10QuickParty24CQuickPartySystemManager23pop_quick_party_in_poolERiRNS_24STQuickPartyPoolMap_DataEiiiE19__PRETTY_FUNCTION__,0x4(%esp)
0826af21 +0x0bd:  lea    -0x1c(%ebp),%eax
0826af24 +0x0c0:  mov    %eax,(%esp)
0826af27 +0x0c3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0826af2c +0x0c8:  movl   $"QUICK_PARTY_LOG : NO INTENDED ROUTINE!!",0x4(%esp)
0826af34 +0x0d0:  lea    -0x1c(%ebp),%eax
0826af37 +0x0d3:  mov    %eax,(%esp)
0826af3a +0x0d6:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0826af3f +0x0db:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0826af44 +0x0e0:  mov    %eax,(%esp)
0826af47 +0x0e3:  call   08295450 <_ZN12CGameManager13GetQuickPartyEv>  ; CGameManager::GetQuickParty()
0826af4c +0x0e8:  mov    %eax,-0xc(%ebp)
0826af4f +0x0eb:  cmpl   $0x0,-0xc(%ebp)
0826af53 +0x0ef:  jne    0826af5c <+0xf8>
0826af55 +0x0f1:  mov    $0x0,%eax
0826af5a +0x0f6:  jmp    0826afb2 <+0x14e>
0826af5c +0x0f8:  mov    0x18(%ebp),%eax
0826af5f +0x0fb:  mov    %eax,0x4(%esp)
0826af63 +0x0ff:  mov    -0xc(%ebp),%eax
0826af66 +0x102:  mov    %eax,(%esp)
0826af69 +0x105:  call   0826978c <_ZN10QuickParty11CQuickParty15set_party_indexEi>  ; QuickParty::CQuickParty::set_party_index(int)
0826af6e +0x10a:  mov    0xc(%ebp),%eax
0826af71 +0x10d:  mov    0x1c(%ebp),%edx
0826af74 +0x110:  mov    %edx,(%eax)
0826af76 +0x112:  mov    0x1c(%ebp),%eax
0826af79 +0x115:  movsbl %al,%eax
0826af7c +0x118:  mov    %eax,0x4(%esp)
0826af80 +0x11c:  mov    -0xc(%ebp),%eax
0826af83 +0x11f:  mov    %eax,(%esp)
0826af86 +0x122:  call   0826b766 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x34>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x34
0826af8b +0x127:  jmp    0826afaf <+0x14b>
0826af8d +0x129:  mov    0x18(%ebp),%eax
0826af90 +0x12c:  mov    %eax,0x4(%esp)
0826af94 +0x130:  mov    -0xc(%ebp),%eax
0826af97 +0x133:  mov    %eax,(%esp)
0826af9a +0x136:  call   0826978c <_ZN10QuickParty11CQuickParty15set_party_indexEi>  ; QuickParty::CQuickParty::set_party_index(int)
0826af9f +0x13b:  mov    -0xc(%ebp),%eax
0826afa2 +0x13e:  mov    %eax,(%esp)
0826afa5 +0x141:  call   082698be <_ZN10QuickParty11CQuickParty21get_quick_party_countEv>  ; QuickParty::CQuickParty::get_quick_party_count()
0826afaa +0x146:  mov    0xc(%ebp),%edx
0826afad +0x149:  mov    %eax,(%edx)
0826afaf +0x14b:  mov    -0xc(%ebp),%eax
0826afb2 +0x14e:  leave
0826afb3 +0x14f:  ret
```

## 反编译 C

```c
// QuickParty::CQuickPartySystemManager::pop_quick_party_in_pool @ 0x826ae64

/* QuickParty::CQuickPartySystemManager::pop_quick_party_in_pool(int&,
   QuickParty::STQuickPartyPoolMap_Data&, int, int, int) */

CQuickParty * __thiscall
QuickParty::CQuickPartySystemManager::pop_quick_party_in_pool
          (CQuickPartySystemManager *this,int *param_1,STQuickPartyPoolMap_Data *param_2,int param_3
          ,int param_4,int param_5)

{
  CGameManager *pCVar1;
  int iVar2;
  cMyTrace local_20 [16];
  CQuickParty *local_10;
  
  if ((param_3 < 4) && (-1 < param_3)) {
    local_10 = (CQuickParty *)0x0;
    if (param_3 == 0) {
      pCVar1 = (CGameManager *)G_CGameManager();
      local_10 = (CQuickParty *)CGameManager::GetQuickParty(pCVar1);
      if (local_10 == (CQuickParty *)0x0) {
        local_10 = (CQuickParty *)0x0;
      }
      else {
        CQuickParty::set_party_index(local_10,param_4);
        *param_1 = param_5;
        CQuickParty::set_first_matching_cnt(local_10,(char)param_5);
      }
    }
    else {
      local_10 = (CQuickParty *)find_quick_party_in_pool(this,(list *)(param_2 + param_3 * 8));
      if (local_10 == (CQuickParty *)0x0) {
        cMyTrace::cMyTrace(local_20,
                           "QuickParty::CQuickParty* QuickParty::CQuickPartySystemManager::pop_quick_party_in_pool(int&, QuickParty::STQuickPartyPoolMap_Data&, int, int, int)"
                           ,0x352,5);
        cMyTrace::operator()(local_20,"QUICK_PARTY_LOG : NO INTENDED ROUTINE!!");
        pCVar1 = (CGameManager *)G_CGameManager();
        local_10 = (CQuickParty *)CGameManager::GetQuickParty(pCVar1);
        if (local_10 == (CQuickParty *)0x0) {
          local_10 = (CQuickParty *)0x0;
        }
        else {
          CQuickParty::set_party_index(local_10,param_4);
          *param_1 = param_5;
          CQuickParty::set_first_matching_cnt(local_10,(char)param_5);
        }
      }
      else {
        CQuickParty::set_party_index(local_10,param_4);
        iVar2 = CQuickParty::get_quick_party_count(local_10);
        *param_1 = iVar2;
      }
    }
  }
  else {
    local_10 = (CQuickParty *)0x0;
  }
  return local_10;
}
```
