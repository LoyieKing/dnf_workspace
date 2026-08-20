# UseFeed

`_ZN13user_creature12CCreatureMgr7UseFeedEv`

`user_creature::CCreatureMgr::UseFeed()`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x08339dba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08339dba  _ZN13user_creature12CCreatureMgr7UseFeedEv
#           user_creature::CCreatureMgr::UseFeed()
# range [0x08339dba, 0x08339edf]
08339dba +0x000:  push   %ebp
08339dbb +0x001:  mov    %esp,%ebp
08339dbd +0x003:  push   %esi
08339dbe +0x004:  push   %ebx
08339dbf +0x005:  sub    $0x30,%esp
08339dc2 +0x008:  mov    0x8(%ebp),%eax
08339dc5 +0x00b:  mov    0x18(%eax),%eax
08339dc8 +0x00e:  test   %eax,%eax
08339dca +0x010:  je     08339ed2 <+0x118>
08339dd0 +0x016:  movl   $0x0,-0x1c(%ebp)
08339dd7 +0x01d:  mov    0x8(%ebp),%eax
08339dda +0x020:  mov    0x1c(%eax),%edx
08339ddd +0x023:  mov    0x8(%ebp),%eax
08339de0 +0x026:  mov    0x18(%eax),%eax
08339de3 +0x029:  lea    -0x1c(%ebp),%ecx
08339de6 +0x02c:  mov    %ecx,0x8(%esp)
08339dea +0x030:  mov    %edx,0x4(%esp)
08339dee +0x034:  mov    %eax,(%esp)
08339df1 +0x037:  call   083373d4 <_ZN13user_creature9CCreature7UseFeedEP5CUserRi>  ; user_creature::CCreature::UseFeed(CUser*, int&)
08339df6 +0x03c:  test   %al,%al
08339df8 +0x03e:  je     08339ed2 <+0x118>
08339dfe +0x044:  mov    0x8(%ebp),%eax
08339e01 +0x047:  mov    0x1c(%eax),%eax
08339e04 +0x04a:  mov    %eax,0x8(%esp)
08339e08 +0x04e:  movl   $0x8a,0x4(%esp)
08339e10 +0x056:  lea    -0x24(%ebp),%eax
08339e13 +0x059:  mov    %eax,(%esp)
08339e16 +0x05c:  call   0833f8ae <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x197b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x197b
08339e1b +0x061:  mov    -0x1c(%ebp),%ebx
08339e1e +0x064:  mov    0x8(%ebp),%eax
08339e21 +0x067:  mov    0x18(%eax),%eax
08339e24 +0x06a:  mov    %eax,(%esp)
08339e27 +0x06d:  call   0833efbe <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x108b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x108b
08339e2c +0x072:  mov    %ebx,0x8(%esp)
08339e30 +0x076:  mov    %eax,0x4(%esp)
08339e34 +0x07a:  lea    -0x24(%ebp),%eax
08339e37 +0x07d:  mov    %eax,(%esp)
08339e3a +0x080:  call   0833fc5a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1d27>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1d27
08339e3f +0x085:  xor    $0x1,%eax
08339e42 +0x088:  test   %al,%al
08339e44 +0x08a:  je     08339e98 <+0xde>
08339e46 +0x08c:  mov    0x8(%ebp),%eax
08339e49 +0x08f:  mov    0x1c(%eax),%eax
08339e4c +0x092:  mov    %eax,(%esp)
08339e4f +0x095:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08339e54 +0x09a:  movzwl %ax,%ebx
08339e57 +0x09d:  movl   $0x5,0xc(%esp)
08339e5f +0x0a5:  movl   $0xab5,0x8(%esp)
08339e67 +0x0ad:  movl   $&_ZZN13user_creature12CCreatureMgr7UseFeedEvE19__PRETTY_FUNCTION__,0x4(%esp)
08339e6f +0x0b5:  lea    -0x18(%ebp),%eax
08339e72 +0x0b8:  mov    %eax,(%esp)
08339e75 +0x0bb:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08339e7a +0x0c0:  mov    %ebx,0x8(%esp)
08339e7e +0x0c4:  movl   $"cannot write db uid(%d)\n",0x4(%esp)
08339e86 +0x0cc:  lea    -0x18(%ebp),%eax
08339e89 +0x0cf:  mov    %eax,(%esp)
08339e8c +0x0d2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08339e91 +0x0d7:  mov    $0x0,%ebx
08339e96 +0x0dc:  jmp    08339ec5 <+0x10b>
08339e98 +0x0de:  lea    -0x24(%ebp),%eax
08339e9b +0x0e1:  mov    %eax,(%esp)
08339e9e +0x0e4:  call   0833f950 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1a1d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1a1d
08339ea3 +0x0e9:  mov    $0x1,%ebx
08339ea8 +0x0ee:  jmp    08339ec5 <+0x10b>
08339eaa +0x0f0:  mov    %edx,%ebx
08339eac +0x0f2:  mov    %eax,%esi
08339eae +0x0f4:  lea    -0x24(%ebp),%eax
08339eb1 +0x0f7:  mov    %eax,(%esp)
08339eb4 +0x0fa:  call   0833f8d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x19a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x19a5
08339eb9 +0x0ff:  mov    %esi,%eax
08339ebb +0x101:  mov    %ebx,%edx
08339ebd +0x103:  mov    %eax,(%esp)
08339ec0 +0x106:  call   08ae3750 <_Unwind_Resume>
08339ec5 +0x10b:  lea    -0x24(%ebp),%eax
08339ec8 +0x10e:  mov    %eax,(%esp)
08339ecb +0x111:  call   0833f8d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x19a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x19a5
08339ed0 +0x116:  jmp    08339ed7 <+0x11d>
08339ed2 +0x118:  mov    $0x0,%ebx
08339ed7 +0x11d:  mov    %ebx,%eax
08339ed9 +0x11f:  add    $0x30,%esp
08339edc +0x122:  pop    %ebx
08339edd +0x123:  pop    %esi
08339ede +0x124:  pop    %ebp
08339edf +0x125:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::UseFeed @ 0x8339dba

/* user_creature::CCreatureMgr::UseFeed() */

bool __thiscall user_creature::CCreatureMgr::UseFeed(CCreatureMgr *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  CDBMsgSender local_28 [8];
  int local_20;
  cMyTrace local_1c [16];
  
  if (*(int *)(this + 0x18) != 0) {
    local_20 = 0;
    cVar2 = CCreature::UseFeed(*(CCreature **)(this + 0x18),*(CUser **)(this + 0x1c),&local_20);
    if (cVar2 != '\0') {
      CDBMsgSender::CDBMsgSender(local_28,0x8a,*(undefined4 *)(this + 0x1c));
      iVar1 = local_20;
      iVar3 = CCreatureItem::GetUid(*(CCreatureItem **)(this + 0x18));
                    /* try { // try from 08339e3a to 08339ea2 has its CatchHandler @ 08339eaa */
      cVar2 = CDBMsgSender::UseFeedCreature(local_28,iVar3,iVar1);
      if (cVar2 == '\x01') {
        CDBMsgSender::Send(local_28);
      }
      else {
        uVar4 = CUser::get_unique_id(*(CUser **)(this + 0x1c));
        cMyTrace::cMyTrace(local_1c,"bool user_creature::CCreatureMgr::UseFeed()",0xab5,5);
        cMyTrace::operator()(local_1c,"cannot write db uid(%d)\n",uVar4 & 0xffff);
      }
      CDBMsgSender::~CDBMsgSender(local_28);
      return cVar2 == '\x01';
    }
  }
  return false;
}
```
