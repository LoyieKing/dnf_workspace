# OnEnterDisjointStore

`_ZN10expert_job11CDisjointer20OnEnterDisjointStoreEP5CUser`

`expert_job::CDisjointer::OnEnterDisjointStore(CUser*)`

| 类 | 地址 |
|---|---|
| `expert_job::CDisjointer` | `0x085d309a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d309a  _ZN10expert_job11CDisjointer20OnEnterDisjointStoreEP5CUser
#           expert_job::CDisjointer::OnEnterDisjointStore(CUser*)
# range [0x085d309a, 0x085d319b]
085d309a +0x000:  push   %ebp
085d309b +0x001:  mov    %esp,%ebp
085d309d +0x003:  push   %esi
085d309e +0x004:  push   %ebx
085d309f +0x005:  sub    $0x20,%esp
085d30a2 +0x008:  lea    -0x14(%ebp),%eax
085d30a5 +0x00b:  mov    %eax,(%esp)
085d30a8 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085d30ad +0x013:  movl   $0xf5,0x8(%esp)
085d30b5 +0x01b:  movl   $0x1,0x4(%esp)
085d30bd +0x023:  lea    -0x14(%ebp),%eax
085d30c0 +0x026:  mov    %eax,(%esp)
085d30c3 +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085d30c8 +0x02e:  movl   $0x1,0x4(%esp)
085d30d0 +0x036:  lea    -0x14(%ebp),%eax
085d30d3 +0x039:  mov    %eax,(%esp)
085d30d6 +0x03c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085d30db +0x041:  mov    0x8(%ebp),%eax
085d30de +0x044:  mov    %eax,(%esp)
085d30e1 +0x047:  call   085d1f0a <_ZN10expert_job11CDisjointer26get_disjoint_machine_gradeEv>  ; expert_job::CDisjointer::get_disjoint_machine_grade()
085d30e6 +0x04c:  add    $0x1,%eax
085d30e9 +0x04f:  mov    %eax,0x4(%esp)
085d30ed +0x053:  lea    -0x14(%ebp),%eax
085d30f0 +0x056:  mov    %eax,(%esp)
085d30f3 +0x059:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085d30f8 +0x05e:  mov    0x8(%ebp),%eax
085d30fb +0x061:  mov    %eax,(%esp)
085d30fe +0x064:  call   085d3e50 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x345>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x345
085d3103 +0x069:  mov    %eax,0x4(%esp)
085d3107 +0x06d:  lea    -0x14(%ebp),%eax
085d310a +0x070:  mov    %eax,(%esp)
085d310d +0x073:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085d3112 +0x078:  mov    0x8(%ebp),%eax
085d3115 +0x07b:  add    $0x8,%eax
085d3118 +0x07e:  mov    %eax,(%esp)
085d311b +0x081:  call   082347e0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9e8a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9e8a
085d3120 +0x086:  movl   $0x0,0x4(%esp)
085d3128 +0x08e:  mov    %eax,(%esp)
085d312b +0x091:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085d3130 +0x096:  mov    %eax,(%esp)
085d3133 +0x099:  call   085d3e66 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x35b>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x35b
085d3138 +0x09e:  mov    %eax,0x4(%esp)
085d313c +0x0a2:  lea    -0x14(%ebp),%eax
085d313f +0x0a5:  mov    %eax,(%esp)
085d3142 +0x0a8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085d3147 +0x0ad:  movl   $0x1,0x4(%esp)
085d314f +0x0b5:  lea    -0x14(%ebp),%eax
085d3152 +0x0b8:  mov    %eax,(%esp)
085d3155 +0x0bb:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085d315a +0x0c0:  lea    -0x14(%ebp),%eax
085d315d +0x0c3:  mov    %eax,0x4(%esp)
085d3161 +0x0c7:  mov    0xc(%ebp),%eax
085d3164 +0x0ca:  mov    %eax,(%esp)
085d3167 +0x0cd:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085d316c +0x0d2:  mov    $0x0,%ebx
085d3171 +0x0d7:  lea    -0x14(%ebp),%eax
085d3174 +0x0da:  mov    %eax,(%esp)
085d3177 +0x0dd:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085d317c +0x0e2:  mov    %ebx,%eax
085d317e +0x0e4:  add    $0x20,%esp
085d3181 +0x0e7:  pop    %ebx
085d3182 +0x0e8:  pop    %esi
085d3183 +0x0e9:  pop    %ebp
085d3184 +0x0ea:  ret
085d3185 +0x0eb:  mov    %edx,%ebx
085d3187 +0x0ed:  mov    %eax,%esi
085d3189 +0x0ef:  lea    -0x14(%ebp),%eax
085d318c +0x0f2:  mov    %eax,(%esp)
085d318f +0x0f5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085d3194 +0x0fa:  mov    %esi,%eax
085d3196 +0x0fc:  mov    %ebx,%edx
085d3198 +0x0fe:  mov    %eax,(%esp)
085d319b +0x101:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// expert_job::CDisjointer::OnEnterDisjointStore @ 0x85d309a

/* expert_job::CDisjointer::OnEnterDisjointStore(CUser*) */

undefined4 __thiscall
expert_job::CDisjointer::OnEnterDisjointStore(CDisjointer *this,CUser *param_1)

{
  int iVar1;
  CUser *pCVar2;
  CCharacExpertJob *this_00;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 085d30c3 to 085d316b has its CatchHandler @ 085d3185 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0xf5);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  iVar1 = get_disjoint_machine_grade(this);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,iVar1 + 1);
  iVar1 = get_disjoint_cost(this);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,iVar1);
  pCVar2 = (CUser *)CDisjointMachine::get_user((CDisjointMachine *)(this + 8));
  this_00 = (CCharacExpertJob *)CUser::GetCharacExpandData(pCVar2,0);
  iVar1 = CCharacExpertJob::get_disjoint_machine_endurance(this_00);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,iVar1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return 0;
}
```
