# operator>>

`_ZN5yaSSLrsERNS_12input_bufferERNS_11ClientHelloE`

`yaSSL::operator>>(yaSSL::input_buffer&, yaSSL::ClientHello&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08749210` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08749210  _ZN5yaSSLrsERNS_12input_bufferERNS_11ClientHelloE
#           yaSSL::operator>>(yaSSL::input_buffer&, yaSSL::ClientHello&)
# range [0x08749210, 0x087493fc]
08749210 +0x000:  push   %ebp
08749211 +0x001:  mov    %esp,%ebp
08749213 +0x003:  push   %edi
08749214 +0x004:  push   %esi
08749215 +0x005:  push   %ebx
08749216 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0874921b +0x00b:  add    $0xc2397d,%ebx
08749221 +0x011:  sub    $0x3c,%esp
08749224 +0x014:  mov    0x8(%ebp),%edi
08749227 +0x017:  mov    0xc(%ebp),%esi
0874922a +0x01a:  mov    %edi,(%esp)
0874922d +0x01d:  call   08796da0 <_ZNK5yaSSL12input_buffer11get_currentEv>  ; yaSSL::input_buffer::get_current() const
08749232 +0x022:  movl   $0xfeedbeef,0x4(%esp)
0874923a +0x02a:  mov    %edi,(%esp)
0874923d +0x02d:  mov    %eax,-0x2c(%ebp)
08749240 +0x030:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
08749245 +0x035:  movzbl (%eax),%eax
08749248 +0x038:  mov    %al,0x8(%esi)
0874924b +0x03b:  movl   $0xfeedbeef,0x4(%esp)
08749253 +0x043:  mov    %edi,(%esp)
08749256 +0x046:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
0874925b +0x04b:  movzbl (%eax),%eax
0874925e +0x04e:  mov    %al,0x9(%esi)
08749261 +0x051:  lea    0xa(%esi),%eax
08749264 +0x054:  mov    %eax,0x4(%esp)
08749268 +0x058:  movl   $0x20,0x8(%esp)
08749270 +0x060:  mov    %edi,(%esp)
08749273 +0x063:  call   08797040 <_ZN5yaSSL12input_buffer4readEPhj>  ; yaSSL::input_buffer::read(unsigned char*, unsigned int)
08749278 +0x068:  movl   $0xfeedbeef,0x4(%esp)
08749280 +0x070:  mov    %edi,(%esp)
08749283 +0x073:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
08749288 +0x078:  movzbl (%eax),%eax
0874928b +0x07b:  test   %al,%al
0874928d +0x07d:  mov    %al,0x2a(%esi)
08749290 +0x080:  jne    087493e0 <+0x1d0>
08749296 +0x086:  movl   $0xfeedbeef,0x4(%esp)
0874929e +0x08e:  mov    %edi,(%esp)
087492a1 +0x091:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
087492a6 +0x096:  movzbl (%eax),%eax
087492a9 +0x099:  movl   $0xfeedbeef,0x4(%esp)
087492b1 +0x0a1:  mov    %edi,(%esp)
087492b4 +0x0a4:  mov    %al,-0x1a(%ebp)
087492b7 +0x0a7:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
087492bc +0x0ac:  movzbl (%eax),%eax
087492bf +0x0af:  mov    %al,-0x19(%ebp)
087492c2 +0x0b2:  lea    -0x1c(%ebp),%eax
087492c5 +0x0b5:  mov    %eax,0x4(%esp)
087492c9 +0x0b9:  lea    -0x1a(%ebp),%eax
087492cc +0x0bc:  mov    %eax,(%esp)
087492cf +0x0bf:  call   0874dd90 <_ZN5yaSSL5ato16EPKhRt>  ; yaSSL::ato16(unsigned char const*, unsigned short&)
087492d4 +0x0c4:  movzwl -0x1c(%ebp),%eax
087492d8 +0x0c8:  cmp    $0x7f,%ax
087492dc +0x0cc:  movzwl %ax,%edx
087492df +0x0cf:  jbe    087492eb <+0xdb>
087492e1 +0x0d1:  mov    $0x80,%edx
087492e6 +0x0d6:  mov    $0x80,%eax
087492eb +0x0db:  mov    %ax,0x4c(%esi)
087492ef +0x0df:  lea    0x4e(%esi),%eax
087492f2 +0x0e2:  mov    %eax,0x4(%esp)
087492f6 +0x0e6:  mov    %edx,0x8(%esp)
087492fa +0x0ea:  mov    %edi,(%esp)
087492fd +0x0ed:  call   08797040 <_ZN5yaSSL12input_buffer4readEPhj>  ; yaSSL::input_buffer::read(unsigned char*, unsigned int)
08749302 +0x0f2:  movzwl 0x4c(%esi),%eax
08749306 +0x0f6:  cmp    -0x1c(%ebp),%ax
0874930a +0x0fa:  jb     087493b8 <+0x1a8>
08749310 +0x100:  movl   $0xfeedbeef,0x4(%esp)
08749318 +0x108:  mov    %edi,(%esp)
0874931b +0x10b:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
08749320 +0x110:  movzbl (%eax),%eax
08749323 +0x113:  movl   $0x0,0xd0(%esi)
0874932d +0x11d:  mov    %al,0xce(%esi)
08749333 +0x123:  jmp    0874933f <+0x12f>
08749335 +0x125:  lea    0x0(%esi),%esi
08749338 +0x128:  movzbl 0xce(%esi),%eax
0874933f +0x12f:  lea    -0x1(%eax),%edx
08749342 +0x132:  test   %al,%al
08749344 +0x134:  mov    %dl,0xce(%esi)
0874934a +0x13a:  je     08749370 <+0x160>
0874934c +0x13c:  movl   $0xfeedbeef,0x4(%esp)
08749354 +0x144:  mov    %edi,(%esp)
08749357 +0x147:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
0874935c +0x14c:  cmpb   $0xdd,(%eax)
0874935f +0x14f:  jne    08749338 <+0x128>
08749361 +0x151:  movl   $0xdd,0xd0(%esi)
0874936b +0x15b:  jmp    08749338 <+0x128>
0874936d +0x15d:  lea    0x0(%esi),%esi
08749370 +0x160:  mov    %edi,(%esp)
08749373 +0x163:  call   08796da0 <_ZNK5yaSSL12input_buffer11get_currentEv>  ; yaSSL::input_buffer::get_current() const
08749378 +0x168:  mov    %esi,(%esp)
0874937b +0x16b:  mov    %eax,%edx
0874937d +0x16d:  sub    -0x2c(%ebp),%edx
08749380 +0x170:  mov    %edx,-0x30(%ebp)
08749383 +0x173:  call   08746aa0 <_ZNK5yaSSL13HandShakeBase10get_lengthEv>  ; yaSSL::HandShakeBase::get_length() const
08749388 +0x178:  mov    -0x30(%ebp),%edx
0874938b +0x17b:  cmp    %eax,%edx
0874938d +0x17d:  mov    %eax,%esi
0874938f +0x17f:  jae    087493ad <+0x19d>
08749391 +0x181:  mov    %edi,(%esp)
08749394 +0x184:  call   08796da0 <_ZNK5yaSSL12input_buffer11get_currentEv>  ; yaSSL::input_buffer::get_current() const
08749399 +0x189:  mov    -0x30(%ebp),%edx
0874939c +0x18c:  mov    %edi,(%esp)
0874939f +0x18f:  sub    %edx,%esi
087493a1 +0x191:  lea    (%esi,%eax,1),%edx
087493a4 +0x194:  mov    %edx,0x4(%esp)
087493a8 +0x198:  call   08796dd0 <_ZN5yaSSL12input_buffer11set_currentEj>  ; yaSSL::input_buffer::set_current(unsigned int)
087493ad +0x19d:  add    $0x3c,%esp
087493b0 +0x1a0:  mov    %edi,%eax
087493b2 +0x1a2:  pop    %ebx
087493b3 +0x1a3:  pop    %esi
087493b4 +0x1a4:  pop    %edi
087493b5 +0x1a5:  pop    %ebp
087493b6 +0x1a6:  ret
087493b7 +0x1a7:  nop
087493b8 +0x1a8:  mov    %edi,(%esp)
087493bb +0x1ab:  call   08796da0 <_ZNK5yaSSL12input_buffer11get_currentEv>  ; yaSSL::input_buffer::get_current() const
087493c0 +0x1b0:  movzwl 0x4c(%esi),%edx
087493c4 +0x1b4:  mov    %edi,(%esp)
087493c7 +0x1b7:  mov    %eax,%ecx
087493c9 +0x1b9:  movzwl -0x1c(%ebp),%eax
087493cd +0x1bd:  sub    %edx,%eax
087493cf +0x1bf:  add    %ecx,%eax
087493d1 +0x1c1:  mov    %eax,0x4(%esp)
087493d5 +0x1c5:  call   08796dd0 <_ZN5yaSSL12input_buffer11set_currentEj>  ; yaSSL::input_buffer::set_current(unsigned int)
087493da +0x1ca:  jmp    08749310 <+0x100>
087493df +0x1cf:  nop
087493e0 +0x1d0:  lea    0x2b(%esi),%eax
087493e3 +0x1d3:  movl   $0x20,0x8(%esp)
087493eb +0x1db:  mov    %eax,0x4(%esp)
087493ef +0x1df:  mov    %edi,(%esp)
087493f2 +0x1e2:  call   08797040 <_ZN5yaSSL12input_buffer4readEPhj>  ; yaSSL::input_buffer::read(unsigned char*, unsigned int)
087493f7 +0x1e7:  jmp    08749296 <+0x86>
087493fc +0x1ec:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::operator>> @ 0x8749210

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::input_buffer&, yaSSL::ClientHello&) */

