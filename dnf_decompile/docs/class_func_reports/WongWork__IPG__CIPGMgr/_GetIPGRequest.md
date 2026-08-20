# _GetIPGRequest

`_ZN8WongWork3IPG7CIPGMgr14_GetIPGRequestEv`

`WongWork::IPG::CIPGMgr::_GetIPGRequest()`

| 类 | 地址 |
|---|---|
| `WongWork::IPG::CIPGMgr` | `0x081047ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081047ea  _ZN8WongWork3IPG7CIPGMgr14_GetIPGRequestEv
#           WongWork::IPG::CIPGMgr::_GetIPGRequest()
# range [0x081047ea, 0x08104883]
081047ea +0x00:  push   %ebp
081047eb +0x01:  mov    %esp,%ebp
081047ed +0x03:  push   %esi
081047ee +0x04:  push   %ebx
081047ef +0x05:  sub    $0x20,%esp
081047f2 +0x08:  mov    0x8(%ebp),%eax
081047f5 +0x0b:  add    $0xd4,%eax
081047fa +0x10:  mov    %eax,0x4(%esp)
081047fe +0x14:  lea    -0x10(%ebp),%eax
08104801 +0x17:  mov    %eax,(%esp)
08104804 +0x1a:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
08104809 +0x1f:  mov    0x8(%ebp),%eax
0810480c +0x22:  add    $0xc,%eax
0810480f +0x25:  mov    %eax,(%esp)
08104812 +0x28:  call   08105810 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0x48f>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0x48f
08104817 +0x2d:  test   %al,%al
08104819 +0x2f:  je     08104822 <+0x38>
0810481b +0x31:  mov    $0x0,%ebx
08104820 +0x36:  jmp    08104870 <+0x86>
08104822 +0x38:  mov    0x8(%ebp),%eax
08104825 +0x3b:  add    $0xc,%eax
08104828 +0x3e:  mov    %eax,(%esp)
0810482b +0x41:  call   08105824 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0x4a3>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0x4a3
08104830 +0x46:  mov    (%eax),%eax
08104832 +0x48:  mov    %eax,-0xc(%ebp)
08104835 +0x4b:  cmpl   $0x0,-0xc(%ebp)
08104839 +0x4f:  jne    08104842 <+0x58>
0810483b +0x51:  mov    $0x0,%ebx
08104840 +0x56:  jmp    08104870 <+0x86>
08104842 +0x58:  mov    0x8(%ebp),%eax
08104845 +0x5b:  add    $0xc,%eax
08104848 +0x5e:  mov    %eax,(%esp)
0810484b +0x61:  call   08105838 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0x4b7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0x4b7
08104850 +0x66:  mov    -0xc(%ebp),%ebx
08104853 +0x69:  jmp    08104870 <+0x86>
08104855 +0x6b:  mov    %edx,%ebx
08104857 +0x6d:  mov    %eax,%esi
08104859 +0x6f:  lea    -0x10(%ebp),%eax
0810485c +0x72:  mov    %eax,(%esp)
0810485f +0x75:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08104864 +0x7a:  mov    %esi,%eax
08104866 +0x7c:  mov    %ebx,%edx
08104868 +0x7e:  mov    %eax,(%esp)
0810486b +0x81:  call   08ae3750 <_Unwind_Resume>
08104870 +0x86:  lea    -0x10(%ebp),%eax
08104873 +0x89:  mov    %eax,(%esp)
08104876 +0x8c:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0810487b +0x91:  mov    %ebx,%eax
0810487d +0x93:  add    $0x20,%esp
08104880 +0x96:  pop    %ebx
08104881 +0x97:  pop    %esi
08104882 +0x98:  pop    %ebp
08104883 +0x99:  ret
```

## 反编译 C

```c
// WongWork::IPG::CIPGMgr::_GetIPGRequest @ 0x81047ea

/* WongWork::IPG::CIPGMgr::_GetIPGRequest() */

int __thiscall WongWork::IPG::CIPGMgr::_GetIPGRequest(CIPGMgr *this)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  Guard<Mutex> local_14 [4];
  int local_10;
  
  Guard<Mutex>::Guard(local_14,(Mutex *)(this + 0xd4));
                    /* try { // try from 08104812 to 0810484f has its CatchHandler @ 08104855 */
  cVar1 = std::
          queue<WongWork::IPG::SIPGData*,std::deque<WongWork::IPG::SIPGData*,std::allocator<WongWork::IPG::SIPGData*>>>
          ::empty((queue<WongWork::IPG::SIPGData*,std::deque<WongWork::IPG::SIPGData*,std::allocator<WongWork::IPG::SIPGData*>>>
                   *)(this + 0xc));
  if (cVar1 == '\0') {
    piVar2 = (int *)std::
                    queue<WongWork::IPG::SIPGData*,std::deque<WongWork::IPG::SIPGData*,std::allocator<WongWork::IPG::SIPGData*>>>
                    ::front();
    local_10 = *piVar2;
    if (local_10 == 0) {
      iVar3 = 0;
    }
    else {
      std::
      queue<WongWork::IPG::SIPGData*,std::deque<WongWork::IPG::SIPGData*,std::allocator<WongWork::IPG::SIPGData*>>>
      ::pop((queue<WongWork::IPG::SIPGData*,std::deque<WongWork::IPG::SIPGData*,std::allocator<WongWork::IPG::SIPGData*>>>
             *)(this + 0xc));
      iVar3 = local_10;
    }
  }
  else {
    iVar3 = 0;
  }
  Guard<Mutex>::~Guard(local_14);
  return iVar3;
}
```
