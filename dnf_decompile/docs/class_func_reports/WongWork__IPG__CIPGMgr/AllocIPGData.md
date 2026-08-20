# AllocIPGData

`_ZN8WongWork3IPG7CIPGMgr12AllocIPGDataEv`

`WongWork::IPG::CIPGMgr::AllocIPGData()`

| 类 | 地址 |
|---|---|
| `WongWork::IPG::CIPGMgr` | `0x0810466c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810466c  _ZN8WongWork3IPG7CIPGMgr12AllocIPGDataEv
#           WongWork::IPG::CIPGMgr::AllocIPGData()
# range [0x0810466c, 0x081046ef]
0810466c +0x00:  push   %ebp
0810466d +0x01:  mov    %esp,%ebp
0810466f +0x03:  push   %esi
08104670 +0x04:  push   %ebx
08104671 +0x05:  sub    $0x20,%esp
08104674 +0x08:  mov    0x8(%ebp),%eax
08104677 +0x0b:  add    $0xbc,%eax
0810467c +0x10:  mov    %eax,0x4(%esp)
08104680 +0x14:  lea    -0x10(%ebp),%eax
08104683 +0x17:  mov    %eax,(%esp)
08104686 +0x1a:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
0810468b +0x1f:  mov    0x8(%ebp),%eax
0810468e +0x22:  add    $0x5c,%eax
08104691 +0x25:  mov    %eax,(%esp)
08104694 +0x28:  call   0810547e <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xfd>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xfd
08104699 +0x2d:  mov    %eax,-0xc(%ebp)
0810469c +0x30:  cmpl   $0x0,-0xc(%ebp)
081046a0 +0x34:  je     081046bd <+0x51>
081046a2 +0x36:  movl   $0x2dc,0x8(%esp)
081046aa +0x3e:  movl   $0x0,0x4(%esp)
081046b2 +0x46:  mov    -0xc(%ebp),%eax
081046b5 +0x49:  mov    %eax,(%esp)
081046b8 +0x4c:  call   0807dcc0 <_init+0x5b8>
081046bd +0x51:  mov    -0xc(%ebp),%ebx
081046c0 +0x54:  lea    -0x10(%ebp),%eax
081046c3 +0x57:  mov    %eax,(%esp)
081046c6 +0x5a:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
081046cb +0x5f:  mov    %ebx,%eax
081046cd +0x61:  add    $0x20,%esp
081046d0 +0x64:  pop    %ebx
081046d1 +0x65:  pop    %esi
081046d2 +0x66:  pop    %ebp
081046d3 +0x67:  ret
081046d4 +0x68:  mov    %edx,%ebx
081046d6 +0x6a:  mov    %eax,%esi
081046d8 +0x6c:  lea    -0x10(%ebp),%eax
081046db +0x6f:  mov    %eax,(%esp)
081046de +0x72:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
081046e3 +0x77:  mov    %esi,%eax
081046e5 +0x79:  mov    %ebx,%edx
081046e7 +0x7b:  mov    %eax,(%esp)
081046ea +0x7e:  call   08ae3750 <_Unwind_Resume>
081046ef +0x83:  nop
```

## 反编译 C

```c
// WongWork::IPG::CIPGMgr::AllocIPGData @ 0x810466c

/* WongWork::IPG::CIPGMgr::AllocIPGData() */

void * __thiscall WongWork::IPG::CIPGMgr::AllocIPGData(CIPGMgr *this)

{
  void *pvVar1;
  Guard<Mutex> local_14 [4];
  void *local_10;
  
  Guard<Mutex>::Guard(local_14,(Mutex *)(this + 0xbc));
                    /* try { // try from 08104694 to 08104698 has its CatchHandler @ 081046d4 */
  local_10 = (void *)DynamicPool<WongWork::IPG::SIPGData>::Acquire
                               ((DynamicPool<WongWork::IPG::SIPGData> *)(this + 0x5c));
  if (local_10 != (void *)0x0) {
    memset(local_10,0,0x2dc);
  }
  pvVar1 = local_10;
  Guard<Mutex>::~Guard(local_14);
  return pvVar1;
}
```
