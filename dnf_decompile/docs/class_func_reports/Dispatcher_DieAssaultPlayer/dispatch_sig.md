# dispatch_sig

`_ZN27Dispatcher_DieAssaultPlayer12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_DieAssaultPlayer::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_DieAssaultPlayer` | `0x08207208` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08207208  _ZN27Dispatcher_DieAssaultPlayer12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_DieAssaultPlayer::dispatch_sig(CUser*, PacketBuf&)
# range [0x08207208, 0x08207489]
08207208 +0x000:  push   %ebp
08207209 +0x001:  mov    %esp,%ebp
0820720b +0x003:  push   %ebx
0820720c +0x004:  sub    $0x34,%esp
0820720f +0x007:  mov    0xc(%ebp),%eax
08207212 +0x00a:  mov    %eax,(%esp)
08207215 +0x00d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0820721a +0x012:  cmp    $0x1,%eax
0820721d +0x015:  setle  %al
08207220 +0x018:  test   %al,%al
08207222 +0x01a:  je     0820724d <+0x45>
08207224 +0x01c:  movl   $0x0,0xc(%esp)
0820722c +0x024:  movl   $0x0,0x8(%esp)
08207234 +0x02c:  movl   $&_ZZN27Dispatcher_DieAssaultPlayer12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820723c +0x034:  movl   $0xa1d2,(%esp)
08207243 +0x03b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08207248 +0x040:  jmp    08207483 <+0x27b>
0820724d +0x045:  movb   $0xff,-0x9(%ebp)
08207251 +0x049:  lea    -0x9(%ebp),%eax
08207254 +0x04c:  mov    %eax,0x4(%esp)
08207258 +0x050:  mov    0x10(%ebp),%eax
0820725b +0x053:  mov    %eax,(%esp)
0820725e +0x056:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
08207263 +0x05b:  xor    $0x1,%eax
08207266 +0x05e:  test   %al,%al
08207268 +0x060:  je     08207293 <+0x8b>
0820726a +0x062:  movl   $0x0,0xc(%esp)
08207272 +0x06a:  movl   $0x0,0x8(%esp)
0820727a +0x072:  movl   $&_ZZN27Dispatcher_DieAssaultPlayer12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08207282 +0x07a:  movl   $0xa1d6,(%esp)
08207289 +0x081:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820728e +0x086:  jmp    08207483 <+0x27b>
08207293 +0x08b:  lea    -0x19(%ebp),%eax
08207296 +0x08e:  mov    %eax,0x4(%esp)
0820729a +0x092:  mov    0x10(%ebp),%eax
0820729d +0x095:  mov    %eax,(%esp)
082072a0 +0x098:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
082072a5 +0x09d:  xor    $0x1,%eax
082072a8 +0x0a0:  test   %al,%al
082072aa +0x0a2:  je     082072d5 <+0xcd>
082072ac +0x0a4:  movl   $0x0,0xc(%esp)
082072b4 +0x0ac:  movl   $0x0,0x8(%esp)
082072bc +0x0b4:  movl   $&_ZZN27Dispatcher_DieAssaultPlayer12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082072c4 +0x0bc:  movl   $0xa1dc,(%esp)
082072cb +0x0c3:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082072d0 +0x0c8:  jmp    08207483 <+0x27b>
082072d5 +0x0cd:  lea    -0x19(%ebp),%eax
082072d8 +0x0d0:  add    $0x4,%eax
082072db +0x0d3:  mov    %eax,0x4(%esp)
082072df +0x0d7:  mov    0x10(%ebp),%eax
082072e2 +0x0da:  mov    %eax,(%esp)
082072e5 +0x0dd:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
082072ea +0x0e2:  xor    $0x1,%eax
082072ed +0x0e5:  test   %al,%al
082072ef +0x0e7:  je     0820731a <+0x112>
082072f1 +0x0e9:  movl   $0x0,0xc(%esp)
082072f9 +0x0f1:  movl   $0x0,0x8(%esp)
08207301 +0x0f9:  movl   $&_ZZN27Dispatcher_DieAssaultPlayer12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08207309 +0x101:  movl   $0xa1df,(%esp)
08207310 +0x108:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08207315 +0x10d:  jmp    08207483 <+0x27b>
0820731a +0x112:  lea    -0x19(%ebp),%eax
0820731d +0x115:  add    $0x8,%eax
08207320 +0x118:  mov    %eax,0x4(%esp)
08207324 +0x11c:  mov    0x10(%ebp),%eax
08207327 +0x11f:  mov    %eax,(%esp)
0820732a +0x122:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
0820732f +0x127:  xor    $0x1,%eax
08207332 +0x12a:  test   %al,%al
08207334 +0x12c:  je     0820735f <+0x157>
08207336 +0x12e:  movl   $0x0,0xc(%esp)
0820733e +0x136:  movl   $0x0,0x8(%esp)
08207346 +0x13e:  movl   $&_ZZN27Dispatcher_DieAssaultPlayer12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820734e +0x146:  movl   $0xa1e2,(%esp)
08207355 +0x14d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820735a +0x152:  jmp    08207483 <+0x27b>
0820735f +0x157:  lea    -0x19(%ebp),%eax
08207362 +0x15a:  add    $0xa,%eax
08207365 +0x15d:  mov    %eax,0x4(%esp)
08207369 +0x161:  mov    0x10(%ebp),%eax
0820736c +0x164:  mov    %eax,(%esp)
0820736f +0x167:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
08207374 +0x16c:  xor    $0x1,%eax
08207377 +0x16f:  test   %al,%al
08207379 +0x171:  je     082073a4 <+0x19c>
0820737b +0x173:  movl   $0x0,0xc(%esp)
08207383 +0x17b:  movl   $0x0,0x8(%esp)
0820738b +0x183:  movl   $&_ZZN27Dispatcher_DieAssaultPlayer12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08207393 +0x18b:  movl   $0xa1e5,(%esp)
0820739a +0x192:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820739f +0x197:  jmp    08207483 <+0x27b>
082073a4 +0x19c:  lea    -0x19(%ebp),%eax
082073a7 +0x19f:  add    $0xc,%eax
082073aa +0x1a2:  mov    %eax,0x4(%esp)
082073ae +0x1a6:  mov    0x10(%ebp),%eax
082073b1 +0x1a9:  mov    %eax,(%esp)
082073b4 +0x1ac:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
082073b9 +0x1b1:  xor    $0x1,%eax
082073bc +0x1b4:  test   %al,%al
082073be +0x1b6:  je     082073e9 <+0x1e1>
082073c0 +0x1b8:  movl   $0x0,0xc(%esp)
082073c8 +0x1c0:  movl   $0x0,0x8(%esp)
082073d0 +0x1c8:  movl   $&_ZZN27Dispatcher_DieAssaultPlayer12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082073d8 +0x1d0:  movl   $0xa1e8,(%esp)
082073df +0x1d7:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082073e4 +0x1dc:  jmp    08207483 <+0x27b>
082073e9 +0x1e1:  lea    -0x19(%ebp),%eax
082073ec +0x1e4:  add    $0xe,%eax
082073ef +0x1e7:  mov    %eax,0x4(%esp)
082073f3 +0x1eb:  mov    0x10(%ebp),%eax
082073f6 +0x1ee:  mov    %eax,(%esp)
082073f9 +0x1f1:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
082073fe +0x1f6:  xor    $0x1,%eax
08207401 +0x1f9:  test   %al,%al
08207403 +0x1fb:  je     0820742b <+0x223>
08207405 +0x1fd:  movl   $0x0,0xc(%esp)
0820740d +0x205:  movl   $0x0,0x8(%esp)
08207415 +0x20d:  movl   $&_ZZN27Dispatcher_DieAssaultPlayer12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820741d +0x215:  movl   $0xa1eb,(%esp)
08207424 +0x21c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08207429 +0x221:  jmp    08207483 <+0x27b>
0820742b +0x223:  movzbl -0x9(%ebp),%eax
0820742f +0x227:  movsbl %al,%ebx
08207432 +0x22a:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
08207437 +0x22f:  lea    -0x19(%ebp),%edx
0820743a +0x232:  mov    %edx,0xc(%esp)
0820743e +0x236:  mov    %ebx,0x8(%esp)
08207442 +0x23a:  mov    0xc(%ebp),%edx
08207445 +0x23d:  mov    %edx,0x4(%esp)
08207449 +0x241:  mov    %eax,(%esp)
0820744c +0x244:  call   082ef3be <_ZN11pvp_assault11CAssaultMgr9OnDieUserEP5CUseriR22MSG_DIE_ASSAULT_PLAYER>  ; pvp_assault::CAssaultMgr::OnDieUser(CUser*, int, MSG_DIE_ASSAULT_PLAYER&)
08207451 +0x249:  xor    $0x1,%eax
08207454 +0x24c:  test   %al,%al
08207456 +0x24e:  je     0820747e <+0x276>
08207458 +0x250:  movl   $0x0,0xc(%esp)
08207460 +0x258:  movl   $0x0,0x8(%esp)
08207468 +0x260:  movl   $&_ZZN27Dispatcher_DieAssaultPlayer12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08207470 +0x268:  movl   $0xa1f1,(%esp)
08207477 +0x26f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820747c +0x274:  jmp    08207483 <+0x27b>
0820747e +0x276:  mov    $0x0,%eax
08207483 +0x27b:  add    $0x34,%esp
08207486 +0x27e:  pop    %ebx
08207487 +0x27f:  pop    %ebp
08207488 +0x280:  ret
08207489 +0x281:  nop
```

## 反编译 C

```c
// Dispatcher_DieAssaultPlayer::dispatch_sig @ 0x8207208

