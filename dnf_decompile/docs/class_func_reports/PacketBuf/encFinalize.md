# encFinalize

`_ZN9PacketBuf11encFinalizeEv`

`PacketBuf::encFinalize()`

| 类 | 地址 |
|---|---|
| `PacketBuf` | `0x0858df30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858df30  _ZN9PacketBuf11encFinalizeEv
#           PacketBuf::encFinalize()
# range [0x0858df30, 0x0858e1ea]
0858df30 +0x000:  push   %ebp
0858df31 +0x001:  mov    %esp,%ebp
0858df33 +0x003:  sub    $0x38,%esp
0858df36 +0x006:  mov    0x8(%ebp),%eax
0858df39 +0x009:  mov    0x8(%eax),%eax
0858df3c +0x00c:  lea    -0xf(%eax),%edx
0858df3f +0x00f:  mov    0x8(%ebp),%eax
0858df42 +0x012:  mov    0x14(%eax),%eax
0858df45 +0x015:  add    $0xf,%eax
0858df48 +0x018:  mov    %edx,0x4(%esp)
0858df4c +0x01c:  mov    %eax,(%esp)
0858df4f +0x01f:  call   0848d4c8 <_ZN10Encryption6crc32NEPvi>  ; Encryption::crc32N(void*, int)
0858df54 +0x024:  mov    %eax,-0x10(%ebp)
0858df57 +0x027:  mov    0x8(%ebp),%eax
0858df5a +0x02a:  mov    (%eax),%eax
0858df5c +0x02c:  test   %eax,%eax
0858df5e +0x02e:  je     0858df6a <+0x3a>
0858df60 +0x030:  cmp    $0x1,%eax
0858df63 +0x033:  je     0858dfc6 <+0x96>
0858df65 +0x035:  jmp    0858e01f <+0xef>
0858df6a +0x03a:  mov    0x8(%ebp),%eax
0858df6d +0x03d:  mov    0x14(%eax),%eax
0858df70 +0x040:  lea    0x3(%eax),%edx
0858df73 +0x043:  mov    0x8(%ebp),%eax
0858df76 +0x046:  mov    0x8(%eax),%eax
0858df79 +0x049:  mov    %al,(%edx)
0858df7b +0x04b:  mov    0x8(%ebp),%eax
0858df7e +0x04e:  mov    0x14(%eax),%eax
0858df81 +0x051:  lea    0x4(%eax),%edx
0858df84 +0x054:  mov    0x8(%ebp),%eax
0858df87 +0x057:  mov    0x8(%eax),%eax
0858df8a +0x05a:  and    $0xff00,%eax
0858df8f +0x05f:  sar    $0x8,%eax
0858df92 +0x062:  mov    %al,(%edx)
0858df94 +0x064:  mov    0x8(%ebp),%eax
0858df97 +0x067:  mov    0x14(%eax),%eax
0858df9a +0x06a:  lea    0x5(%eax),%edx
0858df9d +0x06d:  mov    0x8(%ebp),%eax
0858dfa0 +0x070:  mov    0x8(%eax),%eax
0858dfa3 +0x073:  and    $0xff0000,%eax
0858dfa8 +0x078:  sar    $0x10,%eax
0858dfab +0x07b:  mov    %al,(%edx)
0858dfad +0x07d:  mov    0x8(%ebp),%eax
0858dfb0 +0x080:  mov    0x14(%eax),%eax
0858dfb3 +0x083:  lea    0x6(%eax),%edx
0858dfb6 +0x086:  mov    0x8(%ebp),%eax
0858dfb9 +0x089:  mov    0x8(%eax),%eax
0858dfbc +0x08c:  shr    $0x18,%eax
0858dfbf +0x08f:  mov    %al,(%edx)
0858dfc1 +0x091:  jmp    0858e059 <+0x129>
0858dfc6 +0x096:  mov    0x8(%ebp),%eax
0858dfc9 +0x099:  mov    0x14(%eax),%eax
0858dfcc +0x09c:  lea    0x3(%eax),%edx
0858dfcf +0x09f:  mov    0x8(%ebp),%eax
0858dfd2 +0x0a2:  mov    0x8(%eax),%eax
0858dfd5 +0x0a5:  shr    $0x18,%eax
0858dfd8 +0x0a8:  mov    %al,(%edx)
0858dfda +0x0aa:  mov    0x8(%ebp),%eax
0858dfdd +0x0ad:  mov    0x14(%eax),%eax
0858dfe0 +0x0b0:  lea    0x4(%eax),%edx
0858dfe3 +0x0b3:  mov    0x8(%ebp),%eax
0858dfe6 +0x0b6:  mov    0x8(%eax),%eax
0858dfe9 +0x0b9:  and    $0xff0000,%eax
0858dfee +0x0be:  sar    $0x10,%eax
0858dff1 +0x0c1:  mov    %al,(%edx)
0858dff3 +0x0c3:  mov    0x8(%ebp),%eax
0858dff6 +0x0c6:  mov    0x14(%eax),%eax
0858dff9 +0x0c9:  lea    0x5(%eax),%edx
0858dffc +0x0cc:  mov    0x8(%ebp),%eax
0858dfff +0x0cf:  mov    0x8(%eax),%eax
0858e002 +0x0d2:  and    $0xff00,%eax
0858e007 +0x0d7:  sar    $0x8,%eax
0858e00a +0x0da:  mov    %al,(%edx)
0858e00c +0x0dc:  mov    0x8(%ebp),%eax
0858e00f +0x0df:  mov    0x14(%eax),%eax
0858e012 +0x0e2:  lea    0x6(%eax),%edx
0858e015 +0x0e5:  mov    0x8(%ebp),%eax
0858e018 +0x0e8:  mov    0x8(%eax),%eax
0858e01b +0x0eb:  mov    %al,(%edx)
0858e01d +0x0ed:  jmp    0858e059 <+0x129>
0858e01f +0x0ef:  mov    0x8(%ebp),%eax
0858e022 +0x0f2:  mov    (%eax),%eax
0858e024 +0x0f4:  mov    %eax,0x14(%esp)
0858e028 +0x0f8:  movl   $"m_byte_encoding error %d",0x10(%esp)
0858e030 +0x100:  movl   $0x419,0xc(%esp)
0858e038 +0x108:  movl   $&_ZZN9PacketBuf11encFinalizeEvE19__PRETTY_FUNCTION__,0x8(%esp)
0858e040 +0x110:  movl   $"packet_buf.cpp",0x4(%esp)
0858e048 +0x118:  movl   $0x1,(%esp)
0858e04f +0x11f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0858e054 +0x124:  jmp    0858e1e9 <+0x2b9>
0858e059 +0x129:  mov    0x8(%ebp),%eax
0858e05c +0x12c:  mov    0x8(%eax),%eax
0858e05f +0x12f:  lea    -0xf(%eax),%edx
0858e062 +0x132:  mov    0x8(%ebp),%eax
0858e065 +0x135:  mov    0x14(%eax),%eax
0858e068 +0x138:  add    $0xf,%eax
0858e06b +0x13b:  mov    %edx,0x4(%esp)
0858e06f +0x13f:  mov    %eax,(%esp)
0858e072 +0x142:  call   0848d4c8 <_ZN10Encryption6crc32NEPvi>  ; Encryption::crc32N(void*, int)
0858e077 +0x147:  mov    %eax,-0xc(%ebp)
0858e07a +0x14a:  mov    0x8(%ebp),%eax
0858e07d +0x14d:  mov    (%eax),%eax
0858e07f +0x14f:  test   %eax,%eax
0858e081 +0x151:  je     0858e091 <+0x161>
0858e083 +0x153:  cmp    $0x1,%eax
0858e086 +0x156:  je     0858e12c <+0x1fc>
0858e08c +0x15c:  jmp    0858e1b3 <+0x283>
0858e091 +0x161:  mov    0x8(%ebp),%eax
0858e094 +0x164:  mov    0x14(%eax),%eax
0858e097 +0x167:  lea    0x7(%eax),%edx
0858e09a +0x16a:  mov    -0x10(%ebp),%eax
0858e09d +0x16d:  mov    %al,(%edx)
0858e09f +0x16f:  mov    0x8(%ebp),%eax
0858e0a2 +0x172:  mov    0x14(%eax),%eax
0858e0a5 +0x175:  lea    0x8(%eax),%edx
0858e0a8 +0x178:  mov    -0x10(%ebp),%eax
0858e0ab +0x17b:  and    $0xff00,%eax
0858e0b0 +0x180:  shr    $0x8,%eax
0858e0b3 +0x183:  mov    %al,(%edx)
0858e0b5 +0x185:  mov    0x8(%ebp),%eax
0858e0b8 +0x188:  mov    0x14(%eax),%eax
0858e0bb +0x18b:  lea    0x9(%eax),%edx
0858e0be +0x18e:  mov    -0x10(%ebp),%eax
0858e0c1 +0x191:  and    $0xff0000,%eax
0858e0c6 +0x196:  shr    $0x10,%eax
0858e0c9 +0x199:  mov    %al,(%edx)
0858e0cb +0x19b:  mov    0x8(%ebp),%eax
0858e0ce +0x19e:  mov    0x14(%eax),%eax
0858e0d1 +0x1a1:  lea    0xa(%eax),%edx
0858e0d4 +0x1a4:  mov    -0x10(%ebp),%eax
0858e0d7 +0x1a7:  shr    $0x18,%eax
0858e0da +0x1aa:  mov    %al,(%edx)
0858e0dc +0x1ac:  mov    0x8(%ebp),%eax
0858e0df +0x1af:  mov    0x14(%eax),%eax
0858e0e2 +0x1b2:  lea    0xb(%eax),%edx
0858e0e5 +0x1b5:  mov    -0xc(%ebp),%eax
0858e0e8 +0x1b8:  mov    %al,(%edx)
0858e0ea +0x1ba:  mov    0x8(%ebp),%eax
0858e0ed +0x1bd:  mov    0x14(%eax),%eax
0858e0f0 +0x1c0:  lea    0xc(%eax),%edx
0858e0f3 +0x1c3:  mov    -0xc(%ebp),%eax
0858e0f6 +0x1c6:  and    $0xff00,%eax
0858e0fb +0x1cb:  shr    $0x8,%eax
0858e0fe +0x1ce:  mov    %al,(%edx)
0858e100 +0x1d0:  mov    0x8(%ebp),%eax
0858e103 +0x1d3:  mov    0x14(%eax),%eax
0858e106 +0x1d6:  lea    0xd(%eax),%edx
0858e109 +0x1d9:  mov    -0xc(%ebp),%eax
0858e10c +0x1dc:  and    $0xff0000,%eax
0858e111 +0x1e1:  shr    $0x10,%eax
0858e114 +0x1e4:  mov    %al,(%edx)
0858e116 +0x1e6:  mov    0x8(%ebp),%eax
0858e119 +0x1e9:  mov    0x14(%eax),%eax
0858e11c +0x1ec:  lea    0xe(%eax),%edx
0858e11f +0x1ef:  mov    -0xc(%ebp),%eax
0858e122 +0x1f2:  shr    $0x18,%eax
0858e125 +0x1f5:  mov    %al,(%edx)
0858e127 +0x1f7:  jmp    0858e1e9 <+0x2b9>
0858e12c +0x1fc:  mov    0x8(%ebp),%eax
0858e12f +0x1ff:  mov    0x14(%eax),%eax
0858e132 +0x202:  lea    0x7(%eax),%edx
0858e135 +0x205:  mov    -0x10(%ebp),%eax
0858e138 +0x208:  shr    $0x18,%eax
0858e13b +0x20b:  mov    %al,(%edx)
0858e13d +0x20d:  mov    0x8(%ebp),%eax
0858e140 +0x210:  mov    0x14(%eax),%eax
0858e143 +0x213:  lea    0x8(%eax),%edx
0858e146 +0x216:  mov    -0x10(%ebp),%eax
0858e149 +0x219:  and    $0xff0000,%eax
0858e14e +0x21e:  shr    $0x10,%eax
0858e151 +0x221:  mov    %al,(%edx)
0858e153 +0x223:  mov    0x8(%ebp),%eax
0858e156 +0x226:  mov    0x14(%eax),%eax
0858e159 +0x229:  lea    0x9(%eax),%edx
0858e15c +0x22c:  mov    -0x10(%ebp),%eax
0858e15f +0x22f:  and    $0xff00,%eax
0858e164 +0x234:  shr    $0x8,%eax
0858e167 +0x237:  mov    %al,(%edx)
0858e169 +0x239:  mov    0x8(%ebp),%eax
0858e16c +0x23c:  mov    0x14(%eax),%eax
0858e16f +0x23f:  lea    0xa(%eax),%edx
0858e172 +0x242:  mov    -0x10(%ebp),%eax
0858e175 +0x245:  mov    %al,(%edx)
0858e177 +0x247:  mov    0x8(%ebp),%eax
0858e17a +0x24a:  mov    0x14(%eax),%eax
0858e17d +0x24d:  add    $0xb,%eax
0858e180 +0x250:  movb   $0x0,(%eax)
0858e183 +0x253:  mov    0x8(%ebp),%eax
0858e186 +0x256:  mov    0x14(%eax),%eax
0858e189 +0x259:  add    $0xc,%eax
0858e18c +0x25c:  movb   $0x0,(%eax)
0858e18f +0x25f:  mov    0x8(%ebp),%eax
0858e192 +0x262:  mov    0x14(%eax),%eax
0858e195 +0x265:  lea    0xd(%eax),%edx
0858e198 +0x268:  mov    -0xc(%ebp),%eax
0858e19b +0x26b:  and    $0xff0000,%eax
0858e1a0 +0x270:  shr    $0x8,%eax
0858e1a3 +0x273:  mov    %al,(%edx)
0858e1a5 +0x275:  mov    0x8(%ebp),%eax
0858e1a8 +0x278:  mov    0x14(%eax),%eax
0858e1ab +0x27b:  add    $0xe,%eax
0858e1ae +0x27e:  movb   $0x0,(%eax)
0858e1b1 +0x281:  jmp    0858e1e9 <+0x2b9>
0858e1b3 +0x283:  mov    0x8(%ebp),%eax
0858e1b6 +0x286:  mov    (%eax),%eax
0858e1b8 +0x288:  mov    %eax,0x14(%esp)
0858e1bc +0x28c:  movl   $"m_byte_encoding error %d",0x10(%esp)
0858e1c4 +0x294:  movl   $0x439,0xc(%esp)
0858e1cc +0x29c:  movl   $&_ZZN9PacketBuf11encFinalizeEvE19__PRETTY_FUNCTION__,0x8(%esp)
0858e1d4 +0x2a4:  movl   $"packet_buf.cpp",0x4(%esp)
0858e1dc +0x2ac:  movl   $0x1,(%esp)
0858e1e3 +0x2b3:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0858e1e8 +0x2b8:  nop
0858e1e9 +0x2b9:  leave
0858e1ea +0x2ba:  ret
```

