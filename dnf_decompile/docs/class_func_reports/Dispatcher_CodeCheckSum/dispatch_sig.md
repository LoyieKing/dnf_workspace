# dispatch_sig

`_ZN23Dispatcher_CodeCheckSum12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_CodeCheckSum::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CodeCheckSum` | `0x082044b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082044b0  _ZN23Dispatcher_CodeCheckSum12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_CodeCheckSum::dispatch_sig(CUser*, PacketBuf&)
# range [0x082044b0, 0x0820464d]
082044b0 +0x000:  push   %ebp
082044b1 +0x001:  mov    %esp,%ebp
082044b3 +0x003:  push   %edi
082044b4 +0x004:  push   %ebx
082044b5 +0x005:  sub    $0x150,%esp
082044bb +0x00b:  mov    0xc(%ebp),%eax
082044be +0x00e:  mov    %eax,(%esp)
082044c1 +0x011:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082044c6 +0x016:  cmp    $0x1,%eax
082044c9 +0x019:  setle  %al
082044cc +0x01c:  test   %al,%al
082044ce +0x01e:  je     082044da <+0x2a>
082044d0 +0x020:  mov    $0x0,%eax
082044d5 +0x025:  jmp    08204644 <+0x194>
082044da +0x02a:  movl   $0x0,-0x14(%ebp)
082044e1 +0x031:  lea    -0x14(%ebp),%eax
082044e4 +0x034:  mov    %eax,0x4(%esp)
082044e8 +0x038:  mov    0x10(%ebp),%eax
082044eb +0x03b:  mov    %eax,(%esp)
082044ee +0x03e:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
082044f3 +0x043:  xor    $0x1,%eax
082044f6 +0x046:  test   %al,%al
082044f8 +0x048:  je     08204523 <+0x73>
082044fa +0x04a:  movl   $0x0,0xc(%esp)
08204502 +0x052:  movl   $0x0,0x8(%esp)
0820450a +0x05a:  movl   $&_ZZN23Dispatcher_CodeCheckSum12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08204512 +0x062:  movl   $0x9bfd,(%esp)
08204519 +0x069:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820451e +0x06e:  jmp    08204644 <+0x194>
08204523 +0x073:  lea    -0x34(%ebp),%eax
08204526 +0x076:  movl   $0x20,0x8(%esp)
0820452e +0x07e:  mov    %eax,0x4(%esp)
08204532 +0x082:  mov    0x10(%ebp),%eax
08204535 +0x085:  mov    %eax,(%esp)
08204538 +0x088:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
0820453d +0x08d:  xor    $0x1,%eax
08204540 +0x090:  test   %al,%al
08204542 +0x092:  je     0820456d <+0xbd>
08204544 +0x094:  movl   $0x0,0xc(%esp)
0820454c +0x09c:  movl   $0x0,0x8(%esp)
08204554 +0x0a4:  movl   $&_ZZN23Dispatcher_CodeCheckSum12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820455c +0x0ac:  movl   $0x9bff,(%esp)
08204563 +0x0b3:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08204568 +0x0b8:  jmp    08204644 <+0x194>
0820456d +0x0bd:  lea    -0x138(%ebp),%ebx
08204573 +0x0c3:  mov    $0x0,%eax
08204578 +0x0c8:  mov    $0x41,%edx
0820457d +0x0cd:  mov    %ebx,%edi
0820457f +0x0cf:  mov    %edx,%ecx
08204581 +0x0d1:  rep stos %eax,%es:(%edi)
08204583 +0x0d3:  lea    -0x138(%ebp),%eax
08204589 +0x0d9:  mov    %eax,0x8(%esp)
0820458d +0x0dd:  lea    -0x34(%ebp),%eax
08204590 +0x0e0:  mov    %eax,0x4(%esp)
08204594 +0x0e4:  mov    0xc(%ebp),%eax
08204597 +0x0e7:  mov    %eax,(%esp)
0820459a +0x0ea:  call   0867ebba <_ZN5CUser17checkCodeChecksumERK16CodeHackChecksumPc>  ; CUser::checkCodeChecksum(CodeHackChecksum const&, char*)
0820459f +0x0ef:  mov    %al,-0xd(%ebp)
082045a2 +0x0f2:  mov    0xc(%ebp),%eax
082045a5 +0x0f5:  mov    %eax,(%esp)
082045a8 +0x0f8:  call   0822fd9c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5446>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5446
082045ad +0x0fd:  movzbl -0xd(%ebp),%eax
082045b1 +0x101:  xor    $0x1,%eax
082045b4 +0x104:  test   %al,%al
082045b6 +0x106:  je     0820463f <+0x18f>
082045bc +0x10c:  movl   $0x2,-0xc(%ebp)
082045c3 +0x113:  movl   $".exe.bak",0x4(%esp)
082045cb +0x11b:  lea    -0x138(%ebp),%eax
082045d1 +0x121:  mov    %eax,(%esp)
082045d4 +0x124:  call   0822a972 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1c
082045d9 +0x129:  test   %eax,%eax
082045db +0x12b:  sete   %al
082045de +0x12e:  test   %al,%al
082045e0 +0x130:  je     082045e9 <+0x139>
082045e2 +0x132:  movl   $0x3,-0xc(%ebp)
082045e9 +0x139:  mov    0xc(%ebp),%eax
082045ec +0x13c:  mov    %eax,(%esp)
082045ef +0x13f:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082045f4 +0x144:  cmp    $0x1,%eax
082045f7 +0x147:  setg   %al
082045fa +0x14a:  test   %al,%al
082045fc +0x14c:  je     08204638 <+0x188>
082045fe +0x14e:  mov    0xc(%ebp),%eax
08204601 +0x151:  mov    %eax,(%esp)
08204604 +0x154:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08204609 +0x159:  movl   $0x0,0x14(%esp)
08204611 +0x161:  movl   $0x0,0x10(%esp)
08204619 +0x169:  movl   $0x1,0xc(%esp)
08204621 +0x171:  movl   $0x3c8,0x8(%esp)
08204629 +0x179:  mov    0xc(%ebp),%edx
0820462c +0x17c:  mov    %edx,0x4(%esp)
08204630 +0x180:  mov    %eax,(%esp)
08204633 +0x183:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
08204638 +0x188:  mov    $0x0,%eax
0820463d +0x18d:  jmp    08204644 <+0x194>
0820463f +0x18f:  mov    $0x0,%eax
08204644 +0x194:  add    $0x150,%esp
0820464a +0x19a:  pop    %ebx
0820464b +0x19b:  pop    %edi
0820464c +0x19c:  pop    %ebp
0820464d +0x19d:  ret
```

