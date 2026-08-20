# remove_quick_party_in_pool

`_ZN10QuickParty24CQuickPartySystemManager26remove_quick_party_in_poolEPNS_11CQuickPartyERKNS_23STQuickPartyPoolMap_KeyE`

`QuickParty::CQuickPartySystemManager::remove_quick_party_in_pool(QuickParty::CQuickParty*, QuickParty::STQuickPartyPoolMap_Key const&)`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickPartySystemManager` | `0x0826aa9a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826aa9a  _ZN10QuickParty24CQuickPartySystemManager26remove_quick_party_in_poolEPNS_11CQuickPartyERKNS_23STQuickPartyPoolMap_KeyE
#           QuickParty::CQuickPartySystemManager::remove_quick_party_in_pool(QuickParty::CQuickParty*, QuickParty::STQuickPartyPoolMap_Key const&)
# range [0x0826aa9a, 0x0826ab9d]
0826aa9a +0x000:  push   %ebp
0826aa9b +0x001:  mov    %esp,%ebp
0826aa9d +0x003:  sub    $0x38,%esp
0826aaa0 +0x006:  cmpl   $0x0,0xc(%ebp)
0826aaa4 +0x00a:  jne    0826aab0 <+0x16>
0826aaa6 +0x00c:  mov    $0x0,%eax
0826aaab +0x011:  jmp    0826ab9c <+0x102>
0826aab0 +0x016:  mov    0xc(%ebp),%eax
0826aab3 +0x019:  mov    %eax,(%esp)
0826aab6 +0x01c:  call   0826b7d4 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xa2>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xa2
0826aabb +0x021:  mov    %al,-0x9(%ebp)
0826aabe +0x024:  cmpb   $0x3,-0x9(%ebp)
0826aac2 +0x028:  jg     0826aaca <+0x30>
0826aac4 +0x02a:  cmpb   $0x0,-0x9(%ebp)
0826aac8 +0x02e:  jns    0826aad4 <+0x3a>
0826aaca +0x030:  mov    $0x0,%eax
0826aacf +0x035:  jmp    0826ab9c <+0x102>
0826aad4 +0x03a:  mov    0x8(%ebp),%edx
0826aad7 +0x03d:  lea    -0x28(%ebp),%eax
0826aada +0x040:  mov    0x10(%ebp),%ecx
0826aadd +0x043:  mov    %ecx,0x8(%esp)
0826aae1 +0x047:  mov    %edx,0x4(%esp)
0826aae5 +0x04b:  mov    %eax,(%esp)
0826aae8 +0x04e:  call   0826bc2c <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x4fa>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x4fa
0826aaed +0x053:  sub    $0x4,%esp
0826aaf0 +0x056:  mov    0x8(%ebp),%edx
0826aaf3 +0x059:  lea    -0x24(%ebp),%eax
0826aaf6 +0x05c:  mov    %edx,0x4(%esp)
0826aafa +0x060:  mov    %eax,(%esp)
0826aafd +0x063:  call   0826bc58 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x526>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x526
0826ab02 +0x068:  sub    $0x4,%esp
0826ab05 +0x06b:  lea    -0x24(%ebp),%eax
0826ab08 +0x06e:  mov    %eax,0x4(%esp)
0826ab0c +0x072:  lea    -0x28(%ebp),%eax
0826ab0f +0x075:  mov    %eax,(%esp)
0826ab12 +0x078:  call   0826bc7e <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x54c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x54c
0826ab17 +0x07d:  test   %al,%al
0826ab19 +0x07f:  je     0826ab56 <+0xbc>
0826ab1b +0x081:  mov    0xc(%ebp),%eax
0826ab1e +0x084:  mov    %eax,(%esp)
0826ab21 +0x087:  call   0826b74e <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x1c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x1c
0826ab26 +0x08c:  mov    %eax,-0x20(%ebp)
0826ab29 +0x08f:  lea    -0x28(%ebp),%eax
0826ab2c +0x092:  mov    %eax,(%esp)
0826ab2f +0x095:  call   0826bc92 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x560>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x560
0826ab34 +0x09a:  movsbl -0x9(%ebp),%edx
0826ab38 +0x09e:  shl    $0x3,%edx
0826ab3b +0x0a1:  add    %edx,%eax
0826ab3d +0x0a3:  lea    0x4(%eax),%edx
0826ab40 +0x0a6:  lea    -0x20(%ebp),%eax
0826ab43 +0x0a9:  mov    %eax,0x4(%esp)
0826ab47 +0x0ad:  mov    %edx,(%esp)
0826ab4a +0x0b0:  call   0826bcf8 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x5c6>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x5c6
0826ab4f +0x0b5:  mov    $0x1,%eax
0826ab54 +0x0ba:  jmp    0826ab9c <+0x102>
0826ab56 +0x0bc:  mov    0xc(%ebp),%eax
0826ab59 +0x0bf:  mov    %eax,(%esp)
0826ab5c +0x0c2:  call   082695ca <_ZN10QuickParty11CQuickParty7destroyEv>  ; QuickParty::CQuickParty::destroy()
0826ab61 +0x0c7:  movl   $0x5,0xc(%esp)
0826ab69 +0x0cf:  movl   $0x2ba,0x8(%esp)
0826ab71 +0x0d7:  movl   $&_ZZN10QuickParty24CQuickPartySystemManager26remove_quick_party_in_poolEPNS_11CQuickPartyERKNS_23STQuickPartyPoolMap_KeyEE19__PRETTY_FUNCTION__,0x4(%esp)
0826ab79 +0x0df:  lea    -0x1c(%ebp),%eax
0826ab7c +0x0e2:  mov    %eax,(%esp)
0826ab7f +0x0e5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0826ab84 +0x0ea:  movl   $"QUICK_PARTY_LOG : NO EXIST KEY DATA!!",0x4(%esp)
0826ab8c +0x0f2:  lea    -0x1c(%ebp),%eax
0826ab8f +0x0f5:  mov    %eax,(%esp)
0826ab92 +0x0f8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0826ab97 +0x0fd:  mov    $0x0,%eax
0826ab9c +0x102:  leave
0826ab9d +0x103:  ret
```

## 反编译 C

```c
// QuickParty::CQuickPartySystemManager::remove_quick_party_in_pool @ 0x826aa9a

