# reset

`_ZN24StatisticsToObserveCrash5resetEv`

`StatisticsToObserveCrash::reset()`

| 类 | 地址 |
|---|---|
| `StatisticsToObserveCrash` | `0x0860ba6e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860ba6e  _ZN24StatisticsToObserveCrash5resetEv
#           StatisticsToObserveCrash::reset()
# range [0x0860ba6e, 0x0860baed]
0860ba6e +0x00:  push   %ebp
0860ba6f +0x01:  mov    %esp,%ebp
0860ba71 +0x03:  push   %esi
0860ba72 +0x04:  push   %ebx
0860ba73 +0x05:  sub    $0x20,%esp
0860ba76 +0x08:  mov    0x8(%ebp),%eax
0860ba79 +0x0b:  add    $0x4,%eax
0860ba7c +0x0e:  mov    %eax,0x4(%esp)
0860ba80 +0x12:  lea    -0xc(%ebp),%eax
0860ba83 +0x15:  mov    %eax,(%esp)
0860ba86 +0x18:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
0860ba8b +0x1d:  mov    0x8(%ebp),%eax
0860ba8e +0x20:  movl   $0x0,(%eax)
0860ba94 +0x26:  mov    0x8(%ebp),%eax
0860ba97 +0x29:  add    $0x1c,%eax
0860ba9a +0x2c:  mov    %eax,(%esp)
0860ba9d +0x2f:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
0860baa2 +0x34:  mov    0x8(%ebp),%eax
0860baa5 +0x37:  add    $0x34,%eax
0860baa8 +0x3a:  mov    %eax,(%esp)
0860baab +0x3d:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
0860bab0 +0x42:  mov    0x8(%ebp),%eax
0860bab3 +0x45:  add    $0x4c,%eax
0860bab6 +0x48:  mov    %eax,(%esp)
0860bab9 +0x4b:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
0860babe +0x50:  jmp    0860badb <+0x6d>
0860bac0 +0x52:  mov    %edx,%ebx
0860bac2 +0x54:  mov    %eax,%esi
0860bac4 +0x56:  lea    -0xc(%ebp),%eax
0860bac7 +0x59:  mov    %eax,(%esp)
0860baca +0x5c:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0860bacf +0x61:  mov    %esi,%eax
0860bad1 +0x63:  mov    %ebx,%edx
0860bad3 +0x65:  mov    %eax,(%esp)
0860bad6 +0x68:  call   08ae3750 <_Unwind_Resume>
0860badb +0x6d:  lea    -0xc(%ebp),%eax
0860bade +0x70:  mov    %eax,(%esp)
0860bae1 +0x73:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0860bae6 +0x78:  add    $0x20,%esp
0860bae9 +0x7b:  pop    %ebx
0860baea +0x7c:  pop    %esi
0860baeb +0x7d:  pop    %ebp
0860baec +0x7e:  ret
0860baed +0x7f:  nop
```

## 反编译 C

```c
// StatisticsToObserveCrash::reset @ 0x860ba6e

/* StatisticsToObserveCrash::reset() */

void __thiscall StatisticsToObserveCrash::reset(StatisticsToObserveCrash *this)

{
  Guard<Mutex> local_10 [4];
  
  Guard<Mutex>::Guard(local_10,(Mutex *)(this + 4));
  *(undefined4 *)this = 0;
                    /* try { // try from 0860ba9d to 0860babd has its CatchHandler @ 0860bac0 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x1c));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x34));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x4c));
  Guard<Mutex>::~Guard(local_10);
  return;
}
```