/* Dispatcher_DieAssaultPlayer::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_DieAssaultPlayer::dispatch_sig
          (Dispatcher_DieAssaultPlayer *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CAssaultMgr *this_00;
  MSG_DIE_ASSAULT_PLAYER local_1d [4];
  uint uStack_19;
  short sStack_15;
  short sStack_13;
  short sStack_11;
  short sStack_f;
  char local_d [5];
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 2) {
    uVar3 = LineFunc(0xa1d2,
                     "virtual int Dispatcher_DieAssaultPlayer::dispatch_sig(CUser*, PacketBuf&)",0,0
                    );
  }
  else {
    local_d[0] = -1;
    cVar1 = PacketBuf::get_byte(param_2,local_d);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_2,(uint *)local_1d);
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_int(param_2,&uStack_19);
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_short(param_2,&sStack_15);
          if (cVar1 == '\x01') {
            cVar1 = PacketBuf::get_short(param_2,&sStack_13);
            if (cVar1 == '\x01') {
              cVar1 = PacketBuf::get_short(param_2,&sStack_11);
              if (cVar1 == '\x01') {
                cVar1 = PacketBuf::get_short(param_2,&sStack_f);
                if (cVar1 == '\x01') {
                  iVar2 = (int)local_d[0];
                  this_00 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
                  cVar1 = pvp_assault::CAssaultMgr::OnDieUser(this_00,param_1,iVar2,local_1d);
                  if (cVar1 == '\x01') {
                    uVar3 = 0;
                  }
                  else {
                    uVar3 = LineFunc(0xa1f1,
                                     "virtual int Dispatcher_DieAssaultPlayer::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0,0);
                  }
                }
                else {
                  uVar3 = LineFunc(0xa1eb,
                                   "virtual int Dispatcher_DieAssaultPlayer::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                }
              }
              else {
                uVar3 = LineFunc(0xa1e8,
                                 "virtual int Dispatcher_DieAssaultPlayer::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
              }
            }
            else {
              uVar3 = LineFunc(0xa1e5,
                               "virtual int Dispatcher_DieAssaultPlayer::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
            }
          }
          else {
            uVar3 = LineFunc(0xa1e2,
                             "virtual int Dispatcher_DieAssaultPlayer::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
        else {
          uVar3 = LineFunc(0xa1df,
                           "virtual int Dispatcher_DieAssaultPlayer::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar3 = LineFunc(0xa1dc,
                         "virtual int Dispatcher_DieAssaultPlayer::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar3 = LineFunc(0xa1d6,
                       "virtual int Dispatcher_DieAssaultPlayer::dispatch_sig(CUser*, PacketBuf&)",0
                       ,0);
    }
  }
  return uVar3;
}
```
