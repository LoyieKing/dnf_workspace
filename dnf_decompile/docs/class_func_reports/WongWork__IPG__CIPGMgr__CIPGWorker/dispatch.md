# dispatch

`_ZN8WongWork3IPG7CIPGMgr10CIPGWorker8dispatchEPv`

`WongWork::IPG::CIPGMgr::CIPGWorker::dispatch(void*)`

| 类 | 地址 |
|---|---|
| `WongWork::IPG::CIPGMgr::CIPGWorker` | `0x08105276` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08105276  _ZN8WongWork3IPG7CIPGMgr10CIPGWorker8dispatchEPv
#           WongWork::IPG::CIPGMgr::CIPGWorker::dispatch(void*)
# range [0x08105276, 0x08105340]
08105276 +0x00:  push   %ebp
08105277 +0x01:  mov    %esp,%ebp
08105279 +0x03:  sub    $0x28,%esp
0810527c +0x06:  movl   $0x0,-0x10(%ebp)
08105283 +0x0d:  movl   $0x0,-0xc(%ebp)
0810528a +0x14:  jmp    0810532d <+0xb7>
0810528f +0x19:  mov    0x8(%ebp),%eax
08105292 +0x1c:  mov    0xc(%eax),%eax
08105295 +0x1f:  mov    %eax,(%esp)
08105298 +0x22:  call   081047ea <_ZN8WongWork3IPG7CIPGMgr14_GetIPGRequestEv>  ; WongWork::IPG::CIPGMgr::_GetIPGRequest()
0810529d +0x27:  mov    %eax,-0x10(%ebp)
081052a0 +0x2a:  cmpl   $0x0,-0x10(%ebp)
081052a4 +0x2e:  sete   %al
081052a7 +0x31:  test   %al,%al
081052a9 +0x33:  je     081052b9 <+0x43>
081052ab +0x35:  movl   $0xa,(%esp)
081052b2 +0x3c:  call   0858c4e0 <_ZN6OS_API5SleepEi>  ; OS_API::Sleep(int)
081052b7 +0x41:  jmp    0810532d <+0xb7>
081052b9 +0x43:  mov    -0x10(%ebp),%eax
081052bc +0x46:  mov    %eax,0x4(%esp)
081052c0 +0x4a:  mov    0x8(%ebp),%eax
081052c3 +0x4d:  mov    %eax,(%esp)
081052c6 +0x50:  call   08105258 <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker11ProcIPGSyncEPNS0_8SIPGDataE>  ; WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSync(WongWork::IPG::SIPGData*)
081052cb +0x55:  mov    %eax,-0xc(%ebp)
081052ce +0x58:  mov    0x8(%ebp),%eax
081052d1 +0x5b:  mov    0xc(%eax),%eax
081052d4 +0x5e:  mov    %eax,(%esp)
081052d7 +0x61:  call   081053c6 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0x45>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0x45
081052dc +0x66:  mov    (%eax),%edx
081052de +0x68:  add    $0x34,%edx
081052e1 +0x6b:  mov    (%edx),%ecx
081052e3 +0x6d:  mov    -0xc(%ebp),%edx
081052e6 +0x70:  mov    %edx,0x8(%esp)
081052ea +0x74:  mov    -0x10(%ebp),%edx
081052ed +0x77:  mov    %edx,0x4(%esp)
081052f1 +0x7b:  mov    %eax,(%esp)
081052f4 +0x7e:  call   *%ecx
081052f6 +0x80:  cmpl   $0x0,-0xc(%ebp)
081052fa +0x84:  je     08105318 <+0xa2>
081052fc +0x86:  mov    0x8(%ebp),%eax
081052ff +0x89:  mov    0xc(%eax),%eax
08105302 +0x8c:  mov    -0xc(%ebp),%edx
08105305 +0x8f:  mov    %edx,0x4(%esp)
08105309 +0x93:  mov    %eax,(%esp)
0810530c +0x96:  call   081046f0 <_ZN8WongWork3IPG7CIPGMgr11FreeIPGDataEPNS0_8SIPGDataE>  ; WongWork::IPG::CIPGMgr::FreeIPGData(WongWork::IPG::SIPGData*)
08105311 +0x9b:  movl   $0x0,-0xc(%ebp)
08105318 +0xa2:  mov    0x8(%ebp),%eax
0810531b +0xa5:  mov    0xc(%eax),%eax
0810531e +0xa8:  mov    -0x10(%ebp),%edx
08105321 +0xab:  mov    %edx,0x4(%esp)
08105325 +0xaf:  mov    %eax,(%esp)
08105328 +0xb2:  call   081046f0 <_ZN8WongWork3IPG7CIPGMgr11FreeIPGDataEPNS0_8SIPGDataE>  ; WongWork::IPG::CIPGMgr::FreeIPGData(WongWork::IPG::SIPGData*)
0810532d +0xb7:  movzbl &_ZN10GlobalData13s_server_stopE,%eax
08105334 +0xbe:  xor    $0x1,%eax
08105337 +0xc1:  test   %al,%al
08105339 +0xc3:  jne    0810528f <+0x19>
0810533f +0xc9:  leave
08105340 +0xca:  ret
```

## 反编译 C

```c
// WongWork::IPG::CIPGMgr::CIPGWorker::dispatch @ 0x8105276

/* WongWork::IPG::CIPGMgr::CIPGWorker::dispatch(void*) */

void WongWork::IPG::CIPGMgr::CIPGWorker::dispatch(void *param_1)

{
  SIPGData *pSVar1;
  SIPGData *pSVar2;
  int *piVar3;
  
  while (GlobalData::s_server_stop != '\x01') {
    pSVar1 = (SIPGData *)_GetIPGRequest(*(CIPGMgr **)((int)param_1 + 0xc));
    if (pSVar1 == (SIPGData *)0x0) {
      OS_API::Sleep(10);
    }
    else {
      pSVar2 = (SIPGData *)ProcIPGSync(param_1,pSVar1);
      piVar3 = (int *)GetIPGHelper(*(CIPGMgr **)((int)param_1 + 0xc));
      (**(code **)(*piVar3 + 0x34))(piVar3,pSVar1,pSVar2);
      if (pSVar2 != (SIPGData *)0x0) {
        FreeIPGData(*(CIPGMgr **)((int)param_1 + 0xc),pSVar2);
      }
      FreeIPGData(*(CIPGMgr **)((int)param_1 + 0xc),pSVar1);
    }
  }
  return;
}
```