/* QuickParty::CQuickPartySystemManager::remove_quick_party_in_pool(QuickParty::CQuickParty*,
   QuickParty::STQuickPartyPoolMap_Key const&) */

undefined4
QuickParty::CQuickPartySystemManager::remove_quick_party_in_pool
          (CQuickParty *param_1,STQuickPartyPoolMap_Key *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  STQuickPartyPoolMap_Key local_2c [4];
  map<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data,std::less<QuickParty::STQuickPartyPoolMap_Key>,std::allocator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>>
  local_28 [4];
  int local_24;
  cMyTrace local_20 [19];
  char local_d;
  
  if (param_2 == (STQuickPartyPoolMap_Key *)0x0) {
    uVar2 = 0;
  }
  else {
    local_d = CQuickParty::get_pool_index((CQuickParty *)param_2);
    if ((local_d < '\x04') && (-1 < local_d)) {
      std::
      map<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data,std::less<QuickParty::STQuickPartyPoolMap_Key>,std::allocator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>>
      ::find(local_2c);
      std::
      map<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data,std::less<QuickParty::STQuickPartyPoolMap_Key>,std::allocator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>>
      ::end(local_28);
      cVar1 = std::
              _Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
              ::operator!=((_Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                            *)local_2c,(_Rb_tree_iterator *)local_28);
      if (cVar1 == '\0') {
        CQuickParty::destroy((CQuickParty *)param_2);
        cMyTrace::cMyTrace(local_20,
                           "bool QuickParty::CQuickPartySystemManager::remove_quick_party_in_pool(QuickParty::CQuickParty*, const QuickParty::STQuickPartyPoolMap_Key&)"
                           ,0x2ba,5);
        cMyTrace::operator()(local_20,"QUICK_PARTY_LOG : NO EXIST KEY DATA!!");
        uVar2 = 0;
      }
      else {
        local_24 = CQuickParty::get_quick_party_index((CQuickParty *)param_2);
        iVar3 = std::
                _Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                ::operator->((_Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                              *)local_2c);
        std::list<int,std::allocator<int>>::remove
                  ((list<int,std::allocator<int>> *)(iVar3 + local_d * 8 + 4),&local_24);
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
