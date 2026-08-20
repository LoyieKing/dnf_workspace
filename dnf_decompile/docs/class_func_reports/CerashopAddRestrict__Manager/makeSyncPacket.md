# makeSyncPacket

`_ZN19CerashopAddRestrict7Manager14makeSyncPacketEP5CUser`

`CerashopAddRestrict::Manager::makeSyncPacket(CUser*)`

| 类 | 地址 |
|---|---|
| `CerashopAddRestrict::Manager` | `0x080e0f3a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e0f3a  _ZN19CerashopAddRestrict7Manager14makeSyncPacketEP5CUser
#           CerashopAddRestrict::Manager::makeSyncPacket(CUser*)
# range [0x080e0f3a, 0x080e10d6]
080e0f3a +0x000:  push   %ebp
080e0f3b +0x001:  mov    %esp,%ebp
080e0f3d +0x003:  push   %esi
080e0f3e +0x004:  push   %ebx
080e0f3f +0x005:  sub    $0x40,%esp
080e0f42 +0x008:  mov    0xc(%ebp),%eax
080e0f45 +0x00b:  add    $0x8d1e4,%eax
080e0f4a +0x010:  mov    %eax,-0x14(%ebp)
080e0f4d +0x013:  mov    -0x14(%ebp),%eax
080e0f50 +0x016:  mov    %eax,(%esp)
080e0f53 +0x019:  call   080e2858 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x5fe>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x5fe
080e0f58 +0x01e:  mov    %eax,-0x10(%ebp)
080e0f5b +0x021:  mov    -0x14(%ebp),%eax
080e0f5e +0x024:  add    $0x18,%eax
080e0f61 +0x027:  mov    %eax,(%esp)
080e0f64 +0x02a:  call   080e2858 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x5fe>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x5fe
080e0f69 +0x02f:  mov    -0x10(%ebp),%edx
080e0f6c +0x032:  add    %edx,%eax
080e0f6e +0x034:  mov    %eax,-0x10(%ebp)
080e0f71 +0x037:  cmpl   $0x0,-0x10(%ebp)
080e0f75 +0x03b:  je     080e10cf <+0x195>
080e0f7b +0x041:  lea    -0x20(%ebp),%eax
080e0f7e +0x044:  mov    %eax,(%esp)
080e0f81 +0x047:  call   080e247e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x224>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x224
080e0f86 +0x04c:  mov    -0x14(%ebp),%eax
080e0f89 +0x04f:  mov    %eax,0x8(%esp)
080e0f8d +0x053:  lea    -0x20(%ebp),%eax
080e0f90 +0x056:  mov    %eax,0x4(%esp)
080e0f94 +0x05a:  mov    0x8(%ebp),%eax
080e0f97 +0x05d:  mov    %eax,(%esp)
080e0f9a +0x060:  call   080e0e68 <_ZN19CerashopAddRestrict7Manager20GetItemListForPacketERSt6vectorIjSaIjEERSt3mapIjPNS_10paramDailyESt4lessIjESaISt4pairIKjS7_EEE>  ; CerashopAddRestrict::Manager::GetItemListForPacket(std::vector<unsigned int, std::allocator<unsigned int> >&, std::map<unsigned int, CerashopAddRestrict::paramDaily*, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, CerashopAddRestrict::paramDaily*> > >&)
080e0f9f +0x065:  mov    -0x14(%ebp),%eax
080e0fa2 +0x068:  add    $0x18,%eax
080e0fa5 +0x06b:  mov    %eax,0x8(%esp)
080e0fa9 +0x06f:  lea    -0x20(%ebp),%eax
080e0fac +0x072:  mov    %eax,0x4(%esp)
080e0fb0 +0x076:  mov    0x8(%ebp),%eax
080e0fb3 +0x079:  mov    %eax,(%esp)
080e0fb6 +0x07c:  call   080e0e68 <_ZN19CerashopAddRestrict7Manager20GetItemListForPacketERSt6vectorIjSaIjEERSt3mapIjPNS_10paramDailyESt4lessIjESaISt4pairIKjS7_EEE>  ; CerashopAddRestrict::Manager::GetItemListForPacket(std::vector<unsigned int, std::allocator<unsigned int> >&, std::map<unsigned int, CerashopAddRestrict::paramDaily*, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, CerashopAddRestrict::paramDaily*> > >&)
080e0fbb +0x081:  lea    -0x20(%ebp),%eax
080e0fbe +0x084:  mov    %eax,(%esp)
080e0fc1 +0x087:  call   080e286c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x612>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x612
080e0fc6 +0x08c:  test   %al,%al
080e0fc8 +0x08e:  jne    080e10c2 <+0x188>
080e0fce +0x094:  lea    -0x2c(%ebp),%eax
080e0fd1 +0x097:  mov    %eax,(%esp)
080e0fd4 +0x09a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
080e0fd9 +0x09f:  lea    -0x2c(%ebp),%eax
080e0fdc +0x0a2:  mov    %eax,(%esp)
080e0fdf +0x0a5:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
080e0fe4 +0x0aa:  movl   $0x222,0x8(%esp)
080e0fec +0x0b2:  movl   $0x0,0x4(%esp)
080e0ff4 +0x0ba:  lea    -0x2c(%ebp),%eax
080e0ff7 +0x0bd:  mov    %eax,(%esp)
080e0ffa +0x0c0:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
080e0fff +0x0c5:  lea    -0x20(%ebp),%eax
080e1002 +0x0c8:  mov    %eax,(%esp)
080e1005 +0x0cb:  call   080e2462 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x208>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x208
080e100a +0x0d0:  mov    %eax,0x4(%esp)
080e100e +0x0d4:  lea    -0x2c(%ebp),%eax
080e1011 +0x0d7:  mov    %eax,(%esp)
080e1014 +0x0da:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
080e1019 +0x0df:  movl   $0x0,-0xc(%ebp)
080e1020 +0x0e6:  jmp    080e1049 <+0x10f>
080e1022 +0x0e8:  mov    -0xc(%ebp),%eax
080e1025 +0x0eb:  mov    %eax,0x4(%esp)
080e1029 +0x0ef:  lea    -0x20(%ebp),%eax
080e102c +0x0f2:  mov    %eax,(%esp)
080e102f +0x0f5:  call   080e2564 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x30a>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x30a
080e1034 +0x0fa:  mov    (%eax),%eax
080e1036 +0x0fc:  mov    %eax,0x4(%esp)
080e103a +0x100:  lea    -0x2c(%ebp),%eax
080e103d +0x103:  mov    %eax,(%esp)
080e1040 +0x106:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
080e1045 +0x10b:  addl   $0x1,-0xc(%ebp)
080e1049 +0x10f:  lea    -0x20(%ebp),%eax
080e104c +0x112:  mov    %eax,(%esp)
080e104f +0x115:  call   080e2462 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x208>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x208
080e1054 +0x11a:  cmp    -0xc(%ebp),%eax
080e1057 +0x11d:  seta   %al
080e105a +0x120:  test   %al,%al
080e105c +0x122:  jne    080e1022 <+0xe8>
080e105e +0x124:  movl   $0x1,0x4(%esp)
080e1066 +0x12c:  lea    -0x2c(%ebp),%eax
080e1069 +0x12f:  mov    %eax,(%esp)
080e106c +0x132:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
080e1071 +0x137:  lea    -0x2c(%ebp),%eax
080e1074 +0x13a:  mov    %eax,0x4(%esp)
080e1078 +0x13e:  mov    0xc(%ebp),%eax
080e107b +0x141:  mov    %eax,(%esp)
080e107e +0x144:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
080e1083 +0x149:  jmp    080e109a <+0x160>
080e1085 +0x14b:  mov    %edx,%ebx
080e1087 +0x14d:  mov    %eax,%esi
080e1089 +0x14f:  lea    -0x2c(%ebp),%eax
080e108c +0x152:  mov    %eax,(%esp)
080e108f +0x155:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
080e1094 +0x15a:  mov    %esi,%eax
080e1096 +0x15c:  mov    %ebx,%edx
080e1098 +0x15e:  jmp    080e10a7 <+0x16d>
080e109a +0x160:  lea    -0x2c(%ebp),%eax
080e109d +0x163:  mov    %eax,(%esp)
080e10a0 +0x166:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
080e10a5 +0x16b:  jmp    080e10c2 <+0x188>
080e10a7 +0x16d:  mov    %edx,%ebx
080e10a9 +0x16f:  mov    %eax,%esi
080e10ab +0x171:  lea    -0x20(%ebp),%eax
080e10ae +0x174:  mov    %eax,(%esp)
080e10b1 +0x177:  call   080e2492 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x238>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x238
080e10b6 +0x17c:  mov    %esi,%eax
080e10b8 +0x17e:  mov    %ebx,%edx
080e10ba +0x180:  mov    %eax,(%esp)
080e10bd +0x183:  call   08ae3750 <_Unwind_Resume>
080e10c2 +0x188:  lea    -0x20(%ebp),%eax
080e10c5 +0x18b:  mov    %eax,(%esp)
080e10c8 +0x18e:  call   080e2492 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x238>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x238
080e10cd +0x193:  jmp    080e10d0 <+0x196>
080e10cf +0x195:  nop
080e10d0 +0x196:  add    $0x40,%esp
080e10d3 +0x199:  pop    %ebx
080e10d4 +0x19a:  pop    %esi
080e10d5 +0x19b:  pop    %ebp
080e10d6 +0x19c:  ret
```

