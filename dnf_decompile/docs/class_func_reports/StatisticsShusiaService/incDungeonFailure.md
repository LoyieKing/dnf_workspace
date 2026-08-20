# incDungeonFailure

`_ZN23StatisticsShusiaService17incDungeonFailureEi`

`StatisticsShusiaService::incDungeonFailure(int)`

| 类 | 地址 |
|---|---|
| `StatisticsShusiaService` | `0x0860c1ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860c1ba  _ZN23StatisticsShusiaService17incDungeonFailureEi
#           StatisticsShusiaService::incDungeonFailure(int)
# range [0x0860c1ba, 0x0860c2a7]
0860c1ba +0x00:  push   %ebp
0860c1bb +0x01:  mov    %esp,%ebp
0860c1bd +0x03:  push   %esi
0860c1be +0x04:  push   %ebx
0860c1bf +0x05:  sub    $0x30,%esp
0860c1c2 +0x08:  mov    0x8(%ebp),%eax
0860c1c5 +0x0b:  mov    %eax,0x4(%esp)
0860c1c9 +0x0f:  lea    -0x24(%ebp),%eax
0860c1cc +0x12:  mov    %eax,(%esp)
0860c1cf +0x15:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
0860c1d4 +0x1a:  mov    0x8(%ebp),%eax
0860c1d7 +0x1d:  lea    0x18(%eax),%ecx
0860c1da +0x20:  lea    -0x28(%ebp),%eax
0860c1dd +0x23:  lea    0xc(%ebp),%edx
0860c1e0 +0x26:  mov    %edx,0x8(%esp)
0860c1e4 +0x2a:  mov    %ecx,0x4(%esp)
0860c1e8 +0x2e:  mov    %eax,(%esp)
0860c1eb +0x31:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
0860c1f0 +0x36:  sub    $0x4,%esp
0860c1f3 +0x39:  mov    0x8(%ebp),%eax
0860c1f6 +0x3c:  lea    0x18(%eax),%edx
0860c1f9 +0x3f:  lea    -0x20(%ebp),%eax
0860c1fc +0x42:  mov    %edx,0x4(%esp)
0860c200 +0x46:  mov    %eax,(%esp)
0860c203 +0x49:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0860c208 +0x4e:  sub    $0x4,%esp
0860c20b +0x51:  lea    -0x20(%ebp),%eax
0860c20e +0x54:  mov    %eax,0x4(%esp)
0860c212 +0x58:  lea    -0x28(%ebp),%eax
0860c215 +0x5b:  mov    %eax,(%esp)
0860c218 +0x5e:  call   080c78f0 <_GLOBAL__I_g_ServerString_+0xe5b>  ; global constructors keyed to g_ServerString_+0xe5b
0860c21d +0x63:  test   %al,%al
0860c21f +0x65:  je     0860c262 <+0xa8>
0860c221 +0x67:  movl   $0x1,-0xc(%ebp)
0860c228 +0x6e:  lea    -0xc(%ebp),%eax
0860c22b +0x71:  mov    %eax,0x8(%esp)
0860c22f +0x75:  lea    0xc(%ebp),%eax
0860c232 +0x78:  mov    %eax,0x4(%esp)
0860c236 +0x7c:  lea    -0x14(%ebp),%eax
0860c239 +0x7f:  mov    %eax,(%esp)
0860c23c +0x82:  call   08610c38 <_GLOBAL__I__ZN10StatisticsC2Ev+0xcb6>  ; global constructors keyed to Statistics::Statistics()+0xcb6
0860c241 +0x87:  mov    0x8(%ebp),%eax
0860c244 +0x8a:  lea    0x18(%eax),%ecx
0860c247 +0x8d:  lea    -0x1c(%ebp),%eax
0860c24a +0x90:  lea    -0x14(%ebp),%edx
0860c24d +0x93:  mov    %edx,0x8(%esp)
0860c251 +0x97:  mov    %ecx,0x4(%esp)
0860c255 +0x9b:  mov    %eax,(%esp)
0860c258 +0x9e:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
0860c25d +0xa3:  sub    $0x4,%esp
0860c260 +0xa6:  jmp    0860c293 <+0xd9>
0860c262 +0xa8:  lea    -0x28(%ebp),%eax
0860c265 +0xab:  mov    %eax,(%esp)
0860c268 +0xae:  call   0819397a <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x5e2>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x5e2
0860c26d +0xb3:  mov    0x4(%eax),%edx
0860c270 +0xb6:  add    $0x1,%edx
0860c273 +0xb9:  mov    %edx,0x4(%eax)
0860c276 +0xbc:  jmp    0860c293 <+0xd9>
0860c278 +0xbe:  mov    %edx,%ebx
0860c27a +0xc0:  mov    %eax,%esi
0860c27c +0xc2:  lea    -0x24(%ebp),%eax
0860c27f +0xc5:  mov    %eax,(%esp)
0860c282 +0xc8:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0860c287 +0xcd:  mov    %esi,%eax
0860c289 +0xcf:  mov    %ebx,%edx
0860c28b +0xd1:  mov    %eax,(%esp)
0860c28e +0xd4:  call   08ae3750 <_Unwind_Resume>
0860c293 +0xd9:  lea    -0x24(%ebp),%eax
0860c296 +0xdc:  mov    %eax,(%esp)
0860c299 +0xdf:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0860c29e +0xe4:  lea    -0x8(%ebp),%esp
0860c2a1 +0xe7:  add    $0x0,%esp
0860c2a4 +0xea:  pop    %ebx
0860c2a5 +0xeb:  pop    %esi
0860c2a6 +0xec:  pop    %ebp
0860c2a7 +0xed:  ret
```

## 反编译 C

```c
// StatisticsShusiaService::incDungeonFailure @ 0x860c1ba

/* StatisticsShusiaService::incDungeonFailure(int) */

void StatisticsShusiaService::incDungeonFailure(int param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,int>> local_2c [4];
  Guard<Mutex> local_28 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_24 [4];
  pair local_20 [8];
  pair<int_const,int> local_18 [8];
  int local_10;
  
  Guard<Mutex>::Guard(local_28,(Mutex *)param_1);
                    /* try { // try from 0860c1eb to 0860c25c has its CatchHandler @ 0860c278 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_2c);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_24);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                    (local_2c,(_Rb_tree_iterator *)local_24);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator*(local_2c);
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  }
  else {
    local_10 = 1;
    std::pair<int_const,int>::pair<int&,int>(local_18,(int *)&stack0x00000008,&local_10);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_20);
  }
  Guard<Mutex>::~Guard(local_28);
  return;
}
```
