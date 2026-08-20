# finalize

`_ZN9PacketBuf8finalizeEb`

`PacketBuf::finalize(bool)`

| 类 | 地址 |
|---|---|
| `PacketBuf` | `0x0858d548` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858d548  _ZN9PacketBuf8finalizeEb
#           PacketBuf::finalize(bool)
# range [0x0858d548, 0x0858d869]
0858d548 +0x000:  push   %ebp
0858d549 +0x001:  mov    %esp,%ebp
0858d54b +0x003:  sub    $0x48,%esp
0858d54e +0x006:  mov    0xc(%ebp),%eax
0858d551 +0x009:  mov    %al,-0x1c(%ebp)
0858d554 +0x00c:  mov    0x8(%ebp),%eax
0858d557 +0x00f:  movzbl -0x1c(%ebp),%edx
0858d55b +0x013:  mov    %dl,&_ZL14gUnicodeBuffer+0xce04(%eax)
0858d561 +0x019:  mov    0x8(%ebp),%eax
0858d564 +0x01c:  mov    %eax,(%esp)
0858d567 +0x01f:  call   082746f3 <_Z20_NS_PI_MakeHash_NOTIP9PacketBuf>  ; _NS_PI_MakeHash_NOTI(PacketBuf*)
0858d56c +0x024:  mov    0x8(%ebp),%eax
0858d56f +0x027:  mov    0x4(%eax),%edx
0858d572 +0x02a:  mov    0x8(%ebp),%eax
0858d575 +0x02d:  mov    %edx,0x8(%eax)
0858d578 +0x030:  mov    0x8(%ebp),%eax
0858d57b +0x033:  mov    0x8(%eax),%eax
0858d57e +0x036:  lea    -0xf(%eax),%edx
0858d581 +0x039:  mov    0x8(%ebp),%eax
0858d584 +0x03c:  mov    0x14(%eax),%eax
0858d587 +0x03f:  add    $0xf,%eax
0858d58a +0x042:  mov    %edx,0x4(%esp)
0858d58e +0x046:  mov    %eax,(%esp)
0858d591 +0x049:  call   0848d4c8 <_ZN10Encryption6crc32NEPvi>  ; Encryption::crc32N(void*, int)
0858d596 +0x04e:  mov    %eax,-0x10(%ebp)
0858d599 +0x051:  mov    0x8(%ebp),%eax
0858d59c +0x054:  mov    (%eax),%eax
0858d59e +0x056:  test   %eax,%eax
0858d5a0 +0x058:  je     0858d5ac <+0x64>
0858d5a2 +0x05a:  cmp    $0x1,%eax
0858d5a5 +0x05d:  je     0858d608 <+0xc0>
0858d5a7 +0x05f:  jmp    0858d661 <+0x119>
0858d5ac +0x064:  mov    0x8(%ebp),%eax
0858d5af +0x067:  mov    0x14(%eax),%eax
0858d5b2 +0x06a:  lea    0x3(%eax),%edx
0858d5b5 +0x06d:  mov    0x8(%ebp),%eax
0858d5b8 +0x070:  mov    0x8(%eax),%eax
0858d5bb +0x073:  mov    %al,(%edx)
0858d5bd +0x075:  mov    0x8(%ebp),%eax
0858d5c0 +0x078:  mov    0x14(%eax),%eax
0858d5c3 +0x07b:  lea    0x4(%eax),%edx
0858d5c6 +0x07e:  mov    0x8(%ebp),%eax
0858d5c9 +0x081:  mov    0x8(%eax),%eax
0858d5cc +0x084:  and    $0xff00,%eax
0858d5d1 +0x089:  sar    $0x8,%eax
0858d5d4 +0x08c:  mov    %al,(%edx)
0858d5d6 +0x08e:  mov    0x8(%ebp),%eax
0858d5d9 +0x091:  mov    0x14(%eax),%eax
0858d5dc +0x094:  lea    0x5(%eax),%edx
0858d5df +0x097:  mov    0x8(%ebp),%eax
0858d5e2 +0x09a:  mov    0x8(%eax),%eax
0858d5e5 +0x09d:  and    $0xff0000,%eax
0858d5ea +0x0a2:  sar    $0x10,%eax
0858d5ed +0x0a5:  mov    %al,(%edx)
0858d5ef +0x0a7:  mov    0x8(%ebp),%eax
0858d5f2 +0x0aa:  mov    0x14(%eax),%eax
0858d5f5 +0x0ad:  lea    0x6(%eax),%edx
0858d5f8 +0x0b0:  mov    0x8(%ebp),%eax
0858d5fb +0x0b3:  mov    0x8(%eax),%eax
0858d5fe +0x0b6:  shr    $0x18,%eax
0858d601 +0x0b9:  mov    %al,(%edx)
0858d603 +0x0bb:  jmp    0858d69b <+0x153>
0858d608 +0x0c0:  mov    0x8(%ebp),%eax
0858d60b +0x0c3:  mov    0x14(%eax),%eax
0858d60e +0x0c6:  lea    0x3(%eax),%edx
0858d611 +0x0c9:  mov    0x8(%ebp),%eax
0858d614 +0x0cc:  mov    0x8(%eax),%eax
0858d617 +0x0cf:  shr    $0x18,%eax
0858d61a +0x0d2:  mov    %al,(%edx)
0858d61c +0x0d4:  mov    0x8(%ebp),%eax
0858d61f +0x0d7:  mov    0x14(%eax),%eax
0858d622 +0x0da:  lea    0x4(%eax),%edx
0858d625 +0x0dd:  mov    0x8(%ebp),%eax
0858d628 +0x0e0:  mov    0x8(%eax),%eax
0858d62b +0x0e3:  and    $0xff0000,%eax
0858d630 +0x0e8:  sar    $0x10,%eax
0858d633 +0x0eb:  mov    %al,(%edx)
0858d635 +0x0ed:  mov    0x8(%ebp),%eax
0858d638 +0x0f0:  mov    0x14(%eax),%eax
0858d63b +0x0f3:  lea    0x5(%eax),%edx
0858d63e +0x0f6:  mov    0x8(%ebp),%eax
0858d641 +0x0f9:  mov    0x8(%eax),%eax
0858d644 +0x0fc:  and    $0xff00,%eax
0858d649 +0x101:  sar    $0x8,%eax
0858d64c +0x104:  mov    %al,(%edx)
0858d64e +0x106:  mov    0x8(%ebp),%eax
0858d651 +0x109:  mov    0x14(%eax),%eax
0858d654 +0x10c:  lea    0x6(%eax),%edx
0858d657 +0x10f:  mov    0x8(%ebp),%eax
0858d65a +0x112:  mov    0x8(%eax),%eax
0858d65d +0x115:  mov    %al,(%edx)
0858d65f +0x117:  jmp    0858d69b <+0x153>
0858d661 +0x119:  mov    0x8(%ebp),%eax
0858d664 +0x11c:  mov    (%eax),%eax
0858d666 +0x11e:  mov    %eax,0x14(%esp)
0858d66a +0x122:  movl   $"m_byte_encoding error %d",0x10(%esp)
0858d672 +0x12a:  movl   $0x2c4,0xc(%esp)
0858d67a +0x132:  movl   $&_ZZN9PacketBuf8finalizeEbE19__PRETTY_FUNCTION__,0x8(%esp)
0858d682 +0x13a:  movl   $"packet_buf.cpp",0x4(%esp)
0858d68a +0x142:  movl   $0x1,(%esp)
0858d691 +0x149:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0858d696 +0x14e:  jmp    0858d868 <+0x320>
0858d69b +0x153:  mov    0x8(%ebp),%eax
0858d69e +0x156:  mov    0x14(%eax),%eax
0858d6a1 +0x159:  add    $0x1,%eax
0858d6a4 +0x15c:  mov    %eax,0x4(%esp)
0858d6a8 +0x160:  mov    0x8(%ebp),%eax
0858d6ab +0x163:  mov    %eax,(%esp)
0858d6ae +0x166:  call   0858e248 <_GLOBAL__I__ZN9PacketBufC2Ev+0x1d>  ; global constructors keyed to PacketBuf::PacketBuf()+0x1d
0858d6b3 +0x16b:  test   %al,%al
0858d6b5 +0x16d:  je     0858d6cd <+0x185>
0858d6b7 +0x16f:  mov    0x8(%ebp),%eax
0858d6ba +0x172:  mov    %eax,(%esp)
0858d6bd +0x175:  call   0858daa2 <_ZN9PacketBuf15compress_packetEv>  ; PacketBuf::compress_packet()
0858d6c2 +0x17a:  xor    $0x1,%eax
0858d6c5 +0x17d:  test   %al,%al
0858d6c7 +0x17f:  jne    0858d867 <+0x31f>
0858d6cd +0x185:  mov    0x8(%ebp),%eax
0858d6d0 +0x188:  mov    0x8(%eax),%eax
0858d6d3 +0x18b:  lea    -0xf(%eax),%edx
0858d6d6 +0x18e:  mov    0x8(%ebp),%eax
0858d6d9 +0x191:  mov    0x14(%eax),%eax
0858d6dc +0x194:  add    $0xf,%eax
0858d6df +0x197:  mov    %edx,0x4(%esp)
0858d6e3 +0x19b:  mov    %eax,(%esp)
0858d6e6 +0x19e:  call   0848d4c8 <_ZN10Encryption6crc32NEPvi>  ; Encryption::crc32N(void*, int)
0858d6eb +0x1a3:  mov    %eax,-0xc(%ebp)
0858d6ee +0x1a6:  mov    0x8(%ebp),%eax
0858d6f1 +0x1a9:  mov    (%eax),%eax
0858d6f3 +0x1ab:  test   %eax,%eax
0858d6f5 +0x1ad:  je     0858d705 <+0x1bd>
0858d6f7 +0x1af:  cmp    $0x1,%eax
0858d6fa +0x1b2:  je     0858d7a0 <+0x258>
0858d700 +0x1b8:  jmp    0858d827 <+0x2df>
0858d705 +0x1bd:  mov    0x8(%ebp),%eax
0858d708 +0x1c0:  mov    0x14(%eax),%eax
0858d70b +0x1c3:  lea    0x7(%eax),%edx
0858d70e +0x1c6:  mov    -0x10(%ebp),%eax
0858d711 +0x1c9:  mov    %al,(%edx)
0858d713 +0x1cb:  mov    0x8(%ebp),%eax
0858d716 +0x1ce:  mov    0x14(%eax),%eax
0858d719 +0x1d1:  lea    0x8(%eax),%edx
0858d71c +0x1d4:  mov    -0x10(%ebp),%eax
0858d71f +0x1d7:  and    $0xff00,%eax
0858d724 +0x1dc:  shr    $0x8,%eax
0858d727 +0x1df:  mov    %al,(%edx)
0858d729 +0x1e1:  mov    0x8(%ebp),%eax
0858d72c +0x1e4:  mov    0x14(%eax),%eax
0858d72f +0x1e7:  lea    0x9(%eax),%edx
0858d732 +0x1ea:  mov    -0x10(%ebp),%eax
0858d735 +0x1ed:  and    $0xff0000,%eax
0858d73a +0x1f2:  shr    $0x10,%eax
0858d73d +0x1f5:  mov    %al,(%edx)
0858d73f +0x1f7:  mov    0x8(%ebp),%eax
0858d742 +0x1fa:  mov    0x14(%eax),%eax
0858d745 +0x1fd:  lea    0xa(%eax),%edx
0858d748 +0x200:  mov    -0x10(%ebp),%eax
0858d74b +0x203:  shr    $0x18,%eax
0858d74e +0x206:  mov    %al,(%edx)
0858d750 +0x208:  mov    0x8(%ebp),%eax
0858d753 +0x20b:  mov    0x14(%eax),%eax
0858d756 +0x20e:  lea    0xb(%eax),%edx
0858d759 +0x211:  mov    -0xc(%ebp),%eax
0858d75c +0x214:  mov    %al,(%edx)
0858d75e +0x216:  mov    0x8(%ebp),%eax
0858d761 +0x219:  mov    0x14(%eax),%eax
0858d764 +0x21c:  lea    0xc(%eax),%edx
0858d767 +0x21f:  mov    -0xc(%ebp),%eax
0858d76a +0x222:  and    $0xff00,%eax
0858d76f +0x227:  shr    $0x8,%eax
0858d772 +0x22a:  mov    %al,(%edx)
0858d774 +0x22c:  mov    0x8(%ebp),%eax
0858d777 +0x22f:  mov    0x14(%eax),%eax
0858d77a +0x232:  lea    0xd(%eax),%edx
0858d77d +0x235:  mov    -0xc(%ebp),%eax
0858d780 +0x238:  and    $0xff0000,%eax
0858d785 +0x23d:  shr    $0x10,%eax
0858d788 +0x240:  mov    %al,(%edx)
0858d78a +0x242:  mov    0x8(%ebp),%eax
0858d78d +0x245:  mov    0x14(%eax),%eax
0858d790 +0x248:  lea    0xe(%eax),%edx
0858d793 +0x24b:  mov    -0xc(%ebp),%eax
0858d796 +0x24e:  shr    $0x18,%eax
0858d799 +0x251:  mov    %al,(%edx)
0858d79b +0x253:  jmp    0858d85e <+0x316>
0858d7a0 +0x258:  mov    0x8(%ebp),%eax
0858d7a3 +0x25b:  mov    0x14(%eax),%eax
0858d7a6 +0x25e:  lea    0x7(%eax),%edx
0858d7a9 +0x261:  mov    -0x10(%ebp),%eax
0858d7ac +0x264:  shr    $0x18,%eax
0858d7af +0x267:  mov    %al,(%edx)
0858d7b1 +0x269:  mov    0x8(%ebp),%eax
0858d7b4 +0x26c:  mov    0x14(%eax),%eax
0858d7b7 +0x26f:  lea    0x8(%eax),%edx
0858d7ba +0x272:  mov    -0x10(%ebp),%eax
0858d7bd +0x275:  and    $0xff0000,%eax
0858d7c2 +0x27a:  shr    $0x10,%eax
0858d7c5 +0x27d:  mov    %al,(%edx)
0858d7c7 +0x27f:  mov    0x8(%ebp),%eax
0858d7ca +0x282:  mov    0x14(%eax),%eax
0858d7cd +0x285:  lea    0x9(%eax),%edx
0858d7d0 +0x288:  mov    -0x10(%ebp),%eax
0858d7d3 +0x28b:  and    $0xff00,%eax
0858d7d8 +0x290:  shr    $0x8,%eax
0858d7db +0x293:  mov    %al,(%edx)
0858d7dd +0x295:  mov    0x8(%ebp),%eax
0858d7e0 +0x298:  mov    0x14(%eax),%eax
0858d7e3 +0x29b:  lea    0xa(%eax),%edx
0858d7e6 +0x29e:  mov    -0x10(%ebp),%eax
0858d7e9 +0x2a1:  mov    %al,(%edx)
0858d7eb +0x2a3:  mov    0x8(%ebp),%eax
0858d7ee +0x2a6:  mov    0x14(%eax),%eax
0858d7f1 +0x2a9:  add    $0xb,%eax
0858d7f4 +0x2ac:  movb   $0x0,(%eax)
0858d7f7 +0x2af:  mov    0x8(%ebp),%eax
0858d7fa +0x2b2:  mov    0x14(%eax),%eax
0858d7fd +0x2b5:  add    $0xc,%eax
0858d800 +0x2b8:  movb   $0x0,(%eax)
0858d803 +0x2bb:  mov    0x8(%ebp),%eax
0858d806 +0x2be:  mov    0x14(%eax),%eax
0858d809 +0x2c1:  lea    0xd(%eax),%edx
0858d80c +0x2c4:  mov    -0xc(%ebp),%eax
0858d80f +0x2c7:  and    $0xff0000,%eax
0858d814 +0x2cc:  shr    $0x8,%eax
0858d817 +0x2cf:  mov    %al,(%edx)
0858d819 +0x2d1:  mov    0x8(%ebp),%eax
0858d81c +0x2d4:  mov    0x14(%eax),%eax
0858d81f +0x2d7:  add    $0xe,%eax
0858d822 +0x2da:  movb   $0x0,(%eax)
0858d825 +0x2dd:  jmp    0858d85e <+0x316>
0858d827 +0x2df:  mov    0x8(%ebp),%eax
0858d82a +0x2e2:  mov    (%eax),%eax
0858d82c +0x2e4:  mov    %eax,0x14(%esp)
0858d830 +0x2e8:  movl   $"m_byte_encoding error %d",0x10(%esp)
0858d838 +0x2f0:  movl   $0x2ec,0xc(%esp)
0858d840 +0x2f8:  movl   $&_ZZN9PacketBuf8finalizeEbE19__PRETTY_FUNCTION__,0x8(%esp)
0858d848 +0x300:  movl   $"packet_buf.cpp",0x4(%esp)
0858d850 +0x308:  movl   $0x1,(%esp)
0858d857 +0x30f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0858d85c +0x314:  jmp    0858d868 <+0x320>
0858d85e +0x316:  mov    0x8(%ebp),%eax
0858d861 +0x319:  movb   $0x1,0xc(%eax)
0858d865 +0x31d:  jmp    0858d868 <+0x320>
0858d867 +0x31f:  nop
0858d868 +0x320:  leave
0858d869 +0x321:  ret
```

## 反编译 C

```c
// PacketBuf::finalize @ 0x858d548

