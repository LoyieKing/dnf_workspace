# dispatch_sig

`_ZN24Dispatcher_ConnectP2PPvP12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_ConnectP2PPvP::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ConnectP2PPvP` | `0x08225394` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08225394  _ZN24Dispatcher_ConnectP2PPvP12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_ConnectP2PPvP::dispatch_sig(CUser*, PacketBuf&)
# range [0x08225394, 0x082255c9]
08225394 +0x000:  push   %ebp
08225395 +0x001:  mov    %esp,%ebp
08225397 +0x003:  sub    $0x48,%esp
0822539a +0x006:  mov    0xc(%ebp),%eax
0822539d +0x009:  mov    %eax,(%esp)
082253a0 +0x00c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082253a5 +0x011:  cmp    $0x1,%eax
082253a8 +0x014:  setle  %al
082253ab +0x017:  test   %al,%al
082253ad +0x019:  je     082253d8 <+0x44>
082253af +0x01b:  movl   $0x0,0xc(%esp)
082253b7 +0x023:  movl   $0x0,0x8(%esp)
082253bf +0x02b:  movl   $&_ZZN24Dispatcher_ConnectP2PPvP12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082253c7 +0x033:  movl   $0xe016,(%esp)
082253ce +0x03a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082253d3 +0x03f:  jmp    082255c7 <+0x233>
082253d8 +0x044:  movb   $0xff,-0x11(%ebp)
082253dc +0x048:  lea    -0x11(%ebp),%eax
082253df +0x04b:  mov    %eax,0x4(%esp)
082253e3 +0x04f:  mov    0x10(%ebp),%eax
082253e6 +0x052:  mov    %eax,(%esp)
082253e9 +0x055:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
082253ee +0x05a:  xor    $0x1,%eax
082253f1 +0x05d:  test   %al,%al
082253f3 +0x05f:  je     0822541e <+0x8a>
082253f5 +0x061:  movl   $0x0,0xc(%esp)
082253fd +0x069:  movl   $0x0,0x8(%esp)
08225405 +0x071:  movl   $&_ZZN24Dispatcher_ConnectP2PPvP12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0822540d +0x079:  movl   $0xe01a,(%esp)
08225414 +0x080:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08225419 +0x085:  jmp    082255c7 <+0x233>
0822541e +0x08a:  movzbl -0x11(%ebp),%eax
08225422 +0x08e:  cmp    $0x8,%al
08225424 +0x090:  jg     0822542e <+0x9a>
08225426 +0x092:  movzbl -0x11(%ebp),%eax
0822542a +0x096:  test   %al,%al
0822542c +0x098:  jns    08225457 <+0xc3>
0822542e +0x09a:  movl   $0x0,0xc(%esp)
08225436 +0x0a2:  movl   $0x0,0x8(%esp)
0822543e +0x0aa:  movl   $&_ZZN24Dispatcher_ConnectP2PPvP12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08225446 +0x0b2:  movl   $0xe01e,(%esp)
0822544d +0x0b9:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08225452 +0x0be:  jmp    082255c7 <+0x233>
08225457 +0x0c3:  movl   $0x0,-0x19(%ebp)
0822545e +0x0ca:  movl   $0x0,-0x15(%ebp)
08225465 +0x0d1:  movb   $0xff,-0x1a(%ebp)
08225469 +0x0d5:  movl   $0x0,-0xc(%ebp)
08225470 +0x0dc:  jmp    08225540 <+0x1ac>
08225475 +0x0e1:  lea    -0x1a(%ebp),%eax
08225478 +0x0e4:  mov    %eax,0x4(%esp)
0822547c +0x0e8:  mov    0x10(%ebp),%eax
0822547f +0x0eb:  mov    %eax,(%esp)
08225482 +0x0ee:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
08225487 +0x0f3:  xor    $0x1,%eax
0822548a +0x0f6:  test   %al,%al
0822548c +0x0f8:  je     082254b7 <+0x123>
0822548e +0x0fa:  movl   $0x0,0xc(%esp)
08225496 +0x102:  movl   $0x0,0x8(%esp)
0822549e +0x10a:  movl   $&_ZZN24Dispatcher_ConnectP2PPvP12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082254a6 +0x112:  movl   $0xe025,(%esp)
082254ad +0x119:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082254b2 +0x11e:  jmp    082255c7 <+0x233>
082254b7 +0x123:  movzbl -0x1a(%ebp),%eax
082254bb +0x127:  cmp    $0x7,%al
082254bd +0x129:  jg     082254c7 <+0x133>
082254bf +0x12b:  movzbl -0x1a(%ebp),%eax
082254c3 +0x12f:  test   %al,%al
082254c5 +0x131:  jns    082254f0 <+0x15c>
082254c7 +0x133:  movl   $0x0,0xc(%esp)
082254cf +0x13b:  movl   $0x0,0x8(%esp)
082254d7 +0x143:  movl   $&_ZZN24Dispatcher_ConnectP2PPvP12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082254df +0x14b:  movl   $0xe028,(%esp)
082254e6 +0x152:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082254eb +0x157:  jmp    082255c7 <+0x233>
082254f0 +0x15c:  movzbl -0x1a(%ebp),%eax
082254f4 +0x160:  movsbl %al,%eax
082254f7 +0x163:  lea    -0x19(%ebp),%edx
082254fa +0x166:  lea    (%edx,%eax,1),%eax
082254fd +0x169:  mov    %eax,0x4(%esp)
08225501 +0x16d:  mov    0x10(%ebp),%eax
08225504 +0x170:  mov    %eax,(%esp)
08225507 +0x173:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
0822550c +0x178:  xor    $0x1,%eax
0822550f +0x17b:  test   %al,%al
08225511 +0x17d:  je     0822553c <+0x1a8>
08225513 +0x17f:  movl   $0x0,0xc(%esp)
0822551b +0x187:  movl   $0x0,0x8(%esp)
08225523 +0x18f:  movl   $&_ZZN24Dispatcher_ConnectP2PPvP12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0822552b +0x197:  movl   $0xe02b,(%esp)
08225532 +0x19e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08225537 +0x1a3:  jmp    082255c7 <+0x233>
0822553c +0x1a8:  addl   $0x1,-0xc(%ebp)
08225540 +0x1ac:  movzbl -0x11(%ebp),%eax
08225544 +0x1b0:  movsbl %al,%eax
08225547 +0x1b3:  cmp    -0xc(%ebp),%eax
0822554a +0x1b6:  setg   %al
0822554d +0x1b9:  test   %al,%al
0822554f +0x1bb:  jne    08225475 <+0xe1>
08225555 +0x1c1:  mov    0xc(%ebp),%eax
08225558 +0x1c4:  mov    %eax,(%esp)
0822555b +0x1c7:  call   0865518e <_ZN5CUser10GetPVPRoomEv>  ; CUser::GetPVPRoom()
08225560 +0x1cc:  mov    %eax,-0x10(%ebp)
08225563 +0x1cf:  cmpl   $0x0,-0x10(%ebp)
08225567 +0x1d3:  jne    08225570 <+0x1dc>
08225569 +0x1d5:  mov    $0x0,%eax
0822556e +0x1da:  jmp    082255c7 <+0x233>
08225570 +0x1dc:  mov    -0x10(%ebp),%eax
08225573 +0x1df:  mov    0x6e4(%eax),%eax
08225579 +0x1e5:  test   %eax,%eax
0822557b +0x1e7:  jne    08225584 <+0x1f0>
0822557d +0x1e9:  mov    $0x0,%eax
08225582 +0x1ee:  jmp    082255c7 <+0x233>
08225584 +0x1f0:  mov    -0x10(%ebp),%eax
08225587 +0x1f3:  mov    0x6e4(%eax),%eax
0822558d +0x1f9:  mov    (%eax),%eax
0822558f +0x1fb:  add    $0x5c,%eax
08225592 +0x1fe:  mov    (%eax),%ecx
08225594 +0x200:  movzbl -0x11(%ebp),%eax
08225598 +0x204:  movsbl %al,%edx
0822559b +0x207:  mov    -0x10(%ebp),%eax
0822559e +0x20a:  mov    0x6e4(%eax),%eax
082255a4 +0x210:  mov    %edx,0x10(%esp)
082255a8 +0x214:  lea    -0x19(%ebp),%edx
082255ab +0x217:  mov    %edx,0xc(%esp)
082255af +0x21b:  mov    -0x10(%ebp),%edx
082255b2 +0x21e:  mov    %edx,0x8(%esp)
082255b6 +0x222:  mov    0xc(%ebp),%edx
082255b9 +0x225:  mov    %edx,0x4(%esp)
082255bd +0x229:  mov    %eax,(%esp)
082255c0 +0x22c:  call   *%ecx
082255c2 +0x22e:  mov    $0x0,%eax
082255c7 +0x233:  leave
082255c8 +0x234:  ret
082255c9 +0x235:  nop
```

## 反编译 C

```c
// Dispatcher_ConnectP2PPvP::dispatch_sig @ 0x8225394

