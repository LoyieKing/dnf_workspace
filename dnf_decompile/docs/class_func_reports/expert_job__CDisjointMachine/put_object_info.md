# put_object_info

`_ZN10expert_job16CDisjointMachine15put_object_infoER11PacketGuard`

`expert_job::CDisjointMachine::put_object_info(PacketGuard&)`

| 类 | 地址 |
|---|---|
| `expert_job::CDisjointMachine` | `0x085d1cc2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d1cc2  _ZN10expert_job16CDisjointMachine15put_object_infoER11PacketGuard
#           expert_job::CDisjointMachine::put_object_info(PacketGuard&)
# range [0x085d1cc2, 0x085d1d3b]
085d1cc2 +0x00:  push   %ebp
085d1cc3 +0x01:  mov    %esp,%ebp
085d1cc5 +0x03:  sub    $0x28,%esp
085d1cc8 +0x06:  mov    0x8(%ebp),%eax
085d1ccb +0x09:  mov    0x14(%eax),%eax
085d1cce +0x0c:  test   %eax,%eax
085d1cd0 +0x0e:  jne    085d1d0f <+0x4d>
085d1cd2 +0x10:  movl   $0x0,0xc(%esp)
085d1cda +0x18:  movl   $0x33,0x8(%esp)
085d1ce2 +0x20:  movl   $&_ZZN10expert_job16CDisjointMachine15put_object_infoER11PacketGuardE19__PRETTY_FUNCTION__,0x4(%esp)
085d1cea +0x28:  lea    -0x18(%ebp),%eax
085d1ced +0x2b:  mov    %eax,(%esp)
085d1cf0 +0x2e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085d1cf5 +0x33:  movl   $"NOTEXIST_ERROR : disjoint_machine_user(null)",0x4(%esp)
085d1cfd +0x3b:  lea    -0x18(%ebp),%eax
085d1d00 +0x3e:  mov    %eax,(%esp)
085d1d03 +0x41:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085d1d08 +0x46:  mov    $0x0,%eax
085d1d0d +0x4b:  jmp    085d1d39 <+0x77>
085d1d0f +0x4d:  mov    0xc(%ebp),%eax
085d1d12 +0x50:  movl   $0x0,0x4(%esp)
085d1d1a +0x58:  mov    %eax,(%esp)
085d1d1d +0x5b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085d1d22 +0x60:  mov    0xc(%ebp),%eax
085d1d25 +0x63:  mov    %eax,0x4(%esp)
085d1d29 +0x67:  mov    0x8(%ebp),%eax
085d1d2c +0x6a:  mov    %eax,(%esp)
085d1d2f +0x6d:  call   085d1bc0 <_ZN10expert_job16CDisjointMachine25put_disjoint_machine_infoER11PacketGuard>  ; expert_job::CDisjointMachine::put_disjoint_machine_info(PacketGuard&)
085d1d34 +0x72:  mov    $0x1,%eax
085d1d39 +0x77:  leave
085d1d3a +0x78:  ret
085d1d3b +0x79:  nop
```

## 反编译 C

```c
// expert_job::CDisjointMachine::put_object_info @ 0x85d1cc2

/* expert_job::CDisjointMachine::put_object_info(PacketGuard&) */

bool __thiscall
expert_job::CDisjointMachine::put_object_info(CDisjointMachine *this,PacketGuard *param_1)

{
  int iVar1;
  cMyTrace local_1c [24];
  
  iVar1 = *(int *)(this + 0x14);
  if (iVar1 != 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,0);
    put_disjoint_machine_info(this,param_1);
  }
  else {
    cMyTrace::cMyTrace(local_1c,
                       "virtual bool expert_job::CDisjointMachine::put_object_info(PacketGuard&)",
                       0x33,0);
    cMyTrace::operator()(local_1c,"NOTEXIST_ERROR : disjoint_machine_user(null)");
  }
  return iVar1 != 0;
}
```
