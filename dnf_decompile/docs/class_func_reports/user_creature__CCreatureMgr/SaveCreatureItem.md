# SaveCreatureItem

`_ZN13user_creature12CCreatureMgr16SaveCreatureItemEv`

`user_creature::CCreatureMgr::SaveCreatureItem()`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833bbbe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833bbbe  _ZN13user_creature12CCreatureMgr16SaveCreatureItemEv
#           user_creature::CCreatureMgr::SaveCreatureItem()
# range [0x0833bbbe, 0x0833bdd1]
0833bbbe +0x000:  push   %ebp
0833bbbf +0x001:  mov    %esp,%ebp
0833bbc1 +0x003:  push   %esi
0833bbc2 +0x004:  push   %ebx
0833bbc3 +0x005:  sub    $0x40,%esp
0833bbc6 +0x008:  mov    0x8(%ebp),%eax
0833bbc9 +0x00b:  mov    0x1c(%eax),%eax
0833bbcc +0x00e:  mov    %eax,0x8(%esp)
0833bbd0 +0x012:  movl   $0x89,0x4(%esp)
0833bbd8 +0x01a:  lea    -0x30(%ebp),%eax
0833bbdb +0x01d:  mov    %eax,(%esp)
0833bbde +0x020:  call   0833f8ae <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x197b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x197b
0833bbe3 +0x025:  lea    -0x30(%ebp),%eax
0833bbe6 +0x028:  mov    %eax,(%esp)
0833bbe9 +0x02b:  call   08342b94 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4c61>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4c61
0833bbee +0x030:  mov    %eax,-0x10(%ebp)
0833bbf1 +0x033:  cmpl   $0x0,-0x10(%ebp)
0833bbf5 +0x037:  jne    0833bc4c <+0x8e>
0833bbf7 +0x039:  mov    0x8(%ebp),%eax
0833bbfa +0x03c:  mov    0x1c(%eax),%eax
0833bbfd +0x03f:  mov    %eax,(%esp)
0833bc00 +0x042:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0833bc05 +0x047:  movzwl %ax,%ebx
0833bc08 +0x04a:  movl   $0x5,0xc(%esp)
0833bc10 +0x052:  movl   $0xd90,0x8(%esp)
0833bc18 +0x05a:  movl   $&_ZZN13user_creature12CCreatureMgr16SaveCreatureItemEvE19__PRETTY_FUNCTION__,0x4(%esp)
0833bc20 +0x062:  lea    -0x28(%ebp),%eax
0833bc23 +0x065:  mov    %eax,(%esp)
0833bc26 +0x068:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0833bc2b +0x06d:  mov    %ebx,0x8(%esp)
0833bc2f +0x071:  movl   $"cannot write db uid(%d)\n",0x4(%esp)
0833bc37 +0x079:  lea    -0x28(%ebp),%eax
0833bc3a +0x07c:  mov    %eax,(%esp)
0833bc3d +0x07f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0833bc42 +0x084:  mov    $0x0,%ebx
0833bc47 +0x089:  jmp    0833bdbb <+0x1fd>
0833bc4c +0x08e:  movl   $0x4078,0x8(%esp)
0833bc54 +0x096:  movl   $0x0,0x4(%esp)
0833bc5c +0x09e:  mov    -0x10(%ebp),%eax
0833bc5f +0x0a1:  mov    %eax,(%esp)
0833bc62 +0x0a4:  call   0807dcc0 <_init+0x5b8>
0833bc67 +0x0a9:  mov    -0x10(%ebp),%eax
0833bc6a +0x0ac:  movl   $0x0,(%eax)
0833bc70 +0x0b2:  mov    0x8(%ebp),%edx
0833bc73 +0x0b5:  lea    -0x34(%ebp),%eax
0833bc76 +0x0b8:  mov    %edx,0x4(%esp)
0833bc7a +0x0bc:  mov    %eax,(%esp)
0833bc7d +0x0bf:  call   083429f8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4ac5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4ac5
0833bc82 +0x0c4:  sub    $0x4,%esp
0833bc85 +0x0c7:  jmp    0833bd49 <+0x18b>
0833bc8a +0x0cc:  lea    -0x34(%ebp),%eax
0833bc8d +0x0cf:  mov    %eax,(%esp)
0833bc90 +0x0d2:  call   083429ea <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4ab7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4ab7
0833bc95 +0x0d7:  mov    0x4(%eax),%eax
0833bc98 +0x0da:  mov    %eax,-0xc(%ebp)
0833bc9b +0x0dd:  mov    -0xc(%ebp),%eax
0833bc9e +0x0e0:  mov    (%eax),%eax
0833bca0 +0x0e2:  add    $0x4,%eax
0833bca3 +0x0e5:  mov    (%eax),%edx
0833bca5 +0x0e7:  mov    -0xc(%ebp),%eax
0833bca8 +0x0ea:  mov    %eax,(%esp)
0833bcab +0x0ed:  call   *%edx
0833bcad +0x0ef:  test   %al,%al
0833bcaf +0x0f1:  je     0833bd2c <+0x16e>
0833bcb1 +0x0f3:  mov    -0xc(%ebp),%eax
0833bcb4 +0x0f6:  mov    (%eax),%eax
0833bcb6 +0x0f8:  add    $0xc,%eax
0833bcb9 +0x0fb:  mov    (%eax),%ebx
0833bcbb +0x0fd:  mov    0x8(%ebp),%eax
0833bcbe +0x100:  mov    0x1c(%eax),%ecx
0833bcc1 +0x103:  mov    -0x10(%ebp),%eax
0833bcc4 +0x106:  mov    (%eax),%eax
0833bcc6 +0x108:  shl    $0x3,%eax
0833bcc9 +0x10b:  lea    0x0(,%eax,8),%edx
0833bcd0 +0x112:  sub    %eax,%edx
0833bcd2 +0x114:  lea    0x21a0(%edx),%eax
0833bcd8 +0x11a:  add    -0x10(%ebp),%eax
0833bcdb +0x11d:  mov    -0x10(%ebp),%edx
0833bcde +0x120:  mov    (%edx),%edx
0833bce0 +0x122:  imul   $0x3d,%edx,%edx
0833bce3 +0x125:  add    -0x10(%ebp),%edx
0833bce6 +0x128:  add    $0x4,%edx
0833bce9 +0x12b:  mov    %ecx,0xc(%esp)
0833bced +0x12f:  mov    %eax,0x8(%esp)
0833bcf1 +0x133:  mov    %edx,0x4(%esp)
0833bcf5 +0x137:  mov    -0xc(%ebp),%eax
0833bcf8 +0x13a:  mov    %eax,(%esp)
0833bcfb +0x13d:  call   *%ebx
0833bcfd +0x13f:  mov    -0x10(%ebp),%eax
0833bd00 +0x142:  mov    (%eax),%eax
0833bd02 +0x144:  mov    -0x10(%ebp),%ecx
0833bd05 +0x147:  shl    $0x3,%eax
0833bd08 +0x14a:  lea    0x0(,%eax,8),%edx
0833bd0f +0x151:  sub    %eax,%edx
0833bd11 +0x153:  lea    (%ecx,%edx,1),%eax
0833bd14 +0x156:  add    $0x21a4,%eax
0833bd19 +0x15b:  mov    (%eax),%eax
0833bd1b +0x15d:  test   %eax,%eax
0833bd1d +0x15f:  je     0833bd2c <+0x16e>
0833bd1f +0x161:  mov    -0x10(%ebp),%eax
0833bd22 +0x164:  mov    (%eax),%eax
0833bd24 +0x166:  lea    0x1(%eax),%edx
0833bd27 +0x169:  mov    -0x10(%ebp),%eax
0833bd2a +0x16c:  mov    %edx,(%eax)
0833bd2c +0x16e:  lea    -0x14(%ebp),%eax
0833bd2f +0x171:  movl   $0x0,0x8(%esp)
0833bd37 +0x179:  lea    -0x34(%ebp),%edx
0833bd3a +0x17c:  mov    %edx,0x4(%esp)
0833bd3e +0x180:  mov    %eax,(%esp)
0833bd41 +0x183:  call   08342a32 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4aff>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4aff
0833bd46 +0x188:  sub    $0x4,%esp
0833bd49 +0x18b:  mov    0x8(%ebp),%edx
0833bd4c +0x18e:  lea    -0x18(%ebp),%eax
0833bd4f +0x191:  mov    %edx,0x4(%esp)
0833bd53 +0x195:  mov    %eax,(%esp)
0833bd56 +0x198:  call   083429b0 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4a7d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4a7d
0833bd5b +0x19d:  sub    $0x4,%esp
0833bd5e +0x1a0:  lea    -0x18(%ebp),%eax
0833bd61 +0x1a3:  mov    %eax,0x4(%esp)
0833bd65 +0x1a7:  lea    -0x34(%ebp),%eax
0833bd68 +0x1aa:  mov    %eax,(%esp)
0833bd6b +0x1ad:  call   08342a1e <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4aeb>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4aeb
0833bd70 +0x1b2:  test   %al,%al
0833bd72 +0x1b4:  jne    0833bc8a <+0xcc>
0833bd78 +0x1ba:  mov    -0x10(%ebp),%eax
0833bd7b +0x1bd:  mov    (%eax),%eax
0833bd7d +0x1bf:  test   %eax,%eax
0833bd7f +0x1c1:  je     0833bd8e <+0x1d0>
0833bd81 +0x1c3:  lea    -0x30(%ebp),%eax
0833bd84 +0x1c6:  mov    %eax,(%esp)
0833bd87 +0x1c9:  call   0833f950 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1a1d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1a1d
0833bd8c +0x1ce:  jmp    0833bd99 <+0x1db>
0833bd8e +0x1d0:  lea    -0x30(%ebp),%eax
0833bd91 +0x1d3:  mov    %eax,(%esp)
0833bd94 +0x1d6:  call   0833f994 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1a61>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1a61
0833bd99 +0x1db:  mov    $0x1,%ebx
0833bd9e +0x1e0:  jmp    0833bdbb <+0x1fd>
0833bda0 +0x1e2:  mov    %edx,%ebx
0833bda2 +0x1e4:  mov    %eax,%esi
0833bda4 +0x1e6:  lea    -0x30(%ebp),%eax
0833bda7 +0x1e9:  mov    %eax,(%esp)
0833bdaa +0x1ec:  call   0833f8d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x19a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x19a5
0833bdaf +0x1f1:  mov    %esi,%eax
0833bdb1 +0x1f3:  mov    %ebx,%edx
0833bdb3 +0x1f5:  mov    %eax,(%esp)
0833bdb6 +0x1f8:  call   08ae3750 <_Unwind_Resume>
0833bdbb +0x1fd:  lea    -0x30(%ebp),%eax
0833bdbe +0x200:  mov    %eax,(%esp)
0833bdc1 +0x203:  call   0833f8d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x19a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x19a5
0833bdc6 +0x208:  mov    %ebx,%eax
0833bdc8 +0x20a:  lea    -0x8(%ebp),%esp
0833bdcb +0x20d:  add    $0x0,%esp
0833bdce +0x210:  pop    %ebx
0833bdcf +0x211:  pop    %esi
0833bdd0 +0x212:  pop    %ebp
0833bdd1 +0x213:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::SaveCreatureItem @ 0x833bbbe

