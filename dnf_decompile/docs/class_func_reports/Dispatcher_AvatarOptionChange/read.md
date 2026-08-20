# read

`_ZN29Dispatcher_AvatarOptionChange4readER9PacketBufR8MSG_BASE`

`Dispatcher_AvatarOptionChange::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_AvatarOptionChange` | `0x081e04f2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e04f2  _ZN29Dispatcher_AvatarOptionChange4readER9PacketBufR8MSG_BASE
#           Dispatcher_AvatarOptionChange::read(PacketBuf&, MSG_BASE&)
# range [0x081e04f2, 0x081e0773]
081e04f2 +0x000:  push   %ebp
081e04f3 +0x001:  mov    %esp,%ebp
081e04f5 +0x003:  sub    $0x28,%esp
081e04f8 +0x006:  mov    0x10(%ebp),%eax
081e04fb +0x009:  mov    %eax,-0xc(%ebp)
081e04fe +0x00c:  mov    -0xc(%ebp),%eax
081e0501 +0x00f:  add    $0xd,%eax
081e0504 +0x012:  mov    %eax,0x4(%esp)
081e0508 +0x016:  mov    0xc(%ebp),%eax
081e050b +0x019:  mov    %eax,(%esp)
081e050e +0x01c:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081e0513 +0x021:  xor    $0x1,%eax
081e0516 +0x024:  test   %al,%al
081e0518 +0x026:  je     081e0543 <+0x51>
081e051a +0x028:  movl   $0x0,0xc(%esp)
081e0522 +0x030:  movl   $0x0,0x8(%esp)
081e052a +0x038:  movl   $&_ZZN29Dispatcher_AvatarOptionChange4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e0532 +0x040:  movl   $0x5380,(%esp)
081e0539 +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e053e +0x04c:  jmp    081e0771 <+0x27f>
081e0543 +0x051:  mov    -0xc(%ebp),%eax
081e0546 +0x054:  movzwl 0xd(%eax),%eax
081e054a +0x058:  test   %ax,%ax
081e054d +0x05b:  js     081e055c <+0x6a>
081e054f +0x05d:  mov    -0xc(%ebp),%eax
081e0552 +0x060:  movzwl 0xd(%eax),%eax
081e0556 +0x064:  cmp    $0x137,%ax
081e055a +0x068:  jle    081e0585 <+0x93>
081e055c +0x06a:  movl   $0x0,0xc(%esp)
081e0564 +0x072:  movl   $0x0,0x8(%esp)
081e056c +0x07a:  movl   $&_ZZN29Dispatcher_AvatarOptionChange4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e0574 +0x082:  movl   $0x5383,(%esp)
081e057b +0x089:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e0580 +0x08e:  jmp    081e0771 <+0x27f>
081e0585 +0x093:  mov    -0xc(%ebp),%eax
081e0588 +0x096:  add    $0xf,%eax
081e058b +0x099:  mov    %eax,0x4(%esp)
081e058f +0x09d:  mov    0xc(%ebp),%eax
081e0592 +0x0a0:  mov    %eax,(%esp)
081e0595 +0x0a3:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081e059a +0x0a8:  xor    $0x1,%eax
081e059d +0x0ab:  test   %al,%al
081e059f +0x0ad:  je     081e05ca <+0xd8>
081e05a1 +0x0af:  movl   $0x0,0xc(%esp)
081e05a9 +0x0b7:  movl   $0x0,0x8(%esp)
081e05b1 +0x0bf:  movl   $&_ZZN29Dispatcher_AvatarOptionChange4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e05b9 +0x0c7:  movl   $0x5386,(%esp)
081e05c0 +0x0ce:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e05c5 +0x0d3:  jmp    081e0771 <+0x27f>
081e05ca +0x0d8:  mov    -0xc(%ebp),%eax
081e05cd +0x0db:  mov    0xf(%eax),%eax
081e05d0 +0x0de:  test   %eax,%eax
081e05d2 +0x0e0:  jns    081e05fd <+0x10b>
081e05d4 +0x0e2:  movl   $0x0,0xc(%esp)
081e05dc +0x0ea:  movl   $0x0,0x8(%esp)
081e05e4 +0x0f2:  movl   $&_ZZN29Dispatcher_AvatarOptionChange4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e05ec +0x0fa:  movl   $0x5389,(%esp)
081e05f3 +0x101:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e05f8 +0x106:  jmp    081e0771 <+0x27f>
081e05fd +0x10b:  mov    -0xc(%ebp),%eax
081e0600 +0x10e:  add    $0x13,%eax
081e0603 +0x111:  mov    %eax,0x4(%esp)
081e0607 +0x115:  mov    0xc(%ebp),%eax
081e060a +0x118:  mov    %eax,(%esp)
081e060d +0x11b:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081e0612 +0x120:  xor    $0x1,%eax
081e0615 +0x123:  test   %al,%al
081e0617 +0x125:  je     081e0642 <+0x150>
081e0619 +0x127:  movl   $0x0,0xc(%esp)
081e0621 +0x12f:  movl   $0x0,0x8(%esp)
081e0629 +0x137:  movl   $&_ZZN29Dispatcher_AvatarOptionChange4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e0631 +0x13f:  movl   $0x538c,(%esp)
081e0638 +0x146:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e063d +0x14b:  jmp    081e0771 <+0x27f>
081e0642 +0x150:  mov    -0xc(%ebp),%eax
081e0645 +0x153:  movzwl 0x13(%eax),%eax
081e0649 +0x157:  test   %ax,%ax
081e064c +0x15a:  js     081e065b <+0x169>
081e064e +0x15c:  mov    -0xc(%ebp),%eax
081e0651 +0x15f:  movzwl 0x13(%eax),%eax
081e0655 +0x163:  cmp    $0x68,%ax
081e0659 +0x167:  jle    081e0684 <+0x192>
081e065b +0x169:  movl   $0x0,0xc(%esp)
081e0663 +0x171:  movl   $0x0,0x8(%esp)
081e066b +0x179:  movl   $&_ZZN29Dispatcher_AvatarOptionChange4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e0673 +0x181:  movl   $0x5390,(%esp)
081e067a +0x188:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e067f +0x18d:  jmp    081e0771 <+0x27f>
081e0684 +0x192:  mov    -0xc(%ebp),%eax
081e0687 +0x195:  add    $0x15,%eax
081e068a +0x198:  mov    %eax,0x4(%esp)
081e068e +0x19c:  mov    0xc(%ebp),%eax
081e0691 +0x19f:  mov    %eax,(%esp)
081e0694 +0x1a2:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081e0699 +0x1a7:  xor    $0x1,%eax
081e069c +0x1aa:  test   %al,%al
081e069e +0x1ac:  je     081e06c9 <+0x1d7>
081e06a0 +0x1ae:  movl   $0x0,0xc(%esp)
081e06a8 +0x1b6:  movl   $0x0,0x8(%esp)
081e06b0 +0x1be:  movl   $&_ZZN29Dispatcher_AvatarOptionChange4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e06b8 +0x1c6:  movl   $0x5393,(%esp)
081e06bf +0x1cd:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e06c4 +0x1d2:  jmp    081e0771 <+0x27f>
081e06c9 +0x1d7:  mov    -0xc(%ebp),%eax
081e06cc +0x1da:  mov    0x15(%eax),%eax
081e06cf +0x1dd:  test   %eax,%eax
081e06d1 +0x1df:  jns    081e06f9 <+0x207>
081e06d3 +0x1e1:  movl   $0x0,0xc(%esp)
081e06db +0x1e9:  movl   $0x0,0x8(%esp)
081e06e3 +0x1f1:  movl   $&_ZZN29Dispatcher_AvatarOptionChange4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e06eb +0x1f9:  movl   $0x5396,(%esp)
081e06f2 +0x200:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e06f7 +0x205:  jmp    081e0771 <+0x27f>
081e06f9 +0x207:  mov    -0xc(%ebp),%eax
081e06fc +0x20a:  add    $0x19,%eax
081e06ff +0x20d:  mov    %eax,0x4(%esp)
081e0703 +0x211:  mov    0xc(%ebp),%eax
081e0706 +0x214:  mov    %eax,(%esp)
081e0709 +0x217:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081e070e +0x21c:  xor    $0x1,%eax
081e0711 +0x21f:  test   %al,%al
081e0713 +0x221:  je     081e073b <+0x249>
081e0715 +0x223:  movl   $0x0,0xc(%esp)
081e071d +0x22b:  movl   $0x0,0x8(%esp)
081e0725 +0x233:  movl   $&_ZZN29Dispatcher_AvatarOptionChange4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e072d +0x23b:  movl   $0x5399,(%esp)
081e0734 +0x242:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e0739 +0x247:  jmp    081e0771 <+0x27f>
081e073b +0x249:  mov    -0xc(%ebp),%eax
081e073e +0x24c:  movzbl 0x19(%eax),%eax
081e0742 +0x250:  test   %al,%al
081e0744 +0x252:  jns    081e076c <+0x27a>
081e0746 +0x254:  movl   $0x0,0xc(%esp)
081e074e +0x25c:  movl   $0x0,0x8(%esp)
081e0756 +0x264:  movl   $&_ZZN29Dispatcher_AvatarOptionChange4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e075e +0x26c:  movl   $0x539c,(%esp)
081e0765 +0x273:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e076a +0x278:  jmp    081e0771 <+0x27f>
081e076c +0x27a:  mov    $0x0,%eax
081e0771 +0x27f:  leave
081e0772 +0x280:  ret
081e0773 +0x281:  nop
```

