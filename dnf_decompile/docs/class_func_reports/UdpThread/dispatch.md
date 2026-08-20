# dispatch

`_ZN9UdpThread8dispatchEPv`

`UdpThread::dispatch(void*)`

| 类 | 地址 |
|---|---|
| `UdpThread` | `0x0857c9de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857c9de  _ZN9UdpThread8dispatchEPv
#           UdpThread::dispatch(void*)
# range [0x0857c9de, 0x0857cbe7]
0857c9de +0x000:  push   %ebp
0857c9df +0x001:  mov    %esp,%ebp
0857c9e1 +0x003:  push   %edi
0857c9e2 +0x004:  push   %esi
0857c9e3 +0x005:  push   %ebx
0857c9e4 +0x006:  sub    $0x18dc,%esp
0857c9ea +0x00c:  movl   $0x1,-0x38(%ebp)
0857c9f1 +0x013:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0857c9f6 +0x018:  mov    %eax,(%esp)
0857c9f9 +0x01b:  call   082a6d6a <_GLOBAL__I__ZN4CLog5this_E+0x3191>  ; global constructors keyed to CLog::this_+0x3191
0857c9fe +0x020:  movzwl %ax,%eax
0857ca01 +0x023:  mov    %eax,0x4(%esp)
0857ca05 +0x027:  mov    0x8(%ebp),%eax
0857ca08 +0x02a:  mov    %eax,(%esp)
0857ca0b +0x02d:  call   0857c3be <_ZN9UdpThread14_bindUDPSocketEt>  ; UdpThread::_bindUDPSocket(unsigned short)
0857ca10 +0x032:  mov    %eax,-0x3c(%ebp)
0857ca13 +0x035:  movb   $0x1,&g_bUdp_TH_start
0857ca1a +0x03c:  movl   $0x0,-0x30(%ebp)
0857ca21 +0x043:  jmp    0857cbca <+0x1ec>
0857ca26 +0x048:  movl   $0x1800,0x8(%esp)
0857ca2e +0x050:  movl   $0x0,0x4(%esp)
0857ca36 +0x058:  lea    -0x18c8(%ebp),%eax
0857ca3c +0x05e:  mov    %eax,(%esp)
0857ca3f +0x061:  call   0807dcc0 <_init+0x5b8>
0857ca44 +0x066:  lea    -0xc8(%ebp),%eax
0857ca4a +0x06c:  mov    %eax,-0x24(%ebp)
0857ca4d +0x06f:  movl   $0x0,-0x28(%ebp)
0857ca54 +0x076:  jmp    0857ca67 <+0x89>
0857ca56 +0x078:  mov    -0x28(%ebp),%edx
0857ca59 +0x07b:  mov    -0x24(%ebp),%eax
0857ca5c +0x07e:  movl   $0x0,(%eax,%edx,4)
0857ca63 +0x085:  addl   $0x1,-0x28(%ebp)
0857ca67 +0x089:  cmpl   $0x1f,-0x28(%ebp)
0857ca6b +0x08d:  setbe  %al
0857ca6e +0x090:  test   %al,%al
0857ca70 +0x092:  jne    0857ca56 <+0x78>
0857ca72 +0x094:  movl   $0x1,-0x44(%ebp)
0857ca79 +0x09b:  movl   $0x0,-0x40(%ebp)
0857ca80 +0x0a2:  movl   $0x0,-0x48(%ebp)
0857ca87 +0x0a9:  movl   $0x0,-0x20(%ebp)
0857ca8e +0x0b0:  jmp    0857cae6 <+0x108>
0857ca90 +0x0b2:  mov    -0x20(%ebp),%eax
0857ca93 +0x0b5:  mov    -0x3c(%ebp,%eax,4),%eax
0857ca97 +0x0b9:  shr    $0x5,%eax
0857ca9a +0x0bc:  mov    %eax,%edx
0857ca9c +0x0be:  mov    -0xc8(%ebp,%eax,4),%ebx
0857caa3 +0x0c5:  mov    -0x20(%ebp),%eax
0857caa6 +0x0c8:  mov    -0x3c(%ebp,%eax,4),%eax
0857caaa +0x0cc:  and    $0x1f,%eax
0857caad +0x0cf:  mov    $0x1,%esi
0857cab2 +0x0d4:  mov    %esi,%edi
0857cab4 +0x0d6:  mov    %eax,%ecx
0857cab6 +0x0d8:  shl    %cl,%edi
0857cab8 +0x0da:  mov    %edi,%eax
0857caba +0x0dc:  or     %ebx,%eax
0857cabc +0x0de:  mov    %eax,-0xc8(%ebp,%edx,4)
0857cac3 +0x0e5:  mov    -0x20(%ebp),%edx
0857cac6 +0x0e8:  lea    -0x3c(%ebp),%eax
0857cac9 +0x0eb:  shl    $0x2,%edx
0857cacc +0x0ee:  add    %edx,%eax
0857cace +0x0f0:  mov    %eax,0x4(%esp)
0857cad2 +0x0f4:  lea    -0x48(%ebp),%eax
0857cad5 +0x0f7:  mov    %eax,(%esp)
0857cad8 +0x0fa:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
0857cadd +0x0ff:  mov    (%eax),%eax
0857cadf +0x101:  mov    %eax,-0x48(%ebp)
0857cae2 +0x104:  addl   $0x1,-0x20(%ebp)
0857cae6 +0x108:  cmpl   $0x0,-0x20(%ebp)
0857caea +0x10c:  setle  %al
0857caed +0x10f:  test   %al,%al
0857caef +0x111:  jne    0857ca90 <+0xb2>
0857caf1 +0x113:  mov    -0x48(%ebp),%eax
0857caf4 +0x116:  add    $0x1,%eax
0857caf7 +0x119:  mov    %eax,-0x48(%ebp)
0857cafa +0x11c:  mov    -0x48(%ebp),%eax
0857cafd +0x11f:  lea    -0x44(%ebp),%edx
0857cb00 +0x122:  mov    %edx,0x10(%esp)
0857cb04 +0x126:  movl   $0x0,0xc(%esp)
0857cb0c +0x12e:  movl   $0x0,0x8(%esp)
0857cb14 +0x136:  lea    -0xc8(%ebp),%edx
0857cb1a +0x13c:  mov    %edx,0x4(%esp)
0857cb1e +0x140:  mov    %eax,(%esp)
0857cb21 +0x143:  call   0807e840 <_init+0x1138>
0857cb26 +0x148:  mov    %eax,-0x2c(%ebp)
0857cb29 +0x14b:  cmpl   $0x0,-0x2c(%ebp)
0857cb2d +0x14f:  js     0857cbc9 <+0x1eb>
0857cb33 +0x155:  movl   $0x0,-0x1c(%ebp)
0857cb3a +0x15c:  jmp    0857cbb8 <+0x1da>
0857cb3c +0x15e:  mov    -0x1c(%ebp),%eax
0857cb3f +0x161:  mov    -0x3c(%ebp,%eax,4),%eax
0857cb43 +0x165:  shr    $0x5,%eax
0857cb46 +0x168:  mov    -0xc8(%ebp,%eax,4),%edx
0857cb4d +0x16f:  mov    -0x1c(%ebp),%eax
0857cb50 +0x172:  mov    -0x3c(%ebp,%eax,4),%eax
0857cb54 +0x176:  and    $0x1f,%eax
0857cb57 +0x179:  mov    %edx,%ebx
0857cb59 +0x17b:  mov    %eax,%ecx
0857cb5b +0x17d:  sar    %cl,%ebx
0857cb5d +0x17f:  mov    %ebx,%eax
0857cb5f +0x181:  and    $0x1,%eax
0857cb62 +0x184:  test   %al,%al
0857cb64 +0x186:  je     0857cbb4 <+0x1d6>
0857cb66 +0x188:  mov    -0x1c(%ebp),%eax
0857cb69 +0x18b:  mov    -0x3c(%ebp,%eax,4),%eax
0857cb6d +0x18f:  movl   $0x0,0xc(%esp)
0857cb75 +0x197:  movl   $0x1800,0x8(%esp)
0857cb7d +0x19f:  lea    -0x18c8(%ebp),%edx
0857cb83 +0x1a5:  mov    %edx,0x4(%esp)
0857cb87 +0x1a9:  mov    %eax,(%esp)
0857cb8a +0x1ac:  call   0807e240 <_init+0xb38>
0857cb8f +0x1b1:  mov    %eax,-0x34(%ebp)
0857cb92 +0x1b4:  cmpl   $0x0,-0x34(%ebp)
0857cb96 +0x1b8:  jle    0857cbb4 <+0x1d6>
0857cb98 +0x1ba:  mov    -0x34(%ebp),%eax
0857cb9b +0x1bd:  mov    %eax,0x8(%esp)
0857cb9f +0x1c1:  lea    -0x18c8(%ebp),%eax
0857cba5 +0x1c7:  mov    %eax,0x4(%esp)
0857cba9 +0x1cb:  mov    0x8(%ebp),%eax
0857cbac +0x1ce:  mov    %eax,(%esp)
0857cbaf +0x1d1:  call   0857c5a4 <_ZN9UdpThread15_processUDPDataEPci>  ; UdpThread::_processUDPData(char*, int)
0857cbb4 +0x1d6:  addl   $0x1,-0x1c(%ebp)
0857cbb8 +0x1da:  cmpl   $0x0,-0x1c(%ebp)
0857cbbc +0x1de:  setle  %al
0857cbbf +0x1e1:  test   %al,%al
0857cbc1 +0x1e3:  jne    0857cb3c <+0x15e>
0857cbc7 +0x1e9:  jmp    0857cbca <+0x1ec>
0857cbc9 +0x1eb:  nop
0857cbca +0x1ec:  movzbl &_ZN10GlobalData13s_server_stopE,%eax
0857cbd1 +0x1f3:  xor    $0x1,%eax
0857cbd4 +0x1f6:  test   %al,%al
0857cbd6 +0x1f8:  jne    0857ca26 <+0x48>
0857cbdc +0x1fe:  add    $0x18dc,%esp
0857cbe2 +0x204:  pop    %ebx
0857cbe3 +0x205:  pop    %esi
0857cbe4 +0x206:  pop    %edi
0857cbe5 +0x207:  pop    %ebp
0857cbe6 +0x208:  ret
0857cbe7 +0x209:  nop
```

