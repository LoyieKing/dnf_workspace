# read

`_ZN26Dispatcher_CeraPackageOpen4readER9PacketBufR8MSG_BASE`

`Dispatcher_CeraPackageOpen::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CeraPackageOpen` | `0x081e76fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e76fa  _ZN26Dispatcher_CeraPackageOpen4readER9PacketBufR8MSG_BASE
#           Dispatcher_CeraPackageOpen::read(PacketBuf&, MSG_BASE&)
# range [0x081e76fa, 0x081e7889]
081e76fa +0x000:  push   %ebp
081e76fb +0x001:  mov    %esp,%ebp
081e76fd +0x003:  sub    $0x28,%esp
081e7700 +0x006:  mov    0x10(%ebp),%eax
081e7703 +0x009:  mov    %eax,-0x10(%ebp)
081e7706 +0x00c:  mov    -0x10(%ebp),%eax
081e7709 +0x00f:  add    $0xe,%eax
081e770c +0x012:  mov    %eax,0x4(%esp)
081e7710 +0x016:  mov    0xc(%ebp),%eax
081e7713 +0x019:  mov    %eax,(%esp)
081e7716 +0x01c:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081e771b +0x021:  xor    $0x1,%eax
081e771e +0x024:  test   %al,%al
081e7720 +0x026:  je     081e774b <+0x51>
081e7722 +0x028:  movl   $0x0,0xc(%esp)
081e772a +0x030:  movl   $0x0,0x8(%esp)
081e7732 +0x038:  movl   $&_ZZN26Dispatcher_CeraPackageOpen4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e773a +0x040:  movl   $0x636b,(%esp)
081e7741 +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e7746 +0x04c:  jmp    081e7887 <+0x18d>
081e774b +0x051:  mov    -0x10(%ebp),%eax
081e774e +0x054:  add    $0x10,%eax
081e7751 +0x057:  mov    %eax,0x4(%esp)
081e7755 +0x05b:  mov    0xc(%ebp),%eax
081e7758 +0x05e:  mov    %eax,(%esp)
081e775b +0x061:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081e7760 +0x066:  xor    $0x1,%eax
081e7763 +0x069:  test   %al,%al
081e7765 +0x06b:  je     081e7790 <+0x96>
081e7767 +0x06d:  movl   $0x0,0xc(%esp)
081e776f +0x075:  movl   $0x0,0x8(%esp)
081e7777 +0x07d:  movl   $&_ZZN26Dispatcher_CeraPackageOpen4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e777f +0x085:  movl   $0x636e,(%esp)
081e7786 +0x08c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e778b +0x091:  jmp    081e7887 <+0x18d>
081e7790 +0x096:  mov    -0x10(%ebp),%eax
081e7793 +0x099:  movzbl 0x10(%eax),%eax
081e7797 +0x09d:  cmp    $0x23,%al
081e7799 +0x09f:  jbe    081e77c4 <+0xca>
081e779b +0x0a1:  movl   $0x0,0xc(%esp)
081e77a3 +0x0a9:  movl   $0x0,0x8(%esp)
081e77ab +0x0b1:  movl   $&_ZZN26Dispatcher_CeraPackageOpen4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e77b3 +0x0b9:  movl   $0x6371,(%esp)
081e77ba +0x0c0:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e77bf +0x0c5:  jmp    081e7887 <+0x18d>
081e77c4 +0x0ca:  movl   $0x0,-0xc(%ebp)
081e77cb +0x0d1:  jmp    081e786a <+0x170>
081e77d0 +0x0d6:  mov    -0xc(%ebp),%eax
081e77d3 +0x0d9:  add    $0x2,%eax
081e77d6 +0x0dc:  shl    $0x3,%eax
081e77d9 +0x0df:  add    -0x10(%ebp),%eax
081e77dc +0x0e2:  add    $0x4,%eax
081e77df +0x0e5:  mov    %eax,0x4(%esp)
081e77e3 +0x0e9:  mov    0xc(%ebp),%eax
081e77e6 +0x0ec:  mov    %eax,(%esp)
081e77e9 +0x0ef:  call   0858d27e <_ZN9PacketBuf7get_intERm>  ; PacketBuf::get_int(unsigned long&)
081e77ee +0x0f4:  xor    $0x1,%eax
081e77f1 +0x0f7:  test   %al,%al
081e77f3 +0x0f9:  je     081e781b <+0x121>
081e77f5 +0x0fb:  movl   $0x0,0xc(%esp)
081e77fd +0x103:  movl   $0x0,0x8(%esp)
081e7805 +0x10b:  movl   $&_ZZN26Dispatcher_CeraPackageOpen4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e780d +0x113:  movl   $0x6376,(%esp)
081e7814 +0x11a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e7819 +0x11f:  jmp    081e7887 <+0x18d>
081e781b +0x121:  mov    -0xc(%ebp),%eax
081e781e +0x124:  add    $0x2,%eax
081e7821 +0x127:  shl    $0x3,%eax
081e7824 +0x12a:  add    -0x10(%ebp),%eax
081e7827 +0x12d:  add    $0x8,%eax
081e782a +0x130:  mov    %eax,0x4(%esp)
081e782e +0x134:  mov    0xc(%ebp),%eax
081e7831 +0x137:  mov    %eax,(%esp)
081e7834 +0x13a:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081e7839 +0x13f:  xor    $0x1,%eax
081e783c +0x142:  test   %al,%al
081e783e +0x144:  je     081e7866 <+0x16c>
081e7840 +0x146:  movl   $0x0,0xc(%esp)
081e7848 +0x14e:  movl   $0x0,0x8(%esp)
081e7850 +0x156:  movl   $&_ZZN26Dispatcher_CeraPackageOpen4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e7858 +0x15e:  movl   $0x6379,(%esp)
081e785f +0x165:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e7864 +0x16a:  jmp    081e7887 <+0x18d>
081e7866 +0x16c:  addl   $0x1,-0xc(%ebp)
081e786a +0x170:  mov    -0x10(%ebp),%eax
081e786d +0x173:  movzbl 0x10(%eax),%eax
081e7871 +0x177:  movzbl %al,%eax
081e7874 +0x17a:  cmp    -0xc(%ebp),%eax
081e7877 +0x17d:  seta   %al
081e787a +0x180:  test   %al,%al
081e787c +0x182:  jne    081e77d0 <+0xd6>
081e7882 +0x188:  mov    $0x0,%eax
081e7887 +0x18d:  leave
081e7888 +0x18e:  ret
081e7889 +0x18f:  nop
```

