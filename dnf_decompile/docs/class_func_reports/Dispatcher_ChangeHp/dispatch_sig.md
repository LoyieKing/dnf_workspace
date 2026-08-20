# dispatch_sig

`_ZN19Dispatcher_ChangeHp12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_ChangeHp::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ChangeHp` | `0x0820748a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0820748a  _ZN19Dispatcher_ChangeHp12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_ChangeHp::dispatch_sig(CUser*, PacketBuf&)
# range [0x0820748a, 0x08207567]
0820748a +0x00:  push   %ebp
0820748b +0x01:  mov    %esp,%ebp
0820748d +0x03:  push   %ebx
0820748e +0x04:  sub    $0x24,%esp
08207491 +0x07:  mov    0xc(%ebp),%eax
08207494 +0x0a:  mov    %eax,(%esp)
08207497 +0x0d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0820749c +0x12:  cmp    $0x1,%eax
0820749f +0x15:  setle  %al
082074a2 +0x18:  test   %al,%al
082074a4 +0x1a:  je     082074cf <+0x45>
082074a6 +0x1c:  movl   $0x0,0xc(%esp)
082074ae +0x24:  movl   $0x0,0x8(%esp)
082074b6 +0x2c:  movl   $&_ZZN19Dispatcher_ChangeHp12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082074be +0x34:  movl   $0xa206,(%esp)
082074c5 +0x3b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082074ca +0x40:  jmp    08207562 <+0xd8>
082074cf +0x45:  movl   $0x0,-0xc(%ebp)
082074d6 +0x4c:  lea    -0xc(%ebp),%eax
082074d9 +0x4f:  mov    %eax,0x4(%esp)
082074dd +0x53:  mov    0x10(%ebp),%eax
082074e0 +0x56:  mov    %eax,(%esp)
082074e3 +0x59:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
082074e8 +0x5e:  xor    $0x1,%eax
082074eb +0x61:  test   %al,%al
082074ed +0x63:  je     08207515 <+0x8b>
082074ef +0x65:  movl   $0x0,0xc(%esp)
082074f7 +0x6d:  movl   $0x0,0x8(%esp)
082074ff +0x75:  movl   $&_ZZN19Dispatcher_ChangeHp12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08207507 +0x7d:  movl   $0xa20a,(%esp)
0820750e +0x84:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08207513 +0x89:  jmp    08207562 <+0xd8>
08207515 +0x8b:  mov    -0xc(%ebp),%ebx
08207518 +0x8e:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
0820751d +0x93:  mov    %ebx,0x8(%esp)
08207521 +0x97:  mov    0xc(%ebp),%edx
08207524 +0x9a:  mov    %edx,0x4(%esp)
08207528 +0x9e:  mov    %eax,(%esp)
0820752b +0xa1:  call   082ef570 <_ZN11pvp_assault11CAssaultMgr10OnChangeHpEP5CUseri>  ; pvp_assault::CAssaultMgr::OnChangeHp(CUser*, int)
08207530 +0xa6:  xor    $0x1,%eax
08207533 +0xa9:  test   %al,%al
08207535 +0xab:  je     0820755d <+0xd3>
08207537 +0xad:  movl   $0x0,0xc(%esp)
0820753f +0xb5:  movl   $0x0,0x8(%esp)
08207547 +0xbd:  movl   $&_ZZN19Dispatcher_ChangeHp12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820754f +0xc5:  movl   $0xa20d,(%esp)
08207556 +0xcc:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820755b +0xd1:  jmp    08207562 <+0xd8>
0820755d +0xd3:  mov    $0x0,%eax
08207562 +0xd8:  add    $0x24,%esp
08207565 +0xdb:  pop    %ebx
08207566 +0xdc:  pop    %ebp
08207567 +0xdd:  ret
```

## 反编译 C

```c
// Dispatcher_ChangeHp::dispatch_sig @ 0x820748a

/* Dispatcher_ChangeHp::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_ChangeHp::dispatch_sig(Dispatcher_ChangeHp *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CAssaultMgr *this_00;
  int local_10 [2];
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 2) {
    uVar3 = LineFunc(0xa206,"virtual int Dispatcher_ChangeHp::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
  }
  else {
    local_10[0] = 0;
    cVar1 = PacketBuf::get_int(param_2,local_10);
    iVar2 = local_10[0];
    if (cVar1 == '\x01') {
      this_00 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
      cVar1 = pvp_assault::CAssaultMgr::OnChangeHp(this_00,param_1,iVar2);
      if (cVar1 == '\x01') {
        uVar3 = 0;
      }
      else {
        uVar3 = LineFunc(0xa20d,"virtual int Dispatcher_ChangeHp::dispatch_sig(CUser*, PacketBuf&)",
                         0,0);
      }
    }
    else {
      uVar3 = LineFunc(0xa20a,"virtual int Dispatcher_ChangeHp::dispatch_sig(CUser*, PacketBuf&)",0,
                       0);
    }
  }
  return uVar3;
}
```
