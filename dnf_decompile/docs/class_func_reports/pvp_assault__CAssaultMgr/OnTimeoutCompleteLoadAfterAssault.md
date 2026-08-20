# OnTimeoutCompleteLoadAfterAssault

`_ZN11pvp_assault11CAssaultMgr33OnTimeoutCompleteLoadAfterAssaultEji`

`pvp_assault::CAssaultMgr::OnTimeoutCompleteLoadAfterAssault(unsigned int, int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultMgr` | `0x082ef86e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ef86e  _ZN11pvp_assault11CAssaultMgr33OnTimeoutCompleteLoadAfterAssaultEji
#           pvp_assault::CAssaultMgr::OnTimeoutCompleteLoadAfterAssault(unsigned int, int)
# range [0x082ef86e, 0x082ef9d7]
082ef86e +0x000:  push   %ebp
082ef86f +0x001:  mov    %esp,%ebp
082ef871 +0x003:  push   %esi
082ef872 +0x004:  push   %ebx
082ef873 +0x005:  sub    $0x30,%esp
082ef876 +0x008:  mov    0xc(%ebp),%ebx
082ef879 +0x00b:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
082ef87e +0x010:  mov    %ebx,0x4(%esp)
082ef882 +0x014:  mov    %eax,(%esp)
082ef885 +0x017:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
082ef88a +0x01c:  mov    %eax,-0x10(%ebp)
082ef88d +0x01f:  cmpl   $0x0,-0x10(%ebp)
082ef891 +0x023:  jne    082ef8bf <+0x51>
082ef893 +0x025:  movl   $0x4,(%esp)
082ef89a +0x02c:  call   08725800 <__cxa_allocate_exception>
082ef89f +0x031:  mov    %eax,%edx
082ef8a1 +0x033:  movl   $0x1,(%edx)
082ef8a7 +0x039:  movl   $0x0,0x8(%esp)
082ef8af +0x041:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ef8b7 +0x049:  mov    %eax,(%esp)
082ef8ba +0x04c:  call   08724c50 <__cxa_throw>
082ef8bf +0x051:  mov    0x10(%ebp),%eax
082ef8c2 +0x054:  mov    %eax,0x8(%esp)
082ef8c6 +0x058:  movl   $0x2a,0x4(%esp)
082ef8ce +0x060:  mov    -0x10(%ebp),%eax
082ef8d1 +0x063:  mov    %eax,(%esp)
082ef8d4 +0x066:  call   0859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>  ; CParty::check_timer_key(TIMER_MESSAGE, int)
082ef8d9 +0x06b:  xor    $0x1,%eax
082ef8dc +0x06e:  test   %al,%al
082ef8de +0x070:  je     082ef90c <+0x9e>
082ef8e0 +0x072:  movl   $0x4,(%esp)
082ef8e7 +0x079:  call   08725800 <__cxa_allocate_exception>
082ef8ec +0x07e:  mov    %eax,%edx
082ef8ee +0x080:  movl   $0x17,(%edx)
082ef8f4 +0x086:  movl   $0x0,0x8(%esp)
082ef8fc +0x08e:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ef904 +0x096:  mov    %eax,(%esp)
082ef907 +0x099:  call   08724c50 <__cxa_throw>
082ef90c +0x09e:  mov    -0x10(%ebp),%eax
082ef90f +0x0a1:  mov    %eax,(%esp)
082ef912 +0x0a4:  call   0859a34e <_ZN6CParty27TimeoutCompleteAfterAssaultEv>  ; CParty::TimeoutCompleteAfterAssault()
082ef917 +0x0a9:  test   %al,%al
082ef919 +0x0ab:  je     082ef9cb <+0x15d>
082ef91f +0x0b1:  lea    -0x1c(%ebp),%eax
082ef922 +0x0b4:  mov    %eax,(%esp)
082ef925 +0x0b7:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082ef92a +0x0bc:  lea    -0x1c(%ebp),%eax
082ef92d +0x0bf:  mov    %eax,(%esp)
082ef930 +0x0c2:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
082ef935 +0x0c7:  movl   $0xf8,0x8(%esp)
082ef93d +0x0cf:  movl   $0x1,0x4(%esp)
082ef945 +0x0d7:  lea    -0x1c(%ebp),%eax
082ef948 +0x0da:  mov    %eax,(%esp)
082ef94b +0x0dd:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082ef950 +0x0e2:  movl   $0x1,0x4(%esp)
082ef958 +0x0ea:  lea    -0x1c(%ebp),%eax
082ef95b +0x0ed:  mov    %eax,(%esp)
082ef95e +0x0f0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082ef963 +0x0f5:  movl   $0x1,0x4(%esp)
082ef96b +0x0fd:  lea    -0x1c(%ebp),%eax
082ef96e +0x100:  mov    %eax,(%esp)
082ef971 +0x103:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082ef976 +0x108:  lea    -0x1c(%ebp),%eax
082ef979 +0x10b:  mov    %eax,0x4(%esp)
082ef97d +0x10f:  mov    -0x10(%ebp),%eax
082ef980 +0x112:  mov    %eax,(%esp)
082ef983 +0x115:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
082ef988 +0x11a:  jmp    082ef99f <+0x131>
082ef98a +0x11c:  mov    %edx,%ebx
082ef98c +0x11e:  mov    %eax,%esi
082ef98e +0x120:  lea    -0x1c(%ebp),%eax
082ef991 +0x123:  mov    %eax,(%esp)
082ef994 +0x126:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082ef999 +0x12b:  mov    %esi,%eax
082ef99b +0x12d:  mov    %ebx,%edx
082ef99d +0x12f:  jmp    082ef9ac <+0x13e>
082ef99f +0x131:  lea    -0x1c(%ebp),%eax
082ef9a2 +0x134:  mov    %eax,(%esp)
082ef9a5 +0x137:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082ef9aa +0x13c:  jmp    082ef9cb <+0x15d>
082ef9ac +0x13e:  cmp    $0x1,%edx
082ef9af +0x141:  je     082ef9b9 <+0x14b>
082ef9b1 +0x143:  mov    %eax,(%esp)
082ef9b4 +0x146:  call   08ae3750 <_Unwind_Resume>
082ef9b9 +0x14b:  mov    %eax,(%esp)
082ef9bc +0x14e:  call   08725ce0 <__cxa_begin_catch>
082ef9c1 +0x153:  mov    (%eax),%eax
082ef9c3 +0x155:  mov    %eax,-0xc(%ebp)
082ef9c6 +0x158:  call   08725c30 <__cxa_end_catch>
082ef9cb +0x15d:  mov    $0x1,%eax
082ef9d0 +0x162:  add    $0x30,%esp
082ef9d3 +0x165:  pop    %ebx
082ef9d4 +0x166:  pop    %esi
082ef9d5 +0x167:  pop    %ebp
082ef9d6 +0x168:  ret
082ef9d7 +0x169:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultMgr::OnTimeoutCompleteLoadAfterAssault @ 0x82ef86e

/* pvp_assault::CAssaultMgr::OnTimeoutCompleteLoadAfterAssault(unsigned int, int) */

undefined4 __thiscall
pvp_assault::CAssaultMgr::OnTimeoutCompleteLoadAfterAssault
          (CAssaultMgr *this,uint param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  PacketGuard local_20 [12];
  CParty *local_14;
  
                    /* try { // try from 082ef879 to 082ef929 has its CatchHandler @ 082ef9ac */
  iVar2 = G_CGameManager();
  local_14 = (CParty *)CGameManager::GetParty(iVar2);
  if (local_14 == (CParty *)0x0) {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4,param_1);
    *puVar3 = 1;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
  }
  cVar1 = CParty::check_timer_key(local_14,0x2a,param_2);
  if (cVar1 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x17;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
  }
  cVar1 = CParty::TimeoutCompleteAfterAssault(local_14);
  if (cVar1 != '\0') {
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 082ef930 to 082ef987 has its CatchHandler @ 082ef98a */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0xf8);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CParty::send_to_party(local_14,local_20);
                    /* try { // try from 082ef9a5 to 082ef9a9 has its CatchHandler @ 082ef9ac */
    PacketGuard::~PacketGuard(local_20);
  }
  return 1;
}
```
