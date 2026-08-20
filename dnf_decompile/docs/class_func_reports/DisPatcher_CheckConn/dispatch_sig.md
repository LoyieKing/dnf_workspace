# dispatch_sig

`_ZN20DisPatcher_CheckConn12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_CheckConn::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_CheckConn` | `0x081ea900` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ea900  _ZN20DisPatcher_CheckConn12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_CheckConn::dispatch_sig(CUser*, PacketBuf&)
# range [0x081ea900, 0x081eaa5b]
081ea900 +0x000:  push   %ebp
081ea901 +0x001:  mov    %esp,%ebp
081ea903 +0x003:  sub    $0x38,%esp
081ea906 +0x006:  mov    0xc(%ebp),%eax
081ea909 +0x009:  mov    %eax,(%esp)
081ea90c +0x00c:  call   08230152 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x57fc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x57fc
081ea911 +0x011:  movl   $0x0,-0xc(%ebp)
081ea918 +0x018:  lea    -0xc(%ebp),%eax
081ea91b +0x01b:  mov    %eax,0x4(%esp)
081ea91f +0x01f:  mov    0x10(%ebp),%eax
081ea922 +0x022:  mov    %eax,(%esp)
081ea925 +0x025:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081ea92a +0x02a:  xor    $0x1,%eax
081ea92d +0x02d:  test   %al,%al
081ea92f +0x02f:  je     081ea95a <+0x5a>
081ea931 +0x031:  movl   $0x0,0xc(%esp)
081ea939 +0x039:  movl   $0x0,0x8(%esp)
081ea941 +0x041:  movl   $&_ZZN20DisPatcher_CheckConn12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ea949 +0x049:  movl   $0x6bf8,(%esp)
081ea950 +0x050:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ea955 +0x055:  jmp    081eaa5a <+0x15a>
081ea95a +0x05a:  mov    0xc(%ebp),%eax
081ea95d +0x05d:  mov    %eax,(%esp)
081ea960 +0x060:  call   0864e0b6 <_ZNK5CUser25getCurCharacInvenCheckSumEv>  ; CUser::getCurCharacInvenCheckSum() const
081ea965 +0x065:  mov    -0xc(%ebp),%edx
081ea968 +0x068:  cmp    %edx,%eax
081ea96a +0x06a:  setne  %al
081ea96d +0x06d:  test   %al,%al
081ea96f +0x06f:  je     081ea9ab <+0xab>
081ea971 +0x071:  mov    0xc(%ebp),%eax
081ea974 +0x074:  mov    %eax,(%esp)
081ea977 +0x077:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ea97c +0x07c:  movl   $0x0,0x14(%esp)
081ea984 +0x084:  movl   $0x0,0x10(%esp)
081ea98c +0x08c:  movl   $0x1,0xc(%esp)
081ea994 +0x094:  movl   $0x25b,0x8(%esp)
081ea99c +0x09c:  mov    0xc(%ebp),%edx
081ea99f +0x09f:  mov    %edx,0x4(%esp)
081ea9a3 +0x0a3:  mov    %eax,(%esp)
081ea9a6 +0x0a6:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ea9ab +0x0ab:  movl   $0x0,-0x10(%ebp)
081ea9b2 +0x0b2:  lea    -0x10(%ebp),%eax
081ea9b5 +0x0b5:  mov    %eax,0x4(%esp)
081ea9b9 +0x0b9:  mov    0x10(%ebp),%eax
081ea9bc +0x0bc:  mov    %eax,(%esp)
081ea9bf +0x0bf:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081ea9c4 +0x0c4:  xor    $0x1,%eax
081ea9c7 +0x0c7:  test   %al,%al
081ea9c9 +0x0c9:  je     081ea9f1 <+0xf1>
081ea9cb +0x0cb:  movl   $0x0,0xc(%esp)
081ea9d3 +0x0d3:  movl   $0x0,0x8(%esp)
081ea9db +0x0db:  movl   $&_ZZN20DisPatcher_CheckConn12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ea9e3 +0x0e3:  movl   $0x6bff,(%esp)
081ea9ea +0x0ea:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ea9ef +0x0ef:  jmp    081eaa5a <+0x15a>
081ea9f1 +0x0f1:  mov    0xc(%ebp),%eax
081ea9f4 +0x0f4:  mov    %eax,(%esp)
081ea9f7 +0x0f7:  call   0864e114 <_ZNK5CUser25getCurCharacSkillCheckSumEv>  ; CUser::getCurCharacSkillCheckSum() const
081ea9fc +0x0fc:  mov    -0x10(%ebp),%edx
081ea9ff +0x0ff:  cmp    %edx,%eax
081eaa01 +0x101:  setne  %al
081eaa04 +0x104:  test   %al,%al
081eaa06 +0x106:  je     081eaa42 <+0x142>
081eaa08 +0x108:  mov    0xc(%ebp),%eax
081eaa0b +0x10b:  mov    %eax,(%esp)
081eaa0e +0x10e:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081eaa13 +0x113:  movl   $0x0,0x14(%esp)
081eaa1b +0x11b:  movl   $0x0,0x10(%esp)
081eaa23 +0x123:  movl   $0x1,0xc(%esp)
081eaa2b +0x12b:  movl   $0x25c,0x8(%esp)
081eaa33 +0x133:  mov    0xc(%ebp),%edx
081eaa36 +0x136:  mov    %edx,0x4(%esp)
081eaa3a +0x13a:  mov    %eax,(%esp)
081eaa3d +0x13d:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081eaa42 +0x142:  mov    0xc(%ebp),%eax
081eaa45 +0x145:  mov    %eax,(%esp)
081eaa48 +0x148:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
081eaa4d +0x14d:  mov    %eax,(%esp)
081eaa50 +0x150:  call   084b93ee <_ZN8XNuclear6CHades15Send_ChangeGoldEv>  ; XNuclear::CHades::Send_ChangeGold()
081eaa55 +0x155:  mov    $0x0,%eax
081eaa5a +0x15a:  leave
081eaa5b +0x15b:  ret
```

## 反编译 C

```c
// DisPatcher_CheckConn::dispatch_sig @ 0x81ea900

/* DisPatcher_CheckConn::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_CheckConn::dispatch_sig(DisPatcher_CheckConn *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CHackAnalyzer *pCVar4;
  int local_14;
  int local_10 [3];
  
  CUser::decre_check_count(param_1);
  local_10[0] = 0;
  cVar1 = PacketBuf::get_int(param_2,local_10);
  if (cVar1 == '\x01') {
    iVar3 = CUser::getCurCharacInvenCheckSum(param_1);
    if (iVar3 != local_10[0]) {
      pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
      WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,param_1,0x25b,1,0,0);
    }
    local_14 = 0;
    cVar1 = PacketBuf::get_int(param_2,&local_14);
    if (cVar1 == '\x01') {
      iVar3 = CUser::getCurCharacSkillCheckSum(param_1);
      if (iVar3 != local_14) {
        pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,param_1,0x25c,1,0,0);
      }
      CUser::getHades(param_1);
      XNuclear::CHades::Send_ChangeGold();
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x6bff,"virtual int DisPatcher_CheckConn::dispatch_sig(CUser*, PacketBuf&)",0
                       ,0);
    }
  }
  else {
    uVar2 = LineFunc(0x6bf8,"virtual int DisPatcher_CheckConn::dispatch_sig(CUser*, PacketBuf&)",0,0
                    );
  }
  return uVar2;
}
```