/* user_creature::CCreatureMgr::SaveCreatureItem() */

undefined4 __thiscall user_creature::CCreatureMgr::SaveCreatureItem(CCreatureMgr *this)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  local_38 [4];
  CDBMsgSender local_34 [8];
  cMyTrace local_2c [16];
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  local_1c [4];
  _Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>> local_18 [4];
  SIG_CREATURE_ITEM_LIST *local_14;
  int *local_10;
  
  CDBMsgSender::CDBMsgSender(local_34,0x89,*(undefined4 *)(this + 0x1c));
                    /* try { // try from 0833bbe9 to 0833bd98 has its CatchHandler @ 0833bda0 */
  local_14 = CDBMsgSender::GetInBuffer<SIG_CREATURE_ITEM_LIST>(local_34);
  if (local_14 == (SIG_CREATURE_ITEM_LIST *)0x0) {
    uVar2 = CUser::get_unique_id(*(CUser **)(this + 0x1c));
    cMyTrace::cMyTrace(local_2c,"bool user_creature::CCreatureMgr::SaveCreatureItem()",0xd90,5);
    cMyTrace::operator()(local_2c,"cannot write db uid(%d)\n",uVar2 & 0xffff);
    uVar4 = 0;
  }
  else {
    memset(local_14,0,0x4078);
    *(int *)local_14 = 0;
    std::
    map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
    ::begin(local_38);
    while( true ) {
      std::
      map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
      ::end(local_1c);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>> *)
                         local_38,(_Rb_tree_iterator *)local_1c);
      if (cVar1 == '\0') break;
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>> *)
                         local_38);
      local_10 = *(int **)(iVar3 + 4);
      cVar1 = (**(code **)(*local_10 + 4))(local_10);
      if (cVar1 != '\0') {
        (**(code **)(*local_10 + 0xc))
                  (local_10,local_14 + *(int *)local_14 * 0x3d + 4,
                   local_14 + *(int *)local_14 * 0x38 + 0x21a0,*(undefined4 *)(this + 0x1c));
        if (*(int *)(local_14 + *(int *)local_14 * 0x38 + 0x21a4) != 0) {
          *(int *)local_14 = *(int *)local_14 + 1;
        }
      }
      std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator++
                (local_18,(int)local_38);
    }
    if (*(int *)local_14 == 0) {
      CDBMsgSender::Cancel(local_34);
    }
    else {
      CDBMsgSender::Send(local_34);
    }
    uVar4 = 1;
  }
  CDBMsgSender::~CDBMsgSender(local_34);
  return uVar4;
}
```
