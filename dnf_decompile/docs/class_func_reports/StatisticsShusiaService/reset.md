# reset

`_ZN23StatisticsShusiaService5resetEv`

`StatisticsShusiaService::reset()`

| 类 | 地址 |
|---|---|
| `StatisticsShusiaService` | `0x0860c154` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860c154  _ZN23StatisticsShusiaService5resetEv
#           StatisticsShusiaService::reset()
# range [0x0860c154, 0x0860c1b9]
0860c154 +0x00:  push   %ebp
0860c155 +0x01:  mov    %esp,%ebp
0860c157 +0x03:  push   %esi
0860c158 +0x04:  push   %ebx
0860c159 +0x05:  sub    $0x20,%esp
0860c15c +0x08:  mov    0x8(%ebp),%eax
0860c15f +0x0b:  mov    %eax,0x4(%esp)
0860c163 +0x0f:  lea    -0xc(%ebp),%eax
0860c166 +0x12:  mov    %eax,(%esp)
0860c169 +0x15:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
0860c16e +0x1a:  mov    0x8(%ebp),%eax
0860c171 +0x1d:  add    $0x18,%eax
0860c174 +0x20:  mov    %eax,(%esp)
0860c177 +0x23:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
0860c17c +0x28:  mov    0x8(%ebp),%eax
0860c17f +0x2b:  add    $0x30,%eax
0860c182 +0x2e:  mov    %eax,(%esp)
0860c185 +0x31:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
0860c18a +0x36:  jmp    0860c1a7 <+0x53>
0860c18c +0x38:  mov    %edx,%ebx
0860c18e +0x3a:  mov    %eax,%esi
0860c190 +0x3c:  lea    -0xc(%ebp),%eax
0860c193 +0x3f:  mov    %eax,(%esp)
0860c196 +0x42:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0860c19b +0x47:  mov    %esi,%eax
0860c19d +0x49:  mov    %ebx,%edx
0860c19f +0x4b:  mov    %eax,(%esp)
0860c1a2 +0x4e:  call   08ae3750 <_Unwind_Resume>
0860c1a7 +0x53:  lea    -0xc(%ebp),%eax
0860c1aa +0x56:  mov    %eax,(%esp)
0860c1ad +0x59:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0860c1b2 +0x5e:  add    $0x20,%esp
0860c1b5 +0x61:  pop    %ebx
0860c1b6 +0x62:  pop    %esi
0860c1b7 +0x63:  pop    %ebp
0860c1b8 +0x64:  ret
0860c1b9 +0x65:  nop
```

## 反编译 C

```c
// StatisticsShusiaService::reset @ 0x860c154

/* StatisticsShusiaService::reset() */

void __thiscall StatisticsShusiaService::reset(StatisticsShusiaService *this)

{
  Guard<Mutex> local_10 [4];
  
  Guard<Mutex>::Guard(local_10,(Mutex *)this);
                    /* try { // try from 0860c177 to 0860c189 has its CatchHandler @ 0860c18c */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x18));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x30));
  Guard<Mutex>::~Guard(local_10);
  return;
}
```
