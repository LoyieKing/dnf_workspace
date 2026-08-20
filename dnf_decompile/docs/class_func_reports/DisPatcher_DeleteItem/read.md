# read

`_ZN21DisPatcher_DeleteItem4readER9PacketBufR8MSG_BASE`

`DisPatcher_DeleteItem::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DeleteItem` | `0x081c17c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c17c0  _ZN21DisPatcher_DeleteItem4readER9PacketBufR8MSG_BASE
#           DisPatcher_DeleteItem::read(PacketBuf&, MSG_BASE&)
# range [0x081c17c0, 0x081c1a6b]
081c17c0 +0x000:  push   %ebp
081c17c1 +0x001:  mov    %esp,%ebp
081c17c3 +0x003:  sub    $0x28,%esp
081c17c6 +0x006:  mov    0x10(%ebp),%eax
081c17c9 +0x009:  mov    %eax,-0x10(%ebp)
081c17cc +0x00c:  mov    -0x10(%ebp),%eax
081c17cf +0x00f:  add    $0xd,%eax
081c17d2 +0x012:  mov    %eax,0x4(%esp)
081c17d6 +0x016:  mov    0xc(%ebp),%eax
081c17d9 +0x019:  mov    %eax,(%esp)
081c17dc +0x01c:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081c17e1 +0x021:  xor    $0x1,%eax
081c17e4 +0x024:  test   %al,%al
081c17e6 +0x026:  je     081c1811 <+0x51>
081c17e8 +0x028:  movl   $0x0,0xc(%esp)
081c17f0 +0x030:  movl   $0x0,0x8(%esp)
081c17f8 +0x038:  movl   $&_ZZN21DisPatcher_DeleteItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c1800 +0x040:  movl   $0xae6,(%esp)
081c1807 +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c180c +0x04c:  jmp    081c1a6a <+0x2aa>
081c1811 +0x051:  mov    -0x10(%ebp),%eax
081c1814 +0x054:  add    $0xe,%eax
081c1817 +0x057:  mov    %eax,0x4(%esp)
081c181b +0x05b:  mov    0xc(%ebp),%eax
081c181e +0x05e:  mov    %eax,(%esp)
081c1821 +0x061:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081c1826 +0x066:  xor    $0x1,%eax
081c1829 +0x069:  test   %al,%al
081c182b +0x06b:  je     081c1856 <+0x96>
081c182d +0x06d:  movl   $0x0,0xc(%esp)
081c1835 +0x075:  movl   $0x0,0x8(%esp)
081c183d +0x07d:  movl   $&_ZZN21DisPatcher_DeleteItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c1845 +0x085:  movl   $0xae7,(%esp)
081c184c +0x08c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c1851 +0x091:  jmp    081c1a6a <+0x2aa>
081c1856 +0x096:  mov    -0x10(%ebp),%eax
081c1859 +0x099:  movzbl 0xe(%eax),%eax
081c185d +0x09d:  cmp    $0x64,%al
081c185f +0x09f:  jle    081c188a <+0xca>
081c1861 +0x0a1:  movl   $0x0,0xc(%esp)
081c1869 +0x0a9:  movl   $0x0,0x8(%esp)
081c1871 +0x0b1:  movl   $&_ZZN21DisPatcher_DeleteItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c1879 +0x0b9:  movl   $0xaeb,(%esp)
081c1880 +0x0c0:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c1885 +0x0c5:  jmp    081c1a6a <+0x2aa>
081c188a +0x0ca:  movl   $0x0,-0xc(%ebp)
081c1891 +0x0d1:  jmp    081c1a09 <+0x249>
081c1896 +0x0d6:  mov    -0xc(%ebp),%eax
081c1899 +0x0d9:  add    %eax,%eax
081c189b +0x0db:  add    -0x10(%ebp),%eax
081c189e +0x0de:  add    $0xf,%eax
081c18a1 +0x0e1:  mov    %eax,0x4(%esp)
081c18a5 +0x0e5:  mov    0xc(%ebp),%eax
081c18a8 +0x0e8:  mov    %eax,(%esp)
081c18ab +0x0eb:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081c18b0 +0x0f0:  xor    $0x1,%eax
081c18b3 +0x0f3:  test   %al,%al
081c18b5 +0x0f5:  je     081c18e0 <+0x120>
081c18b7 +0x0f7:  movl   $0x0,0xc(%esp)
081c18bf +0x0ff:  movl   $0x0,0x8(%esp)
081c18c7 +0x107:  movl   $&_ZZN21DisPatcher_DeleteItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c18cf +0x10f:  movl   $0xaf0,(%esp)
081c18d6 +0x116:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c18db +0x11b:  jmp    081c1a6a <+0x2aa>
081c18e0 +0x120:  mov    -0xc(%ebp),%eax
081c18e3 +0x123:  add    $0x68,%eax
081c18e6 +0x126:  add    %eax,%eax
081c18e8 +0x128:  add    -0x10(%ebp),%eax
081c18eb +0x12b:  add    $0x7,%eax
081c18ee +0x12e:  mov    %eax,0x4(%esp)
081c18f2 +0x132:  mov    0xc(%ebp),%eax
081c18f5 +0x135:  mov    %eax,(%esp)
081c18f8 +0x138:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081c18fd +0x13d:  xor    $0x1,%eax
081c1900 +0x140:  test   %al,%al
081c1902 +0x142:  je     081c192d <+0x16d>
081c1904 +0x144:  movl   $0x0,0xc(%esp)
081c190c +0x14c:  movl   $0x0,0x8(%esp)
081c1914 +0x154:  movl   $&_ZZN21DisPatcher_DeleteItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c191c +0x15c:  movl   $0xaf1,(%esp)
081c1923 +0x163:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c1928 +0x168:  jmp    081c1a6a <+0x2aa>
081c192d +0x16d:  mov    -0xc(%ebp),%eax
081c1930 +0x170:  add    $0x64,%eax
081c1933 +0x173:  shl    $0x2,%eax
081c1936 +0x176:  add    -0x10(%ebp),%eax
081c1939 +0x179:  add    $0xf,%eax
081c193c +0x17c:  mov    %eax,0x4(%esp)
081c1940 +0x180:  mov    0xc(%ebp),%eax
081c1943 +0x183:  mov    %eax,(%esp)
081c1946 +0x186:  call   0858d27e <_ZN9PacketBuf7get_intERm>  ; PacketBuf::get_int(unsigned long&)
081c194b +0x18b:  xor    $0x1,%eax
081c194e +0x18e:  test   %al,%al
081c1950 +0x190:  je     081c197b <+0x1bb>
081c1952 +0x192:  movl   $0x0,0xc(%esp)
081c195a +0x19a:  movl   $0x0,0x8(%esp)
081c1962 +0x1a2:  movl   $&_ZZN21DisPatcher_DeleteItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c196a +0x1aa:  movl   $0xaf2,(%esp)
081c1971 +0x1b1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c1976 +0x1b6:  jmp    081c1a6a <+0x2aa>
081c197b +0x1bb:  mov    -0xc(%ebp),%eax
081c197e +0x1be:  add    $0xc8,%eax
081c1983 +0x1c3:  shl    $0x2,%eax
081c1986 +0x1c6:  add    -0x10(%ebp),%eax
081c1989 +0x1c9:  add    $0xf,%eax
081c198c +0x1cc:  mov    %eax,0x4(%esp)
081c1990 +0x1d0:  mov    0xc(%ebp),%eax
081c1993 +0x1d3:  mov    %eax,(%esp)
081c1996 +0x1d6:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081c199b +0x1db:  xor    $0x1,%eax
081c199e +0x1de:  test   %al,%al
081c19a0 +0x1e0:  je     081c19cb <+0x20b>
081c19a2 +0x1e2:  movl   $0x0,0xc(%esp)
081c19aa +0x1ea:  movl   $0x0,0x8(%esp)
081c19b2 +0x1f2:  movl   $&_ZZN21DisPatcher_DeleteItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c19ba +0x1fa:  movl   $0xaf3,(%esp)
081c19c1 +0x201:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c19c6 +0x206:  jmp    081c1a6a <+0x2aa>
081c19cb +0x20b:  mov    -0xc(%ebp),%edx
081c19ce +0x20e:  mov    -0x10(%ebp),%eax
081c19d1 +0x211:  add    $0xc8,%edx
081c19d7 +0x217:  mov    0xf(%eax,%edx,4),%eax
081c19db +0x21b:  test   %eax,%eax
081c19dd +0x21d:  jg     081c1a05 <+0x245>
081c19df +0x21f:  movl   $0x0,0xc(%esp)
081c19e7 +0x227:  movl   $0x0,0x8(%esp)
081c19ef +0x22f:  movl   $&_ZZN21DisPatcher_DeleteItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c19f7 +0x237:  movl   $0xaf5,(%esp)
081c19fe +0x23e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c1a03 +0x243:  jmp    081c1a6a <+0x2aa>
081c1a05 +0x245:  addl   $0x1,-0xc(%ebp)
081c1a09 +0x249:  mov    -0x10(%ebp),%eax
081c1a0c +0x24c:  movzbl 0xe(%eax),%eax
081c1a10 +0x250:  movsbl %al,%eax
081c1a13 +0x253:  cmp    -0xc(%ebp),%eax
081c1a16 +0x256:  setg   %al
081c1a19 +0x259:  test   %al,%al
081c1a1b +0x25b:  jne    081c1896 <+0xd6>
081c1a21 +0x261:  mov    -0x10(%ebp),%eax
081c1a24 +0x264:  add    $0x4bf,%eax
081c1a29 +0x269:  mov    %eax,0x4(%esp)
081c1a2d +0x26d:  mov    0xc(%ebp),%eax
081c1a30 +0x270:  mov    %eax,(%esp)
081c1a33 +0x273:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081c1a38 +0x278:  xor    $0x1,%eax
081c1a3b +0x27b:  test   %al,%al
081c1a3d +0x27d:  je     081c1a65 <+0x2a5>
081c1a3f +0x27f:  movl   $0x0,0xc(%esp)
081c1a47 +0x287:  movl   $0x0,0x8(%esp)
081c1a4f +0x28f:  movl   $&_ZZN21DisPatcher_DeleteItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c1a57 +0x297:  movl   $0xaf8,(%esp)
081c1a5e +0x29e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c1a63 +0x2a3:  jmp    081c1a6a <+0x2aa>
081c1a65 +0x2a5:  mov    $0x0,%eax
081c1a6a +0x2aa:  leave
081c1a6b +0x2ab:  ret
```