## 反编译 C

```c
// Dispatcher_AvatarOptionChange::read @ 0x81e04f2

/* Dispatcher_AvatarOptionChange::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_AvatarOptionChange::read
          (Dispatcher_AvatarOptionChange *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    if ((*(short *)(param_2 + 0xd) < 0) || (0x137 < *(short *)(param_2 + 0xd))) {
      uVar2 = LineFunc(0x5383,
                       "virtual int Dispatcher_AvatarOptionChange::read(PacketBuf&, MSG_BASE&)",0,0)
      ;
    }
    else {
      cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xf));
      if (cVar1 == '\x01') {
        if (*(int *)(param_2 + 0xf) < 0) {
          uVar2 = LineFunc(0x5389,
                           "virtual int Dispatcher_AvatarOptionChange::read(PacketBuf&, MSG_BASE&)",
                           0,0);
        }
        else {
          cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x13));
          if (cVar1 == '\x01') {
            if ((*(short *)(param_2 + 0x13) < 0) || (0x68 < *(short *)(param_2 + 0x13))) {
              uVar2 = LineFunc(0x5390,
                               "virtual int Dispatcher_AvatarOptionChange::read(PacketBuf&, MSG_BASE&)"
                               ,0,0);
            }
            else {
              cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x15));
              if (cVar1 == '\x01') {
                if (*(int *)(param_2 + 0x15) < 0) {
                  uVar2 = LineFunc(0x5396,
                                   "virtual int Dispatcher_AvatarOptionChange::read(PacketBuf&, MSG_BASE&)"
                                   ,0,0);
                }
                else {
                  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x19));
                  if (cVar1 == '\x01') {
                    if ((char)param_2[0x19] < '\0') {
                      uVar2 = LineFunc(0x539c,
                                       "virtual int Dispatcher_AvatarOptionChange::read(PacketBuf&, MSG_BASE&)"
                                       ,0,0);
                    }
                    else {
                      uVar2 = 0;
                    }
                  }
                  else {
                    uVar2 = LineFunc(0x5399,
                                     "virtual int Dispatcher_AvatarOptionChange::read(PacketBuf&, MSG_BASE&)"
                                     ,0,0);
                  }
                }
              }
              else {
                uVar2 = LineFunc(0x5393,
                                 "virtual int Dispatcher_AvatarOptionChange::read(PacketBuf&, MSG_BASE&)"
                                 ,0,0);
              }
            }
          }
          else {
            uVar2 = LineFunc(0x538c,
                             "virtual int Dispatcher_AvatarOptionChange::read(PacketBuf&, MSG_BASE&)"
                             ,0,0);
          }
        }
      }
      else {
        uVar2 = LineFunc(0x5386,
                         "virtual int Dispatcher_AvatarOptionChange::read(PacketBuf&, MSG_BASE&)",0,
                         0);
      }
    }
  }
  else {
    uVar2 = LineFunc(0x5380,"virtual int Dispatcher_AvatarOptionChange::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar2;
}
```