## 反编译 C

```c
// Dispatcher_CodeCheckSum::dispatch_sig @ 0x82044b0

/* Dispatcher_CodeCheckSum::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_CodeCheckSum::dispatch_sig
          (Dispatcher_CodeCheckSum *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CHackAnalyzer *pCVar4;
  char *pcVar5;
  byte bVar6;
  char local_13c [260];
  CodeHackChecksum local_38 [32];
  int local_18;
  char local_11;
  undefined4 local_10;
  
  bVar6 = 0;
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 2) {
    uVar3 = 0;
  }
  else {
    local_18 = 0;
    cVar1 = PacketBuf::get_int(param_2,&local_18);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_binary(param_2,(char *)local_38,0x20);
      if (cVar1 == '\x01') {
        pcVar5 = local_13c;
        for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
          pcVar5[0] = '\0';
          pcVar5[1] = '\0';
          pcVar5[2] = '\0';
          pcVar5[3] = '\0';
          pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
        }
        local_11 = CUser::checkCodeChecksum(param_1,local_38,local_13c);
        CUser::IncChecksumAnswerCount(param_1);
        if (local_11 == '\x01') {
          uVar3 = 0;
        }
        else {
          local_10 = 2;
          iVar2 = std::strstr(local_13c,".exe.bak");
          if (iVar2 == 0) {
            local_10 = 3;
          }
          iVar2 = CUser::get_state(param_1);
          if (1 < iVar2) {
            pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,param_1,0x3c8,1,0,0);
          }
          uVar3 = 0;
        }
      }
      else {
        uVar3 = LineFunc(0x9bff,
                         "virtual int Dispatcher_CodeCheckSum::dispatch_sig(CUser*, PacketBuf&)",0,0
                        );
      }
    }
    else {
      uVar3 = LineFunc(0x9bfd,
                       "virtual int Dispatcher_CodeCheckSum::dispatch_sig(CUser*, PacketBuf&)",0,0);
    }
  }
  return uVar3;
}
```
