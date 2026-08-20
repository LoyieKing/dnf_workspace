# FreeIPGData

`_ZN8WongWork3IPG7CIPGMgr11FreeIPGDataEPNS0_8SIPGDataE`

`WongWork::IPG::CIPGMgr::FreeIPGData(WongWork::IPG::SIPGData*)`

| 类 | 地址 |
|---|---|
| `WongWork::IPG::CIPGMgr` | `0x081046f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081046f0  _ZN8WongWork3IPG7CIPGMgr11FreeIPGDataEPNS0_8SIPGDataE
#           WongWork::IPG::CIPGMgr::FreeIPGData(WongWork::IPG::SIPGData*)
# range [0x081046f0, 0x08104753]
081046f0 +0x00:  push   %ebp
081046f1 +0x01:  mov    %esp,%ebp
081046f3 +0x03:  push   %esi
081046f4 +0x04:  push   %ebx
081046f5 +0x05:  sub    $0x20,%esp
081046f8 +0x08:  mov    0x8(%ebp),%eax
081046fb +0x0b:  add    $0xbc,%eax
08104700 +0x10:  mov    %eax,0x4(%esp)
08104704 +0x14:  lea    -0xc(%ebp),%eax
08104707 +0x17:  mov    %eax,(%esp)
0810470a +0x1a:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
0810470f +0x1f:  mov    0x8(%ebp),%eax
08104712 +0x22:  lea    0x5c(%eax),%edx
08104715 +0x25:  mov    0xc(%ebp),%eax
08104718 +0x28:  mov    %eax,0x4(%esp)
0810471c +0x2c:  mov    %edx,(%esp)
0810471f +0x2f:  call   081056d4 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0x353>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0x353
08104724 +0x34:  jmp    08104741 <+0x51>
08104726 +0x36:  mov    %edx,%ebx
08104728 +0x38:  mov    %eax,%esi
0810472a +0x3a:  lea    -0xc(%ebp),%eax
0810472d +0x3d:  mov    %eax,(%esp)
08104730 +0x40:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08104735 +0x45:  mov    %esi,%eax
08104737 +0x47:  mov    %ebx,%edx
08104739 +0x49:  mov    %eax,(%esp)
0810473c +0x4c:  call   08ae3750 <_Unwind_Resume>
08104741 +0x51:  lea    -0xc(%ebp),%eax
08104744 +0x54:  mov    %eax,(%esp)
08104747 +0x57:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0810474c +0x5c:  add    $0x20,%esp
0810474f +0x5f:  pop    %ebx
08104750 +0x60:  pop    %esi
08104751 +0x61:  pop    %ebp
08104752 +0x62:  ret
08104753 +0x63:  nop
```

## 反编译 C

```c
// WongWork::IPG::CIPGMgr::FreeIPGData @ 0x81046f0

/* WongWork::IPG::CIPGMgr::FreeIPGData(WongWork::IPG::SIPGData*) */

void __thiscall WongWork::IPG::CIPGMgr::FreeIPGData(CIPGMgr *this,SIPGData *param_1)

{
  Guard<Mutex> local_10 [4];
  
  Guard<Mutex>::Guard(local_10,(Mutex *)(this + 0xbc));
                    /* try { // try from 0810471f to 08104723 has its CatchHandler @ 08104726 */
  DynamicPool<WongWork::IPG::SIPGData>::Free
            ((DynamicPool<WongWork::IPG::SIPGData> *)(this + 0x5c),param_1);
  Guard<Mutex>::~Guard(local_10);
  return;
}
```
