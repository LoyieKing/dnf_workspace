# getUserLastCrashPlayStatus

`_ZN24StatisticsToObserveCrash26getUserLastCrashPlayStatusEi`

`StatisticsToObserveCrash::getUserLastCrashPlayStatus(int)`

| 类 | 地址 |
|---|---|
| `StatisticsToObserveCrash` | `0x0860bfc6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860bfc6  _ZN24StatisticsToObserveCrash26getUserLastCrashPlayStatusEi
#           StatisticsToObserveCrash::getUserLastCrashPlayStatus(int)
# range [0x0860bfc6, 0x0860c079]
0860bfc6 +0x00:  push   %ebp
0860bfc7 +0x01:  mov    %esp,%ebp
0860bfc9 +0x03:  push   %esi
0860bfca +0x04:  push   %ebx
0860bfcb +0x05:  sub    $0x20,%esp
0860bfce +0x08:  mov    0x8(%ebp),%eax
0860bfd1 +0x0b:  add    $0x4,%eax
0860bfd4 +0x0e:  mov    %eax,0x4(%esp)
0860bfd8 +0x12:  lea    -0x10(%ebp),%eax
0860bfdb +0x15:  mov    %eax,(%esp)
0860bfde +0x18:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
0860bfe3 +0x1d:  mov    0x8(%ebp),%eax
0860bfe6 +0x20:  lea    0x4c(%eax),%ecx
0860bfe9 +0x23:  lea    -0x14(%ebp),%eax
0860bfec +0x26:  lea    0xc(%ebp),%edx
0860bfef +0x29:  mov    %edx,0x8(%esp)
0860bff3 +0x2d:  mov    %ecx,0x4(%esp)
0860bff7 +0x31:  mov    %eax,(%esp)
0860bffa +0x34:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
0860bfff +0x39:  sub    $0x4,%esp
0860c002 +0x3c:  mov    0x8(%ebp),%eax
0860c005 +0x3f:  lea    0x4c(%eax),%edx
0860c008 +0x42:  lea    -0xc(%ebp),%eax
0860c00b +0x45:  mov    %edx,0x4(%esp)
0860c00f +0x49:  mov    %eax,(%esp)
0860c012 +0x4c:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0860c017 +0x51:  sub    $0x4,%esp
0860c01a +0x54:  lea    -0xc(%ebp),%eax
0860c01d +0x57:  mov    %eax,0x4(%esp)
0860c021 +0x5b:  lea    -0x14(%ebp),%eax
0860c024 +0x5e:  mov    %eax,(%esp)
0860c027 +0x61:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
0860c02c +0x66:  test   %al,%al
0860c02e +0x68:  je     0860c040 <+0x7a>
0860c030 +0x6a:  lea    -0x14(%ebp),%eax
0860c033 +0x6d:  mov    %eax,(%esp)
0860c036 +0x70:  call   0819397a <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x5e2>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x5e2
0860c03b +0x75:  mov    0x4(%eax),%ebx
0860c03e +0x78:  jmp    0860c062 <+0x9c>
0860c040 +0x7a:  mov    $0x0,%ebx
0860c045 +0x7f:  jmp    0860c062 <+0x9c>
0860c047 +0x81:  mov    %edx,%ebx
0860c049 +0x83:  mov    %eax,%esi
0860c04b +0x85:  lea    -0x10(%ebp),%eax
0860c04e +0x88:  mov    %eax,(%esp)
0860c051 +0x8b:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0860c056 +0x90:  mov    %esi,%eax
0860c058 +0x92:  mov    %ebx,%edx
0860c05a +0x94:  mov    %eax,(%esp)
0860c05d +0x97:  call   08ae3750 <_Unwind_Resume>
0860c062 +0x9c:  lea    -0x10(%ebp),%eax
0860c065 +0x9f:  mov    %eax,(%esp)
0860c068 +0xa2:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0860c06d +0xa7:  mov    %ebx,%eax
0860c06f +0xa9:  lea    -0x8(%ebp),%esp
0860c072 +0xac:  add    $0x0,%esp
0860c075 +0xaf:  pop    %ebx
0860c076 +0xb0:  pop    %esi
0860c077 +0xb1:  pop    %ebp
0860c078 +0xb2:  ret
0860c079 +0xb3:  nop
```

## 反编译 C

```c
// StatisticsToObserveCrash::getUserLastCrashPlayStatus @ 0x860bfc6

/* StatisticsToObserveCrash::getUserLastCrashPlayStatus(int) */

undefined4 StatisticsToObserveCrash::getUserLastCrashPlayStatus(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_18 [4];
  Guard<Mutex> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [4];
  
  Guard<Mutex>::Guard(local_14,(Mutex *)(param_1 + 4));
                    /* try { // try from 0860bffa to 0860c016 has its CatchHandler @ 0860c047 */
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
