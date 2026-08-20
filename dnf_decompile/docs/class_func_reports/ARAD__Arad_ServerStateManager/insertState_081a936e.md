# insertState

`_ZN4ARAD23Arad_ServerStateManager11insertStateE23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessage`

`ARAD::Arad_ServerStateManager::insertState(ENUM_GLOBAL_EFFECT_ARAD, AradServerStateMessage const&)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_ServerStateManager` | `0x081a936e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a936e  _ZN4ARAD23Arad_ServerStateManager11insertStateE23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessage
#           ARAD::Arad_ServerStateManager::insertState(ENUM_GLOBAL_EFFECT_ARAD, AradServerStateMessage const&)
# range [0x081a936e, 0x081a93d3]
081a936e +0x00:  push   %ebp
081a936f +0x01:  mov    %esp,%ebp
081a9371 +0x03:  push   %esi
081a9372 +0x04:  push   %ebx
081a9373 +0x05:  sub    $0x20,%esp
081a9376 +0x08:  mov    0x8(%ebp),%eax
081a9379 +0x0b:  add    $0x4,%eax
081a937c +0x0e:  mov    %eax,0x4(%esp)
081a9380 +0x12:  lea    -0xc(%ebp),%eax
081a9383 +0x15:  mov    %eax,(%esp)
081a9386 +0x18:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
081a938b +0x1d:  mov    0x10(%ebp),%eax
081a938e +0x20:  mov    %eax,0x8(%esp)
081a9392 +0x24:  mov    0xc(%ebp),%eax
081a9395 +0x27:  mov    %eax,0x4(%esp)
081a9399 +0x2b:  mov    0x8(%ebp),%eax
081a939c +0x2e:  mov    %eax,(%esp)
081a939f +0x31:  call   081a991a <_ZN4ARAD23Arad_ServerStateManager17insertStateNoSyncE23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessage>  ; ARAD::Arad_ServerStateManager::insertStateNoSync(ENUM_GLOBAL_EFFECT_ARAD, AradServerStateMessage const&)
081a93a4 +0x36:  jmp    081a93c1 <+0x53>
081a93a6 +0x38:  mov    %edx,%ebx
081a93a8 +0x3a:  mov    %eax,%esi
081a93aa +0x3c:  lea    -0xc(%ebp),%eax
081a93ad +0x3f:  mov    %eax,(%esp)
081a93b0 +0x42:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
081a93b5 +0x47:  mov    %esi,%eax
081a93b7 +0x49:  mov    %ebx,%edx
081a93b9 +0x4b:  mov    %eax,(%esp)
081a93bc +0x4e:  call   08ae3750 <_Unwind_Resume>
081a93c1 +0x53:  lea    -0xc(%ebp),%eax
081a93c4 +0x56:  mov    %eax,(%esp)
081a93c7 +0x59:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
081a93cc +0x5e:  add    $0x20,%esp
081a93cf +0x61:  pop    %ebx
081a93d0 +0x62:  pop    %esi
081a93d1 +0x63:  pop    %ebp
081a93d2 +0x64:  ret
081a93d3 +0x65:  nop
```

## 反编译 C

```c
// ARAD::Arad_ServerStateManager::insertState @ 0x81a936e

/* ARAD::Arad_ServerStateManager::insertState(ENUM_GLOBAL_EFFECT_ARAD, AradServerStateMessage
   const&) */

void __thiscall
ARAD::Arad_ServerStateManager::insertState
          (Arad_ServerStateManager *this,undefined4 param_2,undefined4 param_3)

{
  Guard<Mutex> local_10 [4];
  
  Guard<Mutex>::Guard(local_10,(Mutex *)(this + 4));
                    /* try { // try from 081a939f to 081a93a3 has its CatchHandler @ 081a93a6 */
  insertStateNoSync(this,param_2,param_3);
  Guard<Mutex>::~Guard(local_10);
  return;
}
```
