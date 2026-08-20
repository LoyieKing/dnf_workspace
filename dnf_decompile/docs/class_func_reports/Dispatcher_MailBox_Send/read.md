# read

`_ZN23Dispatcher_MailBox_Send4readER9PacketBufR8MSG_BASE`

`Dispatcher_MailBox_Send::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MailBox_Send` | `0x081cc3da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cc3da  _ZN23Dispatcher_MailBox_Send4readER9PacketBufR8MSG_BASE
#           Dispatcher_MailBox_Send::read(PacketBuf&, MSG_BASE&)
# range [0x081cc3da, 0x081cc635]
081cc3da +0x000:  push   %ebp
081cc3db +0x001:  mov    %esp,%ebp
081cc3dd +0x003:  sub    $0x28,%esp
081cc3e0 +0x006:  mov    0x10(%ebp),%eax
081cc3e3 +0x009:  mov    %eax,-0xc(%ebp)
081cc3e6 +0x00c:  mov    -0xc(%ebp),%eax
081cc3e9 +0x00f:  add    $0xd,%eax
081cc3ec +0x012:  mov    %eax,0x4(%esp)
081cc3f0 +0x016:  mov    0xc(%ebp),%eax
081cc3f3 +0x019:  mov    %eax,(%esp)
081cc3f6 +0x01c:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081cc3fb +0x021:  xor    $0x1,%eax
081cc3fe +0x024:  test   %al,%al
081cc400 +0x026:  je     081cc42b <+0x51>
081cc402 +0x028:  movl   $0x0,0xc(%esp)
081cc40a +0x030:  movl   $0x0,0x8(%esp)
081cc412 +0x038:  movl   $&_ZZN23Dispatcher_MailBox_Send4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cc41a +0x040:  movl   $0x2309,(%esp)
081cc421 +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cc426 +0x04c:  jmp    081cc634 <+0x25a>
081cc42b +0x051:  mov    -0xc(%ebp),%eax
081cc42e +0x054:  mov    0xd(%eax),%eax
081cc431 +0x057:  mov    -0xc(%ebp),%edx
081cc434 +0x05a:  add    $0x11,%edx
081cc437 +0x05d:  mov    %eax,0xc(%esp)
081cc43b +0x061:  movl   $0x1d,0x8(%esp)
081cc443 +0x069:  mov    %edx,0x4(%esp)
081cc447 +0x06d:  mov    0xc(%ebp),%eax
081cc44a +0x070:  mov    %eax,(%esp)
081cc44d +0x073:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081cc452 +0x078:  xor    $0x1,%eax
081cc455 +0x07b:  test   %al,%al
081cc457 +0x07d:  jne    081cc4e9 <+0x10f>
081cc45d +0x083:  mov    -0xc(%ebp),%eax
081cc460 +0x086:  add    $0x2e,%eax
081cc463 +0x089:  mov    %eax,0x4(%esp)
081cc467 +0x08d:  mov    0xc(%ebp),%eax
081cc46a +0x090:  mov    %eax,(%esp)
081cc46d +0x093:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081cc472 +0x098:  xor    $0x1,%eax
081cc475 +0x09b:  test   %al,%al
081cc477 +0x09d:  jne    081cc4e9 <+0x10f>
081cc479 +0x09f:  mov    -0xc(%ebp),%eax
081cc47c +0x0a2:  add    $0x36,%eax
081cc47f +0x0a5:  mov    %eax,0x4(%esp)
081cc483 +0x0a9:  mov    0xc(%ebp),%eax
081cc486 +0x0ac:  mov    %eax,(%esp)
081cc489 +0x0af:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081cc48e +0x0b4:  xor    $0x1,%eax
081cc491 +0x0b7:  test   %al,%al
081cc493 +0x0b9:  jne    081cc4e9 <+0x10f>
081cc495 +0x0bb:  mov    -0xc(%ebp),%eax
081cc498 +0x0be:  add    $0x37,%eax
081cc49b +0x0c1:  mov    %eax,0x4(%esp)
081cc49f +0x0c5:  mov    0xc(%ebp),%eax
081cc4a2 +0x0c8:  mov    %eax,(%esp)
081cc4a5 +0x0cb:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081cc4aa +0x0d0:  xor    $0x1,%eax
081cc4ad +0x0d3:  test   %al,%al
081cc4af +0x0d5:  jne    081cc4e9 <+0x10f>
081cc4b1 +0x0d7:  mov    -0xc(%ebp),%eax
081cc4b4 +0x0da:  add    $0x39,%eax
081cc4b7 +0x0dd:  mov    %eax,0x4(%esp)
081cc4bb +0x0e1:  mov    0xc(%ebp),%eax
081cc4be +0x0e4:  mov    %eax,(%esp)
081cc4c1 +0x0e7:  call   0858d27e <_ZN9PacketBuf7get_intERm>  ; PacketBuf::get_int(unsigned long&)
081cc4c6 +0x0ec:  xor    $0x1,%eax
081cc4c9 +0x0ef:  test   %al,%al
081cc4cb +0x0f1:  jne    081cc4e9 <+0x10f>
081cc4cd +0x0f3:  mov    -0xc(%ebp),%eax
081cc4d0 +0x0f6:  add    $0x3d,%eax
081cc4d3 +0x0f9:  mov    %eax,0x4(%esp)
081cc4d7 +0x0fd:  mov    0xc(%ebp),%eax
081cc4da +0x100:  mov    %eax,(%esp)
081cc4dd +0x103:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081cc4e2 +0x108:  xor    $0x1,%eax
081cc4e5 +0x10b:  test   %al,%al
081cc4e7 +0x10d:  je     081cc4f0 <+0x116>
081cc4e9 +0x10f:  mov    $0x1,%eax
081cc4ee +0x114:  jmp    081cc4f5 <+0x11b>
081cc4f0 +0x116:  mov    $0x0,%eax
081cc4f5 +0x11b:  test   %al,%al
081cc4f7 +0x11d:  je     081cc522 <+0x148>
081cc4f9 +0x11f:  movl   $0x0,0xc(%esp)
081cc501 +0x127:  movl   $0x0,0x8(%esp)
081cc509 +0x12f:  movl   $&_ZZN23Dispatcher_MailBox_Send4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cc511 +0x137:  movl   $0x2315,(%esp)
081cc518 +0x13e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cc51d +0x143:  jmp    081cc634 <+0x25a>
081cc522 +0x148:  mov    -0xc(%ebp),%eax
081cc525 +0x14b:  movl   $0x0,0x41(%eax)
081cc52c +0x152:  mov    -0xc(%ebp),%eax
081cc52f +0x155:  movl   $0x0,0x32(%eax)
081cc536 +0x15c:  mov    -0xc(%ebp),%eax
081cc539 +0x15f:  add    $0x45,%eax
081cc53c +0x162:  movl   $0x100,0x8(%esp)
081cc544 +0x16a:  movl   $0x0,0x4(%esp)
081cc54c +0x172:  mov    %eax,(%esp)
081cc54f +0x175:  call   0807dcc0 <_init+0x5b8>
081cc554 +0x17a:  mov    -0xc(%ebp),%eax
081cc557 +0x17d:  add    $0x41,%eax
081cc55a +0x180:  mov    %eax,0x4(%esp)
081cc55e +0x184:  mov    0xc(%ebp),%eax
081cc561 +0x187:  mov    %eax,(%esp)
081cc564 +0x18a:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081cc569 +0x18f:  xor    $0x1,%eax
081cc56c +0x192:  test   %al,%al
081cc56e +0x194:  je     081cc599 <+0x1bf>
081cc570 +0x196:  movl   $0x0,0xc(%esp)
081cc578 +0x19e:  movl   $0x0,0x8(%esp)
081cc580 +0x1a6:  movl   $&_ZZN23Dispatcher_MailBox_Send4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cc588 +0x1ae:  movl   $0x231b,(%esp)
081cc58f +0x1b5:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cc594 +0x1ba:  jmp    081cc634 <+0x25a>
081cc599 +0x1bf:  mov    -0xc(%ebp),%eax
081cc59c +0x1c2:  mov    0x41(%eax),%eax
081cc59f +0x1c5:  mov    -0xc(%ebp),%edx
081cc5a2 +0x1c8:  add    $0x45,%edx
081cc5a5 +0x1cb:  mov    %eax,0xc(%esp)
081cc5a9 +0x1cf:  movl   $0x100,0x8(%esp)
081cc5b1 +0x1d7:  mov    %edx,0x4(%esp)
081cc5b5 +0x1db:  mov    0xc(%ebp),%eax
081cc5b8 +0x1de:  mov    %eax,(%esp)
081cc5bb +0x1e1:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081cc5c0 +0x1e6:  xor    $0x1,%eax
081cc5c3 +0x1e9:  test   %al,%al
081cc5c5 +0x1eb:  je     081cc5ed <+0x213>
081cc5c7 +0x1ed:  movl   $0x0,0xc(%esp)
081cc5cf +0x1f5:  movl   $0x0,0x8(%esp)
081cc5d7 +0x1fd:  movl   $&_ZZN23Dispatcher_MailBox_Send4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cc5df +0x205:  movl   $0x231e,(%esp)
081cc5e6 +0x20c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cc5eb +0x211:  jmp    081cc634 <+0x25a>
081cc5ed +0x213:  mov    -0xc(%ebp),%eax
081cc5f0 +0x216:  add    $0x32,%eax
081cc5f3 +0x219:  mov    %eax,0x4(%esp)
081cc5f7 +0x21d:  mov    0xc(%ebp),%eax
081cc5fa +0x220:  mov    %eax,(%esp)
081cc5fd +0x223:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081cc602 +0x228:  xor    $0x1,%eax
081cc605 +0x22b:  test   %al,%al
081cc607 +0x22d:  je     081cc62f <+0x255>
081cc609 +0x22f:  movl   $0x0,0xc(%esp)
081cc611 +0x237:  movl   $0x0,0x8(%esp)
081cc619 +0x23f:  movl   $&_ZZN23Dispatcher_MailBox_Send4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cc621 +0x247:  movl   $0x2321,(%esp)
081cc628 +0x24e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cc62d +0x253:  jmp    081cc634 <+0x25a>
081cc62f +0x255:  mov    $0x0,%eax
081cc634 +0x25a:  leave
081cc635 +0x25b:  ret
```

