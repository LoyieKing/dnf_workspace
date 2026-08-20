# read

`_ZN19DisPatcher_BuySkill4readER9PacketBufR8MSG_BASE`

`DisPatcher_BuySkill::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_BuySkill` | `0x081bed4a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bed4a  _ZN19DisPatcher_BuySkill4readER9PacketBufR8MSG_BASE
#           DisPatcher_BuySkill::read(PacketBuf&, MSG_BASE&)
# range [0x081bed4a, 0x081befe7]
081bed4a +0x000:  push   %ebp
081bed4b +0x001:  mov    %esp,%ebp
081bed4d +0x003:  sub    $0x28,%esp
081bed50 +0x006:  mov    0x10(%ebp),%eax
081bed53 +0x009:  mov    %eax,-0x10(%ebp)
081bed56 +0x00c:  mov    -0x10(%ebp),%eax
081bed59 +0x00f:  add    $0xd,%eax
081bed5c +0x012:  mov    %eax,0x4(%esp)
081bed60 +0x016:  mov    0xc(%ebp),%eax
081bed63 +0x019:  mov    %eax,(%esp)
081bed66 +0x01c:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081bed6b +0x021:  xor    $0x1,%eax
081bed6e +0x024:  test   %al,%al
081bed70 +0x026:  je     081bed9b <+0x51>
081bed72 +0x028:  movl   $0x0,0xc(%esp)
081bed7a +0x030:  movl   $0x0,0x8(%esp)
081bed82 +0x038:  movl   $&_ZZN19DisPatcher_BuySkill4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081bed8a +0x040:  movl   $0x37b,(%esp)
081bed91 +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081bed96 +0x04c:  jmp    081befe5 <+0x29b>
081bed9b +0x051:  mov    -0x10(%ebp),%eax
081bed9e +0x054:  add    $0xe,%eax
081beda1 +0x057:  mov    %eax,0x4(%esp)
081beda5 +0x05b:  mov    0xc(%ebp),%eax
081beda8 +0x05e:  mov    %eax,(%esp)
081bedab +0x061:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081bedb0 +0x066:  xor    $0x1,%eax
081bedb3 +0x069:  test   %al,%al
081bedb5 +0x06b:  je     081bede0 <+0x96>
081bedb7 +0x06d:  movl   $0x0,0xc(%esp)
081bedbf +0x075:  movl   $0x0,0x8(%esp)
081bedc7 +0x07d:  movl   $&_ZZN19DisPatcher_BuySkill4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081bedcf +0x085:  movl   $0x37e,(%esp)
081bedd6 +0x08c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081beddb +0x091:  jmp    081befe5 <+0x29b>
081bede0 +0x096:  mov    -0x10(%ebp),%eax
081bede3 +0x099:  movzbl 0xe(%eax),%eax
081bede7 +0x09d:  test   %al,%al
081bede9 +0x09f:  jg     081bee14 <+0xca>
081bedeb +0x0a1:  movl   $0x0,0xc(%esp)
081bedf3 +0x0a9:  movl   $0x0,0x8(%esp)
081bedfb +0x0b1:  movl   $&_ZZN19DisPatcher_BuySkill4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081bee03 +0x0b9:  movl   $0x381,(%esp)
081bee0a +0x0c0:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081bee0f +0x0c5:  jmp    081befe5 <+0x29b>
081bee14 +0x0ca:  mov    -0x10(%ebp),%eax
081bee17 +0x0cd:  movzbl 0xe(%eax),%eax
081bee1b +0x0d1:  cmp    $0x46,%al
081bee1d +0x0d3:  jle    081bee48 <+0xfe>
081bee1f +0x0d5:  movl   $0x0,0xc(%esp)
081bee27 +0x0dd:  movl   $0x0,0x8(%esp)
081bee2f +0x0e5:  movl   $&_ZZN19DisPatcher_BuySkill4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081bee37 +0x0ed:  movl   $0x383,(%esp)
081bee3e +0x0f4:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081bee43 +0x0f9:  jmp    081befe5 <+0x29b>
081bee48 +0x0fe:  movl   $0x0,-0xc(%ebp)
081bee4f +0x105:  jmp    081befc8 <+0x27e>
081bee54 +0x10a:  mov    -0xc(%ebp),%edx
081bee57 +0x10d:  mov    %edx,%eax
081bee59 +0x10f:  add    %eax,%eax
081bee5b +0x111:  add    %edx,%eax
081bee5d +0x113:  add    -0x10(%ebp),%eax
081bee60 +0x116:  add    $0xf,%eax
081bee63 +0x119:  mov    %eax,0x4(%esp)
081bee67 +0x11d:  mov    0xc(%ebp),%eax
081bee6a +0x120:  mov    %eax,(%esp)
081bee6d +0x123:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081bee72 +0x128:  xor    $0x1,%eax
081bee75 +0x12b:  test   %al,%al
081bee77 +0x12d:  je     081beea2 <+0x158>
081bee79 +0x12f:  movl   $0x0,0xc(%esp)
081bee81 +0x137:  movl   $0x0,0x8(%esp)
081bee89 +0x13f:  movl   $&_ZZN19DisPatcher_BuySkill4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081bee91 +0x147:  movl   $0x388,(%esp)
081bee98 +0x14e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081bee9d +0x153:  jmp    081befe5 <+0x29b>
081beea2 +0x158:  mov    -0xc(%ebp),%edx
081beea5 +0x15b:  mov    %edx,%eax
081beea7 +0x15d:  add    %eax,%eax
081beea9 +0x15f:  add    %edx,%eax
081beeab +0x161:  add    -0x10(%ebp),%eax
081beeae +0x164:  add    $0x11,%eax
081beeb1 +0x167:  mov    %eax,0x4(%esp)
081beeb5 +0x16b:  mov    0xc(%ebp),%eax
081beeb8 +0x16e:  mov    %eax,(%esp)
081beebb +0x171:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081beec0 +0x176:  xor    $0x1,%eax
081beec3 +0x179:  test   %al,%al
081beec5 +0x17b:  je     081beef0 <+0x1a6>
081beec7 +0x17d:  movl   $0x0,0xc(%esp)
081beecf +0x185:  movl   $0x0,0x8(%esp)
081beed7 +0x18d:  movl   $&_ZZN19DisPatcher_BuySkill4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081beedf +0x195:  movl   $0x38a,(%esp)
081beee6 +0x19c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081beeeb +0x1a1:  jmp    081befe5 <+0x29b>
081beef0 +0x1a6:  mov    -0xc(%ebp),%edx
081beef3 +0x1a9:  mov    -0x10(%ebp),%ecx
081beef6 +0x1ac:  mov    %edx,%eax
081beef8 +0x1ae:  add    %eax,%eax
081beefa +0x1b0:  add    %edx,%eax
081beefc +0x1b2:  lea    (%ecx,%eax,1),%eax
081beeff +0x1b5:  add    $0x11,%eax
081bef02 +0x1b8:  movzbl (%eax),%eax
081bef05 +0x1bb:  test   %al,%al
081bef07 +0x1bd:  je     081bef4b <+0x201>
081bef09 +0x1bf:  mov    -0xc(%ebp),%edx
081bef0c +0x1c2:  mov    -0x10(%ebp),%ecx
081bef0f +0x1c5:  mov    %edx,%eax
081bef11 +0x1c7:  add    %eax,%eax
081bef13 +0x1c9:  add    %edx,%eax
081bef15 +0x1cb:  lea    (%ecx,%eax,1),%eax
081bef18 +0x1ce:  add    $0x11,%eax
081bef1b +0x1d1:  movzbl (%eax),%eax
081bef1e +0x1d4:  cmp    $0x1,%al
081bef20 +0x1d6:  je     081bef4b <+0x201>
081bef22 +0x1d8:  movl   $0x0,0xc(%esp)
081bef2a +0x1e0:  movl   $0x0,0x8(%esp)
081bef32 +0x1e8:  movl   $&_ZZN19DisPatcher_BuySkill4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081bef3a +0x1f0:  movl   $0x38d,(%esp)
081bef41 +0x1f7:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081bef46 +0x1fc:  jmp    081befe5 <+0x29b>
081bef4b +0x201:  mov    -0xc(%ebp),%edx
081bef4e +0x204:  mov    %edx,%eax
081bef50 +0x206:  add    %eax,%eax
081bef52 +0x208:  add    %edx,%eax
081bef54 +0x20a:  add    -0x10(%ebp),%eax
081bef57 +0x20d:  add    $0x10,%eax
081bef5a +0x210:  mov    %eax,0x4(%esp)
081bef5e +0x214:  mov    0xc(%ebp),%eax
081bef61 +0x217:  mov    %eax,(%esp)
081bef64 +0x21a:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081bef69 +0x21f:  xor    $0x1,%eax
081bef6c +0x222:  test   %al,%al
081bef6e +0x224:  je     081bef96 <+0x24c>
081bef70 +0x226:  movl   $0x0,0xc(%esp)
081bef78 +0x22e:  movl   $0x0,0x8(%esp)
081bef80 +0x236:  movl   $&_ZZN19DisPatcher_BuySkill4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081bef88 +0x23e:  movl   $0x38f,(%esp)
081bef8f +0x245:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081bef94 +0x24a:  jmp    081befe5 <+0x29b>
081bef96 +0x24c:  mov    -0xc(%ebp),%edx
081bef99 +0x24f:  mov    -0x10(%ebp),%ecx
081bef9c +0x252:  mov    %edx,%eax
081bef9e +0x254:  add    %eax,%eax
081befa0 +0x256:  add    %edx,%eax
081befa2 +0x258:  lea    (%ecx,%eax,1),%eax
081befa5 +0x25b:  add    $0x10,%eax
081befa8 +0x25e:  movzbl (%eax),%eax
081befab +0x261:  test   %al,%al
081befad +0x263:  jg     081befc4 <+0x27a>
081befaf +0x265:  mov    -0xc(%ebp),%edx
081befb2 +0x268:  mov    -0x10(%ebp),%ecx
081befb5 +0x26b:  mov    %edx,%eax
081befb7 +0x26d:  add    %eax,%eax
081befb9 +0x26f:  add    %edx,%eax
081befbb +0x271:  lea    (%ecx,%eax,1),%eax
081befbe +0x274:  add    $0x10,%eax
081befc1 +0x277:  movb   $0x1,(%eax)
081befc4 +0x27a:  addl   $0x1,-0xc(%ebp)
081befc8 +0x27e:  mov    -0x10(%ebp),%eax
081befcb +0x281:  movzbl 0xe(%eax),%eax
081befcf +0x285:  movsbl %al,%eax
081befd2 +0x288:  cmp    -0xc(%ebp),%eax
081befd5 +0x28b:  setg   %al
081befd8 +0x28e:  test   %al,%al
081befda +0x290:  jne    081bee54 <+0x10a>
081befe0 +0x296:  mov    $0x0,%eax
081befe5 +0x29b:  leave
081befe6 +0x29c:  ret
081befe7 +0x29d:  nop
```