/* PacketBuf::finalize(bool) */

void __thiscall PacketBuf::finalize(PacketBuf *this,bool param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  this[0x17330] = (PacketBuf)param_1;
  _NS_PI_MakeHash_NOTI(this);
  *(undefined4 *)(this + 8) = *(undefined4 *)(this + 4);
  uVar5 = Encryption::crc32N((void *)(*(int *)(this + 0x14) + 0xf),*(int *)(this + 8) + -0xf);
  if (*(int *)this == 0) {
    *(char *)(*(int *)(this + 0x14) + 3) = (char)*(undefined4 *)(this + 8);
    *(char *)(*(int *)(this + 0x14) + 4) = (char)((uint)*(undefined4 *)(this + 8) >> 8);
    *(char *)(*(int *)(this + 0x14) + 5) = (char)((uint)*(undefined4 *)(this + 8) >> 0x10);
    *(char *)(*(int *)(this + 0x14) + 6) = (char)((uint)*(undefined4 *)(this + 8) >> 0x18);
  }
  else {
    if (*(int *)this != 1) {
      LogManager::logFormat
                (1,"packet_buf.cpp","void PacketBuf::finalize(bool)",0x2c4,
                 "m_byte_encoding error %d",*(undefined4 *)this);
      return;
    }
    *(char *)(*(int *)(this + 0x14) + 3) = (char)((uint)*(undefined4 *)(this + 8) >> 0x18);
    *(char *)(*(int *)(this + 0x14) + 4) = (char)((uint)*(undefined4 *)(this + 8) >> 0x10);
    *(char *)(*(int *)(this + 0x14) + 5) = (char)((uint)*(undefined4 *)(this + 8) >> 8);
    *(char *)(*(int *)(this + 0x14) + 6) = (char)*(undefined4 *)(this + 8);
  }
  cVar3 = isCompressRequired(this,(char *)(*(int *)(this + 0x14) + 1));
  if ((cVar3 != '\0') && (cVar3 = compress_packet(this), cVar3 != '\x01')) {
    return;
  }
  uVar6 = Encryption::crc32N((void *)(*(int *)(this + 0x14) + 0xf),*(int *)(this + 8) + -0xf);
  uVar1 = (undefined1)((uint)uVar5 >> 8);
  uVar2 = (undefined1)((uint)uVar5 >> 0x10);
  uVar4 = (undefined1)((uint)uVar5 >> 0x18);
  if (*(int *)this == 0) {
    *(char *)(*(int *)(this + 0x14) + 7) = (char)uVar5;
    *(undefined1 *)(*(int *)(this + 0x14) + 8) = uVar1;
    *(undefined1 *)(*(int *)(this + 0x14) + 9) = uVar2;
    *(undefined1 *)(*(int *)(this + 0x14) + 10) = uVar4;
    *(char *)(*(int *)(this + 0x14) + 0xb) = (char)uVar6;
    *(char *)(*(int *)(this + 0x14) + 0xc) = (char)((uint)uVar6 >> 8);
    *(char *)(*(int *)(this + 0x14) + 0xd) = (char)((uint)uVar6 >> 0x10);
    *(char *)(*(int *)(this + 0x14) + 0xe) = (char)((uint)uVar6 >> 0x18);
  }
  else {
    if (*(int *)this != 1) {
      LogManager::logFormat
                (1,"packet_buf.cpp","void PacketBuf::finalize(bool)",0x2ec,
                 "m_byte_encoding error %d",*(undefined4 *)this);
      return;
    }
    *(undefined1 *)(*(int *)(this + 0x14) + 7) = uVar4;
    *(undefined1 *)(*(int *)(this + 0x14) + 8) = uVar2;
    *(undefined1 *)(*(int *)(this + 0x14) + 9) = uVar1;
    *(char *)(*(int *)(this + 0x14) + 10) = (char)uVar5;
    *(undefined1 *)(*(int *)(this + 0x14) + 0xb) = 0;
    *(undefined1 *)(*(int *)(this + 0x14) + 0xc) = 0;
    *(undefined1 *)(*(int *)(this + 0x14) + 0xd) = 0;
    *(undefined1 *)(*(int *)(this + 0x14) + 0xe) = 0;
  }
  this[0xc] = (PacketBuf)0x1;
  return;
}
```
