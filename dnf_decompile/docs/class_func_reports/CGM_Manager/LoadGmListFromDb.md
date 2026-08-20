# LoadGmListFromDb

`_ZN11CGM_Manager16LoadGmListFromDbEv`

`CGM_Manager::LoadGmListFromDb()`

| 类 | 地址 |
|---|---|
| `CGM_Manager` | `0x08299530` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08299530  _ZN11CGM_Manager16LoadGmListFromDbEv
#           CGM_Manager::LoadGmListFromDb()
# range [0x08299530, 0x0829973f]
08299530 +0x000:  push   %ebp
08299531 +0x001:  mov    %esp,%ebp
08299533 +0x003:  push   %esi
08299534 +0x004:  push   %ebx
08299535 +0x005:  sub    $0x60,%esp
08299538 +0x008:  movb   $0x0,-0x11(%ebp)
0829953c +0x00c:  movl   $0x0,-0x10(%ebp)
08299543 +0x013:  movl   $0x0,-0x48(%ebp)
0829954a +0x01a:  movl   $0x0,-0x4c(%ebp)
08299551 +0x021:  mov    0x8(%ebp),%eax
08299554 +0x024:  mov    0x18(%eax),%eax
08299557 +0x027:  movl   $"seLect m_id, level from gm_manifest",0x4(%esp)
0829955f +0x02f:  mov    %eax,(%esp)
08299562 +0x032:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08299567 +0x037:  mov    0x8(%ebp),%eax
0829956a +0x03a:  mov    0x18(%eax),%eax
0829956d +0x03d:  movl   $0x1,0x4(%esp)
08299575 +0x045:  mov    %eax,(%esp)
08299578 +0x048:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0829957d +0x04d:  mov    %al,-0x11(%ebp)
08299580 +0x050:  movzbl -0x11(%ebp),%eax
08299584 +0x054:  xor    $0x1,%eax
08299587 +0x057:  test   %al,%al
08299589 +0x059:  je     082995cb <+0x9b>
0829958b +0x05b:  movl   $0x0,0xc(%esp)
08299593 +0x063:  movl   $0x1579,0x8(%esp)
0829959b +0x06b:  movl   $&_ZZN11CGM_Manager16LoadGmListFromDbEvE19__PRETTY_FUNCTION__,0x4(%esp)
082995a3 +0x073:  lea    -0x44(%ebp),%eax
082995a6 +0x076:  mov    %eax,(%esp)
082995a9 +0x079:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082995ae +0x07e:  movl   $"Failed to get GM list from DB.",0x4(%esp)
082995b6 +0x086:  lea    -0x44(%ebp),%eax
082995b9 +0x089:  mov    %eax,(%esp)
082995bc +0x08c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082995c1 +0x091:  mov    $0x0,%ebx
082995c6 +0x096:  jmp    08299737 <+0x207>
082995cb +0x09b:  mov    0x8(%ebp),%eax
082995ce +0x09e:  add    $0x1c,%eax
082995d1 +0x0a1:  mov    %eax,0x4(%esp)
082995d5 +0x0a5:  lea    -0x50(%ebp),%eax
082995d8 +0x0a8:  mov    %eax,(%esp)
082995db +0x0ab:  call   082b2f36 <_GLOBAL__I__ZN4CLog5this_E+0xf35d>  ; global constructors keyed to CLog::this_+0xf35d
082995e0 +0x0b0:  mov    0x8(%ebp),%eax
082995e3 +0x0b3:  mov    0x18(%eax),%eax
082995e6 +0x0b6:  mov    %eax,(%esp)
082995e9 +0x0b9:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
082995ee +0x0be:  mov    %eax,-0x10(%ebp)
082995f1 +0x0c1:  movl   $0x0,-0xc(%ebp)
082995f8 +0x0c8:  jmp    082996fa <+0x1ca>
082995fd +0x0cd:  mov    0x8(%ebp),%eax
08299600 +0x0d0:  mov    0x18(%eax),%eax
08299603 +0x0d3:  mov    %eax,(%esp)
08299606 +0x0d6:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0829960b +0x0db:  mov    0x8(%ebp),%eax
0829960e +0x0de:  mov    0x18(%eax),%eax
08299611 +0x0e1:  lea    -0x48(%ebp),%edx
08299614 +0x0e4:  mov    %edx,0x8(%esp)
08299618 +0x0e8:  movl   $0x0,0x4(%esp)
08299620 +0x0f0:  mov    %eax,(%esp)
08299623 +0x0f3:  call   080e22ae <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x54>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x54
08299628 +0x0f8:  mov    %al,-0x11(%ebp)
0829962b +0x0fb:  movzbl -0x11(%ebp),%eax
0829962f +0x0ff:  xor    $0x1,%eax
08299632 +0x102:  test   %al,%al
08299634 +0x104:  je     08299676 <+0x146>
08299636 +0x106:  movl   $0x0,0xc(%esp)
0829963e +0x10e:  movl   $0x1588,0x8(%esp)
08299646 +0x116:  movl   $&_ZZN11CGM_Manager16LoadGmListFromDbEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829964e +0x11e:  lea    -0x34(%ebp),%eax
08299651 +0x121:  mov    %eax,(%esp)
08299654 +0x124:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08299659 +0x129:  movl   $"Failed to get GM's m_id from DB.",0x4(%esp)
08299661 +0x131:  lea    -0x34(%ebp),%eax
08299664 +0x134:  mov    %eax,(%esp)
08299667 +0x137:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829966c +0x13c:  mov    $0x0,%ebx
08299671 +0x141:  jmp    0829972c <+0x1fc>
08299676 +0x146:  mov    0x8(%ebp),%eax
08299679 +0x149:  mov    0x18(%eax),%eax
0829967c +0x14c:  lea    -0x4c(%ebp),%edx
0829967f +0x14f:  mov    %edx,0x8(%esp)
08299683 +0x153:  movl   $0x1,0x4(%esp)
0829968b +0x15b:  mov    %eax,(%esp)
0829968e +0x15e:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08299693 +0x163:  mov    %al,-0x11(%ebp)
08299696 +0x166:  movzbl -0x11(%ebp),%eax
0829969a +0x16a:  xor    $0x1,%eax
0829969d +0x16d:  test   %al,%al
0829969f +0x16f:  je     082996de <+0x1ae>
082996a1 +0x171:  movl   $0x0,0xc(%esp)
082996a9 +0x179:  movl   $0x158e,0x8(%esp)
082996b1 +0x181:  movl   $&_ZZN11CGM_Manager16LoadGmListFromDbEvE19__PRETTY_FUNCTION__,0x4(%esp)
082996b9 +0x189:  lea    -0x24(%ebp),%eax
082996bc +0x18c:  mov    %eax,(%esp)
082996bf +0x18f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082996c4 +0x194:  movl   $"Failed to get GM's lv from DB.",0x4(%esp)
082996cc +0x19c:  lea    -0x24(%ebp),%eax
082996cf +0x19f:  mov    %eax,(%esp)
082996d2 +0x1a2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082996d7 +0x1a7:  mov    $0x0,%ebx
082996dc +0x1ac:  jmp    0829972c <+0x1fc>
082996de +0x1ae:  mov    0x8(%ebp),%eax
082996e1 +0x1b1:  lea    -0x48(%ebp),%edx
082996e4 +0x1b4:  mov    %edx,0x4(%esp)
082996e8 +0x1b8:  mov    %eax,(%esp)
082996eb +0x1bb:  call   082b2dea <_GLOBAL__I__ZN4CLog5this_E+0xf211>  ; global constructors keyed to CLog::this_+0xf211
082996f0 +0x1c0:  mov    -0x4c(%ebp),%edx
082996f3 +0x1c3:  mov    %edx,0x4(%eax)
082996f6 +0x1c6:  addl   $0x1,-0xc(%ebp)
082996fa +0x1ca:  mov    -0xc(%ebp),%eax
082996fd +0x1cd:  cmp    -0x10(%ebp),%eax
08299700 +0x1d0:  setl   %al
08299703 +0x1d3:  test   %al,%al
08299705 +0x1d5:  jne    082995fd <+0xcd>
0829970b +0x1db:  movzbl -0x11(%ebp),%ebx
0829970f +0x1df:  jmp    0829972c <+0x1fc>
08299711 +0x1e1:  mov    %edx,%ebx
08299713 +0x1e3:  mov    %eax,%esi
08299715 +0x1e5:  lea    -0x50(%ebp),%eax
08299718 +0x1e8:  mov    %eax,(%esp)
0829971b +0x1eb:  call   082b2f52 <_GLOBAL__I__ZN4CLog5this_E+0xf379>  ; global constructors keyed to CLog::this_+0xf379
08299720 +0x1f0:  mov    %esi,%eax
08299722 +0x1f2:  mov    %ebx,%edx
08299724 +0x1f4:  mov    %eax,(%esp)
08299727 +0x1f7:  call   08ae3750 <_Unwind_Resume>
0829972c +0x1fc:  lea    -0x50(%ebp),%eax
0829972f +0x1ff:  mov    %eax,(%esp)
08299732 +0x202:  call   082b2f52 <_GLOBAL__I__ZN4CLog5this_E+0xf379>  ; global constructors keyed to CLog::this_+0xf379
08299737 +0x207:  mov    %ebx,%eax
08299739 +0x209:  add    $0x60,%esp
0829973c +0x20c:  pop    %ebx
0829973d +0x20d:  pop    %esi
0829973e +0x20e:  pop    %ebp
0829973f +0x20f:  ret
```

## 反编译 C

```c
// CGM_Manager::LoadGmListFromDb @ 0x8299530