input_buffer * yaSSL::operator>>(input_buffer *param_1,ClientHello *param_2)

{
  ClientHello CVar1;
  ushort uVar2;
  int iVar3;
  ClientHello *pCVar4;
  uchar *puVar5;
  undefined1 *puVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ushort local_20;
  uchar local_1e;
  undefined1 local_1d;
  undefined4 uStack_14;
  
  uStack_14 = 0x874921b;
  iVar3 = input_buffer::get_current(param_1);
  pCVar4 = (ClientHello *)input_buffer::operator[]((uint)param_1);
  param_2[8] = *pCVar4;
  pCVar4 = (ClientHello *)input_buffer::operator[]((uint)param_1);
  param_2[9] = *pCVar4;
  input_buffer::read(param_1,(uchar *)(param_2 + 10),0x20);
  pCVar4 = (ClientHello *)input_buffer::operator[]((uint)param_1);
  CVar1 = *pCVar4;
  param_2[0x2a] = CVar1;
  if (CVar1 != (ClientHello)0x0) {
    input_buffer::read(param_1,(uchar *)(param_2 + 0x2b),0x20);
  }
  puVar5 = (uchar *)input_buffer::operator[]((uint)param_1);
  local_1e = *puVar5;
  puVar6 = (undefined1 *)input_buffer::operator[]((uint)param_1);
  local_1d = *puVar6;
  ato16(&local_1e,&local_20);
  uVar10 = (uint)local_20;
  uVar2 = local_20;
  if (0x7f < local_20) {
    uVar10 = 0x80;
    uVar2 = 0x80;
  }
  *(ushort *)(param_2 + 0x4c) = uVar2;
  input_buffer::read(param_1,(uchar *)(param_2 + 0x4e),uVar10);
  if (*(ushort *)(param_2 + 0x4c) < local_20) {
    iVar8 = input_buffer::get_current(param_1);
    input_buffer::set_current(param_1,((uint)local_20 - (uint)*(ushort *)(param_2 + 0x4c)) + iVar8);
  }
  pCVar4 = (ClientHello *)input_buffer::operator[]((uint)param_1);
  CVar1 = *pCVar4;
  *(undefined4 *)(param_2 + 0xd0) = 0;
  param_2[0xce] = CVar1;
  while (param_2[0xce] = (ClientHello)((char)CVar1 + -1), CVar1 != (ClientHello)0x0) {
    pcVar7 = (char *)input_buffer::operator[]((uint)param_1);
    if (*pcVar7 == -0x23) {
      *(undefined4 *)(param_2 + 0xd0) = 0xdd;
    }
    CVar1 = param_2[0xce];
  }
  iVar8 = input_buffer::get_current(param_1);
  uVar10 = HandShakeBase::get_length((HandShakeBase *)param_2);
  if ((uint)(iVar8 - iVar3) < uVar10) {
    iVar9 = input_buffer::get_current(param_1);
    input_buffer::set_current(param_1,(uVar10 - (iVar8 - iVar3)) + iVar9);
  }
  return param_1;
}
```
