# getUserLastCrashPacketID

`_ZN24StatisticsToObserveCrash24getUserLastCrashPacketIDEi`

`StatisticsToObserveCrash::getUserLastCrashPacketID(int)`

| 类 | 地址 |
|---|---|
| `StatisticsToObserveCrash` | `0x0860bc7a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860bc7a  _ZN24StatisticsToObserveCrash24getUserLastCrashPacketIDEi
#           StatisticsToObserveCrash::getUserLastCrashPacketID(int)
# range [0x0860bc7a, 0x0860bd2d]
0860bc7a +0x00:  push   %ebp
0860bc7b +0x01:  mov    %esp,%ebp
0860bc7d +0x03:  push   %esi
0860bc7e +0x04:  push   %ebx
0860bc7f +0x05:  sub    $0x20,%esp
0860bc82 +0x08:  mov    0x8(%ebp),%eax
0860bc85 +0x0b:  add    $0x4,%eax
0860bc88 +0x0e:  mov    %eax,0x4(%esp)
0860bc8c +0x12:  lea    -0x10(%ebp),%eax
0860bc8f +0x15:  mov    %eax,(%esp)
0860bc92 +0x18:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
0860bc97 +0x1d:  mov    0x8(%ebp),%eax
0860bc9a +0x20:  lea    0x1c(%eax),%ecx
0860bc9d +0x23:  lea    -0x14(%ebp),%eax
0860bca0 +0x26:  lea    0xc(%ebp),%edx
0860bca3 +0x29:  mov    %edx,0x8(%esp)
0860bca7 +0x2d:  mov    %ecx,0x4(%esp)
0860bcab +0x31:  mov    %eax,(%esp)
0860bcae +0x34:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
0860bcb3 +0x39:  sub    $0x4,%esp
0860bcb6 +0x3c:  mov    0x8(%ebp),%eax
0860bcb9 +0x3f:  lea    0x1c(%eax),%edx
0860bcbc +0x42:  lea    -0xc(%ebp),%eax
0860bcbf +0x45:  mov    %edx,0x4(%esp)
0860bcc3 +0x49:  mov    %eax,(%esp)
0860bcc6 +0x4c:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0860bccb +0x51:  sub    $0x4,%esp
0860bcce +0x54:  lea    -0xc(%ebp),%eax
0860bcd1 +0x57:  mov    %eax,0x4(%esp)
0860bcd5 +0x5b:  lea    -0x14(%ebp),%eax
0860bcd8 +0x5e:  mov    %eax,(%esp)
0860bcdb +0x61:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
0860bce0 +0x66:  test   %al,%al
0860bce2 +0x68:  je     0860bcf4 <+0x7a>
0860bce4 +0x6a:  lea    -0x14(%ebp),%eax
0860bce7 +0x6d:  mov    %eax,(%esp)
0860bcea +0x70:  call   0819397a <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x5e2>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x5e2
0860bcef +0x75:  mov    0x4(%eax),%ebx
0860bcf2 +0x78:  jmp    0860bd16 <+0x9c>
0860bcf4 +0x7a:  mov    $0x0,%ebx
0860bcf9 +0x7f:  jmp    0860bd16 <+0x9c>
0860bcfb +0x81:  mov    %edx,%ebx
0860bcfd +0x83:  mov    %eax,%esi
0860bcff +0x85:  lea    -0x10(%ebp),%eax
0860bd02 +0x88:  mov    %eax,(%esp)
0860bd05 +0x8b:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0860bd0a +0x90:  mov    %esi,%eax
0860bd0c +0x92:  mov    %ebx,%edx
0860bd0e +0x94:  mov    %eax,(%esp)
0860bd11 +0x97:  call   08ae3750 <_Unwind_Resume>
0860bd16 +0x9c:  lea    -0x10(%ebp),%eax
0860bd19 +0x9f:  mov    %eax,(%esp)
0860bd1c +0xa2:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0860bd21 +0xa7:  mov    %ebx,%eax
0860bd23 +0xa9:  lea    -0x8(%ebp),%esp
0860bd26 +0xac:  add    $0x0,%esp
0860bd29 +0xaf:  pop    %ebx
0860bd2a +0xb0:  pop    %esi
0860bd2b +0xb1:  pop    %ebp
0860bd2c +0xb2:  ret
0860bd2d +0xb3:  nop
```

## 反编译 C

```c
// StatisticsToObserveCrash::getUserLastCrashPacketID @ 0x860bc7a

/* StatisticsToObserveCrash::getUserLastCrashPacketID(int) */

undefined4 StatisticsToObserveCrash::getUserLastCrashPacketID(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_18 [4];
  Guard<Mutex> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [4];
  
  Guard<Mutex>::Guard(local_14,(Mutex *)(param_1 + 4));
                    /* try { // try from 0860bcae to 0860bcca has its CatchHandler @ 0860bcfb */
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
