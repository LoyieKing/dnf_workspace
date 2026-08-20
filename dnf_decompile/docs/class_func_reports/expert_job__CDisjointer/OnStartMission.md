# OnStartMission

`_ZN10expert_job11CDisjointer14OnStartMissionEP5CUserS2_`

`expert_job::CDisjointer::OnStartMission(CUser*, CUser*)`

| 类 | 地址 |
|---|---|
| `expert_job::CDisjointer` | `0x085d2a16` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d2a16  _ZN10expert_job11CDisjointer14OnStartMissionEP5CUserS2_
#           expert_job::CDisjointer::OnStartMission(CUser*, CUser*)
# range [0x085d2a16, 0x085d2b73]
085d2a16 +0x000:  push   %ebp
085d2a17 +0x001:  mov    %esp,%ebp
085d2a19 +0x003:  push   %ebx
085d2a1a +0x004:  sub    $0x14,%esp
085d2a1d +0x007:  mov    0xc(%ebp),%eax
085d2a20 +0x00a:  cmp    0x10(%ebp),%eax
085d2a23 +0x00d:  je     085d2a4b <+0x35>
085d2a25 +0x00f:  mov    0x10(%ebp),%eax
085d2a28 +0x012:  mov    %eax,(%esp)
085d2a2b +0x015:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
085d2a30 +0x01a:  mov    %eax,%ebx
085d2a32 +0x01c:  mov    0x8(%ebp),%eax
085d2a35 +0x01f:  add    $0x8,%eax
085d2a38 +0x022:  mov    %eax,(%esp)
085d2a3b +0x025:  call   085d3e06 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x2fb>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x2fb
085d2a40 +0x02a:  cmp    %eax,%ebx
085d2a42 +0x02c:  jge    085d2a4b <+0x35>
085d2a44 +0x02e:  mov    $0x1,%eax
085d2a49 +0x033:  jmp    085d2a50 <+0x3a>
085d2a4b +0x035:  mov    $0x0,%eax
085d2a50 +0x03a:  test   %al,%al
085d2a52 +0x03c:  je     085d2a80 <+0x6a>
085d2a54 +0x03e:  movl   $0x4,(%esp)
085d2a5b +0x045:  call   08725800 <__cxa_allocate_exception>
085d2a60 +0x04a:  mov    %eax,%edx
085d2a62 +0x04c:  movl   $0x15,(%edx)
085d2a68 +0x052:  movl   $0x0,0x8(%esp)
085d2a70 +0x05a:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
085d2a78 +0x062:  mov    %eax,(%esp)
085d2a7b +0x065:  call   08724c50 <__cxa_throw>
085d2a80 +0x06a:  mov    0x8(%ebp),%eax
085d2a83 +0x06d:  add    $0x8,%eax
085d2a86 +0x070:  mov    %eax,(%esp)
085d2a89 +0x073:  call   085d3e06 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x2fb>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x2fb
085d2a8e +0x078:  mov    %eax,0x4(%esp)
085d2a92 +0x07c:  mov    0xc(%ebp),%eax
085d2a95 +0x07f:  mov    %eax,(%esp)
085d2a98 +0x082:  call   0866af1c <_ZN5CUser10CheckMoneyEi>  ; CUser::CheckMoney(int)
085d2a9d +0x087:  xor    $0x1,%eax
085d2aa0 +0x08a:  test   %al,%al
085d2aa2 +0x08c:  je     085d2b16 <+0x100>
085d2aa4 +0x08e:  movl   $0xa,0x8(%esp)
085d2aac +0x096:  mov    0xc(%ebp),%eax
085d2aaf +0x099:  mov    %eax,0x4(%esp)
085d2ab3 +0x09d:  mov    0x8(%ebp),%eax
085d2ab6 +0x0a0:  mov    %eax,(%esp)
085d2ab9 +0x0a3:  call   085d1e62 <_ZN10expert_job11CDisjointer10send_errorEP5CUseri>  ; expert_job::CDisjointer::send_error(CUser*, int)
085d2abe +0x0a8:  mov    0x8(%ebp),%eax
085d2ac1 +0x0ab:  mov    (%eax),%eax
085d2ac3 +0x0ad:  add    $0x4,%eax
085d2ac6 +0x0b0:  mov    (%eax),%ebx
085d2ac8 +0x0b2:  mov    0x8(%ebp),%eax
085d2acb +0x0b5:  add    $0x8,%eax
085d2ace +0x0b8:  mov    %eax,(%esp)
085d2ad1 +0x0bb:  call   082347e0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9e8a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9e8a
085d2ad6 +0x0c0:  movl   $0x0,0x8(%esp)
085d2ade +0x0c8:  mov    %eax,0x4(%esp)
085d2ae2 +0x0cc:  mov    0x8(%ebp),%eax
085d2ae5 +0x0cf:  mov    %eax,(%esp)
085d2ae8 +0x0d2:  call   *%ebx
085d2aea +0x0d4:  movl   $0x4,(%esp)
085d2af1 +0x0db:  call   08725800 <__cxa_allocate_exception>
085d2af6 +0x0e0:  mov    %eax,%edx
085d2af8 +0x0e2:  movl   $0xa,(%edx)
085d2afe +0x0e8:  movl   $0x0,0x8(%esp)
085d2b06 +0x0f0:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
085d2b0e +0x0f8:  mov    %eax,(%esp)
085d2b11 +0x0fb:  call   08724c50 <__cxa_throw>
085d2b16 +0x100:  mov    0x8(%ebp),%eax
085d2b19 +0x103:  mov    %eax,(%esp)
085d2b1c +0x106:  call   085d1f24 <_ZN10expert_job11CDisjointer24check_disjoint_enduranceEv>  ; expert_job::CDisjointer::check_disjoint_endurance()
085d2b21 +0x10b:  xor    $0x1,%eax
085d2b24 +0x10e:  test   %al,%al
085d2b26 +0x110:  je     085d2b6e <+0x158>
085d2b28 +0x112:  movl   $0xbd,0x8(%esp)
085d2b30 +0x11a:  mov    0xc(%ebp),%eax
085d2b33 +0x11d:  mov    %eax,0x4(%esp)
085d2b37 +0x121:  mov    0x8(%ebp),%eax
085d2b3a +0x124:  mov    %eax,(%esp)
085d2b3d +0x127:  call   085d1e62 <_ZN10expert_job11CDisjointer10send_errorEP5CUseri>  ; expert_job::CDisjointer::send_error(CUser*, int)
085d2b42 +0x12c:  movl   $0x4,(%esp)
085d2b49 +0x133:  call   08725800 <__cxa_allocate_exception>
085d2b4e +0x138:  mov    %eax,%edx
085d2b50 +0x13a:  movl   $0xbd,(%edx)
085d2b56 +0x140:  movl   $0x0,0x8(%esp)
085d2b5e +0x148:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
085d2b66 +0x150:  mov    %eax,(%esp)
085d2b69 +0x153:  call   08724c50 <__cxa_throw>
085d2b6e +0x158:  add    $0x14,%esp
085d2b71 +0x15b:  pop    %ebx
085d2b72 +0x15c:  pop    %ebp
085d2b73 +0x15d:  ret
```

## 反编译 C

```c
// expert_job::CDisjointer::OnStartMission @ 0x85d2a16

/* expert_job::CDisjointer::OnStartMission(CUser*, CUser*) */

void __thiscall
expert_job::CDisjointer::OnStartMission(CDisjointer *this,CUser *param_1,CUser *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  
  if (param_1 != param_2) {
    iVar4 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_2);
    iVar5 = CDisjointMachine::get_cost((CDisjointMachine *)(this + 8));
    if (iVar4 < iVar5) {
      bVar2 = true;
      goto LAB_085d2a50;
    }
  }
  bVar2 = false;
LAB_085d2a50:
  if (bVar2) {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x15;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  iVar4 = CDisjointMachine::get_cost((CDisjointMachine *)(this + 8));
  cVar3 = CUser::CheckMoney(param_1,iVar4);
  if (cVar3 != '\x01') {
    send_error(this,param_1,10);
    pcVar1 = *(code **)(*(int *)this + 4);
    uVar7 = CDisjointMachine::get_user((CDisjointMachine *)(this + 8));
    (*pcVar1)(this,uVar7,0);
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 10;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  cVar3 = check_disjoint_endurance(this);
  if (cVar3 != '\x01') {
    send_error(this,param_1,0xbd);
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0xbd;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  return;
}
```
