# OnTimeoutConnectP2PAfterAssault

`_ZN11pvp_assault11CAssaultMgr31OnTimeoutConnectP2PAfterAssaultEji`

`pvp_assault::CAssaultMgr::OnTimeoutConnectP2PAfterAssault(unsigned int, int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultMgr` | `0x082ef9d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ef9d8  _ZN11pvp_assault11CAssaultMgr31OnTimeoutConnectP2PAfterAssaultEji
#           pvp_assault::CAssaultMgr::OnTimeoutConnectP2PAfterAssault(unsigned int, int)
# range [0x082ef9d8, 0x082efa51]
082ef9d8 +0x00:  push   %ebp
082ef9d9 +0x01:  mov    %esp,%ebp
082ef9db +0x03:  push   %ebx
082ef9dc +0x04:  sub    $0x24,%esp
082ef9df +0x07:  mov    0xc(%ebp),%ebx
082ef9e2 +0x0a:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
082ef9e7 +0x0f:  mov    %ebx,0x4(%esp)
082ef9eb +0x13:  mov    %eax,(%esp)
082ef9ee +0x16:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
082ef9f3 +0x1b:  mov    %eax,-0x10(%ebp)
082ef9f6 +0x1e:  cmpl   $0x0,-0x10(%ebp)
082ef9fa +0x22:  je     082efa12 <+0x3a>
082ef9fc +0x24:  mov    -0x10(%ebp),%eax
082ef9ff +0x27:  mov    %eax,(%esp)
082efa02 +0x2a:  call   0859a34e <_ZN6CParty27TimeoutCompleteAfterAssaultEv>  ; CParty::TimeoutCompleteAfterAssault()
082efa07 +0x2f:  test   %al,%al
082efa09 +0x31:  je     082efa12 <+0x3a>
082efa0b +0x33:  mov    $0x1,%eax
082efa10 +0x38:  jmp    082efa17 <+0x3f>
082efa12 +0x3a:  mov    $0x0,%eax
082efa17 +0x3f:  test   %al,%al
082efa19 +0x41:  je     082efa47 <+0x6f>
082efa1b +0x43:  mov    -0x10(%ebp),%eax
082efa1e +0x46:  mov    %eax,(%esp)
082efa21 +0x49:  call   0859a830 <_ZN6CParty15ClearBadP2PUserEv>  ; CParty::ClearBadP2PUser()
082efa26 +0x4e:  jmp    082efa47 <+0x6f>
082efa28 +0x50:  cmp    $0x1,%edx
082efa2b +0x53:  je     082efa35 <+0x5d>
082efa2d +0x55:  mov    %eax,(%esp)
082efa30 +0x58:  call   08ae3750 <_Unwind_Resume>
082efa35 +0x5d:  mov    %eax,(%esp)
082efa38 +0x60:  call   08725ce0 <__cxa_begin_catch>
082efa3d +0x65:  mov    (%eax),%eax
082efa3f +0x67:  mov    %eax,-0xc(%ebp)
082efa42 +0x6a:  call   08725c30 <__cxa_end_catch>
082efa47 +0x6f:  mov    $0x1,%eax
082efa4c +0x74:  add    $0x24,%esp
082efa4f +0x77:  pop    %ebx
082efa50 +0x78:  pop    %ebp
082efa51 +0x79:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultMgr::OnTimeoutConnectP2PAfterAssault @ 0x82ef9d8

/* pvp_assault::CAssaultMgr::OnTimeoutConnectP2PAfterAssault(unsigned int, int) */

undefined4 pvp_assault::CAssaultMgr::OnTimeoutConnectP2PAfterAssault(uint param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CParty *this;
  
                    /* try { // try from 082ef9e2 to 082efa25 has its CatchHandler @ 082efa28 */
  iVar3 = G_CGameManager();
  this = (CParty *)CGameManager::GetParty(iVar3);
  if (this != (CParty *)0x0) {
    cVar2 = CParty::TimeoutCompleteAfterAssault(this);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_082efa17;
    }
  }
  bVar1 = false;
LAB_082efa17:
  if (bVar1) {
    CParty::ClearBadP2PUser(this);
  }
  return 1;
}
```