## 反编译 C

```c
// PacketBuf::encFinalize @ 0x858df30

/* PacketBuf::encFinalize() */

void __thiscall PacketBuf::encFinalize(PacketBuf *this)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar4 = Encryption::crc32N((void *)(*(int *)(this + 0x14) + 0xf),*(int *)(this + 8) + -0xf);
  if (*(int *)this == 0) {
    *(char *)(*(int *)(this + 0x14) + 3) = (char)*(undefined4 *)(this + 8);
    *(char *)(*(int *)(this + 0x14) + 4) = (char)((uint)*(undefined4 *)(this + 8) >> 8);
    *(char *)(*(int *)(this + 0x14) + 5) = (char)((uint)*(undefined4 *)(this + 8) >> 0x10);
    *(char *)(*(int *)(this + 0x14) + 6) = (char)((uint)*(undefined4 *)(this + 8) >> 0x18);
  }
  else {
    if (*(int *)this != 1) {
      LogManager::logFormat
                (1,"packet_buf.cpp","void PacketBuf::encFinalize()",0x419,"m_byte_encoding error %d"
                 ,*(undefined4 *)this);
      return;
    }
    *(char *)(*(int *)(this + 0x14) + 3) = (char)((uint)*(undefined4 *)(this + 8) >> 0x18);
    *(char *)(*(int *)(this + 0x14) + 4) = (char)((uint)*(undefined4 *)(this + 8) >> 0x10);
    *(char *)(*(int *)(this + 0x14) + 5) = (char)((uint)*(undefined4 *)(this + 8) >> 8);
    *(char *)(*(int *)(this + 0x14) + 6) = (char)*(undefined4 *)(this + 8);
  }
  uVar5 = Encryption::crc32N((void *)(*(int *)(this + 0x14) + 0xf),*(int *)(this + 8) + -0xf);
  uVar1 = (undefined1)((uint)uVar4 >> 8);
  uVar2 = (undefined1)((uint)uVar4 >> 0x10);
  uVar3 = (undefined1)((uint)uVar4 >> 0x18);
  if (*(int *)this == 0) {
    *(char *)(*(int *)(this + 0x14) + 7) = (char)uVar4;
    *(undefined1 *)(*(int *)(this + 0x14) + 8) = uVar1;
    *(undefined1 *)(*(int *)(this + 0x14) + 9) = uVar2;
    *(undefined1 *)(*(int *)(this + 0x14) + 10) = uVar3;
    *(char *)(*(int *)(this + 0x14) + 0xb) = (char)uVar5;
    *(char *)(*(int *)(this + 0x14) + 0xc) = (char)((uint)uVar5 >> 8);
    *(char *)(*(int *)(this + 0x14) + 0xd) = (char)((uint)uVar5 >> 0x10);
    *(char *)(*(int *)(this + 0x14) + 0xe) = (char)((uint)uVar5 >> 0x18);
  }
  else if (*(int *)this == 1) {
    *(undefined1 *)(*(int *)(this + 0x14) + 7) = uVar3;
    *(undefined1 *)(*(int *)(this + 0x14) + 8) = uVar2;
    *(undefined1 *)(*(int *)(this + 0x14) + 9) = uVar1;
    *(char *)(*(int *)(this + 0x14) + 10) = (char)uVar4;
    *(undefined1 *)(*(int *)(this + 0x14) + 0xb) = 0;
    *(undefined1 *)(*(int *)(this + 0x14) + 0xc) = 0;
    *(undefined1 *)(*(int *)(this + 0x14) + 0xd) = 0;
    *(undefined1 *)(*(int *)(this + 0x14) + 0xe) = 0;
  }
  else {
    LogManager::logFormat
              (1,"packet_buf.cpp","void PacketBuf::encFinalize()",0x439,"m_byte_encoding error %d",
               *(undefined4 *)this);
  }
  return;
}
```