## 反编译 C

```c
// Dispatcher_CeraPackageOpen::read @ 0x81e76fa

/* Dispatcher_CeraPackageOpen::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_CeraPackageOpen::read
          (Dispatcher_CeraPackageOpen *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint local_10;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xe));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x10));
    if (cVar1 == '\x01') {
      if ((byte)param_2[0x10] < 0x24) {
        for (local_10 = 0; local_10 < (byte)param_2[0x10]; local_10 = local_10 + 1) {
          cVar1 = PacketBuf::get_int(param_1,(ulong *)(param_2 + (local_10 + 2) * 8 + 4));
          if (cVar1 != '\x01') {
            uVar2 = LineFunc(0x6376,
                             "virtual int Dispatcher_CeraPackageOpen::read(PacketBuf&, MSG_BASE&)",0
                             ,0);
            return uVar2;
          }
          cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + (local_10 + 2) * 8 + 8));
          if (cVar1 != '\x01') {
            uVar2 = LineFunc(0x6379,
                             "virtual int Dispatcher_CeraPackageOpen::read(PacketBuf&, MSG_BASE&)",0
                             ,0);
            return uVar2;
          }
        }
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x6371,
                         "virtual int Dispatcher_CeraPackageOpen::read(PacketBuf&, MSG_BASE&)",0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x636e,"virtual int Dispatcher_CeraPackageOpen::read(PacketBuf&, MSG_BASE&)",
                       0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x636b,"virtual int Dispatcher_CeraPackageOpen::read(PacketBuf&, MSG_BASE&)",0,
                     0);
  }
  return uVar2;
}
```