/* Dispatcher_ConnectP2PPvP::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_ConnectP2PPvP::dispatch_sig
          (Dispatcher_ConnectP2PPvP *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char local_1e;
  char local_1d [9];
  int local_14;
  int local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 2) {
    uVar3 = LineFunc(0xe016,"virtual int Dispatcher_ConnectP2PPvP::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    local_1d[8] = -1;
    cVar1 = PacketBuf::get_byte(param_2,local_1d + 8);
    if (cVar1 == '\x01') {
      if ((local_1d[8] < '\t') && (-1 < local_1d[8])) {
        local_1d[0] = '\0';
        local_1d[1] = '\0';
        local_1d[2] = '\0';
        local_1d[3] = '\0';
        local_1d[4] = '\0';
        local_1d[5] = '\0';
        local_1d[6] = '\0';
        local_1d[7] = '\0';
        local_1e = -1;
        for (local_10 = 0; local_10 < local_1d[8]; local_10 = local_10 + 1) {
          cVar1 = PacketBuf::get_byte(param_2,&local_1e);
          if (cVar1 != '\x01') {
            uVar3 = LineFunc(0xe025,
                             "virtual int Dispatcher_ConnectP2PPvP::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            return uVar3;
          }
          if (('\a' < local_1e) || (local_1e < '\0')) {
            uVar3 = LineFunc(0xe028,
                             "virtual int Dispatcher_ConnectP2PPvP::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            return uVar3;
          }
          cVar1 = PacketBuf::get_byte(param_2,local_1d + local_1e);
          if (cVar1 != '\x01') {
            uVar3 = LineFunc(0xe02b,
                             "virtual int Dispatcher_ConnectP2PPvP::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            return uVar3;
          }
        }
        local_14 = CUser::GetPVPRoom(param_1);
        if (local_14 == 0) {
          uVar3 = 0;
        }
        else if (*(int *)(local_14 + 0x6e4) == 0) {
          uVar3 = 0;
        }
        else {
          (**(code **)(**(int **)(local_14 + 0x6e4) + 0x5c))
                    (*(undefined4 *)(local_14 + 0x6e4),param_1,local_14,local_1d,(int)local_1d[8]);
          uVar3 = 0;
        }
      }
      else {
        uVar3 = LineFunc(0xe01e,
                         "virtual int Dispatcher_ConnectP2PPvP::dispatch_sig(CUser*, PacketBuf&)",0,
                         0);
      }
    }
    else {
      uVar3 = LineFunc(0xe01a,
                       "virtual int Dispatcher_ConnectP2PPvP::dispatch_sig(CUser*, PacketBuf&)",0,0)
      ;
    }
  }
  return uVar3;
}
```
