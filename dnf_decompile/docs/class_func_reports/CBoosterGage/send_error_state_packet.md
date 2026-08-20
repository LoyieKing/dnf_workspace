# send_error_state_packet

`_ZN12CBoosterGage23send_error_state_packetEP5CUserm`

`CBoosterGage::send_error_state_packet(CUser*, unsigned long)`

| 类 | 地址 |
|---|---|
| `CBoosterGage` | `0x080dd142` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080dd142  _ZN12CBoosterGage23send_error_state_packetEP5CUserm
#           CBoosterGage::send_error_state_packet(CUser*, unsigned long)
# range [0x080dd142, 0x080dd245]
080dd142 +0x000:  push   %ebp
080dd143 +0x001:  mov    %esp,%ebp
080dd145 +0x003:  push   %esi
080dd146 +0x004:  push   %ebx
080dd147 +0x005:  sub    $0x30,%esp
080dd14a +0x008:  movl   $0x11,0x4(%esp)
080dd152 +0x010:  mov    0xc(%ebp),%eax
080dd155 +0x013:  mov    %eax,(%esp)
080dd158 +0x016:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
080dd15d +0x01b:  mov    0x10(%ebp),%edx
080dd160 +0x01e:  mov    %edx,0x4(%esp)
080dd164 +0x022:  mov    %eax,(%esp)
080dd167 +0x025:  call   080dd0da <_ZN12CBoosterGage22check_max_booster_gageEm>  ; CBoosterGage::check_max_booster_gage(unsigned long)
080dd16c +0x02a:  mov    %al,-0xd(%ebp)
080dd16f +0x02d:  movl   $0x2,-0xc(%ebp)
080dd176 +0x034:  cmpb   $0x0,-0xd(%ebp)
080dd17a +0x038:  je     080dd194 <+0x52>
080dd17c +0x03a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080dd181 +0x03f:  movzbl 0x877e(%eax),%eax
080dd188 +0x046:  movzbl %al,%eax
080dd18b +0x049:  mov    -0xc(%ebp),%edx
080dd18e +0x04c:  imul   %edx,%eax
080dd191 +0x04f:  mov    %eax,-0xc(%ebp)
080dd194 +0x052:  lea    -0x1c(%ebp),%eax
080dd197 +0x055:  mov    %eax,(%esp)
080dd19a +0x058:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
080dd19f +0x05d:  movl   $0xd3,0x8(%esp)
080dd1a7 +0x065:  movl   $0x1,0x4(%esp)
080dd1af +0x06d:  lea    -0x1c(%ebp),%eax
080dd1b2 +0x070:  mov    %eax,(%esp)
080dd1b5 +0x073:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
080dd1ba +0x078:  movl   $0x0,0x4(%esp)
080dd1c2 +0x080:  lea    -0x1c(%ebp),%eax
080dd1c5 +0x083:  mov    %eax,(%esp)
080dd1c8 +0x086:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
080dd1cd +0x08b:  movl   $0x13,0x4(%esp)
080dd1d5 +0x093:  lea    -0x1c(%ebp),%eax
080dd1d8 +0x096:  mov    %eax,(%esp)
080dd1db +0x099:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
080dd1e0 +0x09e:  mov    -0xc(%ebp),%eax
080dd1e3 +0x0a1:  mov    %eax,0x4(%esp)
080dd1e7 +0x0a5:  lea    -0x1c(%ebp),%eax
080dd1ea +0x0a8:  mov    %eax,(%esp)
080dd1ed +0x0ab:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
080dd1f2 +0x0b0:  movl   $0x1,0x4(%esp)
080dd1fa +0x0b8:  lea    -0x1c(%ebp),%eax
080dd1fd +0x0bb:  mov    %eax,(%esp)
080dd200 +0x0be:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
080dd205 +0x0c3:  lea    -0x1c(%ebp),%eax
080dd208 +0x0c6:  mov    %eax,0x4(%esp)
080dd20c +0x0ca:  mov    0xc(%ebp),%eax
080dd20f +0x0cd:  mov    %eax,(%esp)
080dd212 +0x0d0:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
080dd217 +0x0d5:  jmp    080dd234 <+0xf2>
080dd219 +0x0d7:  mov    %edx,%ebx
080dd21b +0x0d9:  mov    %eax,%esi
080dd21d +0x0db:  lea    -0x1c(%ebp),%eax
080dd220 +0x0de:  mov    %eax,(%esp)
080dd223 +0x0e1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
080dd228 +0x0e6:  mov    %esi,%eax
080dd22a +0x0e8:  mov    %ebx,%edx
080dd22c +0x0ea:  mov    %eax,(%esp)
080dd22f +0x0ed:  call   08ae3750 <_Unwind_Resume>
080dd234 +0x0f2:  lea    -0x1c(%ebp),%eax
080dd237 +0x0f5:  mov    %eax,(%esp)
080dd23a +0x0f8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
080dd23f +0x0fd:  add    $0x30,%esp
080dd242 +0x100:  pop    %ebx
080dd243 +0x101:  pop    %esi
080dd244 +0x102:  pop    %ebp
080dd245 +0x103:  ret
```

## 反编译 C

```c
// CBoosterGage::send_error_state_packet @ 0x80dd142

/* CBoosterGage::send_error_state_packet(CUser*, unsigned long) */

void __thiscall
CBoosterGage::send_error_state_packet(CBoosterGage *this,CUser *param_1,ulong param_2)

{
  CBoosterGage *this_00;
  int iVar1;
  PacketGuard local_20 [15];
  char local_11;
  int local_10;
  
  this_00 = (CBoosterGage *)CUser::GetCharacExpandData(param_1,0x11);
  local_11 = check_max_booster_gage(this_00,param_2);
  local_10 = 2;
  if (local_11 != '\0') {
    iVar1 = G_CDataManager();
    local_10 = (uint)*(byte *)(iVar1 + 0x877e) * local_10;
  }
  PacketGuard::PacketGuard(local_20);
                    /* try { // try from 080dd1b5 to 080dd216 has its CatchHandler @ 080dd219 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0xd3);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0x13);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,local_10);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  CUser::Send(param_1,local_20);
  PacketGuard::~PacketGuard(local_20);
  return;
}
```