## 反编译 C

```c
// Dispatcher_MailBox_Send::read @ 0x81cc3da

/* Dispatcher_MailBox_Send::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_MailBox_Send::read(Dispatcher_MailBox_Send *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar2 == '\x01') {
    cVar2 = PacketBuf::get_str(param_1,(char *)(param_2 + 0x11),0x1d,*(int *)(param_2 + 0xd));
    if ((((cVar2 == '\x01') &&
         (cVar2 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x2e)), cVar2 == '\x01')) &&
        (cVar2 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x36)), cVar2 == '\x01')) &&
       (((cVar2 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x37)), cVar2 == '\x01' &&
         (cVar2 = PacketBuf::get_int(param_1,(ulong *)(param_2 + 0x39)), cVar2 == '\x01')) &&
        (cVar2 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x3d)), cVar2 == '\x01')))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = LineFunc(0x2315,"virtual int Dispatcher_MailBox_Send::read(PacketBuf&, MSG_BASE&)",0,0
                      );
    }
    else {
      *(undefined4 *)(param_2 + 0x41) = 0;
      *(undefined4 *)(param_2 + 0x32) = 0;
      memset(param_2 + 0x45,0,0x100);
      cVar2 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x41));
      if (cVar2 == '\x01') {
        cVar2 = PacketBuf::get_str(param_1,(char *)(param_2 + 0x45),0x100,*(int *)(param_2 + 0x41));
        if (cVar2 == '\x01') {
          cVar2 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x32));
          if (cVar2 == '\x01') {
            uVar3 = 0;
          }
          else {
            uVar3 = LineFunc(0x2321,
                             "virtual int Dispatcher_MailBox_Send::read(PacketBuf&, MSG_BASE&)",0,0)
            ;
          }
        }
        else {
          uVar3 = LineFunc(0x231e,"virtual int Dispatcher_MailBox_Send::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
        }
      }
      else {
        uVar3 = LineFunc(0x231b,"virtual int Dispatcher_MailBox_Send::read(PacketBuf&, MSG_BASE&)",0
                         ,0);
      }
    }
    return uVar3;
  }
  uVar3 = LineFunc(0x2309,"virtual int Dispatcher_MailBox_Send::read(PacketBuf&, MSG_BASE&)",0,0);
  return uVar3;
}
```
