# _SendMatchStatePacket

`_ZN18online_preliminary18COnlinePreliminary21_SendMatchStatePacketEii`

`online_preliminary::COnlinePreliminary::_SendMatchStatePacket(int, int)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x0856214a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0856214a  _ZN18online_preliminary18COnlinePreliminary21_SendMatchStatePacketEii
#           online_preliminary::COnlinePreliminary::_SendMatchStatePacket(int, int)
# range [0x0856214a, 0x0856224f]
0856214a +0x000:  push   %ebp
0856214b +0x001:  mov    %esp,%ebp
0856214d +0x003:  push   %esi
0856214e +0x004:  push   %ebx
0856214f +0x005:  sub    $0x30,%esp
08562152 +0x008:  lea    -0x20(%ebp),%eax
08562155 +0x00b:  mov    %eax,(%esp)
08562158 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0856215d +0x013:  movl   $0xaf,0x8(%esp)
08562165 +0x01b:  movl   $0x0,0x4(%esp)
0856216d +0x023:  lea    -0x20(%ebp),%eax
08562170 +0x026:  mov    %eax,(%esp)
08562173 +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08562178 +0x02e:  mov    0xc(%ebp),%eax
0856217b +0x031:  mov    %eax,0x4(%esp)
0856217f +0x035:  lea    -0x20(%ebp),%eax
08562182 +0x038:  mov    %eax,(%esp)
08562185 +0x03b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0856218a +0x040:  movl   $0x1,0x4(%esp)
08562192 +0x048:  lea    -0x20(%ebp),%eax
08562195 +0x04b:  mov    %eax,(%esp)
08562198 +0x04e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0856219d +0x053:  movl   $0x0,-0x14(%ebp)
085621a4 +0x05a:  jmp    08562214 <+0xca>
085621a6 +0x05c:  movl   $0x0,-0x10(%ebp)
085621ad +0x063:  jmp    08562205 <+0xbb>
085621af +0x065:  mov    -0x14(%ebp),%edx
085621b2 +0x068:  mov    -0x10(%ebp),%ebx
085621b5 +0x06b:  mov    0x8(%ebp),%ecx
085621b8 +0x06e:  mov    %edx,%eax
085621ba +0x070:  shl    $0x2,%eax
085621bd +0x073:  add    %edx,%eax
085621bf +0x075:  add    %ebx,%eax
085621c1 +0x077:  add    $0x2,%eax
085621c4 +0x07a:  mov    0x14(%ecx,%eax,8),%eax
085621c8 +0x07e:  mov    %eax,-0xc(%ebp)
085621cb +0x081:  mov    -0x14(%ebp),%edx
085621ce +0x084:  mov    -0x10(%ebp),%ebx
085621d1 +0x087:  mov    0x8(%ebp),%ecx
085621d4 +0x08a:  mov    %edx,%eax
085621d6 +0x08c:  shl    $0x2,%eax
085621d9 +0x08f:  add    %edx,%eax
085621db +0x091:  add    %ebx,%eax
085621dd +0x093:  add    $0x2,%eax
085621e0 +0x096:  movzbl 0x18(%ecx,%eax,8),%eax
085621e5 +0x09b:  test   %al,%al
085621e7 +0x09d:  je     08562201 <+0xb7>
085621e9 +0x09f:  cmpl   $0x0,-0xc(%ebp)
085621ed +0x0a3:  je     08562201 <+0xb7>
085621ef +0x0a5:  lea    -0x20(%ebp),%eax
085621f2 +0x0a8:  mov    %eax,0x4(%esp)
085621f6 +0x0ac:  mov    -0xc(%ebp),%eax
085621f9 +0x0af:  mov    %eax,(%esp)
085621fc +0x0b2:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08562201 +0x0b7:  addl   $0x1,-0x10(%ebp)
08562205 +0x0bb:  cmpl   $0x3,-0x10(%ebp)
08562209 +0x0bf:  setle  %al
0856220c +0x0c2:  test   %al,%al
0856220e +0x0c4:  jne    085621af <+0x65>
08562210 +0x0c6:  addl   $0x1,-0x14(%ebp)
08562214 +0x0ca:  mov    -0x14(%ebp),%eax
08562217 +0x0cd:  cmp    0x10(%ebp),%eax
0856221a +0x0d0:  setl   %al
0856221d +0x0d3:  test   %al,%al
0856221f +0x0d5:  jne    085621a6 <+0x5c>
08562221 +0x0d7:  jmp    0856223e <+0xf4>
08562223 +0x0d9:  mov    %edx,%ebx
08562225 +0x0db:  mov    %eax,%esi
08562227 +0x0dd:  lea    -0x20(%ebp),%eax
0856222a +0x0e0:  mov    %eax,(%esp)
0856222d +0x0e3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08562232 +0x0e8:  mov    %esi,%eax
08562234 +0x0ea:  mov    %ebx,%edx
08562236 +0x0ec:  mov    %eax,(%esp)
08562239 +0x0ef:  call   08ae3750 <_Unwind_Resume>
0856223e +0x0f4:  lea    -0x20(%ebp),%eax
08562241 +0x0f7:  mov    %eax,(%esp)
08562244 +0x0fa:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08562249 +0x0ff:  add    $0x30,%esp
0856224c +0x102:  pop    %ebx
0856224d +0x103:  pop    %esi
0856224e +0x104:  pop    %ebp
0856224f +0x105:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::_SendMatchStatePacket @ 0x856214a

/* online_preliminary::COnlinePreliminary::_SendMatchStatePacket(int, int) */

void __thiscall
online_preliminary::COnlinePreliminary::_SendMatchStatePacket
          (COnlinePreliminary *this,int param_1,int param_2)

{
  PacketGuard local_24 [12];
  int local_18;
  int local_14;
  CUser *local_10;
  
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 08562173 to 08562200 has its CatchHandler @ 08562223 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0xaf);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,param_1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      local_10 = *(CUser **)(this + (local_18 * 5 + local_14 + 2) * 8 + 0x14);
      if ((this[(local_18 * 5 + local_14 + 2) * 8 + 0x18] != (COnlinePreliminary)0x0) &&
         (local_10 != (CUser *)0x0)) {
        CUser::Send(local_10,local_24);
      }
    }
  }
  PacketGuard::~PacketGuard(local_24);
  return;
}
```
