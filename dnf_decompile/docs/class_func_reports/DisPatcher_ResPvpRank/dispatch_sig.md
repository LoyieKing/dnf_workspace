# dispatch_sig

`_ZN21DisPatcher_ResPvpRank12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_ResPvpRank::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_ResPvpRank` | `0x081f0282` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081f0282  _ZN21DisPatcher_ResPvpRank12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_ResPvpRank::dispatch_sig(CUser*, PacketBuf&)
# range [0x081f0282, 0x081f039d]
081f0282 +0x000:  push   %ebp
081f0283 +0x001:  mov    %esp,%ebp
081f0285 +0x003:  push   %esi
081f0286 +0x004:  push   %ebx
081f0287 +0x005:  sub    $0xb0,%esp
081f028d +0x00b:  mov    0xc(%ebp),%eax
081f0290 +0x00e:  mov    %eax,(%esp)
081f0293 +0x011:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f0298 +0x016:  cmp    $0x7,%eax
081f029b +0x019:  setne  %al
081f029e +0x01c:  test   %al,%al
081f02a0 +0x01e:  je     081f02ac <+0x2a>
081f02a2 +0x020:  mov    $0x0,%ebx
081f02a7 +0x025:  jmp    081f0391 <+0x10f>
081f02ac +0x02a:  lea    -0x9a(%ebp),%eax
081f02b2 +0x030:  mov    %eax,(%esp)
081f02b5 +0x033:  call   08235378 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xaa22>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xaa22
081f02ba +0x038:  mov    0x10(%ebp),%eax
081f02bd +0x03b:  mov    %eax,0x8(%esp)
081f02c1 +0x03f:  lea    -0x9a(%ebp),%eax
081f02c7 +0x045:  mov    %eax,0x4(%esp)
081f02cb +0x049:  mov    0x8(%ebp),%eax
081f02ce +0x04c:  mov    %eax,(%esp)
081f02d1 +0x04f:  call   081f039e <_ZN21DisPatcher_ResPvpRank13ExtractPacketER16MSG_RES_PVP_RANKR9PacketBuf>  ; DisPatcher_ResPvpRank::ExtractPacket(MSG_RES_PVP_RANK&, PacketBuf&)
081f02d6 +0x054:  mov    %al,-0x9(%ebp)
081f02d9 +0x057:  movzbl -0x9(%ebp),%eax
081f02dd +0x05b:  xor    $0x1,%eax
081f02e0 +0x05e:  test   %al,%al
081f02e2 +0x060:  je     081f030c <+0x8a>
081f02e4 +0x062:  movl   $0x0,0xc(%esp)
081f02ec +0x06a:  movl   $0x0,0x8(%esp)
081f02f4 +0x072:  movl   $&_ZZN21DisPatcher_ResPvpRank12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f02fc +0x07a:  movl   $0x7736,(%esp)
081f0303 +0x081:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f0308 +0x086:  mov    %eax,%ebx
081f030a +0x088:  jmp    081f0383 <+0x101>
081f030c +0x08a:  lea    -0x9a(%ebp),%eax
081f0312 +0x090:  mov    %eax,0x8(%esp)
081f0316 +0x094:  mov    0xc(%ebp),%eax
081f0319 +0x097:  mov    %eax,0x4(%esp)
081f031d +0x09b:  mov    0x8(%ebp),%eax
081f0320 +0x09e:  mov    %eax,(%esp)
081f0323 +0x0a1:  call   081f05ea <_ZN21DisPatcher_ResPvpRank11SavePvpRankEP5CUserR16MSG_RES_PVP_RANK>  ; DisPatcher_ResPvpRank::SavePvpRank(CUser*, MSG_RES_PVP_RANK&)
081f0328 +0x0a6:  mov    %al,-0x9(%ebp)
081f032b +0x0a9:  movzbl -0x9(%ebp),%eax
081f032f +0x0ad:  xor    $0x1,%eax
081f0332 +0x0b0:  test   %al,%al
081f0334 +0x0b2:  je     081f035e <+0xdc>
081f0336 +0x0b4:  movl   $0x0,0xc(%esp)
081f033e +0x0bc:  movl   $0x0,0x8(%esp)
081f0346 +0x0c4:  movl   $&_ZZN21DisPatcher_ResPvpRank12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f034e +0x0cc:  movl   $0x7739,(%esp)
081f0355 +0x0d3:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f035a +0x0d8:  mov    %eax,%ebx
081f035c +0x0da:  jmp    081f0383 <+0x101>
081f035e +0x0dc:  mov    $0x0,%ebx
081f0363 +0x0e1:  jmp    081f0383 <+0x101>
081f0365 +0x0e3:  mov    %edx,%ebx
081f0367 +0x0e5:  mov    %eax,%esi
081f0369 +0x0e7:  lea    -0x9a(%ebp),%eax
081f036f +0x0ed:  mov    %eax,(%esp)
081f0372 +0x0f0:  call   0823538e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xaa38>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xaa38
081f0377 +0x0f5:  mov    %esi,%eax
081f0379 +0x0f7:  mov    %ebx,%edx
081f037b +0x0f9:  mov    %eax,(%esp)
081f037e +0x0fc:  call   08ae3750 <_Unwind_Resume>
081f0383 +0x101:  lea    -0x9a(%ebp),%eax
081f0389 +0x107:  mov    %eax,(%esp)
081f038c +0x10a:  call   0823538e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xaa38>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xaa38
081f0391 +0x10f:  mov    %ebx,%eax
081f0393 +0x111:  add    $0xb0,%esp
081f0399 +0x117:  pop    %ebx
081f039a +0x118:  pop    %esi
081f039b +0x119:  pop    %ebp
081f039c +0x11a:  ret
081f039d +0x11b:  nop
```

## 反编译 C

```c
// DisPatcher_ResPvpRank::dispatch_sig @ 0x81f0282

/* DisPatcher_ResPvpRank::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_ResPvpRank::dispatch_sig(DisPatcher_ResPvpRank *this,CUser *param_1,PacketBuf *param_2)

{
  int iVar1;
  undefined4 uVar2;
  MSG_RES_PVP_RANK local_9e [145];
  char local_d;
  
  iVar1 = CUser::get_state(param_1);
  if (iVar1 == 7) {
    MSG_RES_PVP_RANK::MSG_RES_PVP_RANK(local_9e);
                    /* try { // try from 081f02d1 to 081f0359 has its CatchHandler @ 081f0365 */
    local_d = ExtractPacket(this,local_9e,param_2);
    if (local_d == '\x01') {
      local_d = SavePvpRank(this,param_1,local_9e);
      if (local_d == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x7739,
                         "virtual int DisPatcher_ResPvpRank::dispatch_sig(CUser*, PacketBuf&)",0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x7736,"virtual int DisPatcher_ResPvpRank::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
    }
    MSG_RES_PVP_RANK::~MSG_RES_PVP_RANK(local_9e);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
