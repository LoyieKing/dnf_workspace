# createUser

`_ZN12CGameManager10createUserEv`

`CGameManager::createUser()`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08294296` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08294296  _ZN12CGameManager10createUserEv
#           CGameManager::createUser()
# range [0x08294296, 0x0829445d]
08294296 +0x000:  push   %ebp
08294297 +0x001:  mov    %esp,%ebp
08294299 +0x003:  push   %edi
0829429a +0x004:  push   %esi
0829429b +0x005:  push   %ebx
0829429c +0x006:  sub    $0x6c,%esp
0829429f +0x009:  mov    0x8(%ebp),%eax
082942a2 +0x00c:  mov    %eax,0x4(%esp)
082942a6 +0x010:  lea    -0x54(%ebp),%eax
082942a9 +0x013:  mov    %eax,(%esp)
082942ac +0x016:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
082942b1 +0x01b:  mov    0x8(%ebp),%eax
082942b4 +0x01e:  add    $0x4c,%eax
082942b7 +0x021:  mov    %eax,(%esp)
082942ba +0x024:  call   082b02dc <_GLOBAL__I__ZN4CLog5this_E+0xc703>  ; global constructors keyed to CLog::this_+0xc703
082942bf +0x029:  mov    %eax,-0x30(%ebp)
082942c2 +0x02c:  lea    -0x54(%ebp),%eax
082942c5 +0x02f:  mov    %eax,(%esp)
082942c8 +0x032:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
082942cd +0x037:  cmpl   $0x0,-0x30(%ebp)
082942d1 +0x03b:  je     082942f0 <+0x5a>
082942d3 +0x03d:  jmp    08294330 <+0x9a>
082942d5 +0x03f:  mov    %edx,%ebx
082942d7 +0x041:  mov    %eax,%esi
082942d9 +0x043:  lea    -0x54(%ebp),%eax
082942dc +0x046:  mov    %eax,(%esp)
082942df +0x049:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
082942e4 +0x04e:  mov    %esi,%eax
082942e6 +0x050:  mov    %ebx,%edx
082942e8 +0x052:  mov    %eax,(%esp)
082942eb +0x055:  call   08ae3750 <_Unwind_Resume>
082942f0 +0x05a:  movl   $0x5,0xc(%esp)
082942f8 +0x062:  movl   $0x8e3,0x8(%esp)
08294300 +0x06a:  movl   $&_ZZN12CGameManager10createUserEvE19__PRETTY_FUNCTION__,0x4(%esp)
08294308 +0x072:  lea    -0x50(%ebp),%eax
0829430b +0x075:  mov    %eax,(%esp)
0829430e +0x078:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08294313 +0x07d:  movl   $"createUser Failed! need to restart!",0x4(%esp)
0829431b +0x085:  lea    -0x50(%ebp),%eax
0829431e +0x088:  mov    %eax,(%esp)
08294321 +0x08b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08294326 +0x090:  mov    $0x0,%eax
0829432b +0x095:  jmp    08294456 <+0x1c0>
08294330 +0x09a:  mov    -0x30(%ebp),%eax
08294333 +0x09d:  mov    %eax,(%esp)
08294336 +0x0a0:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0829433b +0x0a5:  mov    %eax,-0x2c(%ebp)
0829433e +0x0a8:  mov    -0x30(%ebp),%eax
08294341 +0x0ab:  mov    %eax,(%esp)
08294344 +0x0ae:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08294349 +0x0b3:  mov    %eax,-0x28(%ebp)
0829434c +0x0b6:  mov    -0x30(%ebp),%eax
0829434f +0x0b9:  mov    %eax,0x4(%esp)
08294353 +0x0bd:  mov    0x8(%ebp),%eax
08294356 +0x0c0:  mov    %eax,(%esp)
08294359 +0x0c3:  call   0829451e <_ZN12CGameManager14check_user_varEP5CUser>  ; CGameManager::check_user_var(CUser*)
0829435e +0x0c8:  mov    -0x30(%ebp),%eax
08294361 +0x0cb:  mov    %eax,0x4(%esp)
08294365 +0x0cf:  mov    0x8(%ebp),%eax
08294368 +0x0d2:  mov    %eax,(%esp)
0829436b +0x0d5:  call   082948a2 <_ZN12CGameManager6GetIdxEP5CUser>  ; CGameManager::GetIdx(CUser*)
08294370 +0x0da:  mov    %eax,-0x24(%ebp)
08294373 +0x0dd:  mov    -0x24(%ebp),%eax
08294376 +0x0e0:  cwtl
08294377 +0x0e1:  mov    %eax,0x4(%esp)
0829437b +0x0e5:  mov    -0x30(%ebp),%eax
0829437e +0x0e8:  mov    %eax,(%esp)
08294381 +0x0eb:  call   082a681e <_GLOBAL__I__ZN4CLog5this_E+0x2c45>  ; global constructors keyed to CLog::this_+0x2c45
08294386 +0x0f0:  mov    0x8(%ebp),%eax
08294389 +0x0f3:  add    $0x4c,%eax
0829438c +0x0f6:  mov    %eax,(%esp)
0829438f +0x0f9:  call   082b040a <_GLOBAL__I__ZN4CLog5this_E+0xc831>  ; global constructors keyed to CLog::this_+0xc831
08294394 +0x0fe:  mov    %eax,-0x20(%ebp)
08294397 +0x101:  cmpl   $0x0,-0x20(%ebp)
0829439b +0x105:  je     08294412 <+0x17c>
0829439d +0x107:  mov    -0x30(%ebp),%eax
082943a0 +0x10a:  mov    %eax,(%esp)
082943a3 +0x10d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
082943a8 +0x112:  mov    %eax,%esi
082943aa +0x114:  movl   $0x0,0x4(%esp)
082943b2 +0x11c:  mov    -0x28(%ebp),%eax
082943b5 +0x11f:  mov    %eax,(%esp)
082943b8 +0x122:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
082943bd +0x127:  mov    %eax,%ebx
082943bf +0x129:  mov    -0x20(%ebp),%edi
082943c2 +0x12c:  movl   $0x0,0xc(%esp)
082943ca +0x134:  movl   $0x8f6,0x8(%esp)
082943d2 +0x13c:  movl   $&_ZZN12CGameManager10createUserEvE19__PRETTY_FUNCTION__,0x4(%esp)
082943da +0x144:  lea    -0x40(%ebp),%eax
082943dd +0x147:  mov    %eax,(%esp)
082943e0 +0x14a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082943e5 +0x14f:  mov    %esi,0x18(%esp)
082943e9 +0x153:  mov    -0x2c(%ebp),%eax
082943ec +0x156:  mov    %eax,0x14(%esp)
082943f0 +0x15a:  mov    %ebx,0x10(%esp)
082943f4 +0x15e:  mov    -0x30(%ebp),%eax
082943f7 +0x161:  mov    %eax,0xc(%esp)
082943fb +0x165:  mov    %edi,0x8(%esp)
082943ff +0x169:  movl   $"STATIC MEMORY_POOL createUser error(%d), user(%x), last user m_acc_id(%s), idx(%d), new user idx(%d)",0x4(%esp)
08294407 +0x171:  lea    -0x40(%ebp),%eax
0829440a +0x174:  mov    %eax,(%esp)
0829440d +0x177:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08294412 +0x17c:  mov    0x8(%ebp),%eax
08294415 +0x17f:  mov    %eax,(%esp)
08294418 +0x182:  call   0829424c <_ZN12CGameManager10getNextUIDEv>  ; CGameManager::getNextUID()
0829441d +0x187:  mov    %ax,-0x1a(%ebp)
08294421 +0x18b:  movswl -0x1a(%ebp),%eax
08294425 +0x18f:  mov    %eax,0x4(%esp)
08294429 +0x193:  mov    -0x30(%ebp),%eax
0829442c +0x196:  mov    %eax,(%esp)
0829442f +0x199:  call   082a684c <_GLOBAL__I__ZN4CLog5this_E+0x2c73>  ; global constructors keyed to CLog::this_+0x2c73
08294434 +0x19e:  call   086ad85f <_Z29CUserGlobalInfoHandleInstancev>  ; CUserGlobalInfoHandleInstance()
08294439 +0x1a3:  mov    %eax,(%esp)
0829443c +0x1a6:  call   086ad910 <_ZN21CUserGlobalInfoHandle12get_uniqueidEv>  ; CUserGlobalInfoHandle::get_uniqueid()
08294441 +0x1ab:  movzwl %ax,%eax
08294444 +0x1ae:  mov    %eax,0x4(%esp)
08294448 +0x1b2:  mov    -0x30(%ebp),%eax
0829444b +0x1b5:  mov    %eax,(%esp)
0829444e +0x1b8:  call   082a686a <_GLOBAL__I__ZN4CLog5this_E+0x2c91>  ; global constructors keyed to CLog::this_+0x2c91
08294453 +0x1bd:  mov    -0x30(%ebp),%eax
08294456 +0x1c0:  add    $0x6c,%esp
08294459 +0x1c3:  pop    %ebx
0829445a +0x1c4:  pop    %esi
0829445b +0x1c5:  pop    %edi
0829445c +0x1c6:  pop    %ebp
0829445d +0x1c7:  ret
```

