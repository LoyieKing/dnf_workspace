# SendCharacState

`_ZN25LevelupSupportEventManger15SendCharacStateEP5CUseri`

`LevelupSupportEventManger::SendCharacState(CUser*, int)`

| 类 | 地址 |
|---|---|
| `LevelupSupportEventManger` | `0x0814701e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0814701e  _ZN25LevelupSupportEventManger15SendCharacStateEP5CUseri
#           LevelupSupportEventManger::SendCharacState(CUser*, int)
# range [0x0814701e, 0x08147163]
0814701e +0x000:  push   %ebp
0814701f +0x001:  mov    %esp,%ebp
08147021 +0x003:  push   %esi
08147022 +0x004:  push   %ebx
08147023 +0x005:  sub    $0x30,%esp
08147026 +0x008:  lea    -0x1c(%ebp),%eax
08147029 +0x00b:  mov    %eax,(%esp)
0814702c +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08147031 +0x013:  lea    -0x1c(%ebp),%eax
08147034 +0x016:  mov    %eax,(%esp)
08147037 +0x019:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0814703c +0x01e:  movl   $0x22a,0x8(%esp)
08147044 +0x026:  movl   $0x0,0x4(%esp)
0814704c +0x02e:  lea    -0x1c(%ebp),%eax
0814704f +0x031:  mov    %eax,(%esp)
08147052 +0x034:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08147057 +0x039:  mov    0x8(%ebp),%eax
0814705a +0x03c:  add    $0x8d0e4,%eax
0814705f +0x041:  mov    %eax,(%esp)
08147062 +0x044:  call   08147cfa <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x1ed>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x1ed
08147067 +0x049:  mov    %eax,0x4(%esp)
0814706b +0x04d:  lea    -0x1c(%ebp),%eax
0814706e +0x050:  mov    %eax,(%esp)
08147071 +0x053:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08147076 +0x058:  movl   $0x0,-0x10(%ebp)
0814707d +0x05f:  mov    0x8(%ebp),%eax
08147080 +0x062:  add    $0x8d0e4,%eax
08147085 +0x067:  mov    %eax,(%esp)
08147088 +0x06a:  call   08147cfa <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x1ed>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x1ed
0814708d +0x06f:  mov    %eax,-0xc(%ebp)
08147090 +0x072:  jmp    081470f1 <+0xd3>
08147092 +0x074:  mov    0x8(%ebp),%eax
08147095 +0x077:  lea    0x8d0e4(%eax),%edx
0814709b +0x07d:  mov    -0x10(%ebp),%eax
0814709e +0x080:  mov    %eax,0x4(%esp)
081470a2 +0x084:  mov    %edx,(%esp)
081470a5 +0x087:  call   08147d16 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x209>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x209
081470aa +0x08c:  movzwl (%eax),%eax
081470ad +0x08f:  movzwl %ax,%eax
081470b0 +0x092:  mov    %eax,0x4(%esp)
081470b4 +0x096:  lea    -0x1c(%ebp),%eax
081470b7 +0x099:  mov    %eax,(%esp)
081470ba +0x09c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081470bf +0x0a1:  mov    0x8(%ebp),%eax
081470c2 +0x0a4:  lea    0x8d0e4(%eax),%edx
081470c8 +0x0aa:  mov    -0x10(%ebp),%eax
081470cb +0x0ad:  mov    %eax,0x4(%esp)
081470cf +0x0b1:  mov    %edx,(%esp)
081470d2 +0x0b4:  call   08147d16 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x209>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x209
081470d7 +0x0b9:  movzwl 0x2(%eax),%eax
081470db +0x0bd:  movzwl %ax,%eax
081470de +0x0c0:  mov    %eax,0x4(%esp)
081470e2 +0x0c4:  lea    -0x1c(%ebp),%eax
081470e5 +0x0c7:  mov    %eax,(%esp)
081470e8 +0x0ca:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081470ed +0x0cf:  addl   $0x1,-0x10(%ebp)
081470f1 +0x0d3:  mov    -0x10(%ebp),%eax
081470f4 +0x0d6:  cmp    -0xc(%ebp),%eax
081470f7 +0x0d9:  setb   %al
081470fa +0x0dc:  test   %al,%al
081470fc +0x0de:  jne    08147092 <+0x74>
081470fe +0x0e0:  mov    0xc(%ebp),%eax
08147101 +0x0e3:  mov    %eax,0x4(%esp)
08147105 +0x0e7:  lea    -0x1c(%ebp),%eax
08147108 +0x0ea:  mov    %eax,(%esp)
0814710b +0x0ed:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08147110 +0x0f2:  movl   $0x1,0x4(%esp)
08147118 +0x0fa:  lea    -0x1c(%ebp),%eax
0814711b +0x0fd:  mov    %eax,(%esp)
0814711e +0x100:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08147123 +0x105:  lea    -0x1c(%ebp),%eax
08147126 +0x108:  mov    %eax,0x4(%esp)
0814712a +0x10c:  mov    0x8(%ebp),%eax
0814712d +0x10f:  mov    %eax,(%esp)
08147130 +0x112:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08147135 +0x117:  jmp    08147152 <+0x134>
08147137 +0x119:  mov    %edx,%ebx
08147139 +0x11b:  mov    %eax,%esi
0814713b +0x11d:  lea    -0x1c(%ebp),%eax
0814713e +0x120:  mov    %eax,(%esp)
08147141 +0x123:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08147146 +0x128:  mov    %esi,%eax
08147148 +0x12a:  mov    %ebx,%edx
0814714a +0x12c:  mov    %eax,(%esp)
0814714d +0x12f:  call   08ae3750 <_Unwind_Resume>
08147152 +0x134:  lea    -0x1c(%ebp),%eax
08147155 +0x137:  mov    %eax,(%esp)
08147158 +0x13a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0814715d +0x13f:  add    $0x30,%esp
08147160 +0x142:  pop    %ebx
08147161 +0x143:  pop    %esi
08147162 +0x144:  pop    %ebp
08147163 +0x145:  ret
```

## 反编译 C

```c
// LevelupSupportEventManger::SendCharacState @ 0x814701e

/* LevelupSupportEventManger::SendCharacState(CUser*, int) */

void LevelupSupportEventManger::SendCharacState(CUser *param_1,int param_2)

{
  int iVar1;
  ushort *puVar2;
  PacketGuard local_20 [12];
  uint local_14;
  uint local_10;
  
  PacketGuard::PacketGuard(local_20);
                    /* try { // try from 08147037 to 08147134 has its CatchHandler @ 08147137 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x22a);
  iVar1 = std::
          vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
          ::size((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                  *)(param_1 + 0x8d0e4));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,iVar1);
  local_14 = 0;
  local_10 = std::
             vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
             ::size((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                     *)(param_1 + 0x8d0e4));
  for (; local_14 < local_10; local_14 = local_14 + 1) {
    puVar2 = (ushort *)
             std::
             vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
             ::operator[]((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                           *)(param_1 + 0x8d0e4),local_14);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,(uint)*puVar2);
    iVar1 = std::
            vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
            ::operator[]((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                          *)(param_1 + 0x8d0e4),local_14);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(uint)*(ushort *)(iVar1 + 2));
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,param_2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  CUser::Send(param_1,local_20);
  PacketGuard::~PacketGuard(local_20);
  return;
}
```