## 反编译 C

```c
// DisPatcher_BuySkill::read @ 0x81bed4a

/* DisPatcher_BuySkill::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_BuySkill::read(DisPatcher_BuySkill *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int local_10;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      if ((char)param_2[0xe] < '\x01') {
        uVar2 = LineFunc(0x381,"virtual int DisPatcher_BuySkill::read(PacketBuf&, MSG_BASE&)",0,0);
      }
      else if ((char)param_2[0xe] < 'G') {
        for (local_10 = 0; local_10 < (char)param_2[0xe]; local_10 = local_10 + 1) {
          cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + local_10 * 3 + 0xf));
          if (cVar1 != '\x01') {
            uVar2 = LineFunc(0x388,"virtual int DisPatcher_BuySkill::read(PacketBuf&, MSG_BASE&)",0,
                             0);
            return uVar2;
          }
          cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + local_10 * 3 + 0x11));
          if (cVar1 != '\x01') {
            uVar2 = LineFunc(0x38a,"virtual int DisPatcher_BuySkill::read(PacketBuf&, MSG_BASE&)",0,
                             0);
            return uVar2;
          }
          if ((param_2[local_10 * 3 + 0x11] != (MSG_BASE)0x0) &&
             (param_2[local_10 * 3 + 0x11] != (MSG_BASE)0x1)) {
            uVar2 = LineFunc(0x38d,"virtual int DisPatcher_BuySkill::read(PacketBuf&, MSG_BASE&)",0,
                             0);
            return uVar2;
          }
          cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + local_10 * 3 + 0x10));
          if (cVar1 != '\x01') {
            uVar2 = LineFunc(0x38f,"virtual int DisPatcher_BuySkill::read(PacketBuf&, MSG_BASE&)",0,
                             0);
            return uVar2;
          }
          if ((char)param_2[local_10 * 3 + 0x10] < '\x01') {
            param_2[local_10 * 3 + 0x10] = (MSG_BASE)0x1;
          }
        }
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(899,"virtual int DisPatcher_BuySkill::read(PacketBuf&, MSG_BASE&)",0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x37e,"virtual int DisPatcher_BuySkill::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x37b,"virtual int DisPatcher_BuySkill::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```
