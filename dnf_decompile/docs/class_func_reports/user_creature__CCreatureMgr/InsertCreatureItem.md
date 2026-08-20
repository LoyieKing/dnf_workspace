# InsertCreatureItem

`_ZN13user_creature12CCreatureMgr18InsertCreatureItemEP10Inven_Itemiiii`

`user_creature::CCreatureMgr::InsertCreatureItem(Inven_Item*, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833b204` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833b204  _ZN13user_creature12CCreatureMgr18InsertCreatureItemEP10Inven_Itemiiii
#           user_creature::CCreatureMgr::InsertCreatureItem(Inven_Item*, int, int, int, int)
# range [0x0833b204, 0x0833b38b]
0833b204 +0x000:  push   %ebp
0833b205 +0x001:  mov    %esp,%ebp
0833b207 +0x003:  push   %esi
0833b208 +0x004:  push   %ebx
0833b209 +0x005:  sub    $0x40,%esp
0833b20c +0x008:  mov    0x10(%ebp),%eax
0833b20f +0x00b:  mov    %eax,0x4(%esp)
0833b213 +0x00f:  mov    0x8(%ebp),%eax
0833b216 +0x012:  mov    %eax,(%esp)
0833b219 +0x015:  call   0833926c <_ZN13user_creature12CCreatureMgr24IsCreatureEquipmentScopeEi>  ; user_creature::CCreatureMgr::IsCreatureEquipmentScope(int)
0833b21e +0x01a:  xor    $0x1,%eax
0833b221 +0x01d:  test   %al,%al
0833b223 +0x01f:  je     0833b22f <+0x2b>
0833b225 +0x021:  mov    $0x1,%ebx
0833b22a +0x026:  jmp    0833b383 <+0x17f>
0833b22f +0x02b:  mov    0xc(%ebp),%eax
0833b232 +0x02e:  movzbl 0x1(%eax),%eax
0833b236 +0x032:  cmp    $0x5,%al
0833b238 +0x034:  je     0833b244 <+0x40>
0833b23a +0x036:  mov    $0x1,%ebx
0833b23f +0x03b:  jmp    0833b383 <+0x17f>
0833b244 +0x040:  mov    0x8(%ebp),%eax
0833b247 +0x043:  mov    0x1c(%eax),%eax
0833b24a +0x046:  mov    %eax,0x8(%esp)
0833b24e +0x04a:  movl   $0x87,0x4(%esp)
0833b256 +0x052:  lea    -0x28(%ebp),%eax
0833b259 +0x055:  mov    %eax,(%esp)
0833b25c +0x058:  call   0833f8ae <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x197b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x197b
0833b261 +0x05d:  mov    0x8(%ebp),%eax
0833b264 +0x060:  mov    %eax,(%esp)
0833b267 +0x063:  call   083418f2 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39bf>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39bf
0833b26c +0x068:  mov    %eax,-0x10(%ebp)
0833b26f +0x06b:  mov    0x8(%ebp),%eax
0833b272 +0x06e:  mov    0x1c(%eax),%eax
0833b275 +0x071:  mov    0x1c(%ebp),%edx
0833b278 +0x074:  mov    %edx,0x1c(%esp)
0833b27c +0x078:  mov    0x18(%ebp),%edx
0833b27f +0x07b:  mov    %edx,0x18(%esp)
0833b283 +0x07f:  mov    -0x10(%ebp),%edx
0833b286 +0x082:  mov    %edx,0x14(%esp)
0833b28a +0x086:  mov    0x14(%ebp),%edx
0833b28d +0x089:  mov    %edx,0x10(%esp)
0833b291 +0x08d:  mov    0x10(%ebp),%edx
0833b294 +0x090:  mov    %edx,0xc(%esp)
0833b298 +0x094:  mov    0xc(%ebp),%edx
0833b29b +0x097:  mov    %edx,0x8(%esp)
0833b29f +0x09b:  mov    %eax,0x4(%esp)
0833b2a3 +0x09f:  lea    -0x28(%ebp),%eax
0833b2a6 +0x0a2:  mov    %eax,(%esp)
0833b2a9 +0x0a5:  call   0833faaa <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1b77>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1b77
0833b2ae +0x0aa:  xor    $0x1,%eax
0833b2b1 +0x0ad:  test   %al,%al
0833b2b3 +0x0af:  je     0833b307 <+0x103>
0833b2b5 +0x0b1:  mov    0x8(%ebp),%eax
0833b2b8 +0x0b4:  mov    0x1c(%eax),%eax
0833b2bb +0x0b7:  mov    %eax,(%esp)
0833b2be +0x0ba:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0833b2c3 +0x0bf:  movzwl %ax,%ebx
0833b2c6 +0x0c2:  movl   $0x5,0xc(%esp)
0833b2ce +0x0ca:  movl   $0xcaf,0x8(%esp)
0833b2d6 +0x0d2:  movl   $&_ZZN13user_creature12CCreatureMgr18InsertCreatureItemEP10Inven_ItemiiiiE19__PRETTY_FUNCTION__,0x4(%esp)
0833b2de +0x0da:  lea    -0x20(%ebp),%eax
0833b2e1 +0x0dd:  mov    %eax,(%esp)
0833b2e4 +0x0e0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0833b2e9 +0x0e5:  mov    %ebx,0x8(%esp)
0833b2ed +0x0e9:  movl   $"cannot write db uid(%d)\n",0x4(%esp)
0833b2f5 +0x0f1:  lea    -0x20(%ebp),%eax
0833b2f8 +0x0f4:  mov    %eax,(%esp)
0833b2fb +0x0f7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0833b300 +0x0fc:  mov    $0x0,%ebx
0833b305 +0x101:  jmp    0833b378 <+0x174>
0833b307 +0x103:  lea    -0x28(%ebp),%eax
0833b30a +0x106:  mov    %eax,(%esp)
0833b30d +0x109:  call   0833f950 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1a1d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1a1d
0833b312 +0x10e:  movl   $0x0,-0xc(%ebp)
0833b319 +0x115:  cmpl   $0x0,0x18(%ebp)
0833b31d +0x119:  jne    0833b338 <+0x134>
0833b31f +0x11b:  cmpl   $0x0,0x1c(%ebp)
0833b323 +0x11f:  je     0833b338 <+0x134>
0833b325 +0x121:  mov    0x1c(%ebp),%ebx
0833b328 +0x124:  call   0858c802 <_ZN6OS_API15GetDateTimeTickEv>  ; OS_API::GetDateTimeTick()
0833b32d +0x129:  mov    %ebx,%edx
0833b32f +0x12b:  sub    %eax,%edx
0833b331 +0x12d:  mov    %edx,%eax
0833b333 +0x12f:  mov    %eax,-0xc(%ebp)
0833b336 +0x132:  jmp    0833b344 <+0x140>
0833b338 +0x134:  mov    0x18(%ebp),%eax
0833b33b +0x137:  imul   $&_ZL14gUnicodeBuffer+0xac54,%eax,%eax
0833b341 +0x13d:  mov    %eax,-0xc(%ebp)
0833b344 +0x140:  mov    -0xc(%ebp),%eax
0833b347 +0x143:  mov    %eax,0x4(%esp)
0833b34b +0x147:  mov    0x8(%ebp),%eax
0833b34e +0x14a:  mov    %eax,(%esp)
0833b351 +0x14d:  call   0833f10c <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x11d9>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x11d9
0833b356 +0x152:  mov    $0x1,%ebx
0833b35b +0x157:  jmp    0833b378 <+0x174>
0833b35d +0x159:  mov    %edx,%ebx
0833b35f +0x15b:  mov    %eax,%esi
0833b361 +0x15d:  lea    -0x28(%ebp),%eax
0833b364 +0x160:  mov    %eax,(%esp)
0833b367 +0x163:  call   0833f8d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x19a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x19a5
0833b36c +0x168:  mov    %esi,%eax
0833b36e +0x16a:  mov    %ebx,%edx
0833b370 +0x16c:  mov    %eax,(%esp)
0833b373 +0x16f:  call   08ae3750 <_Unwind_Resume>
0833b378 +0x174:  lea    -0x28(%ebp),%eax
0833b37b +0x177:  mov    %eax,(%esp)
0833b37e +0x17a:  call   0833f8d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x19a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x19a5
0833b383 +0x17f:  mov    %ebx,%eax
0833b385 +0x181:  add    $0x40,%esp
0833b388 +0x184:  pop    %ebx
0833b389 +0x185:  pop    %esi
0833b38a +0x186:  pop    %ebp
0833b38b +0x187:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::InsertCreatureItem @ 0x833b204