## 反编译 C

```c
// CerashopAddRestrict::Manager::makeSyncPacket @ 0x80e0f3a

/* CerashopAddRestrict::Manager::makeSyncPacket(CUser*) */

void __thiscall CerashopAddRestrict::Manager::makeSyncPacket(Manager *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  PacketGuard local_30 [12];
  vector<unsigned_int,std::allocator<unsigned_int>> local_24 [12];
  map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
  *local_18;
  int local_14;
  uint local_10;
  
  local_18 = (map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
              *)(param_1 + 0x8d1e4);
  local_14 = std::
             map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
             ::size(local_18);
  iVar2 = std::
          map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
          ::size(local_18 + 0x18);
  local_14 = iVar2 + local_14;
  if (local_14 != 0) {
    std::vector<unsigned_int,std::allocator<unsigned_int>>::vector(local_24);
                    /* try { // try from 080e0f9a to 080e0fd8 has its CatchHandler @ 080e10a7 */
    GetItemListForPacket((vector *)this,(map *)local_24);
    GetItemListForPacket((vector *)this,(map *)local_24);
    cVar1 = std::vector<unsigned_int,std::allocator<unsigned_int>>::empty();
    if (cVar1 == '\0') {
      PacketGuard::PacketGuard(local_30);
                    /* try { // try from 080e0fdf to 080e1082 has its CatchHandler @ 080e1085 */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_30);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x222);
      iVar2 = std::vector<unsigned_int,std::allocator<unsigned_int>>::size(local_24);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,iVar2);
      local_10 = 0;
      while( true ) {
        uVar4 = std::vector<unsigned_int,std::allocator<unsigned_int>>::size(local_24);
        if (uVar4 <= local_10) break;
        piVar3 = (int *)std::vector<unsigned_int,std::allocator<unsigned_int>>::operator[]
                                  (local_24,local_10);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,*piVar3);
        local_10 = local_10 + 1;
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
      CUser::Send(param_1,local_30);
                    /* try { // try from 080e10a0 to 080e10a4 has its CatchHandler @ 080e10a7 */
      PacketGuard::~PacketGuard(local_30);
    }
    std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector(local_24);
  }
  return;
}
```
