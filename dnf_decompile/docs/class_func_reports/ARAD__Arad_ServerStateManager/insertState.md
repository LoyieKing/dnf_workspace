# insertState

`_ZN4ARAD23Arad_ServerStateManager11insertStateEPN4arad14SigServerStateE`

`ARAD::Arad_ServerStateManager::insertState(arad::SigServerState*)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_ServerStateManager` | `0x081a92ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a92ca  _ZN4ARAD23Arad_ServerStateManager11insertStateEPN4arad14SigServerStateE
#           ARAD::Arad_ServerStateManager::insertState(arad::SigServerState*)
# range [0x081a92ca, 0x081a936d]
081a92ca +0x00:  push   %ebp
081a92cb +0x01:  mov    %esp,%ebp
081a92cd +0x03:  push   %esi
081a92ce +0x04:  push   %ebx
081a92cf +0x05:  sub    $0x20,%esp
081a92d2 +0x08:  mov    0x8(%ebp),%eax
081a92d5 +0x0b:  add    $0x4,%eax
081a92d8 +0x0e:  mov    %eax,0x4(%esp)
081a92dc +0x12:  lea    -0x10(%ebp),%eax
081a92df +0x15:  mov    %eax,(%esp)
081a92e2 +0x18:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
081a92e7 +0x1d:  movl   $0x0,-0xc(%ebp)
081a92ee +0x24:  jmp    081a932e <+0x64>
081a92f0 +0x26:  mov    -0xc(%ebp),%edx
081a92f3 +0x29:  mov    %edx,%eax
081a92f5 +0x2b:  shl    $0x2,%eax
081a92f8 +0x2e:  add    %edx,%eax
081a92fa +0x30:  shl    $0x2,%eax
081a92fd +0x33:  add    0xc(%ebp),%eax
081a9300 +0x36:  lea    0xd(%eax),%ebx
081a9303 +0x39:  mov    -0xc(%ebp),%edx
081a9306 +0x3c:  mov    0xc(%ebp),%ecx
081a9309 +0x3f:  mov    %edx,%eax
081a930b +0x41:  shl    $0x2,%eax
081a930e +0x44:  add    %edx,%eax
081a9310 +0x46:  shl    $0x2,%eax
081a9313 +0x49:  mov    0x9(%eax,%ecx,1),%eax
081a9317 +0x4d:  mov    %ebx,0x8(%esp)
081a931b +0x51:  mov    %eax,0x4(%esp)
081a931f +0x55:  mov    0x8(%ebp),%eax
081a9322 +0x58:  mov    %eax,(%esp)
081a9325 +0x5b:  call   081a991a <_ZN4ARAD23Arad_ServerStateManager17insertStateNoSyncE23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessage>  ; ARAD::Arad_ServerStateManager::insertStateNoSync(ENUM_GLOBAL_EFFECT_ARAD, AradServerStateMessage const&)
081a932a +0x60:  addl   $0x1,-0xc(%ebp)
081a932e +0x64:  mov    0xc(%ebp),%eax
081a9331 +0x67:  mov    0x1(%eax),%eax
081a9334 +0x6a:  cmp    -0xc(%ebp),%eax
081a9337 +0x6d:  setg   %al
081a933a +0x70:  test   %al,%al
081a933c +0x72:  jne    081a92f0 <+0x26>
081a933e +0x74:  jmp    081a935b <+0x91>
081a9340 +0x76:  mov    %edx,%ebx
081a9342 +0x78:  mov    %eax,%esi
081a9344 +0x7a:  lea    -0x10(%ebp),%eax
081a9347 +0x7d:  mov    %eax,(%esp)
081a934a +0x80:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
081a934f +0x85:  mov    %esi,%eax
081a9351 +0x87:  mov    %ebx,%edx
081a9353 +0x89:  mov    %eax,(%esp)
081a9356 +0x8c:  call   08ae3750 <_Unwind_Resume>
081a935b +0x91:  lea    -0x10(%ebp),%eax
081a935e +0x94:  mov    %eax,(%esp)
081a9361 +0x97:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
081a9366 +0x9c:  add    $0x20,%esp
081a9369 +0x9f:  pop    %ebx
081a936a +0xa0:  pop    %esi
081a936b +0xa1:  pop    %ebp
081a936c +0xa2:  ret
081a936d +0xa3:  nop
```

## 反编译 C

```c
// ARAD::Arad_ServerStateManager::insertState @ 0x81a92ca

/* ARAD::Arad_ServerStateManager::insertState(arad::SigServerState*) */

void __thiscall
ARAD::Arad_ServerStateManager::insertState(Arad_ServerStateManager *this,SigServerState *param_1)

{
  Guard<Mutex> local_14 [4];
  int local_10;
  
  Guard<Mutex>::Guard(local_14,(Mutex *)(this + 4));
  for (local_10 = 0; local_10 < *(int *)(param_1 + 1); local_10 = local_10 + 1) {
                    /* try { // try from 081a9325 to 081a9329 has its CatchHandler @ 081a9340 */
    insertStateNoSync(this,*(undefined4 *)(param_1 + local_10 * 0x14 + 9),
                      param_1 + local_10 * 0x14 + 0xd);
  }
  Guard<Mutex>::~Guard(local_14);
  return;
}
```
