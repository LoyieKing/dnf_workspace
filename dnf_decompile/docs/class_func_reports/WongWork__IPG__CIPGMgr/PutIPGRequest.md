# PutIPGRequest

`_ZN8WongWork3IPG7CIPGMgr13PutIPGRequestEPNS0_8SIPGDataEb`

`WongWork::IPG::CIPGMgr::PutIPGRequest(WongWork::IPG::SIPGData*, bool)`

| 类 | 地址 |
|---|---|
| `WongWork::IPG::CIPGMgr` | `0x08104754` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08104754  _ZN8WongWork3IPG7CIPGMgr13PutIPGRequestEPNS0_8SIPGDataEb
#           WongWork::IPG::CIPGMgr::PutIPGRequest(WongWork::IPG::SIPGData*, bool)
# range [0x08104754, 0x081047e9]
08104754 +0x00:  push   %ebp
08104755 +0x01:  mov    %esp,%ebp
08104757 +0x03:  push   %esi
08104758 +0x04:  push   %ebx
08104759 +0x05:  sub    $0x30,%esp
0810475c +0x08:  mov    0x10(%ebp),%eax
0810475f +0x0b:  mov    %al,-0x1c(%ebp)
08104762 +0x0e:  cmpb   $0x0,-0x1c(%ebp)
08104766 +0x12:  je     081047ce <+0x7a>
08104768 +0x14:  mov    0x8(%ebp),%eax
0810476b +0x17:  mov    0x4(%eax),%eax
0810476e +0x1a:  test   %eax,%eax
08104770 +0x1c:  je     081047ce <+0x7a>
08104772 +0x1e:  mov    0x8(%ebp),%eax
08104775 +0x21:  add    $0xd4,%eax
0810477a +0x26:  mov    %eax,0x4(%esp)
0810477e +0x2a:  lea    -0xc(%ebp),%eax
08104781 +0x2d:  mov    %eax,(%esp)
08104784 +0x30:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
08104789 +0x35:  mov    0x8(%ebp),%eax
0810478c +0x38:  lea    0xc(%eax),%edx
0810478f +0x3b:  lea    0xc(%ebp),%eax
08104792 +0x3e:  mov    %eax,0x4(%esp)
08104796 +0x42:  mov    %edx,(%esp)
08104799 +0x45:  call   081057f6 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0x475>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0x475
0810479e +0x4a:  jmp    081047bb <+0x67>
081047a0 +0x4c:  mov    %edx,%ebx
081047a2 +0x4e:  mov    %eax,%esi
081047a4 +0x50:  lea    -0xc(%ebp),%eax
081047a7 +0x53:  mov    %eax,(%esp)
081047aa +0x56:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
081047af +0x5b:  mov    %esi,%eax
081047b1 +0x5d:  mov    %ebx,%edx
081047b3 +0x5f:  mov    %eax,(%esp)
081047b6 +0x62:  call   08ae3750 <_Unwind_Resume>
081047bb +0x67:  lea    -0xc(%ebp),%eax
081047be +0x6a:  mov    %eax,(%esp)
081047c1 +0x6d:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
081047c6 +0x72:  nop
081047c7 +0x73:  mov    $0x0,%eax
081047cc +0x78:  jmp    081047e2 <+0x8e>
081047ce +0x7a:  mov    0xc(%ebp),%edx
081047d1 +0x7d:  mov    0x8(%ebp),%eax
081047d4 +0x80:  mov    (%eax),%eax
081047d6 +0x82:  mov    %edx,0x4(%esp)
081047da +0x86:  mov    %eax,(%esp)
081047dd +0x89:  call   08105258 <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker11ProcIPGSyncEPNS0_8SIPGDataE>  ; WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSync(WongWork::IPG::SIPGData*)
081047e2 +0x8e:  add    $0x30,%esp
081047e5 +0x91:  pop    %ebx
081047e6 +0x92:  pop    %esi
081047e7 +0x93:  pop    %ebp
081047e8 +0x94:  ret
081047e9 +0x95:  nop
```

## 反编译 C

```c
// WongWork::IPG::CIPGMgr::PutIPGRequest @ 0x8104754

/* WongWork::IPG::CIPGMgr::PutIPGRequest(WongWork::IPG::SIPGData*, bool) */

undefined4 __thiscall
WongWork::IPG::CIPGMgr::PutIPGRequest(CIPGMgr *this,SIPGData *param_1,bool param_2)

{
  undefined4 uVar1;
  undefined3 in_stack_0000000d;
  Guard<Mutex> local_10 [4];
  
  if ((param_2) && (*(int *)(this + 4) != 0)) {
    Guard<Mutex>::Guard(local_10,(Mutex *)(this + 0xd4));
                    /* try { // try from 08104799 to 0810479d has its CatchHandler @ 081047a0 */
    std::
    queue<WongWork::IPG::SIPGData*,std::deque<WongWork::IPG::SIPGData*,std::allocator<WongWork::IPG::SIPGData*>>>
    ::push((queue<WongWork::IPG::SIPGData*,std::deque<WongWork::IPG::SIPGData*,std::allocator<WongWork::IPG::SIPGData*>>>
            *)(this + 0xc),&param_1);
    Guard<Mutex>::~Guard(local_10);
    uVar1 = 0;
  }
  else {
    uVar1 = CIPGWorker::ProcIPGSync(*(CIPGWorker **)this,param_1);
  }
  return uVar1;
}
```
