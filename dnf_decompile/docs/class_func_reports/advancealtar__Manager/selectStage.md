# selectStage

`_ZN12advancealtar7Manager11selectStageEP5CUseriNS_15StageDifficulty1TE`

`advancealtar::Manager::selectStage(CUser*, int, advancealtar::StageDifficulty::T)`

| 类 | 地址 |
|---|---|
| `advancealtar::Manager` | `0x0813090e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813090e  _ZN12advancealtar7Manager11selectStageEP5CUseriNS_15StageDifficulty1TE
#           advancealtar::Manager::selectStage(CUser*, int, advancealtar::StageDifficulty::T)
# range [0x0813090e, 0x081309ef]
0813090e +0x00:  push   %ebp
0813090f +0x01:  mov    %esp,%ebp
08130911 +0x03:  sub    $0x38,%esp
08130914 +0x06:  cmpl   $0x0,0x8(%ebp)
08130918 +0x0a:  jne    08130924 <+0x16>
0813091a +0x0c:  mov    $0x3,%eax
0813091f +0x11:  jmp    081309ed <+0xdf>
08130924 +0x16:  mov    0x10(%ebp),%eax
08130927 +0x19:  test   %eax,%eax
08130929 +0x1b:  js     08130933 <+0x25>
0813092b +0x1d:  mov    0x10(%ebp),%eax
0813092e +0x20:  cmp    $0x2,%eax
08130931 +0x23:  jle    0813093d <+0x2f>
08130933 +0x25:  mov    $0x8,%eax
08130938 +0x2a:  jmp    081309ed <+0xdf>
0813093d +0x2f:  movb   $0x0,-0x11(%ebp)
08130941 +0x33:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08130946 +0x38:  mov    %eax,(%esp)
08130949 +0x3b:  call   08295b44 <_ZN12CGameManager15getAdvanceAltarEv>  ; CGameManager::getAdvanceAltar()
0813094e +0x40:  mov    %eax,-0x10(%ebp)
08130951 +0x43:  cmpl   $0x0,-0x10(%ebp)
08130955 +0x47:  jne    08130994 <+0x86>
08130957 +0x49:  movl   $0x5,0xc(%esp)
0813095f +0x51:  movl   $0x6ab,0x8(%esp)
08130967 +0x59:  movl   $&_ZZN12advancealtar7Manager11selectStageEP5CUseriNS_15StageDifficulty1TEE19__PRETTY_FUNCTION__,0x4(%esp)
0813096f +0x61:  lea    -0x24(%ebp),%eax
08130972 +0x64:  mov    %eax,(%esp)
08130975 +0x67:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0813097a +0x6c:  movl   $"StaticPool Defence DungeonNULL",0x4(%esp)
08130982 +0x74:  lea    -0x24(%ebp),%eax
08130985 +0x77:  mov    %eax,(%esp)
08130988 +0x7a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0813098d +0x7f:  mov    $0x3,%eax
08130992 +0x84:  jmp    081309ed <+0xdf>
08130994 +0x86:  mov    0x10(%ebp),%eax
08130997 +0x89:  mov    %eax,0xc(%esp)
0813099b +0x8d:  mov    0xc(%ebp),%eax
0813099e +0x90:  mov    %eax,0x8(%esp)
081309a2 +0x94:  mov    0x8(%ebp),%eax
081309a5 +0x97:  mov    %eax,0x4(%esp)
081309a9 +0x9b:  mov    -0x10(%ebp),%eax
081309ac +0x9e:  mov    %eax,(%esp)
081309af +0xa1:  call   0812fa7a <_ZN12advancealtar12StageControl11selectStageEP5CUseriNS_15StageDifficulty1TE>  ; advancealtar::StageControl::selectStage(CUser*, int, advancealtar::StageDifficulty::T)
081309b4 +0xa6:  mov    %eax,-0xc(%ebp)
081309b7 +0xa9:  cmpl   $0x0,-0xc(%ebp)
081309bb +0xad:  je     081309cd <+0xbf>
081309bd +0xaf:  mov    -0x10(%ebp),%eax
081309c0 +0xb2:  mov    %eax,(%esp)
081309c3 +0xb5:  call   081300ce <_ZN12advancealtar12StageControl7destroyEv>  ; advancealtar::StageControl::destroy()
081309c8 +0xba:  mov    -0xc(%ebp),%eax
081309cb +0xbd:  jmp    081309ed <+0xdf>
081309cd +0xbf:  mov    -0x10(%ebp),%eax
081309d0 +0xc2:  mov    %eax,(%esp)
081309d3 +0xc5:  call   081348ba <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4c1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4c1
081309d8 +0xca:  cwtl
081309d9 +0xcb:  mov    %eax,0x4(%esp)
081309dd +0xcf:  mov    0x8(%ebp),%eax
081309e0 +0xd2:  mov    %eax,(%esp)
081309e3 +0xd5:  call   0813490e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x515>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x515
081309e8 +0xda:  mov    $0x0,%eax
081309ed +0xdf:  leave
081309ee +0xe0:  ret
081309ef +0xe1:  nop
```

## 反编译 C

```c
// advancealtar::Manager::selectStage @ 0x813090e

/* advancealtar::Manager::selectStage(CUser*, int, advancealtar::StageDifficulty::T) */

int advancealtar::Manager::selectStage(CUser *param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  CGameManager *this;
  cMyTrace local_28 [19];
  undefined1 local_15;
  StageControl *local_14;
  int local_10;
  
  if (param_1 == (CUser *)0x0) {
    local_10 = 3;
  }
  else if ((param_3 < 0) || (2 < param_3)) {
    local_10 = 8;
  }
  else {
    local_15 = 0;
    this = (CGameManager *)G_CGameManager();
    local_14 = (StageControl *)CGameManager::getAdvanceAltar(this);
    if (local_14 == (StageControl *)0x0) {
      cMyTrace::cMyTrace(local_28,
                         "static ENUM_ERROR advancealtar::Manager::selectStage(CUser*, int, advancealtar::StageDifficulty::T)"
                         ,0x6ab,5);
      cMyTrace::operator()(local_28,"StaticPool Defence DungeonNULL");
      local_10 = 3;
    }
    else {
      local_10 = StageControl::selectStage(local_14,param_1,param_2,param_3);
      if (local_10 == 0) {
        sVar1 = StageControl::getIndex(local_14);
        CUser::setAdvanceAltarIndex(param_1,sVar1);
        local_10 = 0;
      }
      else {
        StageControl::destroy(local_14);
      }
    }
  }
  return local_10;
}
```
