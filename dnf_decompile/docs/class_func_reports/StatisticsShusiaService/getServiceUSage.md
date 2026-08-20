# getServiceUSage

`_ZN23StatisticsShusiaService15getServiceUSageEi`

`StatisticsShusiaService::getServiceUSage(int)`

| 类 | 地址 |
|---|---|
| `StatisticsShusiaService` | `0x0860c446` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860c446  _ZN23StatisticsShusiaService15getServiceUSageEi
#           StatisticsShusiaService::getServiceUSage(int)
# range [0x0860c446, 0x0860c4f5]
0860c446 +0x00:  push   %ebp
0860c447 +0x01:  mov    %esp,%ebp
0860c449 +0x03:  push   %esi
0860c44a +0x04:  push   %ebx
0860c44b +0x05:  sub    $0x20,%esp
0860c44e +0x08:  mov    0x8(%ebp),%eax
0860c451 +0x0b:  mov    %eax,0x4(%esp)
0860c455 +0x0f:  lea    -0x10(%ebp),%eax
0860c458 +0x12:  mov    %eax,(%esp)
0860c45b +0x15:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
0860c460 +0x1a:  mov    0x8(%ebp),%eax
0860c463 +0x1d:  lea    0x30(%eax),%ecx
0860c466 +0x20:  lea    -0x14(%ebp),%eax
0860c469 +0x23:  lea    0xc(%ebp),%edx
0860c46c +0x26:  mov    %edx,0x8(%esp)
0860c470 +0x2a:  mov    %ecx,0x4(%esp)
0860c474 +0x2e:  mov    %eax,(%esp)
0860c477 +0x31:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
0860c47c +0x36:  sub    $0x4,%esp
0860c47f +0x39:  mov    0x8(%ebp),%eax
0860c482 +0x3c:  lea    0x30(%eax),%edx
0860c485 +0x3f:  lea    -0xc(%ebp),%eax
0860c488 +0x42:  mov    %edx,0x4(%esp)
0860c48c +0x46:  mov    %eax,(%esp)
0860c48f +0x49:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0860c494 +0x4e:  sub    $0x4,%esp
0860c497 +0x51:  lea    -0xc(%ebp),%eax
0860c49a +0x54:  mov    %eax,0x4(%esp)
0860c49e +0x58:  lea    -0x14(%ebp),%eax
0860c4a1 +0x5b:  mov    %eax,(%esp)
0860c4a4 +0x5e:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
0860c4a9 +0x63:  test   %al,%al
0860c4ab +0x65:  je     0860c4bd <+0x77>
0860c4ad +0x67:  lea    -0x14(%ebp),%eax
0860c4b0 +0x6a:  mov    %eax,(%esp)
0860c4b3 +0x6d:  call   0819397a <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x5e2>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x5e2
0860c4b8 +0x72:  mov    0x4(%eax),%ebx
0860c4bb +0x75:  jmp    0860c4df <+0x99>
0860c4bd +0x77:  mov    $0x0,%ebx
0860c4c2 +0x7c:  jmp    0860c4df <+0x99>
0860c4c4 +0x7e:  mov    %edx,%ebx
0860c4c6 +0x80:  mov    %eax,%esi
0860c4c8 +0x82:  lea    -0x10(%ebp),%eax
0860c4cb +0x85:  mov    %eax,(%esp)
0860c4ce +0x88:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0860c4d3 +0x8d:  mov    %esi,%eax
0860c4d5 +0x8f:  mov    %ebx,%edx
0860c4d7 +0x91:  mov    %eax,(%esp)
0860c4da +0x94:  call   08ae3750 <_Unwind_Resume>
0860c4df +0x99:  lea    -0x10(%ebp),%eax
0860c4e2 +0x9c:  mov    %eax,(%esp)
0860c4e5 +0x9f:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0860c4ea +0xa4:  mov    %ebx,%eax
0860c4ec +0xa6:  lea    -0x8(%ebp),%esp
0860c4ef +0xa9:  add    $0x0,%esp
0860c4f2 +0xac:  pop    %ebx
0860c4f3 +0xad:  pop    %esi
0860c4f4 +0xae:  pop    %ebp
0860c4f5 +0xaf:  ret
```

## 反编译 C

```c
// StatisticsShusiaService::getServiceUSage @ 0x860c446

/* StatisticsShusiaService::getServiceUSage(int) */

undefined4 StatisticsShusiaService::getServiceUSage(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_18 [4];
  Guard<Mutex> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [4];
  
  Guard<Mutex>::Guard(local_14,(Mutex *)param_1);
                    /* try { // try from 0860c477 to 0860c493 has its CatchHandler @ 0860c4c4 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_18);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_18,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator*(local_18);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  Guard<Mutex>::~Guard(local_14);
  return uVar3;
}
```