## 反编译 C

```c
// CGameManager::createUser @ 0x8294296

/* CGameManager::createUser() */

CUser * __thiscall CGameManager::createUser(CGameManager *this)

{
  int iVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CUserGlobalInfoHandle *this_00;
  Guard<Mutex> local_58 [4];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  CUser *local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  int local_24;
  short local_1e;
  
  Guard<Mutex>::Guard(local_58,(Mutex *)this);
                    /* try { // try from 082942ba to 082942be has its CatchHandler @ 082942d5 */
  local_34 = (CUser *)StaticPool<CUser,600>::Acquire((StaticPool<CUser,600> *)(this + 0x4c));
  Guard<Mutex>::~Guard(local_58);
  if (local_34 == (CUser *)0x0) {
    cMyTrace::cMyTrace(local_54,"CUser* CGameManager::createUser()",0x8e3,5);
    cMyTrace::operator()(local_54,"createUser Failed! need to restart!");
    local_34 = (CUser *)0x0;
  }
  else {
    local_30 = CUser::GetUID(local_34);
    local_2c = CUser::get_acc_id(local_34);
    check_user_var(this,local_34);
    local_28 = GetIdx(this,local_34);
    CUser::SetSlotIDX(local_34,(short)local_28);
    local_24 = StaticPool<CUser,600>::GetLastErrorCode((StaticPool<CUser,600> *)(this + 0x4c));
    if (local_24 != 0) {
      uVar3 = CUser::GetUID(local_34);
      uVar4 = NumberToString(local_2c,0);
      iVar1 = local_24;
      cMyTrace::cMyTrace(local_44,"CUser* CGameManager::createUser()",0x8f6,0);
      cMyTrace::operator()
                (local_44,
                 "STATIC MEMORY_POOL createUser error(%d), user(%x), last user m_acc_id(%s), idx(%d), new user idx(%d)"
                 ,iVar1,local_34,uVar4,local_30,uVar3);
    }
    local_1e = getNextUID(this);
    CUser::SetIncreID(local_34,local_1e);
    this_00 = (CUserGlobalInfoHandle *)CUserGlobalInfoHandleInstance();
    uVar2 = CUserGlobalInfoHandle::get_uniqueid(this_00);
    CUser::set_unique_id(local_34,uVar2);
  }
  return local_34;
}
```
