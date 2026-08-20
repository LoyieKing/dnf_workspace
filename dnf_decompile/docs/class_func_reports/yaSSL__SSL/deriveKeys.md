# deriveKeys

`_ZN5yaSSL3SSL10deriveKeysEv`

`yaSSL::SSL::deriveKeys()`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874fe30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874fe30  _ZN5yaSSL3SSL10deriveKeysEv
#           yaSSL::SSL::deriveKeys()
# range [0x0874fe30, 0x087501ba]
0874fe30 +0x000:  push   %ebp
0874fe31 +0x001:  mov    %esp,%ebp
0874fe33 +0x003:  push   %edi
0874fe34 +0x004:  push   %esi
0874fe35 +0x005:  push   %ebx
0874fe36 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0874fe3b +0x00b:  add    $0xc1cd5d,%ebx
0874fe41 +0x011:  sub    $0x13c,%esp
0874fe47 +0x017:  mov    0x8(%ebp),%eax
0874fe4a +0x01a:  add    $0x68,%eax
0874fe4d +0x01d:  mov    %eax,-0x110(%ebp)
0874fe53 +0x023:  mov    %eax,(%esp)
0874fe56 +0x026:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0874fe5b +0x02b:  mov    -0x110(%ebp),%ecx
0874fe61 +0x031:  movzbl 0x14(%eax),%esi
0874fe65 +0x035:  mov    %ecx,(%esp)
0874fe68 +0x038:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0874fe6d +0x03d:  movzbl 0xc(%eax),%eax
0874fe71 +0x041:  lea    (%eax,%esi,1),%esi
0874fe74 +0x044:  mov    -0x110(%ebp),%eax
0874fe7a +0x04a:  mov    %eax,(%esp)
0874fe7d +0x04d:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0874fe82 +0x052:  lea    -0x38(%ebp),%ecx
0874fe85 +0x055:  movzbl 0xd(%eax),%eax
0874fe89 +0x059:  mov    %ecx,-0x120(%ebp)
0874fe8f +0x05f:  mov    %ecx,(%esp)
0874fe92 +0x062:  add    %eax,%esi
0874fe94 +0x064:  lea    0xf(%esi,%esi,1),%esi
0874fe98 +0x068:  mov    %esi,-0x11c(%ebp)
0874fe9e +0x06e:  sarl   $0x4,-0x11c(%ebp)
0874fea5 +0x075:  mov    -0x11c(%ebp),%eax
0874feab +0x07b:  shl    $0x4,%eax
0874feae +0x07e:  mov    %eax,0x4(%esp)
0874feb2 +0x082:  call   087972e0 <_ZN5yaSSL12input_bufferC1Ej>  ; yaSSL::input_buffer::input_buffer(unsigned int)
0874feb7 +0x087:  lea    -0x20(%ebp),%eax
0874feba +0x08a:  mov    %eax,-0x128(%ebp)
0874fec0 +0x090:  mov    %eax,(%esp)
0874fec3 +0x093:  call   0879a110 <_ZN5yaSSL3MD5C1Ev>  ; yaSSL::MD5::MD5()
0874fec8 +0x098:  lea    -0x28(%ebp),%ecx
0874fecb +0x09b:  mov    %ecx,-0x124(%ebp)
0874fed1 +0x0a1:  mov    %ecx,(%esp)
0874fed4 +0x0a4:  call   0879a190 <_ZN5yaSSL3SHAC1Ev>  ; yaSSL::SHA::SHA()
0874fed9 +0x0a9:  mov    -0x110(%ebp),%eax
0874fedf +0x0af:  mov    %eax,(%esp)
0874fee2 +0x0b2:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0874fee7 +0x0b7:  lea    0x4(%eax),%edx
0874feea +0x0ba:  mov    0x4(%eax),%eax
0874feed +0x0bd:  mov    %eax,-0x90(%ebp)
0874fef3 +0x0c3:  mov    0x4(%edx),%eax
0874fef6 +0x0c6:  mov    %eax,-0x8c(%ebp)
0874fefc +0x0cc:  mov    0x8(%edx),%eax
0874feff +0x0cf:  mov    %eax,-0x88(%ebp)
0874ff05 +0x0d5:  mov    0xc(%edx),%eax
0874ff08 +0x0d8:  mov    %eax,-0x84(%ebp)
0874ff0e +0x0de:  mov    0x10(%edx),%eax
0874ff11 +0x0e1:  mov    %eax,-0x80(%ebp)
0874ff14 +0x0e4:  mov    0x14(%edx),%eax
0874ff17 +0x0e7:  mov    %eax,-0x7c(%ebp)
0874ff1a +0x0ea:  mov    0x18(%edx),%eax
0874ff1d +0x0ed:  mov    %eax,-0x78(%ebp)
0874ff20 +0x0f0:  mov    0x1c(%edx),%eax
0874ff23 +0x0f3:  mov    %eax,-0x74(%ebp)
0874ff26 +0x0f6:  mov    0x20(%edx),%eax
0874ff29 +0x0f9:  mov    %eax,-0x70(%ebp)
0874ff2c +0x0fc:  mov    0x24(%edx),%eax
0874ff2f +0x0ff:  mov    %eax,-0x6c(%ebp)
0874ff32 +0x102:  mov    0x28(%edx),%eax
0874ff35 +0x105:  mov    %eax,-0x68(%ebp)
0874ff38 +0x108:  mov    0x2c(%edx),%eax
0874ff3b +0x10b:  mov    -0x11c(%ebp),%edx
0874ff41 +0x111:  mov    %eax,-0x64(%ebp)
0874ff44 +0x114:  test   %edx,%edx
0874ff46 +0x116:  je     08750168 <+0x338>
0874ff4c +0x11c:  lea    -0x107(%ebp),%ecx
0874ff52 +0x122:  xor    %esi,%esi
0874ff54 +0x124:  lea    -0x4c(%ebp),%eax
0874ff57 +0x127:  movl   $0x0,-0x114(%ebp)
0874ff61 +0x131:  lea    -0x90(%ebp),%edi
0874ff67 +0x137:  mov    %ecx,-0x10c(%ebp)
0874ff6d +0x13d:  mov    %eax,-0x12c(%ebp)
0874ff73 +0x143:  jmp    08750107 <+0x2d7>
0874ff78 +0x148:  mov    -0x110(%ebp),%eax
0874ff7e +0x14e:  lea    0x1(%esi),%ecx
0874ff81 +0x151:  mov    %ecx,-0x118(%ebp)
0874ff87 +0x157:  mov    %eax,(%esp)
0874ff8a +0x15a:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0874ff8f +0x15f:  mov    -0x10c(%ebp),%edx
0874ff95 +0x165:  add    -0x118(%ebp),%edx
0874ff9b +0x16b:  lea    0x4(%eax),%ecx
0874ff9e +0x16e:  mov    0x4(%eax),%eax
0874ffa1 +0x171:  mov    %eax,(%edx)
0874ffa3 +0x173:  mov    0x4(%ecx),%eax
0874ffa6 +0x176:  mov    %eax,0x4(%edx)
0874ffa9 +0x179:  mov    0x8(%ecx),%eax
0874ffac +0x17c:  mov    %eax,0x8(%edx)
0874ffaf +0x17f:  mov    0xc(%ecx),%eax
0874ffb2 +0x182:  mov    %eax,0xc(%edx)
0874ffb5 +0x185:  mov    0x10(%ecx),%eax
0874ffb8 +0x188:  mov    %eax,0x10(%edx)
0874ffbb +0x18b:  mov    0x14(%ecx),%eax
0874ffbe +0x18e:  mov    %eax,0x14(%edx)
0874ffc1 +0x191:  mov    0x18(%ecx),%eax
0874ffc4 +0x194:  mov    %eax,0x18(%edx)
0874ffc7 +0x197:  mov    0x1c(%ecx),%eax
0874ffca +0x19a:  mov    %eax,0x1c(%edx)
0874ffcd +0x19d:  mov    0x20(%ecx),%eax
0874ffd0 +0x1a0:  mov    %eax,0x20(%edx)
0874ffd3 +0x1a3:  mov    0x24(%ecx),%eax
0874ffd6 +0x1a6:  mov    %eax,0x24(%edx)
0874ffd9 +0x1a9:  mov    0x28(%ecx),%eax
0874ffdc +0x1ac:  mov    %eax,0x28(%edx)
0874ffdf +0x1af:  mov    0x2c(%ecx),%eax
0874ffe2 +0x1b2:  mov    -0x110(%ebp),%ecx
0874ffe8 +0x1b8:  mov    %eax,0x2c(%edx)
0874ffeb +0x1bb:  mov    %ecx,(%esp)
0874ffee +0x1be:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0874fff3 +0x1c3:  mov    -0x10c(%ebp),%ecx
0874fff9 +0x1c9:  lea    0x31(%ecx,%esi,1),%edx
0874fffd +0x1cd:  lea    0x54(%eax),%ecx
08750000 +0x1d0:  mov    0x54(%eax),%eax
08750003 +0x1d3:  mov    %eax,(%edx)
08750005 +0x1d5:  mov    0x4(%ecx),%eax
08750008 +0x1d8:  mov    %eax,0x4(%edx)
0875000b +0x1db:  mov    0x8(%ecx),%eax
0875000e +0x1de:  mov    %eax,0x8(%edx)
08750011 +0x1e1:  mov    0xc(%ecx),%eax
08750014 +0x1e4:  mov    %eax,0xc(%edx)
08750017 +0x1e7:  mov    0x10(%ecx),%eax
0875001a +0x1ea:  mov    %eax,0x10(%edx)
0875001d +0x1ed:  mov    0x14(%ecx),%eax
08750020 +0x1f0:  mov    %eax,0x14(%edx)
08750023 +0x1f3:  mov    0x18(%ecx),%eax
08750026 +0x1f6:  mov    %eax,0x18(%edx)
08750029 +0x1f9:  mov    0x1c(%ecx),%eax
0875002c +0x1fc:  mov    %eax,0x1c(%edx)
0875002f +0x1ff:  mov    -0x110(%ebp),%eax
08750035 +0x205:  mov    %eax,(%esp)
08750038 +0x208:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0875003d +0x20d:  mov    -0x10c(%ebp),%ecx
08750043 +0x213:  lea    0x51(%ecx,%esi,1),%edx
08750047 +0x217:  add    $0x71,%esi
0875004a +0x21a:  lea    0x34(%eax),%ecx
0875004d +0x21d:  mov    0x34(%eax),%eax
08750050 +0x220:  mov    %eax,(%edx)
08750052 +0x222:  mov    0x4(%ecx),%eax
08750055 +0x225:  mov    %eax,0x4(%edx)
08750058 +0x228:  mov    0x8(%ecx),%eax
0875005b +0x22b:  mov    %eax,0x8(%edx)
0875005e +0x22e:  mov    0xc(%ecx),%eax
08750061 +0x231:  mov    %eax,0xc(%edx)
08750064 +0x234:  mov    0x10(%ecx),%eax
08750067 +0x237:  mov    %eax,0x10(%edx)
0875006a +0x23a:  mov    0x14(%ecx),%eax
0875006d +0x23d:  mov    %eax,0x14(%edx)
08750070 +0x240:  mov    0x18(%ecx),%eax
08750073 +0x243:  mov    %eax,0x18(%edx)
08750076 +0x246:  mov    0x1c(%ecx),%eax
08750079 +0x249:  mov    -0x12c(%ebp),%ecx
0875007f +0x24f:  mov    %eax,0x1c(%edx)
08750082 +0x252:  mov    -0x10c(%ebp),%eax
08750088 +0x258:  mov    %esi,0xc(%esp)
0875008c +0x25c:  mov    %ecx,0x4(%esp)
08750090 +0x260:  mov    %eax,0x8(%esp)
08750094 +0x264:  mov    -0x124(%ebp),%eax
0875009a +0x26a:  mov    %eax,(%esp)
0875009d +0x26d:  call   087999c0 <_ZN5yaSSL3SHA10get_digestEPhPKhj>  ; yaSSL::SHA::get_digest(unsigned char*, unsigned char const*, unsigned int)
087500a2 +0x272:  mov    -0x4c(%ebp),%eax
087500a5 +0x275:  mov    %eax,0x30(%edi)
087500a8 +0x278:  mov    -0x48(%ebp),%eax
087500ab +0x27b:  mov    %eax,0x34(%edi)
087500ae +0x27e:  mov    -0x44(%ebp),%eax
087500b1 +0x281:  mov    %eax,0x38(%edi)
087500b4 +0x284:  mov    -0x40(%ebp),%eax
087500b7 +0x287:  mov    %eax,0x3c(%edi)
087500ba +0x28a:  mov    -0x3c(%ebp),%eax
087500bd +0x28d:  mov    %eax,0x40(%edi)
087500c0 +0x290:  mov    -0x120(%ebp),%ecx
087500c6 +0x296:  mov    %ecx,(%esp)
087500c9 +0x299:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
087500ce +0x29e:  movl   $0x44,0xc(%esp)
087500d6 +0x2a6:  mov    %edi,0x8(%esp)
087500da +0x2aa:  add    -0x114(%ebp),%eax
087500e0 +0x2b0:  mov    %eax,0x4(%esp)
087500e4 +0x2b4:  mov    -0x128(%ebp),%eax
087500ea +0x2ba:  mov    %eax,(%esp)
087500ed +0x2bd:  call   08799c90 <_ZN5yaSSL3MD510get_digestEPhPKhj>  ; yaSSL::MD5::get_digest(unsigned char*, unsigned char const*, unsigned int)
087500f2 +0x2c2:  mov    -0x118(%ebp),%esi
087500f8 +0x2c8:  addl   $0x10,-0x114(%ebp)
087500ff +0x2cf:  cmp    %esi,-0x11c(%ebp)
08750105 +0x2d5:  jle    08750168 <+0x338>
08750107 +0x2d7:  mov    -0x10c(%ebp),%eax
0875010d +0x2dd:  mov    %esi,%edx
0875010f +0x2df:  call   0874f210 <_ZN5yaSSL12_GLOBAL__N_1L9setPrefixEPhi>  ; yaSSL::(anonymous namespace)::setPrefix(unsigned char*, int)
08750114 +0x2e4:  test   %al,%al
08750116 +0x2e6:  jne    0874ff78 <+0x148>
0875011c +0x2ec:  mov    0x8(%ebp),%ecx
0875011f +0x2ef:  movl   $0x69,0x4(%esp)
08750127 +0x2f7:  mov    %ecx,(%esp)
0875012a +0x2fa:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
0875012f +0x2ff:  mov    -0x124(%ebp),%eax
08750135 +0x305:  mov    %eax,(%esp)
08750138 +0x308:  call   08798cb0 <_ZN5yaSSL3SHAD1Ev>  ; yaSSL::SHA::~SHA()
0875013d +0x30d:  mov    -0x128(%ebp),%ecx
08750143 +0x313:  mov    %ecx,(%esp)
08750146 +0x316:  call   08798d40 <_ZN5yaSSL3MD5D1Ev>  ; yaSSL::MD5::~MD5()
0875014b +0x31b:  mov    -0x120(%ebp),%eax
08750151 +0x321:  mov    %eax,(%esp)
08750154 +0x324:  call   08797360 <_ZN5yaSSL12input_bufferD1Ev>  ; yaSSL::input_buffer::~input_buffer()
08750159 +0x329:  add    $0x13c,%esp
0875015f +0x32f:  pop    %ebx
08750160 +0x330:  pop    %esi
08750161 +0x331:  pop    %edi
08750162 +0x332:  pop    %ebp
08750163 +0x333:  ret
08750164 +0x334:  lea    0x0(%esi,%eiz,1),%esi
08750168 +0x338:  mov    -0x120(%ebp),%ecx
0875016e +0x33e:  mov    %ecx,(%esp)
08750171 +0x341:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
08750176 +0x346:  mov    %eax,0x4(%esp)
0875017a +0x34a:  mov    0x8(%ebp),%eax
0875017d +0x34d:  mov    %eax,(%esp)
08750180 +0x350:  call   0874f0b0 <_ZN5yaSSL3SSL9storeKeysEPKh>  ; yaSSL::SSL::storeKeys(unsigned char const*)
08750185 +0x355:  mov    -0x124(%ebp),%ecx
0875018b +0x35b:  mov    %ecx,(%esp)
0875018e +0x35e:  call   08798cb0 <_ZN5yaSSL3SHAD1Ev>  ; yaSSL::SHA::~SHA()
08750193 +0x363:  mov    -0x128(%ebp),%eax
08750199 +0x369:  mov    %eax,(%esp)
0875019c +0x36c:  call   08798d40 <_ZN5yaSSL3MD5D1Ev>  ; yaSSL::MD5::~MD5()
087501a1 +0x371:  mov    -0x120(%ebp),%ecx
087501a7 +0x377:  mov    %ecx,(%esp)
087501aa +0x37a:  call   08797360 <_ZN5yaSSL12input_bufferD1Ev>  ; yaSSL::input_buffer::~input_buffer()
087501af +0x37f:  add    $0x13c,%esp
087501b5 +0x385:  pop    %ebx
087501b6 +0x386:  pop    %esi
087501b7 +0x387:  pop    %edi
087501b8 +0x388:  pop    %ebp
087501b9 +0x389:  ret
087501ba +0x38a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::SSL::deriveKeys @ 0x874fe30

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::deriveKeys() */

