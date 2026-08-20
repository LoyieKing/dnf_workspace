# select_mail_quest

`_ZN9QuestList17select_mail_questERSt4listIiSaIiEERKN8WongWork11CQuestClearERK18stSelectQuestParam`

`QuestList::select_mail_quest(std::list<int, std::allocator<int> >&, WongWork::CQuestClear const&, stSelectQuestParam const&)`

| 类 | 地址 |
|---|---|
| `QuestList` | `0x08355304` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08355304  _ZN9QuestList17select_mail_questERSt4listIiSaIiEERKN8WongWork11CQuestClearERK18stSelectQuestParam
#           QuestList::select_mail_quest(std::list<int, std::allocator<int> >&, WongWork::CQuestClear const&, stSelectQuestParam const&)
# range [0x08355304, 0x08355473]
08355304 +0x000:  push   %ebp
08355305 +0x001:  mov    %esp,%ebp
08355307 +0x003:  sub    $0x38,%esp
0835530a +0x006:  movl   $0x0,-0xc(%ebp)
08355311 +0x00d:  mov    0xc(%ebp),%eax
08355314 +0x010:  mov    %eax,(%esp)
08355317 +0x013:  call   082357b8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xae62>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xae62
0835531c +0x018:  mov    0x8(%ebp),%eax
0835531f +0x01b:  lea    0xd4(%eax),%edx
08355325 +0x021:  lea    -0x14(%ebp),%eax
08355328 +0x024:  mov    %edx,0x4(%esp)
0835532c +0x028:  mov    %eax,(%esp)
0835532f +0x02b:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08355334 +0x030:  sub    $0x4,%esp
08355337 +0x033:  lea    -0x14(%ebp),%eax
0835533a +0x036:  mov    %eax,0x4(%esp)
0835533e +0x03a:  lea    -0x1c(%ebp),%eax
08355341 +0x03d:  mov    %eax,(%esp)
08355344 +0x040:  call   080f99ec <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1f8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1f8
08355349 +0x045:  jmp    08355422 <+0x11e>
0835534e +0x04a:  lea    -0x1c(%ebp),%eax
08355351 +0x04d:  mov    %eax,(%esp)
08355354 +0x050:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
08355359 +0x055:  mov    (%eax),%eax
0835535b +0x057:  mov    %eax,-0x18(%ebp)
0835535e +0x05a:  mov    -0x18(%ebp),%eax
08355361 +0x05d:  mov    %eax,0x4(%esp)
08355365 +0x061:  mov    0x8(%ebp),%eax
08355368 +0x064:  mov    %eax,(%esp)
0835536b +0x067:  call   08355a5c <_ZN9QuestList10find_questEi>  ; QuestList::find_quest(int)
08355370 +0x06c:  mov    %eax,-0xc(%ebp)
08355373 +0x06f:  cmpl   $0x0,-0xc(%ebp)
08355377 +0x073:  je     0835540a <+0x106>
0835537d +0x079:  mov    0x14(%ebp),%eax
08355380 +0x07c:  mov    %eax,0x4(%esp)
08355384 +0x080:  mov    -0xc(%ebp),%eax
08355387 +0x083:  mov    %eax,(%esp)
0835538a +0x086:  call   08352d86 <_ZNK5Quest14check_possibleERK18stSelectQuestParam>  ; Quest::check_possible(stSelectQuestParam const&) const
0835538f +0x08b:  xor    $0x1,%eax
08355392 +0x08e:  test   %al,%al
08355394 +0x090:  jne    0835540d <+0x109>
08355396 +0x092:  mov    -0x18(%ebp),%eax
08355399 +0x095:  mov    0x10(%ebp),%edx
0835539c +0x098:  mov    %edx,0x8(%esp)
083553a0 +0x09c:  mov    %eax,0x4(%esp)
083553a4 +0x0a0:  mov    0x8(%ebp),%eax
083553a7 +0x0a3:  mov    %eax,(%esp)
083553aa +0x0a6:  call   08355284 <_ZN9QuestList11check_clearEiRKN8WongWork11CQuestClearE>  ; QuestList::check_clear(int, WongWork::CQuestClear const&)
083553af +0x0ab:  xor    $0x1,%eax
083553b2 +0x0ae:  test   %al,%al
083553b4 +0x0b0:  jne    08355410 <+0x10c>
083553b6 +0x0b2:  mov    -0x18(%ebp),%eax
083553b9 +0x0b5:  mov    0x10(%ebp),%edx
083553bc +0x0b8:  mov    %edx,0x8(%esp)
083553c0 +0x0bc:  mov    %eax,0x4(%esp)
083553c4 +0x0c0:  mov    0x8(%ebp),%eax
083553c7 +0x0c3:  mov    %eax,(%esp)
083553ca +0x0c6:  call   08354fc8 <_ZN9QuestList17check_ahead_questEiRKN8WongWork11CQuestClearE>  ; QuestList::check_ahead_quest(int, WongWork::CQuestClear const&)
083553cf +0x0cb:  xor    $0x1,%eax
083553d2 +0x0ce:  test   %al,%al
083553d4 +0x0d0:  jne    08355413 <+0x10f>
083553d6 +0x0d2:  mov    -0x18(%ebp),%eax
083553d9 +0x0d5:  mov    0x10(%ebp),%edx
083553dc +0x0d8:  mov    %edx,0x8(%esp)
083553e0 +0x0dc:  mov    %eax,0x4(%esp)
083553e4 +0x0e0:  mov    0x8(%ebp),%eax
083553e7 +0x0e3:  mov    %eax,(%esp)
083553ea +0x0e6:  call   0835511e <_ZN9QuestList16check_anti_questEiRKN8WongWork11CQuestClearE>  ; QuestList::check_anti_quest(int, WongWork::CQuestClear const&)
083553ef +0x0eb:  xor    $0x1,%eax
083553f2 +0x0ee:  test   %al,%al
083553f4 +0x0f0:  jne    08355416 <+0x112>
083553f6 +0x0f2:  lea    -0x18(%ebp),%eax
083553f9 +0x0f5:  mov    %eax,0x4(%esp)
083553fd +0x0f9:  mov    0xc(%ebp),%eax
08355400 +0x0fc:  mov    %eax,(%esp)
08355403 +0x0ff:  call   0826cbae <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x147c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x147c
08355408 +0x104:  jmp    08355417 <+0x113>
0835540a +0x106:  nop
0835540b +0x107:  jmp    08355417 <+0x113>
0835540d +0x109:  nop
0835540e +0x10a:  jmp    08355417 <+0x113>
08355410 +0x10c:  nop
08355411 +0x10d:  jmp    08355417 <+0x113>
08355413 +0x10f:  nop
08355414 +0x110:  jmp    08355417 <+0x113>
08355416 +0x112:  nop
08355417 +0x113:  lea    -0x1c(%ebp),%eax
0835541a +0x116:  mov    %eax,(%esp)
0835541d +0x119:  call   080f9a06 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x212>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x212
08355422 +0x11e:  mov    0x8(%ebp),%eax
08355425 +0x121:  lea    0xd4(%eax),%edx
0835542b +0x127:  lea    -0x10(%ebp),%eax
0835542e +0x12a:  mov    %edx,0x4(%esp)
08355432 +0x12e:  mov    %eax,(%esp)
08355435 +0x131:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
0835543a +0x136:  sub    $0x4,%esp
0835543d +0x139:  lea    -0x10(%ebp),%eax
08355440 +0x13c:  mov    %eax,0x4(%esp)
08355444 +0x140:  lea    -0x1c(%ebp),%eax
08355447 +0x143:  mov    %eax,(%esp)
0835544a +0x146:  call   08193428 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x90>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x90
0835544f +0x14b:  test   %al,%al
08355451 +0x14d:  jne    0835534e <+0x4a>
08355457 +0x153:  mov    0xc(%ebp),%eax
0835545a +0x156:  mov    %eax,(%esp)
0835545d +0x159:  call   082373b6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xca60>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xca60
08355462 +0x15e:  test   %al,%al
08355464 +0x160:  je     0835546d <+0x169>
08355466 +0x162:  mov    $0x0,%eax
0835546b +0x167:  jmp    08355472 <+0x16e>
0835546d +0x169:  mov    $0x1,%eax
08355472 +0x16e:  leave
08355473 +0x16f:  ret
```

## 反编译 C

```c
// QuestList::select_mail_quest @ 0x8355304

