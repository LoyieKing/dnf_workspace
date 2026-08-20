# sendState

`_ZN4ARAD23Arad_ServerStateManager9sendStateEP5CUser`

`ARAD::Arad_ServerStateManager::sendState(CUser*)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_ServerStateManager` | `0x081a9500` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a9500  _ZN4ARAD23Arad_ServerStateManager9sendStateEP5CUser
#           ARAD::Arad_ServerStateManager::sendState(CUser*)
# range [0x081a9500, 0x081a95db]
081a9500 +0x00:  push   %ebp
081a9501 +0x01:  mov    %esp,%ebp
081a9503 +0x03:  push   %esi
081a9504 +0x04:  push   %ebx
081a9505 +0x05:  sub    $0x30,%esp
081a9508 +0x08:  mov    0x8(%ebp),%eax
081a950b +0x0b:  add    $0x4,%eax
081a950e +0x0e:  mov    %eax,0x4(%esp)
081a9512 +0x12:  lea    -0x1c(%ebp),%eax
081a9515 +0x15:  mov    %eax,(%esp)
081a9518 +0x18:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
081a951d +0x1d:  mov    0xc(%ebp),%eax
081a9520 +0x20:  mov    %eax,0x4(%esp)
081a9524 +0x24:  lea    -0x14(%ebp),%eax
081a9527 +0x27:  mov    %eax,(%esp)
081a952a +0x2a:  call   081a9dac <_GLOBAL__I__ZN4ARAD23Arad_ServerStateManagerC2Ev+0xa7>  ; global constructors keyed to ARAD::Arad_ServerStateManager::Arad_ServerStateManager()+0xa7
081a952f +0x2f:  mov    0x8(%ebp),%eax
081a9532 +0x32:  lea    0x1c(%eax),%edx
081a9535 +0x35:  lea    -0x10(%ebp),%eax
081a9538 +0x38:  mov    %edx,0x4(%esp)
081a953c +0x3c:  mov    %eax,(%esp)
081a953f +0x3f:  call   081a9ec0 <_GLOBAL__I__ZN4ARAD23Arad_ServerStateManagerC2Ev+0x1bb>  ; global constructors keyed to ARAD::Arad_ServerStateManager::Arad_ServerStateManager()+0x1bb
081a9544 +0x44:  sub    $0x4,%esp
081a9547 +0x47:  mov    0x8(%ebp),%eax
081a954a +0x4a:  lea    0x1c(%eax),%edx
081a954d +0x4d:  lea    -0xc(%ebp),%eax
081a9550 +0x50:  mov    %edx,0x4(%esp)
081a9554 +0x54:  mov    %eax,(%esp)
081a9557 +0x57:  call   081a9e9a <_GLOBAL__I__ZN4ARAD23Arad_ServerStateManagerC2Ev+0x195>  ; global constructors keyed to ARAD::Arad_ServerStateManager::Arad_ServerStateManager()+0x195
081a955c +0x5c:  sub    $0x4,%esp
081a955f +0x5f:  lea    -0x18(%ebp),%eax
081a9562 +0x62:  lea    -0x14(%ebp),%edx
081a9565 +0x65:  mov    %edx,0xc(%esp)
081a9569 +0x69:  mov    -0x10(%ebp),%edx
081a956c +0x6c:  mov    %edx,0x8(%esp)
081a9570 +0x70:  mov    -0xc(%ebp),%edx
081a9573 +0x73:  mov    %edx,0x4(%esp)
081a9577 +0x77:  mov    %eax,(%esp)
081a957a +0x7a:  call   081a9ee5 <_GLOBAL__I__ZN4ARAD23Arad_ServerStateManagerC2Ev+0x1e0>  ; global constructors keyed to ARAD::Arad_ServerStateManager::Arad_ServerStateManager()+0x1e0
081a957f +0x7f:  sub    $0x4,%esp
081a9582 +0x82:  lea    -0x18(%ebp),%eax
081a9585 +0x85:  mov    %eax,(%esp)
081a9588 +0x88:  call   081a9dba <_GLOBAL__I__ZN4ARAD23Arad_ServerStateManagerC2Ev+0xb5>  ; global constructors keyed to ARAD::Arad_ServerStateManager::Arad_ServerStateManager()+0xb5
081a958d +0x8d:  lea    -0x14(%ebp),%eax
081a9590 +0x90:  mov    %eax,(%esp)
081a9593 +0x93:  call   081a9dba <_GLOBAL__I__ZN4ARAD23Arad_ServerStateManagerC2Ev+0xb5>  ; global constructors keyed to ARAD::Arad_ServerStateManager::Arad_ServerStateManager()+0xb5
081a9598 +0x98:  lea    -0x1c(%ebp),%eax
081a959b +0x9b:  mov    %eax,(%esp)
081a959e +0x9e:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
081a95a3 +0xa3:  lea    -0x8(%ebp),%esp
081a95a6 +0xa6:  add    $0x0,%esp
081a95a9 +0xa9:  pop    %ebx
081a95aa +0xaa:  pop    %esi
081a95ab +0xab:  pop    %ebp
081a95ac +0xac:  ret
081a95ad +0xad:  mov    %edx,%ebx
081a95af +0xaf:  mov    %eax,%esi
081a95b1 +0xb1:  lea    -0x14(%ebp),%eax
081a95b4 +0xb4:  mov    %eax,(%esp)
081a95b7 +0xb7:  call   081a9dba <_GLOBAL__I__ZN4ARAD23Arad_ServerStateManagerC2Ev+0xb5>  ; global constructors keyed to ARAD::Arad_ServerStateManager::Arad_ServerStateManager()+0xb5
081a95bc +0xbc:  mov    %esi,%eax
081a95be +0xbe:  mov    %ebx,%edx
081a95c0 +0xc0:  mov    %edx,%ebx
081a95c2 +0xc2:  mov    %eax,%esi
081a95c4 +0xc4:  lea    -0x1c(%ebp),%eax
081a95c7 +0xc7:  mov    %eax,(%esp)
081a95ca +0xca:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
081a95cf +0xcf:  mov    %esi,%eax
081a95d1 +0xd1:  mov    %ebx,%edx
081a95d3 +0xd3:  mov    %eax,(%esp)
081a95d6 +0xd6:  call   08ae3750 <_Unwind_Resume>
081a95db +0xdb:  nop
```

## 反编译 C

```c
// ARAD::Arad_ServerStateManager::sendState @ 0x81a9500

/* ARAD::Arad_ServerStateManager::sendState(CUser*) */

void __thiscall
ARAD::Arad_ServerStateManager::sendState(Arad_ServerStateManager *this,CUser *param_1)

{
  Guard<Mutex> local_20 [4];
  SSendEffect local_1c [4];
  SSendEffect local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  
  Guard<Mutex>::Guard(local_20,(Mutex *)(this + 4));
  SSendEffect::SSendEffect(local_18,param_1);
                    /* try { // try from 081a953f to 081a957e has its CatchHandler @ 081a95ad */
  std::
  map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
  ::end((map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
         *)&local_14);
  std::
  map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
  ::begin((map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
           *)&local_10);
  std::
  for_each<std::_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>,ARAD::SSendEffect>
            (local_1c,local_10,local_14,local_18);
  SSendEffect::~SSendEffect(local_1c);
  SSendEffect::~SSendEffect(local_18);
  Guard<Mutex>::~Guard(local_20);
  return;
}
```