/* user_creature::CCreatureMgr::InsertCreatureItem(Inven_Item*, int, int, int, int) */

undefined4 __thiscall
user_creature::CCreatureMgr::InsertCreatureItem
          (CCreatureMgr *this,Inven_Item *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  CDBMsgSender local_2c [8];
  cMyTrace local_24 [16];
  int local_14;
  int local_10;
  
  cVar1 = IsCreatureEquipmentScope(this,param_2);
  if (cVar1 == '\x01') {
    if (param_1[1] == (Inven_Item)0x5) {
      CDBMsgSender::CDBMsgSender(local_2c,0x87,*(undefined4 *)(this + 0x1c));
                    /* try { // try from 0833b267 to 0833b32c has its CatchHandler @ 0833b35d */
      local_14 = std::
                 map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
                 ::size((map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
                         *)this);
      cVar1 = CDBMsgSender::InsertCreatureItem
                        (local_2c,*(CUser **)(this + 0x1c),param_1,param_2,param_3,local_14,param_4,
                         param_5);
      if (cVar1 == '\x01') {
        CDBMsgSender::Send(local_2c);
        local_10 = 0;
        if ((param_4 == 0) && (param_5 != 0)) {
          local_10 = OS_API::GetDateTimeTick();
          local_10 = param_5 - local_10;
        }
        else {
          local_10 = param_4 * 0x15180;
        }
        setTempExpireTime(this,local_10);
        uVar3 = 1;
      }
      else {
        uVar2 = CUser::get_unique_id(*(CUser **)(this + 0x1c));
        cMyTrace::cMyTrace(local_24,
                           "bool user_creature::CCreatureMgr::InsertCreatureItem(Inven_Item*, int, int, int, int)"
                           ,0xcaf,5);
        cMyTrace::operator()(local_24,"cannot write db uid(%d)\n",uVar2 & 0xffff);
        uVar3 = 0;
      }
      CDBMsgSender::~CDBMsgSender(local_2c);
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}
```