## 反编译 C

```c
// UdpThread::dispatch @ 0x857c9de

/* UdpThread::dispatch(void*) */

void UdpThread::dispatch(void *param_1)

{
  ushort uVar1;
  CEnvironment *this;
  int *piVar2;
  char local_18cc [6144];
  fd_set local_cc;
  int local_4c;
  timeval local_48;
  uint local_40 [5];
  uint local_2c;
  fd_set *local_28;
  int local_24;
  int local_20;
  
  local_40[1] = 1;
  this = (CEnvironment *)G_CEnvironment();
  uVar1 = CEnvironment::get_udp_port(this);
  local_40[0] = _bindUDPSocket(param_1,uVar1);
  g_bUdp_TH_start = 1;
  local_40[3] = 0;
  while (GlobalData::s_server_stop != '\x01') {
    memset(local_18cc,0,0x1800);
    local_28 = &local_cc;
    for (local_2c = 0; local_2c < 0x20; local_2c = local_2c + 1) {
      local_cc.fds_bits[local_2c] = 0;
    }
    local_48.tv_sec = 1;
    local_48.tv_usec = 0;
    local_4c = 0;
    for (local_24 = 0; local_24 < 1; local_24 = local_24 + 1) {
      local_cc.fds_bits[local_40[local_24] >> 5] =
           1 << ((byte)local_40[local_24] & 0x1f) | local_cc.fds_bits[local_40[local_24] >> 5];
      piVar2 = std::max<int>(&local_4c,(int *)(local_40 + local_24));
      local_4c = *piVar2;
    }
    local_4c = local_4c + 1;
    local_40[4] = select(local_4c,&local_cc,(fd_set *)0x0,(fd_set *)0x0,&local_48);
    if (-1 < (int)local_40[4]) {
      for (local_20 = 0; local_20 < 1; local_20 = local_20 + 1) {
        if ((local_cc.fds_bits[local_40[local_20] >> 5] >> ((byte)local_40[local_20] & 0x1f) & 1U)
            != 0) {
          local_40[2] = recv(local_40[local_20],local_18cc,0x1800,0);
          if (0 < (int)local_40[2]) {
            _processUDPData(param_1,local_18cc,local_40[2]);
          }
        }
      }
    }
  }
  return;
}
```