/* QuestList::select_mail_quest(std::list<int, std::allocator<int> >&, WongWork::CQuestClear const&,
   stSelectQuestParam const&) */

bool __thiscall
QuestList::select_mail_quest
          (QuestList *this,list *param_1,CQuestClear *param_2,stSelectQuestParam *param_3)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_20 [4];
  int local_1c;
  __normal_iterator local_18 [4];
  __normal_iterator local_14 [4];
  Quest *local_10;
  
  local_10 = (Quest *)0x0;
  std::list<int,std::allocator<int>>::clear((list<int,std::allocator<int>> *)param_1);
  std::vector<int,std::allocator<int>>::begin();
  __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
  __normal_iterator<int*>(local_20,local_18);
  while( true ) {
    std::vector<int,std::allocator<int>>::end();
    bVar1 = __gnu_cxx::operator!=(local_20,local_14);
    if (!bVar1) break;
    piVar3 = (int *)__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                    operator*(local_20);
    local_1c = *piVar3;
    local_10 = (Quest *)find_quest((int)this);
    if ((((local_10 != (Quest *)0x0) &&
         (cVar2 = Quest::check_possible(local_10,param_3), cVar2 == '\x01')) &&
        (cVar2 = check_clear(this,local_1c,param_2), cVar2 == '\x01')) &&
       ((cVar2 = check_ahead_quest(this,local_1c,param_2), cVar2 == '\x01' &&
        (cVar2 = check_anti_quest(this,local_1c,param_2), cVar2 == '\x01')))) {
      std::list<int,std::allocator<int>>::push_back
                ((list<int,std::allocator<int>> *)param_1,&local_1c);
    }
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
              (local_20);
  }
  cVar2 = std::list<int,std::allocator<int>>::empty((list<int,std::allocator<int>> *)param_1);
  return cVar2 == '\0';
}
```