## 反编译 C

```c
// DisPatcher_DeleteItem::read @ 0x81c17c0

/* DisPatcher_DeleteItem::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_DeleteItem::read(DisPatcher_DeleteItem *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int local_10;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      if ((char)param_2[0xe] < 'e') {
        for (local_10 = 0; local_10 < (char)param_2[0xe]; local_10 = local_10 + 1) {
          cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + local_10 * 2 + 0xf));
          if (cVar1 != '\x01') {
            uVar2 = LineFunc(0xaf0,"virtual int DisPatcher_DeleteItem::read(PacketBuf&, MSG_BASE&)",
                             0,0);
            return uVar2;
          }
          cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + (local_10 + 0x68) * 2 + 7));
          if (cVar1 != '\x01') {
            uVar2 = LineFunc(0xaf1,"virtual int DisPatcher_DeleteItem::read(PacketBuf&, MSG_BASE&)",
                             0,0);
            return uVar2;
          }
          cVar1 = PacketBuf::get_int(param_1,(ulong *)(param_2 + (local_10 + 100) * 4 + 0xf));
          if (cVar1 != '\x01') {
            uVar2 = LineFunc(0xaf2,"virtual int DisPatcher_DeleteItem::read(PacketBuf&, MSG_BASE&)",
                             0,0);
            return uVar2;
          }
          cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + (local_10 + 200) * 4 + 0xf));
          if (cVar1 != '\x01') {
            uVar2 = LineFunc(0xaf3,"virtual int DisPatcher_DeleteItem::read(PacketBuf&, MSG_BASE&)",
                             0,0);
            return uVar2;
          }
          if (*(int *)(param_2 + (local_10 + 200) * 4 + 0xf) < 1) {
            uVar2 = LineFunc(0xaf5,"virtual int DisPatcher_DeleteItem::read(PacketBuf&, MSG_BASE&)",
                             0,0);
            return uVar2;
          }
        }
        cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x4bf));
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = LineFunc(0xaf8,"virtual int DisPatcher_DeleteItem::read(PacketBuf&, MSG_BASE&)",0,
                           0);
        }
      }
      else {
        uVar2 = LineFunc(0xaeb,"virtual int DisPatcher_DeleteItem::read(PacketBuf&, MSG_BASE&)",0,0)
        ;
      }
    }
    else {
      uVar2 = LineFunc(0xae7,"virtual int DisPatcher_DeleteItem::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0xae6,"virtual int DisPatcher_DeleteItem::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```