void __thiscall yaSSL::SSL::deriveKeys(SSL *this)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  Security *this_00;
  int iVar5;
  int iVar6;
  int iVar7;
  uchar *puVar8;
  int local_118;
  uchar local_10b [5];
  undefined4 local_106 [28];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  input_buffer local_3c [16];
  SHA local_2c [8];
  MD5 local_24 [16];
  undefined4 uStack_14;
  
  uStack_14 = 0x874fe3b;
  this_00 = (Security *)(this + 0x68);
  iVar5 = Security::get_parms(this_00);
  bVar2 = *(byte *)(iVar5 + 0x14);
  iVar5 = Security::get_parms(this_00);
  bVar3 = *(byte *)(iVar5 + 0xc);
  iVar5 = Security::get_parms(this_00);
  iVar5 = (int)(((uint)bVar3 + (uint)bVar2 + (uint)*(byte *)(iVar5 + 0xd)) * 2 + 0xf) >> 4;
  input_buffer::input_buffer(local_3c,iVar5 << 4);
  MD5::MD5(local_24);
  SHA::SHA(local_2c);
  iVar6 = Security::get_connection(this_00);
  local_94 = *(undefined4 *)(iVar6 + 4);
  local_90 = *(undefined4 *)(iVar6 + 8);
  local_8c = *(undefined4 *)(iVar6 + 0xc);
  local_88 = *(undefined4 *)(iVar6 + 0x10);
  local_84 = *(undefined4 *)(iVar6 + 0x14);
  local_80 = *(undefined4 *)(iVar6 + 0x18);
  local_7c = *(undefined4 *)(iVar6 + 0x1c);
  local_78 = *(undefined4 *)(iVar6 + 0x20);
  local_74 = *(undefined4 *)(iVar6 + 0x24);
  local_70 = *(undefined4 *)(iVar6 + 0x28);
  local_6c = *(undefined4 *)(iVar6 + 0x2c);
  local_68 = *(undefined4 *)(iVar6 + 0x30);
  if (iVar5 != 0) {
    local_118 = 0;
    iVar6 = 0;
    do {
      cVar4 = (anonymous_namespace)::setPrefix(local_10b,iVar6);
      if (cVar4 == '\0') {
        SetError(this,0x69);
        SHA::~SHA(local_2c);
        MD5::~MD5(local_24);
        input_buffer::~input_buffer(local_3c);
        return;
      }
      iVar1 = iVar6 + 1;
      iVar7 = Security::get_connection(this_00);
      *(undefined4 *)(local_10b + iVar1) = *(undefined4 *)(iVar7 + 4);
      *(undefined4 *)((int)local_106 + iVar6) = *(undefined4 *)(iVar7 + 8);
      *(undefined4 *)((int)local_106 + iVar6 + 4) = *(undefined4 *)(iVar7 + 0xc);
      *(undefined4 *)((int)local_106 + iVar6 + 8) = *(undefined4 *)(iVar7 + 0x10);
      *(undefined4 *)((int)local_106 + iVar6 + 0xc) = *(undefined4 *)(iVar7 + 0x14);
      *(undefined4 *)((int)local_106 + iVar6 + 0x10) = *(undefined4 *)(iVar7 + 0x18);
      *(undefined4 *)((int)local_106 + iVar6 + 0x14) = *(undefined4 *)(iVar7 + 0x1c);
      *(undefined4 *)((int)local_106 + iVar6 + 0x18) = *(undefined4 *)(iVar7 + 0x20);
      *(undefined4 *)((int)local_106 + iVar6 + 0x1c) = *(undefined4 *)(iVar7 + 0x24);
      *(undefined4 *)((int)local_106 + iVar6 + 0x20) = *(undefined4 *)(iVar7 + 0x28);
      *(undefined4 *)((int)local_106 + iVar6 + 0x24) = *(undefined4 *)(iVar7 + 0x2c);
      *(undefined4 *)((int)local_106 + iVar6 + 0x28) = *(undefined4 *)(iVar7 + 0x30);
      iVar7 = Security::get_connection(this_00);
      *(undefined4 *)((int)local_106 + iVar6 + 0x2c) = *(undefined4 *)(iVar7 + 0x54);
      *(undefined4 *)((int)local_106 + iVar6 + 0x30) = *(undefined4 *)(iVar7 + 0x58);
      *(undefined4 *)((int)local_106 + iVar6 + 0x34) = *(undefined4 *)(iVar7 + 0x5c);
      *(undefined4 *)((int)local_106 + iVar6 + 0x38) = *(undefined4 *)(iVar7 + 0x60);
      *(undefined4 *)((int)local_106 + iVar6 + 0x3c) = *(undefined4 *)(iVar7 + 100);
      *(undefined4 *)((int)local_106 + iVar6 + 0x40) = *(undefined4 *)(iVar7 + 0x68);
      *(undefined4 *)((int)local_106 + iVar6 + 0x44) = *(undefined4 *)(iVar7 + 0x6c);
      *(undefined4 *)((int)local_106 + iVar6 + 0x48) = *(undefined4 *)(iVar7 + 0x70);
      iVar7 = Security::get_connection(this_00);
      *(undefined4 *)((int)local_106 + iVar6 + 0x4c) = *(undefined4 *)(iVar7 + 0x34);
      *(undefined4 *)((int)local_106 + iVar6 + 0x50) = *(undefined4 *)(iVar7 + 0x38);
      *(undefined4 *)((int)local_106 + iVar6 + 0x54) = *(undefined4 *)(iVar7 + 0x3c);
      *(undefined4 *)((int)local_106 + iVar6 + 0x58) = *(undefined4 *)(iVar7 + 0x40);
      *(undefined4 *)((int)local_106 + iVar6 + 0x5c) = *(undefined4 *)(iVar7 + 0x44);
      *(undefined4 *)((int)local_106 + iVar6 + 0x60) = *(undefined4 *)(iVar7 + 0x48);
      *(undefined4 *)((int)local_106 + iVar6 + 100) = *(undefined4 *)(iVar7 + 0x4c);
      *(undefined4 *)((int)local_106 + iVar6 + 0x68) = *(undefined4 *)(iVar7 + 0x50);
      SHA::get_digest(local_2c,(uchar *)&local_50,local_10b,iVar6 + 0x71);
      local_64 = local_50;
      local_60 = local_4c;
      local_5c = local_48;
      local_58 = local_44;
      local_54 = local_40;
      iVar6 = input_buffer::get_buffer(local_3c);
      MD5::get_digest(local_24,(uchar *)(iVar6 + local_118),(uchar *)&local_94,0x44);
      local_118 = local_118 + 0x10;
      iVar6 = iVar1;
    } while (iVar1 < iVar5);
  }
  puVar8 = (uchar *)input_buffer::get_buffer(local_3c);
  storeKeys(this,puVar8);
  SHA::~SHA(local_2c);
  MD5::~MD5(local_24);
  input_buffer::~input_buffer(local_3c);
  return;
}
```