/* CGM_Manager::LoadGmListFromDb() */

char __thiscall CGM_Manager::LoadGmListFromDb(CGM_Manager *this)

{
  int iVar1;
  char cVar2;
  writeGuard<rwLock> local_54 [4];
  int local_50 [2];
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [19];
  char local_15;
  int local_14;
  int local_10;
  
  local_15 = 0;
  local_14 = 0;
  local_50[1] = 0;
  local_50[0] = 0;
  MySQL::set_query(*(MySQL **)(this + 0x18),"seLect m_id, level from gm_manifest");
  local_15 = MySQL::exec(*(MySQL **)(this + 0x18),true);
  if (local_15 == '\x01') {
    writeGuard<rwLock>::writeGuard(local_54,(rwLock *)(this + 0x1c));
    local_14 = MySQL::get_n_rows(*(MySQL **)(this + 0x18));
    for (local_10 = 0; cVar2 = local_15, local_10 < local_14; local_10 = local_10 + 1) {
                    /* try { // try from 08299606 to 082996ef has its CatchHandler @ 08299711 */
      MySQL::fetch(*(MySQL **)(this + 0x18));
      local_15 = MySQL::get_int(*(MySQL **)(this + 0x18),0,(uint *)(local_50 + 1));
      if (local_15 != '\x01') {
        cMyTrace::cMyTrace(local_38,"bool CGM_Manager::LoadGmListFromDb()",0x1588,0);
        cMyTrace::operator()(local_38,"Failed to get GM\'s m_id from DB.");
        cVar2 = '\0';
        break;
      }
      local_15 = MySQL::get_int(*(MySQL **)(this + 0x18),1,local_50);
      if (local_15 != '\x01') {
        cMyTrace::cMyTrace(local_28,"bool CGM_Manager::LoadGmListFromDb()",0x158e,0);
        cMyTrace::operator()(local_28,"Failed to get GM\'s lv from DB.");
        cVar2 = '\0';
        break;
      }
      iVar1 = std::
              map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
              ::operator[]((map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
                            *)this,(uint *)(local_50 + 1));
      *(int *)(iVar1 + 4) = local_50[0];
    }
    writeGuard<rwLock>::~writeGuard(local_54);
  }
  else {
    cMyTrace::cMyTrace(local_48,"bool CGM_Manager::LoadGmListFromDb()",0x1579,0);
    cMyTrace::operator()(local_48,"Failed to get GM list from DB.");
    cVar2 = '\0';
  }
  return cVar2;
}
```
